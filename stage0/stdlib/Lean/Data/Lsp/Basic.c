// Lean compiler output
// Module: Lean.Data.Lsp.Basic
// Imports: public import Lean.Data.Json public import Lean.Data.Lsp.BasicAux public import Init.Data.Option.Coe
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_compare___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_string_hash(lean_object*);
lean_object* l_Lean_Lsp_instToJsonPosition_toJson(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instInhabitedRange_default;
uint8_t lean_string_compare(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instOrdRange_ord(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqRange_beq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instInhabitedLocation_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Lsp_instInhabitedLocation_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedLocation_default___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instInhabitedLocation_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instInhabitedLocation_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_instInhabitedLocation_default;
LEAN_EXPORT lean_object* l_Lean_Lsp_instInhabitedLocation;
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqLocation_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqLocation_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instBEqLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instBEqLocation_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instBEqLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instBEqLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instBEqLocation = (const lean_object*)&l_Lean_Lsp_instBEqLocation___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonLocation_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uri"};
static const lean_object* l_Lean_Lsp_instToJsonLocation_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocation_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lean_Lsp_instToJsonLocation_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__1_value;
static const lean_array_object l_Lean_Lsp_instToJsonLocation_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instToJsonLocation_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocation_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLocation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLocation = (const lean_object*)&l_Lean_Lsp_instToJsonLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Location"};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(12, 37, 85, 10, 186, 200, 38, 42)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 169, 49, 149, 57, 117, 3, 84)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 10, 234, 83, 106, 95, 218, 176)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLocation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLocation = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdLocation_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdLocation_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instOrdLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instOrdLocation_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instOrdLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instOrdLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instOrdLocation = (const lean_object*)&l_Lean_Lsp_instOrdLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLocationLink_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "originSelectionRange"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "targetUri"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "targetRange"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "targetSelectionRange"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLocationLink_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLocationLink = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LocationLink"};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 124, 242, 62, 124, 12, 27, 89)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "originSelectionRange\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 74, 194, 55, 146, 231, 63, 35)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(175, 177, 170, 233, 220, 50, 208, 212)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(45, 64, 248, 134, 128, 146, 245, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(152, 179, 191, 7, 212, 29, 154, 211)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLocationLink_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLocationLink = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonCommand_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Lsp_instToJsonCommand_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonCommand_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Lsp_instToJsonCommand_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonCommand_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "arguments"};
static const lean_object* l_Lean_Lsp_instToJsonCommand_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCommand_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCommand_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonCommand_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonCommand___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonCommand = (const lean_object*)&l_Lean_Lsp_instToJsonCommand___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 221, 30, 152, 116, 110, 187, 228)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 99, 171, 63, 21, 188, 124, 202)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11;
static const lean_string_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arguments\?"};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(221, 101, 169, 240, 246, 136, 10, 251)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonCommand_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonCommand___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonCommand = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSnippetString_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonSnippetString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonSnippetString_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonSnippetString___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonSnippetString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonSnippetString = (const lean_object*)&l_Lean_Lsp_instToJsonSnippetString___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SnippetString"};
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 167, 3, 44, 46, 125, 236, 78)}};
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 65, 47, 208, 134, 160, 30, 25)}};
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonSnippetString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonSnippetString_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonSnippetString = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "newText"};
static const lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "leanExtSnippet"};
static const lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "annotationId"};
static const lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextEdit_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextEdit = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TextEdit"};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 98, 67, 125, 163, 99, 155, 129)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 243, 28, 135, 144, 87, 14, 78)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "leanExtSnippet\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(177, 115, 84, 239, 31, 238, 106, 122)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14;
static const lean_string_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "annotationId\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15_value),LEAN_SCALAR_PTR_LITERAL(37, 162, 73, 47, 154, 76, 17, 22)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextEdit_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextEdit = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextEditBatch = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEditBatch___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_toJson___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextEdit___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextEditBatch = (const lean_object*)&l_Lean_Lsp_instToJsonTextEditBatch___closed__0_value;
static const lean_array_object l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instEmptyCollectionTextEditBatch = (const lean_object*)&l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instAppendTextEditBatch___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instAppendTextEditBatch___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instAppendTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instAppendTextEditBatch___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instAppendTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instAppendTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instAppendTextEditBatch = (const lean_object*)&l_Lean_Lsp_instAppendTextEditBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instCoeTextEditTextEditBatch___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch = (const lean_object*)&l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "TextDocumentIdentifier"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 38, 97, 8, 168, 165, 246, 123)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "VersionedTextDocumentIdentifier"};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 213, 117, 64, 157, 88, 14, 128)}};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "version\?"};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(251, 148, 229, 74, 154, 149, 54, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "textDocument"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "edits"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentEdit_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "TextDocumentEdit"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 209, 213, 215, 209, 99, 14, 164)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 223, 21, 223, 122, 31, 128, 254)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(31, 84, 119, 36, 206, 155, 200, 147)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "needsConfirmation"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "description"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonChangeAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonChangeAnnotation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ChangeAnnotation"};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 29, 38, 56, 166, 211, 67, 130)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 195, 177, 11, 70, 212, 216, 195)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 228, 249, 245, 195, 42, 25, 231)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11;
static const lean_string_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "description\?"};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(153, 157, 232, 40, 135, 180, 81, 193)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "overwrite"};
static const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ignoreIfExists"};
static const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CreateFile"};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Options"};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 28, 133, 85, 52, 115, 205, 71)}};
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_2),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(53, 167, 246, 247, 255, 188, 202, 139)}};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 87, 170, 114, 241, 70, 204, 130)}};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8;
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 134, 117, 77, 156, 66, 145, 205)}};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12;
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursive"};
static const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ignoreIfNotExists"};
static const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "DeleteFile"};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 170, 69, 207, 171, 46, 13)}};
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_2),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 176, 229, 133, 131, 198, 118, 8)}};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 70, 223, 116, 74, 127, 72, 80)}};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(4, 158, 228, 176, 92, 223, 55, 182)}};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "options"};
static const lean_object* l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCreateFile_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonCreateFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonCreateFile_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonCreateFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCreateFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonCreateFile = (const lean_object*)&l_Lean_Lsp_instToJsonCreateFile___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_1),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 28, 133, 85, 52, 115, 205, 71)}};
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "options\?"};
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(86, 227, 221, 148, 173, 251, 188, 232)}};
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonCreateFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonCreateFile_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonCreateFile = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "oldUri"};
static const lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "newUri"};
static const lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonRenameFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRenameFile_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRenameFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonRenameFile = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "RenameFile"};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 122, 246, 46, 146, 210, 110, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 34, 198, 243, 229, 35, 216, 220)}};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(124, 1, 162, 227, 227, 137, 70, 155)}};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonRenameFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRenameFile_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonRenameFile = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeleteFile_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDeleteFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDeleteFile_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDeleteFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDeleteFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDeleteFile = (const lean_object*)&l_Lean_Lsp_instToJsonDeleteFile___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_1),((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 170, 69, 207, 171, 46, 13)}};
static const lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDeleteFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDeleteFile_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDeleteFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDeleteFile = (const lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "create"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rename"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5_value)}};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDocumentChange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDocumentChange___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDocumentChange = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unrecognized kind: "};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentChange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentChange___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentChange___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentChange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentChange___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentChange___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDocumentChange = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "changes"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "documentChanges"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "changeAnnotations"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkspaceEdit_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0_value;
static const lean_closure_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "WorkspaceEdit"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 53, 41, 159, 108, 63, 180, 34)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "changes\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(170, 115, 240, 184, 226, 123, 111, 156)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "documentChanges\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(98, 237, 212, 122, 169, 183, 78, 106)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "changeAnnotations\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(173, 82, 27, 192, 32, 217, 85, 156)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_WorkspaceEdit_instEmptyCollection = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_WorkspaceEdit_instAppend___lam__1, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value)} };
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0_value;
static const lean_closure_object l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_WorkspaceEdit_instAppend___lam__3, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value)} };
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextDocumentEdit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "edit"};
static const lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams = (const lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ApplyWorkspaceEditParams"};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 203, 7, 144, 87, 77, 77, 21)}};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "label\?"};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 151, 242, 23, 214, 92, 131, 60)}};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8;
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 25, 214, 57, 9, 124, 16, 157)}};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "languageId"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentItem_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "TextDocumentItem"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 222, 104, 203, 181, 123, 142, 128)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 221, 17, 12, 58, 230, 139, 137)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 50, 73, 160, 48, 142, 108)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 32, 191, 158, 22, 157, 236, 165)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "position"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "TextDocumentPositionParams"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 35, 84, 107, 140, 105, 155, 176)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 172, 67, 66, 136, 94, 119, 158)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams = (const lean_object*)&l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "language"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scheme"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pattern"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDocumentFilter_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDocumentFilter = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "DocumentFilter"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 157, 11, 58, 62, 79, 241, 202)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "language\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(233, 71, 114, 86, 193, 11, 227, 251)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scheme\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(74, 1, 75, 28, 84, 23, 43, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pattern\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(67, 60, 32, 224, 244, 193, 130, 57)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentFilter_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentSelector___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentSelector___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDocumentSelector = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentSelector___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonDocumentSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_toJson___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonDocumentSelector___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentSelector___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDocumentSelector = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentSelector___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "StaticRegistrationOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 234, 254, 241, 255, 41, 26, 245)}};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "id\?"};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(119, 56, 220, 73, 171, 75, 97, 56)}};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "documentSelector"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "TextDocumentRegistrationOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 175, 91, 79, 225, 82, 151, 24)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "documentSelector\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 242, 138, 38, 210, 232, 124, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_MarkupKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupKind_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupKind_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableMarkupKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableMarkupKind_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableMarkupKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableMarkupKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableMarkupKind = (const lean_object*)&l_Lean_Lsp_instHashableMarkupKind___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown MarkupKind"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "plaintext"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2_value;
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "markdown"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonMarkupKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonMarkupKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonMarkupKind = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonMarkupKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonMarkupKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonMarkupKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonMarkupKind = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonMarkupContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonMarkupContent_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonMarkupContent___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupContent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonMarkupContent = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupContent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MarkupContent"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 181, 133, 8, 53, 221, 67, 106)}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 186, 66, 236, 16, 221, 215, 158)}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonMarkupContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonMarkupContent_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonMarkupContent = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupContent_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupContent_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableMarkupContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableMarkupContent_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableMarkupContent___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableMarkupContent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableMarkupContent = (const lean_object*)&l_Lean_Lsp_instHashableMarkupContent___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cancellable"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "percentage"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressBegin_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressEnd_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "workDoneToken"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "WorkDoneProgressParams"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 48, 2, 139, 191, 231, 94, 9)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "workDoneToken\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 131, 217, 139, 108, 77, 104, 24)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "partialResultToken"};
static const lean_object* l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonPartialResultParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonPartialResultParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonPartialResultParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonPartialResultParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonPartialResultParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonPartialResultParams = (const lean_object*)&l_Lean_Lsp_instToJsonPartialResultParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "PartialResultParams"};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 225, 75, 153, 56, 162, 219, 65)}};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "partialResultToken\?"};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(29, 35, 64, 120, 46, 112, 112, 255)}};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonPartialResultParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonPartialResultParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "workDoneProgress"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "WorkDoneProgressOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 128, 234, 9, 207, 171, 228, 26)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 28, 234, 148, 40, 91, 235, 8)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "properties"};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ResolveSupport"};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(167, 30, 224, 186, 11, 21, 232, 51)}};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 175, 253, 162, 13, 144, 103, 64)}};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonResolveSupport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonResolveSupport_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonResolveSupport = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolveSupport_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolveSupport_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonResolveSupport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonResolveSupport_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonResolveSupport___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonResolveSupport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonResolveSupport = (const lean_object*)&l_Lean_Lsp_instToJsonResolveSupport___closed__0_value;
static lean_object* _init_l_Lean_Lsp_instInhabitedLocation_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = l_Lean_Lsp_instInhabitedRange_default;
v___x_3_ = ((lean_object*)(l_Lean_Lsp_instInhabitedLocation_default___closed__0));
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
lean_ctor_set(v___x_4_, 1, v___x_2_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedLocation_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Lsp_instInhabitedLocation_default___closed__1, &l_Lean_Lsp_instInhabitedLocation_default___closed__1_once, _init_l_Lean_Lsp_instInhabitedLocation_default___closed__1);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedLocation(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Lsp_instInhabitedLocation_default;
return v___x_6_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqLocation_beq(lean_object* v_x_7_, lean_object* v_x_8_){
_start:
{
lean_object* v_uri_9_; lean_object* v_range_10_; lean_object* v_uri_11_; lean_object* v_range_12_; uint8_t v___x_13_; 
v_uri_9_ = lean_ctor_get(v_x_7_, 0);
v_range_10_ = lean_ctor_get(v_x_7_, 1);
v_uri_11_ = lean_ctor_get(v_x_8_, 0);
v_range_12_ = lean_ctor_get(v_x_8_, 1);
v___x_13_ = lean_string_dec_eq(v_uri_9_, v_uri_11_);
if (v___x_13_ == 0)
{
return v___x_13_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = l_Lean_Lsp_instBEqRange_beq(v_range_10_, v_range_12_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqLocation_beq___boxed(lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_Lsp_instBEqLocation_beq(v_x_15_, v_x_16_);
lean_dec_ref(v_x_16_);
lean_dec_ref(v_x_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(lean_object* v_a_21_, lean_object* v_a_22_){
_start:
{
if (lean_obj_tag(v_a_21_) == 0)
{
lean_object* v___x_23_; 
v___x_23_ = lean_array_to_list(v_a_22_);
return v___x_23_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v___x_26_; 
v_head_24_ = lean_ctor_get(v_a_21_, 0);
lean_inc(v_head_24_);
v_tail_25_ = lean_ctor_get(v_a_21_, 1);
lean_inc(v_tail_25_);
lean_dec_ref_known(v_a_21_, 2);
v___x_26_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_22_, v_head_24_);
v_a_21_ = v_tail_25_;
v_a_22_ = v___x_26_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocation_toJson(lean_object* v_x_32_){
_start:
{
lean_object* v_uri_33_; lean_object* v_range_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_54_; 
v_uri_33_ = lean_ctor_get(v_x_32_, 0);
v_range_34_ = lean_ctor_get(v_x_32_, 1);
v_isSharedCheck_54_ = !lean_is_exclusive(v_x_32_);
if (v_isSharedCheck_54_ == 0)
{
v___x_36_ = v_x_32_;
v_isShared_37_ = v_isSharedCheck_54_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_range_34_);
lean_inc(v_uri_33_);
lean_dec(v_x_32_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_54_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_38_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_39_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_39_, 0, v_uri_33_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v___x_39_);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_41_ = v___x_36_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v___x_39_);
v___x_41_ = v_reuseFailAlloc_53_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_42_ = lean_box(0);
v___x_43_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_41_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
v___x_45_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_34_);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_42_);
v___x_48_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_42_);
v___x_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_43_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_51_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_49_, v___x_50_);
v___x_52_ = l_Lean_Json_mkObj(v___x_51_);
lean_dec(v___x_51_);
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(lean_object* v_j_57_, lean_object* v_k_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = l_Lean_Json_getObjValD(v_j_57_, v_k_58_);
v___x_60_ = l_Lean_Json_getStr_x3f(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0___boxed(lean_object* v_j_61_, lean_object* v_k_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_j_61_, v_k_62_);
lean_dec_ref(v_k_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(lean_object* v_j_64_, lean_object* v_k_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = l_Lean_Json_getObjValD(v_j_64_, v_k_65_);
v___x_67_ = l_Lean_Lsp_instFromJsonRange_fromJson(v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1___boxed(lean_object* v_j_68_, lean_object* v_k_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_j_68_, v_k_69_);
lean_dec_ref(v_k_69_);
return v_res_70_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4(void){
_start:
{
uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = 1;
v___x_79_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3));
v___x_80_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_83_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4);
v___x_84_ = lean_string_append(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8(void){
_start:
{
uint8_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = 1;
v___x_88_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7));
v___x_89_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_91_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6);
v___x_92_ = lean_string_append(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_95_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9);
v___x_96_ = lean_string_append(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13(void){
_start:
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = 1;
v___x_100_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12));
v___x_101_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13);
v___x_103_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6);
v___x_104_ = lean_string_append(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_106_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14);
v___x_107_ = lean_string_append(v___x_106_, v___x_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson(lean_object* v_json_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_108_);
v___x_110_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_108_, v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_120_; 
lean_dec(v_json_108_);
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_120_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_120_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_120_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_115_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11);
v___x_116_ = lean_string_append(v___x_115_, v_a_111_);
lean_dec(v_a_111_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_116_);
v___x_118_ = v___x_113_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec(v_json_108_);
v_a_121_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_110_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_110_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_a_129_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_129_);
lean_dec_ref_known(v___x_110_, 1);
v___x_130_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
v___x_131_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_108_, v___x_130_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_141_; 
lean_dec(v_a_129_);
v_a_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_141_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_136_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15);
v___x_137_ = lean_string_append(v___x_136_, v_a_132_);
lean_dec(v_a_132_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_137_);
v___x_139_ = v___x_134_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
lean_dec(v_a_129_);
v_a_142_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_131_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_131_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set_tag(v___x_144_, 0);
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_158_; 
v_a_150_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_158_ == 0)
{
v___x_152_ = v___x_131_;
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_131_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_a_129_);
lean_ctor_set(v___x_154_, 1, v_a_150_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_154_);
v___x_156_ = v___x_152_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdLocation_ord(lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
lean_object* v_uri_163_; lean_object* v_range_164_; lean_object* v_uri_165_; lean_object* v_range_166_; uint8_t v___x_167_; 
v_uri_163_ = lean_ctor_get(v_x_161_, 0);
v_range_164_ = lean_ctor_get(v_x_161_, 1);
v_uri_165_ = lean_ctor_get(v_x_162_, 0);
v_range_166_ = lean_ctor_get(v_x_162_, 1);
v___x_167_ = lean_string_compare(v_uri_163_, v_uri_165_);
if (v___x_167_ == 1)
{
uint8_t v___x_168_; 
v___x_168_ = l_Lean_Lsp_instOrdRange_ord(v_range_164_, v_range_166_);
if (v___x_168_ == 1)
{
return v___x_168_;
}
else
{
return v___x_168_;
}
}
else
{
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdLocation_ord___boxed(lean_object* v_x_169_, lean_object* v_x_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Lean_Lsp_instOrdLocation_ord(v_x_169_, v_x_170_);
lean_dec_ref(v_x_170_);
lean_dec_ref(v_x_169_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLocationLink_toJson_spec__0(lean_object* v_k_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_176_) == 0)
{
lean_object* v___x_177_; 
lean_dec_ref(v_k_175_);
v___x_177_ = lean_box(0);
return v___x_177_;
}
else
{
lean_object* v_val_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_val_178_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_val_178_);
lean_dec_ref_known(v_x_176_, 1);
v___x_179_ = l_Lean_Lsp_instToJsonRange_toJson(v_val_178_);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_k_175_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson(lean_object* v_x_187_){
_start:
{
lean_object* v_originSelectionRange_x3f_188_; lean_object* v_targetUri_189_; lean_object* v_targetRange_190_; lean_object* v_targetSelectionRange_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_originSelectionRange_x3f_188_ = lean_ctor_get(v_x_187_, 0);
lean_inc(v_originSelectionRange_x3f_188_);
v_targetUri_189_ = lean_ctor_get(v_x_187_, 1);
lean_inc_ref(v_targetUri_189_);
v_targetRange_190_ = lean_ctor_get(v_x_187_, 2);
lean_inc_ref(v_targetRange_190_);
v_targetSelectionRange_191_ = lean_ctor_get(v_x_187_, 3);
lean_inc_ref(v_targetSelectionRange_191_);
lean_dec_ref(v_x_187_);
v___x_192_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0));
v___x_193_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLocationLink_toJson_spec__0(v___x_192_, v_originSelectionRange_x3f_188_);
v___x_194_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1));
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v_targetUri_189_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_box(0);
v___x_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2));
v___x_200_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetRange_190_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_199_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v___x_197_);
v___x_203_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3));
v___x_204_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetSelectionRange_191_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_197_);
v___x_207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_197_);
v___x_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_202_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_198_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_193_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_212_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_210_, v___x_211_);
v___x_213_ = l_Lean_Json_mkObj(v___x_212_);
lean_dec(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0(lean_object* v_x_218_){
_start:
{
if (lean_obj_tag(v_x_218_) == 0)
{
lean_object* v___x_219_; 
v___x_219_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0));
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_x_218_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_220_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_220_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_237_; 
v_a_229_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_237_ == 0)
{
v___x_231_ = v___x_220_;
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_220_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v_a_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_235_ = v___x_231_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(lean_object* v_j_238_, lean_object* v_k_239_){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = l_Lean_Json_getObjValD(v_j_238_, v_k_239_);
v___x_241_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0___boxed(lean_object* v_j_242_, lean_object* v_k_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(v_j_242_, v_k_243_);
lean_dec_ref(v_k_243_);
return v_res_244_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2(void){
_start:
{
uint8_t v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = 1;
v___x_251_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1));
v___x_252_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_251_, v___x_250_);
return v___x_252_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_254_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2);
v___x_255_ = lean_string_append(v___x_254_, v___x_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6(void){
_start:
{
uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = 1;
v___x_260_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5));
v___x_261_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_260_, v___x_259_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6);
v___x_263_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_264_ = lean_string_append(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_266_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7);
v___x_267_ = lean_string_append(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10(void){
_start:
{
uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = 1;
v___x_271_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9));
v___x_272_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10);
v___x_274_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_275_ = lean_string_append(v___x_274_, v___x_273_);
return v___x_275_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_277_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11);
v___x_278_ = lean_string_append(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14(void){
_start:
{
uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = 1;
v___x_282_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13));
v___x_283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14);
v___x_285_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_286_ = lean_string_append(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_287_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_288_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15);
v___x_289_ = lean_string_append(v___x_288_, v___x_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18(void){
_start:
{
uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = 1;
v___x_293_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17));
v___x_294_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_293_, v___x_292_);
return v___x_294_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18);
v___x_296_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_297_ = lean_string_append(v___x_296_, v___x_295_);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_299_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19);
v___x_300_ = lean_string_append(v___x_299_, v___x_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson(lean_object* v_json_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0));
lean_inc(v_json_301_);
v___x_303_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(v_json_301_, v___x_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_313_; 
lean_dec(v_json_301_);
v_a_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_313_ == 0)
{
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_313_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_313_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_308_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8);
v___x_309_ = lean_string_append(v___x_308_, v_a_304_);
lean_dec(v_a_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_309_);
v___x_311_ = v___x_306_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
else
{
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_json_301_);
v_a_314_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_303_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_303_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 0);
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_a_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_a_322_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_303_, 1);
v___x_323_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1));
lean_inc(v_json_301_);
v___x_324_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_301_, v___x_323_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_334_; 
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_334_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_329_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12);
v___x_330_ = lean_string_append(v___x_329_, v_a_325_);
lean_dec(v_a_325_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_330_);
v___x_332_ = v___x_327_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_335_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_324_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_324_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set_tag(v___x_337_, 0);
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_343_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v___x_324_, 1);
v___x_344_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2));
lean_inc(v_json_301_);
v___x_345_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_301_, v___x_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_a_343_);
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_355_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_350_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16);
v___x_351_ = lean_string_append(v___x_350_, v_a_346_);
lean_dec(v_a_346_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_351_);
v___x_353_ = v___x_348_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_a_343_);
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_356_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_345_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_345_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 0);
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_364_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_345_, 1);
v___x_365_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3));
v___x_366_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_301_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_376_; 
lean_dec(v_a_364_);
lean_dec(v_a_343_);
lean_dec(v_a_322_);
v_a_367_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_376_ == 0)
{
v___x_369_ = v___x_366_;
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_371_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20);
v___x_372_ = lean_string_append(v___x_371_, v_a_367_);
lean_dec(v_a_367_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v___x_372_);
v___x_374_ = v___x_369_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_a_364_);
lean_dec(v_a_343_);
lean_dec(v_a_322_);
v_a_377_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_366_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_366_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 0);
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_393_; 
v_a_385_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_393_ == 0)
{
v___x_387_ = v___x_366_;
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_366_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_389_, 0, v_a_322_);
lean_ctor_set(v___x_389_, 1, v_a_343_);
lean_ctor_set(v___x_389_, 2, v_a_364_);
lean_ctor_set(v___x_389_, 3, v_a_385_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_389_);
v___x_391_ = v___x_387_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(size_t v_sz_396_, size_t v_i_397_, lean_object* v_bs_398_){
_start:
{
uint8_t v___x_399_; 
v___x_399_ = lean_usize_dec_lt(v_i_397_, v_sz_396_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; 
v___x_400_ = l_unsafeCast___redArg(v_bs_398_);
lean_dec_ref(v_bs_398_);
return v___x_400_;
}
else
{
lean_object* v_v_401_; lean_object* v___x_402_; lean_object* v_bs_x27_403_; lean_object* v___x_404_; size_t v___x_405_; size_t v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_v_401_ = lean_array_uget(v_bs_398_, v_i_397_);
v___x_402_ = lean_unsigned_to_nat(0u);
v_bs_x27_403_ = lean_array_uset(v_bs_398_, v_i_397_, v___x_402_);
v___x_404_ = l_unsafeCast___redArg(v_v_401_);
lean_dec(v_v_401_);
v___x_405_ = ((size_t)1ULL);
v___x_406_ = lean_usize_add(v_i_397_, v___x_405_);
v___x_407_ = l_unsafeCast___redArg(v___x_404_);
lean_dec(v___x_404_);
v___x_408_ = lean_array_uset(v_bs_x27_403_, v_i_397_, v___x_407_);
v_i_397_ = v___x_406_;
v_bs_398_ = v___x_408_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_410_, lean_object* v_i_411_, lean_object* v_bs_412_){
_start:
{
size_t v_sz_boxed_413_; size_t v_i_boxed_414_; lean_object* v_res_415_; 
v_sz_boxed_413_ = lean_unbox_usize(v_sz_410_);
lean_dec(v_sz_410_);
v_i_boxed_414_ = lean_unbox_usize(v_i_411_);
lean_dec(v_i_411_);
v_res_415_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(v_sz_boxed_413_, v_i_boxed_414_, v_bs_412_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(lean_object* v_a_416_){
_start:
{
size_t v_sz_417_; size_t v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_sz_417_ = lean_array_size(v_a_416_);
v___x_418_ = ((size_t)0ULL);
v___x_419_ = l_unsafeCast___redArg(v_a_416_);
v___x_420_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(v_sz_417_, v___x_418_, v___x_419_);
v___x_421_ = l_unsafeCast___redArg(v___x_420_);
lean_dec_ref(v___x_420_);
v___x_422_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0___boxed(lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(v_a_423_);
lean_dec_ref(v_a_423_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(lean_object* v_k_425_, lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_426_) == 0)
{
lean_object* v___x_427_; 
lean_dec_ref(v_k_425_);
v___x_427_ = lean_box(0);
return v___x_427_;
}
else
{
lean_object* v_val_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_val_428_ = lean_ctor_get(v_x_426_, 0);
v___x_429_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(v_val_428_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v_k_425_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_box(0);
v___x_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0___boxed(lean_object* v_k_433_, lean_object* v_x_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(v_k_433_, v_x_434_);
lean_dec(v_x_434_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCommand_toJson(lean_object* v_x_439_){
_start:
{
lean_object* v_title_440_; lean_object* v_command_441_; lean_object* v_arguments_x3f_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v_title_440_ = lean_ctor_get(v_x_439_, 0);
v_command_441_ = lean_ctor_get(v_x_439_, 1);
v_arguments_x3f_442_ = lean_ctor_get(v_x_439_, 2);
v___x_443_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__0));
lean_inc_ref(v_title_440_);
v___x_444_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_444_, 0, v_title_440_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = lean_box(0);
v___x_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_445_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__1));
lean_inc_ref(v_command_441_);
v___x_449_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_449_, 0, v_command_441_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_446_);
v___x_452_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__2));
v___x_453_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(v___x_452_, v_arguments_x3f_442_);
v___x_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___x_446_);
v___x_455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_451_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_447_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_458_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_456_, v___x_457_);
v___x_459_ = l_Lean_Json_mkObj(v___x_458_);
lean_dec(v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCommand_toJson___boxed(lean_object* v_x_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_Lsp_instToJsonCommand_toJson(v_x_460_);
lean_dec_ref(v_x_460_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(size_t v_sz_464_, size_t v_i_465_, lean_object* v_bs_466_){
_start:
{
uint8_t v___x_467_; 
v___x_467_ = lean_usize_dec_lt(v_i_465_, v_sz_464_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = l_unsafeCast___redArg(v_bs_466_);
lean_dec_ref(v_bs_466_);
v___x_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
else
{
lean_object* v_v_470_; lean_object* v___x_471_; lean_object* v_bs_x27_472_; lean_object* v___x_473_; size_t v___x_474_; size_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_v_470_ = lean_array_uget(v_bs_466_, v_i_465_);
v___x_471_ = lean_unsigned_to_nat(0u);
v_bs_x27_472_ = lean_array_uset(v_bs_466_, v_i_465_, v___x_471_);
v___x_473_ = l_unsafeCast___redArg(v_v_470_);
lean_dec(v_v_470_);
v___x_474_ = ((size_t)1ULL);
v___x_475_ = lean_usize_add(v_i_465_, v___x_474_);
v___x_476_ = l_unsafeCast___redArg(v___x_473_);
lean_dec(v___x_473_);
v___x_477_ = lean_array_uset(v_bs_x27_472_, v_i_465_, v___x_476_);
v_i_465_ = v___x_475_;
v_bs_466_ = v___x_477_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_479_, lean_object* v_i_480_, lean_object* v_bs_481_){
_start:
{
size_t v_sz_boxed_482_; size_t v_i_boxed_483_; lean_object* v_res_484_; 
v_sz_boxed_482_ = lean_unbox_usize(v_sz_479_);
lean_dec(v_sz_479_);
v_i_boxed_483_ = lean_unbox_usize(v_i_480_);
lean_dec(v_i_480_);
v_res_484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_482_, v_i_boxed_483_, v_bs_481_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 4)
{
lean_object* v_elems_488_; size_t v_sz_489_; size_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_elems_488_ = lean_ctor_get(v_x_487_, 0);
lean_inc_ref(v_elems_488_);
lean_dec_ref_known(v_x_487_, 1);
v_sz_489_ = lean_array_size(v_elems_488_);
v___x_490_ = ((size_t)0ULL);
v___x_491_ = l_unsafeCast___redArg(v_elems_488_);
lean_dec_ref(v_elems_488_);
v___x_492_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_489_, v___x_490_, v___x_491_);
v___x_493_ = l_unsafeCast___redArg(v___x_492_);
lean_dec_ref(v___x_492_);
return v___x_493_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_494_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_495_ = lean_unsigned_to_nat(80u);
v___x_496_ = l_Lean_Json_pretty(v_x_487_, v___x_495_);
v___x_497_ = lean_string_append(v___x_494_, v___x_496_);
lean_dec_ref(v___x_496_);
v___x_498_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0(lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 0)
{
lean_object* v___x_504_; 
v___x_504_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0));
return v___x_504_;
}
else
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1(v_x_503_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_522_; 
v_a_514_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_522_ == 0)
{
v___x_516_ = v___x_505_;
v_isShared_517_ = v_isSharedCheck_522_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_505_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_522_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_520_; 
v___x_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_518_, 0, v_a_514_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_518_);
v___x_520_ = v___x_516_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(lean_object* v_j_523_, lean_object* v_k_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = l_Lean_Json_getObjValD(v_j_523_, v_k_524_);
v___x_526_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0(v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0___boxed(lean_object* v_j_527_, lean_object* v_k_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(v_j_527_, v_k_528_);
lean_dec_ref(v_k_528_);
return v_res_529_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2(void){
_start:
{
uint8_t v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = 1;
v___x_536_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1));
v___x_537_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_536_, v___x_535_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_538_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_539_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2);
v___x_540_ = lean_string_append(v___x_539_, v___x_538_);
return v___x_540_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5(void){
_start:
{
uint8_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = 1;
v___x_544_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4));
v___x_545_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_544_, v___x_543_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_546_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5);
v___x_547_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3);
v___x_548_ = lean_string_append(v___x_547_, v___x_546_);
return v___x_548_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_549_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_550_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6);
v___x_551_ = lean_string_append(v___x_550_, v___x_549_);
return v___x_551_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9(void){
_start:
{
uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = 1;
v___x_555_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8));
v___x_556_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_555_, v___x_554_);
return v___x_556_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_557_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9);
v___x_558_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3);
v___x_559_ = lean_string_append(v___x_558_, v___x_557_);
return v___x_559_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_561_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10);
v___x_562_ = lean_string_append(v___x_561_, v___x_560_);
return v___x_562_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14(void){
_start:
{
uint8_t v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_566_ = 1;
v___x_567_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13));
v___x_568_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_567_, v___x_566_);
return v___x_568_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14);
v___x_570_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3);
v___x_571_ = lean_string_append(v___x_570_, v___x_569_);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_573_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15);
v___x_574_ = lean_string_append(v___x_573_, v___x_572_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson(lean_object* v_json_575_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__0));
lean_inc(v_json_575_);
v___x_577_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_575_, v___x_576_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_587_; 
lean_dec(v_json_575_);
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_587_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_587_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_587_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_582_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7);
v___x_583_ = lean_string_append(v___x_582_, v_a_578_);
lean_dec(v_a_578_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_583_);
v___x_585_ = v___x_580_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
else
{
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
lean_dec(v_json_575_);
v_a_588_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_577_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_577_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set_tag(v___x_590_, 0);
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_a_596_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_577_, 1);
v___x_597_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__1));
lean_inc(v_json_575_);
v___x_598_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_575_, v___x_597_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_608_; 
lean_dec(v_a_596_);
lean_dec(v_json_575_);
v_a_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_608_ == 0)
{
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_603_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11);
v___x_604_ = lean_string_append(v___x_603_, v_a_599_);
lean_dec(v_a_599_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
else
{
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec(v_a_596_);
lean_dec(v_json_575_);
v_a_609_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_598_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_598_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
lean_ctor_set_tag(v___x_611_, 0);
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_a_617_ = lean_ctor_get(v___x_598_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_598_, 1);
v___x_618_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__2));
v___x_619_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(v_json_575_, v___x_618_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_629_; 
lean_dec(v_a_617_);
lean_dec(v_a_596_);
v_a_620_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_629_ == 0)
{
v___x_622_ = v___x_619_;
v_isShared_623_ = v_isSharedCheck_629_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_619_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_629_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_624_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16);
v___x_625_ = lean_string_append(v___x_624_, v_a_620_);
lean_dec(v_a_620_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_625_);
v___x_627_ = v___x_622_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
else
{
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec(v_a_617_);
lean_dec(v_a_596_);
v_a_630_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_619_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_619_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set_tag(v___x_632_, 0);
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_646_; 
v_a_638_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_646_ == 0)
{
v___x_640_ = v___x_619_;
v_isShared_641_ = v_isSharedCheck_646_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_619_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_646_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_642_, 0, v_a_596_);
lean_ctor_set(v___x_642_, 1, v_a_617_);
lean_ctor_set(v___x_642_, 2, v_a_638_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_642_);
v___x_644_ = v___x_640_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_642_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSnippetString_toJson(lean_object* v_x_650_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_651_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_652_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_652_, 0, v_x_650_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_box(0);
v___x_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_653_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
lean_ctor_set(v___x_656_, 1, v___x_654_);
v___x_657_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_658_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_656_, v___x_657_);
v___x_659_ = l_Lean_Json_mkObj(v___x_658_);
lean_dec(v___x_658_);
return v___x_659_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2(void){
_start:
{
uint8_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_667_ = 1;
v___x_668_ = ((lean_object*)(l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1));
v___x_669_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_668_, v___x_667_);
return v___x_669_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_671_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2);
v___x_672_ = lean_string_append(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5(void){
_start:
{
uint8_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = 1;
v___x_676_ = ((lean_object*)(l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4));
v___x_677_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_676_, v___x_675_);
return v___x_677_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5);
v___x_679_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3);
v___x_680_ = lean_string_append(v___x_679_, v___x_678_);
return v___x_680_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_682_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6);
v___x_683_ = lean_string_append(v___x_682_, v___x_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson(lean_object* v_json_684_){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_686_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_684_, v___x_685_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_696_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_696_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_696_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_696_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_691_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7);
v___x_692_ = lean_string_append(v___x_691_, v_a_687_);
lean_dec(v_a_687_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_692_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
else
{
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
v_a_697_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_686_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_686_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
lean_ctor_set_tag(v___x_699_, 0);
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
v_a_705_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_686_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_686_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__0(lean_object* v_k_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
lean_object* v___x_717_; 
lean_dec_ref(v_k_715_);
v___x_717_ = lean_box(0);
return v___x_717_;
}
else
{
lean_object* v_val_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_val_718_ = lean_ctor_get(v_x_716_, 0);
lean_inc(v_val_718_);
lean_dec_ref_known(v_x_716_, 1);
v___x_719_ = l_Lean_Lsp_instToJsonSnippetString_toJson(v_val_718_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v_k_715_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_box(0);
v___x_722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(lean_object* v_k_723_, lean_object* v_x_724_){
_start:
{
if (lean_obj_tag(v_x_724_) == 0)
{
lean_object* v___x_725_; 
lean_dec_ref(v_k_723_);
v___x_725_ = lean_box(0);
return v___x_725_;
}
else
{
lean_object* v_val_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_736_; 
v_val_726_ = lean_ctor_get(v_x_724_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_724_);
if (v_isSharedCheck_736_ == 0)
{
v___x_728_ = v_x_724_;
v_isShared_729_ = v_isSharedCheck_736_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_val_726_);
lean_dec(v_x_724_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_736_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set_tag(v___x_728_, 3);
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_val_726_);
v___x_731_ = v_reuseFailAlloc_735_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v_k_723_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = lean_box(0);
v___x_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_732_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
return v___x_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson(lean_object* v_x_740_){
_start:
{
lean_object* v_range_741_; lean_object* v_newText_742_; lean_object* v_leanExtSnippet_x3f_743_; lean_object* v_annotationId_x3f_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_range_741_ = lean_ctor_get(v_x_740_, 0);
lean_inc_ref(v_range_741_);
v_newText_742_ = lean_ctor_get(v_x_740_, 1);
lean_inc_ref(v_newText_742_);
v_leanExtSnippet_x3f_743_ = lean_ctor_get(v_x_740_, 2);
lean_inc(v_leanExtSnippet_x3f_743_);
v_annotationId_x3f_744_ = lean_ctor_get(v_x_740_, 3);
lean_inc(v_annotationId_x3f_744_);
lean_dec_ref(v_x_740_);
v___x_745_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
v___x_746_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_741_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_745_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
v___x_748_ = lean_box(0);
v___x_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_747_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0));
v___x_751_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_751_, 0, v_newText_742_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_750_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_748_);
v___x_754_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1));
v___x_755_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__0(v___x_754_, v_leanExtSnippet_x3f_743_);
v___x_756_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_757_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_756_, v_annotationId_x3f_744_);
v___x_758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
lean_ctor_set(v___x_758_, 1, v___x_748_);
v___x_759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_755_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_753_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_749_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v___x_762_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_763_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_761_, v___x_762_);
v___x_764_ = l_Lean_Json_mkObj(v___x_763_);
lean_dec(v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0(lean_object* v_x_769_){
_start:
{
if (lean_obj_tag(v_x_769_) == 0)
{
lean_object* v___x_770_; 
v___x_770_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0));
return v___x_770_;
}
else
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_Lsp_instFromJsonSnippetString_fromJson(v_x_769_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_788_; 
v_a_780_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_788_ == 0)
{
v___x_782_ = v___x_771_;
v_isShared_783_ = v_isSharedCheck_788_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_771_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_788_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v_a_780_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v___x_784_);
v___x_786_ = v___x_782_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(lean_object* v_j_789_, lean_object* v_k_790_){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = l_Lean_Json_getObjValD(v_j_789_, v_k_790_);
v___x_792_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0(v___x_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0___boxed(lean_object* v_j_793_, lean_object* v_k_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(v_j_793_, v_k_794_);
lean_dec_ref(v_k_794_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1_spec__2(lean_object* v_x_796_){
_start:
{
if (lean_obj_tag(v_x_796_) == 0)
{
lean_object* v___x_797_; 
v___x_797_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0));
return v___x_797_;
}
else
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_Json_getStr_x3f(v_x_796_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_798_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_815_; 
v_a_807_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_815_ == 0)
{
v___x_809_ = v___x_798_;
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_798_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_811_, 0, v_a_807_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_811_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(lean_object* v_j_816_, lean_object* v_k_817_){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = l_Lean_Json_getObjValD(v_j_816_, v_k_817_);
v___x_819_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1_spec__2(v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1___boxed(lean_object* v_j_820_, lean_object* v_k_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_j_820_, v_k_821_);
lean_dec_ref(v_k_821_);
return v_res_822_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2(void){
_start:
{
uint8_t v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_828_ = 1;
v___x_829_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1));
v___x_830_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_829_, v___x_828_);
return v___x_830_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_831_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_832_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2);
v___x_833_ = lean_string_append(v___x_832_, v___x_831_);
return v___x_833_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13);
v___x_835_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_836_ = lean_string_append(v___x_835_, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_838_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4);
v___x_839_ = lean_string_append(v___x_838_, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7(void){
_start:
{
uint8_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = 1;
v___x_843_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6));
v___x_844_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_843_, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_845_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7);
v___x_846_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_847_ = lean_string_append(v___x_846_, v___x_845_);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_849_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8);
v___x_850_ = lean_string_append(v___x_849_, v___x_848_);
return v___x_850_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12(void){
_start:
{
uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = 1;
v___x_855_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11));
v___x_856_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_855_, v___x_854_);
return v___x_856_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12);
v___x_858_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_859_ = lean_string_append(v___x_858_, v___x_857_);
return v___x_859_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_860_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_861_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13);
v___x_862_ = lean_string_append(v___x_861_, v___x_860_);
return v___x_862_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17(void){
_start:
{
uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = 1;
v___x_867_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16));
v___x_868_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_867_, v___x_866_);
return v___x_868_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_870_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_871_ = lean_string_append(v___x_870_, v___x_869_);
return v___x_871_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_872_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_873_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18);
v___x_874_ = lean_string_append(v___x_873_, v___x_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson(lean_object* v_json_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
lean_inc(v_json_875_);
v___x_877_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_875_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_887_; 
lean_dec(v_json_875_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_887_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_887_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_887_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_882_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5);
v___x_883_ = lean_string_append(v___x_882_, v_a_878_);
lean_dec(v_a_878_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_883_);
v___x_885_ = v___x_880_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
else
{
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v_json_875_);
v_a_888_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_877_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_877_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
lean_ctor_set_tag(v___x_890_, 0);
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_a_896_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_877_, 1);
v___x_897_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0));
lean_inc(v_json_875_);
v___x_898_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_875_, v___x_897_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_a_896_);
lean_dec(v_json_875_);
v_a_899_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_908_ == 0)
{
v___x_901_ = v___x_898_;
v_isShared_902_ = v_isSharedCheck_908_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_908_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_903_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9);
v___x_904_ = lean_string_append(v___x_903_, v_a_899_);
lean_dec(v_a_899_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 0, v___x_904_);
v___x_906_ = v___x_901_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
else
{
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_a_896_);
lean_dec(v_json_875_);
v_a_909_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_898_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_898_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set_tag(v___x_911_, 0);
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_a_917_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_917_);
lean_dec_ref_known(v___x_898_, 1);
v___x_918_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1));
lean_inc(v_json_875_);
v___x_919_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(v_json_875_, v___x_918_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_929_; 
lean_dec(v_a_917_);
lean_dec(v_a_896_);
lean_dec(v_json_875_);
v_a_920_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_929_ == 0)
{
v___x_922_ = v___x_919_;
v_isShared_923_ = v_isSharedCheck_929_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_919_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_929_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_924_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14);
v___x_925_ = lean_string_append(v___x_924_, v_a_920_);
lean_dec(v_a_920_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 0, v___x_925_);
v___x_927_ = v___x_922_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
else
{
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec(v_a_917_);
lean_dec(v_a_896_);
lean_dec(v_json_875_);
v_a_930_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_919_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_919_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
lean_ctor_set_tag(v___x_932_, 0);
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
else
{
lean_object* v_a_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v_a_938_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_919_, 1);
v___x_939_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_940_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_875_, v___x_939_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_950_; 
lean_dec(v_a_938_);
lean_dec(v_a_917_);
lean_dec(v_a_896_);
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_950_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_950_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_950_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_945_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19);
v___x_946_ = lean_string_append(v___x_945_, v_a_941_);
lean_dec(v_a_941_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
else
{
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec(v_a_938_);
lean_dec(v_a_917_);
lean_dec(v_a_896_);
v_a_951_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_940_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_940_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set_tag(v___x_953_, 0);
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_967_; 
v_a_959_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_967_ == 0)
{
v___x_961_ = v___x_940_;
v_isShared_962_ = v_isSharedCheck_967_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_940_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_967_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_963_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_963_, 0, v_a_896_);
lean_ctor_set(v___x_963_, 1, v_a_917_);
lean_ctor_set(v___x_963_, 2, v_a_938_);
lean_ctor_set(v___x_963_, 3, v_a_959_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 0, v___x_963_);
v___x_965_ = v___x_961_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instAppendTextEditBatch___aux__1(lean_object* v_as_979_, lean_object* v_bs_980_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Array_append___redArg(v_as_979_, v_bs_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instAppendTextEditBatch___aux__1___boxed(lean_object* v_as_982_, lean_object* v_bs_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lean_Lsp_instAppendTextEditBatch___aux__1(v_as_982_, v_bs_983_);
lean_dec_ref(v_bs_983_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch___lam__0(lean_object* v_te_987_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = lean_unsigned_to_nat(1u);
v___x_989_ = lean_mk_empty_array_with_capacity(v___x_988_);
v___x_990_ = lean_array_push(v___x_989_, v_te_987_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(lean_object* v_x_993_){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_994_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_995_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_995_, 0, v_x_993_);
v___x_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = lean_box(0);
v___x_998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_997_);
v___x_1000_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1001_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_999_, v___x_1000_);
v___x_1002_ = l_Lean_Json_mkObj(v___x_1001_);
lean_dec(v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = 1;
v___x_1011_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1));
v___x_1012_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1011_, v___x_1010_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1013_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1014_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2);
v___x_1015_ = lean_string_append(v___x_1014_, v___x_1013_);
return v___x_1015_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_1017_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3);
v___x_1018_ = lean_string_append(v___x_1017_, v___x_1016_);
return v___x_1018_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1020_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4);
v___x_1021_ = lean_string_append(v___x_1020_, v___x_1019_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(lean_object* v_json_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_1024_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1022_, v___x_1023_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1034_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1034_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1024_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1034_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1029_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5);
v___x_1030_ = lean_string_append(v___x_1029_, v_a_1025_);
lean_dec(v_a_1025_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1030_);
v___x_1032_ = v___x_1027_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
else
{
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1024_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1024_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set_tag(v___x_1037_, 0);
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1024_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1024_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(lean_object* v_k_1053_, lean_object* v_x_1054_){
_start:
{
if (lean_obj_tag(v_x_1054_) == 0)
{
lean_object* v___x_1055_; 
lean_dec_ref(v_k_1053_);
v___x_1055_ = lean_box(0);
return v___x_1055_;
}
else
{
lean_object* v_val_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1067_; 
v_val_1056_ = lean_ctor_get(v_x_1054_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1054_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1058_ = v_x_1054_;
v_isShared_1059_ = v_isSharedCheck_1067_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_val_1056_);
lean_dec(v_x_1054_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1067_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1060_ = l_Lean_JsonNumber_fromNat(v_val_1056_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set_tag(v___x_1058_, 2);
lean_ctor_set(v___x_1058_, 0, v___x_1060_);
v___x_1062_ = v___x_1058_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v_k_1053_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = lean_box(0);
v___x_1065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
return v___x_1065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(lean_object* v_x_1069_){
_start:
{
lean_object* v_uri_1070_; lean_object* v_version_x3f_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1089_; 
v_uri_1070_ = lean_ctor_get(v_x_1069_, 0);
v_version_x3f_1071_ = lean_ctor_get(v_x_1069_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_x_1069_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1073_ = v_x_1069_;
v_isShared_1074_ = v_isSharedCheck_1089_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_version_x3f_1071_);
lean_inc(v_uri_1070_);
lean_dec(v_x_1069_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1089_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1075_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_1076_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_uri_1070_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 1, v___x_1076_);
lean_ctor_set(v___x_1073_, 0, v___x_1075_);
v___x_1078_ = v___x_1073_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___x_1076_);
v___x_1078_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1079_ = lean_box(0);
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
v___x_1082_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(v___x_1081_, v_version_x3f_1071_);
v___x_1083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
lean_ctor_set(v___x_1083_, 1, v___x_1079_);
v___x_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1080_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1086_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1084_, v___x_1085_);
v___x_1087_ = l_Lean_Json_mkObj(v___x_1086_);
lean_dec(v___x_1086_);
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0(lean_object* v_x_1094_){
_start:
{
if (lean_obj_tag(v_x_1094_) == 0)
{
lean_object* v___x_1095_; 
v___x_1095_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0));
return v___x_1095_;
}
else
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_Json_getNat_x3f(v_x_1094_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1104_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1099_ = v___x_1096_;
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1096_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1113_; 
v_a_1105_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1107_ = v___x_1096_;
v_isShared_1108_ = v_isSharedCheck_1113_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1096_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1113_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1109_, 0, v_a_1105_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1109_);
v___x_1111_ = v___x_1107_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(lean_object* v_j_1114_, lean_object* v_k_1115_){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = l_Lean_Json_getObjValD(v_j_1114_, v_k_1115_);
v___x_1117_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0(v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0___boxed(lean_object* v_j_1118_, lean_object* v_k_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(v_j_1118_, v_k_1119_);
lean_dec_ref(v_k_1119_);
return v_res_1120_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1126_ = 1;
v___x_1127_ = ((lean_object*)(l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1));
v___x_1128_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1127_, v___x_1126_);
return v___x_1128_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1130_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2);
v___x_1131_ = lean_string_append(v___x_1130_, v___x_1129_);
return v___x_1131_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_1133_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3);
v___x_1134_ = lean_string_append(v___x_1133_, v___x_1132_);
return v___x_1134_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1136_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4);
v___x_1137_ = lean_string_append(v___x_1136_, v___x_1135_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8(void){
_start:
{
uint8_t v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = 1;
v___x_1142_ = ((lean_object*)(l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7));
v___x_1143_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1142_, v___x_1141_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8);
v___x_1145_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3);
v___x_1146_ = lean_string_append(v___x_1145_, v___x_1144_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1148_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9);
v___x_1149_ = lean_string_append(v___x_1148_, v___x_1147_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(lean_object* v_json_1150_){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_1150_);
v___x_1152_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1150_, v___x_1151_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1162_; 
lean_dec(v_json_1150_);
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1162_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1162_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1157_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5);
v___x_1158_ = lean_string_append(v___x_1157_, v_a_1153_);
lean_dec(v_a_1153_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1158_);
v___x_1160_ = v___x_1155_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
else
{
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_dec(v_json_1150_);
v_a_1163_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1152_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1152_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
lean_ctor_set_tag(v___x_1165_, 0);
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_a_1171_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v___x_1152_, 1);
v___x_1172_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
v___x_1173_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(v_json_1150_, v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1183_; 
lean_dec(v_a_1171_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1178_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10);
v___x_1179_ = lean_string_append(v___x_1178_, v_a_1174_);
lean_dec(v_a_1174_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1179_);
v___x_1181_ = v___x_1176_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
else
{
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec(v_a_1171_);
v_a_1184_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1173_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1173_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
lean_ctor_set_tag(v___x_1186_, 0);
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1200_; 
v_a_1192_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1194_ = v___x_1173_;
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1173_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1171_);
lean_ctor_set(v___x_1196_, 1, v_a_1192_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v___x_1196_);
v___x_1198_ = v___x_1194_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(size_t v_sz_1203_, size_t v_i_1204_, lean_object* v_bs_1205_){
_start:
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_usize_dec_lt(v_i_1204_, v_sz_1203_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; 
v___x_1207_ = l_unsafeCast___redArg(v_bs_1205_);
lean_dec_ref(v_bs_1205_);
return v___x_1207_;
}
else
{
lean_object* v_v_1208_; lean_object* v___x_1209_; lean_object* v_bs_x27_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; size_t v___x_1213_; size_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v_v_1208_ = lean_array_uget(v_bs_1205_, v_i_1204_);
v___x_1209_ = lean_unsigned_to_nat(0u);
v_bs_x27_1210_ = lean_array_uset(v_bs_1205_, v_i_1204_, v___x_1209_);
v___x_1211_ = l_unsafeCast___redArg(v_v_1208_);
lean_dec(v_v_1208_);
v___x_1212_ = l_Lean_Lsp_instToJsonTextEdit_toJson(v___x_1211_);
v___x_1213_ = ((size_t)1ULL);
v___x_1214_ = lean_usize_add(v_i_1204_, v___x_1213_);
v___x_1215_ = l_unsafeCast___redArg(v___x_1212_);
lean_dec(v___x_1212_);
v___x_1216_ = lean_array_uset(v_bs_x27_1210_, v_i_1204_, v___x_1215_);
v_i_1204_ = v___x_1214_;
v_bs_1205_ = v___x_1216_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1218_, lean_object* v_i_1219_, lean_object* v_bs_1220_){
_start:
{
size_t v_sz_boxed_1221_; size_t v_i_boxed_1222_; lean_object* v_res_1223_; 
v_sz_boxed_1221_ = lean_unbox_usize(v_sz_1218_);
lean_dec(v_sz_1218_);
v_i_boxed_1222_ = lean_unbox_usize(v_i_1219_);
lean_dec(v_i_1219_);
v_res_1223_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(v_sz_boxed_1221_, v_i_boxed_1222_, v_bs_1220_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(lean_object* v_a_1224_){
_start:
{
size_t v_sz_1225_; size_t v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v_sz_1225_ = lean_array_size(v_a_1224_);
v___x_1226_ = ((size_t)0ULL);
v___x_1227_ = l_unsafeCast___redArg(v_a_1224_);
v___x_1228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(v_sz_1225_, v___x_1226_, v___x_1227_);
v___x_1229_ = l_unsafeCast___redArg(v___x_1228_);
lean_dec_ref(v___x_1228_);
v___x_1230_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0___boxed(lean_object* v_a_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(v_a_1231_);
lean_dec_ref(v_a_1231_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(lean_object* v_x_1235_){
_start:
{
lean_object* v_textDocument_1236_; lean_object* v_edits_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1257_; 
v_textDocument_1236_ = lean_ctor_get(v_x_1235_, 0);
v_edits_1237_ = lean_ctor_get(v_x_1235_, 1);
v_isSharedCheck_1257_ = !lean_is_exclusive(v_x_1235_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1239_ = v_x_1235_;
v_isShared_1240_ = v_isSharedCheck_1257_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_edits_1237_);
lean_inc(v_textDocument_1236_);
lean_dec(v_x_1235_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1257_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1241_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
v___x_1242_ = l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(v_textDocument_1236_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v___x_1242_);
lean_ctor_set(v___x_1239_, 0, v___x_1241_);
v___x_1244_ = v___x_1239_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1245_ = lean_box(0);
v___x_1246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1));
v___x_1248_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(v_edits_1237_);
lean_dec_ref(v_edits_1237_);
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
lean_ctor_set(v___x_1250_, 1, v___x_1245_);
v___x_1251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1245_);
v___x_1252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1246_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1254_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1252_, v___x_1253_);
v___x_1255_ = l_Lean_Json_mkObj(v___x_1254_);
lean_dec(v___x_1254_);
return v___x_1255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(lean_object* v_j_1260_, lean_object* v_k_1261_){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = l_Lean_Json_getObjValD(v_j_1260_, v_k_1261_);
v___x_1263_ = l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(v___x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0___boxed(lean_object* v_j_1264_, lean_object* v_k_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(v_j_1264_, v_k_1265_);
lean_dec_ref(v_k_1265_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(size_t v_sz_1267_, size_t v_i_1268_, lean_object* v_bs_1269_){
_start:
{
uint8_t v___x_1270_; 
v___x_1270_ = lean_usize_dec_lt(v_i_1268_, v_sz_1267_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = l_unsafeCast___redArg(v_bs_1269_);
lean_dec_ref(v_bs_1269_);
v___x_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
return v___x_1272_;
}
else
{
lean_object* v_v_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v_v_1273_ = lean_array_uget_borrowed(v_bs_1269_, v_i_1268_);
v___x_1274_ = l_unsafeCast___redArg(v_v_1273_);
v___x_1275_ = l_Lean_Lsp_instFromJsonTextEdit_fromJson(v___x_1274_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_bs_1269_);
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1275_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1275_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v_bs_x27_1286_; size_t v___x_1287_; size_t v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_a_1284_ = lean_ctor_get(v___x_1275_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1275_, 1);
v___x_1285_ = lean_unsigned_to_nat(0u);
v_bs_x27_1286_ = lean_array_uset(v_bs_1269_, v_i_1268_, v___x_1285_);
v___x_1287_ = ((size_t)1ULL);
v___x_1288_ = lean_usize_add(v_i_1268_, v___x_1287_);
v___x_1289_ = l_unsafeCast___redArg(v_a_1284_);
lean_dec(v_a_1284_);
v___x_1290_ = lean_array_uset(v_bs_x27_1286_, v_i_1268_, v___x_1289_);
v_i_1268_ = v___x_1288_;
v_bs_1269_ = v___x_1290_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_1292_, lean_object* v_i_1293_, lean_object* v_bs_1294_){
_start:
{
size_t v_sz_boxed_1295_; size_t v_i_boxed_1296_; lean_object* v_res_1297_; 
v_sz_boxed_1295_ = lean_unbox_usize(v_sz_1292_);
lean_dec(v_sz_1292_);
v_i_boxed_1296_ = lean_unbox_usize(v_i_1293_);
lean_dec(v_i_1293_);
v_res_1297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_1295_, v_i_boxed_1296_, v_bs_1294_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(lean_object* v_x_1298_){
_start:
{
if (lean_obj_tag(v_x_1298_) == 4)
{
lean_object* v_elems_1299_; size_t v_sz_1300_; size_t v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v_elems_1299_ = lean_ctor_get(v_x_1298_, 0);
lean_inc_ref(v_elems_1299_);
lean_dec_ref_known(v_x_1298_, 1);
v_sz_1300_ = lean_array_size(v_elems_1299_);
v___x_1301_ = ((size_t)0ULL);
v___x_1302_ = l_unsafeCast___redArg(v_elems_1299_);
lean_dec_ref(v_elems_1299_);
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(v_sz_1300_, v___x_1301_, v___x_1302_);
v___x_1304_ = l_unsafeCast___redArg(v___x_1303_);
lean_dec_ref(v___x_1303_);
return v___x_1304_;
}
else
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1305_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_1306_ = lean_unsigned_to_nat(80u);
v___x_1307_ = l_Lean_Json_pretty(v_x_1298_, v___x_1306_);
v___x_1308_ = lean_string_append(v___x_1305_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___x_1309_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_1310_ = lean_string_append(v___x_1308_, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(lean_object* v_j_1312_, lean_object* v_k_1313_){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = l_Lean_Json_getObjValD(v_j_1312_, v_k_1313_);
v___x_1315_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(v___x_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1___boxed(lean_object* v_j_1316_, lean_object* v_k_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(v_j_1316_, v_k_1317_);
lean_dec_ref(v_k_1317_);
return v_res_1318_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = 1;
v___x_1325_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1));
v___x_1326_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1325_, v___x_1324_);
return v___x_1326_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1327_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1328_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2);
v___x_1329_ = lean_string_append(v___x_1328_, v___x_1327_);
return v___x_1329_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1332_ = 1;
v___x_1333_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4));
v___x_1334_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1333_, v___x_1332_);
return v___x_1334_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1335_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5);
v___x_1336_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3);
v___x_1337_ = lean_string_append(v___x_1336_, v___x_1335_);
return v___x_1337_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1338_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1339_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6);
v___x_1340_ = lean_string_append(v___x_1339_, v___x_1338_);
return v___x_1340_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1343_ = 1;
v___x_1344_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8));
v___x_1345_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1344_, v___x_1343_);
return v___x_1345_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9);
v___x_1347_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3);
v___x_1348_ = lean_string_append(v___x_1347_, v___x_1346_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1349_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1350_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10);
v___x_1351_ = lean_string_append(v___x_1350_, v___x_1349_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(lean_object* v_json_1352_){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
lean_inc(v_json_1352_);
v___x_1354_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(v_json_1352_, v___x_1353_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1364_; 
lean_dec(v_json_1352_);
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1357_ = v___x_1354_;
v_isShared_1358_ = v_isSharedCheck_1364_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1364_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1359_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7);
v___x_1360_ = lean_string_append(v___x_1359_, v_a_1355_);
lean_dec(v_a_1355_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1360_);
v___x_1362_ = v___x_1357_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
else
{
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v_json_1352_);
v_a_1365_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1354_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1354_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
lean_ctor_set_tag(v___x_1367_, 0);
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v_a_1373_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1354_, 1);
v___x_1374_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1));
v___x_1375_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(v_json_1352_, v___x_1374_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1385_; 
lean_dec(v_a_1373_);
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1385_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1385_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11);
v___x_1381_ = lean_string_append(v___x_1380_, v_a_1376_);
lean_dec(v_a_1376_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 0, v___x_1381_);
v___x_1383_ = v___x_1378_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
else
{
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec(v_a_1373_);
v_a_1386_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1375_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1375_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set_tag(v___x_1388_, 0);
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
else
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1402_; 
v_a_1394_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1396_ = v___x_1375_;
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1375_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1398_, 0, v_a_1373_);
lean_ctor_set(v___x_1398_, 1, v_a_1394_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1398_);
v___x_1400_ = v___x_1396_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson(lean_object* v_x_1408_){
_start:
{
lean_object* v_label_1409_; uint8_t v_needsConfirmation_1410_; lean_object* v_description_x3f_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v_label_1409_ = lean_ctor_get(v_x_1408_, 0);
lean_inc_ref(v_label_1409_);
v_needsConfirmation_1410_ = lean_ctor_get_uint8(v_x_1408_, sizeof(void*)*2);
v_description_x3f_1411_ = lean_ctor_get(v_x_1408_, 1);
lean_inc(v_description_x3f_1411_);
lean_dec_ref(v_x_1408_);
v___x_1412_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
v___x_1413_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1413_, 0, v_label_1409_);
v___x_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_box(0);
v___x_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1));
v___x_1418_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1418_, 0, v_needsConfirmation_1410_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v___x_1415_);
v___x_1421_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2));
v___x_1422_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_1421_, v_description_x3f_1411_);
v___x_1423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
lean_ctor_set(v___x_1423_, 1, v___x_1415_);
v___x_1424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1420_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1416_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1427_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1425_, v___x_1426_);
v___x_1428_ = l_Lean_Json_mkObj(v___x_1427_);
lean_dec(v___x_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(lean_object* v_j_1431_, lean_object* v_k_1432_){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1433_ = l_Lean_Json_getObjValD(v_j_1431_, v_k_1432_);
v___x_1434_ = l_Lean_Json_getBool_x3f(v___x_1433_);
lean_dec(v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0___boxed(lean_object* v_j_1435_, lean_object* v_k_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_j_1435_, v_k_1436_);
lean_dec_ref(v_k_1436_);
return v_res_1437_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1443_ = 1;
v___x_1444_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1));
v___x_1445_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1444_, v___x_1443_);
return v___x_1445_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1446_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1447_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2);
v___x_1448_ = lean_string_append(v___x_1447_, v___x_1446_);
return v___x_1448_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1451_ = 1;
v___x_1452_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4));
v___x_1453_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1452_, v___x_1451_);
return v___x_1453_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5);
v___x_1455_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3);
v___x_1456_ = lean_string_append(v___x_1455_, v___x_1454_);
return v___x_1456_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1457_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1458_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6);
v___x_1459_ = lean_string_append(v___x_1458_, v___x_1457_);
return v___x_1459_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = 1;
v___x_1463_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8));
v___x_1464_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1463_, v___x_1462_);
return v___x_1464_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9);
v___x_1466_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3);
v___x_1467_ = lean_string_append(v___x_1466_, v___x_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1469_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10);
v___x_1470_ = lean_string_append(v___x_1469_, v___x_1468_);
return v___x_1470_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14(void){
_start:
{
uint8_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = 1;
v___x_1475_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13));
v___x_1476_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1475_, v___x_1474_);
return v___x_1476_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14);
v___x_1478_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3);
v___x_1479_ = lean_string_append(v___x_1478_, v___x_1477_);
return v___x_1479_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1481_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15);
v___x_1482_ = lean_string_append(v___x_1481_, v___x_1480_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson(lean_object* v_json_1483_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
lean_inc(v_json_1483_);
v___x_1485_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1483_, v___x_1484_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1495_; 
lean_dec(v_json_1483_);
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1488_ = v___x_1485_;
v_isShared_1489_ = v_isSharedCheck_1495_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1485_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1495_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1490_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7);
v___x_1491_ = lean_string_append(v___x_1490_, v_a_1486_);
lean_dec(v_a_1486_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1491_);
v___x_1493_ = v___x_1488_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_json_1483_);
v_a_1496_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1485_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1485_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set_tag(v___x_1498_, 0);
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_a_1504_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1505_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1));
lean_inc(v_json_1483_);
v___x_1506_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1483_, v___x_1505_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1516_; 
lean_dec(v_a_1504_);
lean_dec(v_json_1483_);
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1509_ = v___x_1506_;
v_isShared_1510_ = v_isSharedCheck_1516_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1506_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1516_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___x_1511_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11);
v___x_1512_ = lean_string_append(v___x_1511_, v_a_1507_);
lean_dec(v_a_1507_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1512_);
v___x_1514_ = v___x_1509_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1512_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
else
{
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
lean_dec(v_a_1504_);
lean_dec(v_json_1483_);
v_a_1517_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1506_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1506_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
lean_ctor_set_tag(v___x_1519_, 0);
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_a_1525_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1506_, 1);
v___x_1526_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2));
v___x_1527_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_1483_, v___x_1526_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1537_; 
lean_dec(v_a_1525_);
lean_dec(v_a_1504_);
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1537_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1537_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1535_; 
v___x_1532_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16);
v___x_1533_ = lean_string_append(v___x_1532_, v_a_1528_);
lean_dec(v_a_1528_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1533_);
v___x_1535_ = v___x_1530_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1533_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
else
{
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec(v_a_1525_);
lean_dec(v_a_1504_);
v_a_1538_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1527_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1527_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
lean_ctor_set_tag(v___x_1540_, 0);
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1555_; 
v_a_1546_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1548_ = v___x_1527_;
v_isShared_1549_ = v_isSharedCheck_1555_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1527_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1555_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1550_; uint8_t v___x_1551_; lean_object* v___x_1553_; 
v___x_1550_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1550_, 0, v_a_1504_);
lean_ctor_set(v___x_1550_, 1, v_a_1546_);
v___x_1551_ = lean_unbox(v_a_1525_);
lean_dec(v_a_1525_);
lean_ctor_set_uint8(v___x_1550_, sizeof(void*)*2, v___x_1551_);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1550_);
v___x_1553_ = v___x_1548_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1550_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(lean_object* v_x_1560_){
_start:
{
uint8_t v_overwrite_1561_; uint8_t v_ignoreIfExists_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v_overwrite_1561_ = lean_ctor_get_uint8(v_x_1560_, 0);
v_ignoreIfExists_1562_ = lean_ctor_get_uint8(v_x_1560_, 1);
v___x_1563_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0));
v___x_1564_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1564_, 0, v_overwrite_1561_);
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v___x_1566_ = lean_box(0);
v___x_1567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1565_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1));
v___x_1569_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1569_, 0, v_ignoreIfExists_1562_);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
v___x_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
lean_ctor_set(v___x_1571_, 1, v___x_1566_);
v___x_1572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
lean_ctor_set(v___x_1572_, 1, v___x_1566_);
v___x_1573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1567_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1575_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1573_, v___x_1574_);
v___x_1576_ = l_Lean_Json_mkObj(v___x_1575_);
lean_dec(v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___boxed(lean_object* v_x_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(v_x_1577_);
lean_dec_ref(v_x_1577_);
return v_res_1578_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3(void){
_start:
{
uint8_t v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = 1;
v___x_1589_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2));
v___x_1590_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1589_, v___x_1588_);
return v___x_1590_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1592_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3);
v___x_1593_ = lean_string_append(v___x_1592_, v___x_1591_);
return v___x_1593_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1596_ = 1;
v___x_1597_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5));
v___x_1598_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1597_, v___x_1596_);
return v___x_1598_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1599_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6);
v___x_1600_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4);
v___x_1601_ = lean_string_append(v___x_1600_, v___x_1599_);
return v___x_1601_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1603_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7);
v___x_1604_ = lean_string_append(v___x_1603_, v___x_1602_);
return v___x_1604_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10(void){
_start:
{
uint8_t v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1607_ = 1;
v___x_1608_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9));
v___x_1609_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1608_, v___x_1607_);
return v___x_1609_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1610_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10);
v___x_1611_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4);
v___x_1612_ = lean_string_append(v___x_1611_, v___x_1610_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1613_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1614_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11);
v___x_1615_ = lean_string_append(v___x_1614_, v___x_1613_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson(lean_object* v_json_1616_){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0));
lean_inc(v_json_1616_);
v___x_1618_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1616_, v___x_1617_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1628_; 
lean_dec(v_json_1616_);
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1621_ = v___x_1618_;
v_isShared_1622_ = v_isSharedCheck_1628_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1618_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1628_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1623_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8);
v___x_1624_ = lean_string_append(v___x_1623_, v_a_1619_);
lean_dec(v_a_1619_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 0, v___x_1624_);
v___x_1626_ = v___x_1621_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v___x_1624_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
else
{
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec(v_json_1616_);
v_a_1629_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1618_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1618_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
lean_ctor_set_tag(v___x_1631_, 0);
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v_a_1637_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1638_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1));
v___x_1639_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1616_, v___x_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1649_; 
lean_dec(v_a_1637_);
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1649_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1649_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1644_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12);
v___x_1645_ = lean_string_append(v___x_1644_, v_a_1640_);
lean_dec(v_a_1640_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 0, v___x_1645_);
v___x_1647_ = v___x_1642_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
else
{
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
lean_dec(v_a_1637_);
v_a_1650_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1639_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1639_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
lean_ctor_set_tag(v___x_1652_, 0);
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1668_; 
v_a_1658_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1660_ = v___x_1639_;
v_isShared_1661_ = v_isSharedCheck_1668_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1639_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1668_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1662_; uint8_t v___x_1663_; uint8_t v___x_1664_; lean_object* v___x_1666_; 
v___x_1662_ = lean_alloc_ctor(0, 0, 2);
v___x_1663_ = lean_unbox(v_a_1637_);
lean_dec(v_a_1637_);
lean_ctor_set_uint8(v___x_1662_, 0, v___x_1663_);
v___x_1664_ = lean_unbox(v_a_1658_);
lean_dec(v_a_1658_);
lean_ctor_set_uint8(v___x_1662_, 1, v___x_1664_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v___x_1662_);
v___x_1666_ = v___x_1660_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1662_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(lean_object* v_x_1673_){
_start:
{
uint8_t v_recursive_1674_; uint8_t v_ignoreIfNotExists_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v_recursive_1674_ = lean_ctor_get_uint8(v_x_1673_, 0);
v_ignoreIfNotExists_1675_ = lean_ctor_get_uint8(v_x_1673_, 1);
v___x_1676_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0));
v___x_1677_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1677_, 0, v_recursive_1674_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1676_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = lean_box(0);
v___x_1680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1678_);
lean_ctor_set(v___x_1680_, 1, v___x_1679_);
v___x_1681_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1));
v___x_1682_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1682_, 0, v_ignoreIfNotExists_1675_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
lean_ctor_set(v___x_1684_, 1, v___x_1679_);
v___x_1685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
lean_ctor_set(v___x_1685_, 1, v___x_1679_);
v___x_1686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1680_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1688_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1686_, v___x_1687_);
v___x_1689_ = l_Lean_Json_mkObj(v___x_1688_);
lean_dec(v___x_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___boxed(lean_object* v_x_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(v_x_1690_);
lean_dec_ref(v_x_1690_);
return v_res_1691_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1700_ = 1;
v___x_1701_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1));
v___x_1702_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1701_, v___x_1700_);
return v___x_1702_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1703_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1704_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2);
v___x_1705_ = lean_string_append(v___x_1704_, v___x_1703_);
return v___x_1705_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1708_ = 1;
v___x_1709_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4));
v___x_1710_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1709_, v___x_1708_);
return v___x_1710_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5);
v___x_1712_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3);
v___x_1713_ = lean_string_append(v___x_1712_, v___x_1711_);
return v___x_1713_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1715_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6);
v___x_1716_ = lean_string_append(v___x_1715_, v___x_1714_);
return v___x_1716_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1719_ = 1;
v___x_1720_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8));
v___x_1721_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1720_, v___x_1719_);
return v___x_1721_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1722_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9);
v___x_1723_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3);
v___x_1724_ = lean_string_append(v___x_1723_, v___x_1722_);
return v___x_1724_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1726_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10);
v___x_1727_ = lean_string_append(v___x_1726_, v___x_1725_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson(lean_object* v_json_1728_){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0));
lean_inc(v_json_1728_);
v___x_1730_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1728_, v___x_1729_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1740_; 
lean_dec(v_json_1728_);
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1733_ = v___x_1730_;
v_isShared_1734_ = v_isSharedCheck_1740_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1730_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1740_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1735_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7);
v___x_1736_ = lean_string_append(v___x_1735_, v_a_1731_);
lean_dec(v_a_1731_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 0, v___x_1736_);
v___x_1738_ = v___x_1733_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
else
{
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
lean_dec(v_json_1728_);
v_a_1741_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1730_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1730_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1746_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set_tag(v___x_1743_, 0);
v___x_1746_ = v___x_1743_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1741_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1730_, 1);
v___x_1750_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1));
v___x_1751_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1728_, v___x_1750_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1761_; 
lean_dec(v_a_1749_);
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1754_ = v___x_1751_;
v_isShared_1755_ = v_isSharedCheck_1761_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1751_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1761_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1759_; 
v___x_1756_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11);
v___x_1757_ = lean_string_append(v___x_1756_, v_a_1752_);
lean_dec(v_a_1752_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 0, v___x_1757_);
v___x_1759_ = v___x_1754_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1757_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
else
{
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
lean_dec(v_a_1749_);
v_a_1762_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1751_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1751_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
lean_ctor_set_tag(v___x_1764_, 0);
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1780_; 
v_a_1770_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1772_ = v___x_1751_;
v_isShared_1773_ = v_isSharedCheck_1780_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1751_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1780_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; uint8_t v___x_1775_; uint8_t v___x_1776_; lean_object* v___x_1778_; 
v___x_1774_ = lean_alloc_ctor(0, 0, 2);
v___x_1775_ = lean_unbox(v_a_1749_);
lean_dec(v_a_1749_);
lean_ctor_set_uint8(v___x_1774_, 0, v___x_1775_);
v___x_1776_ = lean_unbox(v_a_1770_);
lean_dec(v_a_1770_);
lean_ctor_set_uint8(v___x_1774_, 1, v___x_1776_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1774_);
v___x_1778_ = v___x_1772_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1774_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(lean_object* v_k_1783_, lean_object* v_x_1784_){
_start:
{
if (lean_obj_tag(v_x_1784_) == 0)
{
lean_object* v___x_1785_; 
lean_dec_ref(v_k_1783_);
v___x_1785_ = lean_box(0);
return v___x_1785_;
}
else
{
lean_object* v_val_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v_val_1786_ = lean_ctor_get(v_x_1784_, 0);
v___x_1787_ = l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(v_val_1786_);
v___x_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1788_, 0, v_k_1783_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = lean_box(0);
v___x_1790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1788_);
lean_ctor_set(v___x_1790_, 1, v___x_1789_);
return v___x_1790_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0___boxed(lean_object* v_k_1791_, lean_object* v_x_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(v_k_1791_, v_x_1792_);
lean_dec(v_x_1792_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCreateFile_toJson(lean_object* v_x_1795_){
_start:
{
lean_object* v_uri_1796_; lean_object* v_options_x3f_1797_; lean_object* v_annotationId_x3f_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v_uri_1796_ = lean_ctor_get(v_x_1795_, 0);
lean_inc_ref(v_uri_1796_);
v_options_x3f_1797_ = lean_ctor_get(v_x_1795_, 1);
lean_inc(v_options_x3f_1797_);
v_annotationId_x3f_1798_ = lean_ctor_get(v_x_1795_, 2);
lean_inc(v_annotationId_x3f_1798_);
lean_dec_ref(v_x_1795_);
v___x_1799_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_1800_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1800_, 0, v_uri_1796_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = lean_box(0);
v___x_1803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1801_);
lean_ctor_set(v___x_1803_, 1, v___x_1802_);
v___x_1804_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
v___x_1805_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(v___x_1804_, v_options_x3f_1797_);
lean_dec(v_options_x3f_1797_);
v___x_1806_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_1807_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_1806_, v_annotationId_x3f_1798_);
v___x_1808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v___x_1802_);
v___x_1809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1805_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
v___x_1810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1803_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1812_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1810_, v___x_1811_);
v___x_1813_ = l_Lean_Json_mkObj(v___x_1812_);
lean_dec(v___x_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0(lean_object* v_x_1818_){
_start:
{
if (lean_obj_tag(v_x_1818_) == 0)
{
lean_object* v___x_1819_; 
v___x_1819_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0));
return v___x_1819_;
}
else
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson(v_x_1818_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1820_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1837_; 
v_a_1829_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1831_ = v___x_1820_;
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1820_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1833_, 0, v_a_1829_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1833_);
v___x_1835_ = v___x_1831_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(lean_object* v_j_1838_, lean_object* v_k_1839_){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1840_ = l_Lean_Json_getObjValD(v_j_1838_, v_k_1839_);
v___x_1841_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0(v___x_1840_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0___boxed(lean_object* v_j_1842_, lean_object* v_k_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(v_j_1842_, v_k_1843_);
lean_dec_ref(v_k_1843_);
return v_res_1844_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1(void){
_start:
{
uint8_t v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1849_ = 1;
v___x_1850_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0));
v___x_1851_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1850_, v___x_1849_);
return v___x_1851_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2(void){
_start:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1852_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1853_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1);
v___x_1854_ = lean_string_append(v___x_1853_, v___x_1852_);
return v___x_1854_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1855_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_1856_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2);
v___x_1857_ = lean_string_append(v___x_1856_, v___x_1855_);
return v___x_1857_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1858_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1859_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3);
v___x_1860_ = lean_string_append(v___x_1859_, v___x_1858_);
return v___x_1860_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7(void){
_start:
{
uint8_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = 1;
v___x_1865_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6));
v___x_1866_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1865_, v___x_1864_);
return v___x_1866_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7);
v___x_1868_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2);
v___x_1869_ = lean_string_append(v___x_1868_, v___x_1867_);
return v___x_1869_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9(void){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1870_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1871_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8);
v___x_1872_ = lean_string_append(v___x_1871_, v___x_1870_);
return v___x_1872_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1873_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_1874_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2);
v___x_1875_ = lean_string_append(v___x_1874_, v___x_1873_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1877_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10);
v___x_1878_ = lean_string_append(v___x_1877_, v___x_1876_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson(lean_object* v_json_1879_){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_1879_);
v___x_1881_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1879_, v___x_1880_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1891_; 
lean_dec(v_json_1879_);
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1891_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1891_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1889_; 
v___x_1886_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4);
v___x_1887_ = lean_string_append(v___x_1886_, v_a_1882_);
lean_dec(v_a_1882_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v___x_1887_);
v___x_1889_ = v___x_1884_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1887_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
else
{
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1899_; 
lean_dec(v_json_1879_);
v_a_1892_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1894_ = v___x_1881_;
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1881_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1897_; 
if (v_isShared_1895_ == 0)
{
lean_ctor_set_tag(v___x_1894_, 0);
v___x_1897_ = v___x_1894_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1892_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v_a_1900_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1900_);
lean_dec_ref_known(v___x_1881_, 1);
v___x_1901_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
lean_inc(v_json_1879_);
v___x_1902_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(v_json_1879_, v___x_1901_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1912_; 
lean_dec(v_a_1900_);
lean_dec(v_json_1879_);
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1905_ = v___x_1902_;
v_isShared_1906_ = v_isSharedCheck_1912_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1902_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1912_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1907_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9);
v___x_1908_ = lean_string_append(v___x_1907_, v_a_1903_);
lean_dec(v_a_1903_);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 0, v___x_1908_);
v___x_1910_ = v___x_1905_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
else
{
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
lean_dec(v_a_1900_);
lean_dec(v_json_1879_);
v_a_1913_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v___x_1902_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1902_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set_tag(v___x_1915_, 0);
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v_a_1921_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1902_, 1);
v___x_1922_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_1923_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_1879_, v___x_1922_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_a_1921_);
lean_dec(v_a_1900_);
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1926_ = v___x_1923_;
v_isShared_1927_ = v_isSharedCheck_1933_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1923_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1933_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1931_; 
v___x_1928_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11);
v___x_1929_ = lean_string_append(v___x_1928_, v_a_1924_);
lean_dec(v_a_1924_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v___x_1929_);
v___x_1931_ = v___x_1926_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
else
{
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec(v_a_1921_);
lean_dec(v_a_1900_);
v_a_1934_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1923_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1923_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
lean_ctor_set_tag(v___x_1936_, 0);
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1950_; 
v_a_1942_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1944_ = v___x_1923_;
v_isShared_1945_ = v_isSharedCheck_1950_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1923_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1950_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; lean_object* v___x_1948_; 
v___x_1946_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1946_, 0, v_a_1900_);
lean_ctor_set(v___x_1946_, 1, v_a_1921_);
lean_ctor_set(v___x_1946_, 2, v_a_1942_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 0, v___x_1946_);
v___x_1948_ = v___x_1944_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1946_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson(lean_object* v_x_1955_){
_start:
{
lean_object* v_oldUri_1956_; lean_object* v_newUri_1957_; lean_object* v_options_x3f_1958_; lean_object* v_annotationId_x3f_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_oldUri_1956_ = lean_ctor_get(v_x_1955_, 0);
lean_inc_ref(v_oldUri_1956_);
v_newUri_1957_ = lean_ctor_get(v_x_1955_, 1);
lean_inc_ref(v_newUri_1957_);
v_options_x3f_1958_ = lean_ctor_get(v_x_1955_, 2);
lean_inc(v_options_x3f_1958_);
v_annotationId_x3f_1959_ = lean_ctor_get(v_x_1955_, 3);
lean_inc(v_annotationId_x3f_1959_);
lean_dec_ref(v_x_1955_);
v___x_1960_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0));
v___x_1961_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1961_, 0, v_oldUri_1956_);
v___x_1962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1960_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = lean_box(0);
v___x_1964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1962_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v___x_1965_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1));
v___x_1966_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1966_, 0, v_newUri_1957_);
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1965_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
lean_ctor_set(v___x_1968_, 1, v___x_1963_);
v___x_1969_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
v___x_1970_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(v___x_1969_, v_options_x3f_1958_);
lean_dec(v_options_x3f_1958_);
v___x_1971_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_1972_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_1971_, v_annotationId_x3f_1959_);
v___x_1973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1972_);
lean_ctor_set(v___x_1973_, 1, v___x_1963_);
v___x_1974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1970_);
lean_ctor_set(v___x_1974_, 1, v___x_1973_);
v___x_1975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1968_);
lean_ctor_set(v___x_1975_, 1, v___x_1974_);
v___x_1976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1964_);
lean_ctor_set(v___x_1976_, 1, v___x_1975_);
v___x_1977_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1978_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1976_, v___x_1977_);
v___x_1979_ = l_Lean_Json_mkObj(v___x_1978_);
lean_dec(v___x_1978_);
return v___x_1979_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1987_ = 1;
v___x_1988_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1));
v___x_1989_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1988_, v___x_1987_);
return v___x_1989_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1990_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1991_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2);
v___x_1992_ = lean_string_append(v___x_1991_, v___x_1990_);
return v___x_1992_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1995_ = 1;
v___x_1996_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4));
v___x_1997_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1996_, v___x_1995_);
return v___x_1997_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5);
v___x_1999_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2000_ = lean_string_append(v___x_1999_, v___x_1998_);
return v___x_2000_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2001_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2002_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6);
v___x_2003_ = lean_string_append(v___x_2002_, v___x_2001_);
return v___x_2003_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9(void){
_start:
{
uint8_t v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = 1;
v___x_2007_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8));
v___x_2008_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2007_, v___x_2006_);
return v___x_2008_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2009_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9);
v___x_2010_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2011_ = lean_string_append(v___x_2010_, v___x_2009_);
return v___x_2011_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2013_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10);
v___x_2014_ = lean_string_append(v___x_2013_, v___x_2012_);
return v___x_2014_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7);
v___x_2016_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2017_ = lean_string_append(v___x_2016_, v___x_2015_);
return v___x_2017_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2018_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2019_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12);
v___x_2020_ = lean_string_append(v___x_2019_, v___x_2018_);
return v___x_2020_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2021_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_2022_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2023_ = lean_string_append(v___x_2022_, v___x_2021_);
return v___x_2023_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2024_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2025_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14);
v___x_2026_ = lean_string_append(v___x_2025_, v___x_2024_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson(lean_object* v_json_2027_){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0));
lean_inc(v_json_2027_);
v___x_2029_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_2027_, v___x_2028_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2039_; 
lean_dec(v_json_2027_);
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2032_ = v___x_2029_;
v_isShared_2033_ = v_isSharedCheck_2039_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2029_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2039_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2034_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7);
v___x_2035_ = lean_string_append(v___x_2034_, v_a_2030_);
lean_dec(v_a_2030_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v___x_2035_);
v___x_2037_ = v___x_2032_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
else
{
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
lean_dec(v_json_2027_);
v_a_2040_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2029_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2029_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
lean_ctor_set_tag(v___x_2042_, 0);
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2040_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
else
{
lean_object* v_a_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_a_2048_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2048_);
lean_dec_ref_known(v___x_2029_, 1);
v___x_2049_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1));
lean_inc(v_json_2027_);
v___x_2050_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_2027_, v___x_2049_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2060_; 
lean_dec(v_a_2048_);
lean_dec(v_json_2027_);
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2060_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2060_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2055_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11);
v___x_2056_ = lean_string_append(v___x_2055_, v_a_2051_);
lean_dec(v_a_2051_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2056_);
v___x_2058_ = v___x_2053_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
else
{
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
lean_dec(v_a_2048_);
lean_dec(v_json_2027_);
v_a_2061_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2050_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2050_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set_tag(v___x_2063_, 0);
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_a_2069_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2050_, 1);
v___x_2070_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
lean_inc(v_json_2027_);
v___x_2071_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(v_json_2027_, v___x_2070_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2081_; 
lean_dec(v_a_2069_);
lean_dec(v_a_2048_);
lean_dec(v_json_2027_);
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2074_ = v___x_2071_;
v_isShared_2075_ = v_isSharedCheck_2081_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2071_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2081_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2076_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13);
v___x_2077_ = lean_string_append(v___x_2076_, v_a_2072_);
lean_dec(v_a_2072_);
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 0, v___x_2077_);
v___x_2079_ = v___x_2074_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
else
{
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_dec(v_a_2069_);
lean_dec(v_a_2048_);
lean_dec(v_json_2027_);
v_a_2082_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2071_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2071_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
lean_ctor_set_tag(v___x_2084_, 0);
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
else
{
lean_object* v_a_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v_a_2090_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2071_, 1);
v___x_2091_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_2092_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_2027_, v___x_2091_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2102_; 
lean_dec(v_a_2090_);
lean_dec(v_a_2069_);
lean_dec(v_a_2048_);
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2095_ = v___x_2092_;
v_isShared_2096_ = v_isSharedCheck_2102_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2092_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2102_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2097_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15);
v___x_2098_ = lean_string_append(v___x_2097_, v_a_2093_);
lean_dec(v_a_2093_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2098_);
v___x_2100_ = v___x_2095_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
else
{
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec(v_a_2090_);
lean_dec(v_a_2069_);
lean_dec(v_a_2048_);
v_a_2103_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2092_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2092_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 0);
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2119_; 
v_a_2111_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2113_ = v___x_2092_;
v_isShared_2114_ = v_isSharedCheck_2119_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2092_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2119_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2115_; lean_object* v___x_2117_; 
v___x_2115_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2115_, 0, v_a_2048_);
lean_ctor_set(v___x_2115_, 1, v_a_2069_);
lean_ctor_set(v___x_2115_, 2, v_a_2090_);
lean_ctor_set(v___x_2115_, 3, v_a_2111_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2115_);
v___x_2117_ = v___x_2113_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
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
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(lean_object* v_k_2122_, lean_object* v_x_2123_){
_start:
{
if (lean_obj_tag(v_x_2123_) == 0)
{
lean_object* v___x_2124_; 
lean_dec_ref(v_k_2122_);
v___x_2124_ = lean_box(0);
return v___x_2124_;
}
else
{
lean_object* v_val_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v_val_2125_ = lean_ctor_get(v_x_2123_, 0);
v___x_2126_ = l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(v_val_2125_);
v___x_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2127_, 0, v_k_2122_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_box(0);
v___x_2129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
return v___x_2129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0___boxed(lean_object* v_k_2130_, lean_object* v_x_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(v_k_2130_, v_x_2131_);
lean_dec(v_x_2131_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeleteFile_toJson(lean_object* v_x_2133_){
_start:
{
lean_object* v_uri_2134_; lean_object* v_options_x3f_2135_; lean_object* v_annotationId_x3f_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_uri_2134_ = lean_ctor_get(v_x_2133_, 0);
lean_inc_ref(v_uri_2134_);
v_options_x3f_2135_ = lean_ctor_get(v_x_2133_, 1);
lean_inc(v_options_x3f_2135_);
v_annotationId_x3f_2136_ = lean_ctor_get(v_x_2133_, 2);
lean_inc(v_annotationId_x3f_2136_);
lean_dec_ref(v_x_2133_);
v___x_2137_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_2138_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2138_, 0, v_uri_2134_);
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = lean_box(0);
v___x_2141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2139_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
v___x_2142_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
v___x_2143_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(v___x_2142_, v_options_x3f_2135_);
lean_dec(v_options_x3f_2135_);
v___x_2144_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_2145_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_2144_, v_annotationId_x3f_2136_);
v___x_2146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
lean_ctor_set(v___x_2146_, 1, v___x_2140_);
v___x_2147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2143_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2141_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
v___x_2149_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_2150_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_2148_, v___x_2149_);
v___x_2151_ = l_Lean_Json_mkObj(v___x_2150_);
lean_dec(v___x_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0(lean_object* v_x_2156_){
_start:
{
if (lean_obj_tag(v_x_2156_) == 0)
{
lean_object* v___x_2157_; 
v___x_2157_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0));
return v___x_2157_;
}
else
{
lean_object* v___x_2158_; 
v___x_2158_ = l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson(v_x_2156_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2175_; 
v_a_2167_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2169_ = v___x_2158_;
v_isShared_2170_ = v_isSharedCheck_2175_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2158_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2175_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2171_; lean_object* v___x_2173_; 
v___x_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2171_, 0, v_a_2167_);
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 0, v___x_2171_);
v___x_2173_ = v___x_2169_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2171_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(lean_object* v_j_2176_, lean_object* v_k_2177_){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2178_ = l_Lean_Json_getObjValD(v_j_2176_, v_k_2177_);
v___x_2179_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0(v___x_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0___boxed(lean_object* v_j_2180_, lean_object* v_k_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(v_j_2180_, v_k_2181_);
lean_dec_ref(v_k_2181_);
return v_res_2182_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1(void){
_start:
{
uint8_t v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2187_ = 1;
v___x_2188_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0));
v___x_2189_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2188_, v___x_2187_);
return v___x_2189_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2(void){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_2191_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1);
v___x_2192_ = lean_string_append(v___x_2191_, v___x_2190_);
return v___x_2192_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_2194_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2);
v___x_2195_ = lean_string_append(v___x_2194_, v___x_2193_);
return v___x_2195_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2196_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2197_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3);
v___x_2198_ = lean_string_append(v___x_2197_, v___x_2196_);
return v___x_2198_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5(void){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2199_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7);
v___x_2200_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2);
v___x_2201_ = lean_string_append(v___x_2200_, v___x_2199_);
return v___x_2201_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2203_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5);
v___x_2204_ = lean_string_append(v___x_2203_, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_2206_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2);
v___x_2207_ = lean_string_append(v___x_2206_, v___x_2205_);
return v___x_2207_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2209_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7);
v___x_2210_ = lean_string_append(v___x_2209_, v___x_2208_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson(lean_object* v_json_2211_){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_2211_);
v___x_2213_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_2211_, v___x_2212_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2223_; 
lean_dec(v_json_2211_);
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2216_ = v___x_2213_;
v_isShared_2217_ = v_isSharedCheck_2223_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2223_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2218_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4);
v___x_2219_ = lean_string_append(v___x_2218_, v_a_2214_);
lean_dec(v_a_2214_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v___x_2219_);
v___x_2221_ = v___x_2216_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
else
{
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec(v_json_2211_);
v_a_2224_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2213_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2213_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
lean_ctor_set_tag(v___x_2226_, 0);
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_a_2232_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_a_2232_);
lean_dec_ref_known(v___x_2213_, 1);
v___x_2233_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
lean_inc(v_json_2211_);
v___x_2234_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(v_json_2211_, v___x_2233_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2244_; 
lean_dec(v_a_2232_);
lean_dec(v_json_2211_);
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2237_ = v___x_2234_;
v_isShared_2238_ = v_isSharedCheck_2244_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2234_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2244_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2242_; 
v___x_2239_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6);
v___x_2240_ = lean_string_append(v___x_2239_, v_a_2235_);
lean_dec(v_a_2235_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 0, v___x_2240_);
v___x_2242_ = v___x_2237_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
else
{
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec(v_a_2232_);
lean_dec(v_json_2211_);
v_a_2245_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2234_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2234_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
lean_ctor_set_tag(v___x_2247_, 0);
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
else
{
lean_object* v_a_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v_a_2253_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2234_, 1);
v___x_2254_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_2255_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_2211_, v___x_2254_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2265_; 
lean_dec(v_a_2253_);
lean_dec(v_a_2232_);
v_a_2256_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2258_ = v___x_2255_;
v_isShared_2259_ = v_isSharedCheck_2265_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2255_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2265_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2263_; 
v___x_2260_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8);
v___x_2261_ = lean_string_append(v___x_2260_, v_a_2256_);
lean_dec(v_a_2256_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v___x_2261_);
v___x_2263_ = v___x_2258_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v___x_2261_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
else
{
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
lean_dec(v_a_2253_);
lean_dec(v_a_2232_);
v_a_2266_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2268_ = v___x_2255_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2255_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
lean_ctor_set_tag(v___x_2268_, 0);
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2282_; 
v_a_2274_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2276_ = v___x_2255_;
v_isShared_2277_ = v_isSharedCheck_2282_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2255_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2282_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2280_; 
v___x_2278_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2278_, 0, v_a_2232_);
lean_ctor_set(v___x_2278_, 1, v_a_2253_);
lean_ctor_set(v___x_2278_, 2, v_a_2274_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v___x_2278_);
v___x_2280_ = v___x_2276_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2278_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx(lean_object* v_x_2285_){
_start:
{
switch(lean_obj_tag(v_x_2285_))
{
case 0:
{
lean_object* v___x_2286_; 
v___x_2286_ = lean_unsigned_to_nat(0u);
return v___x_2286_;
}
case 1:
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_unsigned_to_nat(1u);
return v___x_2287_;
}
case 2:
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_unsigned_to_nat(2u);
return v___x_2288_;
}
default: 
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_unsigned_to_nat(3u);
return v___x_2289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx___boxed(lean_object* v_x_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lean_Lsp_DocumentChange_ctorIdx(v_x_2290_);
lean_dec_ref(v_x_2290_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___redArg(lean_object* v_t_2292_, lean_object* v_k_2293_){
_start:
{
lean_object* v_a_2294_; lean_object* v___x_2295_; 
v_a_2294_ = lean_ctor_get(v_t_2292_, 0);
lean_inc_ref(v_a_2294_);
lean_dec_ref(v_t_2292_);
v___x_2295_ = lean_apply_1(v_k_2293_, v_a_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim(lean_object* v_motive_2296_, lean_object* v_ctorIdx_2297_, lean_object* v_t_2298_, lean_object* v_h_2299_, lean_object* v_k_2300_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2298_, v_k_2300_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___boxed(lean_object* v_motive_2302_, lean_object* v_ctorIdx_2303_, lean_object* v_t_2304_, lean_object* v_h_2305_, lean_object* v_k_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lean_Lsp_DocumentChange_ctorElim(v_motive_2302_, v_ctorIdx_2303_, v_t_2304_, v_h_2305_, v_k_2306_);
lean_dec(v_ctorIdx_2303_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim___redArg(lean_object* v_t_2308_, lean_object* v_create_2309_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2308_, v_create_2309_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim(lean_object* v_motive_2311_, lean_object* v_t_2312_, lean_object* v_h_2313_, lean_object* v_create_2314_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2312_, v_create_2314_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim___redArg(lean_object* v_t_2316_, lean_object* v_rename_2317_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2316_, v_rename_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim(lean_object* v_motive_2319_, lean_object* v_t_2320_, lean_object* v_h_2321_, lean_object* v_rename_2322_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2320_, v_rename_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim___redArg(lean_object* v_t_2324_, lean_object* v_delete_2325_){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2324_, v_delete_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim(lean_object* v_motive_2327_, lean_object* v_t_2328_, lean_object* v_h_2329_, lean_object* v_delete_2330_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2328_, v_delete_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim___redArg(lean_object* v_t_2332_, lean_object* v_edit_2333_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2332_, v_edit_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim(lean_object* v_motive_2335_, lean_object* v_t_2336_, lean_object* v_h_2337_, lean_object* v_edit_2338_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2336_, v_edit_2338_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0(lean_object* v_x_2350_){
_start:
{
switch(lean_obj_tag(v_x_2350_))
{
case 0:
{
lean_object* v_a_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_a_2351_ = lean_ctor_get(v_x_2350_, 0);
lean_inc_ref(v_a_2351_);
lean_dec_ref_known(v_x_2350_, 1);
v___x_2352_ = l_Lean_Lsp_instToJsonCreateFile_toJson(v_a_2351_);
v___x_2353_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2354_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2));
v___x_2355_ = l_Lean_Json_setObjVal_x21(v___x_2352_, v___x_2353_, v___x_2354_);
return v___x_2355_;
}
case 1:
{
lean_object* v_a_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_a_2356_ = lean_ctor_get(v_x_2350_, 0);
lean_inc_ref(v_a_2356_);
lean_dec_ref_known(v_x_2350_, 1);
v___x_2357_ = l_Lean_Lsp_instToJsonRenameFile_toJson(v_a_2356_);
v___x_2358_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2359_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4));
v___x_2360_ = l_Lean_Json_setObjVal_x21(v___x_2357_, v___x_2358_, v___x_2359_);
return v___x_2360_;
}
case 2:
{
lean_object* v_a_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v_a_2361_ = lean_ctor_get(v_x_2350_, 0);
lean_inc_ref(v_a_2361_);
lean_dec_ref_known(v_x_2350_, 1);
v___x_2362_ = l_Lean_Lsp_instToJsonDeleteFile_toJson(v_a_2361_);
v___x_2363_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2364_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6));
v___x_2365_ = l_Lean_Json_setObjVal_x21(v___x_2362_, v___x_2363_, v___x_2364_);
return v___x_2365_;
}
default: 
{
lean_object* v_a_2366_; lean_object* v___x_2367_; 
v_a_2366_ = lean_ctor_get(v_x_2350_, 0);
lean_inc_ref(v_a_2366_);
lean_dec_ref_known(v_x_2350_, 1);
v___x_2367_ = l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(v_a_2366_);
return v___x_2367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__0(lean_object* v_kind_2371_){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2372_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0));
v___x_2373_ = lean_unsigned_to_nat(80u);
v___x_2374_ = l_Lean_Json_pretty(v_kind_2371_, v___x_2373_);
v___x_2375_ = lean_string_append(v___x_2372_, v___x_2374_);
lean_dec_ref(v___x_2374_);
v___x_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__1(lean_object* v___f_2377_, lean_object* v_j_2378_){
_start:
{
lean_object* v___y_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
lean_inc(v_j_2378_);
v___x_2401_ = l_Lean_Json_getObjVal_x3f(v_j_2378_, v___x_2400_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_dec_ref_known(v___x_2401_, 1);
lean_dec_ref(v___f_2377_);
goto v___jp_2379_;
}
else
{
lean_object* v_a_2402_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
if (lean_obj_tag(v_a_2402_) == 3)
{
lean_object* v_s_2403_; lean_object* v___x_2404_; uint8_t v___x_2405_; 
v_s_2403_ = lean_ctor_get(v_a_2402_, 0);
v___x_2404_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1));
v___x_2405_ = lean_string_dec_eq(v_s_2403_, v___x_2404_);
if (v___x_2405_ == 0)
{
lean_object* v___x_2406_; uint8_t v___x_2407_; 
v___x_2406_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3));
v___x_2407_ = lean_string_dec_eq(v_s_2403_, v___x_2406_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2408_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5));
v___x_2409_ = lean_string_dec_eq(v_s_2403_, v___x_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; 
v___x_2410_ = lean_apply_1(v___f_2377_, v_a_2402_);
v___y_2399_ = v___x_2410_;
goto v___jp_2398_;
}
else
{
lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2426_; 
lean_dec_ref(v___f_2377_);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_a_2402_);
if (v_isSharedCheck_2426_ == 0)
{
lean_object* v_unused_2427_; 
v_unused_2427_ = lean_ctor_get(v_a_2402_, 0);
lean_dec(v_unused_2427_);
v___x_2412_ = v_a_2402_;
v_isShared_2413_ = v_isSharedCheck_2426_;
goto v_resetjp_2411_;
}
else
{
lean_dec(v_a_2402_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2426_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; 
lean_inc(v_j_2378_);
v___x_2414_ = l_Lean_Lsp_instFromJsonDeleteFile_fromJson(v_j_2378_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_dec_ref_known(v___x_2414_, 1);
lean_del_object(v___x_2412_);
goto v___jp_2379_;
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v_j_2378_);
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2417_ = v___x_2414_;
v_isShared_2418_ = v_isSharedCheck_2425_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2414_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2425_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2413_ == 0)
{
lean_ctor_set_tag(v___x_2412_, 2);
lean_ctor_set(v___x_2412_, 0, v_a_2415_);
v___x_2420_ = v___x_2412_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
lean_object* v___x_2422_; 
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 0, v___x_2420_);
v___x_2422_ = v___x_2417_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v___x_2420_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2443_; 
lean_dec_ref(v___f_2377_);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_a_2402_);
if (v_isSharedCheck_2443_ == 0)
{
lean_object* v_unused_2444_; 
v_unused_2444_ = lean_ctor_get(v_a_2402_, 0);
lean_dec(v_unused_2444_);
v___x_2429_ = v_a_2402_;
v_isShared_2430_ = v_isSharedCheck_2443_;
goto v_resetjp_2428_;
}
else
{
lean_dec(v_a_2402_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2443_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; 
lean_inc(v_j_2378_);
v___x_2431_ = l_Lean_Lsp_instFromJsonRenameFile_fromJson(v_j_2378_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_dec_ref_known(v___x_2431_, 1);
lean_del_object(v___x_2429_);
goto v___jp_2379_;
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2442_; 
lean_dec(v_j_2378_);
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2434_ = v___x_2431_;
v_isShared_2435_ = v_isSharedCheck_2442_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2431_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2442_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2430_ == 0)
{
lean_ctor_set_tag(v___x_2429_, 1);
lean_ctor_set(v___x_2429_, 0, v_a_2432_);
v___x_2437_ = v___x_2429_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
lean_object* v___x_2439_; 
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 0, v___x_2437_);
v___x_2439_ = v___x_2434_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___x_2437_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2460_; 
lean_dec_ref(v___f_2377_);
v_isSharedCheck_2460_ = !lean_is_exclusive(v_a_2402_);
if (v_isSharedCheck_2460_ == 0)
{
lean_object* v_unused_2461_; 
v_unused_2461_ = lean_ctor_get(v_a_2402_, 0);
lean_dec(v_unused_2461_);
v___x_2446_ = v_a_2402_;
v_isShared_2447_ = v_isSharedCheck_2460_;
goto v_resetjp_2445_;
}
else
{
lean_dec(v_a_2402_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2460_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; 
lean_inc(v_j_2378_);
v___x_2448_ = l_Lean_Lsp_instFromJsonCreateFile_fromJson(v_j_2378_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_dec_ref_known(v___x_2448_, 1);
lean_del_object(v___x_2446_);
goto v___jp_2379_;
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2459_; 
lean_dec(v_j_2378_);
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2459_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2459_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2447_ == 0)
{
lean_ctor_set_tag(v___x_2446_, 0);
lean_ctor_set(v___x_2446_, 0, v_a_2449_);
v___x_2454_ = v___x_2446_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2456_; 
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2454_);
v___x_2456_ = v___x_2451_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v___x_2454_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_apply_1(v___f_2377_, v_a_2402_);
v___y_2399_ = v___x_2462_;
goto v___jp_2398_;
}
}
v___jp_2379_:
{
lean_object* v___x_2380_; 
v___x_2380_ = l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(v_j_2378_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2397_; 
v_a_2389_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2391_ = v___x_2380_;
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2380_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2395_; 
v___x_2393_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2393_, 0, v_a_2389_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2393_);
v___x_2395_ = v___x_2391_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
v___jp_2398_:
{
if (lean_obj_tag(v___y_2399_) == 0)
{
lean_dec_ref_known(v___y_2399_, 1);
goto v___jp_2379_;
}
else
{
lean_dec(v_j_2378_);
return v___y_2399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(lean_object* v_t_2467_){
_start:
{
if (lean_obj_tag(v_t_2467_) == 0)
{
lean_object* v_size_2468_; lean_object* v_k_2469_; lean_object* v_v_2470_; lean_object* v_l_2471_; lean_object* v_r_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2482_; 
v_size_2468_ = lean_ctor_get(v_t_2467_, 0);
v_k_2469_ = lean_ctor_get(v_t_2467_, 1);
v_v_2470_ = lean_ctor_get(v_t_2467_, 2);
v_l_2471_ = lean_ctor_get(v_t_2467_, 3);
v_r_2472_ = lean_ctor_get(v_t_2467_, 4);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_t_2467_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2474_ = v_t_2467_;
v_isShared_2475_ = v_isSharedCheck_2482_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_r_2472_);
lean_inc(v_l_2471_);
lean_inc(v_v_2470_);
lean_inc(v_k_2469_);
lean_inc(v_size_2468_);
lean_dec(v_t_2467_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2482_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2476_ = l_Lean_Lsp_instToJsonChangeAnnotation_toJson(v_v_2470_);
v___x_2477_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(v_l_2471_);
v___x_2478_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(v_r_2472_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 4, v___x_2478_);
lean_ctor_set(v___x_2474_, 3, v___x_2477_);
lean_ctor_set(v___x_2474_, 2, v___x_2476_);
v___x_2480_ = v___x_2474_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_size_2468_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v_k_2469_);
lean_ctor_set(v_reuseFailAlloc_2481_, 2, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2481_, 3, v___x_2477_);
lean_ctor_set(v_reuseFailAlloc_2481_, 4, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
else
{
lean_object* v___x_2483_; 
v___x_2483_ = lean_box(1);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4(lean_object* v_map_2484_){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(v_map_2484_);
v___x_2486_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2(lean_object* v_k_2487_, lean_object* v_x_2488_){
_start:
{
if (lean_obj_tag(v_x_2488_) == 0)
{
lean_object* v___x_2489_; 
lean_dec_ref(v_k_2487_);
v___x_2489_ = lean_box(0);
return v___x_2489_;
}
else
{
lean_object* v_val_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v_val_2490_ = lean_ctor_get(v_x_2488_, 0);
lean_inc(v_val_2490_);
lean_dec_ref_known(v_x_2488_, 1);
v___x_2491_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4(v_val_2490_);
v___x_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2492_, 0, v_k_2487_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v___x_2493_ = lean_box(0);
v___x_2494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2492_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
return v___x_2494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(size_t v_sz_2495_, size_t v_i_2496_, lean_object* v_bs_2497_){
_start:
{
uint8_t v___x_2498_; 
v___x_2498_ = lean_usize_dec_lt(v_i_2496_, v_sz_2495_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; 
v___x_2499_ = l_unsafeCast___redArg(v_bs_2497_);
lean_dec_ref(v_bs_2497_);
return v___x_2499_;
}
else
{
lean_object* v_v_2500_; lean_object* v___x_2501_; lean_object* v_bs_x27_2502_; lean_object* v___y_2504_; lean_object* v___x_2510_; 
v_v_2500_ = lean_array_uget(v_bs_2497_, v_i_2496_);
v___x_2501_ = lean_unsigned_to_nat(0u);
v_bs_x27_2502_ = lean_array_uset(v_bs_2497_, v_i_2496_, v___x_2501_);
v___x_2510_ = l_unsafeCast___redArg(v_v_2500_);
lean_dec(v_v_2500_);
switch(lean_obj_tag(v___x_2510_))
{
case 0:
{
lean_object* v_a_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc_ref(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = l_Lean_Lsp_instToJsonCreateFile_toJson(v_a_2511_);
v___x_2513_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2514_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2));
v___x_2515_ = l_Lean_Json_setObjVal_x21(v___x_2512_, v___x_2513_, v___x_2514_);
v___y_2504_ = v___x_2515_;
goto v___jp_2503_;
}
case 1:
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v_a_2516_ = lean_ctor_get(v___x_2510_, 0);
lean_inc_ref(v_a_2516_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2517_ = l_Lean_Lsp_instToJsonRenameFile_toJson(v_a_2516_);
v___x_2518_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2519_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4));
v___x_2520_ = l_Lean_Json_setObjVal_x21(v___x_2517_, v___x_2518_, v___x_2519_);
v___y_2504_ = v___x_2520_;
goto v___jp_2503_;
}
case 2:
{
lean_object* v_a_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v_a_2521_ = lean_ctor_get(v___x_2510_, 0);
lean_inc_ref(v_a_2521_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2522_ = l_Lean_Lsp_instToJsonDeleteFile_toJson(v_a_2521_);
v___x_2523_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2524_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6));
v___x_2525_ = l_Lean_Json_setObjVal_x21(v___x_2522_, v___x_2523_, v___x_2524_);
v___y_2504_ = v___x_2525_;
goto v___jp_2503_;
}
default: 
{
lean_object* v_a_2526_; lean_object* v___x_2527_; 
v_a_2526_ = lean_ctor_get(v___x_2510_, 0);
lean_inc_ref(v_a_2526_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2527_ = l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(v_a_2526_);
v___y_2504_ = v___x_2527_;
goto v___jp_2503_;
}
}
v___jp_2503_:
{
size_t v___x_2505_; size_t v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2505_ = ((size_t)1ULL);
v___x_2506_ = lean_usize_add(v_i_2496_, v___x_2505_);
v___x_2507_ = l_unsafeCast___redArg(v___y_2504_);
lean_dec(v___y_2504_);
v___x_2508_ = lean_array_uset(v_bs_x27_2502_, v_i_2496_, v___x_2507_);
v_i_2496_ = v___x_2506_;
v_bs_2497_ = v___x_2508_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_2528_, lean_object* v_i_2529_, lean_object* v_bs_2530_){
_start:
{
size_t v_sz_boxed_2531_; size_t v_i_boxed_2532_; lean_object* v_res_2533_; 
v_sz_boxed_2531_ = lean_unbox_usize(v_sz_2528_);
lean_dec(v_sz_2528_);
v_i_boxed_2532_ = lean_unbox_usize(v_i_2529_);
lean_dec(v_i_2529_);
v_res_2533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(v_sz_boxed_2531_, v_i_boxed_2532_, v_bs_2530_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(lean_object* v_a_2534_){
_start:
{
size_t v_sz_2535_; size_t v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_sz_2535_ = lean_array_size(v_a_2534_);
v___x_2536_ = ((size_t)0ULL);
v___x_2537_ = l_unsafeCast___redArg(v_a_2534_);
v___x_2538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(v_sz_2535_, v___x_2536_, v___x_2537_);
v___x_2539_ = l_unsafeCast___redArg(v___x_2538_);
lean_dec_ref(v___x_2538_);
v___x_2540_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2___boxed(lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(v_a_2541_);
lean_dec_ref(v_a_2541_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(lean_object* v_k_2543_, lean_object* v_x_2544_){
_start:
{
if (lean_obj_tag(v_x_2544_) == 0)
{
lean_object* v___x_2545_; 
lean_dec_ref(v_k_2543_);
v___x_2545_ = lean_box(0);
return v___x_2545_;
}
else
{
lean_object* v_val_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v_val_2546_ = lean_ctor_get(v_x_2544_, 0);
v___x_2547_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(v_val_2546_);
v___x_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2548_, 0, v_k_2543_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = lean_box(0);
v___x_2550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1___boxed(lean_object* v_k_2551_, lean_object* v_x_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(v_k_2551_, v_x_2552_);
lean_dec(v_x_2552_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(lean_object* v_t_2554_){
_start:
{
if (lean_obj_tag(v_t_2554_) == 0)
{
lean_object* v_size_2555_; lean_object* v_k_2556_; lean_object* v_v_2557_; lean_object* v_l_2558_; lean_object* v_r_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2569_; 
v_size_2555_ = lean_ctor_get(v_t_2554_, 0);
v_k_2556_ = lean_ctor_get(v_t_2554_, 1);
v_v_2557_ = lean_ctor_get(v_t_2554_, 2);
v_l_2558_ = lean_ctor_get(v_t_2554_, 3);
v_r_2559_ = lean_ctor_get(v_t_2554_, 4);
v_isSharedCheck_2569_ = !lean_is_exclusive(v_t_2554_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2561_ = v_t_2554_;
v_isShared_2562_ = v_isSharedCheck_2569_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_r_2559_);
lean_inc(v_l_2558_);
lean_inc(v_v_2557_);
lean_inc(v_k_2556_);
lean_inc(v_size_2555_);
lean_dec(v_t_2554_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2569_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2567_; 
v___x_2563_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(v_v_2557_);
lean_dec(v_v_2557_);
v___x_2564_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(v_l_2558_);
v___x_2565_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(v_r_2559_);
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 4, v___x_2565_);
lean_ctor_set(v___x_2561_, 3, v___x_2564_);
lean_ctor_set(v___x_2561_, 2, v___x_2563_);
v___x_2567_ = v___x_2561_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_size_2555_);
lean_ctor_set(v_reuseFailAlloc_2568_, 1, v_k_2556_);
lean_ctor_set(v_reuseFailAlloc_2568_, 2, v___x_2563_);
lean_ctor_set(v_reuseFailAlloc_2568_, 3, v___x_2564_);
lean_ctor_set(v_reuseFailAlloc_2568_, 4, v___x_2565_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
else
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_box(1);
return v___x_2570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0(lean_object* v_map_2571_){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(v_map_2571_);
v___x_2573_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2572_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0(lean_object* v_k_2574_, lean_object* v_x_2575_){
_start:
{
if (lean_obj_tag(v_x_2575_) == 0)
{
lean_object* v___x_2576_; 
lean_dec_ref(v_k_2574_);
v___x_2576_ = lean_box(0);
return v___x_2576_;
}
else
{
lean_object* v_val_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v_val_2577_ = lean_ctor_get(v_x_2575_, 0);
lean_inc(v_val_2577_);
lean_dec_ref_known(v_x_2575_, 1);
v___x_2578_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0(v_val_2577_);
v___x_2579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2579_, 0, v_k_2574_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = lean_box(0);
v___x_2581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
return v___x_2581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson(lean_object* v_x_2585_){
_start:
{
lean_object* v_changes_x3f_2586_; lean_object* v_documentChanges_x3f_2587_; lean_object* v_changeAnnotations_x3f_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v_changes_x3f_2586_ = lean_ctor_get(v_x_2585_, 0);
lean_inc(v_changes_x3f_2586_);
v_documentChanges_x3f_2587_ = lean_ctor_get(v_x_2585_, 1);
lean_inc(v_documentChanges_x3f_2587_);
v_changeAnnotations_x3f_2588_ = lean_ctor_get(v_x_2585_, 2);
lean_inc(v_changeAnnotations_x3f_2588_);
lean_dec_ref(v_x_2585_);
v___x_2589_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0));
v___x_2590_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0(v___x_2589_, v_changes_x3f_2586_);
v___x_2591_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1));
v___x_2592_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(v___x_2591_, v_documentChanges_x3f_2587_);
lean_dec(v_documentChanges_x3f_2587_);
v___x_2593_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2));
v___x_2594_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2(v___x_2593_, v_changeAnnotations_x3f_2588_);
v___x_2595_ = lean_box(0);
v___x_2596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2592_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2590_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_2600_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_2598_, v___x_2599_);
v___x_2601_ = l_Lean_Json_mkObj(v___x_2600_);
lean_dec(v___x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_cmp_2604_, lean_object* v_k_2605_, lean_object* v_v_2606_, lean_object* v_t_2607_){
_start:
{
if (lean_obj_tag(v_t_2607_) == 0)
{
lean_object* v_size_2608_; lean_object* v_k_2609_; lean_object* v_v_2610_; lean_object* v_l_2611_; lean_object* v_r_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2893_; 
v_size_2608_ = lean_ctor_get(v_t_2607_, 0);
v_k_2609_ = lean_ctor_get(v_t_2607_, 1);
v_v_2610_ = lean_ctor_get(v_t_2607_, 2);
v_l_2611_ = lean_ctor_get(v_t_2607_, 3);
v_r_2612_ = lean_ctor_get(v_t_2607_, 4);
v_isSharedCheck_2893_ = !lean_is_exclusive(v_t_2607_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2614_ = v_t_2607_;
v_isShared_2615_ = v_isSharedCheck_2893_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_r_2612_);
lean_inc(v_l_2611_);
lean_inc(v_v_2610_);
lean_inc(v_k_2609_);
lean_inc(v_size_2608_);
lean_dec(v_t_2607_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2893_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; uint8_t v___x_2617_; 
lean_inc_ref(v_cmp_2604_);
lean_inc(v_k_2609_);
lean_inc_ref(v_k_2605_);
v___x_2616_ = lean_apply_2(v_cmp_2604_, v_k_2605_, v_k_2609_);
v___x_2617_ = lean_unbox(v___x_2616_);
switch(v___x_2617_)
{
case 0:
{
lean_object* v_impl_2618_; lean_object* v___x_2619_; 
lean_dec(v_size_2608_);
v_impl_2618_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2604_, v_k_2605_, v_v_2606_, v_l_2611_);
v___x_2619_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2612_) == 0)
{
lean_object* v_size_2620_; lean_object* v_size_2621_; lean_object* v_k_2622_; lean_object* v_v_2623_; lean_object* v_l_2624_; lean_object* v_r_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; uint8_t v___x_2628_; 
v_size_2620_ = lean_ctor_get(v_r_2612_, 0);
v_size_2621_ = lean_ctor_get(v_impl_2618_, 0);
lean_inc(v_size_2621_);
v_k_2622_ = lean_ctor_get(v_impl_2618_, 1);
lean_inc(v_k_2622_);
v_v_2623_ = lean_ctor_get(v_impl_2618_, 2);
lean_inc(v_v_2623_);
v_l_2624_ = lean_ctor_get(v_impl_2618_, 3);
lean_inc(v_l_2624_);
v_r_2625_ = lean_ctor_get(v_impl_2618_, 4);
lean_inc(v_r_2625_);
v___x_2626_ = lean_unsigned_to_nat(3u);
v___x_2627_ = lean_nat_mul(v___x_2626_, v_size_2620_);
v___x_2628_ = lean_nat_dec_lt(v___x_2627_, v_size_2621_);
lean_dec(v___x_2627_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2632_; 
lean_dec(v_r_2625_);
lean_dec(v_l_2624_);
lean_dec(v_v_2623_);
lean_dec(v_k_2622_);
v___x_2629_ = lean_nat_add(v___x_2619_, v_size_2621_);
lean_dec(v_size_2621_);
v___x_2630_ = lean_nat_add(v___x_2629_, v_size_2620_);
lean_dec(v___x_2629_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 3, v_impl_2618_);
lean_ctor_set(v___x_2614_, 0, v___x_2630_);
v___x_2632_ = v___x_2614_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2630_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2633_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2633_, 3, v_impl_2618_);
lean_ctor_set(v_reuseFailAlloc_2633_, 4, v_r_2612_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
else
{
lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2699_; 
v_isSharedCheck_2699_ = !lean_is_exclusive(v_impl_2618_);
if (v_isSharedCheck_2699_ == 0)
{
lean_object* v_unused_2700_; lean_object* v_unused_2701_; lean_object* v_unused_2702_; lean_object* v_unused_2703_; lean_object* v_unused_2704_; 
v_unused_2700_ = lean_ctor_get(v_impl_2618_, 4);
lean_dec(v_unused_2700_);
v_unused_2701_ = lean_ctor_get(v_impl_2618_, 3);
lean_dec(v_unused_2701_);
v_unused_2702_ = lean_ctor_get(v_impl_2618_, 2);
lean_dec(v_unused_2702_);
v_unused_2703_ = lean_ctor_get(v_impl_2618_, 1);
lean_dec(v_unused_2703_);
v_unused_2704_ = lean_ctor_get(v_impl_2618_, 0);
lean_dec(v_unused_2704_);
v___x_2635_ = v_impl_2618_;
v_isShared_2636_ = v_isSharedCheck_2699_;
goto v_resetjp_2634_;
}
else
{
lean_dec(v_impl_2618_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2699_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v_size_2637_; lean_object* v_size_2638_; lean_object* v_k_2639_; lean_object* v_v_2640_; lean_object* v_l_2641_; lean_object* v_r_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_size_2637_ = lean_ctor_get(v_l_2624_, 0);
v_size_2638_ = lean_ctor_get(v_r_2625_, 0);
v_k_2639_ = lean_ctor_get(v_r_2625_, 1);
v_v_2640_ = lean_ctor_get(v_r_2625_, 2);
v_l_2641_ = lean_ctor_get(v_r_2625_, 3);
v_r_2642_ = lean_ctor_get(v_r_2625_, 4);
v___x_2643_ = lean_unsigned_to_nat(2u);
v___x_2644_ = lean_nat_mul(v___x_2643_, v_size_2637_);
v___x_2645_ = lean_nat_dec_lt(v_size_2638_, v___x_2644_);
lean_dec(v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2674_; 
lean_inc(v_r_2642_);
lean_inc(v_l_2641_);
lean_inc(v_v_2640_);
lean_inc(v_k_2639_);
v_isSharedCheck_2674_ = !lean_is_exclusive(v_r_2625_);
if (v_isSharedCheck_2674_ == 0)
{
lean_object* v_unused_2675_; lean_object* v_unused_2676_; lean_object* v_unused_2677_; lean_object* v_unused_2678_; lean_object* v_unused_2679_; 
v_unused_2675_ = lean_ctor_get(v_r_2625_, 4);
lean_dec(v_unused_2675_);
v_unused_2676_ = lean_ctor_get(v_r_2625_, 3);
lean_dec(v_unused_2676_);
v_unused_2677_ = lean_ctor_get(v_r_2625_, 2);
lean_dec(v_unused_2677_);
v_unused_2678_ = lean_ctor_get(v_r_2625_, 1);
lean_dec(v_unused_2678_);
v_unused_2679_ = lean_ctor_get(v_r_2625_, 0);
lean_dec(v_unused_2679_);
v___x_2647_ = v_r_2625_;
v_isShared_2648_ = v_isSharedCheck_2674_;
goto v_resetjp_2646_;
}
else
{
lean_dec(v_r_2625_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2674_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___x_2662_; lean_object* v___y_2664_; 
v___x_2649_ = lean_nat_add(v___x_2619_, v_size_2621_);
lean_dec(v_size_2621_);
v___x_2650_ = lean_nat_add(v___x_2649_, v_size_2620_);
lean_dec(v___x_2649_);
v___x_2662_ = lean_nat_add(v___x_2619_, v_size_2637_);
if (lean_obj_tag(v_l_2641_) == 0)
{
lean_object* v_size_2672_; 
v_size_2672_ = lean_ctor_get(v_l_2641_, 0);
lean_inc(v_size_2672_);
v___y_2664_ = v_size_2672_;
goto v___jp_2663_;
}
else
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_unsigned_to_nat(0u);
v___y_2664_ = v___x_2673_;
goto v___jp_2663_;
}
v___jp_2651_:
{
lean_object* v___x_2655_; lean_object* v___x_2657_; 
v___x_2655_ = lean_nat_add(v___y_2653_, v___y_2654_);
lean_dec(v___y_2654_);
lean_dec(v___y_2653_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 4, v_r_2612_);
lean_ctor_set(v___x_2647_, 3, v_r_2642_);
lean_ctor_set(v___x_2647_, 2, v_v_2610_);
lean_ctor_set(v___x_2647_, 1, v_k_2609_);
lean_ctor_set(v___x_2647_, 0, v___x_2655_);
v___x_2657_ = v___x_2647_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v___x_2655_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2661_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2661_, 3, v_r_2642_);
lean_ctor_set(v_reuseFailAlloc_2661_, 4, v_r_2612_);
v___x_2657_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2659_; 
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 4, v___x_2657_);
lean_ctor_set(v___x_2635_, 3, v___y_2652_);
lean_ctor_set(v___x_2635_, 2, v_v_2640_);
lean_ctor_set(v___x_2635_, 1, v_k_2639_);
lean_ctor_set(v___x_2635_, 0, v___x_2650_);
v___x_2659_ = v___x_2635_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2650_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v_k_2639_);
lean_ctor_set(v_reuseFailAlloc_2660_, 2, v_v_2640_);
lean_ctor_set(v_reuseFailAlloc_2660_, 3, v___y_2652_);
lean_ctor_set(v_reuseFailAlloc_2660_, 4, v___x_2657_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
v___jp_2663_:
{
lean_object* v___x_2665_; lean_object* v___x_2667_; 
v___x_2665_ = lean_nat_add(v___x_2662_, v___y_2664_);
lean_dec(v___y_2664_);
lean_dec(v___x_2662_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v_l_2641_);
lean_ctor_set(v___x_2614_, 3, v_l_2624_);
lean_ctor_set(v___x_2614_, 2, v_v_2623_);
lean_ctor_set(v___x_2614_, 1, v_k_2622_);
lean_ctor_set(v___x_2614_, 0, v___x_2665_);
v___x_2667_ = v___x_2614_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v___x_2665_);
lean_ctor_set(v_reuseFailAlloc_2671_, 1, v_k_2622_);
lean_ctor_set(v_reuseFailAlloc_2671_, 2, v_v_2623_);
lean_ctor_set(v_reuseFailAlloc_2671_, 3, v_l_2624_);
lean_ctor_set(v_reuseFailAlloc_2671_, 4, v_l_2641_);
v___x_2667_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_nat_add(v___x_2619_, v_size_2620_);
if (lean_obj_tag(v_r_2642_) == 0)
{
lean_object* v_size_2669_; 
v_size_2669_ = lean_ctor_get(v_r_2642_, 0);
lean_inc(v_size_2669_);
v___y_2652_ = v___x_2667_;
v___y_2653_ = v___x_2668_;
v___y_2654_ = v_size_2669_;
goto v___jp_2651_;
}
else
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_unsigned_to_nat(0u);
v___y_2652_ = v___x_2667_;
v___y_2653_ = v___x_2668_;
v___y_2654_ = v___x_2670_;
goto v___jp_2651_;
}
}
}
}
}
else
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
lean_del_object(v___x_2614_);
v___x_2680_ = lean_nat_add(v___x_2619_, v_size_2621_);
lean_dec(v_size_2621_);
v___x_2681_ = lean_nat_add(v___x_2680_, v_size_2620_);
lean_dec(v___x_2680_);
v___x_2682_ = lean_nat_add(v___x_2619_, v_size_2620_);
v___x_2683_ = lean_nat_add(v___x_2682_, v_size_2638_);
lean_dec(v___x_2682_);
lean_inc_ref(v_r_2612_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 4, v_r_2612_);
lean_ctor_set(v___x_2635_, 3, v_r_2625_);
lean_ctor_set(v___x_2635_, 2, v_v_2610_);
lean_ctor_set(v___x_2635_, 1, v_k_2609_);
lean_ctor_set(v___x_2635_, 0, v___x_2683_);
v___x_2685_ = v___x_2635_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2698_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2698_, 3, v_r_2625_);
lean_ctor_set(v_reuseFailAlloc_2698_, 4, v_r_2612_);
v___x_2685_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2692_; 
v_isSharedCheck_2692_ = !lean_is_exclusive(v_r_2612_);
if (v_isSharedCheck_2692_ == 0)
{
lean_object* v_unused_2693_; lean_object* v_unused_2694_; lean_object* v_unused_2695_; lean_object* v_unused_2696_; lean_object* v_unused_2697_; 
v_unused_2693_ = lean_ctor_get(v_r_2612_, 4);
lean_dec(v_unused_2693_);
v_unused_2694_ = lean_ctor_get(v_r_2612_, 3);
lean_dec(v_unused_2694_);
v_unused_2695_ = lean_ctor_get(v_r_2612_, 2);
lean_dec(v_unused_2695_);
v_unused_2696_ = lean_ctor_get(v_r_2612_, 1);
lean_dec(v_unused_2696_);
v_unused_2697_ = lean_ctor_get(v_r_2612_, 0);
lean_dec(v_unused_2697_);
v___x_2687_ = v_r_2612_;
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
else
{
lean_dec(v_r_2612_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
lean_ctor_set(v___x_2687_, 4, v___x_2685_);
lean_ctor_set(v___x_2687_, 3, v_l_2624_);
lean_ctor_set(v___x_2687_, 2, v_v_2623_);
lean_ctor_set(v___x_2687_, 1, v_k_2622_);
lean_ctor_set(v___x_2687_, 0, v___x_2681_);
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2691_, 1, v_k_2622_);
lean_ctor_set(v_reuseFailAlloc_2691_, 2, v_v_2623_);
lean_ctor_set(v_reuseFailAlloc_2691_, 3, v_l_2624_);
lean_ctor_set(v_reuseFailAlloc_2691_, 4, v___x_2685_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2705_; 
v_l_2705_ = lean_ctor_get(v_impl_2618_, 3);
lean_inc(v_l_2705_);
if (lean_obj_tag(v_l_2705_) == 0)
{
lean_object* v_r_2706_; lean_object* v_k_2707_; lean_object* v_v_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2719_; 
v_r_2706_ = lean_ctor_get(v_impl_2618_, 4);
v_k_2707_ = lean_ctor_get(v_impl_2618_, 1);
v_v_2708_ = lean_ctor_get(v_impl_2618_, 2);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_impl_2618_);
if (v_isSharedCheck_2719_ == 0)
{
lean_object* v_unused_2720_; lean_object* v_unused_2721_; 
v_unused_2720_ = lean_ctor_get(v_impl_2618_, 3);
lean_dec(v_unused_2720_);
v_unused_2721_ = lean_ctor_get(v_impl_2618_, 0);
lean_dec(v_unused_2721_);
v___x_2710_ = v_impl_2618_;
v_isShared_2711_ = v_isSharedCheck_2719_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_r_2706_);
lean_inc(v_v_2708_);
lean_inc(v_k_2707_);
lean_dec(v_impl_2618_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2719_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2712_; lean_object* v___x_2714_; 
v___x_2712_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2706_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 3, v_r_2706_);
lean_ctor_set(v___x_2710_, 2, v_v_2610_);
lean_ctor_set(v___x_2710_, 1, v_k_2609_);
lean_ctor_set(v___x_2710_, 0, v___x_2619_);
v___x_2714_ = v___x_2710_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2718_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2718_, 3, v_r_2706_);
lean_ctor_set(v_reuseFailAlloc_2718_, 4, v_r_2706_);
v___x_2714_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
lean_object* v___x_2716_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v___x_2714_);
lean_ctor_set(v___x_2614_, 3, v_l_2705_);
lean_ctor_set(v___x_2614_, 2, v_v_2708_);
lean_ctor_set(v___x_2614_, 1, v_k_2707_);
lean_ctor_set(v___x_2614_, 0, v___x_2712_);
v___x_2716_ = v___x_2614_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2712_);
lean_ctor_set(v_reuseFailAlloc_2717_, 1, v_k_2707_);
lean_ctor_set(v_reuseFailAlloc_2717_, 2, v_v_2708_);
lean_ctor_set(v_reuseFailAlloc_2717_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2717_, 4, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
else
{
lean_object* v_r_2722_; 
v_r_2722_ = lean_ctor_get(v_impl_2618_, 4);
lean_inc(v_r_2722_);
if (lean_obj_tag(v_r_2722_) == 0)
{
lean_object* v_k_2723_; lean_object* v_v_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2747_; 
v_k_2723_ = lean_ctor_get(v_impl_2618_, 1);
v_v_2724_ = lean_ctor_get(v_impl_2618_, 2);
v_isSharedCheck_2747_ = !lean_is_exclusive(v_impl_2618_);
if (v_isSharedCheck_2747_ == 0)
{
lean_object* v_unused_2748_; lean_object* v_unused_2749_; lean_object* v_unused_2750_; 
v_unused_2748_ = lean_ctor_get(v_impl_2618_, 4);
lean_dec(v_unused_2748_);
v_unused_2749_ = lean_ctor_get(v_impl_2618_, 3);
lean_dec(v_unused_2749_);
v_unused_2750_ = lean_ctor_get(v_impl_2618_, 0);
lean_dec(v_unused_2750_);
v___x_2726_ = v_impl_2618_;
v_isShared_2727_ = v_isSharedCheck_2747_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_v_2724_);
lean_inc(v_k_2723_);
lean_dec(v_impl_2618_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2747_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v_k_2728_; lean_object* v_v_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2743_; 
v_k_2728_ = lean_ctor_get(v_r_2722_, 1);
v_v_2729_ = lean_ctor_get(v_r_2722_, 2);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_r_2722_);
if (v_isSharedCheck_2743_ == 0)
{
lean_object* v_unused_2744_; lean_object* v_unused_2745_; lean_object* v_unused_2746_; 
v_unused_2744_ = lean_ctor_get(v_r_2722_, 4);
lean_dec(v_unused_2744_);
v_unused_2745_ = lean_ctor_get(v_r_2722_, 3);
lean_dec(v_unused_2745_);
v_unused_2746_ = lean_ctor_get(v_r_2722_, 0);
lean_dec(v_unused_2746_);
v___x_2731_ = v_r_2722_;
v_isShared_2732_ = v_isSharedCheck_2743_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_v_2729_);
lean_inc(v_k_2728_);
lean_dec(v_r_2722_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2743_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; lean_object* v___x_2735_; 
v___x_2733_ = lean_unsigned_to_nat(3u);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 4, v_l_2705_);
lean_ctor_set(v___x_2731_, 3, v_l_2705_);
lean_ctor_set(v___x_2731_, 2, v_v_2724_);
lean_ctor_set(v___x_2731_, 1, v_k_2723_);
lean_ctor_set(v___x_2731_, 0, v___x_2619_);
v___x_2735_ = v___x_2731_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2742_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2742_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2742_, 4, v_l_2705_);
v___x_2735_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2737_; 
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 4, v_l_2705_);
lean_ctor_set(v___x_2726_, 2, v_v_2610_);
lean_ctor_set(v___x_2726_, 1, v_k_2609_);
lean_ctor_set(v___x_2726_, 0, v___x_2619_);
v___x_2737_ = v___x_2726_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2741_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2741_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2741_, 4, v_l_2705_);
v___x_2737_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
lean_object* v___x_2739_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v___x_2737_);
lean_ctor_set(v___x_2614_, 3, v___x_2735_);
lean_ctor_set(v___x_2614_, 2, v_v_2729_);
lean_ctor_set(v___x_2614_, 1, v_k_2728_);
lean_ctor_set(v___x_2614_, 0, v___x_2733_);
v___x_2739_ = v___x_2614_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___x_2733_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v_k_2728_);
lean_ctor_set(v_reuseFailAlloc_2740_, 2, v_v_2729_);
lean_ctor_set(v_reuseFailAlloc_2740_, 3, v___x_2735_);
lean_ctor_set(v_reuseFailAlloc_2740_, 4, v___x_2737_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
}
else
{
lean_object* v___x_2751_; lean_object* v___x_2753_; 
v___x_2751_ = lean_unsigned_to_nat(2u);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v_r_2722_);
lean_ctor_set(v___x_2614_, 3, v_impl_2618_);
lean_ctor_set(v___x_2614_, 0, v___x_2751_);
v___x_2753_ = v___x_2614_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2751_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2754_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2754_, 3, v_impl_2618_);
lean_ctor_set(v_reuseFailAlloc_2754_, 4, v_r_2722_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
}
}
case 1:
{
lean_object* v___x_2756_; 
lean_dec(v_v_2610_);
lean_dec(v_k_2609_);
lean_dec_ref(v_cmp_2604_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 2, v_v_2606_);
lean_ctor_set(v___x_2614_, 1, v_k_2605_);
v___x_2756_ = v___x_2614_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_size_2608_);
lean_ctor_set(v_reuseFailAlloc_2757_, 1, v_k_2605_);
lean_ctor_set(v_reuseFailAlloc_2757_, 2, v_v_2606_);
lean_ctor_set(v_reuseFailAlloc_2757_, 3, v_l_2611_);
lean_ctor_set(v_reuseFailAlloc_2757_, 4, v_r_2612_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
default: 
{
lean_object* v_impl_2758_; lean_object* v___x_2759_; 
lean_dec(v_size_2608_);
v_impl_2758_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2604_, v_k_2605_, v_v_2606_, v_r_2612_);
v___x_2759_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2611_) == 0)
{
lean_object* v_size_2760_; lean_object* v_size_2761_; lean_object* v_k_2762_; lean_object* v_v_2763_; lean_object* v_l_2764_; lean_object* v_r_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; uint8_t v___x_2768_; 
v_size_2760_ = lean_ctor_get(v_l_2611_, 0);
v_size_2761_ = lean_ctor_get(v_impl_2758_, 0);
lean_inc(v_size_2761_);
v_k_2762_ = lean_ctor_get(v_impl_2758_, 1);
lean_inc(v_k_2762_);
v_v_2763_ = lean_ctor_get(v_impl_2758_, 2);
lean_inc(v_v_2763_);
v_l_2764_ = lean_ctor_get(v_impl_2758_, 3);
lean_inc(v_l_2764_);
v_r_2765_ = lean_ctor_get(v_impl_2758_, 4);
lean_inc(v_r_2765_);
v___x_2766_ = lean_unsigned_to_nat(3u);
v___x_2767_ = lean_nat_mul(v___x_2766_, v_size_2760_);
v___x_2768_ = lean_nat_dec_lt(v___x_2767_, v_size_2761_);
lean_dec(v___x_2767_);
if (v___x_2768_ == 0)
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2772_; 
lean_dec(v_r_2765_);
lean_dec(v_l_2764_);
lean_dec(v_v_2763_);
lean_dec(v_k_2762_);
v___x_2769_ = lean_nat_add(v___x_2759_, v_size_2760_);
v___x_2770_ = lean_nat_add(v___x_2769_, v_size_2761_);
lean_dec(v_size_2761_);
lean_dec(v___x_2769_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v_impl_2758_);
lean_ctor_set(v___x_2614_, 0, v___x_2770_);
v___x_2772_ = v___x_2614_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2773_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2773_, 3, v_l_2611_);
lean_ctor_set(v_reuseFailAlloc_2773_, 4, v_impl_2758_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
else
{
lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2837_; 
v_isSharedCheck_2837_ = !lean_is_exclusive(v_impl_2758_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; lean_object* v_unused_2839_; lean_object* v_unused_2840_; lean_object* v_unused_2841_; lean_object* v_unused_2842_; 
v_unused_2838_ = lean_ctor_get(v_impl_2758_, 4);
lean_dec(v_unused_2838_);
v_unused_2839_ = lean_ctor_get(v_impl_2758_, 3);
lean_dec(v_unused_2839_);
v_unused_2840_ = lean_ctor_get(v_impl_2758_, 2);
lean_dec(v_unused_2840_);
v_unused_2841_ = lean_ctor_get(v_impl_2758_, 1);
lean_dec(v_unused_2841_);
v_unused_2842_ = lean_ctor_get(v_impl_2758_, 0);
lean_dec(v_unused_2842_);
v___x_2775_ = v_impl_2758_;
v_isShared_2776_ = v_isSharedCheck_2837_;
goto v_resetjp_2774_;
}
else
{
lean_dec(v_impl_2758_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2837_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v_size_2777_; lean_object* v_k_2778_; lean_object* v_v_2779_; lean_object* v_l_2780_; lean_object* v_r_2781_; lean_object* v_size_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; uint8_t v___x_2785_; 
v_size_2777_ = lean_ctor_get(v_l_2764_, 0);
v_k_2778_ = lean_ctor_get(v_l_2764_, 1);
v_v_2779_ = lean_ctor_get(v_l_2764_, 2);
v_l_2780_ = lean_ctor_get(v_l_2764_, 3);
v_r_2781_ = lean_ctor_get(v_l_2764_, 4);
v_size_2782_ = lean_ctor_get(v_r_2765_, 0);
v___x_2783_ = lean_unsigned_to_nat(2u);
v___x_2784_ = lean_nat_mul(v___x_2783_, v_size_2782_);
v___x_2785_ = lean_nat_dec_lt(v_size_2777_, v___x_2784_);
lean_dec(v___x_2784_);
if (v___x_2785_ == 0)
{
lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2813_; 
lean_inc(v_r_2781_);
lean_inc(v_l_2780_);
lean_inc(v_v_2779_);
lean_inc(v_k_2778_);
v_isSharedCheck_2813_ = !lean_is_exclusive(v_l_2764_);
if (v_isSharedCheck_2813_ == 0)
{
lean_object* v_unused_2814_; lean_object* v_unused_2815_; lean_object* v_unused_2816_; lean_object* v_unused_2817_; lean_object* v_unused_2818_; 
v_unused_2814_ = lean_ctor_get(v_l_2764_, 4);
lean_dec(v_unused_2814_);
v_unused_2815_ = lean_ctor_get(v_l_2764_, 3);
lean_dec(v_unused_2815_);
v_unused_2816_ = lean_ctor_get(v_l_2764_, 2);
lean_dec(v_unused_2816_);
v_unused_2817_ = lean_ctor_get(v_l_2764_, 1);
lean_dec(v_unused_2817_);
v_unused_2818_ = lean_ctor_get(v_l_2764_, 0);
lean_dec(v_unused_2818_);
v___x_2787_ = v_l_2764_;
v_isShared_2788_ = v_isSharedCheck_2813_;
goto v_resetjp_2786_;
}
else
{
lean_dec(v_l_2764_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2813_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2803_; 
v___x_2789_ = lean_nat_add(v___x_2759_, v_size_2760_);
v___x_2790_ = lean_nat_add(v___x_2789_, v_size_2761_);
lean_dec(v_size_2761_);
if (lean_obj_tag(v_l_2780_) == 0)
{
lean_object* v_size_2811_; 
v_size_2811_ = lean_ctor_get(v_l_2780_, 0);
lean_inc(v_size_2811_);
v___y_2803_ = v_size_2811_;
goto v___jp_2802_;
}
else
{
lean_object* v___x_2812_; 
v___x_2812_ = lean_unsigned_to_nat(0u);
v___y_2803_ = v___x_2812_;
goto v___jp_2802_;
}
v___jp_2791_:
{
lean_object* v___x_2795_; lean_object* v___x_2797_; 
v___x_2795_ = lean_nat_add(v___y_2792_, v___y_2794_);
lean_dec(v___y_2794_);
lean_dec(v___y_2792_);
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 4, v_r_2765_);
lean_ctor_set(v___x_2787_, 3, v_r_2781_);
lean_ctor_set(v___x_2787_, 2, v_v_2763_);
lean_ctor_set(v___x_2787_, 1, v_k_2762_);
lean_ctor_set(v___x_2787_, 0, v___x_2795_);
v___x_2797_ = v___x_2787_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v___x_2795_);
lean_ctor_set(v_reuseFailAlloc_2801_, 1, v_k_2762_);
lean_ctor_set(v_reuseFailAlloc_2801_, 2, v_v_2763_);
lean_ctor_set(v_reuseFailAlloc_2801_, 3, v_r_2781_);
lean_ctor_set(v_reuseFailAlloc_2801_, 4, v_r_2765_);
v___x_2797_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
lean_object* v___x_2799_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 4, v___x_2797_);
lean_ctor_set(v___x_2775_, 3, v___y_2793_);
lean_ctor_set(v___x_2775_, 2, v_v_2779_);
lean_ctor_set(v___x_2775_, 1, v_k_2778_);
lean_ctor_set(v___x_2775_, 0, v___x_2790_);
v___x_2799_ = v___x_2775_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v___x_2790_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v_k_2778_);
lean_ctor_set(v_reuseFailAlloc_2800_, 2, v_v_2779_);
lean_ctor_set(v_reuseFailAlloc_2800_, 3, v___y_2793_);
lean_ctor_set(v_reuseFailAlloc_2800_, 4, v___x_2797_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
v___jp_2802_:
{
lean_object* v___x_2804_; lean_object* v___x_2806_; 
v___x_2804_ = lean_nat_add(v___x_2789_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec(v___x_2789_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v_l_2780_);
lean_ctor_set(v___x_2614_, 0, v___x_2804_);
v___x_2806_ = v___x_2614_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2804_);
lean_ctor_set(v_reuseFailAlloc_2810_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2810_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2810_, 3, v_l_2611_);
lean_ctor_set(v_reuseFailAlloc_2810_, 4, v_l_2780_);
v___x_2806_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; 
v___x_2807_ = lean_nat_add(v___x_2759_, v_size_2782_);
if (lean_obj_tag(v_r_2781_) == 0)
{
lean_object* v_size_2808_; 
v_size_2808_ = lean_ctor_get(v_r_2781_, 0);
lean_inc(v_size_2808_);
v___y_2792_ = v___x_2807_;
v___y_2793_ = v___x_2806_;
v___y_2794_ = v_size_2808_;
goto v___jp_2791_;
}
else
{
lean_object* v___x_2809_; 
v___x_2809_ = lean_unsigned_to_nat(0u);
v___y_2792_ = v___x_2807_;
v___y_2793_ = v___x_2806_;
v___y_2794_ = v___x_2809_;
goto v___jp_2791_;
}
}
}
}
}
else
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2823_; 
lean_del_object(v___x_2614_);
v___x_2819_ = lean_nat_add(v___x_2759_, v_size_2760_);
v___x_2820_ = lean_nat_add(v___x_2819_, v_size_2761_);
lean_dec(v_size_2761_);
v___x_2821_ = lean_nat_add(v___x_2819_, v_size_2777_);
lean_dec(v___x_2819_);
lean_inc_ref(v_l_2611_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 4, v_l_2764_);
lean_ctor_set(v___x_2775_, 3, v_l_2611_);
lean_ctor_set(v___x_2775_, 2, v_v_2610_);
lean_ctor_set(v___x_2775_, 1, v_k_2609_);
lean_ctor_set(v___x_2775_, 0, v___x_2821_);
v___x_2823_ = v___x_2775_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2821_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2836_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2836_, 3, v_l_2611_);
lean_ctor_set(v_reuseFailAlloc_2836_, 4, v_l_2764_);
v___x_2823_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
v_isSharedCheck_2830_ = !lean_is_exclusive(v_l_2611_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; lean_object* v_unused_2832_; lean_object* v_unused_2833_; lean_object* v_unused_2834_; lean_object* v_unused_2835_; 
v_unused_2831_ = lean_ctor_get(v_l_2611_, 4);
lean_dec(v_unused_2831_);
v_unused_2832_ = lean_ctor_get(v_l_2611_, 3);
lean_dec(v_unused_2832_);
v_unused_2833_ = lean_ctor_get(v_l_2611_, 2);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v_l_2611_, 1);
lean_dec(v_unused_2834_);
v_unused_2835_ = lean_ctor_get(v_l_2611_, 0);
lean_dec(v_unused_2835_);
v___x_2825_ = v_l_2611_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_dec(v_l_2611_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 4, v_r_2765_);
lean_ctor_set(v___x_2825_, 3, v___x_2823_);
lean_ctor_set(v___x_2825_, 2, v_v_2763_);
lean_ctor_set(v___x_2825_, 1, v_k_2762_);
lean_ctor_set(v___x_2825_, 0, v___x_2820_);
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_k_2762_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v_v_2763_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v___x_2823_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v_r_2765_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2843_; 
v_l_2843_ = lean_ctor_get(v_impl_2758_, 3);
lean_inc(v_l_2843_);
if (lean_obj_tag(v_l_2843_) == 0)
{
lean_object* v_r_2844_; lean_object* v_k_2845_; lean_object* v_v_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2869_; 
v_r_2844_ = lean_ctor_get(v_impl_2758_, 4);
v_k_2845_ = lean_ctor_get(v_impl_2758_, 1);
v_v_2846_ = lean_ctor_get(v_impl_2758_, 2);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_impl_2758_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; lean_object* v_unused_2871_; 
v_unused_2870_ = lean_ctor_get(v_impl_2758_, 3);
lean_dec(v_unused_2870_);
v_unused_2871_ = lean_ctor_get(v_impl_2758_, 0);
lean_dec(v_unused_2871_);
v___x_2848_ = v_impl_2758_;
v_isShared_2849_ = v_isSharedCheck_2869_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_r_2844_);
lean_inc(v_v_2846_);
lean_inc(v_k_2845_);
lean_dec(v_impl_2758_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2869_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v_k_2850_; lean_object* v_v_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2865_; 
v_k_2850_ = lean_ctor_get(v_l_2843_, 1);
v_v_2851_ = lean_ctor_get(v_l_2843_, 2);
v_isSharedCheck_2865_ = !lean_is_exclusive(v_l_2843_);
if (v_isSharedCheck_2865_ == 0)
{
lean_object* v_unused_2866_; lean_object* v_unused_2867_; lean_object* v_unused_2868_; 
v_unused_2866_ = lean_ctor_get(v_l_2843_, 4);
lean_dec(v_unused_2866_);
v_unused_2867_ = lean_ctor_get(v_l_2843_, 3);
lean_dec(v_unused_2867_);
v_unused_2868_ = lean_ctor_get(v_l_2843_, 0);
lean_dec(v_unused_2868_);
v___x_2853_ = v_l_2843_;
v_isShared_2854_ = v_isSharedCheck_2865_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_v_2851_);
lean_inc(v_k_2850_);
lean_dec(v_l_2843_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2865_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2855_; lean_object* v___x_2857_; 
v___x_2855_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2844_, 2);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 4, v_r_2844_);
lean_ctor_set(v___x_2853_, 3, v_r_2844_);
lean_ctor_set(v___x_2853_, 2, v_v_2610_);
lean_ctor_set(v___x_2853_, 1, v_k_2609_);
lean_ctor_set(v___x_2853_, 0, v___x_2759_);
v___x_2857_ = v___x_2853_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v___x_2759_);
lean_ctor_set(v_reuseFailAlloc_2864_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2864_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2864_, 3, v_r_2844_);
lean_ctor_set(v_reuseFailAlloc_2864_, 4, v_r_2844_);
v___x_2857_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2859_; 
lean_inc(v_r_2844_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 3, v_r_2844_);
lean_ctor_set(v___x_2848_, 0, v___x_2759_);
v___x_2859_ = v___x_2848_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v___x_2759_);
lean_ctor_set(v_reuseFailAlloc_2863_, 1, v_k_2845_);
lean_ctor_set(v_reuseFailAlloc_2863_, 2, v_v_2846_);
lean_ctor_set(v_reuseFailAlloc_2863_, 3, v_r_2844_);
lean_ctor_set(v_reuseFailAlloc_2863_, 4, v_r_2844_);
v___x_2859_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
lean_object* v___x_2861_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v___x_2859_);
lean_ctor_set(v___x_2614_, 3, v___x_2857_);
lean_ctor_set(v___x_2614_, 2, v_v_2851_);
lean_ctor_set(v___x_2614_, 1, v_k_2850_);
lean_ctor_set(v___x_2614_, 0, v___x_2855_);
v___x_2861_ = v___x_2614_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v___x_2855_);
lean_ctor_set(v_reuseFailAlloc_2862_, 1, v_k_2850_);
lean_ctor_set(v_reuseFailAlloc_2862_, 2, v_v_2851_);
lean_ctor_set(v_reuseFailAlloc_2862_, 3, v___x_2857_);
lean_ctor_set(v_reuseFailAlloc_2862_, 4, v___x_2859_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
}
}
else
{
lean_object* v_r_2872_; 
v_r_2872_ = lean_ctor_get(v_impl_2758_, 4);
lean_inc(v_r_2872_);
if (lean_obj_tag(v_r_2872_) == 0)
{
lean_object* v_k_2873_; lean_object* v_v_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2885_; 
v_k_2873_ = lean_ctor_get(v_impl_2758_, 1);
v_v_2874_ = lean_ctor_get(v_impl_2758_, 2);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_impl_2758_);
if (v_isSharedCheck_2885_ == 0)
{
lean_object* v_unused_2886_; lean_object* v_unused_2887_; lean_object* v_unused_2888_; 
v_unused_2886_ = lean_ctor_get(v_impl_2758_, 4);
lean_dec(v_unused_2886_);
v_unused_2887_ = lean_ctor_get(v_impl_2758_, 3);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v_impl_2758_, 0);
lean_dec(v_unused_2888_);
v___x_2876_ = v_impl_2758_;
v_isShared_2877_ = v_isSharedCheck_2885_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_v_2874_);
lean_inc(v_k_2873_);
lean_dec(v_impl_2758_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2885_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2878_; lean_object* v___x_2880_; 
v___x_2878_ = lean_unsigned_to_nat(3u);
if (v_isShared_2877_ == 0)
{
lean_ctor_set(v___x_2876_, 4, v_l_2843_);
lean_ctor_set(v___x_2876_, 2, v_v_2610_);
lean_ctor_set(v___x_2876_, 1, v_k_2609_);
lean_ctor_set(v___x_2876_, 0, v___x_2759_);
v___x_2880_ = v___x_2876_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2759_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2884_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2884_, 3, v_l_2843_);
lean_ctor_set(v_reuseFailAlloc_2884_, 4, v_l_2843_);
v___x_2880_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2882_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v_r_2872_);
lean_ctor_set(v___x_2614_, 3, v___x_2880_);
lean_ctor_set(v___x_2614_, 2, v_v_2874_);
lean_ctor_set(v___x_2614_, 1, v_k_2873_);
lean_ctor_set(v___x_2614_, 0, v___x_2878_);
v___x_2882_ = v___x_2614_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2878_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v_k_2873_);
lean_ctor_set(v_reuseFailAlloc_2883_, 2, v_v_2874_);
lean_ctor_set(v_reuseFailAlloc_2883_, 3, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2883_, 4, v_r_2872_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2891_; 
v___x_2889_ = lean_unsigned_to_nat(2u);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 4, v_impl_2758_);
lean_ctor_set(v___x_2614_, 3, v_r_2872_);
lean_ctor_set(v___x_2614_, 0, v___x_2889_);
v___x_2891_ = v___x_2614_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v___x_2889_);
lean_ctor_set(v_reuseFailAlloc_2892_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2892_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2892_, 3, v_r_2872_);
lean_ctor_set(v_reuseFailAlloc_2892_, 4, v_impl_2758_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
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
lean_object* v___x_2894_; lean_object* v___x_2895_; 
lean_dec_ref(v_cmp_2604_);
v___x_2894_ = lean_unsigned_to_nat(1u);
v___x_2895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2894_);
lean_ctor_set(v___x_2895_, 1, v_k_2605_);
lean_ctor_set(v___x_2895_, 2, v_v_2606_);
lean_ctor_set(v___x_2895_, 3, v_t_2607_);
lean_ctor_set(v___x_2895_, 4, v_t_2607_);
return v___x_2895_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(lean_object* v_cmp_2896_, lean_object* v_init_2897_, lean_object* v_x_2898_){
_start:
{
if (lean_obj_tag(v_x_2898_) == 0)
{
lean_object* v_k_2899_; lean_object* v_v_2900_; lean_object* v_l_2901_; lean_object* v_r_2902_; lean_object* v___x_2903_; 
v_k_2899_ = lean_ctor_get(v_x_2898_, 1);
lean_inc(v_k_2899_);
v_v_2900_ = lean_ctor_get(v_x_2898_, 2);
lean_inc(v_v_2900_);
v_l_2901_ = lean_ctor_get(v_x_2898_, 3);
lean_inc(v_l_2901_);
v_r_2902_ = lean_ctor_get(v_x_2898_, 4);
lean_inc(v_r_2902_);
lean_dec_ref_known(v_x_2898_, 5);
lean_inc_ref(v_cmp_2896_);
v___x_2903_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(v_cmp_2896_, v_init_2897_, v_l_2901_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_dec(v_r_2902_);
lean_dec(v_v_2900_);
lean_dec(v_k_2899_);
lean_dec_ref(v_cmp_2896_);
return v___x_2903_;
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2905_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2903_, 1);
v___x_2905_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(v_v_2900_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
lean_dec(v_a_2904_);
lean_dec(v_r_2902_);
lean_dec(v_k_2899_);
lean_dec_ref(v_cmp_2896_);
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___x_2905_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2905_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2915_; 
v_a_2914_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2914_);
lean_dec_ref_known(v___x_2905_, 1);
lean_inc_ref(v_cmp_2896_);
v___x_2915_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2896_, v_k_2899_, v_a_2914_, v_a_2904_);
v_init_2897_ = v___x_2915_;
v_x_2898_ = v_r_2902_;
goto _start;
}
}
}
else
{
lean_object* v___x_2917_; 
lean_dec_ref(v_cmp_2896_);
v___x_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2917_, 0, v_init_2897_);
return v___x_2917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7(lean_object* v_cmp_2918_, lean_object* v_j_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l_Lean_Json_getObj_x3f(v_j_2919_);
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec_ref(v_cmp_2918_);
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2920_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2920_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
else
{
lean_object* v_a_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_a_2929_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_a_2929_);
lean_dec_ref_known(v___x_2920_, 1);
v___x_2930_ = lean_box(1);
v___x_2931_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(v_cmp_2918_, v___x_2930_, v_a_2929_);
return v___x_2931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4(lean_object* v_x_2935_){
_start:
{
if (lean_obj_tag(v_x_2935_) == 0)
{
lean_object* v___x_2936_; 
v___x_2936_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0));
return v___x_2936_;
}
else
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1));
v___x_2938_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7(v___x_2937_, v_x_2935_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2938_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2938_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
else
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2955_; 
v_a_2947_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2949_ = v___x_2938_;
v_isShared_2950_ = v_isSharedCheck_2955_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v___x_2938_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2955_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2951_, 0, v_a_2947_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v___x_2951_);
v___x_2953_ = v___x_2949_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(lean_object* v_j_2956_, lean_object* v_k_2957_){
_start:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = l_Lean_Json_getObjValD(v_j_2956_, v_k_2957_);
v___x_2959_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4(v___x_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2___boxed(lean_object* v_j_2960_, lean_object* v_k_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(v_j_2960_, v_k_2961_);
lean_dec_ref(v_k_2961_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(lean_object* v_cmp_2963_, lean_object* v_init_2964_, lean_object* v_x_2965_){
_start:
{
if (lean_obj_tag(v_x_2965_) == 0)
{
lean_object* v_k_2966_; lean_object* v_v_2967_; lean_object* v_l_2968_; lean_object* v_r_2969_; lean_object* v___x_2970_; 
v_k_2966_ = lean_ctor_get(v_x_2965_, 1);
lean_inc(v_k_2966_);
v_v_2967_ = lean_ctor_get(v_x_2965_, 2);
lean_inc(v_v_2967_);
v_l_2968_ = lean_ctor_get(v_x_2965_, 3);
lean_inc(v_l_2968_);
v_r_2969_ = lean_ctor_get(v_x_2965_, 4);
lean_inc(v_r_2969_);
lean_dec_ref_known(v_x_2965_, 5);
lean_inc_ref(v_cmp_2963_);
v___x_2970_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(v_cmp_2963_, v_init_2964_, v_l_2968_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_dec(v_r_2969_);
lean_dec(v_v_2967_);
lean_dec(v_k_2966_);
lean_dec_ref(v_cmp_2963_);
return v___x_2970_;
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2972_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2970_, 1);
v___x_2972_ = l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson(v_v_2967_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
lean_dec(v_a_2971_);
lean_dec(v_r_2969_);
lean_dec(v_k_2966_);
lean_dec_ref(v_cmp_2963_);
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2975_ = v___x_2972_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2972_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2982_; 
v_a_2981_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2972_, 1);
lean_inc_ref(v_cmp_2963_);
v___x_2982_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2963_, v_k_2966_, v_a_2981_, v_a_2971_);
v_init_2964_ = v___x_2982_;
v_x_2965_ = v_r_2969_;
goto _start;
}
}
}
else
{
lean_object* v___x_2984_; 
lean_dec_ref(v_cmp_2963_);
v___x_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2984_, 0, v_init_2964_);
return v___x_2984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4(lean_object* v_cmp_2985_, lean_object* v_j_2986_){
_start:
{
lean_object* v___x_2987_; 
v___x_2987_ = l_Lean_Json_getObj_x3f(v_j_2986_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec_ref(v_cmp_2985_);
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2987_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2987_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v_a_2996_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2996_);
lean_dec_ref_known(v___x_2987_, 1);
v___x_2997_ = lean_box(1);
v___x_2998_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(v_cmp_2985_, v___x_2997_, v_a_2996_);
return v___x_2998_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2(lean_object* v_x_2999_){
_start:
{
if (lean_obj_tag(v_x_2999_) == 0)
{
lean_object* v___x_3000_; 
v___x_3000_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0));
return v___x_3000_;
}
else
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1));
v___x_3002_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4(v___x_3001_, v_x_2999_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_3002_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_3002_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
else
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3019_; 
v_a_3011_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3013_ = v___x_3002_;
v_isShared_3014_ = v_isSharedCheck_3019_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_3002_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3019_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3015_; lean_object* v___x_3017_; 
v___x_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3015_, 0, v_a_3011_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 0, v___x_3015_);
v___x_3017_ = v___x_3013_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(lean_object* v_j_3020_, lean_object* v_k_3021_){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3022_ = l_Lean_Json_getObjValD(v_j_3020_, v_k_3021_);
v___x_3023_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2(v___x_3022_);
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1___boxed(lean_object* v_j_3024_, lean_object* v_k_3025_){
_start:
{
lean_object* v_res_3026_; 
v_res_3026_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(v_j_3024_, v_k_3025_);
lean_dec_ref(v_k_3025_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(lean_object* v_kind_3027_){
_start:
{
lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3028_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0));
v___x_3029_ = lean_unsigned_to_nat(80u);
v___x_3030_ = l_Lean_Json_pretty(v_kind_3027_, v___x_3029_);
v___x_3031_ = lean_string_append(v___x_3028_, v___x_3030_);
lean_dec_ref(v___x_3030_);
v___x_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(size_t v_sz_3033_, size_t v_i_3034_, lean_object* v_bs_3035_){
_start:
{
uint8_t v___x_3036_; 
v___x_3036_ = lean_usize_dec_lt(v_i_3034_, v_sz_3033_);
if (v___x_3036_ == 0)
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = l_unsafeCast___redArg(v_bs_3035_);
lean_dec_ref(v_bs_3035_);
v___x_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
return v___x_3038_;
}
else
{
lean_object* v_v_3039_; lean_object* v___x_3040_; lean_object* v_bs_x27_3041_; lean_object* v_a_3043_; lean_object* v___x_3049_; lean_object* v___y_3063_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v_v_3039_ = lean_array_uget(v_bs_3035_, v_i_3034_);
v___x_3040_ = lean_unsigned_to_nat(0u);
v_bs_x27_3041_ = lean_array_uset(v_bs_3035_, v_i_3034_, v___x_3040_);
v___x_3049_ = l_unsafeCast___redArg(v_v_3039_);
lean_dec(v_v_3039_);
v___x_3065_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
lean_inc(v___x_3049_);
v___x_3066_ = l_Lean_Json_getObjVal_x3f(v___x_3049_, v___x_3065_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_dec_ref_known(v___x_3066_, 1);
goto v___jp_3050_;
}
else
{
lean_object* v_a_3067_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
if (lean_obj_tag(v_a_3067_) == 3)
{
lean_object* v_s_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v_s_3068_ = lean_ctor_get(v_a_3067_, 0);
v___x_3069_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1));
v___x_3070_ = lean_string_dec_eq(v_s_3068_, v___x_3069_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3071_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3));
v___x_3072_ = lean_string_dec_eq(v_s_3068_, v___x_3071_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; uint8_t v___x_3074_; 
v___x_3073_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5));
v___x_3074_ = lean_string_dec_eq(v_s_3068_, v___x_3073_);
if (v___x_3074_ == 0)
{
lean_object* v___x_3075_; 
v___x_3075_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(v_a_3067_);
v___y_3063_ = v___x_3075_;
goto v___jp_3062_;
}
else
{
lean_object* v___x_3076_; 
lean_dec_ref_known(v_a_3067_, 1);
lean_inc(v___x_3049_);
v___x_3076_ = l_Lean_Lsp_instFromJsonDeleteFile_fromJson(v___x_3049_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_dec_ref_known(v___x_3076_, 1);
goto v___jp_3050_;
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
lean_dec(v___x_3049_);
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set_tag(v___x_3079_, 2);
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
v_a_3043_ = v___x_3082_;
goto v___jp_3042_;
}
}
}
}
}
else
{
lean_object* v___x_3085_; 
lean_dec_ref_known(v_a_3067_, 1);
lean_inc(v___x_3049_);
v___x_3085_ = l_Lean_Lsp_instFromJsonRenameFile_fromJson(v___x_3049_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_dec_ref_known(v___x_3085_, 1);
goto v___jp_3050_;
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec(v___x_3049_);
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3085_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3085_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
v_a_3043_ = v___x_3091_;
goto v___jp_3042_;
}
}
}
}
}
else
{
lean_object* v___x_3094_; 
lean_dec_ref_known(v_a_3067_, 1);
lean_inc(v___x_3049_);
v___x_3094_ = l_Lean_Lsp_instFromJsonCreateFile_fromJson(v___x_3049_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_dec_ref_known(v___x_3094_, 1);
goto v___jp_3050_;
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v___x_3049_);
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3094_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3094_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set_tag(v___x_3097_, 0);
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
v_a_3043_ = v___x_3100_;
goto v___jp_3042_;
}
}
}
}
}
else
{
lean_object* v___x_3103_; 
v___x_3103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(v_a_3067_);
v___y_3063_ = v___x_3103_;
goto v___jp_3062_;
}
}
v___jp_3042_:
{
size_t v___x_3044_; size_t v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3044_ = ((size_t)1ULL);
v___x_3045_ = lean_usize_add(v_i_3034_, v___x_3044_);
v___x_3046_ = l_unsafeCast___redArg(v_a_3043_);
lean_dec_ref(v_a_3043_);
v___x_3047_ = lean_array_uset(v_bs_x27_3041_, v_i_3034_, v___x_3046_);
v_i_3034_ = v___x_3045_;
v_bs_3035_ = v___x_3047_;
goto _start;
}
v___jp_3050_:
{
lean_object* v___x_3051_; 
v___x_3051_ = l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(v___x_3049_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
lean_dec_ref(v_bs_x27_3041_);
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3054_ = v___x_3051_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3051_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3052_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3061_; 
v_a_3060_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___x_3051_, 1);
v___x_3061_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3061_, 0, v_a_3060_);
v_a_3043_ = v___x_3061_;
goto v___jp_3042_;
}
}
v___jp_3062_:
{
if (lean_obj_tag(v___y_3063_) == 0)
{
lean_dec_ref_known(v___y_3063_, 1);
goto v___jp_3050_;
}
else
{
lean_object* v_a_3064_; 
lean_dec(v___x_3049_);
v_a_3064_ = lean_ctor_get(v___y_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___y_3063_, 1);
v_a_3043_ = v_a_3064_;
goto v___jp_3042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_sz_3104_, lean_object* v_i_3105_, lean_object* v_bs_3106_){
_start:
{
size_t v_sz_boxed_3107_; size_t v_i_boxed_3108_; lean_object* v_res_3109_; 
v_sz_boxed_3107_ = lean_unbox_usize(v_sz_3104_);
lean_dec(v_sz_3104_);
v_i_boxed_3108_ = lean_unbox_usize(v_i_3105_);
lean_dec(v_i_3105_);
v_res_3109_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_boxed_3107_, v_i_boxed_3108_, v_bs_3106_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_3110_){
_start:
{
if (lean_obj_tag(v_x_3110_) == 4)
{
lean_object* v_elems_3111_; size_t v_sz_3112_; size_t v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v_elems_3111_ = lean_ctor_get(v_x_3110_, 0);
lean_inc_ref(v_elems_3111_);
lean_dec_ref_known(v_x_3110_, 1);
v_sz_3112_ = lean_array_size(v_elems_3111_);
v___x_3113_ = ((size_t)0ULL);
v___x_3114_ = l_unsafeCast___redArg(v_elems_3111_);
lean_dec_ref(v_elems_3111_);
v___x_3115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_3112_, v___x_3113_, v___x_3114_);
v___x_3116_ = l_unsafeCast___redArg(v___x_3115_);
lean_dec_ref(v___x_3115_);
return v___x_3116_;
}
else
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3117_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_3118_ = lean_unsigned_to_nat(80u);
v___x_3119_ = l_Lean_Json_pretty(v_x_3110_, v___x_3118_);
v___x_3120_ = lean_string_append(v___x_3117_, v___x_3119_);
lean_dec_ref(v___x_3119_);
v___x_3121_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_3122_ = lean_string_append(v___x_3120_, v___x_3121_);
v___x_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0(lean_object* v_x_3126_){
_start:
{
if (lean_obj_tag(v_x_3126_) == 0)
{
lean_object* v___x_3127_; 
v___x_3127_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0));
return v___x_3127_;
}
else
{
lean_object* v___x_3128_; 
v___x_3128_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1(v_x_3126_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3128_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3128_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3145_; 
v_a_3137_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3139_ = v___x_3128_;
v_isShared_3140_ = v_isSharedCheck_3145_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3128_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3145_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3141_, 0, v_a_3137_);
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 0, v___x_3141_);
v___x_3143_ = v___x_3139_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3141_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(lean_object* v_j_3146_, lean_object* v_k_3147_){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = l_Lean_Json_getObjValD(v_j_3146_, v_k_3147_);
v___x_3149_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0(v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0___boxed(lean_object* v_j_3150_, lean_object* v_k_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(v_j_3150_, v_k_3151_);
lean_dec_ref(v_k_3151_);
return v_res_3152_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = 1;
v___x_3159_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1));
v___x_3160_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3159_, v___x_3158_);
return v___x_3160_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3161_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3162_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2);
v___x_3163_ = lean_string_append(v___x_3162_, v___x_3161_);
return v___x_3163_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3167_ = 1;
v___x_3168_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5));
v___x_3169_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3168_, v___x_3167_);
return v___x_3169_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6);
v___x_3171_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3);
v___x_3172_ = lean_string_append(v___x_3171_, v___x_3170_);
return v___x_3172_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3174_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7);
v___x_3175_ = lean_string_append(v___x_3174_, v___x_3173_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11(void){
_start:
{
uint8_t v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = 1;
v___x_3180_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10));
v___x_3181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3180_, v___x_3179_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11);
v___x_3183_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3);
v___x_3184_ = lean_string_append(v___x_3183_, v___x_3182_);
return v___x_3184_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3186_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12);
v___x_3187_ = lean_string_append(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16(void){
_start:
{
uint8_t v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = 1;
v___x_3192_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15));
v___x_3193_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3192_, v___x_3191_);
return v___x_3193_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3194_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16);
v___x_3195_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3);
v___x_3196_ = lean_string_append(v___x_3195_, v___x_3194_);
return v___x_3196_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18(void){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3197_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3198_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17);
v___x_3199_ = lean_string_append(v___x_3198_, v___x_3197_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson(lean_object* v_json_3200_){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3201_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0));
lean_inc(v_json_3200_);
v___x_3202_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(v_json_3200_, v___x_3201_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3212_; 
lean_dec(v_json_3200_);
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3205_ = v___x_3202_;
v_isShared_3206_ = v_isSharedCheck_3212_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3202_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3212_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3207_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8);
v___x_3208_ = lean_string_append(v___x_3207_, v_a_3203_);
lean_dec(v_a_3203_);
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 0, v___x_3208_);
v___x_3210_ = v___x_3205_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3208_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
else
{
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3220_; 
lean_dec(v_json_3200_);
v_a_3213_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3220_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3215_ = v___x_3202_;
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_a_3213_);
lean_dec(v___x_3202_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3218_; 
if (v_isShared_3216_ == 0)
{
lean_ctor_set_tag(v___x_3215_, 0);
v___x_3218_ = v___x_3215_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v_a_3213_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v_a_3221_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3202_, 1);
v___x_3222_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1));
lean_inc(v_json_3200_);
v___x_3223_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(v_json_3200_, v___x_3222_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3233_; 
lean_dec(v_a_3221_);
lean_dec(v_json_3200_);
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3226_ = v___x_3223_;
v_isShared_3227_ = v_isSharedCheck_3233_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3223_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3233_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3231_; 
v___x_3228_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13);
v___x_3229_ = lean_string_append(v___x_3228_, v_a_3224_);
lean_dec(v_a_3224_);
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3229_);
v___x_3231_ = v___x_3226_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v___x_3229_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
else
{
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_dec(v_a_3221_);
lean_dec(v_json_3200_);
v_a_3234_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3223_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3223_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
lean_ctor_set_tag(v___x_3236_, 0);
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
else
{
lean_object* v_a_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v_a_3242_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v___x_3223_, 1);
v___x_3243_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2));
v___x_3244_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(v_json_3200_, v___x_3243_);
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3254_; 
lean_dec(v_a_3242_);
lean_dec(v_a_3221_);
v_a_3245_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3247_ = v___x_3244_;
v_isShared_3248_ = v_isSharedCheck_3254_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3244_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3254_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3252_; 
v___x_3249_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18);
v___x_3250_ = lean_string_append(v___x_3249_, v_a_3245_);
lean_dec(v_a_3245_);
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 0, v___x_3250_);
v___x_3252_ = v___x_3247_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v___x_3250_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
else
{
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec(v_a_3242_);
lean_dec(v_a_3221_);
v_a_3255_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3244_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3244_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
lean_ctor_set_tag(v___x_3257_, 0);
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3271_; 
v_a_3263_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3265_ = v___x_3244_;
v_isShared_3266_ = v_isSharedCheck_3271_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3244_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3271_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3267_, 0, v_a_3221_);
lean_ctor_set(v___x_3267_, 1, v_a_3242_);
lean_ctor_set(v___x_3267_, 2, v_a_3263_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v___x_3267_);
v___x_3269_ = v___x_3265_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3267_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
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
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7(lean_object* v_cmp_3272_, lean_object* v_00_u03b2_3273_, lean_object* v_k_3274_, lean_object* v_v_3275_, lean_object* v_t_3276_, lean_object* v_hl_3277_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_3272_, v_k_3274_, v_v_3275_, v_t_3276_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0(lean_object* v_b_u2082_3284_, lean_object* v_x_3285_){
_start:
{
lean_object* v___x_3286_; 
v___x_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3286_, 0, v_b_u2082_3284_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0___boxed(lean_object* v_b_u2082_3287_, lean_object* v_x_3288_){
_start:
{
lean_object* v_res_3289_; 
v_res_3289_ = l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0(v_b_u2082_3287_, v_x_3288_);
lean_dec(v_x_3288_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__1(lean_object* v___x_3290_, lean_object* v_t_3291_, lean_object* v_a_3292_, lean_object* v_b_u2082_3293_){
_start:
{
lean_object* v___f_3294_; lean_object* v___x_3295_; 
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3294_, 0, v_b_u2082_3293_);
v___x_3295_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___x_3290_, v_a_3292_, v___f_3294_, v_t_3291_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__2(lean_object* v_b_u2082_3296_, lean_object* v_x_3297_){
_start:
{
if (lean_obj_tag(v_x_3297_) == 0)
{
lean_object* v___x_3298_; 
v___x_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3298_, 0, v_b_u2082_3296_);
return v___x_3298_;
}
else
{
lean_object* v_val_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3307_; 
v_val_3299_ = lean_ctor_get(v_x_3297_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v_x_3297_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3301_ = v_x_3297_;
v_isShared_3302_ = v_isSharedCheck_3307_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_val_3299_);
lean_dec(v_x_3297_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3307_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; lean_object* v___x_3305_; 
v___x_3303_ = l_Array_append___redArg(v_val_3299_, v_b_u2082_3296_);
lean_dec_ref(v_b_u2082_3296_);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v___x_3303_);
v___x_3305_ = v___x_3301_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v___x_3303_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__3(lean_object* v___x_3308_, lean_object* v_t_3309_, lean_object* v_a_3310_, lean_object* v_b_u2082_3311_){
_start:
{
lean_object* v___f_3312_; lean_object* v___x_3313_; 
v___f_3312_ = lean_alloc_closure((void*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__2), 2, 1);
lean_closure_set(v___f_3312_, 0, v_b_u2082_3311_);
v___x_3313_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___x_3308_, v_a_3310_, v___f_3312_, v_t_3309_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4(lean_object* v_x_3318_, lean_object* v_y_3319_){
_start:
{
lean_object* v_changes_x3f_3320_; lean_object* v_documentChanges_x3f_3321_; lean_object* v_changeAnnotations_x3f_3322_; lean_object* v___y_3324_; lean_object* v___y_3325_; lean_object* v___y_3361_; 
v_changes_x3f_3320_ = lean_ctor_get(v_y_3319_, 0);
lean_inc(v_changes_x3f_3320_);
v_documentChanges_x3f_3321_ = lean_ctor_get(v_y_3319_, 1);
lean_inc(v_documentChanges_x3f_3321_);
v_changeAnnotations_x3f_3322_ = lean_ctor_get(v_y_3319_, 2);
lean_inc(v_changeAnnotations_x3f_3322_);
lean_dec_ref(v_y_3319_);
if (lean_obj_tag(v_changes_x3f_3320_) == 0)
{
lean_object* v_changes_x3f_3374_; 
v_changes_x3f_3374_ = lean_ctor_get(v_x_3318_, 0);
lean_inc(v_changes_x3f_3374_);
v___y_3361_ = v_changes_x3f_3374_;
goto v___jp_3360_;
}
else
{
lean_object* v_changes_x3f_3375_; 
v_changes_x3f_3375_ = lean_ctor_get(v_x_3318_, 0);
lean_inc(v_changes_x3f_3375_);
if (lean_obj_tag(v_changes_x3f_3375_) == 0)
{
v___y_3361_ = v_changes_x3f_3320_;
goto v___jp_3360_;
}
else
{
lean_object* v_val_3376_; lean_object* v_val_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3386_; 
v_val_3376_ = lean_ctor_get(v_changes_x3f_3320_, 0);
lean_inc(v_val_3376_);
lean_dec_ref_known(v_changes_x3f_3320_, 1);
v_val_3377_ = lean_ctor_get(v_changes_x3f_3375_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v_changes_x3f_3375_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3379_ = v_changes_x3f_3375_;
v_isShared_3380_ = v_isSharedCheck_3386_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_val_3377_);
lean_dec(v_changes_x3f_3375_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3386_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___f_3381_; lean_object* v___x_3382_; lean_object* v___x_3384_; 
v___f_3381_ = ((lean_object*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1));
v___x_3382_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_3381_, v_val_3377_, v_val_3376_);
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 0, v___x_3382_);
v___x_3384_ = v___x_3379_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v___x_3382_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
v___y_3361_ = v___x_3384_;
goto v___jp_3360_;
}
}
}
}
v___jp_3323_:
{
if (lean_obj_tag(v_changeAnnotations_x3f_3322_) == 0)
{
lean_object* v_changeAnnotations_x3f_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
v_changeAnnotations_x3f_3326_ = lean_ctor_get(v_x_3318_, 2);
v_isSharedCheck_3333_ = !lean_is_exclusive(v_x_3318_);
if (v_isSharedCheck_3333_ == 0)
{
lean_object* v_unused_3334_; lean_object* v_unused_3335_; 
v_unused_3334_ = lean_ctor_get(v_x_3318_, 1);
lean_dec(v_unused_3334_);
v_unused_3335_ = lean_ctor_get(v_x_3318_, 0);
lean_dec(v_unused_3335_);
v___x_3328_ = v_x_3318_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_changeAnnotations_x3f_3326_);
lean_dec(v_x_3318_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
lean_ctor_set(v___x_3328_, 1, v___y_3325_);
lean_ctor_set(v___x_3328_, 0, v___y_3324_);
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___y_3324_);
lean_ctor_set(v_reuseFailAlloc_3332_, 1, v___y_3325_);
lean_ctor_set(v_reuseFailAlloc_3332_, 2, v_changeAnnotations_x3f_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
else
{
lean_object* v_changeAnnotations_x3f_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3357_; 
v_changeAnnotations_x3f_3336_ = lean_ctor_get(v_x_3318_, 2);
v_isSharedCheck_3357_ = !lean_is_exclusive(v_x_3318_);
if (v_isSharedCheck_3357_ == 0)
{
lean_object* v_unused_3358_; lean_object* v_unused_3359_; 
v_unused_3358_ = lean_ctor_get(v_x_3318_, 1);
lean_dec(v_unused_3358_);
v_unused_3359_ = lean_ctor_get(v_x_3318_, 0);
lean_dec(v_unused_3359_);
v___x_3338_ = v_x_3318_;
v_isShared_3339_ = v_isSharedCheck_3357_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_changeAnnotations_x3f_3336_);
lean_dec(v_x_3318_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3357_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
if (lean_obj_tag(v_changeAnnotations_x3f_3336_) == 0)
{
lean_object* v___x_3341_; 
if (v_isShared_3339_ == 0)
{
lean_ctor_set(v___x_3338_, 2, v_changeAnnotations_x3f_3322_);
lean_ctor_set(v___x_3338_, 1, v___y_3325_);
lean_ctor_set(v___x_3338_, 0, v___y_3324_);
v___x_3341_ = v___x_3338_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v___y_3324_);
lean_ctor_set(v_reuseFailAlloc_3342_, 1, v___y_3325_);
lean_ctor_set(v_reuseFailAlloc_3342_, 2, v_changeAnnotations_x3f_3322_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
else
{
lean_object* v_val_3343_; lean_object* v_val_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3356_; 
v_val_3343_ = lean_ctor_get(v_changeAnnotations_x3f_3322_, 0);
lean_inc(v_val_3343_);
lean_dec_ref_known(v_changeAnnotations_x3f_3322_, 1);
v_val_3344_ = lean_ctor_get(v_changeAnnotations_x3f_3336_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v_changeAnnotations_x3f_3336_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3346_ = v_changeAnnotations_x3f_3336_;
v_isShared_3347_ = v_isSharedCheck_3356_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_val_3344_);
lean_dec(v_changeAnnotations_x3f_3336_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3356_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___f_3348_; lean_object* v___x_3349_; lean_object* v___x_3351_; 
v___f_3348_ = ((lean_object*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0));
v___x_3349_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_3348_, v_val_3344_, v_val_3343_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v___x_3349_);
v___x_3351_ = v___x_3346_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v___x_3349_);
v___x_3351_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
lean_object* v___x_3353_; 
if (v_isShared_3339_ == 0)
{
lean_ctor_set(v___x_3338_, 2, v___x_3351_);
lean_ctor_set(v___x_3338_, 1, v___y_3325_);
lean_ctor_set(v___x_3338_, 0, v___y_3324_);
v___x_3353_ = v___x_3338_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___y_3324_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v___y_3325_);
lean_ctor_set(v_reuseFailAlloc_3354_, 2, v___x_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
}
}
}
v___jp_3360_:
{
if (lean_obj_tag(v_documentChanges_x3f_3321_) == 0)
{
lean_object* v_documentChanges_x3f_3362_; 
v_documentChanges_x3f_3362_ = lean_ctor_get(v_x_3318_, 1);
lean_inc(v_documentChanges_x3f_3362_);
v___y_3324_ = v___y_3361_;
v___y_3325_ = v_documentChanges_x3f_3362_;
goto v___jp_3323_;
}
else
{
lean_object* v_documentChanges_x3f_3363_; 
v_documentChanges_x3f_3363_ = lean_ctor_get(v_x_3318_, 1);
lean_inc(v_documentChanges_x3f_3363_);
if (lean_obj_tag(v_documentChanges_x3f_3363_) == 0)
{
v___y_3324_ = v___y_3361_;
v___y_3325_ = v_documentChanges_x3f_3321_;
goto v___jp_3323_;
}
else
{
lean_object* v_val_3364_; lean_object* v_val_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3373_; 
v_val_3364_ = lean_ctor_get(v_documentChanges_x3f_3321_, 0);
lean_inc(v_val_3364_);
lean_dec_ref_known(v_documentChanges_x3f_3321_, 1);
v_val_3365_ = lean_ctor_get(v_documentChanges_x3f_3363_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v_documentChanges_x3f_3363_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3367_ = v_documentChanges_x3f_3363_;
v_isShared_3368_ = v_isSharedCheck_3373_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_val_3365_);
lean_dec(v_documentChanges_x3f_3363_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3373_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3369_; lean_object* v___x_3371_; 
v___x_3369_ = l_Array_append___redArg(v_val_3365_, v_val_3364_);
lean_dec(v_val_3364_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 0, v___x_3369_);
v___x_3371_ = v___x_3367_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3369_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
v___y_3324_ = v___y_3361_;
v___y_3325_ = v___x_3371_;
goto v___jp_3323_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextDocumentEdit(lean_object* v_e_3389_){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3390_ = lean_box(0);
v___x_3391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3391_, 0, v_e_3389_);
v___x_3392_ = lean_unsigned_to_nat(1u);
v___x_3393_ = lean_mk_empty_array_with_capacity(v___x_3392_);
v___x_3394_ = lean_array_push(v___x_3393_, v___x_3391_);
v___x_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3394_);
v___x_3396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3390_);
lean_ctor_set(v___x_3396_, 1, v___x_3395_);
lean_ctor_set(v___x_3396_, 2, v___x_3390_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object* v_doc_3397_, lean_object* v_te_3398_){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3399_ = lean_unsigned_to_nat(1u);
v___x_3400_ = lean_mk_empty_array_with_capacity(v___x_3399_);
v___x_3401_ = lean_array_push(v___x_3400_, v_te_3398_);
v___x_3402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3402_, 0, v_doc_3397_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
v___x_3403_ = l_Lean_Lsp_WorkspaceEdit_ofTextDocumentEdit(v___x_3402_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson(lean_object* v_x_3405_){
_start:
{
lean_object* v_label_x3f_3406_; lean_object* v_edit_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3425_; 
v_label_x3f_3406_ = lean_ctor_get(v_x_3405_, 0);
v_edit_3407_ = lean_ctor_get(v_x_3405_, 1);
v_isSharedCheck_3425_ = !lean_is_exclusive(v_x_3405_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3409_ = v_x_3405_;
v_isShared_3410_ = v_isSharedCheck_3425_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_edit_3407_);
lean_inc(v_label_x3f_3406_);
lean_dec(v_x_3405_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3425_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3411_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
v___x_3412_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3411_, v_label_x3f_3406_);
v___x_3413_ = ((lean_object*)(l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0));
v___x_3414_ = l_Lean_Lsp_instToJsonWorkspaceEdit_toJson(v_edit_3407_);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 1, v___x_3414_);
lean_ctor_set(v___x_3409_, 0, v___x_3413_);
v___x_3416_ = v___x_3409_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3413_);
lean_ctor_set(v_reuseFailAlloc_3424_, 1, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3417_ = lean_box(0);
v___x_3418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3416_);
lean_ctor_set(v___x_3418_, 1, v___x_3417_);
v___x_3419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3418_);
lean_ctor_set(v___x_3419_, 1, v___x_3417_);
v___x_3420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3412_);
lean_ctor_set(v___x_3420_, 1, v___x_3419_);
v___x_3421_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3422_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3420_, v___x_3421_);
v___x_3423_ = l_Lean_Json_mkObj(v___x_3422_);
lean_dec(v___x_3422_);
return v___x_3423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(lean_object* v_j_3428_, lean_object* v_k_3429_){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = l_Lean_Json_getObjValD(v_j_3428_, v_k_3429_);
v___x_3431_ = l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson(v___x_3430_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0___boxed(lean_object* v_j_3432_, lean_object* v_k_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(v_j_3432_, v_k_3433_);
lean_dec_ref(v_k_3433_);
return v_res_3434_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3440_ = 1;
v___x_3441_ = ((lean_object*)(l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1));
v___x_3442_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3441_, v___x_3440_);
return v___x_3442_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3444_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2);
v___x_3445_ = lean_string_append(v___x_3444_, v___x_3443_);
return v___x_3445_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v___x_3449_ = 1;
v___x_3450_ = ((lean_object*)(l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5));
v___x_3451_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3450_, v___x_3449_);
return v___x_3451_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3452_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6);
v___x_3453_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3);
v___x_3454_ = lean_string_append(v___x_3453_, v___x_3452_);
return v___x_3454_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3455_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3456_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7);
v___x_3457_ = lean_string_append(v___x_3456_, v___x_3455_);
return v___x_3457_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10(void){
_start:
{
uint8_t v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3460_ = 1;
v___x_3461_ = ((lean_object*)(l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9));
v___x_3462_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3461_, v___x_3460_);
return v___x_3462_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11(void){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3463_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10);
v___x_3464_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3);
v___x_3465_ = lean_string_append(v___x_3464_, v___x_3463_);
return v___x_3465_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3466_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3467_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11);
v___x_3468_ = lean_string_append(v___x_3467_, v___x_3466_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson(lean_object* v_json_3469_){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3470_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
lean_inc(v_json_3469_);
v___x_3471_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3469_, v___x_3470_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3481_; 
lean_dec(v_json_3469_);
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3474_ = v___x_3471_;
v_isShared_3475_ = v_isSharedCheck_3481_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3481_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
v___x_3476_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8);
v___x_3477_ = lean_string_append(v___x_3476_, v_a_3472_);
lean_dec(v_a_3472_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3477_);
v___x_3479_ = v___x_3474_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
}
else
{
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec(v_json_3469_);
v_a_3482_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3471_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3471_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
lean_ctor_set_tag(v___x_3484_, 0);
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v_a_3490_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3471_, 1);
v___x_3491_ = ((lean_object*)(l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0));
v___x_3492_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(v_json_3469_, v___x_3491_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3502_; 
lean_dec(v_a_3490_);
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3495_ = v___x_3492_;
v_isShared_3496_ = v_isSharedCheck_3502_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3492_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3502_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3500_; 
v___x_3497_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12);
v___x_3498_ = lean_string_append(v___x_3497_, v_a_3493_);
lean_dec(v_a_3493_);
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 0, v___x_3498_);
v___x_3500_ = v___x_3495_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3498_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
}
else
{
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
lean_dec(v_a_3490_);
v_a_3503_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3505_ = v___x_3492_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v___x_3492_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set_tag(v___x_3505_, 0);
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3503_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3519_; 
v_a_3511_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3513_ = v___x_3492_;
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3492_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3515_; lean_object* v___x_3517_; 
v___x_3515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3515_, 0, v_a_3490_);
lean_ctor_set(v___x_3515_, 1, v_a_3511_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v___x_3515_);
v___x_3517_ = v___x_3513_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson(lean_object* v_x_3524_){
_start:
{
lean_object* v_uri_3525_; lean_object* v_languageId_3526_; lean_object* v_version_3527_; lean_object* v_text_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v_uri_3525_ = lean_ctor_get(v_x_3524_, 0);
lean_inc_ref(v_uri_3525_);
v_languageId_3526_ = lean_ctor_get(v_x_3524_, 1);
lean_inc_ref(v_languageId_3526_);
v_version_3527_ = lean_ctor_get(v_x_3524_, 2);
lean_inc(v_version_3527_);
v_text_3528_ = lean_ctor_get(v_x_3524_, 3);
lean_inc_ref(v_text_3528_);
lean_dec_ref(v_x_3524_);
v___x_3529_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_3530_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3530_, 0, v_uri_3525_);
v___x_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3529_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = lean_box(0);
v___x_3533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0));
v___x_3535_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3535_, 0, v_languageId_3526_);
v___x_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3534_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3536_);
lean_ctor_set(v___x_3537_, 1, v___x_3532_);
v___x_3538_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
v___x_3539_ = l_Lean_JsonNumber_fromNat(v_version_3527_);
v___x_3540_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
v___x_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3538_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
lean_ctor_set(v___x_3542_, 1, v___x_3532_);
v___x_3543_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1));
v___x_3544_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3544_, 0, v_text_3528_);
v___x_3545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3543_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
lean_ctor_set(v___x_3546_, 1, v___x_3532_);
v___x_3547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
lean_ctor_set(v___x_3547_, 1, v___x_3532_);
v___x_3548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3542_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3537_);
lean_ctor_set(v___x_3549_, 1, v___x_3548_);
v___x_3550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3533_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
v___x_3551_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3552_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3550_, v___x_3551_);
v___x_3553_ = l_Lean_Json_mkObj(v___x_3552_);
lean_dec(v___x_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(lean_object* v_j_3556_, lean_object* v_k_3557_){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = l_Lean_Json_getObjValD(v_j_3556_, v_k_3557_);
v___x_3559_ = l_Lean_Json_getNat_x3f(v___x_3558_);
return v___x_3559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0___boxed(lean_object* v_j_3560_, lean_object* v_k_3561_){
_start:
{
lean_object* v_res_3562_; 
v_res_3562_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(v_j_3560_, v_k_3561_);
lean_dec_ref(v_k_3561_);
return v_res_3562_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3568_ = 1;
v___x_3569_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1));
v___x_3570_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3569_, v___x_3568_);
return v___x_3570_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3571_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3572_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2);
v___x_3573_ = lean_string_append(v___x_3572_, v___x_3571_);
return v___x_3573_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3574_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_3575_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3576_ = lean_string_append(v___x_3575_, v___x_3574_);
return v___x_3576_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3577_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3578_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4);
v___x_3579_ = lean_string_append(v___x_3578_, v___x_3577_);
return v___x_3579_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7(void){
_start:
{
uint8_t v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3582_ = 1;
v___x_3583_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6));
v___x_3584_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3583_, v___x_3582_);
return v___x_3584_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3585_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7);
v___x_3586_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3587_ = lean_string_append(v___x_3586_, v___x_3585_);
return v___x_3587_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9(void){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3588_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3589_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8);
v___x_3590_ = lean_string_append(v___x_3589_, v___x_3588_);
return v___x_3590_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11(void){
_start:
{
uint8_t v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3593_ = 1;
v___x_3594_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10));
v___x_3595_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3594_, v___x_3593_);
return v___x_3595_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3596_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11);
v___x_3597_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3598_ = lean_string_append(v___x_3597_, v___x_3596_);
return v___x_3598_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3599_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3600_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12);
v___x_3601_ = lean_string_append(v___x_3600_, v___x_3599_);
return v___x_3601_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15(void){
_start:
{
uint8_t v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3604_ = 1;
v___x_3605_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14));
v___x_3606_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3605_, v___x_3604_);
return v___x_3606_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16(void){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3607_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15);
v___x_3608_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3609_ = lean_string_append(v___x_3608_, v___x_3607_);
return v___x_3609_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3610_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3611_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16);
v___x_3612_ = lean_string_append(v___x_3611_, v___x_3610_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson(lean_object* v_json_3613_){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_3613_);
v___x_3615_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_3613_, v___x_3614_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3625_; 
lean_dec(v_json_3613_);
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3618_ = v___x_3615_;
v_isShared_3619_ = v_isSharedCheck_3625_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3615_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3625_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3623_; 
v___x_3620_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5);
v___x_3621_ = lean_string_append(v___x_3620_, v_a_3616_);
lean_dec(v_a_3616_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 0, v___x_3621_);
v___x_3623_ = v___x_3618_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v___x_3621_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
else
{
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
lean_dec(v_json_3613_);
v_a_3626_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3615_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3615_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
lean_ctor_set_tag(v___x_3628_, 0);
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_a_3634_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3634_);
lean_dec_ref_known(v___x_3615_, 1);
v___x_3635_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0));
lean_inc(v_json_3613_);
v___x_3636_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_3613_, v___x_3635_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3646_; 
lean_dec(v_a_3634_);
lean_dec(v_json_3613_);
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3639_ = v___x_3636_;
v_isShared_3640_ = v_isSharedCheck_3646_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3636_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3646_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3644_; 
v___x_3641_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9);
v___x_3642_ = lean_string_append(v___x_3641_, v_a_3637_);
lean_dec(v_a_3637_);
if (v_isShared_3640_ == 0)
{
lean_ctor_set(v___x_3639_, 0, v___x_3642_);
v___x_3644_ = v___x_3639_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v___x_3642_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
else
{
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
lean_dec(v_a_3634_);
lean_dec(v_json_3613_);
v_a_3647_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3636_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3636_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
lean_ctor_set_tag(v___x_3649_, 0);
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v_a_3655_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3655_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3656_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
lean_inc(v_json_3613_);
v___x_3657_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(v_json_3613_, v___x_3656_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3667_; 
lean_dec(v_a_3655_);
lean_dec(v_a_3634_);
lean_dec(v_json_3613_);
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3660_ = v___x_3657_;
v_isShared_3661_ = v_isSharedCheck_3667_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v___x_3657_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3667_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3662_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13);
v___x_3663_ = lean_string_append(v___x_3662_, v_a_3658_);
lean_dec(v_a_3658_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 0, v___x_3663_);
v___x_3665_ = v___x_3660_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
else
{
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3675_; 
lean_dec(v_a_3655_);
lean_dec(v_a_3634_);
lean_dec(v_json_3613_);
v_a_3668_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3670_ = v___x_3657_;
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3657_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v___x_3673_; 
if (v_isShared_3671_ == 0)
{
lean_ctor_set_tag(v___x_3670_, 0);
v___x_3673_ = v___x_3670_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_a_3668_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
}
else
{
lean_object* v_a_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v_a_3676_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3676_);
lean_dec_ref_known(v___x_3657_, 1);
v___x_3677_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1));
v___x_3678_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_3613_, v___x_3677_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3688_; 
lean_dec(v_a_3676_);
lean_dec(v_a_3655_);
lean_dec(v_a_3634_);
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3688_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3688_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3686_; 
v___x_3683_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17);
v___x_3684_ = lean_string_append(v___x_3683_, v_a_3679_);
lean_dec(v_a_3679_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 0, v___x_3684_);
v___x_3686_ = v___x_3681_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
else
{
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_dec(v_a_3676_);
lean_dec(v_a_3655_);
lean_dec(v_a_3634_);
v_a_3689_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3678_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3678_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
lean_ctor_set_tag(v___x_3691_, 0);
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3705_; 
v_a_3697_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3699_ = v___x_3678_;
v_isShared_3700_ = v_isSharedCheck_3705_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3678_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3705_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3701_; lean_object* v___x_3703_; 
v___x_3701_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3701_, 0, v_a_3634_);
lean_ctor_set(v___x_3701_, 1, v_a_3655_);
lean_ctor_set(v___x_3701_, 2, v_a_3676_);
lean_ctor_set(v___x_3701_, 3, v_a_3697_);
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 0, v___x_3701_);
v___x_3703_ = v___x_3699_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson(lean_object* v_x_3709_){
_start:
{
lean_object* v_textDocument_3710_; lean_object* v_position_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3731_; 
v_textDocument_3710_ = lean_ctor_get(v_x_3709_, 0);
v_position_3711_ = lean_ctor_get(v_x_3709_, 1);
v_isSharedCheck_3731_ = !lean_is_exclusive(v_x_3709_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3713_ = v_x_3709_;
v_isShared_3714_ = v_isSharedCheck_3731_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_position_3711_);
lean_inc(v_textDocument_3710_);
lean_dec(v_x_3709_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3731_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3718_; 
v___x_3715_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
v___x_3716_ = l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(v_textDocument_3710_);
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 1, v___x_3716_);
lean_ctor_set(v___x_3713_, 0, v___x_3715_);
v___x_3718_ = v___x_3713_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v___x_3715_);
lean_ctor_set(v_reuseFailAlloc_3730_, 1, v___x_3716_);
v___x_3718_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3719_ = lean_box(0);
v___x_3720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3718_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
v___x_3721_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0));
v___x_3722_ = l_Lean_Lsp_instToJsonPosition_toJson(v_position_3711_);
v___x_3723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3721_);
lean_ctor_set(v___x_3723_, 1, v___x_3722_);
v___x_3724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
lean_ctor_set(v___x_3724_, 1, v___x_3719_);
v___x_3725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
lean_ctor_set(v___x_3725_, 1, v___x_3719_);
v___x_3726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3720_);
lean_ctor_set(v___x_3726_, 1, v___x_3725_);
v___x_3727_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3728_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3726_, v___x_3727_);
v___x_3729_ = l_Lean_Json_mkObj(v___x_3728_);
lean_dec(v___x_3728_);
return v___x_3729_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(lean_object* v_j_3734_, lean_object* v_k_3735_){
_start:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3736_ = l_Lean_Json_getObjValD(v_j_3734_, v_k_3735_);
v___x_3737_ = l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(v___x_3736_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0___boxed(lean_object* v_j_3738_, lean_object* v_k_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(v_j_3738_, v_k_3739_);
lean_dec_ref(v_k_3739_);
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(lean_object* v_j_3741_, lean_object* v_k_3742_){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3743_ = l_Lean_Json_getObjValD(v_j_3741_, v_k_3742_);
v___x_3744_ = l_Lean_Lsp_instFromJsonPosition_fromJson(v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1___boxed(lean_object* v_j_3745_, lean_object* v_k_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(v_j_3745_, v_k_3746_);
lean_dec_ref(v_k_3746_);
return v_res_3747_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3753_ = 1;
v___x_3754_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1));
v___x_3755_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3754_, v___x_3753_);
return v___x_3755_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3756_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3757_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2);
v___x_3758_ = lean_string_append(v___x_3757_, v___x_3756_);
return v___x_3758_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v___x_3759_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5);
v___x_3760_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3);
v___x_3761_ = lean_string_append(v___x_3760_, v___x_3759_);
return v___x_3761_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3762_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3763_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4);
v___x_3764_ = lean_string_append(v___x_3763_, v___x_3762_);
return v___x_3764_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7(void){
_start:
{
uint8_t v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3767_ = 1;
v___x_3768_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6));
v___x_3769_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3768_, v___x_3767_);
return v___x_3769_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3770_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7);
v___x_3771_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3);
v___x_3772_ = lean_string_append(v___x_3771_, v___x_3770_);
return v___x_3772_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3773_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3774_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8);
v___x_3775_ = lean_string_append(v___x_3774_, v___x_3773_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson(lean_object* v_json_3776_){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3777_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
lean_inc(v_json_3776_);
v___x_3778_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(v_json_3776_, v___x_3777_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3788_; 
lean_dec(v_json_3776_);
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3788_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3788_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3786_; 
v___x_3783_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5);
v___x_3784_ = lean_string_append(v___x_3783_, v_a_3779_);
lean_dec(v_a_3779_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3784_);
v___x_3786_ = v___x_3781_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3784_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
else
{
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
lean_dec(v_json_3776_);
v_a_3789_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3778_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3778_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
lean_ctor_set_tag(v___x_3791_, 0);
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v_a_3797_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_a_3797_);
lean_dec_ref_known(v___x_3778_, 1);
v___x_3798_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0));
v___x_3799_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(v_json_3776_, v___x_3798_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3809_; 
lean_dec(v_a_3797_);
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3802_ = v___x_3799_;
v_isShared_3803_ = v_isSharedCheck_3809_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_a_3800_);
lean_dec(v___x_3799_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3809_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3804_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9);
v___x_3805_ = lean_string_append(v___x_3804_, v_a_3800_);
lean_dec(v_a_3800_);
if (v_isShared_3803_ == 0)
{
lean_ctor_set(v___x_3802_, 0, v___x_3805_);
v___x_3807_ = v___x_3802_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
else
{
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3817_; 
lean_dec(v_a_3797_);
v_a_3810_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3812_ = v___x_3799_;
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v___x_3799_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
lean_ctor_set_tag(v___x_3812_, 0);
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3826_; 
v_a_3818_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3820_ = v___x_3799_;
v_isShared_3821_ = v_isSharedCheck_3826_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3799_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3826_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3822_; lean_object* v___x_3824_; 
v___x_3822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3822_, 0, v_a_3797_);
lean_ctor_set(v___x_3822_, 1, v_a_3818_);
if (v_isShared_3821_ == 0)
{
lean_ctor_set(v___x_3820_, 0, v___x_3822_);
v___x_3824_ = v___x_3820_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v___x_3822_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0(lean_object* v_p_3830_){
_start:
{
lean_object* v_position_3831_; lean_object* v_textDocument_3832_; lean_object* v_line_3833_; lean_object* v_character_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v_position_3831_ = lean_ctor_get(v_p_3830_, 1);
lean_inc_ref(v_position_3831_);
v_textDocument_3832_ = lean_ctor_get(v_p_3830_, 0);
lean_inc_ref(v_textDocument_3832_);
lean_dec_ref(v_p_3830_);
v_line_3833_ = lean_ctor_get(v_position_3831_, 0);
lean_inc(v_line_3833_);
v_character_3834_ = lean_ctor_get(v_position_3831_, 1);
lean_inc(v_character_3834_);
lean_dec_ref(v_position_3831_);
v___x_3835_ = ((lean_object*)(l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0));
v___x_3836_ = lean_string_append(v_textDocument_3832_, v___x_3835_);
v___x_3837_ = l_Nat_reprFast(v_line_3833_);
v___x_3838_ = lean_string_append(v___x_3836_, v___x_3837_);
lean_dec_ref(v___x_3837_);
v___x_3839_ = lean_string_append(v___x_3838_, v___x_3835_);
v___x_3840_ = l_Nat_reprFast(v_character_3834_);
v___x_3841_ = lean_string_append(v___x_3839_, v___x_3840_);
lean_dec_ref(v___x_3840_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson(lean_object* v_x_3847_){
_start:
{
lean_object* v_language_x3f_3848_; lean_object* v_scheme_x3f_3849_; lean_object* v_pattern_x3f_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v_language_x3f_3848_ = lean_ctor_get(v_x_3847_, 0);
lean_inc(v_language_x3f_3848_);
v_scheme_x3f_3849_ = lean_ctor_get(v_x_3847_, 1);
lean_inc(v_scheme_x3f_3849_);
v_pattern_x3f_3850_ = lean_ctor_get(v_x_3847_, 2);
lean_inc(v_pattern_x3f_3850_);
lean_dec_ref(v_x_3847_);
v___x_3851_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0));
v___x_3852_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3851_, v_language_x3f_3848_);
v___x_3853_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1));
v___x_3854_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3853_, v_scheme_x3f_3849_);
v___x_3855_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2));
v___x_3856_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3855_, v_pattern_x3f_3850_);
v___x_3857_ = lean_box(0);
v___x_3858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3856_);
lean_ctor_set(v___x_3858_, 1, v___x_3857_);
v___x_3859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3854_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
v___x_3860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3852_);
lean_ctor_set(v___x_3860_, 1, v___x_3859_);
v___x_3861_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3862_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3860_, v___x_3861_);
v___x_3863_ = l_Lean_Json_mkObj(v___x_3862_);
lean_dec(v___x_3862_);
return v___x_3863_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3871_ = 1;
v___x_3872_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1));
v___x_3873_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3872_, v___x_3871_);
return v___x_3873_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3874_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3875_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2);
v___x_3876_ = lean_string_append(v___x_3875_, v___x_3874_);
return v___x_3876_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3880_ = 1;
v___x_3881_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5));
v___x_3882_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3881_, v___x_3880_);
return v___x_3882_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3883_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6);
v___x_3884_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3);
v___x_3885_ = lean_string_append(v___x_3884_, v___x_3883_);
return v___x_3885_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3886_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3887_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7);
v___x_3888_ = lean_string_append(v___x_3887_, v___x_3886_);
return v___x_3888_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11(void){
_start:
{
uint8_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3892_ = 1;
v___x_3893_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10));
v___x_3894_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3893_, v___x_3892_);
return v___x_3894_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3895_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11);
v___x_3896_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3);
v___x_3897_ = lean_string_append(v___x_3896_, v___x_3895_);
return v___x_3897_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3898_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3899_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12);
v___x_3900_ = lean_string_append(v___x_3899_, v___x_3898_);
return v___x_3900_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16(void){
_start:
{
uint8_t v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3904_ = 1;
v___x_3905_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15));
v___x_3906_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3905_, v___x_3904_);
return v___x_3906_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3907_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16);
v___x_3908_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3);
v___x_3909_ = lean_string_append(v___x_3908_, v___x_3907_);
return v___x_3909_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18(void){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3910_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3911_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17);
v___x_3912_ = lean_string_append(v___x_3911_, v___x_3910_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(lean_object* v_json_3913_){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3914_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0));
lean_inc(v_json_3913_);
v___x_3915_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3913_, v___x_3914_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3925_; 
lean_dec(v_json_3913_);
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3925_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3925_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3923_; 
v___x_3920_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8);
v___x_3921_ = lean_string_append(v___x_3920_, v_a_3916_);
lean_dec(v_a_3916_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 0, v___x_3921_);
v___x_3923_ = v___x_3918_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v___x_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
return v___x_3923_;
}
}
}
else
{
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
lean_dec(v_json_3913_);
v_a_3926_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3915_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3915_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
lean_ctor_set_tag(v___x_3928_, 0);
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
else
{
lean_object* v_a_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
v_a_3934_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3934_);
lean_dec_ref_known(v___x_3915_, 1);
v___x_3935_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1));
lean_inc(v_json_3913_);
v___x_3936_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3913_, v___x_3935_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3946_; 
lean_dec(v_a_3934_);
lean_dec(v_json_3913_);
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3939_ = v___x_3936_;
v_isShared_3940_ = v_isSharedCheck_3946_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3936_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3946_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3944_; 
v___x_3941_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13);
v___x_3942_ = lean_string_append(v___x_3941_, v_a_3937_);
lean_dec(v_a_3937_);
if (v_isShared_3940_ == 0)
{
lean_ctor_set(v___x_3939_, 0, v___x_3942_);
v___x_3944_ = v___x_3939_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
else
{
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3954_; 
lean_dec(v_a_3934_);
lean_dec(v_json_3913_);
v_a_3947_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3949_ = v___x_3936_;
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3936_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3952_; 
if (v_isShared_3950_ == 0)
{
lean_ctor_set_tag(v___x_3949_, 0);
v___x_3952_ = v___x_3949_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_a_3947_);
v___x_3952_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
return v___x_3952_;
}
}
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
v_a_3955_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3936_, 1);
v___x_3956_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2));
v___x_3957_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3913_, v___x_3956_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3967_; 
lean_dec(v_a_3955_);
lean_dec(v_a_3934_);
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3960_ = v___x_3957_;
v_isShared_3961_ = v_isSharedCheck_3967_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3967_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3965_; 
v___x_3962_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18);
v___x_3963_ = lean_string_append(v___x_3962_, v_a_3958_);
lean_dec(v_a_3958_);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v___x_3963_);
v___x_3965_ = v___x_3960_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v___x_3963_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
else
{
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3975_; 
lean_dec(v_a_3955_);
lean_dec(v_a_3934_);
v_a_3968_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3975_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3975_ == 0)
{
v___x_3970_ = v___x_3957_;
v_isShared_3971_ = v_isSharedCheck_3975_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v___x_3957_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3975_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3973_; 
if (v_isShared_3971_ == 0)
{
lean_ctor_set_tag(v___x_3970_, 0);
v___x_3973_ = v___x_3970_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_a_3968_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
}
else
{
lean_object* v_a_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3984_; 
v_a_3976_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3978_ = v___x_3957_;
v_isShared_3979_ = v_isSharedCheck_3984_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_a_3976_);
lean_dec(v___x_3957_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3984_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3980_; lean_object* v___x_3982_; 
v___x_3980_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3980_, 0, v_a_3934_);
lean_ctor_set(v___x_3980_, 1, v_a_3955_);
lean_ctor_set(v___x_3980_, 2, v_a_3976_);
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 0, v___x_3980_);
v___x_3982_ = v___x_3978_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3980_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson(lean_object* v_x_3994_){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_3995_ = ((lean_object*)(l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0));
v___x_3996_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3995_, v_x_3994_);
v___x_3997_ = lean_box(0);
v___x_3998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3996_);
lean_ctor_set(v___x_3998_, 1, v___x_3997_);
v___x_3999_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4000_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3998_, v___x_3999_);
v___x_4001_ = l_Lean_Json_mkObj(v___x_4000_);
lean_dec(v___x_4000_);
return v___x_4001_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4009_ = 1;
v___x_4010_ = ((lean_object*)(l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1));
v___x_4011_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4010_, v___x_4009_);
return v___x_4011_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4012_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4013_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2);
v___x_4014_ = lean_string_append(v___x_4013_, v___x_4012_);
return v___x_4014_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4018_ = 1;
v___x_4019_ = ((lean_object*)(l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5));
v___x_4020_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4019_, v___x_4018_);
return v___x_4020_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4021_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6);
v___x_4022_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3);
v___x_4023_ = lean_string_append(v___x_4022_, v___x_4021_);
return v___x_4023_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; 
v___x_4024_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4025_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7);
v___x_4026_ = lean_string_append(v___x_4025_, v___x_4024_);
return v___x_4026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson(lean_object* v_json_4027_){
_start:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___x_4028_ = ((lean_object*)(l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0));
v___x_4029_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_4027_, v___x_4028_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4039_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4032_ = v___x_4029_;
v_isShared_4033_ = v_isSharedCheck_4039_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v___x_4029_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4039_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4037_; 
v___x_4034_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8);
v___x_4035_ = lean_string_append(v___x_4034_, v_a_4030_);
lean_dec(v_a_4030_);
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 0, v___x_4035_);
v___x_4037_ = v___x_4032_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4035_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
else
{
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
v_a_4040_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_4029_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4029_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
lean_ctor_set_tag(v___x_4042_, 0);
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
v_a_4048_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4029_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v___x_4029_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4048_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(size_t v_sz_4058_, size_t v_i_4059_, lean_object* v_bs_4060_){
_start:
{
uint8_t v___x_4061_; 
v___x_4061_ = lean_usize_dec_lt(v_i_4059_, v_sz_4058_);
if (v___x_4061_ == 0)
{
lean_object* v___x_4062_; 
v___x_4062_ = l_unsafeCast___redArg(v_bs_4060_);
lean_dec_ref(v_bs_4060_);
return v___x_4062_;
}
else
{
lean_object* v_v_4063_; lean_object* v___x_4064_; lean_object* v_bs_x27_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; size_t v___x_4068_; size_t v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v_v_4063_ = lean_array_uget(v_bs_4060_, v_i_4059_);
v___x_4064_ = lean_unsigned_to_nat(0u);
v_bs_x27_4065_ = lean_array_uset(v_bs_4060_, v_i_4059_, v___x_4064_);
v___x_4066_ = l_unsafeCast___redArg(v_v_4063_);
lean_dec(v_v_4063_);
v___x_4067_ = l_Lean_Lsp_instToJsonDocumentFilter_toJson(v___x_4066_);
v___x_4068_ = ((size_t)1ULL);
v___x_4069_ = lean_usize_add(v_i_4059_, v___x_4068_);
v___x_4070_ = l_unsafeCast___redArg(v___x_4067_);
lean_dec(v___x_4067_);
v___x_4071_ = lean_array_uset(v_bs_x27_4065_, v_i_4059_, v___x_4070_);
v_i_4059_ = v___x_4069_;
v_bs_4060_ = v___x_4071_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4073_, lean_object* v_i_4074_, lean_object* v_bs_4075_){
_start:
{
size_t v_sz_boxed_4076_; size_t v_i_boxed_4077_; lean_object* v_res_4078_; 
v_sz_boxed_4076_ = lean_unbox_usize(v_sz_4073_);
lean_dec(v_sz_4073_);
v_i_boxed_4077_ = lean_unbox_usize(v_i_4074_);
lean_dec(v_i_4074_);
v_res_4078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(v_sz_boxed_4076_, v_i_boxed_4077_, v_bs_4075_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(lean_object* v_a_4079_){
_start:
{
size_t v_sz_4080_; size_t v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v_sz_4080_ = lean_array_size(v_a_4079_);
v___x_4081_ = ((size_t)0ULL);
v___x_4082_ = l_unsafeCast___redArg(v_a_4079_);
v___x_4083_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(v_sz_4080_, v___x_4081_, v___x_4082_);
v___x_4084_ = l_unsafeCast___redArg(v___x_4083_);
lean_dec_ref(v___x_4083_);
v___x_4085_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0___boxed(lean_object* v_a_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(v_a_4086_);
lean_dec_ref(v_a_4086_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(lean_object* v_k_4088_, lean_object* v_x_4089_){
_start:
{
if (lean_obj_tag(v_x_4089_) == 0)
{
lean_object* v___x_4090_; 
lean_dec_ref(v_k_4088_);
v___x_4090_ = lean_box(0);
return v___x_4090_;
}
else
{
lean_object* v_val_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; 
v_val_4091_ = lean_ctor_get(v_x_4089_, 0);
v___x_4092_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(v_val_4091_);
v___x_4093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4093_, 0, v_k_4088_);
lean_ctor_set(v___x_4093_, 1, v___x_4092_);
v___x_4094_ = lean_box(0);
v___x_4095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4095_, 0, v___x_4093_);
lean_ctor_set(v___x_4095_, 1, v___x_4094_);
return v___x_4095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0___boxed(lean_object* v_k_4096_, lean_object* v_x_4097_){
_start:
{
lean_object* v_res_4098_; 
v_res_4098_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(v_k_4096_, v_x_4097_);
lean_dec(v_x_4097_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson(lean_object* v_x_4100_){
_start:
{
lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4101_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0));
v___x_4102_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(v___x_4101_, v_x_4100_);
v___x_4103_ = lean_box(0);
v___x_4104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4102_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
v___x_4105_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4106_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4104_, v___x_4105_);
v___x_4107_ = l_Lean_Json_mkObj(v___x_4106_);
lean_dec(v___x_4106_);
return v___x_4107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___boxed(lean_object* v_x_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson(v_x_4108_);
lean_dec(v_x_4108_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(size_t v_sz_4112_, size_t v_i_4113_, lean_object* v_bs_4114_){
_start:
{
uint8_t v___x_4115_; 
v___x_4115_ = lean_usize_dec_lt(v_i_4113_, v_sz_4112_);
if (v___x_4115_ == 0)
{
lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4116_ = l_unsafeCast___redArg(v_bs_4114_);
lean_dec_ref(v_bs_4114_);
v___x_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
return v___x_4117_;
}
else
{
lean_object* v_v_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v_v_4118_ = lean_array_uget_borrowed(v_bs_4114_, v_i_4113_);
v___x_4119_ = l_unsafeCast___redArg(v_v_4118_);
v___x_4120_ = l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(v___x_4119_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
lean_dec_ref(v_bs_4114_);
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4120_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4120_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4130_; lean_object* v_bs_x27_4131_; size_t v___x_4132_; size_t v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
v_a_4129_ = lean_ctor_get(v___x_4120_, 0);
lean_inc(v_a_4129_);
lean_dec_ref_known(v___x_4120_, 1);
v___x_4130_ = lean_unsigned_to_nat(0u);
v_bs_x27_4131_ = lean_array_uset(v_bs_4114_, v_i_4113_, v___x_4130_);
v___x_4132_ = ((size_t)1ULL);
v___x_4133_ = lean_usize_add(v_i_4113_, v___x_4132_);
v___x_4134_ = l_unsafeCast___redArg(v_a_4129_);
lean_dec(v_a_4129_);
v___x_4135_ = lean_array_uset(v_bs_x27_4131_, v_i_4113_, v___x_4134_);
v_i_4113_ = v___x_4133_;
v_bs_4114_ = v___x_4135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_4137_, lean_object* v_i_4138_, lean_object* v_bs_4139_){
_start:
{
size_t v_sz_boxed_4140_; size_t v_i_boxed_4141_; lean_object* v_res_4142_; 
v_sz_boxed_4140_ = lean_unbox_usize(v_sz_4137_);
lean_dec(v_sz_4137_);
v_i_boxed_4141_ = lean_unbox_usize(v_i_4138_);
lean_dec(v_i_4138_);
v_res_4142_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_4140_, v_i_boxed_4141_, v_bs_4139_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_4143_){
_start:
{
if (lean_obj_tag(v_x_4143_) == 4)
{
lean_object* v_elems_4144_; size_t v_sz_4145_; size_t v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v_elems_4144_ = lean_ctor_get(v_x_4143_, 0);
lean_inc_ref(v_elems_4144_);
lean_dec_ref_known(v_x_4143_, 1);
v_sz_4145_ = lean_array_size(v_elems_4144_);
v___x_4146_ = ((size_t)0ULL);
v___x_4147_ = l_unsafeCast___redArg(v_elems_4144_);
lean_dec_ref(v_elems_4144_);
v___x_4148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_4145_, v___x_4146_, v___x_4147_);
v___x_4149_ = l_unsafeCast___redArg(v___x_4148_);
lean_dec_ref(v___x_4148_);
return v___x_4149_;
}
else
{
lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; 
v___x_4150_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_4151_ = lean_unsigned_to_nat(80u);
v___x_4152_ = l_Lean_Json_pretty(v_x_4143_, v___x_4151_);
v___x_4153_ = lean_string_append(v___x_4150_, v___x_4152_);
lean_dec_ref(v___x_4152_);
v___x_4154_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_4155_ = lean_string_append(v___x_4153_, v___x_4154_);
v___x_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4155_);
return v___x_4156_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0(lean_object* v_x_4159_){
_start:
{
if (lean_obj_tag(v_x_4159_) == 0)
{
lean_object* v___x_4160_; 
v___x_4160_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0));
return v___x_4160_;
}
else
{
lean_object* v___x_4161_; 
v___x_4161_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1(v_x_4159_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4169_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4164_ = v___x_4161_;
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v___x_4161_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4162_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
}
else
{
lean_object* v_a_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4178_; 
v_a_4170_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4172_ = v___x_4161_;
v_isShared_4173_ = v_isSharedCheck_4178_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_a_4170_);
lean_dec(v___x_4161_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4178_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
lean_object* v___x_4174_; lean_object* v___x_4176_; 
v___x_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4174_, 0, v_a_4170_);
if (v_isShared_4173_ == 0)
{
lean_ctor_set(v___x_4172_, 0, v___x_4174_);
v___x_4176_ = v___x_4172_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4174_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(lean_object* v_j_4179_, lean_object* v_k_4180_){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = l_Lean_Json_getObjValD(v_j_4179_, v_k_4180_);
v___x_4182_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0(v___x_4181_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0___boxed(lean_object* v_j_4183_, lean_object* v_k_4184_){
_start:
{
lean_object* v_res_4185_; 
v_res_4185_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(v_j_4183_, v_k_4184_);
lean_dec_ref(v_k_4184_);
return v_res_4185_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4191_ = 1;
v___x_4192_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1));
v___x_4193_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4192_, v___x_4191_);
return v___x_4193_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v___x_4194_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4195_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2);
v___x_4196_ = lean_string_append(v___x_4195_, v___x_4194_);
return v___x_4196_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = 1;
v___x_4201_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5));
v___x_4202_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4201_, v___x_4200_);
return v___x_4202_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4203_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6);
v___x_4204_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3);
v___x_4205_ = lean_string_append(v___x_4204_, v___x_4203_);
return v___x_4205_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v___x_4206_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4207_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7);
v___x_4208_ = lean_string_append(v___x_4207_, v___x_4206_);
return v___x_4208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson(lean_object* v_json_4209_){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4210_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0));
v___x_4211_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(v_json_4209_, v___x_4210_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4221_; 
v_a_4212_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4214_ = v___x_4211_;
v_isShared_4215_ = v_isSharedCheck_4221_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_4211_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4221_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4219_; 
v___x_4216_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8);
v___x_4217_ = lean_string_append(v___x_4216_, v_a_4212_);
lean_dec(v_a_4212_);
if (v_isShared_4215_ == 0)
{
lean_ctor_set(v___x_4214_, 0, v___x_4217_);
v___x_4219_ = v___x_4214_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v___x_4217_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
else
{
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
v_a_4222_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4211_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_4211_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
lean_ctor_set_tag(v___x_4224_, 0);
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
else
{
lean_object* v_a_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4237_; 
v_a_4230_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4237_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4232_ = v___x_4211_;
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_a_4230_);
lean_dec(v___x_4211_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4235_; 
if (v_isShared_4233_ == 0)
{
v___x_4235_ = v___x_4232_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v_a_4230_);
v___x_4235_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
return v___x_4235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx(uint8_t v_x_4240_){
_start:
{
if (v_x_4240_ == 0)
{
lean_object* v___x_4241_; 
v___x_4241_ = lean_unsigned_to_nat(0u);
return v___x_4241_;
}
else
{
lean_object* v___x_4242_; 
v___x_4242_ = lean_unsigned_to_nat(1u);
return v___x_4242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx___boxed(lean_object* v_x_4243_){
_start:
{
uint8_t v_x_boxed_4244_; lean_object* v_res_4245_; 
v_x_boxed_4244_ = lean_unbox(v_x_4243_);
v_res_4245_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_x_boxed_4244_);
return v_res_4245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg(lean_object* v_k_4246_){
_start:
{
lean_inc(v_k_4246_);
return v_k_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg___boxed(lean_object* v_k_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Lean_Lsp_MarkupKind_ctorElim___redArg(v_k_4247_);
lean_dec(v_k_4247_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim(lean_object* v_motive_4249_, lean_object* v_ctorIdx_4250_, uint8_t v_t_4251_, lean_object* v_h_4252_, lean_object* v_k_4253_){
_start:
{
lean_inc(v_k_4253_);
return v_k_4253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___boxed(lean_object* v_motive_4254_, lean_object* v_ctorIdx_4255_, lean_object* v_t_4256_, lean_object* v_h_4257_, lean_object* v_k_4258_){
_start:
{
uint8_t v_t_boxed_4259_; lean_object* v_res_4260_; 
v_t_boxed_4259_ = lean_unbox(v_t_4256_);
v_res_4260_ = l_Lean_Lsp_MarkupKind_ctorElim(v_motive_4254_, v_ctorIdx_4255_, v_t_boxed_4259_, v_h_4257_, v_k_4258_);
lean_dec(v_k_4258_);
lean_dec(v_ctorIdx_4255_);
return v_res_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg(lean_object* v_plaintext_4261_){
_start:
{
lean_inc(v_plaintext_4261_);
return v_plaintext_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg___boxed(lean_object* v_plaintext_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_Lean_Lsp_MarkupKind_plaintext_elim___redArg(v_plaintext_4262_);
lean_dec(v_plaintext_4262_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim(lean_object* v_motive_4264_, uint8_t v_t_4265_, lean_object* v_h_4266_, lean_object* v_plaintext_4267_){
_start:
{
lean_inc(v_plaintext_4267_);
return v_plaintext_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___boxed(lean_object* v_motive_4268_, lean_object* v_t_4269_, lean_object* v_h_4270_, lean_object* v_plaintext_4271_){
_start:
{
uint8_t v_t_boxed_4272_; lean_object* v_res_4273_; 
v_t_boxed_4272_ = lean_unbox(v_t_4269_);
v_res_4273_ = l_Lean_Lsp_MarkupKind_plaintext_elim(v_motive_4268_, v_t_boxed_4272_, v_h_4270_, v_plaintext_4271_);
lean_dec(v_plaintext_4271_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg(lean_object* v_markdown_4274_){
_start:
{
lean_inc(v_markdown_4274_);
return v_markdown_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg___boxed(lean_object* v_markdown_4275_){
_start:
{
lean_object* v_res_4276_; 
v_res_4276_ = l_Lean_Lsp_MarkupKind_markdown_elim___redArg(v_markdown_4275_);
lean_dec(v_markdown_4275_);
return v_res_4276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim(lean_object* v_motive_4277_, uint8_t v_t_4278_, lean_object* v_h_4279_, lean_object* v_markdown_4280_){
_start:
{
lean_inc(v_markdown_4280_);
return v_markdown_4280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___boxed(lean_object* v_motive_4281_, lean_object* v_t_4282_, lean_object* v_h_4283_, lean_object* v_markdown_4284_){
_start:
{
uint8_t v_t_boxed_4285_; lean_object* v_res_4286_; 
v_t_boxed_4285_ = lean_unbox(v_t_4282_);
v_res_4286_ = l_Lean_Lsp_MarkupKind_markdown_elim(v_motive_4281_, v_t_boxed_4285_, v_h_4283_, v_markdown_4284_);
lean_dec(v_markdown_4284_);
return v_res_4286_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_MarkupKind_ofNat(lean_object* v_n_4287_){
_start:
{
lean_object* v___x_4288_; uint8_t v___x_4289_; 
v___x_4288_ = lean_unsigned_to_nat(0u);
v___x_4289_ = lean_nat_dec_le(v_n_4287_, v___x_4288_);
if (v___x_4289_ == 0)
{
uint8_t v___x_4290_; 
v___x_4290_ = 1;
return v___x_4290_;
}
else
{
uint8_t v___x_4291_; 
v___x_4291_ = 0;
return v___x_4291_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ofNat___boxed(lean_object* v_n_4292_){
_start:
{
uint8_t v_res_4293_; lean_object* v_r_4294_; 
v_res_4293_ = l_Lean_Lsp_MarkupKind_ofNat(v_n_4292_);
lean_dec(v_n_4292_);
v_r_4294_ = lean_box(v_res_4293_);
return v_r_4294_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupKind(uint8_t v_x_4295_, uint8_t v_y_4296_){
_start:
{
lean_object* v___x_4297_; lean_object* v___x_4298_; uint8_t v___x_4299_; 
v___x_4297_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_x_4295_);
v___x_4298_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_y_4296_);
v___x_4299_ = lean_nat_dec_eq(v___x_4297_, v___x_4298_);
lean_dec(v___x_4298_);
lean_dec(v___x_4297_);
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupKind___boxed(lean_object* v_x_4300_, lean_object* v_y_4301_){
_start:
{
uint8_t v_x_20__boxed_4302_; uint8_t v_y_21__boxed_4303_; uint8_t v_res_4304_; lean_object* v_r_4305_; 
v_x_20__boxed_4302_ = lean_unbox(v_x_4300_);
v_y_21__boxed_4303_ = lean_unbox(v_y_4301_);
v_res_4304_ = l_Lean_Lsp_instDecidableEqMarkupKind(v_x_20__boxed_4302_, v_y_21__boxed_4303_);
v_r_4305_ = lean_box(v_res_4304_);
return v_r_4305_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupKind_hash(uint8_t v_x_4306_){
_start:
{
if (v_x_4306_ == 0)
{
uint64_t v___x_4307_; 
v___x_4307_ = 0ULL;
return v___x_4307_;
}
else
{
uint64_t v___x_4308_; 
v___x_4308_ = 1ULL;
return v___x_4308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupKind_hash___boxed(lean_object* v_x_4309_){
_start:
{
uint8_t v_x_28__boxed_4310_; uint64_t v_res_4311_; lean_object* v_r_4312_; 
v_x_28__boxed_4310_ = lean_unbox(v_x_4309_);
v_res_4311_ = l_Lean_Lsp_instHashableMarkupKind_hash(v_x_28__boxed_4310_);
v_r_4312_ = lean_box_uint64(v_res_4311_);
return v_r_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0(lean_object* v_x_4326_){
_start:
{
if (lean_obj_tag(v_x_4326_) == 3)
{
lean_object* v_s_4329_; lean_object* v___x_4330_; uint8_t v___x_4331_; 
v_s_4329_ = lean_ctor_get(v_x_4326_, 0);
v___x_4330_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2));
v___x_4331_ = lean_string_dec_eq(v_s_4329_, v___x_4330_);
if (v___x_4331_ == 0)
{
lean_object* v___x_4332_; uint8_t v___x_4333_; 
v___x_4332_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3));
v___x_4333_ = lean_string_dec_eq(v_s_4329_, v___x_4332_);
if (v___x_4333_ == 0)
{
goto v___jp_4327_;
}
else
{
lean_object* v___x_4334_; 
v___x_4334_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4));
return v___x_4334_;
}
}
else
{
lean_object* v___x_4335_; 
v___x_4335_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5));
return v___x_4335_;
}
}
else
{
goto v___jp_4327_;
}
v___jp_4327_:
{
lean_object* v___x_4328_; 
v___x_4328_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1));
return v___x_4328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___boxed(lean_object* v_x_4336_){
_start:
{
lean_object* v_res_4337_; 
v_res_4337_ = l_Lean_Lsp_instFromJsonMarkupKind___lam__0(v_x_4336_);
lean_dec(v_x_4336_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0(uint8_t v_x_4344_){
_start:
{
if (v_x_4344_ == 0)
{
lean_object* v___x_4345_; 
v___x_4345_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0));
return v___x_4345_;
}
else
{
lean_object* v___x_4346_; 
v___x_4346_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1));
return v___x_4346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___boxed(lean_object* v_x_4347_){
_start:
{
uint8_t v_x_38__boxed_4348_; lean_object* v_res_4349_; 
v_x_38__boxed_4348_ = lean_unbox(v_x_4347_);
v_res_4349_ = l_Lean_Lsp_instToJsonMarkupKind___lam__0(v_x_38__boxed_4348_);
return v_res_4349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson(lean_object* v_x_4352_){
_start:
{
uint8_t v_kind_4353_; lean_object* v_value_4354_; lean_object* v___x_4355_; lean_object* v___y_4357_; 
v_kind_4353_ = lean_ctor_get_uint8(v_x_4352_, sizeof(void*)*1);
v_value_4354_ = lean_ctor_get(v_x_4352_, 0);
v___x_4355_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
if (v_kind_4353_ == 0)
{
lean_object* v___x_4370_; 
v___x_4370_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0));
v___y_4357_ = v___x_4370_;
goto v___jp_4356_;
}
else
{
lean_object* v___x_4371_; 
v___x_4371_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1));
v___y_4357_ = v___x_4371_;
goto v___jp_4356_;
}
v___jp_4356_:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; 
lean_inc(v___y_4357_);
v___x_4358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4355_);
lean_ctor_set(v___x_4358_, 1, v___y_4357_);
v___x_4359_ = lean_box(0);
v___x_4360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4358_);
lean_ctor_set(v___x_4360_, 1, v___x_4359_);
v___x_4361_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
lean_inc_ref(v_value_4354_);
v___x_4362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4362_, 0, v_value_4354_);
v___x_4363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4361_);
lean_ctor_set(v___x_4363_, 1, v___x_4362_);
v___x_4364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
lean_ctor_set(v___x_4364_, 1, v___x_4359_);
v___x_4365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
lean_ctor_set(v___x_4365_, 1, v___x_4359_);
v___x_4366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4360_);
lean_ctor_set(v___x_4366_, 1, v___x_4365_);
v___x_4367_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4368_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4366_, v___x_4367_);
v___x_4369_ = l_Lean_Json_mkObj(v___x_4368_);
lean_dec(v___x_4368_);
return v___x_4369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson___boxed(lean_object* v_x_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l_Lean_Lsp_instToJsonMarkupContent_toJson(v_x_4372_);
lean_dec_ref(v_x_4372_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(lean_object* v_j_4376_, lean_object* v_k_4377_){
_start:
{
lean_object* v___x_4380_; 
v___x_4380_ = l_Lean_Json_getObjValD(v_j_4376_, v_k_4377_);
if (lean_obj_tag(v___x_4380_) == 3)
{
lean_object* v_s_4381_; lean_object* v___x_4382_; uint8_t v___x_4383_; 
v_s_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc_ref(v_s_4381_);
lean_dec_ref_known(v___x_4380_, 1);
v___x_4382_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2));
v___x_4383_ = lean_string_dec_eq(v_s_4381_, v___x_4382_);
if (v___x_4383_ == 0)
{
lean_object* v___x_4384_; uint8_t v___x_4385_; 
v___x_4384_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3));
v___x_4385_ = lean_string_dec_eq(v_s_4381_, v___x_4384_);
lean_dec_ref(v_s_4381_);
if (v___x_4385_ == 0)
{
goto v___jp_4378_;
}
else
{
lean_object* v___x_4386_; 
v___x_4386_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4));
return v___x_4386_;
}
}
else
{
lean_object* v___x_4387_; 
lean_dec_ref(v_s_4381_);
v___x_4387_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5));
return v___x_4387_;
}
}
else
{
lean_dec(v___x_4380_);
goto v___jp_4378_;
}
v___jp_4378_:
{
lean_object* v___x_4379_; 
v___x_4379_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1));
return v___x_4379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0___boxed(lean_object* v_j_4388_, lean_object* v_k_4389_){
_start:
{
lean_object* v_res_4390_; 
v_res_4390_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(v_j_4388_, v_k_4389_);
lean_dec_ref(v_k_4389_);
return v_res_4390_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4396_ = 1;
v___x_4397_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1));
v___x_4398_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4397_, v___x_4396_);
return v___x_4398_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4399_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4400_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2);
v___x_4401_ = lean_string_append(v___x_4400_, v___x_4399_);
return v___x_4401_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5(void){
_start:
{
uint8_t v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; 
v___x_4404_ = 1;
v___x_4405_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4));
v___x_4406_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4405_, v___x_4404_);
return v___x_4406_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6(void){
_start:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4407_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5);
v___x_4408_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3);
v___x_4409_ = lean_string_append(v___x_4408_, v___x_4407_);
return v___x_4409_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4410_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4411_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6);
v___x_4412_ = lean_string_append(v___x_4411_, v___x_4410_);
return v___x_4412_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; 
v___x_4413_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5);
v___x_4414_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3);
v___x_4415_ = lean_string_append(v___x_4414_, v___x_4413_);
return v___x_4415_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9(void){
_start:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; 
v___x_4416_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4417_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8);
v___x_4418_ = lean_string_append(v___x_4417_, v___x_4416_);
return v___x_4418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson(lean_object* v_json_4419_){
_start:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; 
v___x_4420_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
lean_inc(v_json_4419_);
v___x_4421_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(v_json_4419_, v___x_4420_);
if (lean_obj_tag(v___x_4421_) == 0)
{
lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4431_; 
lean_dec(v_json_4419_);
v_a_4422_ = lean_ctor_get(v___x_4421_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4421_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4424_ = v___x_4421_;
v_isShared_4425_ = v_isSharedCheck_4431_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4421_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4431_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4429_; 
v___x_4426_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7);
v___x_4427_ = lean_string_append(v___x_4426_, v_a_4422_);
lean_dec(v_a_4422_);
if (v_isShared_4425_ == 0)
{
lean_ctor_set(v___x_4424_, 0, v___x_4427_);
v___x_4429_ = v___x_4424_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v___x_4427_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
else
{
if (lean_obj_tag(v___x_4421_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4439_; 
lean_dec(v_json_4419_);
v_a_4432_ = lean_ctor_get(v___x_4421_, 0);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4421_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4434_ = v___x_4421_;
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_a_4432_);
lean_dec(v___x_4421_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4437_; 
if (v_isShared_4435_ == 0)
{
lean_ctor_set_tag(v___x_4434_, 0);
v___x_4437_ = v___x_4434_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_a_4432_);
v___x_4437_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
return v___x_4437_;
}
}
}
else
{
lean_object* v_a_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v_a_4440_ = lean_ctor_get(v___x_4421_, 0);
lean_inc(v_a_4440_);
lean_dec_ref_known(v___x_4421_, 1);
v___x_4441_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_4442_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_4419_, v___x_4441_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4452_; 
lean_dec(v_a_4440_);
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4452_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4445_ = v___x_4442_;
v_isShared_4446_ = v_isSharedCheck_4452_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4442_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4452_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4450_; 
v___x_4447_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9);
v___x_4448_ = lean_string_append(v___x_4447_, v_a_4443_);
lean_dec(v_a_4443_);
if (v_isShared_4446_ == 0)
{
lean_ctor_set(v___x_4445_, 0, v___x_4448_);
v___x_4450_ = v___x_4445_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4448_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
}
else
{
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
lean_dec(v_a_4440_);
v_a_4453_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4455_ = v___x_4442_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4442_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
lean_ctor_set_tag(v___x_4455_, 0);
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4470_; 
v_a_4461_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4463_ = v___x_4442_;
v_isShared_4464_ = v_isSharedCheck_4470_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v___x_4442_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4470_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4465_; uint8_t v___x_4466_; lean_object* v___x_4468_; 
v___x_4465_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4465_, 0, v_a_4461_);
v___x_4466_ = lean_unbox(v_a_4440_);
lean_dec(v_a_4440_);
lean_ctor_set_uint8(v___x_4465_, sizeof(void*)*1, v___x_4466_);
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v___x_4465_);
v___x_4468_ = v___x_4463_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v___x_4465_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent_decEq(lean_object* v_x_4473_, lean_object* v_x_4474_){
_start:
{
uint8_t v_kind_4475_; lean_object* v_value_4476_; uint8_t v_kind_4477_; lean_object* v_value_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; uint8_t v___x_4481_; 
v_kind_4475_ = lean_ctor_get_uint8(v_x_4473_, sizeof(void*)*1);
v_value_4476_ = lean_ctor_get(v_x_4473_, 0);
v_kind_4477_ = lean_ctor_get_uint8(v_x_4474_, sizeof(void*)*1);
v_value_4478_ = lean_ctor_get(v_x_4474_, 0);
v___x_4479_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_kind_4475_);
v___x_4480_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_kind_4477_);
v___x_4481_ = lean_nat_dec_eq(v___x_4479_, v___x_4480_);
lean_dec(v___x_4480_);
lean_dec(v___x_4479_);
if (v___x_4481_ == 0)
{
return v___x_4481_;
}
else
{
uint8_t v___x_4482_; 
v___x_4482_ = lean_string_dec_eq(v_value_4476_, v_value_4478_);
return v___x_4482_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent_decEq___boxed(lean_object* v_x_4483_, lean_object* v_x_4484_){
_start:
{
uint8_t v_res_4485_; lean_object* v_r_4486_; 
v_res_4485_ = l_Lean_Lsp_instDecidableEqMarkupContent_decEq(v_x_4483_, v_x_4484_);
lean_dec_ref(v_x_4484_);
lean_dec_ref(v_x_4483_);
v_r_4486_ = lean_box(v_res_4485_);
return v_r_4486_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent(lean_object* v_x_4487_, lean_object* v_x_4488_){
_start:
{
uint8_t v___x_4489_; 
v___x_4489_ = l_Lean_Lsp_instDecidableEqMarkupContent_decEq(v_x_4487_, v_x_4488_);
return v___x_4489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent___boxed(lean_object* v_x_4490_, lean_object* v_x_4491_){
_start:
{
uint8_t v_res_4492_; lean_object* v_r_4493_; 
v_res_4492_ = l_Lean_Lsp_instDecidableEqMarkupContent(v_x_4490_, v_x_4491_);
lean_dec_ref(v_x_4491_);
lean_dec_ref(v_x_4490_);
v_r_4493_ = lean_box(v_res_4492_);
return v_r_4493_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupContent_hash(lean_object* v_x_4494_){
_start:
{
uint8_t v_kind_4495_; lean_object* v_value_4496_; uint64_t v___x_4497_; uint64_t v___x_4498_; uint64_t v___x_4499_; uint64_t v___x_4500_; uint64_t v___x_4501_; 
v_kind_4495_ = lean_ctor_get_uint8(v_x_4494_, sizeof(void*)*1);
v_value_4496_ = lean_ctor_get(v_x_4494_, 0);
v___x_4497_ = 0ULL;
v___x_4498_ = l_Lean_Lsp_instHashableMarkupKind_hash(v_kind_4495_);
v___x_4499_ = lean_uint64_mix_hash(v___x_4497_, v___x_4498_);
v___x_4500_ = lean_string_hash(v_value_4496_);
v___x_4501_ = lean_uint64_mix_hash(v___x_4499_, v___x_4500_);
return v___x_4501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupContent_hash___boxed(lean_object* v_x_4502_){
_start:
{
uint64_t v_res_4503_; lean_object* v_r_4504_; 
v_res_4503_ = l_Lean_Lsp_instHashableMarkupContent_hash(v_x_4502_);
lean_dec_ref(v_x_4502_);
v_r_4504_ = lean_box_uint64(v_res_4503_);
return v_r_4504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg(lean_object* v_inst_4509_, lean_object* v_x_4510_){
_start:
{
lean_object* v_token_4511_; lean_object* v_value_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4533_; 
v_token_4511_ = lean_ctor_get(v_x_4510_, 0);
v_value_4512_ = lean_ctor_get(v_x_4510_, 1);
v_isSharedCheck_4533_ = !lean_is_exclusive(v_x_4510_);
if (v_isSharedCheck_4533_ == 0)
{
v___x_4514_ = v_x_4510_;
v_isShared_4515_ = v_isSharedCheck_4533_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_value_4512_);
lean_inc(v_token_4511_);
lean_dec(v_x_4510_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4533_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4519_; 
v___x_4516_ = ((lean_object*)(l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0));
v___x_4517_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4517_, 0, v_token_4511_);
if (v_isShared_4515_ == 0)
{
lean_ctor_set(v___x_4514_, 1, v___x_4517_);
lean_ctor_set(v___x_4514_, 0, v___x_4516_);
v___x_4519_ = v___x_4514_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v___x_4516_);
lean_ctor_set(v_reuseFailAlloc_4532_, 1, v___x_4517_);
v___x_4519_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4520_ = lean_box(0);
v___x_4521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4519_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_4523_ = lean_apply_1(v_inst_4509_, v_value_4512_);
v___x_4524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4522_);
lean_ctor_set(v___x_4524_, 1, v___x_4523_);
v___x_4525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
lean_ctor_set(v___x_4525_, 1, v___x_4520_);
v___x_4526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
lean_ctor_set(v___x_4526_, 1, v___x_4520_);
v___x_4527_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4521_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
v___x_4528_ = ((lean_object*)(l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1));
v___x_4529_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4530_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_box(0), lean_box(0), v___x_4528_, v___x_4527_, v___x_4529_);
v___x_4531_ = l_Lean_Json_mkObj(v___x_4530_);
lean_dec(v___x_4530_);
return v___x_4531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson(lean_object* v_00_u03b1_4534_, lean_object* v_inst_4535_, lean_object* v_x_4536_){
_start:
{
lean_object* v___x_4537_; 
v___x_4537_ = l_Lean_Lsp_instToJsonProgressParams_toJson___redArg(v_inst_4535_, v_x_4536_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams___redArg(lean_object* v_inst_4538_){
_start:
{
lean_object* v___x_4539_; 
v___x_4539_ = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonProgressParams_toJson), 3, 2);
lean_closure_set(v___x_4539_, 0, lean_box(0));
lean_closure_set(v___x_4539_, 1, v_inst_4538_);
return v___x_4539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams(lean_object* v_00_u03b1_4540_, lean_object* v_inst_4541_){
_start:
{
lean_object* v___x_4542_; 
v___x_4542_ = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonProgressParams_toJson), 3, 2);
lean_closure_set(v___x_4542_, 0, lean_box(0));
lean_closure_set(v___x_4542_, 1, v_inst_4541_);
return v___x_4542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson(lean_object* v_x_4546_){
_start:
{
lean_object* v_kind_4547_; lean_object* v_message_x3f_4548_; uint8_t v_cancellable_4549_; lean_object* v_percentage_x3f_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v_kind_4547_ = lean_ctor_get(v_x_4546_, 0);
lean_inc_ref(v_kind_4547_);
v_message_x3f_4548_ = lean_ctor_get(v_x_4546_, 1);
lean_inc(v_message_x3f_4548_);
v_cancellable_4549_ = lean_ctor_get_uint8(v_x_4546_, sizeof(void*)*3);
v_percentage_x3f_4550_ = lean_ctor_get(v_x_4546_, 2);
lean_inc(v_percentage_x3f_4550_);
lean_dec_ref(v_x_4546_);
v___x_4551_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_4552_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4552_, 0, v_kind_4547_);
v___x_4553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4551_);
lean_ctor_set(v___x_4553_, 1, v___x_4552_);
v___x_4554_ = lean_box(0);
v___x_4555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4555_, 0, v___x_4553_);
lean_ctor_set(v___x_4555_, 1, v___x_4554_);
v___x_4556_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0));
v___x_4557_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4556_, v_message_x3f_4548_);
v___x_4558_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1));
v___x_4559_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4559_, 0, v_cancellable_4549_);
v___x_4560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4560_, 0, v___x_4558_);
lean_ctor_set(v___x_4560_, 1, v___x_4559_);
v___x_4561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4560_);
lean_ctor_set(v___x_4561_, 1, v___x_4554_);
v___x_4562_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2));
v___x_4563_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(v___x_4562_, v_percentage_x3f_4550_);
v___x_4564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4564_, 0, v___x_4563_);
lean_ctor_set(v___x_4564_, 1, v___x_4554_);
v___x_4565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4561_);
lean_ctor_set(v___x_4565_, 1, v___x_4564_);
v___x_4566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4557_);
lean_ctor_set(v___x_4566_, 1, v___x_4565_);
v___x_4567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4555_);
lean_ctor_set(v___x_4567_, 1, v___x_4566_);
v___x_4568_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4569_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4567_, v___x_4568_);
v___x_4570_ = l_Lean_Json_mkObj(v___x_4569_);
lean_dec(v___x_4569_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin_toJson(lean_object* v_x_4573_){
_start:
{
lean_object* v_toWorkDoneProgressReport_4574_; lean_object* v_title_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4610_; 
v_toWorkDoneProgressReport_4574_ = lean_ctor_get(v_x_4573_, 0);
v_title_4575_ = lean_ctor_get(v_x_4573_, 1);
v_isSharedCheck_4610_ = !lean_is_exclusive(v_x_4573_);
if (v_isSharedCheck_4610_ == 0)
{
v___x_4577_ = v_x_4573_;
v_isShared_4578_ = v_isSharedCheck_4610_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_title_4575_);
lean_inc(v_toWorkDoneProgressReport_4574_);
lean_dec(v_x_4573_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4610_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v_kind_4579_; lean_object* v_message_x3f_4580_; uint8_t v_cancellable_4581_; lean_object* v_percentage_x3f_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4586_; 
v_kind_4579_ = lean_ctor_get(v_toWorkDoneProgressReport_4574_, 0);
lean_inc_ref(v_kind_4579_);
v_message_x3f_4580_ = lean_ctor_get(v_toWorkDoneProgressReport_4574_, 1);
lean_inc(v_message_x3f_4580_);
v_cancellable_4581_ = lean_ctor_get_uint8(v_toWorkDoneProgressReport_4574_, sizeof(void*)*3);
v_percentage_x3f_4582_ = lean_ctor_get(v_toWorkDoneProgressReport_4574_, 2);
lean_inc(v_percentage_x3f_4582_);
lean_dec_ref(v_toWorkDoneProgressReport_4574_);
v___x_4583_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_4584_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4584_, 0, v_kind_4579_);
if (v_isShared_4578_ == 0)
{
lean_ctor_set(v___x_4577_, 1, v___x_4584_);
lean_ctor_set(v___x_4577_, 0, v___x_4583_);
v___x_4586_ = v___x_4577_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4609_; 
v_reuseFailAlloc_4609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4609_, 0, v___x_4583_);
lean_ctor_set(v_reuseFailAlloc_4609_, 1, v___x_4584_);
v___x_4586_ = v_reuseFailAlloc_4609_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4587_ = lean_box(0);
v___x_4588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4588_, 0, v___x_4586_);
lean_ctor_set(v___x_4588_, 1, v___x_4587_);
v___x_4589_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0));
v___x_4590_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4589_, v_message_x3f_4580_);
v___x_4591_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1));
v___x_4592_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4592_, 0, v_cancellable_4581_);
v___x_4593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4591_);
lean_ctor_set(v___x_4593_, 1, v___x_4592_);
v___x_4594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4594_, 0, v___x_4593_);
lean_ctor_set(v___x_4594_, 1, v___x_4587_);
v___x_4595_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2));
v___x_4596_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(v___x_4595_, v_percentage_x3f_4582_);
v___x_4597_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__0));
v___x_4598_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4598_, 0, v_title_4575_);
v___x_4599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4597_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
v___x_4600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
lean_ctor_set(v___x_4600_, 1, v___x_4587_);
v___x_4601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4601_, 0, v___x_4600_);
lean_ctor_set(v___x_4601_, 1, v___x_4587_);
v___x_4602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4596_);
lean_ctor_set(v___x_4602_, 1, v___x_4601_);
v___x_4603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4603_, 0, v___x_4594_);
lean_ctor_set(v___x_4603_, 1, v___x_4602_);
v___x_4604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4604_, 0, v___x_4590_);
lean_ctor_set(v___x_4604_, 1, v___x_4603_);
v___x_4605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4588_);
lean_ctor_set(v___x_4605_, 1, v___x_4604_);
v___x_4606_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4607_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4605_, v___x_4606_);
v___x_4608_ = l_Lean_Json_mkObj(v___x_4607_);
lean_dec(v___x_4607_);
return v___x_4608_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd_toJson(lean_object* v_x_4613_){
_start:
{
lean_object* v_kind_4614_; lean_object* v_message_x3f_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4633_; 
v_kind_4614_ = lean_ctor_get(v_x_4613_, 0);
v_message_x3f_4615_ = lean_ctor_get(v_x_4613_, 1);
v_isSharedCheck_4633_ = !lean_is_exclusive(v_x_4613_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4617_ = v_x_4613_;
v_isShared_4618_ = v_isSharedCheck_4633_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_message_x3f_4615_);
lean_inc(v_kind_4614_);
lean_dec(v_x_4613_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4633_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4622_; 
v___x_4619_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_4620_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4620_, 0, v_kind_4614_);
if (v_isShared_4618_ == 0)
{
lean_ctor_set(v___x_4617_, 1, v___x_4620_);
lean_ctor_set(v___x_4617_, 0, v___x_4619_);
v___x_4622_ = v___x_4617_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v___x_4619_);
lean_ctor_set(v_reuseFailAlloc_4632_, 1, v___x_4620_);
v___x_4622_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; 
v___x_4623_ = lean_box(0);
v___x_4624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4622_);
lean_ctor_set(v___x_4624_, 1, v___x_4623_);
v___x_4625_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0));
v___x_4626_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4625_, v_message_x3f_4615_);
v___x_4627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4627_, 0, v___x_4626_);
lean_ctor_set(v___x_4627_, 1, v___x_4623_);
v___x_4628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4624_);
lean_ctor_set(v___x_4628_, 1, v___x_4627_);
v___x_4629_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4630_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4628_, v___x_4629_);
v___x_4631_ = l_Lean_Json_mkObj(v___x_4630_);
lean_dec(v___x_4630_);
return v___x_4631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson(lean_object* v_x_4637_){
_start:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v___x_4638_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0));
v___x_4639_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4638_, v_x_4637_);
v___x_4640_ = lean_box(0);
v___x_4641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4639_);
lean_ctor_set(v___x_4641_, 1, v___x_4640_);
v___x_4642_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4643_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4641_, v___x_4642_);
v___x_4644_ = l_Lean_Json_mkObj(v___x_4643_);
lean_dec(v___x_4643_);
return v___x_4644_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; 
v___x_4652_ = 1;
v___x_4653_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1));
v___x_4654_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4653_, v___x_4652_);
return v___x_4654_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; 
v___x_4655_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4656_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2);
v___x_4657_ = lean_string_append(v___x_4656_, v___x_4655_);
return v___x_4657_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
v___x_4661_ = 1;
v___x_4662_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5));
v___x_4663_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4662_, v___x_4661_);
return v___x_4663_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
v___x_4664_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6);
v___x_4665_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3);
v___x_4666_ = lean_string_append(v___x_4665_, v___x_4664_);
return v___x_4666_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___x_4667_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4668_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7);
v___x_4669_ = lean_string_append(v___x_4668_, v___x_4667_);
return v___x_4669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson(lean_object* v_json_4670_){
_start:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4671_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0));
v___x_4672_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_4670_, v___x_4671_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4682_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4682_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4682_ == 0)
{
v___x_4675_ = v___x_4672_;
v_isShared_4676_ = v_isSharedCheck_4682_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4672_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4682_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4680_; 
v___x_4677_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8);
v___x_4678_ = lean_string_append(v___x_4677_, v_a_4673_);
lean_dec(v_a_4673_);
if (v_isShared_4676_ == 0)
{
lean_ctor_set(v___x_4675_, 0, v___x_4678_);
v___x_4680_ = v___x_4675_;
goto v_reusejp_4679_;
}
else
{
lean_object* v_reuseFailAlloc_4681_; 
v_reuseFailAlloc_4681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4681_, 0, v___x_4678_);
v___x_4680_ = v_reuseFailAlloc_4681_;
goto v_reusejp_4679_;
}
v_reusejp_4679_:
{
return v___x_4680_;
}
}
}
else
{
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4690_; 
v_a_4683_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4685_ = v___x_4672_;
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v___x_4672_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4688_; 
if (v_isShared_4686_ == 0)
{
lean_ctor_set_tag(v___x_4685_, 0);
v___x_4688_ = v___x_4685_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_a_4683_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
return v___x_4688_;
}
}
}
else
{
lean_object* v_a_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4698_; 
v_a_4691_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4698_ == 0)
{
v___x_4693_ = v___x_4672_;
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_a_4691_);
lean_dec(v___x_4672_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v_a_4691_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
return v___x_4696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonPartialResultParams_toJson(lean_object* v_x_4702_){
_start:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4703_ = ((lean_object*)(l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0));
v___x_4704_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4703_, v_x_4702_);
v___x_4705_ = lean_box(0);
v___x_4706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4706_, 0, v___x_4704_);
lean_ctor_set(v___x_4706_, 1, v___x_4705_);
v___x_4707_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4708_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4706_, v___x_4707_);
v___x_4709_ = l_Lean_Json_mkObj(v___x_4708_);
lean_dec(v___x_4708_);
return v___x_4709_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4717_ = 1;
v___x_4718_ = ((lean_object*)(l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1));
v___x_4719_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4718_, v___x_4717_);
return v___x_4719_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
v___x_4720_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4721_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2);
v___x_4722_ = lean_string_append(v___x_4721_, v___x_4720_);
return v___x_4722_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
v___x_4726_ = 1;
v___x_4727_ = ((lean_object*)(l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5));
v___x_4728_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4727_, v___x_4726_);
return v___x_4728_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
v___x_4729_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6);
v___x_4730_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3);
v___x_4731_ = lean_string_append(v___x_4730_, v___x_4729_);
return v___x_4731_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4732_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4733_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7);
v___x_4734_ = lean_string_append(v___x_4733_, v___x_4732_);
return v___x_4734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson(lean_object* v_json_4735_){
_start:
{
lean_object* v___x_4736_; lean_object* v___x_4737_; 
v___x_4736_ = ((lean_object*)(l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0));
v___x_4737_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_4735_, v___x_4736_);
if (lean_obj_tag(v___x_4737_) == 0)
{
lean_object* v_a_4738_; lean_object* v___x_4740_; uint8_t v_isShared_4741_; uint8_t v_isSharedCheck_4747_; 
v_a_4738_ = lean_ctor_get(v___x_4737_, 0);
v_isSharedCheck_4747_ = !lean_is_exclusive(v___x_4737_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4740_ = v___x_4737_;
v_isShared_4741_ = v_isSharedCheck_4747_;
goto v_resetjp_4739_;
}
else
{
lean_inc(v_a_4738_);
lean_dec(v___x_4737_);
v___x_4740_ = lean_box(0);
v_isShared_4741_ = v_isSharedCheck_4747_;
goto v_resetjp_4739_;
}
v_resetjp_4739_:
{
lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4745_; 
v___x_4742_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8);
v___x_4743_ = lean_string_append(v___x_4742_, v_a_4738_);
lean_dec(v_a_4738_);
if (v_isShared_4741_ == 0)
{
lean_ctor_set(v___x_4740_, 0, v___x_4743_);
v___x_4745_ = v___x_4740_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v___x_4743_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
return v___x_4745_;
}
}
}
else
{
if (lean_obj_tag(v___x_4737_) == 0)
{
lean_object* v_a_4748_; lean_object* v___x_4750_; uint8_t v_isShared_4751_; uint8_t v_isSharedCheck_4755_; 
v_a_4748_ = lean_ctor_get(v___x_4737_, 0);
v_isSharedCheck_4755_ = !lean_is_exclusive(v___x_4737_);
if (v_isSharedCheck_4755_ == 0)
{
v___x_4750_ = v___x_4737_;
v_isShared_4751_ = v_isSharedCheck_4755_;
goto v_resetjp_4749_;
}
else
{
lean_inc(v_a_4748_);
lean_dec(v___x_4737_);
v___x_4750_ = lean_box(0);
v_isShared_4751_ = v_isSharedCheck_4755_;
goto v_resetjp_4749_;
}
v_resetjp_4749_:
{
lean_object* v___x_4753_; 
if (v_isShared_4751_ == 0)
{
lean_ctor_set_tag(v___x_4750_, 0);
v___x_4753_ = v___x_4750_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v_a_4748_);
v___x_4753_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
return v___x_4753_;
}
}
}
else
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4763_; 
v_a_4756_ = lean_ctor_get(v___x_4737_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4737_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4758_ = v___x_4737_;
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4737_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4759_ == 0)
{
v___x_4761_ = v___x_4758_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
return v___x_4761_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson(uint8_t v_x_4767_){
_start:
{
lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___x_4768_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0));
v___x_4769_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4769_, 0, v_x_4767_);
v___x_4770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4770_, 0, v___x_4768_);
lean_ctor_set(v___x_4770_, 1, v___x_4769_);
v___x_4771_ = lean_box(0);
v___x_4772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4770_);
lean_ctor_set(v___x_4772_, 1, v___x_4771_);
v___x_4773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4772_);
lean_ctor_set(v___x_4773_, 1, v___x_4771_);
v___x_4774_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4775_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4773_, v___x_4774_);
v___x_4776_ = l_Lean_Json_mkObj(v___x_4775_);
lean_dec(v___x_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___boxed(lean_object* v_x_4777_){
_start:
{
uint8_t v_x_29__boxed_4778_; lean_object* v_res_4779_; 
v_x_29__boxed_4778_ = lean_unbox(v_x_4777_);
v_res_4779_ = l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson(v_x_29__boxed_4778_);
return v_res_4779_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4787_ = 1;
v___x_4788_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1));
v___x_4789_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4788_, v___x_4787_);
return v___x_4789_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4790_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4791_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2);
v___x_4792_ = lean_string_append(v___x_4791_, v___x_4790_);
return v___x_4792_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5(void){
_start:
{
uint8_t v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4795_ = 1;
v___x_4796_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4));
v___x_4797_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4796_, v___x_4795_);
return v___x_4797_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6(void){
_start:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
v___x_4798_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5);
v___x_4799_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3);
v___x_4800_ = lean_string_append(v___x_4799_, v___x_4798_);
return v___x_4800_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4801_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4802_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6);
v___x_4803_ = lean_string_append(v___x_4802_, v___x_4801_);
return v___x_4803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson(lean_object* v_json_4804_){
_start:
{
lean_object* v___x_4805_; lean_object* v___x_4806_; 
v___x_4805_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0));
v___x_4806_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_4804_, v___x_4805_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4816_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4816_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4816_ == 0)
{
v___x_4809_ = v___x_4806_;
v_isShared_4810_ = v_isSharedCheck_4816_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4806_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4816_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4814_; 
v___x_4811_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7);
v___x_4812_ = lean_string_append(v___x_4811_, v_a_4807_);
lean_dec(v_a_4807_);
if (v_isShared_4810_ == 0)
{
lean_ctor_set(v___x_4809_, 0, v___x_4812_);
v___x_4814_ = v___x_4809_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v___x_4812_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
return v___x_4814_;
}
}
}
else
{
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4824_; 
v_a_4817_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4819_ = v___x_4806_;
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
else
{
lean_inc(v_a_4817_);
lean_dec(v___x_4806_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4822_; 
if (v_isShared_4820_ == 0)
{
lean_ctor_set_tag(v___x_4819_, 0);
v___x_4822_ = v___x_4819_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_a_4817_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
}
else
{
lean_object* v_a_4825_; lean_object* v___x_4827_; uint8_t v_isShared_4828_; uint8_t v_isSharedCheck_4832_; 
v_a_4825_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4827_ = v___x_4806_;
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
else
{
lean_inc(v_a_4825_);
lean_dec(v___x_4806_);
v___x_4827_ = lean_box(0);
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
v_resetjp_4826_:
{
lean_object* v___x_4830_; 
if (v_isShared_4828_ == 0)
{
v___x_4830_ = v___x_4827_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v_a_4825_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(size_t v_sz_4835_, size_t v_i_4836_, lean_object* v_bs_4837_){
_start:
{
uint8_t v___x_4838_; 
v___x_4838_ = lean_usize_dec_lt(v_i_4836_, v_sz_4835_);
if (v___x_4838_ == 0)
{
lean_object* v___x_4839_; lean_object* v___x_4840_; 
v___x_4839_ = l_unsafeCast___redArg(v_bs_4837_);
lean_dec_ref(v_bs_4837_);
v___x_4840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4840_, 0, v___x_4839_);
return v___x_4840_;
}
else
{
lean_object* v_v_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; 
v_v_4841_ = lean_array_uget_borrowed(v_bs_4837_, v_i_4836_);
v___x_4842_ = l_unsafeCast___redArg(v_v_4841_);
v___x_4843_ = l_Lean_Json_getStr_x3f(v___x_4842_);
if (lean_obj_tag(v___x_4843_) == 0)
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
lean_dec_ref(v_bs_4837_);
v_a_4844_ = lean_ctor_get(v___x_4843_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4843_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4843_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4843_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
else
{
lean_object* v_a_4852_; lean_object* v___x_4853_; lean_object* v_bs_x27_4854_; size_t v___x_4855_; size_t v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; 
v_a_4852_ = lean_ctor_get(v___x_4843_, 0);
lean_inc(v_a_4852_);
lean_dec_ref_known(v___x_4843_, 1);
v___x_4853_ = lean_unsigned_to_nat(0u);
v_bs_x27_4854_ = lean_array_uset(v_bs_4837_, v_i_4836_, v___x_4853_);
v___x_4855_ = ((size_t)1ULL);
v___x_4856_ = lean_usize_add(v_i_4836_, v___x_4855_);
v___x_4857_ = l_unsafeCast___redArg(v_a_4852_);
lean_dec(v_a_4852_);
v___x_4858_ = lean_array_uset(v_bs_x27_4854_, v_i_4836_, v___x_4857_);
v_i_4836_ = v___x_4856_;
v_bs_4837_ = v___x_4858_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4860_, lean_object* v_i_4861_, lean_object* v_bs_4862_){
_start:
{
size_t v_sz_boxed_4863_; size_t v_i_boxed_4864_; lean_object* v_res_4865_; 
v_sz_boxed_4863_ = lean_unbox_usize(v_sz_4860_);
lean_dec(v_sz_4860_);
v_i_boxed_4864_ = lean_unbox_usize(v_i_4861_);
lean_dec(v_i_4861_);
v_res_4865_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_4863_, v_i_boxed_4864_, v_bs_4862_);
return v_res_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0(lean_object* v_x_4866_){
_start:
{
if (lean_obj_tag(v_x_4866_) == 4)
{
lean_object* v_elems_4867_; size_t v_sz_4868_; size_t v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v_elems_4867_ = lean_ctor_get(v_x_4866_, 0);
lean_inc_ref(v_elems_4867_);
lean_dec_ref_known(v_x_4866_, 1);
v_sz_4868_ = lean_array_size(v_elems_4867_);
v___x_4869_ = ((size_t)0ULL);
v___x_4870_ = l_unsafeCast___redArg(v_elems_4867_);
lean_dec_ref(v_elems_4867_);
v___x_4871_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(v_sz_4868_, v___x_4869_, v___x_4870_);
v___x_4872_ = l_unsafeCast___redArg(v___x_4871_);
lean_dec_ref(v___x_4871_);
return v___x_4872_;
}
else
{
lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; 
v___x_4873_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_4874_ = lean_unsigned_to_nat(80u);
v___x_4875_ = l_Lean_Json_pretty(v_x_4866_, v___x_4874_);
v___x_4876_ = lean_string_append(v___x_4873_, v___x_4875_);
lean_dec_ref(v___x_4875_);
v___x_4877_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_4878_ = lean_string_append(v___x_4876_, v___x_4877_);
v___x_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4878_);
return v___x_4879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(lean_object* v_j_4880_, lean_object* v_k_4881_){
_start:
{
lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___x_4882_ = l_Lean_Json_getObjValD(v_j_4880_, v_k_4881_);
v___x_4883_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0(v___x_4882_);
return v___x_4883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0___boxed(lean_object* v_j_4884_, lean_object* v_k_4885_){
_start:
{
lean_object* v_res_4886_; 
v_res_4886_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(v_j_4884_, v_k_4885_);
lean_dec_ref(v_k_4885_);
return v_res_4886_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; 
v___x_4893_ = 1;
v___x_4894_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2));
v___x_4895_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4894_, v___x_4893_);
return v___x_4895_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4896_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4897_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3);
v___x_4898_ = lean_string_append(v___x_4897_, v___x_4896_);
return v___x_4898_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4901_ = 1;
v___x_4902_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5));
v___x_4903_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4902_, v___x_4901_);
return v___x_4903_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; 
v___x_4904_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6);
v___x_4905_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4);
v___x_4906_ = lean_string_append(v___x_4905_, v___x_4904_);
return v___x_4906_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; 
v___x_4907_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4908_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7);
v___x_4909_ = lean_string_append(v___x_4908_, v___x_4907_);
return v___x_4909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson(lean_object* v_json_4910_){
_start:
{
lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4911_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0));
v___x_4912_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(v_json_4910_, v___x_4911_);
if (lean_obj_tag(v___x_4912_) == 0)
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4922_; 
v_a_4913_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4922_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4922_ == 0)
{
v___x_4915_ = v___x_4912_;
v_isShared_4916_ = v_isSharedCheck_4922_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4912_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4922_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4920_; 
v___x_4917_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8);
v___x_4918_ = lean_string_append(v___x_4917_, v_a_4913_);
lean_dec(v_a_4913_);
if (v_isShared_4916_ == 0)
{
lean_ctor_set(v___x_4915_, 0, v___x_4918_);
v___x_4920_ = v___x_4915_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v___x_4918_);
v___x_4920_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
return v___x_4920_;
}
}
}
else
{
if (lean_obj_tag(v___x_4912_) == 0)
{
lean_object* v_a_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4930_; 
v_a_4923_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4930_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4930_ == 0)
{
v___x_4925_ = v___x_4912_;
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_a_4923_);
lean_dec(v___x_4912_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4928_; 
if (v_isShared_4926_ == 0)
{
lean_ctor_set_tag(v___x_4925_, 0);
v___x_4928_ = v___x_4925_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_a_4923_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
return v___x_4928_;
}
}
}
else
{
lean_object* v_a_4931_; lean_object* v___x_4933_; uint8_t v_isShared_4934_; uint8_t v_isSharedCheck_4938_; 
v_a_4931_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4938_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4938_ == 0)
{
v___x_4933_ = v___x_4912_;
v_isShared_4934_ = v_isSharedCheck_4938_;
goto v_resetjp_4932_;
}
else
{
lean_inc(v_a_4931_);
lean_dec(v___x_4912_);
v___x_4933_ = lean_box(0);
v_isShared_4934_ = v_isSharedCheck_4938_;
goto v_resetjp_4932_;
}
v_resetjp_4932_:
{
lean_object* v___x_4936_; 
if (v_isShared_4934_ == 0)
{
v___x_4936_ = v___x_4933_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4937_; 
v_reuseFailAlloc_4937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4937_, 0, v_a_4931_);
v___x_4936_ = v_reuseFailAlloc_4937_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
return v___x_4936_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(size_t v_sz_4941_, size_t v_i_4942_, lean_object* v_bs_4943_){
_start:
{
uint8_t v___x_4944_; 
v___x_4944_ = lean_usize_dec_lt(v_i_4942_, v_sz_4941_);
if (v___x_4944_ == 0)
{
lean_object* v___x_4945_; 
v___x_4945_ = l_unsafeCast___redArg(v_bs_4943_);
lean_dec_ref(v_bs_4943_);
return v___x_4945_;
}
else
{
lean_object* v_v_4946_; lean_object* v___x_4947_; lean_object* v_bs_x27_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; size_t v___x_4951_; size_t v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v_v_4946_ = lean_array_uget(v_bs_4943_, v_i_4942_);
v___x_4947_ = lean_unsigned_to_nat(0u);
v_bs_x27_4948_ = lean_array_uset(v_bs_4943_, v_i_4942_, v___x_4947_);
v___x_4949_ = l_unsafeCast___redArg(v_v_4946_);
lean_dec(v_v_4946_);
v___x_4950_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4950_, 0, v___x_4949_);
v___x_4951_ = ((size_t)1ULL);
v___x_4952_ = lean_usize_add(v_i_4942_, v___x_4951_);
v___x_4953_ = l_unsafeCast___redArg(v___x_4950_);
lean_dec_ref_known(v___x_4950_, 1);
v___x_4954_ = lean_array_uset(v_bs_x27_4948_, v_i_4942_, v___x_4953_);
v_i_4942_ = v___x_4952_;
v_bs_4943_ = v___x_4954_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4956_, lean_object* v_i_4957_, lean_object* v_bs_4958_){
_start:
{
size_t v_sz_boxed_4959_; size_t v_i_boxed_4960_; lean_object* v_res_4961_; 
v_sz_boxed_4959_ = lean_unbox_usize(v_sz_4956_);
lean_dec(v_sz_4956_);
v_i_boxed_4960_ = lean_unbox_usize(v_i_4957_);
lean_dec(v_i_4957_);
v_res_4961_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(v_sz_boxed_4959_, v_i_boxed_4960_, v_bs_4958_);
return v_res_4961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(lean_object* v_a_4962_){
_start:
{
size_t v_sz_4963_; size_t v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; 
v_sz_4963_ = lean_array_size(v_a_4962_);
v___x_4964_ = ((size_t)0ULL);
v___x_4965_ = l_unsafeCast___redArg(v_a_4962_);
v___x_4966_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(v_sz_4963_, v___x_4964_, v___x_4965_);
v___x_4967_ = l_unsafeCast___redArg(v___x_4966_);
lean_dec_ref(v___x_4966_);
v___x_4968_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4968_, 0, v___x_4967_);
return v___x_4968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0___boxed(lean_object* v_a_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(v_a_4969_);
lean_dec_ref(v_a_4969_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolveSupport_toJson(lean_object* v_x_4971_){
_start:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v___x_4972_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0));
v___x_4973_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(v_x_4971_);
v___x_4974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4972_);
lean_ctor_set(v___x_4974_, 1, v___x_4973_);
v___x_4975_ = lean_box(0);
v___x_4976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4976_, 0, v___x_4974_);
lean_ctor_set(v___x_4976_, 1, v___x_4975_);
v___x_4977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4976_);
lean_ctor_set(v___x_4977_, 1, v___x_4975_);
v___x_4978_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4979_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4977_, v___x_4978_);
v___x_4980_ = l_Lean_Json_mkObj(v___x_4979_);
lean_dec(v___x_4979_);
return v___x_4980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolveSupport_toJson___boxed(lean_object* v_x_4981_){
_start:
{
lean_object* v_res_4982_; 
v_res_4982_ = l_Lean_Lsp_instToJsonResolveSupport_toJson(v_x_4981_);
lean_dec_ref(v_x_4981_);
return v_res_4982_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instInhabitedLocation_default = _init_l_Lean_Lsp_instInhabitedLocation_default();
lean_mark_persistent(l_Lean_Lsp_instInhabitedLocation_default);
l_Lean_Lsp_instInhabitedLocation = _init_l_Lean_Lsp_instInhabitedLocation();
lean_mark_persistent(l_Lean_Lsp_instInhabitedLocation);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

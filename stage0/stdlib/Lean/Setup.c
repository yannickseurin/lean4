// Lean compiler output
// Module: Lean.Setup
// Imports: public import Lean.Data.Json.Parser public import Lean.Util.LeanOptions
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_instReprLeanOptions_repr___redArg(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_instFromJsonFilePath___lam__0(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_instToJsonFilePath___lam__0(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprImport_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprImport_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprImport_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "importAll"};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprImport_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprImport_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isExported"};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_instReprImport_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprImport_repr___redArg___closed__15;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isMeta"};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_instReprImport_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lean_instReprImport_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprImport_repr___redArg___closed__19;
static lean_once_cell_t l_Lean_instReprImport_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprImport_repr___redArg___closed__20;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__21 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lean_instReprImport_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_instReprImport_repr___redArg___closed__22 = (const lean_object*)&l_Lean_instReprImport_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_instReprImport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprImport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprImport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprImport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprImport___closed__0 = (const lean_object*)&l_Lean_instReprImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprImport = (const lean_object*)&l_Lean_instReprImport___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedImport_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImport_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedImport_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImport_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImport_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImport;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_instToJsonImport_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToJsonImport_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonImport_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonImport_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonImport_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonImport___closed__0 = (const lean_object*)&l_Lean_instToJsonImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonImport = (const lean_object*)&l_Lean_instToJsonImport___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonImport_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__0_value;
static const lean_string_object l_Lean_instFromJsonImport_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Import"};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_instFromJsonImport_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonImport_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(29, 47, 116, 218, 39, 28, 172, 37)}};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__2 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__3;
static const lean_string_object l_Lean_instFromJsonImport_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__5;
static const lean_ctor_object l_Lean_instFromJsonImport_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__6 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__7;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__8;
static const lean_string_object l_Lean_instFromJsonImport_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__9 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__10;
static const lean_ctor_object l_Lean_instFromJsonImport_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(55, 207, 23, 186, 33, 19, 88, 171)}};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__11 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__12;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__13;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__14;
static const lean_ctor_object l_Lean_instFromJsonImport_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(18, 58, 236, 181, 205, 109, 15, 233)}};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__15 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__16;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__17;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__18;
static const lean_ctor_object l_Lean_instFromJsonImport_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(249, 28, 190, 209, 3, 53, 190, 55)}};
static const lean_object* l_Lean_instFromJsonImport_fromJson___closed__19 = (const lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__19_value;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__20;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__21;
static lean_once_cell_t l_Lean_instFromJsonImport_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonImport_fromJson___closed__22;
LEAN_EXPORT lean_object* l_Lean_instFromJsonImport_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonImport_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonImport___closed__0 = (const lean_object*)&l_Lean_instFromJsonImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonImport = (const lean_object*)&l_Lean_instFromJsonImport___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instBEqImport_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqImport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqImport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqImport___closed__0 = (const lean_object*)&l_Lean_instBEqImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqImport = (const lean_object*)&l_Lean_instBEqImport___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_instHashableImport_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableImport_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableImport_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableImport___closed__0 = (const lean_object*)&l_Lean_instHashableImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableImport = (const lean_object*)&l_Lean_instHashableImport___closed__0_value;
lean_object* lean_idbg_client_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Idbg_idbgClientLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instCoeNameImport___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeNameImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeNameImport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeNameImport___closed__0 = (const lean_object*)&l_Lean_instCoeNameImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeNameImport = (const lean_object*)&l_Lean_instCoeNameImport___closed__0_value;
static const lean_string_object l_Lean_instToStringImport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "import "};
static const lean_object* l_Lean_instToStringImport___lam__0___closed__0 = (const lean_object*)&l_Lean_instToStringImport___lam__0___closed__0_value;
static const lean_string_object l_Lean_instToStringImport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instToStringImport___lam__0___closed__1 = (const lean_object*)&l_Lean_instToStringImport___lam__0___closed__1_value;
static const lean_string_object l_Lean_instToStringImport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "all "};
static const lean_object* l_Lean_instToStringImport___lam__0___closed__2 = (const lean_object*)&l_Lean_instToStringImport___lam__0___closed__2_value;
static const lean_string_object l_Lean_instToStringImport___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "meta "};
static const lean_object* l_Lean_instToStringImport___lam__0___closed__3 = (const lean_object*)&l_Lean_instToStringImport___lam__0___closed__3_value;
static const lean_string_object l_Lean_instToStringImport___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "public "};
static const lean_object* l_Lean_instToStringImport___lam__0___closed__4 = (const lean_object*)&l_Lean_instToStringImport___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_instToStringImport___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToStringImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToStringImport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringImport___closed__0 = (const lean_object*)&l_Lean_instToStringImport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringImport = (const lean_object*)&l_Lean_instToStringImport___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedIRPhases_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedIRPhases;
LEAN_EXPORT uint8_t l_Lean_instBEqIRPhases_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqIRPhases_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqIRPhases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqIRPhases_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqIRPhases___closed__0 = (const lean_object*)&l_Lean_instBEqIRPhases___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqIRPhases = (const lean_object*)&l_Lean_instBEqIRPhases___closed__0_value;
static const lean_string_object l_Lean_instReprIRPhases_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IRPhases.runtime"};
static const lean_object* l_Lean_instReprIRPhases_repr___closed__0 = (const lean_object*)&l_Lean_instReprIRPhases_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprIRPhases_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprIRPhases_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprIRPhases_repr___closed__1 = (const lean_object*)&l_Lean_instReprIRPhases_repr___closed__1_value;
static const lean_string_object l_Lean_instReprIRPhases_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.IRPhases.comptime"};
static const lean_object* l_Lean_instReprIRPhases_repr___closed__2 = (const lean_object*)&l_Lean_instReprIRPhases_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprIRPhases_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprIRPhases_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprIRPhases_repr___closed__3 = (const lean_object*)&l_Lean_instReprIRPhases_repr___closed__3_value;
static const lean_string_object l_Lean_instReprIRPhases_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.IRPhases.all"};
static const lean_object* l_Lean_instReprIRPhases_repr___closed__4 = (const lean_object*)&l_Lean_instReprIRPhases_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprIRPhases_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprIRPhases_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprIRPhases_repr___closed__5 = (const lean_object*)&l_Lean_instReprIRPhases_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprIRPhases_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprIRPhases_repr___closed__6;
static lean_once_cell_t l_Lean_instReprIRPhases_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprIRPhases_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprIRPhases_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprIRPhases_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprIRPhases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprIRPhases_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprIRPhases___closed__0 = (const lean_object*)&l_Lean_instReprIRPhases___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprIRPhases = (const lean_object*)&l_Lean_instReprIRPhases___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1_value;
static const lean_string_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__3;
static lean_once_cell_t l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4;
static const lean_ctor_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprModuleHeader_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "imports"};
static const lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprModuleHeader_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprModuleHeader_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprModuleHeader_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instReprModuleHeader_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__4;
static const lean_string_object l_Lean_instReprModuleHeader_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isModule"};
static const lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprModuleHeader_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprModuleHeader_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleHeader_repr___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprModuleHeader_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprModuleHeader_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprModuleHeader_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprModuleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprModuleHeader_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprModuleHeader___closed__0 = (const lean_object*)&l_Lean_instReprModuleHeader___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprModuleHeader = (const lean_object*)&l_Lean_instReprModuleHeader___closed__0_value;
static const lean_array_object l_Lean_instInhabitedModuleHeader_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedModuleHeader_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedModuleHeader_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedModuleHeader_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedModuleHeader_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_instInhabitedModuleHeader_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedModuleHeader_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedModuleHeader_default = (const lean_object*)&l_Lean_instInhabitedModuleHeader_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedModuleHeader = (const lean_object*)&l_Lean_instInhabitedModuleHeader_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleHeader_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleHeader_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonModuleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonModuleHeader_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonModuleHeader___closed__0 = (const lean_object*)&l_Lean_instToJsonModuleHeader___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonModuleHeader = (const lean_object*)&l_Lean_instToJsonModuleHeader___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonModuleHeader_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ModuleHeader"};
static const lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonModuleHeader_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonModuleHeader_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonModuleHeader_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonModuleHeader_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_instFromJsonModuleHeader_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 133, 47, 53, 204, 105, 198, 136)}};
static const lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonModuleHeader_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__2;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__3;
static const lean_ctor_object l_Lean_instFromJsonModuleHeader_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 36, 215, 236, 248, 74, 62, 169)}};
static const lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonModuleHeader_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__5;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__6;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__7;
static const lean_ctor_object l_Lean_instFromJsonModuleHeader_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleHeader_repr___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(63, 113, 75, 226, 154, 4, 86, 101)}};
static const lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__8 = (const lean_object*)&l_Lean_instFromJsonModuleHeader_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__9;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__10;
static lean_once_cell_t l_Lean_instFromJsonModuleHeader_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleHeader_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_instFromJsonModuleHeader_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonModuleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonModuleHeader_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonModuleHeader___closed__0 = (const lean_object*)&l_Lean_instFromJsonModuleHeader___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonModuleHeader = (const lean_object*)&l_Lean_instFromJsonModuleHeader___closed__0_value;
static const lean_string_object l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "FilePath.mk "};
static const lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__0_value)}};
static const lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprImportArtifacts_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toArrays"};
static const lean_object* l_Lean_instReprImportArtifacts_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprImportArtifacts_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprImportArtifacts_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprImportArtifacts_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprImportArtifacts_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprImportArtifacts_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprImportArtifacts_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprImportArtifacts_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_instReprImportArtifacts_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprImportArtifacts_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprImportArtifacts_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprImportArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprImportArtifacts_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprImportArtifacts___closed__0 = (const lean_object*)&l_Lean_instReprImportArtifacts___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprImportArtifacts = (const lean_object*)&l_Lean_instReprImportArtifacts___closed__0_value;
static const lean_array_object l_Lean_instInhabitedImportArtifacts_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedImportArtifacts_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportArtifacts_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedImportArtifacts_default = (const lean_object*)&l_Lean_instInhabitedImportArtifacts_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedImportArtifacts = (const lean_object*)&l_Lean_instInhabitedImportArtifacts_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonImportArtifacts___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonImportArtifacts___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonImportArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonFilePath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonImportArtifacts___closed__0 = (const lean_object*)&l_Lean_instToJsonImportArtifacts___closed__0_value;
static const lean_closure_object l_Lean_instToJsonImportArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_toJson___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonImportArtifacts___closed__0_value)} };
static const lean_object* l_Lean_instToJsonImportArtifacts___closed__1 = (const lean_object*)&l_Lean_instToJsonImportArtifacts___closed__1_value;
static const lean_closure_object l_Lean_instToJsonImportArtifacts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonImportArtifacts___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instToJsonImportArtifacts___closed__1_value)} };
static const lean_object* l_Lean_instToJsonImportArtifacts___closed__2 = (const lean_object*)&l_Lean_instToJsonImportArtifacts___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonImportArtifacts = (const lean_object*)&l_Lean_instToJsonImportArtifacts___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonImportArtifacts___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instFromJsonImportArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonFilePath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonImportArtifacts___closed__0 = (const lean_object*)&l_Lean_instFromJsonImportArtifacts___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonImportArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonImportArtifacts___closed__0_value)} };
static const lean_object* l_Lean_instFromJsonImportArtifacts___closed__1 = (const lean_object*)&l_Lean_instFromJsonImportArtifacts___closed__1_value;
static const lean_closure_object l_Lean_instFromJsonImportArtifacts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonImportArtifacts___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instFromJsonImportArtifacts___closed__1_value)} };
static const lean_object* l_Lean_instFromJsonImportArtifacts___closed__2 = (const lean_object*)&l_Lean_instFromJsonImportArtifacts___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonImportArtifacts = (const lean_object*)&l_Lean_instFromJsonImportArtifacts___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_olean_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_olean_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanServer_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanServer_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanPrivate_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanPrivate_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irSig_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irSig_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_ir_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_ir_x3f___boxed(lean_object*);
static const lean_array_object l_Lean_ImportArtifacts_oleanParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportArtifacts_oleanParts___closed__0 = (const lean_object*)&l_Lean_ImportArtifacts_oleanParts___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanParts(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanParts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irParts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irParts___boxed(lean_object*);
static const lean_string_object l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instReprModuleArtifacts_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__4;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "olean\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__6_value;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "oleanServer\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__7 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_instReprModuleArtifacts_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__9;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "oleanPrivate\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprModuleArtifacts_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ilean\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__14_value;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "irSig\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__15 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__15_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__15_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__16_value;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ir\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__17_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lean_instReprModuleArtifacts_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__19;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "c\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__20 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__20_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__21 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__21_value;
static lean_once_cell_t l_Lean_instReprModuleArtifacts_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__22;
static const lean_string_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bc\?"};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__23 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__23_value;
static const lean_ctor_object l_Lean_instReprModuleArtifacts_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__23_value)}};
static const lean_object* l_Lean_instReprModuleArtifacts_repr___redArg___closed__24 = (const lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_instReprModuleArtifacts_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprModuleArtifacts_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprModuleArtifacts_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprModuleArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprModuleArtifacts_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprModuleArtifacts___closed__0 = (const lean_object*)&l_Lean_instReprModuleArtifacts___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprModuleArtifacts = (const lean_object*)&l_Lean_instReprModuleArtifacts___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedModuleArtifacts_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedModuleArtifacts_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedModuleArtifacts_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedModuleArtifacts_default = (const lean_object*)&l_Lean_instInhabitedModuleArtifacts_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedModuleArtifacts = (const lean_object*)&l_Lean_instInhabitedModuleArtifacts_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__0_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__1 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__1_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "oleanServer"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__2 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__2_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "oleanPrivate"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__3 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__3_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ilean"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__4 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__4_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "irSig"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__5 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__5_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__6 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__6_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__7 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__7_value;
static const lean_string_object l_Lean_instToJsonModuleArtifacts_toJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bc"};
static const lean_object* l_Lean_instToJsonModuleArtifacts_toJson___closed__8 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts_toJson___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleArtifacts_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonModuleArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonModuleArtifacts_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonModuleArtifacts___closed__0 = (const lean_object*)&l_Lean_instToJsonModuleArtifacts___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonModuleArtifacts = (const lean_object*)&l_Lean_instToJsonModuleArtifacts___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ModuleArtifacts"};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 81, 219, 106, 80, 78, 212, 83)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__2;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 97, 121, 84, 79, 57, 27, 198)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__5;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__6;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__7;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(92, 73, 25, 68, 136, 230, 12, 70)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__8 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__9;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__10;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__11;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 89, 207, 118, 14, 195, 79, 46)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__12 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__13;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__14;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__15;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(208, 81, 131, 149, 87, 174, 61, 121)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__16 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__17;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__18;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__19;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(71, 198, 131, 151, 180, 121, 147, 129)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__20 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__20_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__21;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__22;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__23;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(115, 165, 122, 11, 39, 10, 7, 18)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__24 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__24_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__25;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__26;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__27;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__17_value),LEAN_SCALAR_PTR_LITERAL(107, 198, 234, 26, 172, 111, 119, 17)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__28 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__28_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__29;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__30;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__31;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(31, 145, 40, 88, 138, 45, 124, 142)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__32 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__32_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__33;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__34;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__35;
static const lean_ctor_object l_Lean_instFromJsonModuleArtifacts_fromJson___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleArtifacts_repr___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(38, 234, 246, 30, 222, 18, 116, 36)}};
static const lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__36 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__36_value;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__37;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__38;
static lean_once_cell_t l_Lean_instFromJsonModuleArtifacts_fromJson___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson___closed__39;
LEAN_EXPORT lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonModuleArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonModuleArtifacts_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonModuleArtifacts___closed__0 = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonModuleArtifacts = (const lean_object*)&l_Lean_instFromJsonModuleArtifacts___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleArtifacts_oleanParts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleArtifacts_irParts(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprPlugin_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lean_instReprPlugin_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprPlugin_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprPlugin_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprPlugin_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprPlugin_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprPlugin_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprPlugin_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instReprPlugin_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprPlugin_repr___redArg___closed__4;
static const lean_string_object l_Lean_instReprPlugin_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "initFn\?"};
static const lean_object* l_Lean_instReprPlugin_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprPlugin_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprPlugin_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprPlugin_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprPlugin_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprPlugin_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprPlugin_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprPlugin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprPlugin_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprPlugin___closed__0 = (const lean_object*)&l_Lean_instReprPlugin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprPlugin = (const lean_object*)&l_Lean_instReprPlugin___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPlugin_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToJsonPlugin_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l_Lean_instToJsonPlugin_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonPlugin_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonPlugin_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonPlugin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPlugin_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonPlugin___closed__0 = (const lean_object*)&l_Lean_instToJsonPlugin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonPlugin = (const lean_object*)&l_Lean_instToJsonPlugin___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Plugin_ofFilePath(lean_object*);
static const lean_closure_object l_Lean_Plugin_instCoeFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Plugin_ofFilePath, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Plugin_instCoeFilePath___closed__0 = (const lean_object*)&l_Lean_Plugin_instCoeFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Plugin_instCoeFilePath = (const lean_object*)&l_Lean_Plugin_instCoeFilePath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Plugin_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "expected string or object"};
static const lean_object* l_Lean_Plugin_fromJson_x3f___closed__0 = (const lean_object*)&l_Lean_Plugin_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Plugin_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Plugin_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lean_Plugin_fromJson_x3f___closed__1 = (const lean_object*)&l_Lean_Plugin_fromJson_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Plugin_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lean_Plugin_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Plugin_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Plugin_instFromJson___closed__0 = (const lean_object*)&l_Lean_Plugin_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Plugin_instFromJson = (const lean_object*)&l_Lean_Plugin_instFromJson___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__3;
static lean_once_cell_t l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__4;
static const lean_ctor_object l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleSetup_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleSetup_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprImport_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "package\?"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__5_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "imports\?"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__6_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__7 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__7_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "importArts"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.TreeMap.ofList "};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dynlibs"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__12 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "plugins"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__15 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_instReprModuleSetup_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "options"};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprModuleSetup_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_instReprModuleSetup_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_instReprModuleSetup_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprModuleSetup_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprModuleSetup_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprModuleSetup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprModuleSetup_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprModuleSetup___closed__0 = (const lean_object*)&l_Lean_instReprModuleSetup___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprModuleSetup = (const lean_object*)&l_Lean_instReprModuleSetup___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedModuleSetup_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedModuleSetup_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedModuleSetup_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedModuleSetup;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonModuleSetup_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonModuleSetup_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3___boxed(lean_object*);
static const lean_string_object l_Lean_instToJsonModuleSetup_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "package"};
static const lean_object* l_Lean_instToJsonModuleSetup_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonModuleSetup_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonModuleSetup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonModuleSetup_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonModuleSetup___closed__0 = (const lean_object*)&l_Lean_instToJsonModuleSetup___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonModuleSetup = (const lean_object*)&l_Lean_instToJsonModuleSetup___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid LeanOptionValue type"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__0_value)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a `Name`, got '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__4 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13(lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected a `NameMap`, got '"};
static const lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonModuleSetup_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ModuleSetup"};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonImport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 64, 202, 162, 98, 178, 7, 223)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__2;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__3;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__5;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__6;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__7;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(239, 57, 171, 107, 197, 3, 150, 70)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__8 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__9;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__10;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__11;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__12;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__13;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(153, 81, 37, 165, 199, 31, 78, 23)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__14 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__15;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__16;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__17;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(18, 147, 162, 154, 39, 2, 76, 131)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__18 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__18_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__19;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__20;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__21;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(213, 126, 44, 113, 100, 173, 176, 199)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__22 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__22_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__23;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__24;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__25;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(43, 100, 103, 72, 156, 88, 10, 236)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__26 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__26_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__27;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__28;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__29;
static const lean_ctor_object l_Lean_instFromJsonModuleSetup_fromJson___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprModuleSetup_repr___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(15, 45, 121, 141, 112, 165, 100, 9)}};
static const lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__30 = (const lean_object*)&l_Lean_instFromJsonModuleSetup_fromJson___closed__30_value;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__31;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__32;
static lean_once_cell_t l_Lean_instFromJsonModuleSetup_fromJson___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonModuleSetup_fromJson___closed__33;
LEAN_EXPORT lean_object* l_Lean_instFromJsonModuleSetup_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonModuleSetup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonModuleSetup_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonModuleSetup___closed__0 = (const lean_object*)&l_Lean_instFromJsonModuleSetup___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonModuleSetup = (const lean_object*)&l_Lean_instFromJsonModuleSetup___closed__0_value;
static const lean_string_object l_Lean_ModuleSetup_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "failed to load header from "};
static const lean_object* l_Lean_ModuleSetup_load___closed__0 = (const lean_object*)&l_Lean_ModuleSetup_load___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleSetup_load(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleSetup_load___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprImport_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_instReprImport_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_instReprImport_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(13u);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_instReprImport_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(14u);
v___x_30_ = lean_nat_to_int(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_instReprImport_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__0));
v___x_36_ = lean_string_length(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_instReprImport_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__19, &l_Lean_instReprImport_repr___redArg___closed__19_once, _init_l_Lean_instReprImport_repr___redArg___closed__19);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprImport_repr___redArg(lean_object* v_x_43_){
_start:
{
lean_object* v_module_44_; uint8_t v_importAll_45_; uint8_t v_isExported_46_; uint8_t v_isMeta_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_module_44_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_module_44_);
v_importAll_45_ = lean_ctor_get_uint8(v_x_43_, sizeof(void*)*1);
v_isExported_46_ = lean_ctor_get_uint8(v_x_43_, sizeof(void*)*1 + 1);
v_isMeta_47_ = lean_ctor_get_uint8(v_x_43_, sizeof(void*)*1 + 2);
lean_dec_ref(v_x_43_);
v___x_48_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__5));
v___x_49_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__7, &l_Lean_instReprImport_repr___redArg___closed__7_once, _init_l_Lean_instReprImport_repr___redArg___closed__7);
v___x_51_ = lean_unsigned_to_nat(0u);
v___x_52_ = l_Lean_Name_reprPrec(v_module_44_, v___x_51_);
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
v___x_57_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__9));
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_box(1);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__11));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_48_);
v___x_64_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__12, &l_Lean_instReprImport_repr___redArg___closed__12_once, _init_l_Lean_instReprImport_repr___redArg___closed__12);
v___x_65_ = l_Bool_repr___redArg(v_importAll_45_);
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
v___x_71_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__14));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_48_);
v___x_74_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__15, &l_Lean_instReprImport_repr___redArg___closed__15_once, _init_l_Lean_instReprImport_repr___redArg___closed__15);
v___x_75_ = l_Bool_repr___redArg(v_isExported_46_);
v___x_76_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*1, v___x_54_);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_73_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_57_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_59_);
v___x_81_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__17));
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_48_);
v___x_84_ = l_Bool_repr___redArg(v_isMeta_47_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_50_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___x_54_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_83_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__20, &l_Lean_instReprImport_repr___redArg___closed__20_once, _init_l_Lean_instReprImport_repr___redArg___closed__20);
v___x_89_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__21));
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_87_);
v___x_91_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__22));
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_88_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_54_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprImport_repr(lean_object* v_x_95_, lean_object* v_prec_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_instReprImport_repr___redArg(v_x_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprImport_repr___boxed(lean_object* v_x_98_, lean_object* v_prec_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_instReprImport_repr(v_x_98_, v_prec_99_);
lean_dec(v_prec_99_);
return v_res_100_;
}
}
static lean_object* _init_l_Lean_instInhabitedImport_default___closed__0(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_box(0);
v___x_104_ = l_unsafeCast___redArg(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_instInhabitedImport_default___closed__1(void){
_start:
{
uint8_t v___x_105_; uint8_t v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = 1;
v___x_106_ = 0;
v___x_107_ = lean_obj_once(&l_Lean_instInhabitedImport_default___closed__0, &l_Lean_instInhabitedImport_default___closed__0_once, _init_l_Lean_instInhabitedImport_default___closed__0);
v___x_108_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1 + 1, v___x_105_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1 + 2, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_instInhabitedImport_default(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_instInhabitedImport_default___closed__1, &l_Lean_instInhabitedImport_default___closed__1_once, _init_l_Lean_instInhabitedImport_default___closed__1);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_instInhabitedImport(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_instInhabitedImport_default;
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
if (lean_obj_tag(v_a_111_) == 0)
{
lean_object* v___x_113_; 
v___x_113_ = lean_array_to_list(v_a_112_);
return v___x_113_;
}
else
{
lean_object* v_head_114_; lean_object* v_tail_115_; lean_object* v___x_116_; 
v_head_114_ = lean_ctor_get(v_a_111_, 0);
lean_inc(v_head_114_);
v_tail_115_ = lean_ctor_get(v_a_111_, 1);
lean_inc(v_tail_115_);
lean_dec_ref_known(v_a_111_, 2);
v___x_116_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_112_, v_head_114_);
v_a_111_ = v_tail_115_;
v_a_112_ = v___x_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonImport_toJson(lean_object* v_x_120_){
_start:
{
lean_object* v_module_121_; uint8_t v_importAll_122_; uint8_t v_isExported_123_; uint8_t v_isMeta_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_module_121_ = lean_ctor_get(v_x_120_, 0);
lean_inc(v_module_121_);
v_importAll_122_ = lean_ctor_get_uint8(v_x_120_, sizeof(void*)*1);
v_isExported_123_ = lean_ctor_get_uint8(v_x_120_, sizeof(void*)*1 + 1);
v_isMeta_124_ = lean_ctor_get_uint8(v_x_120_, sizeof(void*)*1 + 2);
lean_dec_ref(v_x_120_);
v___x_125_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__1));
v___x_126_ = 1;
v___x_127_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_121_, v___x_126_);
v___x_128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_125_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_box(0);
v___x_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__10));
v___x_133_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_133_, 0, v_importAll_122_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_132_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_130_);
v___x_136_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__13));
v___x_137_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_137_, 0, v_isExported_123_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_130_);
v___x_140_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__16));
v___x_141_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_141_, 0, v_isMeta_124_);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___x_130_);
v___x_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_130_);
v___x_145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_139_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_135_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_131_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = ((lean_object*)(l_Lean_instToJsonImport_toJson___closed__0));
v___x_149_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(v___x_147_, v___x_148_);
v___x_150_ = l_Lean_Json_mkObj(v___x_149_);
lean_dec(v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0(lean_object* v_j_153_, lean_object* v_k_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = l_Lean_Json_getObjValD(v_j_153_, v_k_154_);
v___x_156_ = l_Lean_Name_fromJson_x3f(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0___boxed(lean_object* v_j_157_, lean_object* v_k_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0(v_j_157_, v_k_158_);
lean_dec_ref(v_k_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(lean_object* v_j_160_, lean_object* v_k_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = l_Lean_Json_getObjValD(v_j_160_, v_k_161_);
v___x_163_ = l_Lean_Json_getBool_x3f(v___x_162_);
lean_dec(v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1___boxed(lean_object* v_j_164_, lean_object* v_k_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(v_j_164_, v_k_165_);
lean_dec_ref(v_k_165_);
return v_res_166_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__3(void){
_start:
{
uint8_t v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = 1;
v___x_173_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__2));
v___x_174_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_173_, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__5(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__4));
v___x_177_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__3, &l_Lean_instFromJsonImport_fromJson___closed__3_once, _init_l_Lean_instFromJsonImport_fromJson___closed__3);
v___x_178_ = lean_string_append(v___x_177_, v___x_176_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__7(void){
_start:
{
uint8_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = 1;
v___x_182_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__6));
v___x_183_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_182_, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__8(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__7, &l_Lean_instFromJsonImport_fromJson___closed__7_once, _init_l_Lean_instFromJsonImport_fromJson___closed__7);
v___x_185_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__5, &l_Lean_instFromJsonImport_fromJson___closed__5_once, _init_l_Lean_instFromJsonImport_fromJson___closed__5);
v___x_186_ = lean_string_append(v___x_185_, v___x_184_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__10(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_189_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__8, &l_Lean_instFromJsonImport_fromJson___closed__8_once, _init_l_Lean_instFromJsonImport_fromJson___closed__8);
v___x_190_ = lean_string_append(v___x_189_, v___x_188_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__12(void){
_start:
{
uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_193_ = 1;
v___x_194_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__11));
v___x_195_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_194_, v___x_193_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__13(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__12, &l_Lean_instFromJsonImport_fromJson___closed__12_once, _init_l_Lean_instFromJsonImport_fromJson___closed__12);
v___x_197_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__5, &l_Lean_instFromJsonImport_fromJson___closed__5_once, _init_l_Lean_instFromJsonImport_fromJson___closed__5);
v___x_198_ = lean_string_append(v___x_197_, v___x_196_);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__14(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_199_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_200_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__13, &l_Lean_instFromJsonImport_fromJson___closed__13_once, _init_l_Lean_instFromJsonImport_fromJson___closed__13);
v___x_201_ = lean_string_append(v___x_200_, v___x_199_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__16(void){
_start:
{
uint8_t v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = 1;
v___x_205_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__15));
v___x_206_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_205_, v___x_204_);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__17(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__16, &l_Lean_instFromJsonImport_fromJson___closed__16_once, _init_l_Lean_instFromJsonImport_fromJson___closed__16);
v___x_208_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__5, &l_Lean_instFromJsonImport_fromJson___closed__5_once, _init_l_Lean_instFromJsonImport_fromJson___closed__5);
v___x_209_ = lean_string_append(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__18(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_211_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__17, &l_Lean_instFromJsonImport_fromJson___closed__17_once, _init_l_Lean_instFromJsonImport_fromJson___closed__17);
v___x_212_ = lean_string_append(v___x_211_, v___x_210_);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__20(void){
_start:
{
uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_215_ = 1;
v___x_216_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__19));
v___x_217_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_216_, v___x_215_);
return v___x_217_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__21(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_218_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__20, &l_Lean_instFromJsonImport_fromJson___closed__20_once, _init_l_Lean_instFromJsonImport_fromJson___closed__20);
v___x_219_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__5, &l_Lean_instFromJsonImport_fromJson___closed__5_once, _init_l_Lean_instFromJsonImport_fromJson___closed__5);
v___x_220_ = lean_string_append(v___x_219_, v___x_218_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_instFromJsonImport_fromJson___closed__22(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_222_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__21, &l_Lean_instFromJsonImport_fromJson___closed__21_once, _init_l_Lean_instFromJsonImport_fromJson___closed__21);
v___x_223_ = lean_string_append(v___x_222_, v___x_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonImport_fromJson(lean_object* v_json_224_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__1));
lean_inc(v_json_224_);
v___x_226_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0(v_json_224_, v___x_225_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_json_224_);
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_236_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_236_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_236_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_231_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__10, &l_Lean_instFromJsonImport_fromJson___closed__10_once, _init_l_Lean_instFromJsonImport_fromJson___closed__10);
v___x_232_ = lean_string_append(v___x_231_, v_a_227_);
lean_dec(v_a_227_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_232_);
v___x_234_ = v___x_229_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
else
{
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec(v_json_224_);
v_a_237_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_226_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_226_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set_tag(v___x_239_, 0);
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_245_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_226_, 1);
v___x_246_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__10));
lean_inc(v_json_224_);
v___x_247_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(v_json_224_, v___x_246_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_257_; 
lean_dec(v_a_245_);
lean_dec(v_json_224_);
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_257_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_257_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_257_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_252_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__14, &l_Lean_instFromJsonImport_fromJson___closed__14_once, _init_l_Lean_instFromJsonImport_fromJson___closed__14);
v___x_253_ = lean_string_append(v___x_252_, v_a_248_);
lean_dec(v_a_248_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_253_);
v___x_255_ = v___x_250_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
else
{
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec(v_a_245_);
lean_dec(v_json_224_);
v_a_258_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_247_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_247_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set_tag(v___x_260_, 0);
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_a_266_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_247_, 1);
v___x_267_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__13));
lean_inc(v_json_224_);
v___x_268_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(v_json_224_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_278_; 
lean_dec(v_a_266_);
lean_dec(v_a_245_);
lean_dec(v_json_224_);
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_278_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_278_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_278_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_273_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__18, &l_Lean_instFromJsonImport_fromJson___closed__18_once, _init_l_Lean_instFromJsonImport_fromJson___closed__18);
v___x_274_ = lean_string_append(v___x_273_, v_a_269_);
lean_dec(v_a_269_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_274_);
v___x_276_ = v___x_271_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
else
{
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec(v_a_266_);
lean_dec(v_a_245_);
lean_dec(v_json_224_);
v_a_279_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_268_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_268_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set_tag(v___x_281_, 0);
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_a_287_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_268_, 1);
v___x_288_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__16));
v___x_289_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(v_json_224_, v___x_288_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_299_; 
lean_dec(v_a_287_);
lean_dec(v_a_266_);
lean_dec(v_a_245_);
v_a_290_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_299_ == 0)
{
v___x_292_ = v___x_289_;
v_isShared_293_ = v_isSharedCheck_299_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_299_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_294_ = lean_obj_once(&l_Lean_instFromJsonImport_fromJson___closed__22, &l_Lean_instFromJsonImport_fromJson___closed__22_once, _init_l_Lean_instFromJsonImport_fromJson___closed__22);
v___x_295_ = lean_string_append(v___x_294_, v_a_290_);
lean_dec(v_a_290_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v___x_295_);
v___x_297_ = v___x_292_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
else
{
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_287_);
lean_dec(v_a_266_);
lean_dec(v_a_245_);
v_a_300_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_289_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_289_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set_tag(v___x_302_, 0);
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_319_; 
v_a_308_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_319_ == 0)
{
v___x_310_ = v___x_289_;
v_isShared_311_ = v_isSharedCheck_319_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_289_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_319_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; uint8_t v___x_313_; uint8_t v___x_314_; uint8_t v___x_315_; lean_object* v___x_317_; 
v___x_312_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_312_, 0, v_a_245_);
v___x_313_ = lean_unbox(v_a_266_);
lean_dec(v_a_266_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*1, v___x_313_);
v___x_314_ = lean_unbox(v_a_287_);
lean_dec(v_a_287_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*1 + 1, v___x_314_);
v___x_315_ = lean_unbox(v_a_308_);
lean_dec(v_a_308_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*1 + 2, v___x_315_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_317_ = v___x_310_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
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
LEAN_EXPORT uint8_t l_Lean_instBEqImport_beq(lean_object* v_x_322_, lean_object* v_x_323_){
_start:
{
lean_object* v_module_324_; uint8_t v_importAll_325_; uint8_t v_isExported_326_; uint8_t v_isMeta_327_; lean_object* v_module_328_; uint8_t v_importAll_329_; uint8_t v_isExported_330_; uint8_t v_isMeta_331_; uint8_t v___y_333_; uint8_t v___y_335_; uint8_t v___x_336_; 
v_module_324_ = lean_ctor_get(v_x_322_, 0);
v_importAll_325_ = lean_ctor_get_uint8(v_x_322_, sizeof(void*)*1);
v_isExported_326_ = lean_ctor_get_uint8(v_x_322_, sizeof(void*)*1 + 1);
v_isMeta_327_ = lean_ctor_get_uint8(v_x_322_, sizeof(void*)*1 + 2);
v_module_328_ = lean_ctor_get(v_x_323_, 0);
v_importAll_329_ = lean_ctor_get_uint8(v_x_323_, sizeof(void*)*1);
v_isExported_330_ = lean_ctor_get_uint8(v_x_323_, sizeof(void*)*1 + 1);
v_isMeta_331_ = lean_ctor_get_uint8(v_x_323_, sizeof(void*)*1 + 2);
v___x_336_ = lean_name_eq(v_module_324_, v_module_328_);
if (v___x_336_ == 0)
{
return v___x_336_;
}
else
{
if (v_importAll_329_ == 0)
{
if (v_importAll_325_ == 0)
{
v___y_335_ = v___x_336_;
goto v___jp_334_;
}
else
{
return v_importAll_329_;
}
}
else
{
v___y_335_ = v_importAll_325_;
goto v___jp_334_;
}
}
v___jp_332_:
{
if (v_isMeta_331_ == 0)
{
if (v_isMeta_327_ == 0)
{
return v___y_333_;
}
else
{
return v_isMeta_331_;
}
}
else
{
return v_isMeta_327_;
}
}
v___jp_334_:
{
if (v___y_335_ == 0)
{
return v___y_335_;
}
else
{
if (v_isExported_330_ == 0)
{
if (v_isExported_326_ == 0)
{
v___y_333_ = v___y_335_;
goto v___jp_332_;
}
else
{
return v_isExported_330_;
}
}
else
{
if (v_isExported_326_ == 0)
{
return v_isExported_326_;
}
else
{
v___y_333_ = v_isExported_326_;
goto v___jp_332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqImport_beq___boxed(lean_object* v_x_337_, lean_object* v_x_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_Lean_instBEqImport_beq(v_x_337_, v_x_338_);
lean_dec_ref(v_x_338_);
lean_dec_ref(v_x_337_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableImport_hash(lean_object* v_x_343_){
_start:
{
lean_object* v_module_344_; uint8_t v_importAll_345_; uint8_t v_isExported_346_; uint8_t v_isMeta_347_; uint64_t v___y_349_; uint64_t v___y_350_; uint64_t v___y_357_; uint64_t v___y_358_; uint64_t v___x_362_; uint64_t v___y_364_; lean_object* v___x_368_; 
v_module_344_ = lean_ctor_get(v_x_343_, 0);
v_importAll_345_ = lean_ctor_get_uint8(v_x_343_, sizeof(void*)*1);
v_isExported_346_ = lean_ctor_get_uint8(v_x_343_, sizeof(void*)*1 + 1);
v_isMeta_347_ = lean_ctor_get_uint8(v_x_343_, sizeof(void*)*1 + 2);
v___x_362_ = 0ULL;
v___x_368_ = l_unsafeCast___redArg(v_module_344_);
if (lean_obj_tag(v___x_368_) == 0)
{
uint64_t v___x_369_; 
v___x_369_ = 1723ULL;
v___y_364_ = v___x_369_;
goto v___jp_363_;
}
else
{
uint64_t v_hash_370_; 
v_hash_370_ = lean_ctor_get_uint64(v___x_368_, sizeof(void*)*2);
lean_dec(v___x_368_);
v___y_364_ = v_hash_370_;
goto v___jp_363_;
}
v___jp_348_:
{
uint64_t v___x_351_; 
v___x_351_ = lean_uint64_mix_hash(v___y_349_, v___y_350_);
if (v_isMeta_347_ == 0)
{
uint64_t v___x_352_; uint64_t v___x_353_; 
v___x_352_ = 13ULL;
v___x_353_ = lean_uint64_mix_hash(v___x_351_, v___x_352_);
return v___x_353_;
}
else
{
uint64_t v___x_354_; uint64_t v___x_355_; 
v___x_354_ = 11ULL;
v___x_355_ = lean_uint64_mix_hash(v___x_351_, v___x_354_);
return v___x_355_;
}
}
v___jp_356_:
{
uint64_t v___x_359_; 
v___x_359_ = lean_uint64_mix_hash(v___y_357_, v___y_358_);
if (v_isExported_346_ == 0)
{
uint64_t v___x_360_; 
v___x_360_ = 13ULL;
v___y_349_ = v___x_359_;
v___y_350_ = v___x_360_;
goto v___jp_348_;
}
else
{
uint64_t v___x_361_; 
v___x_361_ = 11ULL;
v___y_349_ = v___x_359_;
v___y_350_ = v___x_361_;
goto v___jp_348_;
}
}
v___jp_363_:
{
uint64_t v___x_365_; 
v___x_365_ = lean_uint64_mix_hash(v___x_362_, v___y_364_);
if (v_importAll_345_ == 0)
{
uint64_t v___x_366_; 
v___x_366_ = 13ULL;
v___y_357_ = v___x_365_;
v___y_358_ = v___x_366_;
goto v___jp_356_;
}
else
{
uint64_t v___x_367_; 
v___x_367_ = 11ULL;
v___y_357_ = v___x_365_;
v___y_358_ = v___x_367_;
goto v___jp_356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableImport_hash___boxed(lean_object* v_x_371_){
_start:
{
uint64_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l_Lean_instHashableImport_hash(v_x_371_);
lean_dec_ref(v_x_371_);
v_r_373_ = lean_box_uint64(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Idbg_idbgClientLoop___boxed(lean_object* v_00_u03b1_382_, lean_object* v_inst_00___x40_Lean_Setup_1068012781____hygCtx___hyg_383_, lean_object* v_siteId_384_, lean_object* v_imports_385_, lean_object* v_apply_386_, lean_object* v_a_00___x40___internal___hyg_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = lean_idbg_client_loop(v_siteId_384_, v_imports_385_, v_apply_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeNameImport___lam__0(lean_object* v_x_389_){
_start:
{
uint8_t v___x_390_; uint8_t v___x_391_; lean_object* v___x_392_; 
v___x_390_ = 0;
v___x_391_ = 1;
v___x_392_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_392_, 0, v_x_389_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*1, v___x_390_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*1 + 1, v___x_391_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*1 + 2, v___x_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringImport___lam__0(lean_object* v_imp_400_){
_start:
{
lean_object* v_module_401_; uint8_t v_importAll_402_; uint8_t v_isExported_403_; uint8_t v_isMeta_404_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v___y_421_; 
v_module_401_ = lean_ctor_get(v_imp_400_, 0);
lean_inc(v_module_401_);
v_importAll_402_ = lean_ctor_get_uint8(v_imp_400_, sizeof(void*)*1);
v_isExported_403_ = lean_ctor_get_uint8(v_imp_400_, sizeof(void*)*1 + 1);
v_isMeta_404_ = lean_ctor_get_uint8(v_imp_400_, sizeof(void*)*1 + 2);
lean_dec_ref(v_imp_400_);
if (v_isExported_403_ == 0)
{
lean_object* v___x_424_; 
v___x_424_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__1));
v___y_421_ = v___x_424_;
goto v___jp_420_;
}
else
{
lean_object* v___x_425_; 
v___x_425_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__4));
v___y_421_ = v___x_425_;
goto v___jp_420_;
}
v___jp_405_:
{
lean_object* v___x_408_; uint8_t v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_408_ = lean_string_append(v___y_406_, v___y_407_);
v___x_409_ = 1;
v___x_410_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_401_, v___x_409_);
v___x_411_ = lean_string_append(v___x_408_, v___x_410_);
lean_dec_ref(v___x_410_);
return v___x_411_;
}
v___jp_412_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
lean_inc_ref(v___y_413_);
v___x_415_ = lean_string_append(v___y_413_, v___y_414_);
v___x_416_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__0));
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
if (v_importAll_402_ == 0)
{
lean_object* v___x_418_; 
v___x_418_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__1));
v___y_406_ = v___x_417_;
v___y_407_ = v___x_418_;
goto v___jp_405_;
}
else
{
lean_object* v___x_419_; 
v___x_419_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__2));
v___y_406_ = v___x_417_;
v___y_407_ = v___x_419_;
goto v___jp_405_;
}
}
v___jp_420_:
{
if (v_isMeta_404_ == 0)
{
lean_object* v___x_422_; 
v___x_422_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__1));
v___y_413_ = v___y_421_;
v___y_414_ = v___x_422_;
goto v___jp_412_;
}
else
{
lean_object* v___x_423_; 
v___x_423_ = ((lean_object*)(l_Lean_instToStringImport___lam__0___closed__3));
v___y_413_ = v___y_421_;
v___y_414_ = v___x_423_;
goto v___jp_412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorIdx(uint8_t v_x_428_){
_start:
{
switch(v_x_428_)
{
case 0:
{
lean_object* v___x_429_; 
v___x_429_ = lean_unsigned_to_nat(0u);
return v___x_429_;
}
case 1:
{
lean_object* v___x_430_; 
v___x_430_ = lean_unsigned_to_nat(1u);
return v___x_430_;
}
default: 
{
lean_object* v___x_431_; 
v___x_431_ = lean_unsigned_to_nat(2u);
return v___x_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorIdx___boxed(lean_object* v_x_432_){
_start:
{
uint8_t v_x_boxed_433_; lean_object* v_res_434_; 
v_x_boxed_433_ = lean_unbox(v_x_432_);
v_res_434_ = l_Lean_IRPhases_ctorIdx(v_x_boxed_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim___redArg(lean_object* v_k_435_){
_start:
{
lean_inc(v_k_435_);
return v_k_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim___redArg___boxed(lean_object* v_k_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_IRPhases_ctorElim___redArg(v_k_436_);
lean_dec(v_k_436_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim(lean_object* v_motive_438_, lean_object* v_ctorIdx_439_, uint8_t v_t_440_, lean_object* v_h_441_, lean_object* v_k_442_){
_start:
{
lean_inc(v_k_442_);
return v_k_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_ctorElim___boxed(lean_object* v_motive_443_, lean_object* v_ctorIdx_444_, lean_object* v_t_445_, lean_object* v_h_446_, lean_object* v_k_447_){
_start:
{
uint8_t v_t_boxed_448_; lean_object* v_res_449_; 
v_t_boxed_448_ = lean_unbox(v_t_445_);
v_res_449_ = l_Lean_IRPhases_ctorElim(v_motive_443_, v_ctorIdx_444_, v_t_boxed_448_, v_h_446_, v_k_447_);
lean_dec(v_k_447_);
lean_dec(v_ctorIdx_444_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim___redArg(lean_object* v_runtime_450_){
_start:
{
lean_inc(v_runtime_450_);
return v_runtime_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim___redArg___boxed(lean_object* v_runtime_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lean_IRPhases_runtime_elim___redArg(v_runtime_451_);
lean_dec(v_runtime_451_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim(lean_object* v_motive_453_, uint8_t v_t_454_, lean_object* v_h_455_, lean_object* v_runtime_456_){
_start:
{
lean_inc(v_runtime_456_);
return v_runtime_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_runtime_elim___boxed(lean_object* v_motive_457_, lean_object* v_t_458_, lean_object* v_h_459_, lean_object* v_runtime_460_){
_start:
{
uint8_t v_t_boxed_461_; lean_object* v_res_462_; 
v_t_boxed_461_ = lean_unbox(v_t_458_);
v_res_462_ = l_Lean_IRPhases_runtime_elim(v_motive_457_, v_t_boxed_461_, v_h_459_, v_runtime_460_);
lean_dec(v_runtime_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim___redArg(lean_object* v_comptime_463_){
_start:
{
lean_inc(v_comptime_463_);
return v_comptime_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim___redArg___boxed(lean_object* v_comptime_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_IRPhases_comptime_elim___redArg(v_comptime_464_);
lean_dec(v_comptime_464_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim(lean_object* v_motive_466_, uint8_t v_t_467_, lean_object* v_h_468_, lean_object* v_comptime_469_){
_start:
{
lean_inc(v_comptime_469_);
return v_comptime_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_comptime_elim___boxed(lean_object* v_motive_470_, lean_object* v_t_471_, lean_object* v_h_472_, lean_object* v_comptime_473_){
_start:
{
uint8_t v_t_boxed_474_; lean_object* v_res_475_; 
v_t_boxed_474_ = lean_unbox(v_t_471_);
v_res_475_ = l_Lean_IRPhases_comptime_elim(v_motive_470_, v_t_boxed_474_, v_h_472_, v_comptime_473_);
lean_dec(v_comptime_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim___redArg(lean_object* v_all_476_){
_start:
{
lean_inc(v_all_476_);
return v_all_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim___redArg___boxed(lean_object* v_all_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_IRPhases_all_elim___redArg(v_all_477_);
lean_dec(v_all_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim(lean_object* v_motive_479_, uint8_t v_t_480_, lean_object* v_h_481_, lean_object* v_all_482_){
_start:
{
lean_inc(v_all_482_);
return v_all_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_IRPhases_all_elim___boxed(lean_object* v_motive_483_, lean_object* v_t_484_, lean_object* v_h_485_, lean_object* v_all_486_){
_start:
{
uint8_t v_t_boxed_487_; lean_object* v_res_488_; 
v_t_boxed_487_ = lean_unbox(v_t_484_);
v_res_488_ = l_Lean_IRPhases_all_elim(v_motive_483_, v_t_boxed_487_, v_h_485_, v_all_486_);
lean_dec(v_all_486_);
return v_res_488_;
}
}
static uint8_t _init_l_Lean_instInhabitedIRPhases_default(void){
_start:
{
uint8_t v___x_489_; 
v___x_489_ = 0;
return v___x_489_;
}
}
static uint8_t _init_l_Lean_instInhabitedIRPhases(void){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = 0;
return v___x_490_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqIRPhases_beq(uint8_t v_x_491_, uint8_t v_y_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_493_ = l_Lean_IRPhases_ctorIdx(v_x_491_);
v___x_494_ = l_Lean_IRPhases_ctorIdx(v_y_492_);
v___x_495_ = lean_nat_dec_eq(v___x_493_, v___x_494_);
lean_dec(v___x_494_);
lean_dec(v___x_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqIRPhases_beq___boxed(lean_object* v_x_496_, lean_object* v_y_497_){
_start:
{
uint8_t v_x_21__boxed_498_; uint8_t v_y_22__boxed_499_; uint8_t v_res_500_; lean_object* v_r_501_; 
v_x_21__boxed_498_ = lean_unbox(v_x_496_);
v_y_22__boxed_499_ = lean_unbox(v_y_497_);
v_res_500_ = l_Lean_instBEqIRPhases_beq(v_x_21__boxed_498_, v_y_22__boxed_499_);
v_r_501_ = lean_box(v_res_500_);
return v_r_501_;
}
}
static lean_object* _init_l_Lean_instReprIRPhases_repr___closed__6(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_unsigned_to_nat(2u);
v___x_514_ = lean_nat_to_int(v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_instReprIRPhases_repr___closed__7(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = lean_nat_to_int(v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprIRPhases_repr(uint8_t v_x_517_, lean_object* v_prec_518_){
_start:
{
lean_object* v___y_520_; lean_object* v___y_527_; lean_object* v___y_534_; 
switch(v_x_517_)
{
case 0:
{
lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = lean_unsigned_to_nat(1024u);
v___x_541_ = lean_nat_dec_le(v___x_540_, v_prec_518_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_obj_once(&l_Lean_instReprIRPhases_repr___closed__6, &l_Lean_instReprIRPhases_repr___closed__6_once, _init_l_Lean_instReprIRPhases_repr___closed__6);
v___y_520_ = v___x_542_;
goto v___jp_519_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&l_Lean_instReprIRPhases_repr___closed__7, &l_Lean_instReprIRPhases_repr___closed__7_once, _init_l_Lean_instReprIRPhases_repr___closed__7);
v___y_520_ = v___x_543_;
goto v___jp_519_;
}
}
case 1:
{
lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = lean_unsigned_to_nat(1024u);
v___x_545_ = lean_nat_dec_le(v___x_544_, v_prec_518_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&l_Lean_instReprIRPhases_repr___closed__6, &l_Lean_instReprIRPhases_repr___closed__6_once, _init_l_Lean_instReprIRPhases_repr___closed__6);
v___y_527_ = v___x_546_;
goto v___jp_526_;
}
else
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&l_Lean_instReprIRPhases_repr___closed__7, &l_Lean_instReprIRPhases_repr___closed__7_once, _init_l_Lean_instReprIRPhases_repr___closed__7);
v___y_527_ = v___x_547_;
goto v___jp_526_;
}
}
default: 
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(1024u);
v___x_549_ = lean_nat_dec_le(v___x_548_, v_prec_518_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&l_Lean_instReprIRPhases_repr___closed__6, &l_Lean_instReprIRPhases_repr___closed__6_once, _init_l_Lean_instReprIRPhases_repr___closed__6);
v___y_534_ = v___x_550_;
goto v___jp_533_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_Lean_instReprIRPhases_repr___closed__7, &l_Lean_instReprIRPhases_repr___closed__7_once, _init_l_Lean_instReprIRPhases_repr___closed__7);
v___y_534_ = v___x_551_;
goto v___jp_533_;
}
}
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_521_ = ((lean_object*)(l_Lean_instReprIRPhases_repr___closed__1));
lean_inc(v___y_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___y_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*1, v___x_523_);
v___x_525_ = l_Repr_addAppParen(v___x_524_, v_prec_518_);
return v___x_525_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_528_ = ((lean_object*)(l_Lean_instReprIRPhases_repr___closed__3));
lean_inc(v___y_527_);
v___x_529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_529_, 0, v___y_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = 0;
v___x_531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set_uint8(v___x_531_, sizeof(void*)*1, v___x_530_);
v___x_532_ = l_Repr_addAppParen(v___x_531_, v_prec_518_);
return v___x_532_;
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_535_ = ((lean_object*)(l_Lean_instReprIRPhases_repr___closed__5));
lean_inc(v___y_534_);
v___x_536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_536_, 0, v___y_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = 0;
v___x_538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set_uint8(v___x_538_, sizeof(void*)*1, v___x_537_);
v___x_539_ = l_Repr_addAppParen(v___x_538_, v_prec_518_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprIRPhases_repr___boxed(lean_object* v_x_552_, lean_object* v_prec_553_){
_start:
{
uint8_t v_x_171__boxed_554_; lean_object* v_res_555_; 
v_x_171__boxed_554_ = lean_unbox(v_x_552_);
v_res_555_ = l_Lean_instReprIRPhases_repr(v_x_171__boxed_554_, v_prec_553_);
lean_dec(v_prec_553_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_558_, lean_object* v_x_559_, lean_object* v_x_560_){
_start:
{
if (lean_obj_tag(v_x_560_) == 0)
{
lean_dec(v_x_558_);
return v_x_559_;
}
else
{
lean_object* v_head_561_; lean_object* v_tail_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_572_; 
v_head_561_ = lean_ctor_get(v_x_560_, 0);
v_tail_562_ = lean_ctor_get(v_x_560_, 1);
v_isSharedCheck_572_ = !lean_is_exclusive(v_x_560_);
if (v_isSharedCheck_572_ == 0)
{
v___x_564_ = v_x_560_;
v_isShared_565_ = v_isSharedCheck_572_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_tail_562_);
lean_inc(v_head_561_);
lean_dec(v_x_560_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_572_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
lean_inc(v_x_558_);
if (v_isShared_565_ == 0)
{
lean_ctor_set_tag(v___x_564_, 5);
lean_ctor_set(v___x_564_, 1, v_x_558_);
lean_ctor_set(v___x_564_, 0, v_x_559_);
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_x_559_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_x_558_);
v___x_567_ = v_reuseFailAlloc_571_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = l_Lean_instReprImport_repr___redArg(v_head_561_);
v___x_569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v_x_559_ = v___x_569_;
v_x_560_ = v_tail_562_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0_spec__1(lean_object* v_x_573_, lean_object* v_x_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
lean_dec(v_x_573_);
return v_x_574_;
}
else
{
lean_object* v_head_576_; lean_object* v_tail_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_587_; 
v_head_576_ = lean_ctor_get(v_x_575_, 0);
v_tail_577_ = lean_ctor_get(v_x_575_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_587_ == 0)
{
v___x_579_ = v_x_575_;
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_tail_577_);
lean_inc(v_head_576_);
lean_dec(v_x_575_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
lean_inc(v_x_573_);
if (v_isShared_580_ == 0)
{
lean_ctor_set_tag(v___x_579_, 5);
lean_ctor_set(v___x_579_, 1, v_x_573_);
lean_ctor_set(v___x_579_, 0, v_x_574_);
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_x_574_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_x_573_);
v___x_582_ = v_reuseFailAlloc_586_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = l_Lean_instReprImport_repr___redArg(v_head_576_);
v___x_584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0_spec__1_spec__2(v_x_573_, v___x_584_, v_tail_577_);
return v___x_585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0(lean_object* v_x_588_, lean_object* v_x_589_){
_start:
{
if (lean_obj_tag(v_x_588_) == 0)
{
lean_object* v___x_590_; 
lean_dec(v_x_589_);
v___x_590_ = lean_box(0);
return v___x_590_;
}
else
{
lean_object* v_tail_591_; 
v_tail_591_ = lean_ctor_get(v_x_588_, 1);
if (lean_obj_tag(v_tail_591_) == 0)
{
lean_object* v_head_592_; lean_object* v___x_593_; 
lean_dec(v_x_589_);
v_head_592_ = lean_ctor_get(v_x_588_, 0);
lean_inc(v_head_592_);
lean_dec_ref_known(v_x_588_, 2);
v___x_593_ = l_Lean_instReprImport_repr___redArg(v_head_592_);
return v___x_593_;
}
else
{
lean_object* v_head_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
lean_inc(v_tail_591_);
v_head_594_ = lean_ctor_get(v_x_588_, 0);
lean_inc(v_head_594_);
lean_dec_ref_known(v_x_588_, 2);
v___x_595_ = l_Lean_instReprImport_repr___redArg(v_head_594_);
v___x_596_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0_spec__1(v_x_589_, v___x_595_, v_tail_591_);
return v___x_596_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__0));
v___x_603_ = lean_string_length(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_obj_once(&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__3, &l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__3);
v___x_605_ = lean_nat_to_int(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0(lean_object* v_xs_613_){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_614_ = lean_array_get_size(v_xs_613_);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_nat_dec_eq(v___x_614_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_617_ = lean_array_to_list(v_xs_613_);
v___x_618_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1));
v___x_619_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0_spec__0(v___x_617_, v___x_618_);
v___x_620_ = lean_obj_once(&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4, &l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4);
v___x_621_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5));
v___x_622_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v___x_619_);
v___x_623_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6));
v___x_624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_620_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = l_Std_Format_fill(v___x_625_);
return v___x_626_;
}
else
{
lean_object* v___x_627_; 
lean_dec_ref(v_xs_613_);
v___x_627_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8));
return v___x_627_;
}
}
}
static lean_object* _init_l_Lean_instReprModuleHeader_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(11u);
v___x_638_ = lean_nat_to_int(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_l_Lean_instReprModuleHeader_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_unsigned_to_nat(12u);
v___x_643_ = lean_nat_to_int(v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleHeader_repr___redArg(lean_object* v_x_644_){
_start:
{
lean_object* v_imports_645_; uint8_t v_isModule_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_679_; 
v_imports_645_ = lean_ctor_get(v_x_644_, 0);
v_isModule_646_ = lean_ctor_get_uint8(v_x_644_, sizeof(void*)*1);
v_isSharedCheck_679_ = !lean_is_exclusive(v_x_644_);
if (v_isSharedCheck_679_ == 0)
{
v___x_648_ = v_x_644_;
v_isShared_649_ = v_isSharedCheck_679_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_imports_645_);
lean_dec(v_x_644_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_679_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; lean_object* v___x_657_; 
v___x_650_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__5));
v___x_651_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__3));
v___x_652_ = lean_obj_once(&l_Lean_instReprModuleHeader_repr___redArg___closed__4, &l_Lean_instReprModuleHeader_repr___redArg___closed__4_once, _init_l_Lean_instReprModuleHeader_repr___redArg___closed__4);
v___x_653_ = l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0(v_imports_645_);
v___x_654_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_652_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = 0;
if (v_isShared_649_ == 0)
{
lean_ctor_set_tag(v___x_648_, 6);
lean_ctor_set(v___x_648_, 0, v___x_654_);
v___x_657_ = v___x_648_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_654_);
v___x_657_ = v_reuseFailAlloc_678_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
lean_ctor_set_uint8(v___x_657_, sizeof(void*)*1, v___x_655_);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_651_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__9));
v___x_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = lean_box(1);
v___x_662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__6));
v___x_664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v___x_650_);
v___x_666_ = lean_obj_once(&l_Lean_instReprModuleHeader_repr___redArg___closed__7, &l_Lean_instReprModuleHeader_repr___redArg___closed__7_once, _init_l_Lean_instReprModuleHeader_repr___redArg___closed__7);
v___x_667_ = l_Bool_repr___redArg(v_isModule_646_);
v___x_668_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*1, v___x_655_);
v___x_670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_665_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__20, &l_Lean_instReprImport_repr___redArg___closed__20_once, _init_l_Lean_instReprImport_repr___redArg___closed__20);
v___x_672_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__21));
v___x_673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v___x_670_);
v___x_674_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__22));
v___x_675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_671_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_677_, 0, v___x_676_);
lean_ctor_set_uint8(v___x_677_, sizeof(void*)*1, v___x_655_);
return v___x_677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleHeader_repr(lean_object* v_x_680_, lean_object* v_prec_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lean_instReprModuleHeader_repr___redArg(v_x_680_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleHeader_repr___boxed(lean_object* v_x_683_, lean_object* v_prec_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_instReprModuleHeader_repr(v_x_683_, v_prec_684_);
lean_dec(v_prec_684_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0_spec__0(size_t v_sz_695_, size_t v_i_696_, lean_object* v_bs_697_){
_start:
{
uint8_t v___x_698_; 
v___x_698_ = lean_usize_dec_lt(v_i_696_, v_sz_695_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; 
v___x_699_ = l_unsafeCast___redArg(v_bs_697_);
lean_dec_ref(v_bs_697_);
return v___x_699_;
}
else
{
lean_object* v_v_700_; lean_object* v___x_701_; lean_object* v_bs_x27_702_; lean_object* v___x_703_; lean_object* v___x_704_; size_t v___x_705_; size_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_v_700_ = lean_array_uget(v_bs_697_, v_i_696_);
v___x_701_ = lean_unsigned_to_nat(0u);
v_bs_x27_702_ = lean_array_uset(v_bs_697_, v_i_696_, v___x_701_);
v___x_703_ = l_unsafeCast___redArg(v_v_700_);
lean_dec(v_v_700_);
v___x_704_ = l_Lean_instToJsonImport_toJson(v___x_703_);
v___x_705_ = ((size_t)1ULL);
v___x_706_ = lean_usize_add(v_i_696_, v___x_705_);
v___x_707_ = l_unsafeCast___redArg(v___x_704_);
lean_dec(v___x_704_);
v___x_708_ = lean_array_uset(v_bs_x27_702_, v_i_696_, v___x_707_);
v_i_696_ = v___x_706_;
v_bs_697_ = v___x_708_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0_spec__0___boxed(lean_object* v_sz_710_, lean_object* v_i_711_, lean_object* v_bs_712_){
_start:
{
size_t v_sz_boxed_713_; size_t v_i_boxed_714_; lean_object* v_res_715_; 
v_sz_boxed_713_ = lean_unbox_usize(v_sz_710_);
lean_dec(v_sz_710_);
v_i_boxed_714_ = lean_unbox_usize(v_i_711_);
lean_dec(v_i_711_);
v_res_715_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0_spec__0(v_sz_boxed_713_, v_i_boxed_714_, v_bs_712_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0(lean_object* v_a_716_){
_start:
{
size_t v_sz_717_; size_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_sz_717_ = lean_array_size(v_a_716_);
v___x_718_ = ((size_t)0ULL);
v___x_719_ = l_unsafeCast___redArg(v_a_716_);
v___x_720_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0_spec__0(v_sz_717_, v___x_718_, v___x_719_);
v___x_721_ = l_unsafeCast___redArg(v___x_720_);
lean_dec_ref(v___x_720_);
v___x_722_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0___boxed(lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0(v_a_723_);
lean_dec_ref(v_a_723_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleHeader_toJson(lean_object* v_x_725_){
_start:
{
lean_object* v_imports_726_; uint8_t v_isModule_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_imports_726_ = lean_ctor_get(v_x_725_, 0);
v_isModule_727_ = lean_ctor_get_uint8(v_x_725_, sizeof(void*)*1);
v___x_728_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__0));
v___x_729_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0(v_imports_726_);
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_728_);
lean_ctor_set(v___x_730_, 1, v___x_729_);
v___x_731_ = lean_box(0);
v___x_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__5));
v___x_734_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_734_, 0, v_isModule_727_);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
lean_ctor_set(v___x_736_, 1, v___x_731_);
v___x_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v___x_731_);
v___x_738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_732_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = ((lean_object*)(l_Lean_instToJsonImport_toJson___closed__0));
v___x_740_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(v___x_738_, v___x_739_);
v___x_741_ = l_Lean_Json_mkObj(v___x_740_);
lean_dec(v___x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleHeader_toJson___boxed(lean_object* v_x_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_instToJsonModuleHeader_toJson(v_x_742_);
lean_dec_ref(v_x_742_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0_spec__1(size_t v_sz_746_, size_t v_i_747_, lean_object* v_bs_748_){
_start:
{
uint8_t v___x_749_; 
v___x_749_ = lean_usize_dec_lt(v_i_747_, v_sz_746_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = l_unsafeCast___redArg(v_bs_748_);
lean_dec_ref(v_bs_748_);
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
else
{
lean_object* v_v_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_v_752_ = lean_array_uget_borrowed(v_bs_748_, v_i_747_);
v___x_753_ = l_unsafeCast___redArg(v_v_752_);
v___x_754_ = l_Lean_instFromJsonImport_fromJson(v___x_753_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec_ref(v_bs_748_);
v_a_755_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_754_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_764_; lean_object* v_bs_x27_765_; size_t v___x_766_; size_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_763_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_754_, 1);
v___x_764_ = lean_unsigned_to_nat(0u);
v_bs_x27_765_ = lean_array_uset(v_bs_748_, v_i_747_, v___x_764_);
v___x_766_ = ((size_t)1ULL);
v___x_767_ = lean_usize_add(v_i_747_, v___x_766_);
v___x_768_ = l_unsafeCast___redArg(v_a_763_);
lean_dec(v_a_763_);
v___x_769_ = lean_array_uset(v_bs_x27_765_, v_i_747_, v___x_768_);
v_i_747_ = v___x_767_;
v_bs_748_ = v___x_769_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_771_, lean_object* v_i_772_, lean_object* v_bs_773_){
_start:
{
size_t v_sz_boxed_774_; size_t v_i_boxed_775_; lean_object* v_res_776_; 
v_sz_boxed_774_ = lean_unbox_usize(v_sz_771_);
lean_dec(v_sz_771_);
v_i_boxed_775_ = lean_unbox_usize(v_i_772_);
lean_dec(v_i_772_);
v_res_776_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_774_, v_i_boxed_775_, v_bs_773_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0(lean_object* v_x_779_){
_start:
{
if (lean_obj_tag(v_x_779_) == 4)
{
lean_object* v_elems_780_; size_t v_sz_781_; size_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_elems_780_ = lean_ctor_get(v_x_779_, 0);
lean_inc_ref(v_elems_780_);
lean_dec_ref_known(v_x_779_, 1);
v_sz_781_ = lean_array_size(v_elems_780_);
v___x_782_ = ((size_t)0ULL);
v___x_783_ = l_unsafeCast___redArg(v_elems_780_);
lean_dec_ref(v_elems_780_);
v___x_784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0_spec__1(v_sz_781_, v___x_782_, v___x_783_);
v___x_785_ = l_unsafeCast___redArg(v___x_784_);
lean_dec_ref(v___x_784_);
return v___x_785_;
}
else
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_786_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0));
v___x_787_ = lean_unsigned_to_nat(80u);
v___x_788_ = l_Lean_Json_pretty(v_x_779_, v___x_787_);
v___x_789_ = lean_string_append(v___x_786_, v___x_788_);
lean_dec_ref(v___x_788_);
v___x_790_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_791_ = lean_string_append(v___x_789_, v___x_790_);
v___x_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0(lean_object* v_j_793_, lean_object* v_k_794_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = l_Lean_Json_getObjValD(v_j_793_, v_k_794_);
v___x_796_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0(v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0___boxed(lean_object* v_j_797_, lean_object* v_k_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0(v_j_797_, v_k_798_);
lean_dec_ref(v_k_798_);
return v_res_799_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__2(void){
_start:
{
uint8_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_804_ = 1;
v___x_805_ = ((lean_object*)(l_Lean_instFromJsonModuleHeader_fromJson___closed__1));
v___x_806_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_805_, v___x_804_);
return v___x_806_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__3(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__4));
v___x_808_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__2, &l_Lean_instFromJsonModuleHeader_fromJson___closed__2_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__2);
v___x_809_ = lean_string_append(v___x_808_, v___x_807_);
return v___x_809_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__5(void){
_start:
{
uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_812_ = 1;
v___x_813_ = ((lean_object*)(l_Lean_instFromJsonModuleHeader_fromJson___closed__4));
v___x_814_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_813_, v___x_812_);
return v___x_814_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__6(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__5, &l_Lean_instFromJsonModuleHeader_fromJson___closed__5_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__5);
v___x_816_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__3, &l_Lean_instFromJsonModuleHeader_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__3);
v___x_817_ = lean_string_append(v___x_816_, v___x_815_);
return v___x_817_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__7(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_819_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__6, &l_Lean_instFromJsonModuleHeader_fromJson___closed__6_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__6);
v___x_820_ = lean_string_append(v___x_819_, v___x_818_);
return v___x_820_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__9(void){
_start:
{
uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_823_ = 1;
v___x_824_ = ((lean_object*)(l_Lean_instFromJsonModuleHeader_fromJson___closed__8));
v___x_825_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_824_, v___x_823_);
return v___x_825_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__10(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__9, &l_Lean_instFromJsonModuleHeader_fromJson___closed__9_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__9);
v___x_827_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__3, &l_Lean_instFromJsonModuleHeader_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__3);
v___x_828_ = lean_string_append(v___x_827_, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__11(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_830_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__10, &l_Lean_instFromJsonModuleHeader_fromJson___closed__10_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__10);
v___x_831_ = lean_string_append(v___x_830_, v___x_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonModuleHeader_fromJson(lean_object* v_json_832_){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__0));
lean_inc(v_json_832_);
v___x_834_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0(v_json_832_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_844_; 
lean_dec(v_json_832_);
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_844_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_844_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_844_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_839_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__7, &l_Lean_instFromJsonModuleHeader_fromJson___closed__7_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__7);
v___x_840_ = lean_string_append(v___x_839_, v_a_835_);
lean_dec(v_a_835_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_840_);
v___x_842_ = v___x_837_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
else
{
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_json_832_);
v_a_845_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_834_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_834_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
lean_ctor_set_tag(v___x_847_, 0);
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_a_853_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_834_, 1);
v___x_854_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__5));
v___x_855_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(v_json_832_, v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_865_; 
lean_dec(v_a_853_);
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_865_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_865_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_865_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_860_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__11, &l_Lean_instFromJsonModuleHeader_fromJson___closed__11_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__11);
v___x_861_ = lean_string_append(v___x_860_, v_a_856_);
lean_dec(v_a_856_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_861_);
v___x_863_ = v___x_858_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
else
{
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
lean_dec(v_a_853_);
v_a_866_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_855_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_855_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
lean_ctor_set_tag(v___x_868_, 0);
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_883_; 
v_a_874_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_883_ == 0)
{
v___x_876_ = v___x_855_;
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_855_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_881_; 
v___x_878_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_878_, 0, v_a_853_);
v___x_879_ = lean_unbox(v_a_874_);
lean_dec(v_a_874_);
lean_ctor_set_uint8(v___x_878_, sizeof(void*)*1, v___x_879_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_878_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_878_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0(lean_object* v___y_889_){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = ((lean_object*)(l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_892_ = l_String_quote(v___y_889_);
v___x_893_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
v___x_894_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_891_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = l_Repr_addAppParen(v___x_894_, v___x_890_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_x_896_, lean_object* v_x_897_, lean_object* v_x_898_){
_start:
{
if (lean_obj_tag(v_x_898_) == 0)
{
lean_dec(v_x_896_);
return v_x_897_;
}
else
{
lean_object* v_head_899_; lean_object* v_tail_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_915_; 
v_head_899_ = lean_ctor_get(v_x_898_, 0);
v_tail_900_ = lean_ctor_get(v_x_898_, 1);
v_isSharedCheck_915_ = !lean_is_exclusive(v_x_898_);
if (v_isSharedCheck_915_ == 0)
{
v___x_902_ = v_x_898_;
v_isShared_903_ = v_isSharedCheck_915_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_tail_900_);
lean_inc(v_head_899_);
lean_dec(v_x_898_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_915_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
lean_inc(v_x_896_);
if (v_isShared_903_ == 0)
{
lean_ctor_set_tag(v___x_902_, 5);
lean_ctor_set(v___x_902_, 1, v_x_896_);
lean_ctor_set(v___x_902_, 0, v_x_897_);
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_x_897_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v_x_896_);
v___x_905_ = v_reuseFailAlloc_914_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = ((lean_object*)(l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_908_ = l_String_quote(v_head_899_);
v___x_909_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
v___x_910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_907_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = l_Repr_addAppParen(v___x_910_, v___x_906_);
v___x_912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_905_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v_x_897_ = v___x_912_;
v_x_898_ = v_tail_900_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_916_, lean_object* v_x_917_, lean_object* v_x_918_){
_start:
{
if (lean_obj_tag(v_x_918_) == 0)
{
lean_dec(v_x_916_);
return v_x_917_;
}
else
{
lean_object* v_head_919_; lean_object* v_tail_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_935_; 
v_head_919_ = lean_ctor_get(v_x_918_, 0);
v_tail_920_ = lean_ctor_get(v_x_918_, 1);
v_isSharedCheck_935_ = !lean_is_exclusive(v_x_918_);
if (v_isSharedCheck_935_ == 0)
{
v___x_922_ = v_x_918_;
v_isShared_923_ = v_isSharedCheck_935_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_tail_920_);
lean_inc(v_head_919_);
lean_dec(v_x_918_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_935_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
lean_inc(v_x_916_);
if (v_isShared_923_ == 0)
{
lean_ctor_set_tag(v___x_922_, 5);
lean_ctor_set(v___x_922_, 1, v_x_916_);
lean_ctor_set(v___x_922_, 0, v_x_917_);
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_x_917_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_x_916_);
v___x_925_ = v_reuseFailAlloc_934_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_926_ = lean_unsigned_to_nat(0u);
v___x_927_ = ((lean_object*)(l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_928_ = l_String_quote(v_head_919_);
v___x_929_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
v___x_930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_927_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = l_Repr_addAppParen(v___x_930_, v___x_926_);
v___x_932_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_925_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1_spec__2_spec__4(v_x_916_, v___x_932_, v_tail_920_);
return v___x_933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1(lean_object* v_x_936_, lean_object* v_x_937_){
_start:
{
if (lean_obj_tag(v_x_936_) == 0)
{
lean_object* v___x_938_; 
lean_dec(v_x_937_);
v___x_938_ = lean_box(0);
return v___x_938_;
}
else
{
lean_object* v_tail_939_; 
v_tail_939_ = lean_ctor_get(v_x_936_, 1);
if (lean_obj_tag(v_tail_939_) == 0)
{
lean_object* v_head_940_; lean_object* v___x_941_; 
lean_dec(v_x_937_);
v_head_940_ = lean_ctor_get(v_x_936_, 0);
lean_inc(v_head_940_);
lean_dec_ref_known(v_x_936_, 2);
v___x_941_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0(v_head_940_);
return v___x_941_;
}
else
{
lean_object* v_head_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
lean_inc(v_tail_939_);
v_head_942_ = lean_ctor_get(v_x_936_, 0);
lean_inc(v_head_942_);
lean_dec_ref_known(v_x_936_, 2);
v___x_943_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0(v_head_942_);
v___x_944_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1_spec__2(v_x_937_, v___x_943_, v_tail_939_);
return v___x_944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0(lean_object* v_xs_945_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_946_ = lean_array_get_size(v_xs_945_);
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_nat_dec_eq(v___x_946_, v___x_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_949_ = lean_array_to_list(v_xs_945_);
v___x_950_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1));
v___x_951_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1(v___x_949_, v___x_950_);
v___x_952_ = lean_obj_once(&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4, &l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4);
v___x_953_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5));
v___x_954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
lean_ctor_set(v___x_954_, 1, v___x_951_);
v___x_955_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6));
v___x_956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_952_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = l_Std_Format_fill(v___x_957_);
return v___x_958_;
}
else
{
lean_object* v___x_959_; 
lean_dec_ref(v_xs_945_);
v___x_959_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8));
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__1_spec__3(lean_object* v_x_960_, lean_object* v_x_961_, lean_object* v_x_962_){
_start:
{
if (lean_obj_tag(v_x_962_) == 0)
{
lean_dec(v_x_960_);
return v_x_961_;
}
else
{
lean_object* v_head_963_; lean_object* v_tail_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_974_; 
v_head_963_ = lean_ctor_get(v_x_962_, 0);
v_tail_964_ = lean_ctor_get(v_x_962_, 1);
v_isSharedCheck_974_ = !lean_is_exclusive(v_x_962_);
if (v_isSharedCheck_974_ == 0)
{
v___x_966_ = v_x_962_;
v_isShared_967_ = v_isSharedCheck_974_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_tail_964_);
lean_inc(v_head_963_);
lean_dec(v_x_962_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_974_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
lean_inc(v_x_960_);
if (v_isShared_967_ == 0)
{
lean_ctor_set_tag(v___x_966_, 5);
lean_ctor_set(v___x_966_, 1, v_x_960_);
lean_ctor_set(v___x_966_, 0, v_x_961_);
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_x_961_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_x_960_);
v___x_969_ = v_reuseFailAlloc_973_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = l_Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0(v_head_963_);
v___x_971_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v_x_961_ = v___x_971_;
v_x_962_ = v_tail_964_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__1(lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
if (lean_obj_tag(v_x_975_) == 0)
{
lean_object* v___x_977_; 
lean_dec(v_x_976_);
v___x_977_ = lean_box(0);
return v___x_977_;
}
else
{
lean_object* v_tail_978_; 
v_tail_978_ = lean_ctor_get(v_x_975_, 1);
if (lean_obj_tag(v_tail_978_) == 0)
{
lean_object* v_head_979_; lean_object* v___x_980_; 
lean_dec(v_x_976_);
v_head_979_ = lean_ctor_get(v_x_975_, 0);
lean_inc(v_head_979_);
lean_dec_ref_known(v_x_975_, 2);
v___x_980_ = l_Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0(v_head_979_);
return v___x_980_;
}
else
{
lean_object* v_head_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
lean_inc(v_tail_978_);
v_head_981_ = lean_ctor_get(v_x_975_, 0);
lean_inc(v_head_981_);
lean_dec_ref_known(v_x_975_, 2);
v___x_982_ = l_Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0(v_head_981_);
v___x_983_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__1_spec__3(v_x_976_, v___x_982_, v_tail_978_);
return v___x_983_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0(lean_object* v_xs_984_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; uint8_t v___x_987_; 
v___x_985_ = lean_array_get_size(v_xs_984_);
v___x_986_ = lean_unsigned_to_nat(0u);
v___x_987_ = lean_nat_dec_eq(v___x_985_, v___x_986_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_988_ = lean_array_to_list(v_xs_984_);
v___x_989_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1));
v___x_990_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__1(v___x_988_, v___x_989_);
v___x_991_ = lean_obj_once(&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4, &l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4);
v___x_992_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5));
v___x_993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v___x_990_);
v___x_994_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6));
v___x_995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_991_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = l_Std_Format_fill(v___x_996_);
return v___x_997_;
}
else
{
lean_object* v___x_998_; 
lean_dec_ref(v_xs_984_);
v___x_998_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8));
return v___x_998_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprImportArtifacts_repr___redArg(lean_object* v_x_1008_){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1009_ = ((lean_object*)(l_Lean_instReprImportArtifacts_repr___redArg___closed__3));
v___x_1010_ = lean_obj_once(&l_Lean_instReprModuleHeader_repr___redArg___closed__7, &l_Lean_instReprModuleHeader_repr___redArg___closed__7_once, _init_l_Lean_instReprModuleHeader_repr___redArg___closed__7);
v___x_1011_ = l_Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0(v_x_1008_);
v___x_1012_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = 0;
v___x_1014_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set_uint8(v___x_1014_, sizeof(void*)*1, v___x_1013_);
v___x_1015_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1009_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__20, &l_Lean_instReprImport_repr___redArg___closed__20_once, _init_l_Lean_instReprImport_repr___redArg___closed__20);
v___x_1017_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__21));
v___x_1018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
lean_ctor_set(v___x_1018_, 1, v___x_1015_);
v___x_1019_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__22));
v___x_1020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1016_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*1, v___x_1013_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprImportArtifacts_repr(lean_object* v_x_1023_, lean_object* v_prec_1024_){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_instReprImportArtifacts_repr___redArg(v_x_1023_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprImportArtifacts_repr___boxed(lean_object* v_x_1026_, lean_object* v_prec_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_instReprImportArtifacts_repr(v_x_1026_, v_prec_1027_);
lean_dec(v_prec_1027_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonImportArtifacts___lam__0(lean_object* v___x_1035_, lean_object* v_x_1036_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lean_Array_toJson___redArg(v___x_1035_, v_x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonImportArtifacts___lam__0___boxed(lean_object* v___x_1038_, lean_object* v_x_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_instToJsonImportArtifacts___lam__0(v___x_1038_, v_x_1039_);
lean_dec_ref(v_x_1039_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonImportArtifacts___lam__0(lean_object* v___x_1047_, lean_object* v_x_1048_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_Array_fromJson_x3f___redArg(v___x_1047_, v_x_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1049_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1049_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_olean_x3f(lean_object* v_arts_1072_){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1073_ = lean_unsigned_to_nat(0u);
v___x_1074_ = lean_array_get_size(v_arts_1072_);
v___x_1075_ = lean_nat_dec_lt(v___x_1073_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_box(0);
return v___x_1076_;
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1077_ = lean_array_fget_borrowed(v_arts_1072_, v___x_1073_);
v___x_1078_ = lean_array_get_size(v___x_1077_);
v___x_1079_ = lean_nat_dec_lt(v___x_1073_, v___x_1078_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_box(0);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_array_fget_borrowed(v___x_1077_, v___x_1073_);
lean_inc(v___x_1081_);
v___x_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
return v___x_1082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_olean_x3f___boxed(lean_object* v_arts_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_ImportArtifacts_olean_x3f(v_arts_1083_);
lean_dec_ref(v_arts_1083_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanServer_x3f(lean_object* v_arts_1085_){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; 
v___x_1086_ = lean_unsigned_to_nat(0u);
v___x_1087_ = lean_array_get_size(v_arts_1085_);
v___x_1088_ = lean_nat_dec_lt(v___x_1086_, v___x_1087_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_box(0);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; 
v___x_1090_ = lean_array_fget_borrowed(v_arts_1085_, v___x_1086_);
v___x_1091_ = lean_unsigned_to_nat(1u);
v___x_1092_ = lean_array_get_size(v___x_1090_);
v___x_1093_ = lean_nat_dec_lt(v___x_1091_, v___x_1092_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_box(0);
return v___x_1094_;
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_array_fget_borrowed(v___x_1090_, v___x_1091_);
lean_inc(v___x_1095_);
v___x_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
return v___x_1096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanServer_x3f___boxed(lean_object* v_arts_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_ImportArtifacts_oleanServer_x3f(v_arts_1097_);
lean_dec_ref(v_arts_1097_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanPrivate_x3f(lean_object* v_arts_1099_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = lean_array_get_size(v_arts_1099_);
v___x_1102_ = lean_nat_dec_lt(v___x_1100_, v___x_1101_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_box(0);
return v___x_1103_;
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v___x_1104_ = lean_array_fget_borrowed(v_arts_1099_, v___x_1100_);
v___x_1105_ = lean_unsigned_to_nat(2u);
v___x_1106_ = lean_array_get_size(v___x_1104_);
v___x_1107_ = lean_nat_dec_lt(v___x_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_box(0);
return v___x_1108_;
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_array_fget_borrowed(v___x_1104_, v___x_1105_);
lean_inc(v___x_1109_);
v___x_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanPrivate_x3f___boxed(lean_object* v_arts_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_ImportArtifacts_oleanPrivate_x3f(v_arts_1111_);
lean_dec_ref(v_arts_1111_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irSig_x3f(lean_object* v_arts_1113_){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1114_ = lean_unsigned_to_nat(1u);
v___x_1115_ = lean_array_get_size(v_arts_1113_);
v___x_1116_ = lean_nat_dec_lt(v___x_1114_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_box(0);
return v___x_1117_;
}
else
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1118_ = lean_array_fget_borrowed(v_arts_1113_, v___x_1114_);
v___x_1119_ = lean_unsigned_to_nat(0u);
v___x_1120_ = lean_array_get_size(v___x_1118_);
v___x_1121_ = lean_nat_dec_lt(v___x_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_box(0);
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = lean_array_fget_borrowed(v___x_1118_, v___x_1119_);
lean_inc(v___x_1123_);
v___x_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irSig_x3f___boxed(lean_object* v_arts_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lean_ImportArtifacts_irSig_x3f(v_arts_1125_);
lean_dec_ref(v_arts_1125_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_ir_x3f(lean_object* v_arts_1127_){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1128_ = lean_unsigned_to_nat(1u);
v___x_1129_ = lean_array_get_size(v_arts_1127_);
v___x_1130_ = lean_nat_dec_lt(v___x_1128_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_box(0);
return v___x_1131_;
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1132_ = lean_array_fget_borrowed(v_arts_1127_, v___x_1128_);
v___x_1133_ = lean_array_get_size(v___x_1132_);
v___x_1134_ = lean_nat_dec_lt(v___x_1128_, v___x_1133_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_box(0);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_array_fget_borrowed(v___x_1132_, v___x_1128_);
lean_inc(v___x_1136_);
v___x_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_ir_x3f___boxed(lean_object* v_arts_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_ImportArtifacts_ir_x3f(v_arts_1138_);
lean_dec_ref(v_arts_1138_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanParts(uint8_t v_inServer_1142_, lean_object* v_arts_1143_){
_start:
{
lean_object* v_fnames_1145_; lean_object* v_fnames_1149_; lean_object* v___x_1150_; 
v_fnames_1149_ = ((lean_object*)(l_Lean_ImportArtifacts_oleanParts___closed__0));
v___x_1150_ = l_Lean_ImportArtifacts_olean_x3f(v_arts_1143_);
if (lean_obj_tag(v___x_1150_) == 1)
{
lean_object* v_val_1151_; lean_object* v_fnames_1152_; lean_object* v___x_1153_; 
v_val_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_val_1151_);
lean_dec_ref_known(v___x_1150_, 1);
v_fnames_1152_ = lean_array_push(v_fnames_1149_, v_val_1151_);
v___x_1153_ = l_Lean_ImportArtifacts_oleanServer_x3f(v_arts_1143_);
if (lean_obj_tag(v___x_1153_) == 1)
{
lean_object* v_val_1154_; 
v_val_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_val_1154_);
lean_dec_ref_known(v___x_1153_, 1);
if (v_inServer_1142_ == 0)
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_ImportArtifacts_oleanPrivate_x3f(v_arts_1143_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_dec(v_val_1154_);
v_fnames_1145_ = v_fnames_1152_;
goto v___jp_1144_;
}
else
{
lean_dec_ref_known(v___x_1157_, 1);
goto v___jp_1155_;
}
}
else
{
goto v___jp_1155_;
}
v___jp_1155_:
{
lean_object* v_fnames_1156_; 
v_fnames_1156_ = lean_array_push(v_fnames_1152_, v_val_1154_);
v_fnames_1145_ = v_fnames_1156_;
goto v___jp_1144_;
}
}
else
{
lean_dec(v___x_1153_);
return v_fnames_1152_;
}
}
else
{
lean_dec(v___x_1150_);
return v_fnames_1149_;
}
v___jp_1144_:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lean_ImportArtifacts_oleanPrivate_x3f(v_arts_1143_);
if (lean_obj_tag(v___x_1146_) == 1)
{
lean_object* v_val_1147_; lean_object* v_fnames_1148_; 
v_val_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_val_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v_fnames_1148_ = lean_array_push(v_fnames_1145_, v_val_1147_);
return v_fnames_1148_;
}
else
{
lean_dec(v___x_1146_);
return v_fnames_1145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_oleanParts___boxed(lean_object* v_inServer_1158_, lean_object* v_arts_1159_){
_start:
{
uint8_t v_inServer_boxed_1160_; lean_object* v_res_1161_; 
v_inServer_boxed_1160_ = lean_unbox(v_inServer_1158_);
v_res_1161_ = l_Lean_ImportArtifacts_oleanParts(v_inServer_boxed_1160_, v_arts_1159_);
lean_dec_ref(v_arts_1159_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irParts(lean_object* v_arts_1162_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = lean_array_get_size(v_arts_1162_);
v___x_1165_ = lean_nat_dec_lt(v___x_1163_, v___x_1164_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; 
v___x_1166_ = ((lean_object*)(l_Lean_ImportArtifacts_oleanParts___closed__0));
return v___x_1166_;
}
else
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_array_fget_borrowed(v_arts_1162_, v___x_1163_);
lean_inc(v___x_1167_);
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportArtifacts_irParts___boxed(lean_object* v_arts_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_ImportArtifacts_irParts(v_arts_1168_);
lean_dec_ref(v_arts_1168_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(lean_object* v_x_1176_, lean_object* v_x_1177_){
_start:
{
if (lean_obj_tag(v_x_1176_) == 0)
{
lean_object* v___x_1178_; 
v___x_1178_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__1));
return v___x_1178_;
}
else
{
lean_object* v_val_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1194_; 
v_val_1179_ = lean_ctor_get(v_x_1176_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_x_1176_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1181_ = v_x_1176_;
v_isShared_1182_ = v_isSharedCheck_1194_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_val_1179_);
lean_dec(v_x_1176_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1194_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1183_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__3));
v___x_1184_ = lean_unsigned_to_nat(1024u);
v___x_1185_ = ((lean_object*)(l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_1186_ = l_String_quote(v_val_1179_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set_tag(v___x_1181_, 3);
lean_ctor_set(v___x_1181_, 0, v___x_1186_);
v___x_1188_ = v___x_1181_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1185_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = l_Repr_addAppParen(v___x_1189_, v___x_1184_);
v___x_1191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1183_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = l_Repr_addAppParen(v___x_1191_, v_x_1177_);
return v___x_1192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___boxed(lean_object* v_x_1195_, lean_object* v_x_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_x_1195_, v_x_1196_);
lean_dec(v_x_1196_);
return v_res_1197_;
}
}
static lean_object* _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_unsigned_to_nat(9u);
v___x_1208_ = lean_nat_to_int(v___x_1207_);
return v___x_1208_;
}
}
static lean_object* _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = lean_unsigned_to_nat(16u);
v___x_1216_ = lean_nat_to_int(v___x_1215_);
return v___x_1216_;
}
}
static lean_object* _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_unsigned_to_nat(17u);
v___x_1221_ = lean_nat_to_int(v___x_1220_);
return v___x_1221_;
}
}
static lean_object* _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_unsigned_to_nat(7u);
v___x_1232_ = lean_nat_to_int(v___x_1231_);
return v___x_1232_;
}
}
static lean_object* _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = lean_unsigned_to_nat(6u);
v___x_1237_ = lean_nat_to_int(v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleArtifacts_repr___redArg(lean_object* v_x_1241_){
_start:
{
lean_object* v_lean_x3f_1242_; lean_object* v_olean_x3f_1243_; lean_object* v_oleanServer_x3f_1244_; lean_object* v_oleanPrivate_x3f_1245_; lean_object* v_ilean_x3f_1246_; lean_object* v_irSig_x3f_1247_; lean_object* v_ir_x3f_1248_; lean_object* v_c_x3f_1249_; lean_object* v_bc_x3f_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v_lean_x3f_1242_ = lean_ctor_get(v_x_1241_, 0);
lean_inc(v_lean_x3f_1242_);
v_olean_x3f_1243_ = lean_ctor_get(v_x_1241_, 1);
lean_inc(v_olean_x3f_1243_);
v_oleanServer_x3f_1244_ = lean_ctor_get(v_x_1241_, 2);
lean_inc(v_oleanServer_x3f_1244_);
v_oleanPrivate_x3f_1245_ = lean_ctor_get(v_x_1241_, 3);
lean_inc(v_oleanPrivate_x3f_1245_);
v_ilean_x3f_1246_ = lean_ctor_get(v_x_1241_, 4);
lean_inc(v_ilean_x3f_1246_);
v_irSig_x3f_1247_ = lean_ctor_get(v_x_1241_, 5);
lean_inc(v_irSig_x3f_1247_);
v_ir_x3f_1248_ = lean_ctor_get(v_x_1241_, 6);
lean_inc(v_ir_x3f_1248_);
v_c_x3f_1249_ = lean_ctor_get(v_x_1241_, 7);
lean_inc(v_c_x3f_1249_);
v_bc_x3f_1250_ = lean_ctor_get(v_x_1241_, 8);
lean_inc(v_bc_x3f_1250_);
lean_dec_ref(v_x_1241_);
v___x_1251_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__5));
v___x_1252_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__3));
v___x_1253_ = lean_obj_once(&l_Lean_instReprModuleArtifacts_repr___redArg___closed__4, &l_Lean_instReprModuleArtifacts_repr___redArg___closed__4_once, _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__4);
v___x_1254_ = lean_unsigned_to_nat(0u);
v___x_1255_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_lean_x3f_1242_, v___x_1254_);
v___x_1256_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1253_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = 0;
v___x_1258_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*1, v___x_1257_);
v___x_1259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1252_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__9));
v___x_1261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = lean_box(1);
v___x_1263_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__6));
v___x_1265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v___x_1251_);
v___x_1267_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__7, &l_Lean_instReprImport_repr___redArg___closed__7_once, _init_l_Lean_instReprImport_repr___redArg___closed__7);
v___x_1268_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_olean_x3f_1243_, v___x_1254_);
v___x_1269_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1267_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*1, v___x_1257_);
v___x_1271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1266_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
lean_ctor_set(v___x_1272_, 1, v___x_1260_);
v___x_1273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___x_1262_);
v___x_1274_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__8));
v___x_1275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v___x_1251_);
v___x_1277_ = lean_obj_once(&l_Lean_instReprModuleArtifacts_repr___redArg___closed__9, &l_Lean_instReprModuleArtifacts_repr___redArg___closed__9_once, _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__9);
v___x_1278_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_oleanServer_x3f_1244_, v___x_1254_);
v___x_1279_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1277_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set_uint8(v___x_1280_, sizeof(void*)*1, v___x_1257_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1276_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v___x_1260_);
v___x_1283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
lean_ctor_set(v___x_1283_, 1, v___x_1262_);
v___x_1284_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__11));
v___x_1285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1283_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set(v___x_1286_, 1, v___x_1251_);
v___x_1287_ = lean_obj_once(&l_Lean_instReprModuleArtifacts_repr___redArg___closed__12, &l_Lean_instReprModuleArtifacts_repr___redArg___closed__12_once, _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__12);
v___x_1288_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_oleanPrivate_x3f_1245_, v___x_1254_);
v___x_1289_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1287_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set_uint8(v___x_1290_, sizeof(void*)*1, v___x_1257_);
v___x_1291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1286_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
lean_ctor_set(v___x_1292_, 1, v___x_1260_);
v___x_1293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v___x_1262_);
v___x_1294_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__14));
v___x_1295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___x_1251_);
v___x_1297_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_ilean_x3f_1246_, v___x_1254_);
v___x_1298_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1267_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set_uint8(v___x_1299_, sizeof(void*)*1, v___x_1257_);
v___x_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1296_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v___x_1260_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1262_);
v___x_1303_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__16));
v___x_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1302_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___x_1251_);
v___x_1306_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_irSig_x3f_1247_, v___x_1254_);
v___x_1307_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1267_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set_uint8(v___x_1308_, sizeof(void*)*1, v___x_1257_);
v___x_1309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1305_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v___x_1260_);
v___x_1311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1262_);
v___x_1312_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__18));
v___x_1313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1251_);
v___x_1315_ = lean_obj_once(&l_Lean_instReprModuleArtifacts_repr___redArg___closed__19, &l_Lean_instReprModuleArtifacts_repr___redArg___closed__19_once, _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__19);
v___x_1316_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_ir_x3f_1248_, v___x_1254_);
v___x_1317_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set_uint8(v___x_1318_, sizeof(void*)*1, v___x_1257_);
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1314_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___x_1260_);
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___x_1262_);
v___x_1322_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__21));
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v___x_1251_);
v___x_1325_ = lean_obj_once(&l_Lean_instReprModuleArtifacts_repr___redArg___closed__22, &l_Lean_instReprModuleArtifacts_repr___redArg___closed__22_once, _init_l_Lean_instReprModuleArtifacts_repr___redArg___closed__22);
v___x_1326_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_c_x3f_1249_, v___x_1254_);
v___x_1327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1325_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
lean_ctor_set_uint8(v___x_1328_, sizeof(void*)*1, v___x_1257_);
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1324_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
lean_ctor_set(v___x_1330_, 1, v___x_1260_);
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v___x_1262_);
v___x_1332_ = ((lean_object*)(l_Lean_instReprModuleArtifacts_repr___redArg___closed__24));
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1331_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set(v___x_1334_, 1, v___x_1251_);
v___x_1335_ = l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0(v_bc_x3f_1250_, v___x_1254_);
v___x_1336_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1315_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*1, v___x_1257_);
v___x_1338_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1334_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__20, &l_Lean_instReprImport_repr___redArg___closed__20_once, _init_l_Lean_instReprImport_repr___redArg___closed__20);
v___x_1340_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__21));
v___x_1341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_ctor_set(v___x_1341_, 1, v___x_1338_);
v___x_1342_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__22));
v___x_1343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1339_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
lean_ctor_set_uint8(v___x_1345_, sizeof(void*)*1, v___x_1257_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleArtifacts_repr(lean_object* v_x_1346_, lean_object* v_prec_1347_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l_Lean_instReprModuleArtifacts_repr___redArg(v_x_1346_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleArtifacts_repr___boxed(lean_object* v_x_1349_, lean_object* v_prec_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Lean_instReprModuleArtifacts_repr(v_x_1349_, v_prec_1350_);
lean_dec(v_prec_1350_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(lean_object* v_k_1358_, lean_object* v_x_1359_){
_start:
{
if (lean_obj_tag(v_x_1359_) == 0)
{
lean_object* v___x_1360_; 
lean_dec_ref(v_k_1358_);
v___x_1360_ = lean_box(0);
return v___x_1360_;
}
else
{
lean_object* v_val_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1371_; 
v_val_1361_ = lean_ctor_get(v_x_1359_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_x_1359_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1363_ = v_x_1359_;
v_isShared_1364_ = v_isSharedCheck_1371_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_val_1361_);
lean_dec(v_x_1359_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1371_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set_tag(v___x_1363_, 3);
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_val_1361_);
v___x_1366_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v_k_1358_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_box(0);
v___x_1369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1367_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
return v___x_1369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleArtifacts_toJson(lean_object* v_x_1381_){
_start:
{
lean_object* v_lean_x3f_1382_; lean_object* v_olean_x3f_1383_; lean_object* v_oleanServer_x3f_1384_; lean_object* v_oleanPrivate_x3f_1385_; lean_object* v_ilean_x3f_1386_; lean_object* v_irSig_x3f_1387_; lean_object* v_ir_x3f_1388_; lean_object* v_c_x3f_1389_; lean_object* v_bc_x3f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v_lean_x3f_1382_ = lean_ctor_get(v_x_1381_, 0);
lean_inc(v_lean_x3f_1382_);
v_olean_x3f_1383_ = lean_ctor_get(v_x_1381_, 1);
lean_inc(v_olean_x3f_1383_);
v_oleanServer_x3f_1384_ = lean_ctor_get(v_x_1381_, 2);
lean_inc(v_oleanServer_x3f_1384_);
v_oleanPrivate_x3f_1385_ = lean_ctor_get(v_x_1381_, 3);
lean_inc(v_oleanPrivate_x3f_1385_);
v_ilean_x3f_1386_ = lean_ctor_get(v_x_1381_, 4);
lean_inc(v_ilean_x3f_1386_);
v_irSig_x3f_1387_ = lean_ctor_get(v_x_1381_, 5);
lean_inc(v_irSig_x3f_1387_);
v_ir_x3f_1388_ = lean_ctor_get(v_x_1381_, 6);
lean_inc(v_ir_x3f_1388_);
v_c_x3f_1389_ = lean_ctor_get(v_x_1381_, 7);
lean_inc(v_c_x3f_1389_);
v_bc_x3f_1390_ = lean_ctor_get(v_x_1381_, 8);
lean_inc(v_bc_x3f_1390_);
lean_dec_ref(v_x_1381_);
v___x_1391_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__0));
v___x_1392_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1391_, v_lean_x3f_1382_);
v___x_1393_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__1));
v___x_1394_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1393_, v_olean_x3f_1383_);
v___x_1395_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__2));
v___x_1396_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1395_, v_oleanServer_x3f_1384_);
v___x_1397_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__3));
v___x_1398_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1397_, v_oleanPrivate_x3f_1385_);
v___x_1399_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__4));
v___x_1400_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1399_, v_ilean_x3f_1386_);
v___x_1401_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__5));
v___x_1402_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1401_, v_irSig_x3f_1387_);
v___x_1403_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__6));
v___x_1404_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1403_, v_ir_x3f_1388_);
v___x_1405_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__7));
v___x_1406_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1405_, v_c_x3f_1389_);
v___x_1407_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__8));
v___x_1408_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleArtifacts_toJson_spec__0(v___x_1407_, v_bc_x3f_1390_);
v___x_1409_ = lean_box(0);
v___x_1410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1408_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1406_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1404_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1402_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1400_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1398_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1396_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1394_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1392_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = ((lean_object*)(l_Lean_instToJsonImport_toJson___closed__0));
v___x_1420_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(v___x_1418_, v___x_1419_);
v___x_1421_ = l_Lean_Json_mkObj(v___x_1420_);
lean_dec(v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0(lean_object* v_x_1426_){
_start:
{
if (lean_obj_tag(v_x_1426_) == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0___closed__0));
return v___x_1427_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lean_Json_getStr_x3f(v_x_1426_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1445_; 
v_a_1437_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1439_ = v___x_1428_;
v_isShared_1440_ = v_isSharedCheck_1445_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1428_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1445_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_a_1437_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 0, v___x_1441_);
v___x_1443_ = v___x_1439_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(lean_object* v_j_1446_, lean_object* v_k_1447_){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = l_Lean_Json_getObjValD(v_j_1446_, v_k_1447_);
v___x_1449_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0(v___x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0___boxed(lean_object* v_j_1450_, lean_object* v_k_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_j_1450_, v_k_1451_);
lean_dec_ref(v_k_1451_);
return v_res_1452_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1457_ = 1;
v___x_1458_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__1));
v___x_1459_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1458_, v___x_1457_);
return v___x_1459_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1460_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__4));
v___x_1461_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__2, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__2_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__2);
v___x_1462_ = lean_string_append(v___x_1461_, v___x_1460_);
return v___x_1462_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = 1;
v___x_1466_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__4));
v___x_1467_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1466_, v___x_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__5, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__5_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__5);
v___x_1469_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1470_ = lean_string_append(v___x_1469_, v___x_1468_);
return v___x_1470_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1472_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__6, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__6_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__6);
v___x_1473_ = lean_string_append(v___x_1472_, v___x_1471_);
return v___x_1473_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = 1;
v___x_1477_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__8));
v___x_1478_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1477_, v___x_1476_);
return v___x_1478_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__9, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__9_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__9);
v___x_1480_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1481_ = lean_string_append(v___x_1480_, v___x_1479_);
return v___x_1481_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1482_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1483_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__10, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__10_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__10);
v___x_1484_ = lean_string_append(v___x_1483_, v___x_1482_);
return v___x_1484_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__13(void){
_start:
{
uint8_t v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1487_ = 1;
v___x_1488_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__12));
v___x_1489_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1488_, v___x_1487_);
return v___x_1489_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__14(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1490_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__13, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__13_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__13);
v___x_1491_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1492_ = lean_string_append(v___x_1491_, v___x_1490_);
return v___x_1492_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__15(void){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1493_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1494_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__14, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__14_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__14);
v___x_1495_ = lean_string_append(v___x_1494_, v___x_1493_);
return v___x_1495_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__17(void){
_start:
{
uint8_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1498_ = 1;
v___x_1499_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__16));
v___x_1500_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1499_, v___x_1498_);
return v___x_1500_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__18(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1501_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__17, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__17_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__17);
v___x_1502_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1503_ = lean_string_append(v___x_1502_, v___x_1501_);
return v___x_1503_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__19(void){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1505_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__18, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__18_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__18);
v___x_1506_ = lean_string_append(v___x_1505_, v___x_1504_);
return v___x_1506_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__21(void){
_start:
{
uint8_t v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1509_ = 1;
v___x_1510_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__20));
v___x_1511_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1510_, v___x_1509_);
return v___x_1511_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__22(void){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__21, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__21_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__21);
v___x_1513_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1514_ = lean_string_append(v___x_1513_, v___x_1512_);
return v___x_1514_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__23(void){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1515_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1516_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__22, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__22_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__22);
v___x_1517_ = lean_string_append(v___x_1516_, v___x_1515_);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__25(void){
_start:
{
uint8_t v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = 1;
v___x_1521_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__24));
v___x_1522_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1521_, v___x_1520_);
return v___x_1522_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__26(void){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1523_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__25, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__25_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__25);
v___x_1524_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1525_ = lean_string_append(v___x_1524_, v___x_1523_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__27(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1526_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1527_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__26, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__26_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__26);
v___x_1528_ = lean_string_append(v___x_1527_, v___x_1526_);
return v___x_1528_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__29(void){
_start:
{
uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1531_ = 1;
v___x_1532_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__28));
v___x_1533_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1532_, v___x_1531_);
return v___x_1533_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__30(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1534_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__29, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__29_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__29);
v___x_1535_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1536_ = lean_string_append(v___x_1535_, v___x_1534_);
return v___x_1536_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__31(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1538_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__30, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__30_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__30);
v___x_1539_ = lean_string_append(v___x_1538_, v___x_1537_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__33(void){
_start:
{
uint8_t v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1542_ = 1;
v___x_1543_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__32));
v___x_1544_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1543_, v___x_1542_);
return v___x_1544_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__34(void){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1545_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__33, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__33_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__33);
v___x_1546_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1547_ = lean_string_append(v___x_1546_, v___x_1545_);
return v___x_1547_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__35(void){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1548_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1549_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__34, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__34_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__34);
v___x_1550_ = lean_string_append(v___x_1549_, v___x_1548_);
return v___x_1550_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__37(void){
_start:
{
uint8_t v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = 1;
v___x_1554_ = ((lean_object*)(l_Lean_instFromJsonModuleArtifacts_fromJson___closed__36));
v___x_1555_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1554_, v___x_1553_);
return v___x_1555_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__38(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1556_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__37, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__37_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__37);
v___x_1557_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__3);
v___x_1558_ = lean_string_append(v___x_1557_, v___x_1556_);
return v___x_1558_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__39(void){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1559_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_1560_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__38, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__38_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__38);
v___x_1561_ = lean_string_append(v___x_1560_, v___x_1559_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson(lean_object* v_json_1562_){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__0));
lean_inc(v_json_1562_);
v___x_1564_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1563_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_json_1562_);
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1567_ = v___x_1564_;
v_isShared_1568_ = v_isSharedCheck_1574_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1574_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1572_; 
v___x_1569_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__7, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__7_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__7);
v___x_1570_ = lean_string_append(v___x_1569_, v_a_1565_);
lean_dec(v_a_1565_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 0, v___x_1570_);
v___x_1572_ = v___x_1567_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1570_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
else
{
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_dec(v_json_1562_);
v_a_1575_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1564_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1564_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set_tag(v___x_1577_, 0);
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v_a_1583_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1564_, 1);
v___x_1584_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__1));
lean_inc(v_json_1562_);
v___x_1585_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1584_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1595_; 
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1588_ = v___x_1585_;
v_isShared_1589_ = v_isSharedCheck_1595_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1585_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1595_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1590_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__11, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__11_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__11);
v___x_1591_ = lean_string_append(v___x_1590_, v_a_1586_);
lean_dec(v_a_1586_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 0, v___x_1591_);
v___x_1593_ = v___x_1588_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
else
{
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1596_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1585_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1585_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 0);
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v_a_1604_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1605_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__2));
lean_inc(v_json_1562_);
v___x_1606_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1605_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1616_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1616_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1614_; 
v___x_1611_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__15, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__15_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__15);
v___x_1612_ = lean_string_append(v___x_1611_, v_a_1607_);
lean_dec(v_a_1607_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v___x_1612_);
v___x_1614_ = v___x_1609_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
else
{
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1617_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1606_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1606_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
lean_ctor_set_tag(v___x_1619_, 0);
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v_a_1625_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v___x_1606_, 1);
v___x_1626_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__3));
lean_inc(v_json_1562_);
v___x_1627_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1626_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1637_; 
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1637_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1637_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1635_; 
v___x_1632_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__19, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__19_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__19);
v___x_1633_ = lean_string_append(v___x_1632_, v_a_1628_);
lean_dec(v_a_1628_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v___x_1633_);
v___x_1635_ = v___x_1630_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
else
{
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1638_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1627_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1627_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
lean_ctor_set_tag(v___x_1640_, 0);
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v_a_1646_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1646_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1647_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__4));
lean_inc(v_json_1562_);
v___x_1648_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1647_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1658_; 
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1658_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1658_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1656_; 
v___x_1653_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__23, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__23_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__23);
v___x_1654_ = lean_string_append(v___x_1653_, v_a_1649_);
lean_dec(v_a_1649_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1654_);
v___x_1656_ = v___x_1651_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
else
{
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1659_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1648_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1648_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set_tag(v___x_1661_, 0);
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1659_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v_a_1667_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1648_, 1);
v___x_1668_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__5));
lean_inc(v_json_1562_);
v___x_1669_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1668_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1679_; 
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1679_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1679_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1677_; 
v___x_1674_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__27, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__27_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__27);
v___x_1675_ = lean_string_append(v___x_1674_, v_a_1670_);
lean_dec(v_a_1670_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1675_);
v___x_1677_ = v___x_1672_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1675_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
else
{
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1680_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1669_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1669_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
lean_ctor_set_tag(v___x_1682_, 0);
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v_a_1688_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1689_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__6));
lean_inc(v_json_1562_);
v___x_1690_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1689_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1700_; 
lean_dec(v_a_1688_);
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1693_ = v___x_1690_;
v_isShared_1694_ = v_isSharedCheck_1700_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v___x_1690_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1700_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1698_; 
v___x_1695_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__31, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__31_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__31);
v___x_1696_ = lean_string_append(v___x_1695_, v_a_1691_);
lean_dec(v_a_1691_);
if (v_isShared_1694_ == 0)
{
lean_ctor_set(v___x_1693_, 0, v___x_1696_);
v___x_1698_ = v___x_1693_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1696_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
else
{
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
lean_dec(v_a_1688_);
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1701_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1703_ = v___x_1690_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1690_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
lean_ctor_set_tag(v___x_1703_, 0);
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_a_1709_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1710_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__7));
lean_inc(v_json_1562_);
v___x_1711_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1710_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_a_1709_);
lean_dec(v_a_1688_);
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1714_ = v___x_1711_;
v_isShared_1715_ = v_isSharedCheck_1721_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1711_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1721_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1719_; 
v___x_1716_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__35, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__35_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__35);
v___x_1717_ = lean_string_append(v___x_1716_, v_a_1712_);
lean_dec(v_a_1712_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 0, v___x_1717_);
v___x_1719_ = v___x_1714_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1717_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
else
{
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_a_1709_);
lean_dec(v_a_1688_);
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
lean_dec(v_json_1562_);
v_a_1722_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1711_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1711_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
lean_ctor_set_tag(v___x_1724_, 0);
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v_a_1730_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1711_, 1);
v___x_1731_ = ((lean_object*)(l_Lean_instToJsonModuleArtifacts_toJson___closed__8));
v___x_1732_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0(v_json_1562_, v___x_1731_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1742_; 
lean_dec(v_a_1730_);
lean_dec(v_a_1709_);
lean_dec(v_a_1688_);
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1735_ = v___x_1732_;
v_isShared_1736_ = v_isSharedCheck_1742_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1742_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1737_ = lean_obj_once(&l_Lean_instFromJsonModuleArtifacts_fromJson___closed__39, &l_Lean_instFromJsonModuleArtifacts_fromJson___closed__39_once, _init_l_Lean_instFromJsonModuleArtifacts_fromJson___closed__39);
v___x_1738_ = lean_string_append(v___x_1737_, v_a_1733_);
lean_dec(v_a_1733_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 0, v___x_1738_);
v___x_1740_ = v___x_1735_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
else
{
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_dec(v_a_1730_);
lean_dec(v_a_1709_);
lean_dec(v_a_1688_);
lean_dec(v_a_1667_);
lean_dec(v_a_1646_);
lean_dec(v_a_1625_);
lean_dec(v_a_1604_);
lean_dec(v_a_1583_);
v_a_1743_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1732_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1732_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set_tag(v___x_1745_, 0);
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1759_; 
v_a_1751_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1753_ = v___x_1732_;
v_isShared_1754_ = v_isSharedCheck_1759_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1732_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1759_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; lean_object* v___x_1757_; 
v___x_1755_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1755_, 0, v_a_1583_);
lean_ctor_set(v___x_1755_, 1, v_a_1604_);
lean_ctor_set(v___x_1755_, 2, v_a_1625_);
lean_ctor_set(v___x_1755_, 3, v_a_1646_);
lean_ctor_set(v___x_1755_, 4, v_a_1667_);
lean_ctor_set(v___x_1755_, 5, v_a_1688_);
lean_ctor_set(v___x_1755_, 6, v_a_1709_);
lean_ctor_set(v___x_1755_, 7, v_a_1730_);
lean_ctor_set(v___x_1755_, 8, v_a_1751_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1755_);
v___x_1757_ = v___x_1753_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1755_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
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
LEAN_EXPORT lean_object* l_Lean_ModuleArtifacts_oleanParts(lean_object* v_arts_1762_){
_start:
{
lean_object* v_olean_x3f_1763_; lean_object* v_oleanServer_x3f_1764_; lean_object* v_oleanPrivate_x3f_1765_; lean_object* v_fnames_1766_; 
v_olean_x3f_1763_ = lean_ctor_get(v_arts_1762_, 1);
lean_inc(v_olean_x3f_1763_);
v_oleanServer_x3f_1764_ = lean_ctor_get(v_arts_1762_, 2);
lean_inc(v_oleanServer_x3f_1764_);
v_oleanPrivate_x3f_1765_ = lean_ctor_get(v_arts_1762_, 3);
lean_inc(v_oleanPrivate_x3f_1765_);
lean_dec_ref(v_arts_1762_);
v_fnames_1766_ = ((lean_object*)(l_Lean_ImportArtifacts_oleanParts___closed__0));
if (lean_obj_tag(v_olean_x3f_1763_) == 1)
{
lean_object* v_val_1767_; lean_object* v_fnames_1768_; 
v_val_1767_ = lean_ctor_get(v_olean_x3f_1763_, 0);
lean_inc(v_val_1767_);
lean_dec_ref_known(v_olean_x3f_1763_, 1);
v_fnames_1768_ = lean_array_push(v_fnames_1766_, v_val_1767_);
if (lean_obj_tag(v_oleanServer_x3f_1764_) == 1)
{
lean_object* v_val_1769_; lean_object* v_fnames_1770_; 
v_val_1769_ = lean_ctor_get(v_oleanServer_x3f_1764_, 0);
lean_inc(v_val_1769_);
lean_dec_ref_known(v_oleanServer_x3f_1764_, 1);
v_fnames_1770_ = lean_array_push(v_fnames_1768_, v_val_1769_);
if (lean_obj_tag(v_oleanPrivate_x3f_1765_) == 1)
{
lean_object* v_val_1771_; lean_object* v_fnames_1772_; 
v_val_1771_ = lean_ctor_get(v_oleanPrivate_x3f_1765_, 0);
lean_inc(v_val_1771_);
lean_dec_ref_known(v_oleanPrivate_x3f_1765_, 1);
v_fnames_1772_ = lean_array_push(v_fnames_1770_, v_val_1771_);
return v_fnames_1772_;
}
else
{
lean_dec(v_oleanPrivate_x3f_1765_);
return v_fnames_1770_;
}
}
else
{
lean_dec(v_oleanPrivate_x3f_1765_);
lean_dec(v_oleanServer_x3f_1764_);
return v_fnames_1768_;
}
}
else
{
lean_dec(v_oleanPrivate_x3f_1765_);
lean_dec(v_oleanServer_x3f_1764_);
lean_dec(v_olean_x3f_1763_);
return v_fnames_1766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleArtifacts_irParts(lean_object* v_arts_1773_){
_start:
{
lean_object* v_irSig_x3f_1774_; lean_object* v_ir_x3f_1775_; lean_object* v_fnames_1776_; 
v_irSig_x3f_1774_ = lean_ctor_get(v_arts_1773_, 5);
lean_inc(v_irSig_x3f_1774_);
v_ir_x3f_1775_ = lean_ctor_get(v_arts_1773_, 6);
lean_inc(v_ir_x3f_1775_);
lean_dec_ref(v_arts_1773_);
v_fnames_1776_ = ((lean_object*)(l_Lean_ImportArtifacts_oleanParts___closed__0));
if (lean_obj_tag(v_irSig_x3f_1774_) == 1)
{
lean_object* v_val_1777_; lean_object* v_fnames_1778_; 
v_val_1777_ = lean_ctor_get(v_irSig_x3f_1774_, 0);
lean_inc(v_val_1777_);
lean_dec_ref_known(v_irSig_x3f_1774_, 1);
v_fnames_1778_ = lean_array_push(v_fnames_1776_, v_val_1777_);
if (lean_obj_tag(v_ir_x3f_1775_) == 1)
{
lean_object* v_val_1779_; lean_object* v_fnames_1780_; 
v_val_1779_ = lean_ctor_get(v_ir_x3f_1775_, 0);
lean_inc(v_val_1779_);
lean_dec_ref_known(v_ir_x3f_1775_, 1);
v_fnames_1780_ = lean_array_push(v_fnames_1778_, v_val_1779_);
return v_fnames_1780_;
}
else
{
lean_dec(v_ir_x3f_1775_);
return v_fnames_1778_;
}
}
else
{
lean_dec(v_ir_x3f_1775_);
lean_dec(v_irSig_x3f_1774_);
return v_fnames_1776_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0(lean_object* v_x_1781_, lean_object* v_x_1782_){
_start:
{
if (lean_obj_tag(v_x_1781_) == 0)
{
lean_object* v___x_1783_; 
v___x_1783_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__1));
return v___x_1783_;
}
else
{
lean_object* v_val_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1795_; 
v_val_1784_ = lean_ctor_get(v_x_1781_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_x_1781_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1786_ = v_x_1781_;
v_isShared_1787_ = v_isSharedCheck_1795_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_val_1784_);
lean_dec(v_x_1781_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1795_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1788_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__3));
v___x_1789_ = l_String_quote(v_val_1784_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set_tag(v___x_1786_, 3);
lean_ctor_set(v___x_1786_, 0, v___x_1789_);
v___x_1791_ = v___x_1786_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1788_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = l_Repr_addAppParen(v___x_1792_, v_x_1782_);
return v___x_1793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0___boxed(lean_object* v_x_1796_, lean_object* v_x_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0(v_x_1796_, v_x_1797_);
lean_dec(v_x_1797_);
return v_res_1798_;
}
}
static lean_object* _init_l_Lean_instReprPlugin_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_unsigned_to_nat(8u);
v___x_1809_ = lean_nat_to_int(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprPlugin_repr___redArg(lean_object* v_x_1813_){
_start:
{
lean_object* v_path_1814_; lean_object* v_initFn_x3f_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1853_; 
v_path_1814_ = lean_ctor_get(v_x_1813_, 0);
v_initFn_x3f_1815_ = lean_ctor_get(v_x_1813_, 1);
v_isSharedCheck_1853_ = !lean_is_exclusive(v_x_1813_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1817_ = v_x_1813_;
v_isShared_1818_ = v_isSharedCheck_1853_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_initFn_x3f_1815_);
lean_inc(v_path_1814_);
lean_dec(v_x_1813_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1853_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1827_; 
v___x_1819_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__5));
v___x_1820_ = ((lean_object*)(l_Lean_instReprPlugin_repr___redArg___closed__3));
v___x_1821_ = lean_obj_once(&l_Lean_instReprPlugin_repr___redArg___closed__4, &l_Lean_instReprPlugin_repr___redArg___closed__4_once, _init_l_Lean_instReprPlugin_repr___redArg___closed__4);
v___x_1822_ = lean_unsigned_to_nat(0u);
v___x_1823_ = ((lean_object*)(l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_1824_ = l_String_quote(v_path_1814_);
v___x_1825_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
if (v_isShared_1818_ == 0)
{
lean_ctor_set_tag(v___x_1817_, 5);
lean_ctor_set(v___x_1817_, 1, v___x_1825_);
lean_ctor_set(v___x_1817_, 0, v___x_1823_);
v___x_1827_ = v___x_1817_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1823_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v___x_1825_);
v___x_1827_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1828_ = l_Repr_addAppParen(v___x_1827_, v___x_1822_);
v___x_1829_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1821_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = 0;
v___x_1831_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1831_, 0, v___x_1829_);
lean_ctor_set_uint8(v___x_1831_, sizeof(void*)*1, v___x_1830_);
v___x_1832_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1820_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
v___x_1833_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__9));
v___x_1834_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1832_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
v___x_1835_ = lean_box(1);
v___x_1836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1834_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
v___x_1837_ = ((lean_object*)(l_Lean_instReprPlugin_repr___redArg___closed__6));
v___x_1838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
lean_ctor_set(v___x_1839_, 1, v___x_1819_);
v___x_1840_ = lean_obj_once(&l_Lean_instReprModuleHeader_repr___redArg___closed__4, &l_Lean_instReprModuleHeader_repr___redArg___closed__4_once, _init_l_Lean_instReprModuleHeader_repr___redArg___closed__4);
v___x_1841_ = l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0(v_initFn_x3f_1815_, v___x_1822_);
v___x_1842_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1840_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
v___x_1843_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
lean_ctor_set_uint8(v___x_1843_, sizeof(void*)*1, v___x_1830_);
v___x_1844_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1839_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__20, &l_Lean_instReprImport_repr___redArg___closed__20_once, _init_l_Lean_instReprImport_repr___redArg___closed__20);
v___x_1846_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__21));
v___x_1847_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
lean_ctor_set(v___x_1847_, 1, v___x_1844_);
v___x_1848_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__22));
v___x_1849_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1847_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1845_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
lean_ctor_set_uint8(v___x_1851_, sizeof(void*)*1, v___x_1830_);
return v___x_1851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprPlugin_repr(lean_object* v_x_1854_, lean_object* v_prec_1855_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_Lean_instReprPlugin_repr___redArg(v_x_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprPlugin_repr___boxed(lean_object* v_x_1857_, lean_object* v_prec_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_instReprPlugin_repr(v_x_1857_, v_prec_1858_);
lean_dec(v_prec_1858_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPlugin_toJson_spec__0(lean_object* v_k_1862_, lean_object* v_x_1863_){
_start:
{
if (lean_obj_tag(v_x_1863_) == 0)
{
lean_object* v___x_1864_; 
lean_dec_ref(v_k_1862_);
v___x_1864_ = lean_box(0);
return v___x_1864_;
}
else
{
lean_object* v_val_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1875_; 
v_val_1865_ = lean_ctor_get(v_x_1863_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_x_1863_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1867_ = v_x_1863_;
v_isShared_1868_ = v_isSharedCheck_1875_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_val_1865_);
lean_dec(v_x_1863_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1875_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
lean_ctor_set_tag(v___x_1867_, 3);
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_val_1865_);
v___x_1870_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1871_, 0, v_k_1862_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1871_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
return v___x_1873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPlugin_toJson(lean_object* v_x_1877_){
_start:
{
lean_object* v_path_1878_; lean_object* v_initFn_x3f_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1897_; 
v_path_1878_ = lean_ctor_get(v_x_1877_, 0);
v_initFn_x3f_1879_ = lean_ctor_get(v_x_1877_, 1);
v_isSharedCheck_1897_ = !lean_is_exclusive(v_x_1877_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1881_ = v_x_1877_;
v_isShared_1882_ = v_isSharedCheck_1897_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_initFn_x3f_1879_);
lean_inc(v_path_1878_);
lean_dec(v_x_1877_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1897_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1883_ = ((lean_object*)(l_Lean_instReprPlugin_repr___redArg___closed__0));
v___x_1884_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1884_, 0, v_path_1878_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 1, v___x_1884_);
lean_ctor_set(v___x_1881_, 0, v___x_1883_);
v___x_1886_ = v___x_1881_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1883_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1887_ = lean_box(0);
v___x_1888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1886_);
lean_ctor_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = ((lean_object*)(l_Lean_instToJsonPlugin_toJson___closed__0));
v___x_1890_ = l_Lean_Json_opt___at___00Lean_instToJsonPlugin_toJson_spec__0(v___x_1889_, v_initFn_x3f_1879_);
v___x_1891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
lean_ctor_set(v___x_1891_, 1, v___x_1887_);
v___x_1892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1888_);
lean_ctor_set(v___x_1892_, 1, v___x_1891_);
v___x_1893_ = ((lean_object*)(l_Lean_instToJsonImport_toJson___closed__0));
v___x_1894_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(v___x_1892_, v___x_1893_);
v___x_1895_ = l_Lean_Json_mkObj(v___x_1894_);
lean_dec(v___x_1894_);
return v___x_1895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Plugin_ofFilePath(lean_object* v_path_1900_){
_start:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = lean_box(0);
v___x_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1902_, 0, v_path_1900_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__0(lean_object* v_j_1905_, lean_object* v_k_1906_){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = l_Lean_Json_getObjValD(v_j_1905_, v_k_1906_);
v___x_1908_ = l_Lean_Json_getStr_x3f(v___x_1907_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1908_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1908_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
v_a_1917_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1908_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1908_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__0___boxed(lean_object* v_j_1925_, lean_object* v_k_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__0(v_j_1925_, v_k_1926_);
lean_dec_ref(v_k_1926_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1_spec__1(lean_object* v_x_1928_){
_start:
{
if (lean_obj_tag(v_x_1928_) == 0)
{
lean_object* v___x_1929_; 
v___x_1929_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleArtifacts_fromJson_spec__0_spec__0___closed__0));
return v___x_1929_;
}
else
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_Json_getStr_x3f(v_x_1928_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
else
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1947_; 
v_a_1939_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1941_ = v___x_1930_;
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1930_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1943_, 0, v_a_1939_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v___x_1943_);
v___x_1945_ = v___x_1941_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1(lean_object* v_j_1948_, lean_object* v_k_1949_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1950_ = l_Lean_Json_getObjValD(v_j_1948_, v_k_1949_);
v___x_1951_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1_spec__1(v___x_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1___boxed(lean_object* v_j_1952_, lean_object* v_k_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1(v_j_1952_, v_k_1953_);
lean_dec_ref(v_k_1953_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Plugin_fromJson_x3f(lean_object* v_data_1958_){
_start:
{
switch(lean_obj_tag(v_data_1958_))
{
case 3:
{
lean_object* v_s_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1967_; 
v_s_1959_ = lean_ctor_get(v_data_1958_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_data_1958_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1961_ = v_data_1958_;
v_isShared_1962_ = v_isSharedCheck_1967_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_s_1959_);
lean_dec(v_data_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1967_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1963_ = l_Lean_Plugin_ofFilePath(v_s_1959_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set_tag(v___x_1961_, 1);
lean_ctor_set(v___x_1961_, 0, v___x_1963_);
v___x_1965_ = v___x_1961_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
case 5:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lean_instReprPlugin_repr___redArg___closed__0));
lean_inc_ref(v_data_1958_);
v___x_1969_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__0(v_data_1958_, v___x_1968_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
lean_dec_ref_known(v_data_1958_, 1);
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1969_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1969_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v_a_1978_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_a_1978_);
lean_dec_ref_known(v___x_1969_, 1);
v___x_1979_ = ((lean_object*)(l_Lean_instToJsonPlugin_toJson___closed__0));
v___x_1980_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1(v_data_1958_, v___x_1979_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1988_; 
lean_dec(v_a_1978_);
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
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
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_a_1981_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1997_; 
v_a_1989_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1991_ = v___x_1980_;
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1980_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1993_; lean_object* v___x_1995_; 
v___x_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1993_, 0, v_a_1978_);
lean_ctor_set(v___x_1993_, 1, v_a_1989_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 0, v___x_1993_);
v___x_1995_ = v___x_1991_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1993_);
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
}
default: 
{
lean_object* v___x_1998_; 
lean_dec(v_data_1958_);
v___x_1998_ = ((lean_object*)(l_Lean_Plugin_fromJson_x3f___closed__1));
return v___x_1998_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2_spec__3_spec__5(lean_object* v_x_2001_, lean_object* v_x_2002_, lean_object* v_x_2003_){
_start:
{
if (lean_obj_tag(v_x_2003_) == 0)
{
lean_dec(v_x_2001_);
return v_x_2002_;
}
else
{
lean_object* v_head_2004_; lean_object* v_tail_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2014_; 
v_head_2004_ = lean_ctor_get(v_x_2003_, 0);
v_tail_2005_ = lean_ctor_get(v_x_2003_, 1);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_x_2003_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2007_ = v_x_2003_;
v_isShared_2008_ = v_isSharedCheck_2014_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_tail_2005_);
lean_inc(v_head_2004_);
lean_dec(v_x_2003_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2014_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2010_; 
lean_inc(v_x_2001_);
if (v_isShared_2008_ == 0)
{
lean_ctor_set_tag(v___x_2007_, 5);
lean_ctor_set(v___x_2007_, 1, v_x_2001_);
lean_ctor_set(v___x_2007_, 0, v_x_2002_);
v___x_2010_ = v___x_2007_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_x_2002_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_x_2001_);
v___x_2010_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
lean_ctor_set(v___x_2011_, 1, v_head_2004_);
v_x_2002_ = v___x_2011_;
v_x_2003_ = v_tail_2005_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2_spec__3(lean_object* v_x_2015_, lean_object* v_x_2016_){
_start:
{
if (lean_obj_tag(v_x_2015_) == 0)
{
lean_object* v___x_2017_; 
lean_dec(v_x_2016_);
v___x_2017_ = lean_box(0);
return v___x_2017_;
}
else
{
lean_object* v_tail_2018_; 
v_tail_2018_ = lean_ctor_get(v_x_2015_, 1);
if (lean_obj_tag(v_tail_2018_) == 0)
{
lean_object* v_head_2019_; 
lean_dec(v_x_2016_);
v_head_2019_ = lean_ctor_get(v_x_2015_, 0);
lean_inc(v_head_2019_);
lean_dec_ref_known(v_x_2015_, 2);
return v_head_2019_;
}
else
{
lean_object* v_head_2020_; lean_object* v___x_2021_; 
lean_inc(v_tail_2018_);
v_head_2020_ = lean_ctor_get(v_x_2015_, 0);
lean_inc(v_head_2020_);
lean_dec_ref_known(v_x_2015_, 2);
v___x_2021_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2_spec__3_spec__5(v_x_2016_, v_head_2020_, v_tail_2018_);
return v___x_2021_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__0));
v___x_2025_ = lean_string_length(v___x_2024_);
return v___x_2025_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__2, &l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__2_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__2);
v___x_2027_ = lean_nat_to_int(v___x_2026_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(lean_object* v_x_2032_){
_start:
{
lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2057_; 
v_fst_2033_ = lean_ctor_get(v_x_2032_, 0);
v_snd_2034_ = lean_ctor_get(v_x_2032_, 1);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_x_2032_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2036_ = v_x_2032_;
v_isShared_2037_ = v_isSharedCheck_2057_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_snd_2034_);
lean_inc(v_fst_2033_);
lean_dec(v_x_2032_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2057_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2038_ = lean_unsigned_to_nat(0u);
v___x_2039_ = l_Lean_Name_reprPrec(v_fst_2033_, v___x_2038_);
v___x_2040_ = lean_box(0);
if (v_isShared_2037_ == 0)
{
lean_ctor_set_tag(v___x_2036_, 1);
lean_ctor_set(v___x_2036_, 1, v___x_2040_);
lean_ctor_set(v___x_2036_, 0, v___x_2039_);
v___x_2042_ = v___x_2036_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2039_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; lean_object* v___x_2055_; 
v___x_2043_ = l_Lean_instReprImportArtifacts_repr___redArg(v_snd_2034_);
v___x_2044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
lean_ctor_set(v___x_2044_, 1, v___x_2042_);
v___x_2045_ = l_List_reverse___redArg(v___x_2044_);
v___x_2046_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1));
v___x_2047_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2_spec__3(v___x_2045_, v___x_2046_);
v___x_2048_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__3);
v___x_2049_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__4));
v___x_2050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
lean_ctor_set(v___x_2050_, 1, v___x_2047_);
v___x_2051_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg___closed__5));
v___x_2052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2050_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2048_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = 0;
v___x_2055_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set_uint8(v___x_2055_, sizeof(void*)*1, v___x_2054_);
return v___x_2055_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3_spec__5_spec__8(lean_object* v_x_2058_, lean_object* v_x_2059_, lean_object* v_x_2060_){
_start:
{
if (lean_obj_tag(v_x_2060_) == 0)
{
lean_dec(v_x_2058_);
return v_x_2059_;
}
else
{
lean_object* v_head_2061_; lean_object* v_tail_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2072_; 
v_head_2061_ = lean_ctor_get(v_x_2060_, 0);
v_tail_2062_ = lean_ctor_get(v_x_2060_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_x_2060_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2064_ = v_x_2060_;
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_tail_2062_);
lean_inc(v_head_2061_);
lean_dec(v_x_2060_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
lean_inc(v_x_2058_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set_tag(v___x_2064_, 5);
lean_ctor_set(v___x_2064_, 1, v_x_2058_);
lean_ctor_set(v___x_2064_, 0, v_x_2059_);
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_x_2059_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_x_2058_);
v___x_2067_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(v_head_2061_);
v___x_2069_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2067_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
v_x_2059_ = v___x_2069_;
v_x_2060_ = v_tail_2062_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3_spec__5(lean_object* v_x_2073_, lean_object* v_x_2074_, lean_object* v_x_2075_){
_start:
{
if (lean_obj_tag(v_x_2075_) == 0)
{
lean_dec(v_x_2073_);
return v_x_2074_;
}
else
{
lean_object* v_head_2076_; lean_object* v_tail_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2087_; 
v_head_2076_ = lean_ctor_get(v_x_2075_, 0);
v_tail_2077_ = lean_ctor_get(v_x_2075_, 1);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_x_2075_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2079_ = v_x_2075_;
v_isShared_2080_ = v_isSharedCheck_2087_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_tail_2077_);
lean_inc(v_head_2076_);
lean_dec(v_x_2075_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2087_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
lean_inc(v_x_2073_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set_tag(v___x_2079_, 5);
lean_ctor_set(v___x_2079_, 1, v_x_2073_);
lean_ctor_set(v___x_2079_, 0, v_x_2074_);
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_x_2074_);
lean_ctor_set(v_reuseFailAlloc_2086_, 1, v_x_2073_);
v___x_2082_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2083_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(v_head_2076_);
v___x_2084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3_spec__5_spec__8(v_x_2073_, v___x_2084_, v_tail_2077_);
return v___x_2085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3(lean_object* v_x_2088_, lean_object* v_x_2089_){
_start:
{
if (lean_obj_tag(v_x_2088_) == 0)
{
lean_object* v___x_2090_; 
lean_dec(v_x_2089_);
v___x_2090_ = lean_box(0);
return v___x_2090_;
}
else
{
lean_object* v_tail_2091_; 
v_tail_2091_ = lean_ctor_get(v_x_2088_, 1);
if (lean_obj_tag(v_tail_2091_) == 0)
{
lean_object* v_head_2092_; lean_object* v___x_2093_; 
lean_dec(v_x_2089_);
v_head_2092_ = lean_ctor_get(v_x_2088_, 0);
lean_inc(v_head_2092_);
lean_dec_ref_known(v_x_2088_, 2);
v___x_2093_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(v_head_2092_);
return v___x_2093_;
}
else
{
lean_object* v_head_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
lean_inc(v_tail_2091_);
v_head_2094_ = lean_ctor_get(v_x_2088_, 0);
lean_inc(v_head_2094_);
lean_dec_ref_known(v_x_2088_, 2);
v___x_2095_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(v_head_2094_);
v___x_2096_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3_spec__5(v_x_2089_, v___x_2095_, v_tail_2091_);
return v___x_2096_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = ((lean_object*)(l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__2));
v___x_2102_ = lean_string_length(v___x_2101_);
return v___x_2102_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_obj_once(&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__3, &l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__3_once, _init_l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__3);
v___x_2104_ = lean_nat_to_int(v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg(lean_object* v_a_2107_){
_start:
{
if (lean_obj_tag(v_a_2107_) == 0)
{
lean_object* v___x_2108_; 
v___x_2108_ = ((lean_object*)(l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__1));
return v___x_2108_;
}
else
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; 
v___x_2109_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1));
v___x_2110_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__3(v_a_2107_, v___x_2109_);
v___x_2111_ = lean_obj_once(&l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__4, &l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__4_once, _init_l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__4);
v___x_2112_ = ((lean_object*)(l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg___closed__5));
v___x_2113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
lean_ctor_set(v___x_2113_, 1, v___x_2110_);
v___x_2114_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6));
v___x_2115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2111_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = 0;
v___x_2118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2118_, 0, v___x_2116_);
lean_ctor_set_uint8(v___x_2118_, sizeof(void*)*1, v___x_2117_);
return v___x_2118_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1(lean_object* v_init_2119_, lean_object* v_x_2120_){
_start:
{
if (lean_obj_tag(v_x_2120_) == 0)
{
lean_object* v_k_2121_; lean_object* v_v_2122_; lean_object* v_l_2123_; lean_object* v_r_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v_k_2121_ = lean_ctor_get(v_x_2120_, 1);
v_v_2122_ = lean_ctor_get(v_x_2120_, 2);
v_l_2123_ = lean_ctor_get(v_x_2120_, 3);
v_r_2124_ = lean_ctor_get(v_x_2120_, 4);
v___x_2125_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1(v_init_2119_, v_r_2124_);
lean_inc(v_v_2122_);
lean_inc(v_k_2121_);
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v_k_2121_);
lean_ctor_set(v___x_2126_, 1, v_v_2122_);
v___x_2127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
lean_ctor_set(v___x_2127_, 1, v___x_2125_);
v_init_2119_ = v___x_2127_;
v_x_2120_ = v_l_2123_;
goto _start;
}
else
{
return v_init_2119_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1___boxed(lean_object* v_init_2129_, lean_object* v_x_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1(v_init_2129_, v_x_2130_);
lean_dec(v_x_2130_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5_spec__8_spec__11(lean_object* v_x_2132_, lean_object* v_x_2133_, lean_object* v_x_2134_){
_start:
{
if (lean_obj_tag(v_x_2134_) == 0)
{
lean_dec(v_x_2132_);
return v_x_2133_;
}
else
{
lean_object* v_head_2135_; lean_object* v_tail_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2146_; 
v_head_2135_ = lean_ctor_get(v_x_2134_, 0);
v_tail_2136_ = lean_ctor_get(v_x_2134_, 1);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_x_2134_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2138_ = v_x_2134_;
v_isShared_2139_ = v_isSharedCheck_2146_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_tail_2136_);
lean_inc(v_head_2135_);
lean_dec(v_x_2134_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2146_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
lean_inc(v_x_2132_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 5);
lean_ctor_set(v___x_2138_, 1, v_x_2132_);
lean_ctor_set(v___x_2138_, 0, v_x_2133_);
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_x_2133_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v_x_2132_);
v___x_2141_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = l_Lean_instReprPlugin_repr___redArg(v_head_2135_);
v___x_2143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2141_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v_x_2133_ = v___x_2143_;
v_x_2134_ = v_tail_2136_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5_spec__8(lean_object* v_x_2147_, lean_object* v_x_2148_, lean_object* v_x_2149_){
_start:
{
if (lean_obj_tag(v_x_2149_) == 0)
{
lean_dec(v_x_2147_);
return v_x_2148_;
}
else
{
lean_object* v_head_2150_; lean_object* v_tail_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2161_; 
v_head_2150_ = lean_ctor_get(v_x_2149_, 0);
v_tail_2151_ = lean_ctor_get(v_x_2149_, 1);
v_isSharedCheck_2161_ = !lean_is_exclusive(v_x_2149_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2153_ = v_x_2149_;
v_isShared_2154_ = v_isSharedCheck_2161_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_tail_2151_);
lean_inc(v_head_2150_);
lean_dec(v_x_2149_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2161_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
lean_inc(v_x_2147_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set_tag(v___x_2153_, 5);
lean_ctor_set(v___x_2153_, 1, v_x_2147_);
lean_ctor_set(v___x_2153_, 0, v_x_2148_);
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_x_2148_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v_x_2147_);
v___x_2156_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2157_ = l_Lean_instReprPlugin_repr___redArg(v_head_2150_);
v___x_2158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5_spec__8_spec__11(v_x_2147_, v___x_2158_, v_tail_2151_);
return v___x_2159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5(lean_object* v_x_2162_, lean_object* v_x_2163_){
_start:
{
if (lean_obj_tag(v_x_2162_) == 0)
{
lean_object* v___x_2164_; 
lean_dec(v_x_2163_);
v___x_2164_ = lean_box(0);
return v___x_2164_;
}
else
{
lean_object* v_tail_2165_; 
v_tail_2165_ = lean_ctor_get(v_x_2162_, 1);
if (lean_obj_tag(v_tail_2165_) == 0)
{
lean_object* v_head_2166_; lean_object* v___x_2167_; 
lean_dec(v_x_2163_);
v_head_2166_ = lean_ctor_get(v_x_2162_, 0);
lean_inc(v_head_2166_);
lean_dec_ref_known(v_x_2162_, 2);
v___x_2167_ = l_Lean_instReprPlugin_repr___redArg(v_head_2166_);
return v___x_2167_;
}
else
{
lean_object* v_head_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
lean_inc(v_tail_2165_);
v_head_2168_ = lean_ctor_get(v_x_2162_, 0);
lean_inc(v_head_2168_);
lean_dec_ref_known(v_x_2162_, 2);
v___x_2169_ = l_Lean_instReprPlugin_repr___redArg(v_head_2168_);
v___x_2170_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5_spec__8(v_x_2163_, v___x_2169_, v_tail_2165_);
return v___x_2170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3(lean_object* v_xs_2171_){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; uint8_t v___x_2174_; 
v___x_2172_ = lean_array_get_size(v_xs_2171_);
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = lean_nat_dec_eq(v___x_2172_, v___x_2173_);
if (v___x_2174_ == 0)
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2175_ = lean_array_to_list(v_xs_2171_);
v___x_2176_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__1));
v___x_2177_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3_spec__5(v___x_2175_, v___x_2176_);
v___x_2178_ = lean_obj_once(&l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4, &l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__4);
v___x_2179_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__5));
v___x_2180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v___x_2177_);
v___x_2181_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__6));
v___x_2182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2180_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2178_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
v___x_2184_ = l_Std_Format_fill(v___x_2183_);
return v___x_2184_;
}
else
{
lean_object* v___x_2185_; 
lean_dec_ref(v_xs_2171_);
v___x_2185_ = ((lean_object*)(l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0___closed__8));
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleSetup_repr_spec__0(lean_object* v_x_2186_, lean_object* v_x_2187_){
_start:
{
if (lean_obj_tag(v_x_2186_) == 0)
{
lean_object* v___x_2188_; 
v___x_2188_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__1));
return v___x_2188_;
}
else
{
lean_object* v_val_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v_val_2189_ = lean_ctor_get(v_x_2186_, 0);
lean_inc(v_val_2189_);
lean_dec_ref_known(v_x_2186_, 1);
v___x_2190_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprModuleArtifacts_repr_spec__0___closed__3));
v___x_2191_ = l_Array_repr___at___00Lean_instReprModuleHeader_repr_spec__0(v_val_2189_);
v___x_2192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = l_Repr_addAppParen(v___x_2192_, v_x_2187_);
return v___x_2193_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprModuleSetup_repr_spec__0___boxed(lean_object* v_x_2194_, lean_object* v_x_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Option_repr___at___00Lean_instReprModuleSetup_repr_spec__0(v_x_2194_, v_x_2195_);
lean_dec(v_x_2195_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleSetup_repr___redArg(lean_object* v_x_2227_){
_start:
{
lean_object* v_name_2228_; lean_object* v_package_x3f_2229_; uint8_t v_isModule_2230_; lean_object* v_imports_x3f_2231_; lean_object* v_importArts_2232_; lean_object* v_dynlibs_2233_; lean_object* v_plugins_2234_; lean_object* v_options_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; uint8_t v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v_name_2228_ = lean_ctor_get(v_x_2227_, 0);
lean_inc(v_name_2228_);
v_package_x3f_2229_ = lean_ctor_get(v_x_2227_, 1);
lean_inc(v_package_x3f_2229_);
v_isModule_2230_ = lean_ctor_get_uint8(v_x_2227_, sizeof(void*)*7);
v_imports_x3f_2231_ = lean_ctor_get(v_x_2227_, 2);
lean_inc(v_imports_x3f_2231_);
v_importArts_2232_ = lean_ctor_get(v_x_2227_, 3);
lean_inc(v_importArts_2232_);
v_dynlibs_2233_ = lean_ctor_get(v_x_2227_, 4);
lean_inc_ref(v_dynlibs_2233_);
v_plugins_2234_ = lean_ctor_get(v_x_2227_, 5);
lean_inc_ref(v_plugins_2234_);
v_options_2235_ = lean_ctor_get(v_x_2227_, 6);
lean_inc(v_options_2235_);
lean_dec_ref(v_x_2227_);
v___x_2236_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__5));
v___x_2237_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__3));
v___x_2238_ = lean_obj_once(&l_Lean_instReprPlugin_repr___redArg___closed__4, &l_Lean_instReprPlugin_repr___redArg___closed__4_once, _init_l_Lean_instReprPlugin_repr___redArg___closed__4);
v___x_2239_ = lean_unsigned_to_nat(0u);
v___x_2240_ = l_Lean_Name_reprPrec(v_name_2228_, v___x_2239_);
v___x_2241_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2238_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
v___x_2242_ = 0;
v___x_2243_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2243_, 0, v___x_2241_);
lean_ctor_set_uint8(v___x_2243_, sizeof(void*)*1, v___x_2242_);
v___x_2244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2237_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__9));
v___x_2246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2244_);
lean_ctor_set(v___x_2246_, 1, v___x_2245_);
v___x_2247_ = lean_box(1);
v___x_2248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2246_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
v___x_2249_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__5));
v___x_2250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2248_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
lean_ctor_set(v___x_2251_, 1, v___x_2236_);
v___x_2252_ = lean_obj_once(&l_Lean_instReprModuleHeader_repr___redArg___closed__7, &l_Lean_instReprModuleHeader_repr___redArg___closed__7_once, _init_l_Lean_instReprModuleHeader_repr___redArg___closed__7);
v___x_2253_ = l_Option_repr___at___00Lean_instReprPlugin_repr_spec__0(v_package_x3f_2229_, v___x_2239_);
v___x_2254_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2252_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
lean_ctor_set_uint8(v___x_2255_, sizeof(void*)*1, v___x_2242_);
v___x_2256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2251_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
lean_ctor_set(v___x_2257_, 1, v___x_2245_);
v___x_2258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
lean_ctor_set(v___x_2258_, 1, v___x_2247_);
v___x_2259_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__6));
v___x_2260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2258_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
v___x_2261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
lean_ctor_set(v___x_2261_, 1, v___x_2236_);
v___x_2262_ = l_Bool_repr___redArg(v_isModule_2230_);
v___x_2263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2252_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
v___x_2264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
lean_ctor_set_uint8(v___x_2264_, sizeof(void*)*1, v___x_2242_);
v___x_2265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2261_);
lean_ctor_set(v___x_2265_, 1, v___x_2264_);
v___x_2266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
lean_ctor_set(v___x_2266_, 1, v___x_2245_);
v___x_2267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
lean_ctor_set(v___x_2267_, 1, v___x_2247_);
v___x_2268_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__7));
v___x_2269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2267_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v___x_2236_);
v___x_2271_ = l_Option_repr___at___00Lean_instReprModuleSetup_repr_spec__0(v_imports_x3f_2231_, v___x_2239_);
v___x_2272_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2252_);
lean_ctor_set(v___x_2272_, 1, v___x_2271_);
v___x_2273_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
lean_ctor_set_uint8(v___x_2273_, sizeof(void*)*1, v___x_2242_);
v___x_2274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2270_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v___x_2275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
lean_ctor_set(v___x_2275_, 1, v___x_2245_);
v___x_2276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v___x_2247_);
v___x_2277_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__9));
v___x_2278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2276_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
v___x_2279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2278_);
lean_ctor_set(v___x_2279_, 1, v___x_2236_);
v___x_2280_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__15, &l_Lean_instReprImport_repr___redArg___closed__15_once, _init_l_Lean_instReprImport_repr___redArg___closed__15);
v___x_2281_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__11));
v___x_2282_ = lean_box(0);
v___x_2283_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprModuleSetup_repr_spec__1(v___x_2282_, v_importArts_2232_);
lean_dec(v_importArts_2232_);
v___x_2284_ = l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg(v___x_2283_);
v___x_2285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2281_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = l_Repr_addAppParen(v___x_2285_, v___x_2239_);
v___x_2287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2280_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
lean_ctor_set_uint8(v___x_2288_, sizeof(void*)*1, v___x_2242_);
v___x_2289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2279_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2289_);
lean_ctor_set(v___x_2290_, 1, v___x_2245_);
v___x_2291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
lean_ctor_set(v___x_2291_, 1, v___x_2247_);
v___x_2292_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__13));
v___x_2293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2291_);
lean_ctor_set(v___x_2293_, 1, v___x_2292_);
v___x_2294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
lean_ctor_set(v___x_2294_, 1, v___x_2236_);
v___x_2295_ = lean_obj_once(&l_Lean_instReprModuleHeader_repr___redArg___closed__4, &l_Lean_instReprModuleHeader_repr___redArg___closed__4_once, _init_l_Lean_instReprModuleHeader_repr___redArg___closed__4);
v___x_2296_ = l_Array_repr___at___00Array_repr___at___00Lean_instReprImportArtifacts_repr_spec__0_spec__0(v_dynlibs_2233_);
v___x_2297_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2295_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2298_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
lean_ctor_set_uint8(v___x_2298_, sizeof(void*)*1, v___x_2242_);
v___x_2299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2294_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
lean_ctor_set(v___x_2300_, 1, v___x_2245_);
v___x_2301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v___x_2247_);
v___x_2302_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__15));
v___x_2303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set(v___x_2304_, 1, v___x_2236_);
v___x_2305_ = l_Array_repr___at___00Lean_instReprModuleSetup_repr_spec__3(v_plugins_2234_);
v___x_2306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2295_);
lean_ctor_set(v___x_2306_, 1, v___x_2305_);
v___x_2307_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
lean_ctor_set_uint8(v___x_2307_, sizeof(void*)*1, v___x_2242_);
v___x_2308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2304_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
lean_ctor_set(v___x_2309_, 1, v___x_2245_);
v___x_2310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
lean_ctor_set(v___x_2310_, 1, v___x_2247_);
v___x_2311_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__17));
v___x_2312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2310_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
v___x_2313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
lean_ctor_set(v___x_2313_, 1, v___x_2236_);
v___x_2314_ = l_Lean_instReprLeanOptions_repr___redArg(v_options_2235_);
lean_dec(v_options_2235_);
v___x_2315_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2295_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
lean_ctor_set_uint8(v___x_2316_, sizeof(void*)*1, v___x_2242_);
v___x_2317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2313_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = lean_obj_once(&l_Lean_instReprImport_repr___redArg___closed__20, &l_Lean_instReprImport_repr___redArg___closed__20_once, _init_l_Lean_instReprImport_repr___redArg___closed__20);
v___x_2319_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__21));
v___x_2320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v___x_2317_);
v___x_2321_ = ((lean_object*)(l_Lean_instReprImport_repr___redArg___closed__22));
v___x_2322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2320_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
v___x_2323_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2318_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
lean_ctor_set_uint8(v___x_2324_, sizeof(void*)*1, v___x_2242_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleSetup_repr(lean_object* v_x_2325_, lean_object* v_prec_2326_){
_start:
{
lean_object* v___x_2327_; 
v___x_2327_ = l_Lean_instReprModuleSetup_repr___redArg(v_x_2325_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprModuleSetup_repr___boxed(lean_object* v_x_2328_, lean_object* v_prec_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lean_instReprModuleSetup_repr(v_x_2328_, v_prec_2329_);
lean_dec(v_prec_2329_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2(lean_object* v_a_2331_, lean_object* v_n_2332_){
_start:
{
lean_object* v___x_2333_; 
v___x_2333_ = l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___redArg(v_a_2331_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2___boxed(lean_object* v_a_2334_, lean_object* v_n_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_List_repr___at___00Lean_instReprModuleSetup_repr_spec__2(v_a_2334_, v_n_2335_);
lean_dec(v_n_2335_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2(lean_object* v_x_2337_, lean_object* v_x_2338_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___redArg(v_x_2337_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2___boxed(lean_object* v_x_2340_, lean_object* v_x_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprModuleSetup_repr_spec__2_spec__2(v_x_2340_, v_x_2341_);
lean_dec(v_x_2341_);
return v_res_2342_;
}
}
static lean_object* _init_l_Lean_instInhabitedModuleSetup_default___closed__0(void){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2345_ = ((lean_object*)(l_Lean_ImportArtifacts_oleanParts___closed__0));
v___x_2346_ = lean_box(1);
v___x_2347_ = 0;
v___x_2348_ = lean_box(0);
v___x_2349_ = lean_obj_once(&l_Lean_instInhabitedImport_default___closed__0, &l_Lean_instInhabitedImport_default___closed__0_once, _init_l_Lean_instInhabitedImport_default___closed__0);
v___x_2350_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_2350_, 0, v___x_2349_);
lean_ctor_set(v___x_2350_, 1, v___x_2348_);
lean_ctor_set(v___x_2350_, 2, v___x_2348_);
lean_ctor_set(v___x_2350_, 3, v___x_2346_);
lean_ctor_set(v___x_2350_, 4, v___x_2345_);
lean_ctor_set(v___x_2350_, 5, v___x_2345_);
lean_ctor_set(v___x_2350_, 6, v___x_2346_);
lean_ctor_set_uint8(v___x_2350_, sizeof(void*)*7, v___x_2347_);
return v___x_2350_;
}
}
static lean_object* _init_l_Lean_instInhabitedModuleSetup_default(void){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = lean_obj_once(&l_Lean_instInhabitedModuleSetup_default___closed__0, &l_Lean_instInhabitedModuleSetup_default___closed__0_once, _init_l_Lean_instInhabitedModuleSetup_default___closed__0);
return v___x_2351_;
}
}
static lean_object* _init_l_Lean_instInhabitedModuleSetup(void){
_start:
{
lean_object* v___x_2352_; 
v___x_2352_ = l_Lean_instInhabitedModuleSetup_default;
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2_spec__5(size_t v_sz_2353_, size_t v_i_2354_, lean_object* v_bs_2355_){
_start:
{
uint8_t v___x_2356_; 
v___x_2356_ = lean_usize_dec_lt(v_i_2354_, v_sz_2353_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; 
v___x_2357_ = l_unsafeCast___redArg(v_bs_2355_);
lean_dec_ref(v_bs_2355_);
return v___x_2357_;
}
else
{
lean_object* v_v_2358_; lean_object* v___x_2359_; lean_object* v_bs_x27_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; size_t v___x_2363_; size_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v_v_2358_ = lean_array_uget(v_bs_2355_, v_i_2354_);
v___x_2359_ = lean_unsigned_to_nat(0u);
v_bs_x27_2360_ = lean_array_uset(v_bs_2355_, v_i_2354_, v___x_2359_);
v___x_2361_ = l_unsafeCast___redArg(v_v_2358_);
lean_dec(v_v_2358_);
v___x_2362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
v___x_2363_ = ((size_t)1ULL);
v___x_2364_ = lean_usize_add(v_i_2354_, v___x_2363_);
v___x_2365_ = l_unsafeCast___redArg(v___x_2362_);
lean_dec_ref_known(v___x_2362_, 1);
v___x_2366_ = lean_array_uset(v_bs_x27_2360_, v_i_2354_, v___x_2365_);
v_i_2354_ = v___x_2364_;
v_bs_2355_ = v___x_2366_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2_spec__5___boxed(lean_object* v_sz_2368_, lean_object* v_i_2369_, lean_object* v_bs_2370_){
_start:
{
size_t v_sz_boxed_2371_; size_t v_i_boxed_2372_; lean_object* v_res_2373_; 
v_sz_boxed_2371_ = lean_unbox_usize(v_sz_2368_);
lean_dec(v_sz_2368_);
v_i_boxed_2372_ = lean_unbox_usize(v_i_2369_);
lean_dec(v_i_2369_);
v_res_2373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2_spec__5(v_sz_boxed_2371_, v_i_boxed_2372_, v_bs_2370_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2(lean_object* v_a_2374_){
_start:
{
size_t v_sz_2375_; size_t v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v_sz_2375_ = lean_array_size(v_a_2374_);
v___x_2376_ = ((size_t)0ULL);
v___x_2377_ = l_unsafeCast___redArg(v_a_2374_);
v___x_2378_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2_spec__5(v_sz_2375_, v___x_2376_, v___x_2377_);
v___x_2379_ = l_unsafeCast___redArg(v___x_2378_);
lean_dec_ref(v___x_2378_);
v___x_2380_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2___boxed(lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2(v_a_2381_);
lean_dec_ref(v_a_2381_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1_spec__2(size_t v_sz_2383_, size_t v_i_2384_, lean_object* v_bs_2385_){
_start:
{
uint8_t v___x_2386_; 
v___x_2386_ = lean_usize_dec_lt(v_i_2384_, v_sz_2383_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; 
v___x_2387_ = l_unsafeCast___redArg(v_bs_2385_);
lean_dec_ref(v_bs_2385_);
return v___x_2387_;
}
else
{
lean_object* v_v_2388_; lean_object* v___x_2389_; lean_object* v_bs_x27_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; size_t v___x_2393_; size_t v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v_v_2388_ = lean_array_uget(v_bs_2385_, v_i_2384_);
v___x_2389_ = lean_unsigned_to_nat(0u);
v_bs_x27_2390_ = lean_array_uset(v_bs_2385_, v_i_2384_, v___x_2389_);
v___x_2391_ = l_unsafeCast___redArg(v_v_2388_);
lean_dec(v_v_2388_);
v___x_2392_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2(v___x_2391_);
lean_dec(v___x_2391_);
v___x_2393_ = ((size_t)1ULL);
v___x_2394_ = lean_usize_add(v_i_2384_, v___x_2393_);
v___x_2395_ = l_unsafeCast___redArg(v___x_2392_);
lean_dec(v___x_2392_);
v___x_2396_ = lean_array_uset(v_bs_x27_2390_, v_i_2384_, v___x_2395_);
v_i_2384_ = v___x_2394_;
v_bs_2385_ = v___x_2396_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_2398_, lean_object* v_i_2399_, lean_object* v_bs_2400_){
_start:
{
size_t v_sz_boxed_2401_; size_t v_i_boxed_2402_; lean_object* v_res_2403_; 
v_sz_boxed_2401_ = lean_unbox_usize(v_sz_2398_);
lean_dec(v_sz_2398_);
v_i_boxed_2402_ = lean_unbox_usize(v_i_2399_);
lean_dec(v_i_2399_);
v_res_2403_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1_spec__2(v_sz_boxed_2401_, v_i_boxed_2402_, v_bs_2400_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1(lean_object* v_a_2404_){
_start:
{
size_t v_sz_2405_; size_t v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_sz_2405_ = lean_array_size(v_a_2404_);
v___x_2406_ = ((size_t)0ULL);
v___x_2407_ = l_unsafeCast___redArg(v_a_2404_);
v___x_2408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1_spec__2(v_sz_2405_, v___x_2406_, v___x_2407_);
v___x_2409_ = l_unsafeCast___redArg(v___x_2408_);
lean_dec_ref(v___x_2408_);
v___x_2410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1___boxed(lean_object* v_a_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1(v_a_2411_);
lean_dec_ref(v_a_2411_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(lean_object* v_msg_2413_){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2414_ = lean_box(1);
v___x_2415_ = lean_panic_fn_borrowed(v___x_2414_, v_msg_2413_);
return v___x_2415_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2419_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__2));
v___x_2420_ = lean_unsigned_to_nat(35u);
v___x_2421_ = lean_unsigned_to_nat(182u);
v___x_2422_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__1));
v___x_2423_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0));
v___x_2424_ = l_mkPanicMessageWithDecl(v___x_2423_, v___x_2422_, v___x_2421_, v___x_2420_, v___x_2419_);
return v___x_2424_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2425_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__2));
v___x_2426_ = lean_unsigned_to_nat(21u);
v___x_2427_ = lean_unsigned_to_nat(183u);
v___x_2428_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__1));
v___x_2429_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0));
v___x_2430_ = l_mkPanicMessageWithDecl(v___x_2429_, v___x_2428_, v___x_2427_, v___x_2426_, v___x_2425_);
return v___x_2430_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2433_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__6));
v___x_2434_ = lean_unsigned_to_nat(35u);
v___x_2435_ = lean_unsigned_to_nat(276u);
v___x_2436_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__5));
v___x_2437_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0));
v___x_2438_ = l_mkPanicMessageWithDecl(v___x_2437_, v___x_2436_, v___x_2435_, v___x_2434_, v___x_2433_);
return v___x_2438_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2439_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__6));
v___x_2440_ = lean_unsigned_to_nat(21u);
v___x_2441_ = lean_unsigned_to_nat(277u);
v___x_2442_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__5));
v___x_2443_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__0));
v___x_2444_ = l_mkPanicMessageWithDecl(v___x_2443_, v___x_2442_, v___x_2441_, v___x_2440_, v___x_2439_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(lean_object* v_k_2445_, lean_object* v_v_2446_, lean_object* v_t_2447_){
_start:
{
if (lean_obj_tag(v_t_2447_) == 0)
{
lean_object* v_size_2448_; lean_object* v_k_2449_; lean_object* v_v_2450_; lean_object* v_l_2451_; lean_object* v_r_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2808_; 
v_size_2448_ = lean_ctor_get(v_t_2447_, 0);
v_k_2449_ = lean_ctor_get(v_t_2447_, 1);
v_v_2450_ = lean_ctor_get(v_t_2447_, 2);
v_l_2451_ = lean_ctor_get(v_t_2447_, 3);
v_r_2452_ = lean_ctor_get(v_t_2447_, 4);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_t_2447_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2454_ = v_t_2447_;
v_isShared_2455_ = v_isSharedCheck_2808_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_r_2452_);
lean_inc(v_l_2451_);
lean_inc(v_v_2450_);
lean_inc(v_k_2449_);
lean_inc(v_size_2448_);
lean_dec(v_t_2447_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2808_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
uint8_t v___x_2456_; 
v___x_2456_ = lean_string_compare(v_k_2445_, v_k_2449_);
switch(v___x_2456_)
{
case 0:
{
lean_object* v___x_2457_; 
lean_dec(v_size_2448_);
v___x_2457_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v_k_2445_, v_v_2446_, v_l_2451_);
if (lean_obj_tag(v_r_2452_) == 0)
{
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_size_2458_; lean_object* v_size_2459_; lean_object* v_k_2460_; lean_object* v_v_2461_; lean_object* v_l_2462_; lean_object* v_r_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; uint8_t v___x_2466_; 
v_size_2458_ = lean_ctor_get(v_r_2452_, 0);
v_size_2459_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_size_2459_);
v_k_2460_ = lean_ctor_get(v___x_2457_, 1);
lean_inc(v_k_2460_);
v_v_2461_ = lean_ctor_get(v___x_2457_, 2);
lean_inc(v_v_2461_);
v_l_2462_ = lean_ctor_get(v___x_2457_, 3);
lean_inc(v_l_2462_);
v_r_2463_ = lean_ctor_get(v___x_2457_, 4);
lean_inc(v_r_2463_);
v___x_2464_ = lean_unsigned_to_nat(3u);
v___x_2465_ = lean_nat_mul(v___x_2464_, v_size_2458_);
v___x_2466_ = lean_nat_dec_lt(v___x_2465_, v_size_2459_);
lean_dec(v___x_2465_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2471_; 
lean_dec(v_r_2463_);
lean_dec(v_l_2462_);
lean_dec(v_v_2461_);
lean_dec(v_k_2460_);
v___x_2467_ = lean_unsigned_to_nat(1u);
v___x_2468_ = lean_nat_add(v___x_2467_, v_size_2459_);
lean_dec(v_size_2459_);
v___x_2469_ = lean_nat_add(v___x_2468_, v_size_2458_);
lean_dec(v___x_2468_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 3, v___x_2457_);
lean_ctor_set(v___x_2454_, 0, v___x_2469_);
v___x_2471_ = v___x_2454_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2472_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2472_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2472_, 3, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2472_, 4, v_r_2452_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
else
{
lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2544_; 
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; lean_object* v_unused_2546_; lean_object* v_unused_2547_; lean_object* v_unused_2548_; lean_object* v_unused_2549_; 
v_unused_2545_ = lean_ctor_get(v___x_2457_, 4);
lean_dec(v_unused_2545_);
v_unused_2546_ = lean_ctor_get(v___x_2457_, 3);
lean_dec(v_unused_2546_);
v_unused_2547_ = lean_ctor_get(v___x_2457_, 2);
lean_dec(v_unused_2547_);
v_unused_2548_ = lean_ctor_get(v___x_2457_, 1);
lean_dec(v_unused_2548_);
v_unused_2549_ = lean_ctor_get(v___x_2457_, 0);
lean_dec(v_unused_2549_);
v___x_2474_ = v___x_2457_;
v_isShared_2475_ = v_isSharedCheck_2544_;
goto v_resetjp_2473_;
}
else
{
lean_dec(v___x_2457_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2544_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
if (lean_obj_tag(v_l_2462_) == 0)
{
if (lean_obj_tag(v_r_2463_) == 0)
{
lean_object* v_size_2476_; lean_object* v_size_2477_; lean_object* v_k_2478_; lean_object* v_v_2479_; lean_object* v_l_2480_; lean_object* v_r_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; 
v_size_2476_ = lean_ctor_get(v_l_2462_, 0);
v_size_2477_ = lean_ctor_get(v_r_2463_, 0);
v_k_2478_ = lean_ctor_get(v_r_2463_, 1);
v_v_2479_ = lean_ctor_get(v_r_2463_, 2);
v_l_2480_ = lean_ctor_get(v_r_2463_, 3);
v_r_2481_ = lean_ctor_get(v_r_2463_, 4);
v___x_2482_ = lean_unsigned_to_nat(2u);
v___x_2483_ = lean_nat_mul(v___x_2482_, v_size_2476_);
v___x_2484_ = lean_nat_dec_lt(v_size_2477_, v___x_2483_);
lean_dec(v___x_2483_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2514_; 
lean_inc(v_r_2481_);
lean_inc(v_l_2480_);
lean_inc(v_v_2479_);
lean_inc(v_k_2478_);
v_isSharedCheck_2514_ = !lean_is_exclusive(v_r_2463_);
if (v_isSharedCheck_2514_ == 0)
{
lean_object* v_unused_2515_; lean_object* v_unused_2516_; lean_object* v_unused_2517_; lean_object* v_unused_2518_; lean_object* v_unused_2519_; 
v_unused_2515_ = lean_ctor_get(v_r_2463_, 4);
lean_dec(v_unused_2515_);
v_unused_2516_ = lean_ctor_get(v_r_2463_, 3);
lean_dec(v_unused_2516_);
v_unused_2517_ = lean_ctor_get(v_r_2463_, 2);
lean_dec(v_unused_2517_);
v_unused_2518_ = lean_ctor_get(v_r_2463_, 1);
lean_dec(v_unused_2518_);
v_unused_2519_ = lean_ctor_get(v_r_2463_, 0);
lean_dec(v_unused_2519_);
v___x_2486_ = v_r_2463_;
v_isShared_2487_ = v_isSharedCheck_2514_;
goto v_resetjp_2485_;
}
else
{
lean_dec(v_r_2463_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2514_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___x_2502_; lean_object* v___y_2504_; 
v___x_2488_ = lean_unsigned_to_nat(1u);
v___x_2489_ = lean_nat_add(v___x_2488_, v_size_2459_);
lean_dec(v_size_2459_);
v___x_2490_ = lean_nat_add(v___x_2489_, v_size_2458_);
lean_dec(v___x_2489_);
v___x_2502_ = lean_nat_add(v___x_2488_, v_size_2476_);
if (lean_obj_tag(v_l_2480_) == 0)
{
lean_object* v_size_2512_; 
v_size_2512_ = lean_ctor_get(v_l_2480_, 0);
lean_inc(v_size_2512_);
v___y_2504_ = v_size_2512_;
goto v___jp_2503_;
}
else
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_unsigned_to_nat(0u);
v___y_2504_ = v___x_2513_;
goto v___jp_2503_;
}
v___jp_2491_:
{
lean_object* v___x_2495_; lean_object* v___x_2497_; 
v___x_2495_ = lean_nat_add(v___y_2492_, v___y_2494_);
lean_dec(v___y_2494_);
lean_dec(v___y_2492_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 4, v_r_2452_);
lean_ctor_set(v___x_2486_, 3, v_r_2481_);
lean_ctor_set(v___x_2486_, 2, v_v_2450_);
lean_ctor_set(v___x_2486_, 1, v_k_2449_);
lean_ctor_set(v___x_2486_, 0, v___x_2495_);
v___x_2497_ = v___x_2486_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2495_);
lean_ctor_set(v_reuseFailAlloc_2501_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2501_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2501_, 3, v_r_2481_);
lean_ctor_set(v_reuseFailAlloc_2501_, 4, v_r_2452_);
v___x_2497_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2499_; 
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 4, v___x_2497_);
lean_ctor_set(v___x_2474_, 3, v___y_2493_);
lean_ctor_set(v___x_2474_, 2, v_v_2479_);
lean_ctor_set(v___x_2474_, 1, v_k_2478_);
lean_ctor_set(v___x_2474_, 0, v___x_2490_);
v___x_2499_ = v___x_2474_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v___x_2490_);
lean_ctor_set(v_reuseFailAlloc_2500_, 1, v_k_2478_);
lean_ctor_set(v_reuseFailAlloc_2500_, 2, v_v_2479_);
lean_ctor_set(v_reuseFailAlloc_2500_, 3, v___y_2493_);
lean_ctor_set(v_reuseFailAlloc_2500_, 4, v___x_2497_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
v___jp_2503_:
{
lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2505_ = lean_nat_add(v___x_2502_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec(v___x_2502_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v_l_2480_);
lean_ctor_set(v___x_2454_, 3, v_l_2462_);
lean_ctor_set(v___x_2454_, 2, v_v_2461_);
lean_ctor_set(v___x_2454_, 1, v_k_2460_);
lean_ctor_set(v___x_2454_, 0, v___x_2505_);
v___x_2507_ = v___x_2454_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v_k_2460_);
lean_ctor_set(v_reuseFailAlloc_2511_, 2, v_v_2461_);
lean_ctor_set(v_reuseFailAlloc_2511_, 3, v_l_2462_);
lean_ctor_set(v_reuseFailAlloc_2511_, 4, v_l_2480_);
v___x_2507_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; 
v___x_2508_ = lean_nat_add(v___x_2488_, v_size_2458_);
if (lean_obj_tag(v_r_2481_) == 0)
{
lean_object* v_size_2509_; 
v_size_2509_ = lean_ctor_get(v_r_2481_, 0);
lean_inc(v_size_2509_);
v___y_2492_ = v___x_2508_;
v___y_2493_ = v___x_2507_;
v___y_2494_ = v_size_2509_;
goto v___jp_2491_;
}
else
{
lean_object* v___x_2510_; 
v___x_2510_ = lean_unsigned_to_nat(0u);
v___y_2492_ = v___x_2508_;
v___y_2493_ = v___x_2507_;
v___y_2494_ = v___x_2510_;
goto v___jp_2491_;
}
}
}
}
}
else
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_del_object(v___x_2454_);
v___x_2520_ = lean_unsigned_to_nat(1u);
v___x_2521_ = lean_nat_add(v___x_2520_, v_size_2459_);
lean_dec(v_size_2459_);
v___x_2522_ = lean_nat_add(v___x_2521_, v_size_2458_);
lean_dec(v___x_2521_);
v___x_2523_ = lean_nat_add(v___x_2520_, v_size_2458_);
v___x_2524_ = lean_nat_add(v___x_2523_, v_size_2477_);
lean_dec(v___x_2523_);
lean_inc_ref(v_r_2452_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 4, v_r_2452_);
lean_ctor_set(v___x_2474_, 3, v_r_2463_);
lean_ctor_set(v___x_2474_, 2, v_v_2450_);
lean_ctor_set(v___x_2474_, 1, v_k_2449_);
lean_ctor_set(v___x_2474_, 0, v___x_2524_);
v___x_2526_ = v___x_2474_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2524_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v_r_2463_);
lean_ctor_set(v_reuseFailAlloc_2539_, 4, v_r_2452_);
v___x_2526_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
v_isSharedCheck_2533_ = !lean_is_exclusive(v_r_2452_);
if (v_isSharedCheck_2533_ == 0)
{
lean_object* v_unused_2534_; lean_object* v_unused_2535_; lean_object* v_unused_2536_; lean_object* v_unused_2537_; lean_object* v_unused_2538_; 
v_unused_2534_ = lean_ctor_get(v_r_2452_, 4);
lean_dec(v_unused_2534_);
v_unused_2535_ = lean_ctor_get(v_r_2452_, 3);
lean_dec(v_unused_2535_);
v_unused_2536_ = lean_ctor_get(v_r_2452_, 2);
lean_dec(v_unused_2536_);
v_unused_2537_ = lean_ctor_get(v_r_2452_, 1);
lean_dec(v_unused_2537_);
v_unused_2538_ = lean_ctor_get(v_r_2452_, 0);
lean_dec(v_unused_2538_);
v___x_2528_ = v_r_2452_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_dec(v_r_2452_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
lean_ctor_set(v___x_2528_, 4, v___x_2526_);
lean_ctor_set(v___x_2528_, 3, v_l_2462_);
lean_ctor_set(v___x_2528_, 2, v_v_2461_);
lean_ctor_set(v___x_2528_, 1, v_k_2460_);
lean_ctor_set(v___x_2528_, 0, v___x_2522_);
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v_k_2460_);
lean_ctor_set(v_reuseFailAlloc_2532_, 2, v_v_2461_);
lean_ctor_set(v_reuseFailAlloc_2532_, 3, v_l_2462_);
lean_ctor_set(v_reuseFailAlloc_2532_, 4, v___x_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
else
{
lean_object* v___x_2540_; lean_object* v___x_2541_; 
lean_dec_ref_known(v_l_2462_, 5);
lean_del_object(v___x_2474_);
lean_dec(v_v_2461_);
lean_dec(v_k_2460_);
lean_dec(v_size_2459_);
lean_dec_ref_known(v_r_2452_, 5);
lean_del_object(v___x_2454_);
lean_dec(v_v_2450_);
lean_dec(v_k_2449_);
v___x_2540_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__3);
v___x_2541_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(v___x_2540_);
return v___x_2541_;
}
}
else
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
lean_del_object(v___x_2474_);
lean_dec(v_r_2463_);
lean_dec(v_v_2461_);
lean_dec(v_k_2460_);
lean_dec(v_size_2459_);
lean_dec_ref_known(v_r_2452_, 5);
lean_del_object(v___x_2454_);
lean_dec(v_v_2450_);
lean_dec(v_k_2449_);
v___x_2542_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__4);
v___x_2543_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(v___x_2542_);
return v___x_2543_;
}
}
}
}
else
{
lean_object* v_size_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2554_; 
v_size_2550_ = lean_ctor_get(v_r_2452_, 0);
v___x_2551_ = lean_unsigned_to_nat(1u);
v___x_2552_ = lean_nat_add(v___x_2551_, v_size_2550_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 3, v___x_2457_);
lean_ctor_set(v___x_2454_, 0, v___x_2552_);
v___x_2554_ = v___x_2454_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v___x_2552_);
lean_ctor_set(v_reuseFailAlloc_2555_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2555_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2555_, 3, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2555_, 4, v_r_2452_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
else
{
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_l_2556_; 
v_l_2556_ = lean_ctor_get(v___x_2457_, 3);
lean_inc(v_l_2556_);
if (lean_obj_tag(v_l_2556_) == 0)
{
lean_object* v_r_2557_; 
v_r_2557_ = lean_ctor_get(v___x_2457_, 4);
lean_inc(v_r_2557_);
if (lean_obj_tag(v_r_2557_) == 0)
{
lean_object* v_size_2558_; lean_object* v_k_2559_; lean_object* v_v_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2574_; 
v_size_2558_ = lean_ctor_get(v___x_2457_, 0);
v_k_2559_ = lean_ctor_get(v___x_2457_, 1);
v_v_2560_ = lean_ctor_get(v___x_2457_, 2);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2574_ == 0)
{
lean_object* v_unused_2575_; lean_object* v_unused_2576_; 
v_unused_2575_ = lean_ctor_get(v___x_2457_, 4);
lean_dec(v_unused_2575_);
v_unused_2576_ = lean_ctor_get(v___x_2457_, 3);
lean_dec(v_unused_2576_);
v___x_2562_ = v___x_2457_;
v_isShared_2563_ = v_isSharedCheck_2574_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_v_2560_);
lean_inc(v_k_2559_);
lean_inc(v_size_2558_);
lean_dec(v___x_2457_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2574_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v_size_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2569_; 
v_size_2564_ = lean_ctor_get(v_r_2557_, 0);
v___x_2565_ = lean_unsigned_to_nat(1u);
v___x_2566_ = lean_nat_add(v___x_2565_, v_size_2558_);
lean_dec(v_size_2558_);
v___x_2567_ = lean_nat_add(v___x_2565_, v_size_2564_);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 4, v_r_2452_);
lean_ctor_set(v___x_2562_, 3, v_r_2557_);
lean_ctor_set(v___x_2562_, 2, v_v_2450_);
lean_ctor_set(v___x_2562_, 1, v_k_2449_);
lean_ctor_set(v___x_2562_, 0, v___x_2567_);
v___x_2569_ = v___x_2562_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2567_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2573_, 3, v_r_2557_);
lean_ctor_set(v_reuseFailAlloc_2573_, 4, v_r_2452_);
v___x_2569_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2571_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2569_);
lean_ctor_set(v___x_2454_, 3, v_l_2556_);
lean_ctor_set(v___x_2454_, 2, v_v_2560_);
lean_ctor_set(v___x_2454_, 1, v_k_2559_);
lean_ctor_set(v___x_2454_, 0, v___x_2566_);
v___x_2571_ = v___x_2454_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v___x_2566_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v_k_2559_);
lean_ctor_set(v_reuseFailAlloc_2572_, 2, v_v_2560_);
lean_ctor_set(v_reuseFailAlloc_2572_, 3, v_l_2556_);
lean_ctor_set(v_reuseFailAlloc_2572_, 4, v___x_2569_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
else
{
lean_object* v_k_2577_; lean_object* v_v_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2590_; 
v_k_2577_ = lean_ctor_get(v___x_2457_, 1);
v_v_2578_ = lean_ctor_get(v___x_2457_, 2);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2590_ == 0)
{
lean_object* v_unused_2591_; lean_object* v_unused_2592_; lean_object* v_unused_2593_; 
v_unused_2591_ = lean_ctor_get(v___x_2457_, 4);
lean_dec(v_unused_2591_);
v_unused_2592_ = lean_ctor_get(v___x_2457_, 3);
lean_dec(v_unused_2592_);
v_unused_2593_ = lean_ctor_get(v___x_2457_, 0);
lean_dec(v_unused_2593_);
v___x_2580_ = v___x_2457_;
v_isShared_2581_ = v_isSharedCheck_2590_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_v_2578_);
lean_inc(v_k_2577_);
lean_dec(v___x_2457_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2590_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2585_; 
v___x_2582_ = lean_unsigned_to_nat(3u);
v___x_2583_ = lean_unsigned_to_nat(1u);
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 3, v_r_2557_);
lean_ctor_set(v___x_2580_, 2, v_v_2450_);
lean_ctor_set(v___x_2580_, 1, v_k_2449_);
lean_ctor_set(v___x_2580_, 0, v___x_2583_);
v___x_2585_ = v___x_2580_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2583_);
lean_ctor_set(v_reuseFailAlloc_2589_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2589_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2589_, 3, v_r_2557_);
lean_ctor_set(v_reuseFailAlloc_2589_, 4, v_r_2557_);
v___x_2585_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
lean_object* v___x_2587_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2585_);
lean_ctor_set(v___x_2454_, 3, v_l_2556_);
lean_ctor_set(v___x_2454_, 2, v_v_2578_);
lean_ctor_set(v___x_2454_, 1, v_k_2577_);
lean_ctor_set(v___x_2454_, 0, v___x_2582_);
v___x_2587_ = v___x_2454_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2582_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v_k_2577_);
lean_ctor_set(v_reuseFailAlloc_2588_, 2, v_v_2578_);
lean_ctor_set(v_reuseFailAlloc_2588_, 3, v_l_2556_);
lean_ctor_set(v_reuseFailAlloc_2588_, 4, v___x_2585_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
}
else
{
lean_object* v_r_2594_; 
v_r_2594_ = lean_ctor_get(v___x_2457_, 4);
lean_inc(v_r_2594_);
if (lean_obj_tag(v_r_2594_) == 0)
{
lean_object* v_k_2595_; lean_object* v_v_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2620_; 
v_k_2595_ = lean_ctor_get(v___x_2457_, 1);
v_v_2596_ = lean_ctor_get(v___x_2457_, 2);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2620_ == 0)
{
lean_object* v_unused_2621_; lean_object* v_unused_2622_; lean_object* v_unused_2623_; 
v_unused_2621_ = lean_ctor_get(v___x_2457_, 4);
lean_dec(v_unused_2621_);
v_unused_2622_ = lean_ctor_get(v___x_2457_, 3);
lean_dec(v_unused_2622_);
v_unused_2623_ = lean_ctor_get(v___x_2457_, 0);
lean_dec(v_unused_2623_);
v___x_2598_ = v___x_2457_;
v_isShared_2599_ = v_isSharedCheck_2620_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_v_2596_);
lean_inc(v_k_2595_);
lean_dec(v___x_2457_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2620_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v_k_2600_; lean_object* v_v_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2616_; 
v_k_2600_ = lean_ctor_get(v_r_2594_, 1);
v_v_2601_ = lean_ctor_get(v_r_2594_, 2);
v_isSharedCheck_2616_ = !lean_is_exclusive(v_r_2594_);
if (v_isSharedCheck_2616_ == 0)
{
lean_object* v_unused_2617_; lean_object* v_unused_2618_; lean_object* v_unused_2619_; 
v_unused_2617_ = lean_ctor_get(v_r_2594_, 4);
lean_dec(v_unused_2617_);
v_unused_2618_ = lean_ctor_get(v_r_2594_, 3);
lean_dec(v_unused_2618_);
v_unused_2619_ = lean_ctor_get(v_r_2594_, 0);
lean_dec(v_unused_2619_);
v___x_2603_ = v_r_2594_;
v_isShared_2604_ = v_isSharedCheck_2616_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_v_2601_);
lean_inc(v_k_2600_);
lean_dec(v_r_2594_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2616_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2608_; 
v___x_2605_ = lean_unsigned_to_nat(3u);
v___x_2606_ = lean_unsigned_to_nat(1u);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 4, v_l_2556_);
lean_ctor_set(v___x_2603_, 3, v_l_2556_);
lean_ctor_set(v___x_2603_, 2, v_v_2596_);
lean_ctor_set(v___x_2603_, 1, v_k_2595_);
lean_ctor_set(v___x_2603_, 0, v___x_2606_);
v___x_2608_ = v___x_2603_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v___x_2606_);
lean_ctor_set(v_reuseFailAlloc_2615_, 1, v_k_2595_);
lean_ctor_set(v_reuseFailAlloc_2615_, 2, v_v_2596_);
lean_ctor_set(v_reuseFailAlloc_2615_, 3, v_l_2556_);
lean_ctor_set(v_reuseFailAlloc_2615_, 4, v_l_2556_);
v___x_2608_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
lean_object* v___x_2610_; 
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 4, v_l_2556_);
lean_ctor_set(v___x_2598_, 2, v_v_2450_);
lean_ctor_set(v___x_2598_, 1, v_k_2449_);
lean_ctor_set(v___x_2598_, 0, v___x_2606_);
v___x_2610_ = v___x_2598_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2606_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2614_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2614_, 3, v_l_2556_);
lean_ctor_set(v_reuseFailAlloc_2614_, 4, v_l_2556_);
v___x_2610_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
lean_object* v___x_2612_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2610_);
lean_ctor_set(v___x_2454_, 3, v___x_2608_);
lean_ctor_set(v___x_2454_, 2, v_v_2601_);
lean_ctor_set(v___x_2454_, 1, v_k_2600_);
lean_ctor_set(v___x_2454_, 0, v___x_2605_);
v___x_2612_ = v___x_2454_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2605_);
lean_ctor_set(v_reuseFailAlloc_2613_, 1, v_k_2600_);
lean_ctor_set(v_reuseFailAlloc_2613_, 2, v_v_2601_);
lean_ctor_set(v_reuseFailAlloc_2613_, 3, v___x_2608_);
lean_ctor_set(v_reuseFailAlloc_2613_, 4, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2626_; 
v___x_2624_ = lean_unsigned_to_nat(2u);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v_r_2594_);
lean_ctor_set(v___x_2454_, 3, v___x_2457_);
lean_ctor_set(v___x_2454_, 0, v___x_2624_);
v___x_2626_ = v___x_2454_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v___x_2624_);
lean_ctor_set(v_reuseFailAlloc_2627_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2627_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2627_, 3, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2627_, 4, v_r_2594_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
else
{
lean_object* v___x_2628_; lean_object* v___x_2630_; 
v___x_2628_ = lean_unsigned_to_nat(1u);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2457_);
lean_ctor_set(v___x_2454_, 3, v___x_2457_);
lean_ctor_set(v___x_2454_, 0, v___x_2628_);
v___x_2630_ = v___x_2454_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2628_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2631_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2631_, 3, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2631_, 4, v___x_2457_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
case 1:
{
lean_object* v___x_2633_; 
lean_dec(v_v_2450_);
lean_dec(v_k_2449_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 2, v_v_2446_);
lean_ctor_set(v___x_2454_, 1, v_k_2445_);
v___x_2633_ = v___x_2454_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_size_2448_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v_k_2445_);
lean_ctor_set(v_reuseFailAlloc_2634_, 2, v_v_2446_);
lean_ctor_set(v_reuseFailAlloc_2634_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2634_, 4, v_r_2452_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
default: 
{
lean_object* v___x_2635_; 
lean_dec(v_size_2448_);
v___x_2635_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v_k_2445_, v_v_2446_, v_r_2452_);
if (lean_obj_tag(v_l_2451_) == 0)
{
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v_size_2636_; lean_object* v_size_2637_; lean_object* v_k_2638_; lean_object* v_v_2639_; lean_object* v_l_2640_; lean_object* v_r_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; 
v_size_2636_ = lean_ctor_get(v_l_2451_, 0);
v_size_2637_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_size_2637_);
v_k_2638_ = lean_ctor_get(v___x_2635_, 1);
lean_inc(v_k_2638_);
v_v_2639_ = lean_ctor_get(v___x_2635_, 2);
lean_inc(v_v_2639_);
v_l_2640_ = lean_ctor_get(v___x_2635_, 3);
lean_inc(v_l_2640_);
v_r_2641_ = lean_ctor_get(v___x_2635_, 4);
lean_inc(v_r_2641_);
v___x_2642_ = lean_unsigned_to_nat(3u);
v___x_2643_ = lean_nat_mul(v___x_2642_, v_size_2636_);
v___x_2644_ = lean_nat_dec_lt(v___x_2643_, v_size_2637_);
lean_dec(v___x_2643_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2649_; 
lean_dec(v_r_2641_);
lean_dec(v_l_2640_);
lean_dec(v_v_2639_);
lean_dec(v_k_2638_);
v___x_2645_ = lean_unsigned_to_nat(1u);
v___x_2646_ = lean_nat_add(v___x_2645_, v_size_2636_);
v___x_2647_ = lean_nat_add(v___x_2646_, v_size_2637_);
lean_dec(v_size_2637_);
lean_dec(v___x_2646_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2635_);
lean_ctor_set(v___x_2454_, 0, v___x_2647_);
v___x_2649_ = v___x_2454_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2647_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2650_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2650_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2650_, 4, v___x_2635_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
else
{
lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2720_; 
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2720_ == 0)
{
lean_object* v_unused_2721_; lean_object* v_unused_2722_; lean_object* v_unused_2723_; lean_object* v_unused_2724_; lean_object* v_unused_2725_; 
v_unused_2721_ = lean_ctor_get(v___x_2635_, 4);
lean_dec(v_unused_2721_);
v_unused_2722_ = lean_ctor_get(v___x_2635_, 3);
lean_dec(v_unused_2722_);
v_unused_2723_ = lean_ctor_get(v___x_2635_, 2);
lean_dec(v_unused_2723_);
v_unused_2724_ = lean_ctor_get(v___x_2635_, 1);
lean_dec(v_unused_2724_);
v_unused_2725_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2725_);
v___x_2652_ = v___x_2635_;
v_isShared_2653_ = v_isSharedCheck_2720_;
goto v_resetjp_2651_;
}
else
{
lean_dec(v___x_2635_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2720_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
if (lean_obj_tag(v_l_2640_) == 0)
{
if (lean_obj_tag(v_r_2641_) == 0)
{
lean_object* v_size_2654_; lean_object* v_k_2655_; lean_object* v_v_2656_; lean_object* v_l_2657_; lean_object* v_r_2658_; lean_object* v_size_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; 
v_size_2654_ = lean_ctor_get(v_l_2640_, 0);
v_k_2655_ = lean_ctor_get(v_l_2640_, 1);
v_v_2656_ = lean_ctor_get(v_l_2640_, 2);
v_l_2657_ = lean_ctor_get(v_l_2640_, 3);
v_r_2658_ = lean_ctor_get(v_l_2640_, 4);
v_size_2659_ = lean_ctor_get(v_r_2641_, 0);
v___x_2660_ = lean_unsigned_to_nat(2u);
v___x_2661_ = lean_nat_mul(v___x_2660_, v_size_2659_);
v___x_2662_ = lean_nat_dec_lt(v_size_2654_, v___x_2661_);
lean_dec(v___x_2661_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2691_; 
lean_inc(v_r_2658_);
lean_inc(v_l_2657_);
lean_inc(v_v_2656_);
lean_inc(v_k_2655_);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_l_2640_);
if (v_isSharedCheck_2691_ == 0)
{
lean_object* v_unused_2692_; lean_object* v_unused_2693_; lean_object* v_unused_2694_; lean_object* v_unused_2695_; lean_object* v_unused_2696_; 
v_unused_2692_ = lean_ctor_get(v_l_2640_, 4);
lean_dec(v_unused_2692_);
v_unused_2693_ = lean_ctor_get(v_l_2640_, 3);
lean_dec(v_unused_2693_);
v_unused_2694_ = lean_ctor_get(v_l_2640_, 2);
lean_dec(v_unused_2694_);
v_unused_2695_ = lean_ctor_get(v_l_2640_, 1);
lean_dec(v_unused_2695_);
v_unused_2696_ = lean_ctor_get(v_l_2640_, 0);
lean_dec(v_unused_2696_);
v___x_2664_ = v_l_2640_;
v_isShared_2665_ = v_isSharedCheck_2691_;
goto v_resetjp_2663_;
}
else
{
lean_dec(v_l_2640_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2691_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2681_; 
v___x_2666_ = lean_unsigned_to_nat(1u);
v___x_2667_ = lean_nat_add(v___x_2666_, v_size_2636_);
v___x_2668_ = lean_nat_add(v___x_2667_, v_size_2637_);
lean_dec(v_size_2637_);
if (lean_obj_tag(v_l_2657_) == 0)
{
lean_object* v_size_2689_; 
v_size_2689_ = lean_ctor_get(v_l_2657_, 0);
lean_inc(v_size_2689_);
v___y_2681_ = v_size_2689_;
goto v___jp_2680_;
}
else
{
lean_object* v___x_2690_; 
v___x_2690_ = lean_unsigned_to_nat(0u);
v___y_2681_ = v___x_2690_;
goto v___jp_2680_;
}
v___jp_2669_:
{
lean_object* v___x_2673_; lean_object* v___x_2675_; 
v___x_2673_ = lean_nat_add(v___y_2670_, v___y_2672_);
lean_dec(v___y_2672_);
lean_dec(v___y_2670_);
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 4, v_r_2641_);
lean_ctor_set(v___x_2664_, 3, v_r_2658_);
lean_ctor_set(v___x_2664_, 2, v_v_2639_);
lean_ctor_set(v___x_2664_, 1, v_k_2638_);
lean_ctor_set(v___x_2664_, 0, v___x_2673_);
v___x_2675_ = v___x_2664_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2673_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v_k_2638_);
lean_ctor_set(v_reuseFailAlloc_2679_, 2, v_v_2639_);
lean_ctor_set(v_reuseFailAlloc_2679_, 3, v_r_2658_);
lean_ctor_set(v_reuseFailAlloc_2679_, 4, v_r_2641_);
v___x_2675_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2677_; 
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 4, v___x_2675_);
lean_ctor_set(v___x_2652_, 3, v___y_2671_);
lean_ctor_set(v___x_2652_, 2, v_v_2656_);
lean_ctor_set(v___x_2652_, 1, v_k_2655_);
lean_ctor_set(v___x_2652_, 0, v___x_2668_);
v___x_2677_ = v___x_2652_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v_k_2655_);
lean_ctor_set(v_reuseFailAlloc_2678_, 2, v_v_2656_);
lean_ctor_set(v_reuseFailAlloc_2678_, 3, v___y_2671_);
lean_ctor_set(v_reuseFailAlloc_2678_, 4, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
v___jp_2680_:
{
lean_object* v___x_2682_; lean_object* v___x_2684_; 
v___x_2682_ = lean_nat_add(v___x_2667_, v___y_2681_);
lean_dec(v___y_2681_);
lean_dec(v___x_2667_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v_l_2657_);
lean_ctor_set(v___x_2454_, 0, v___x_2682_);
v___x_2684_ = v___x_2454_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2682_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2688_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2688_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2688_, 4, v_l_2657_);
v___x_2684_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
lean_object* v___x_2685_; 
v___x_2685_ = lean_nat_add(v___x_2666_, v_size_2659_);
if (lean_obj_tag(v_r_2658_) == 0)
{
lean_object* v_size_2686_; 
v_size_2686_ = lean_ctor_get(v_r_2658_, 0);
lean_inc(v_size_2686_);
v___y_2670_ = v___x_2685_;
v___y_2671_ = v___x_2684_;
v___y_2672_ = v_size_2686_;
goto v___jp_2669_;
}
else
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_unsigned_to_nat(0u);
v___y_2670_ = v___x_2685_;
v___y_2671_ = v___x_2684_;
v___y_2672_ = v___x_2687_;
goto v___jp_2669_;
}
}
}
}
}
else
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2702_; 
lean_del_object(v___x_2454_);
v___x_2697_ = lean_unsigned_to_nat(1u);
v___x_2698_ = lean_nat_add(v___x_2697_, v_size_2636_);
v___x_2699_ = lean_nat_add(v___x_2698_, v_size_2637_);
lean_dec(v_size_2637_);
v___x_2700_ = lean_nat_add(v___x_2698_, v_size_2654_);
lean_dec(v___x_2698_);
lean_inc_ref(v_l_2451_);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 4, v_l_2640_);
lean_ctor_set(v___x_2652_, 3, v_l_2451_);
lean_ctor_set(v___x_2652_, 2, v_v_2450_);
lean_ctor_set(v___x_2652_, 1, v_k_2449_);
lean_ctor_set(v___x_2652_, 0, v___x_2700_);
v___x_2702_ = v___x_2652_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2700_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2715_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2715_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2715_, 4, v_l_2640_);
v___x_2702_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
v_isSharedCheck_2709_ = !lean_is_exclusive(v_l_2451_);
if (v_isSharedCheck_2709_ == 0)
{
lean_object* v_unused_2710_; lean_object* v_unused_2711_; lean_object* v_unused_2712_; lean_object* v_unused_2713_; lean_object* v_unused_2714_; 
v_unused_2710_ = lean_ctor_get(v_l_2451_, 4);
lean_dec(v_unused_2710_);
v_unused_2711_ = lean_ctor_get(v_l_2451_, 3);
lean_dec(v_unused_2711_);
v_unused_2712_ = lean_ctor_get(v_l_2451_, 2);
lean_dec(v_unused_2712_);
v_unused_2713_ = lean_ctor_get(v_l_2451_, 1);
lean_dec(v_unused_2713_);
v_unused_2714_ = lean_ctor_get(v_l_2451_, 0);
lean_dec(v_unused_2714_);
v___x_2704_ = v_l_2451_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_dec(v_l_2451_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 4, v_r_2641_);
lean_ctor_set(v___x_2704_, 3, v___x_2702_);
lean_ctor_set(v___x_2704_, 2, v_v_2639_);
lean_ctor_set(v___x_2704_, 1, v_k_2638_);
lean_ctor_set(v___x_2704_, 0, v___x_2699_);
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v___x_2699_);
lean_ctor_set(v_reuseFailAlloc_2708_, 1, v_k_2638_);
lean_ctor_set(v_reuseFailAlloc_2708_, 2, v_v_2639_);
lean_ctor_set(v_reuseFailAlloc_2708_, 3, v___x_2702_);
lean_ctor_set(v_reuseFailAlloc_2708_, 4, v_r_2641_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
else
{
lean_object* v___x_2716_; lean_object* v___x_2717_; 
lean_dec_ref_known(v_l_2640_, 5);
lean_del_object(v___x_2652_);
lean_dec(v_v_2639_);
lean_dec(v_k_2638_);
lean_dec(v_size_2637_);
lean_dec_ref_known(v_l_2451_, 5);
lean_del_object(v___x_2454_);
lean_dec(v_v_2450_);
lean_dec(v_k_2449_);
v___x_2716_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__7);
v___x_2717_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(v___x_2716_);
return v___x_2717_;
}
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
lean_del_object(v___x_2652_);
lean_dec(v_r_2641_);
lean_dec(v_v_2639_);
lean_dec(v_k_2638_);
lean_dec(v_size_2637_);
lean_dec_ref_known(v_l_2451_, 5);
lean_del_object(v___x_2454_);
lean_dec(v_v_2450_);
lean_dec(v_k_2449_);
v___x_2718_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg___closed__8);
v___x_2719_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(v___x_2718_);
return v___x_2719_;
}
}
}
}
else
{
lean_object* v_size_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2730_; 
v_size_2726_ = lean_ctor_get(v_l_2451_, 0);
v___x_2727_ = lean_unsigned_to_nat(1u);
v___x_2728_ = lean_nat_add(v___x_2727_, v_size_2726_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2635_);
lean_ctor_set(v___x_2454_, 0, v___x_2728_);
v___x_2730_ = v___x_2454_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2728_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2731_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2731_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2731_, 4, v___x_2635_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
else
{
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v_l_2732_; 
v_l_2732_ = lean_ctor_get(v___x_2635_, 3);
lean_inc(v_l_2732_);
if (lean_obj_tag(v_l_2732_) == 0)
{
lean_object* v_r_2733_; 
v_r_2733_ = lean_ctor_get(v___x_2635_, 4);
lean_inc(v_r_2733_);
if (lean_obj_tag(v_r_2733_) == 0)
{
lean_object* v_size_2734_; lean_object* v_k_2735_; lean_object* v_v_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2750_; 
v_size_2734_ = lean_ctor_get(v___x_2635_, 0);
v_k_2735_ = lean_ctor_get(v___x_2635_, 1);
v_v_2736_ = lean_ctor_get(v___x_2635_, 2);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2750_ == 0)
{
lean_object* v_unused_2751_; lean_object* v_unused_2752_; 
v_unused_2751_ = lean_ctor_get(v___x_2635_, 4);
lean_dec(v_unused_2751_);
v_unused_2752_ = lean_ctor_get(v___x_2635_, 3);
lean_dec(v_unused_2752_);
v___x_2738_ = v___x_2635_;
v_isShared_2739_ = v_isSharedCheck_2750_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_v_2736_);
lean_inc(v_k_2735_);
lean_inc(v_size_2734_);
lean_dec(v___x_2635_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2750_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v_size_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2745_; 
v_size_2740_ = lean_ctor_get(v_l_2732_, 0);
v___x_2741_ = lean_unsigned_to_nat(1u);
v___x_2742_ = lean_nat_add(v___x_2741_, v_size_2734_);
lean_dec(v_size_2734_);
v___x_2743_ = lean_nat_add(v___x_2741_, v_size_2740_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set(v___x_2738_, 4, v_l_2732_);
lean_ctor_set(v___x_2738_, 3, v_l_2451_);
lean_ctor_set(v___x_2738_, 2, v_v_2450_);
lean_ctor_set(v___x_2738_, 1, v_k_2449_);
lean_ctor_set(v___x_2738_, 0, v___x_2743_);
v___x_2745_ = v___x_2738_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2743_);
lean_ctor_set(v_reuseFailAlloc_2749_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2749_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2749_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2749_, 4, v_l_2732_);
v___x_2745_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2747_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v_r_2733_);
lean_ctor_set(v___x_2454_, 3, v___x_2745_);
lean_ctor_set(v___x_2454_, 2, v_v_2736_);
lean_ctor_set(v___x_2454_, 1, v_k_2735_);
lean_ctor_set(v___x_2454_, 0, v___x_2742_);
v___x_2747_ = v___x_2454_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2742_);
lean_ctor_set(v_reuseFailAlloc_2748_, 1, v_k_2735_);
lean_ctor_set(v_reuseFailAlloc_2748_, 2, v_v_2736_);
lean_ctor_set(v_reuseFailAlloc_2748_, 3, v___x_2745_);
lean_ctor_set(v_reuseFailAlloc_2748_, 4, v_r_2733_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
else
{
lean_object* v_k_2753_; lean_object* v_v_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2778_; 
v_k_2753_ = lean_ctor_get(v___x_2635_, 1);
v_v_2754_ = lean_ctor_get(v___x_2635_, 2);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2778_ == 0)
{
lean_object* v_unused_2779_; lean_object* v_unused_2780_; lean_object* v_unused_2781_; 
v_unused_2779_ = lean_ctor_get(v___x_2635_, 4);
lean_dec(v_unused_2779_);
v_unused_2780_ = lean_ctor_get(v___x_2635_, 3);
lean_dec(v_unused_2780_);
v_unused_2781_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2781_);
v___x_2756_ = v___x_2635_;
v_isShared_2757_ = v_isSharedCheck_2778_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_v_2754_);
lean_inc(v_k_2753_);
lean_dec(v___x_2635_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2778_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v_k_2758_; lean_object* v_v_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2774_; 
v_k_2758_ = lean_ctor_get(v_l_2732_, 1);
v_v_2759_ = lean_ctor_get(v_l_2732_, 2);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_l_2732_);
if (v_isSharedCheck_2774_ == 0)
{
lean_object* v_unused_2775_; lean_object* v_unused_2776_; lean_object* v_unused_2777_; 
v_unused_2775_ = lean_ctor_get(v_l_2732_, 4);
lean_dec(v_unused_2775_);
v_unused_2776_ = lean_ctor_get(v_l_2732_, 3);
lean_dec(v_unused_2776_);
v_unused_2777_ = lean_ctor_get(v_l_2732_, 0);
lean_dec(v_unused_2777_);
v___x_2761_ = v_l_2732_;
v_isShared_2762_ = v_isSharedCheck_2774_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_v_2759_);
lean_inc(v_k_2758_);
lean_dec(v_l_2732_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2774_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2763_ = lean_unsigned_to_nat(3u);
v___x_2764_ = lean_unsigned_to_nat(1u);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 4, v_r_2733_);
lean_ctor_set(v___x_2761_, 3, v_r_2733_);
lean_ctor_set(v___x_2761_, 2, v_v_2450_);
lean_ctor_set(v___x_2761_, 1, v_k_2449_);
lean_ctor_set(v___x_2761_, 0, v___x_2764_);
v___x_2766_ = v___x_2761_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2764_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2773_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2773_, 3, v_r_2733_);
lean_ctor_set(v_reuseFailAlloc_2773_, 4, v_r_2733_);
v___x_2766_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
lean_object* v___x_2768_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 3, v_r_2733_);
lean_ctor_set(v___x_2756_, 0, v___x_2764_);
v___x_2768_ = v___x_2756_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2764_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v_k_2753_);
lean_ctor_set(v_reuseFailAlloc_2772_, 2, v_v_2754_);
lean_ctor_set(v_reuseFailAlloc_2772_, 3, v_r_2733_);
lean_ctor_set(v_reuseFailAlloc_2772_, 4, v_r_2733_);
v___x_2768_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
lean_object* v___x_2770_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2768_);
lean_ctor_set(v___x_2454_, 3, v___x_2766_);
lean_ctor_set(v___x_2454_, 2, v_v_2759_);
lean_ctor_set(v___x_2454_, 1, v_k_2758_);
lean_ctor_set(v___x_2454_, 0, v___x_2763_);
v___x_2770_ = v___x_2454_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v___x_2763_);
lean_ctor_set(v_reuseFailAlloc_2771_, 1, v_k_2758_);
lean_ctor_set(v_reuseFailAlloc_2771_, 2, v_v_2759_);
lean_ctor_set(v_reuseFailAlloc_2771_, 3, v___x_2766_);
lean_ctor_set(v_reuseFailAlloc_2771_, 4, v___x_2768_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_2782_; 
v_r_2782_ = lean_ctor_get(v___x_2635_, 4);
lean_inc(v_r_2782_);
if (lean_obj_tag(v_r_2782_) == 0)
{
lean_object* v_k_2783_; lean_object* v_v_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2796_; 
v_k_2783_ = lean_ctor_get(v___x_2635_, 1);
v_v_2784_ = lean_ctor_get(v___x_2635_, 2);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2796_ == 0)
{
lean_object* v_unused_2797_; lean_object* v_unused_2798_; lean_object* v_unused_2799_; 
v_unused_2797_ = lean_ctor_get(v___x_2635_, 4);
lean_dec(v_unused_2797_);
v_unused_2798_ = lean_ctor_get(v___x_2635_, 3);
lean_dec(v_unused_2798_);
v_unused_2799_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2799_);
v___x_2786_ = v___x_2635_;
v_isShared_2787_ = v_isSharedCheck_2796_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_v_2784_);
lean_inc(v_k_2783_);
lean_dec(v___x_2635_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2796_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2791_; 
v___x_2788_ = lean_unsigned_to_nat(3u);
v___x_2789_ = lean_unsigned_to_nat(1u);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 4, v_l_2732_);
lean_ctor_set(v___x_2786_, 2, v_v_2450_);
lean_ctor_set(v___x_2786_, 1, v_k_2449_);
lean_ctor_set(v___x_2786_, 0, v___x_2789_);
v___x_2791_ = v___x_2786_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2789_);
lean_ctor_set(v_reuseFailAlloc_2795_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2795_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2795_, 3, v_l_2732_);
lean_ctor_set(v_reuseFailAlloc_2795_, 4, v_l_2732_);
v___x_2791_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
lean_object* v___x_2793_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v_r_2782_);
lean_ctor_set(v___x_2454_, 3, v___x_2791_);
lean_ctor_set(v___x_2454_, 2, v_v_2784_);
lean_ctor_set(v___x_2454_, 1, v_k_2783_);
lean_ctor_set(v___x_2454_, 0, v___x_2788_);
v___x_2793_ = v___x_2454_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v___x_2788_);
lean_ctor_set(v_reuseFailAlloc_2794_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2794_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2794_, 3, v___x_2791_);
lean_ctor_set(v_reuseFailAlloc_2794_, 4, v_r_2782_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
else
{
lean_object* v___x_2800_; lean_object* v___x_2802_; 
v___x_2800_ = lean_unsigned_to_nat(2u);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2635_);
lean_ctor_set(v___x_2454_, 3, v_r_2782_);
lean_ctor_set(v___x_2454_, 0, v___x_2800_);
v___x_2802_ = v___x_2454_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v___x_2800_);
lean_ctor_set(v_reuseFailAlloc_2803_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2803_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2803_, 3, v_r_2782_);
lean_ctor_set(v_reuseFailAlloc_2803_, 4, v___x_2635_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
else
{
lean_object* v___x_2804_; lean_object* v___x_2806_; 
v___x_2804_ = lean_unsigned_to_nat(1u);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 4, v___x_2635_);
lean_ctor_set(v___x_2454_, 3, v___x_2635_);
lean_ctor_set(v___x_2454_, 0, v___x_2804_);
v___x_2806_ = v___x_2454_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2804_);
lean_ctor_set(v_reuseFailAlloc_2807_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2807_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2807_, 3, v___x_2635_);
lean_ctor_set(v_reuseFailAlloc_2807_, 4, v___x_2635_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2809_ = lean_unsigned_to_nat(1u);
v___x_2810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2809_);
lean_ctor_set(v___x_2810_, 1, v_k_2445_);
lean_ctor_set(v___x_2810_, 2, v_v_2446_);
lean_ctor_set(v___x_2810_, 3, v_t_2447_);
lean_ctor_set(v___x_2810_, 4, v_t_2447_);
return v___x_2810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3_spec__6(lean_object* v_init_2811_, lean_object* v_x_2812_){
_start:
{
if (lean_obj_tag(v_x_2812_) == 0)
{
lean_object* v_k_2813_; lean_object* v_v_2814_; lean_object* v_l_2815_; lean_object* v_r_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_k_2813_ = lean_ctor_get(v_x_2812_, 1);
lean_inc(v_k_2813_);
v_v_2814_ = lean_ctor_get(v_x_2812_, 2);
lean_inc(v_v_2814_);
v_l_2815_ = lean_ctor_get(v_x_2812_, 3);
lean_inc(v_l_2815_);
v_r_2816_ = lean_ctor_get(v_x_2812_, 4);
lean_inc(v_r_2816_);
lean_dec_ref_known(v_x_2812_, 5);
v___x_2817_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3_spec__6(v_init_2811_, v_l_2815_);
v___x_2818_ = 1;
v___x_2819_ = l_Lean_Name_toString(v_k_2813_, v___x_2818_);
v___x_2820_ = l_Lean_Array_toJson___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__1(v_v_2814_);
lean_dec(v_v_2814_);
v___x_2821_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v___x_2819_, v___x_2820_, v___x_2817_);
v_init_2811_ = v___x_2821_;
v_x_2812_ = v_r_2816_;
goto _start;
}
else
{
return v_init_2811_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1(lean_object* v_m_2823_){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2824_ = lean_box(1);
v___x_2825_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3_spec__6(v___x_2824_, v_m_2823_);
v___x_2826_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonModuleSetup_toJson_spec__0(lean_object* v_k_2827_, lean_object* v_x_2828_){
_start:
{
if (lean_obj_tag(v_x_2828_) == 0)
{
lean_object* v___x_2829_; 
lean_dec_ref(v_k_2827_);
v___x_2829_ = lean_box(0);
return v___x_2829_;
}
else
{
lean_object* v_val_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v_val_2830_ = lean_ctor_get(v_x_2828_, 0);
v___x_2831_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleHeader_toJson_spec__0(v_val_2830_);
v___x_2832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2832_, 0, v_k_2827_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = lean_box(0);
v___x_2834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2832_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
return v___x_2834_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonModuleSetup_toJson_spec__0___boxed(lean_object* v_k_2835_, lean_object* v_x_2836_){
_start:
{
lean_object* v_res_2837_; 
v_res_2837_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleSetup_toJson_spec__0(v_k_2835_, v_x_2836_);
lean_dec(v_x_2836_);
return v_res_2837_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9_spec__13(lean_object* v_init_2838_, lean_object* v_x_2839_){
_start:
{
if (lean_obj_tag(v_x_2839_) == 0)
{
lean_object* v_k_2840_; lean_object* v_v_2841_; lean_object* v_l_2842_; lean_object* v_r_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; lean_object* v___x_2846_; lean_object* v___y_2848_; 
v_k_2840_ = lean_ctor_get(v_x_2839_, 1);
lean_inc(v_k_2840_);
v_v_2841_ = lean_ctor_get(v_x_2839_, 2);
lean_inc(v_v_2841_);
v_l_2842_ = lean_ctor_get(v_x_2839_, 3);
lean_inc(v_l_2842_);
v_r_2843_ = lean_ctor_get(v_x_2839_, 4);
lean_inc(v_r_2843_);
lean_dec_ref_known(v_x_2839_, 5);
v___x_2844_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9_spec__13(v_init_2838_, v_l_2842_);
v___x_2845_ = 1;
v___x_2846_ = l_Lean_Name_toString(v_k_2840_, v___x_2845_);
switch(lean_obj_tag(v_v_2841_))
{
case 0:
{
lean_object* v_s_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
v_s_2851_ = lean_ctor_get(v_v_2841_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_v_2841_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v_v_2841_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_s_2851_);
lean_dec(v_v_2841_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
lean_ctor_set_tag(v___x_2853_, 3);
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_s_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
v___y_2848_ = v___x_2856_;
goto v___jp_2847_;
}
}
}
case 1:
{
uint8_t v_b_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
v_b_2859_ = lean_ctor_get_uint8(v_v_2841_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v_v_2841_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v_v_2841_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_dec(v_v_2841_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2865_, 0, v_b_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
v___y_2848_ = v___x_2864_;
goto v___jp_2847_;
}
}
}
default: 
{
lean_object* v_n_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2875_; 
v_n_2867_ = lean_ctor_get(v_v_2841_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v_v_2841_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2869_ = v_v_2841_;
v_isShared_2870_ = v_isSharedCheck_2875_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_n_2867_);
lean_dec(v_v_2841_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2875_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2871_; lean_object* v___x_2873_; 
v___x_2871_ = l_Lean_JsonNumber_fromNat(v_n_2867_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2871_);
v___x_2873_ = v___x_2869_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
v___y_2848_ = v___x_2873_;
goto v___jp_2847_;
}
}
}
}
v___jp_2847_:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v___x_2846_, v___y_2848_, v___x_2844_);
v_init_2838_ = v___x_2849_;
v_x_2839_ = v_r_2843_;
goto _start;
}
}
else
{
return v_init_2838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4(lean_object* v_m_2876_){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2877_ = lean_box(1);
v___x_2878_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9_spec__13(v___x_2877_, v_m_2876_);
v___x_2879_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3_spec__7(size_t v_sz_2880_, size_t v_i_2881_, lean_object* v_bs_2882_){
_start:
{
uint8_t v___x_2883_; 
v___x_2883_ = lean_usize_dec_lt(v_i_2881_, v_sz_2880_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
v___x_2884_ = l_unsafeCast___redArg(v_bs_2882_);
lean_dec_ref(v_bs_2882_);
return v___x_2884_;
}
else
{
lean_object* v_v_2885_; lean_object* v___x_2886_; lean_object* v_bs_x27_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; size_t v___x_2890_; size_t v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v_v_2885_ = lean_array_uget(v_bs_2882_, v_i_2881_);
v___x_2886_ = lean_unsigned_to_nat(0u);
v_bs_x27_2887_ = lean_array_uset(v_bs_2882_, v_i_2881_, v___x_2886_);
v___x_2888_ = l_unsafeCast___redArg(v_v_2885_);
lean_dec(v_v_2885_);
v___x_2889_ = l_Lean_instToJsonPlugin_toJson(v___x_2888_);
v___x_2890_ = ((size_t)1ULL);
v___x_2891_ = lean_usize_add(v_i_2881_, v___x_2890_);
v___x_2892_ = l_unsafeCast___redArg(v___x_2889_);
lean_dec(v___x_2889_);
v___x_2893_ = lean_array_uset(v_bs_x27_2887_, v_i_2881_, v___x_2892_);
v_i_2881_ = v___x_2891_;
v_bs_2882_ = v___x_2893_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3_spec__7___boxed(lean_object* v_sz_2895_, lean_object* v_i_2896_, lean_object* v_bs_2897_){
_start:
{
size_t v_sz_boxed_2898_; size_t v_i_boxed_2899_; lean_object* v_res_2900_; 
v_sz_boxed_2898_ = lean_unbox_usize(v_sz_2895_);
lean_dec(v_sz_2895_);
v_i_boxed_2899_ = lean_unbox_usize(v_i_2896_);
lean_dec(v_i_2896_);
v_res_2900_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3_spec__7(v_sz_boxed_2898_, v_i_boxed_2899_, v_bs_2897_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3(lean_object* v_a_2901_){
_start:
{
size_t v_sz_2902_; size_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v_sz_2902_ = lean_array_size(v_a_2901_);
v___x_2903_ = ((size_t)0ULL);
v___x_2904_ = l_unsafeCast___redArg(v_a_2901_);
v___x_2905_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3_spec__7(v_sz_2902_, v___x_2903_, v___x_2904_);
v___x_2906_ = l_unsafeCast___redArg(v___x_2905_);
lean_dec_ref(v___x_2905_);
v___x_2907_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3___boxed(lean_object* v_a_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3(v_a_2908_);
lean_dec_ref(v_a_2908_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object* v_x_2911_){
_start:
{
lean_object* v_name_2912_; lean_object* v_package_x3f_2913_; uint8_t v_isModule_2914_; lean_object* v_imports_x3f_2915_; lean_object* v_importArts_2916_; lean_object* v_dynlibs_2917_; lean_object* v_plugins_2918_; lean_object* v_options_2919_; lean_object* v___x_2920_; uint8_t v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_name_2912_ = lean_ctor_get(v_x_2911_, 0);
lean_inc(v_name_2912_);
v_package_x3f_2913_ = lean_ctor_get(v_x_2911_, 1);
lean_inc(v_package_x3f_2913_);
v_isModule_2914_ = lean_ctor_get_uint8(v_x_2911_, sizeof(void*)*7);
v_imports_x3f_2915_ = lean_ctor_get(v_x_2911_, 2);
lean_inc(v_imports_x3f_2915_);
v_importArts_2916_ = lean_ctor_get(v_x_2911_, 3);
lean_inc(v_importArts_2916_);
v_dynlibs_2917_ = lean_ctor_get(v_x_2911_, 4);
lean_inc_ref(v_dynlibs_2917_);
v_plugins_2918_ = lean_ctor_get(v_x_2911_, 5);
lean_inc_ref(v_plugins_2918_);
v_options_2919_ = lean_ctor_get(v_x_2911_, 6);
lean_inc(v_options_2919_);
lean_dec_ref(v_x_2911_);
v___x_2920_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__0));
v___x_2921_ = 1;
v___x_2922_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2912_, v___x_2921_);
v___x_2923_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2922_);
v___x_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2920_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
v___x_2925_ = lean_box(0);
v___x_2926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2924_);
lean_ctor_set(v___x_2926_, 1, v___x_2925_);
v___x_2927_ = ((lean_object*)(l_Lean_instToJsonModuleSetup_toJson___closed__0));
v___x_2928_ = l_Lean_Json_opt___at___00Lean_instToJsonPlugin_toJson_spec__0(v___x_2927_, v_package_x3f_2913_);
v___x_2929_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__5));
v___x_2930_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2930_, 0, v_isModule_2914_);
v___x_2931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2929_);
lean_ctor_set(v___x_2931_, 1, v___x_2930_);
v___x_2932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v___x_2925_);
v___x_2933_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__0));
v___x_2934_ = l_Lean_Json_opt___at___00Lean_instToJsonModuleSetup_toJson_spec__0(v___x_2933_, v_imports_x3f_2915_);
lean_dec(v_imports_x3f_2915_);
v___x_2935_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__8));
v___x_2936_ = l_Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1(v_importArts_2916_);
v___x_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2935_);
lean_ctor_set(v___x_2937_, 1, v___x_2936_);
v___x_2938_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
lean_ctor_set(v___x_2938_, 1, v___x_2925_);
v___x_2939_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__12));
v___x_2940_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__2(v_dynlibs_2917_);
lean_dec_ref(v_dynlibs_2917_);
v___x_2941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2939_);
lean_ctor_set(v___x_2941_, 1, v___x_2940_);
v___x_2942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
lean_ctor_set(v___x_2942_, 1, v___x_2925_);
v___x_2943_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__14));
v___x_2944_ = l_Lean_Array_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__3(v_plugins_2918_);
lean_dec_ref(v_plugins_2918_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2943_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
v___x_2946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
lean_ctor_set(v___x_2946_, 1, v___x_2925_);
v___x_2947_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__16));
v___x_2948_ = l_Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4(v_options_2919_);
v___x_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2947_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
lean_ctor_set(v___x_2950_, 1, v___x_2925_);
v___x_2951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v___x_2925_);
v___x_2952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2946_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2942_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2938_);
lean_ctor_set(v___x_2954_, 1, v___x_2953_);
v___x_2955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2934_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
v___x_2956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2932_);
lean_ctor_set(v___x_2956_, 1, v___x_2955_);
v___x_2957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2928_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2926_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
v___x_2959_ = ((lean_object*)(l_Lean_instToJsonImport_toJson___closed__0));
v___x_2960_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonImport_toJson_spec__0(v___x_2958_, v___x_2959_);
v___x_2961_ = l_Lean_Json_mkObj(v___x_2960_);
lean_dec(v___x_2960_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2962_, lean_object* v_msg_2963_){
_start:
{
lean_object* v___x_2964_; 
v___x_2964_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2_spec__4___redArg(v_msg_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2(lean_object* v_00_u03b2_2965_, lean_object* v_k_2966_, lean_object* v_v_2967_, lean_object* v_t_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v_k_2966_, v_v_2967_, v_t_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3(lean_object* v_init_2970_, lean_object* v_t_2971_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__3_spec__6(v_init_2970_, v_t_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9(lean_object* v_init_2973_, lean_object* v_t_2974_){
_start:
{
lean_object* v___x_2975_; 
v___x_2975_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__4_spec__9_spec__13(v_init_2973_, v_t_2974_);
return v___x_2975_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3(void){
_start:
{
lean_object* v_natZero_2982_; lean_object* v_intZero_2983_; 
v_natZero_2982_ = lean_unsigned_to_nat(0u);
v_intZero_2983_ = lean_nat_to_int(v_natZero_2982_);
return v_intZero_2983_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13(lean_object* v_init_2985_, lean_object* v_x_2986_){
_start:
{
if (lean_obj_tag(v_x_2986_) == 0)
{
lean_object* v_k_2991_; lean_object* v_v_2992_; lean_object* v_l_2993_; lean_object* v_r_2994_; lean_object* v___x_2995_; 
v_k_2991_ = lean_ctor_get(v_x_2986_, 1);
lean_inc(v_k_2991_);
v_v_2992_ = lean_ctor_get(v_x_2986_, 2);
lean_inc(v_v_2992_);
v_l_2993_ = lean_ctor_get(v_x_2986_, 3);
lean_inc(v_l_2993_);
v_r_2994_ = lean_ctor_get(v_x_2986_, 4);
lean_inc(v_r_2994_);
lean_dec_ref_known(v_x_2986_, 5);
v___x_2995_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13(v_init_2985_, v_l_2993_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_dec(v_r_2994_);
lean_dec(v_v_2992_);
lean_dec(v_k_2991_);
return v___x_2995_;
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3082_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3082_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3082_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v_a_3001_; lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3005_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__2));
v___x_3006_ = lean_string_dec_eq(v_k_2991_, v___x_3005_);
if (v___x_3006_ == 0)
{
lean_object* v_n_3007_; lean_object* v_a_3009_; uint8_t v___x_3012_; 
lean_inc(v_k_2991_);
v_n_3007_ = l_String_toName(v_k_2991_);
v___x_3012_ = l_Lean_Name_isAnonymous(v_n_3007_);
if (v___x_3012_ == 0)
{
lean_del_object(v___x_2998_);
lean_dec(v_k_2991_);
switch(lean_obj_tag(v_v_2992_))
{
case 3:
{
lean_object* v_s_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
v_s_3013_ = lean_ctor_get(v_v_2992_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_v_2992_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v_v_2992_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_s_3013_);
lean_dec(v_v_2992_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3018_; 
if (v_isShared_3016_ == 0)
{
lean_ctor_set_tag(v___x_3015_, 0);
v___x_3018_ = v___x_3015_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_s_3013_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
v_a_3009_ = v___x_3018_;
goto v___jp_3008_;
}
}
}
case 1:
{
uint8_t v_b_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
v_b_3021_ = lean_ctor_get_uint8(v_v_2992_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_v_2992_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v_v_2992_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_dec(v_v_2992_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, 0, v_b_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
v_a_3009_ = v___x_3026_;
goto v___jp_3008_;
}
}
}
case 2:
{
lean_object* v_n_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3043_; 
v_n_3029_ = lean_ctor_get(v_v_2992_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v_v_2992_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3031_ = v_v_2992_;
v_isShared_3032_ = v_isSharedCheck_3043_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_n_3029_);
lean_dec(v_v_2992_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3043_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v_mantissa_3033_; lean_object* v_exponent_3034_; lean_object* v_natZero_3035_; lean_object* v_intZero_3036_; uint8_t v_isNeg_3037_; 
v_mantissa_3033_ = lean_ctor_get(v_n_3029_, 0);
lean_inc(v_mantissa_3033_);
v_exponent_3034_ = lean_ctor_get(v_n_3029_, 1);
lean_inc(v_exponent_3034_);
lean_dec_ref(v_n_3029_);
v_natZero_3035_ = lean_unsigned_to_nat(0u);
v_intZero_3036_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3);
v_isNeg_3037_ = lean_int_dec_lt(v_mantissa_3033_, v_intZero_3036_);
if (v_isNeg_3037_ == 0)
{
uint8_t v___x_3038_; 
v___x_3038_ = lean_nat_dec_eq(v_exponent_3034_, v_natZero_3035_);
lean_dec(v_exponent_3034_);
if (v___x_3038_ == 0)
{
lean_dec(v_mantissa_3033_);
lean_del_object(v___x_3031_);
lean_dec(v_n_3007_);
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
goto v___jp_2989_;
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; 
v_a_3039_ = lean_nat_abs(v_mantissa_3033_);
lean_dec(v_mantissa_3033_);
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 0, v_a_3039_);
v___x_3041_ = v___x_3031_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3039_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
v_a_3009_ = v___x_3041_;
goto v___jp_3008_;
}
}
}
else
{
lean_dec(v_exponent_3034_);
lean_dec(v_mantissa_3033_);
lean_del_object(v___x_3031_);
lean_dec(v_n_3007_);
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
goto v___jp_2989_;
}
}
}
default: 
{
lean_dec(v_n_3007_);
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
lean_dec(v_v_2992_);
goto v___jp_2989_;
}
}
}
else
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3049_; 
lean_dec(v_n_3007_);
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
lean_dec(v_v_2992_);
v___x_3044_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__4));
v___x_3045_ = lean_string_append(v___x_3044_, v_k_2991_);
lean_dec(v_k_2991_);
v___x_3046_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3047_ = lean_string_append(v___x_3045_, v___x_3046_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set_tag(v___x_2998_, 0);
lean_ctor_set(v___x_2998_, 0, v___x_3047_);
v___x_3049_ = v___x_2998_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3047_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
v___jp_3008_:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_3007_, v_a_3009_, v_a_2996_);
v_init_2985_ = v___x_3010_;
v_x_2986_ = v_r_2994_;
goto _start;
}
}
else
{
lean_del_object(v___x_2998_);
lean_dec(v_k_2991_);
switch(lean_obj_tag(v_v_2992_))
{
case 3:
{
lean_object* v_s_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
v_s_3051_ = lean_ctor_get(v_v_2992_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v_v_2992_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v_v_2992_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_s_3051_);
lean_dec(v_v_2992_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
lean_ctor_set_tag(v___x_3053_, 0);
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_s_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
v_a_3001_ = v___x_3056_;
goto v___jp_3000_;
}
}
}
case 1:
{
uint8_t v_b_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
v_b_3059_ = lean_ctor_get_uint8(v_v_2992_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v_v_2992_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v_v_2992_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_dec(v_v_2992_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_3065_, 0, v_b_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
v_a_3001_ = v___x_3064_;
goto v___jp_3000_;
}
}
}
case 2:
{
lean_object* v_n_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3081_; 
v_n_3067_ = lean_ctor_get(v_v_2992_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v_v_2992_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3069_ = v_v_2992_;
v_isShared_3070_ = v_isSharedCheck_3081_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_n_3067_);
lean_dec(v_v_2992_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3081_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v_mantissa_3071_; lean_object* v_exponent_3072_; lean_object* v_natZero_3073_; lean_object* v_intZero_3074_; uint8_t v_isNeg_3075_; 
v_mantissa_3071_ = lean_ctor_get(v_n_3067_, 0);
lean_inc(v_mantissa_3071_);
v_exponent_3072_ = lean_ctor_get(v_n_3067_, 1);
lean_inc(v_exponent_3072_);
lean_dec_ref(v_n_3067_);
v_natZero_3073_ = lean_unsigned_to_nat(0u);
v_intZero_3074_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__3);
v_isNeg_3075_ = lean_int_dec_lt(v_mantissa_3071_, v_intZero_3074_);
if (v_isNeg_3075_ == 0)
{
uint8_t v___x_3076_; 
v___x_3076_ = lean_nat_dec_eq(v_exponent_3072_, v_natZero_3073_);
lean_dec(v_exponent_3072_);
if (v___x_3076_ == 0)
{
lean_dec(v_mantissa_3071_);
lean_del_object(v___x_3069_);
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
goto v___jp_2987_;
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; 
v_a_3077_ = lean_nat_abs(v_mantissa_3071_);
lean_dec(v_mantissa_3071_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 0, v_a_3077_);
v___x_3079_ = v___x_3069_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3077_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
v_a_3001_ = v___x_3079_;
goto v___jp_3000_;
}
}
}
else
{
lean_dec(v_exponent_3072_);
lean_dec(v_mantissa_3071_);
lean_del_object(v___x_3069_);
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
goto v___jp_2987_;
}
}
}
default: 
{
lean_dec(v_a_2996_);
lean_dec(v_r_2994_);
lean_dec(v_v_2992_);
goto v___jp_2987_;
}
}
}
v___jp_3000_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_3002_ = lean_obj_once(&l_Lean_instInhabitedImport_default___closed__0, &l_Lean_instInhabitedImport_default___closed__0_once, _init_l_Lean_instInhabitedImport_default___closed__0);
v___x_3003_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_3002_, v_a_3001_, v_a_2996_);
v_init_2985_ = v___x_3003_;
v_x_2986_ = v_r_2994_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_3083_; 
v___x_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3083_, 0, v_init_2985_);
return v___x_3083_;
}
v___jp_2987_:
{
lean_object* v___x_2988_; 
v___x_2988_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__1));
return v___x_2988_;
}
v___jp_2989_:
{
lean_object* v___x_2990_; 
v___x_2990_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__1));
return v___x_2990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8(lean_object* v_x_3085_){
_start:
{
if (lean_obj_tag(v_x_3085_) == 5)
{
lean_object* v_kvPairs_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v_kvPairs_3086_ = lean_ctor_get(v_x_3085_, 0);
lean_inc(v_kvPairs_3086_);
lean_dec_ref_known(v_x_3085_, 1);
v___x_3087_ = lean_box(1);
v___x_3088_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13(v___x_3087_, v_kvPairs_3086_);
return v___x_3088_;
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3089_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8___closed__0));
v___x_3090_ = lean_unsigned_to_nat(80u);
v___x_3091_ = l_Lean_Json_pretty(v_x_3085_, v___x_3090_);
v___x_3092_ = lean_string_append(v___x_3089_, v___x_3091_);
lean_dec_ref(v___x_3091_);
v___x_3093_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3094_ = lean_string_append(v___x_3092_, v___x_3093_);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4(lean_object* v_j_3096_, lean_object* v_k_3097_){
_start:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3098_ = l_Lean_Json_getObjValD(v_j_3096_, v_k_3097_);
v___x_3099_ = l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8(v___x_3098_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3099_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3099_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
v_a_3108_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3099_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3099_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4___boxed(lean_object* v_j_3116_, lean_object* v_k_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4(v_j_3116_, v_k_3117_);
lean_dec_ref(v_k_3117_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6_spec__10(size_t v_sz_3119_, size_t v_i_3120_, lean_object* v_bs_3121_){
_start:
{
uint8_t v___x_3122_; 
v___x_3122_ = lean_usize_dec_lt(v_i_3120_, v_sz_3119_);
if (v___x_3122_ == 0)
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = l_unsafeCast___redArg(v_bs_3121_);
lean_dec_ref(v_bs_3121_);
v___x_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
return v___x_3124_;
}
else
{
lean_object* v_v_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_v_3125_ = lean_array_uget_borrowed(v_bs_3121_, v_i_3120_);
v___x_3126_ = l_unsafeCast___redArg(v_v_3125_);
v___x_3127_ = l_Lean_Plugin_fromJson_x3f(v___x_3126_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_dec_ref(v_bs_3121_);
v_a_3128_ = lean_ctor_get(v___x_3127_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3127_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3127_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3137_; lean_object* v_bs_x27_3138_; size_t v___x_3139_; size_t v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v_a_3136_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3127_, 1);
v___x_3137_ = lean_unsigned_to_nat(0u);
v_bs_x27_3138_ = lean_array_uset(v_bs_3121_, v_i_3120_, v___x_3137_);
v___x_3139_ = ((size_t)1ULL);
v___x_3140_ = lean_usize_add(v_i_3120_, v___x_3139_);
v___x_3141_ = l_unsafeCast___redArg(v_a_3136_);
lean_dec(v_a_3136_);
v___x_3142_ = lean_array_uset(v_bs_x27_3138_, v_i_3120_, v___x_3141_);
v_i_3120_ = v___x_3140_;
v_bs_3121_ = v___x_3142_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6_spec__10___boxed(lean_object* v_sz_3144_, lean_object* v_i_3145_, lean_object* v_bs_3146_){
_start:
{
size_t v_sz_boxed_3147_; size_t v_i_boxed_3148_; lean_object* v_res_3149_; 
v_sz_boxed_3147_ = lean_unbox_usize(v_sz_3144_);
lean_dec(v_sz_3144_);
v_i_boxed_3148_ = lean_unbox_usize(v_i_3145_);
lean_dec(v_i_3145_);
v_res_3149_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6_spec__10(v_sz_boxed_3147_, v_i_boxed_3148_, v_bs_3146_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6(lean_object* v_x_3150_){
_start:
{
if (lean_obj_tag(v_x_3150_) == 4)
{
lean_object* v_elems_3151_; size_t v_sz_3152_; size_t v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v_elems_3151_ = lean_ctor_get(v_x_3150_, 0);
lean_inc_ref(v_elems_3151_);
lean_dec_ref_known(v_x_3150_, 1);
v_sz_3152_ = lean_array_size(v_elems_3151_);
v___x_3153_ = ((size_t)0ULL);
v___x_3154_ = l_unsafeCast___redArg(v_elems_3151_);
lean_dec_ref(v_elems_3151_);
v___x_3155_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6_spec__10(v_sz_3152_, v___x_3153_, v___x_3154_);
v___x_3156_ = l_unsafeCast___redArg(v___x_3155_);
lean_dec_ref(v___x_3155_);
return v___x_3156_;
}
else
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3157_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0));
v___x_3158_ = lean_unsigned_to_nat(80u);
v___x_3159_ = l_Lean_Json_pretty(v_x_3150_, v___x_3158_);
v___x_3160_ = lean_string_append(v___x_3157_, v___x_3159_);
lean_dec_ref(v___x_3159_);
v___x_3161_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3162_ = lean_string_append(v___x_3160_, v___x_3161_);
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
return v___x_3163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3(lean_object* v_j_3164_, lean_object* v_k_3165_){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = l_Lean_Json_getObjValD(v_j_3164_, v_k_3165_);
v___x_3167_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3_spec__6(v___x_3166_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3___boxed(lean_object* v_j_3168_, lean_object* v_k_3169_){
_start:
{
lean_object* v_res_3170_; 
v_res_3170_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3(v_j_3168_, v_k_3169_);
lean_dec_ref(v_k_3169_);
return v_res_3170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0(lean_object* v_x_3173_){
_start:
{
if (lean_obj_tag(v_x_3173_) == 0)
{
lean_object* v___x_3174_; 
v___x_3174_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0___closed__0));
return v___x_3174_;
}
else
{
lean_object* v___x_3175_; 
v___x_3175_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0(v_x_3173_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
v_a_3176_ = lean_ctor_get(v___x_3175_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___x_3175_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_dec(v___x_3175_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
else
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3192_; 
v_a_3184_ = lean_ctor_get(v___x_3175_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3186_ = v___x_3175_;
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3175_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3188_; lean_object* v___x_3190_; 
v___x_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3188_, 0, v_a_3184_);
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v___x_3188_);
v___x_3190_ = v___x_3186_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v___x_3188_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0(lean_object* v_j_3193_, lean_object* v_k_3194_){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3195_ = l_Lean_Json_getObjValD(v_j_3193_, v_k_3194_);
v___x_3196_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0_spec__0(v___x_3195_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0___boxed(lean_object* v_j_3197_, lean_object* v_k_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0(v_j_3197_, v_k_3198_);
lean_dec_ref(v_k_3198_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4_spec__7(size_t v_sz_3200_, size_t v_i_3201_, lean_object* v_bs_3202_){
_start:
{
uint8_t v___x_3203_; 
v___x_3203_ = lean_usize_dec_lt(v_i_3201_, v_sz_3200_);
if (v___x_3203_ == 0)
{
lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3204_ = l_unsafeCast___redArg(v_bs_3202_);
lean_dec_ref(v_bs_3202_);
v___x_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3204_);
return v___x_3205_;
}
else
{
lean_object* v_v_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v_v_3206_ = lean_array_uget_borrowed(v_bs_3202_, v_i_3201_);
v___x_3207_ = l_unsafeCast___redArg(v_v_3206_);
v___x_3208_ = l_Lean_Json_getStr_x3f(v___x_3207_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec_ref(v_bs_3202_);
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3208_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3208_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3218_; lean_object* v_bs_x27_3219_; size_t v___x_3220_; size_t v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v_a_3217_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3208_, 1);
v___x_3218_ = lean_unsigned_to_nat(0u);
v_bs_x27_3219_ = lean_array_uset(v_bs_3202_, v_i_3201_, v___x_3218_);
v___x_3220_ = ((size_t)1ULL);
v___x_3221_ = lean_usize_add(v_i_3201_, v___x_3220_);
v___x_3222_ = l_unsafeCast___redArg(v_a_3217_);
lean_dec(v_a_3217_);
v___x_3223_ = lean_array_uset(v_bs_x27_3219_, v_i_3201_, v___x_3222_);
v_i_3201_ = v___x_3221_;
v_bs_3202_ = v___x_3223_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4_spec__7___boxed(lean_object* v_sz_3225_, lean_object* v_i_3226_, lean_object* v_bs_3227_){
_start:
{
size_t v_sz_boxed_3228_; size_t v_i_boxed_3229_; lean_object* v_res_3230_; 
v_sz_boxed_3228_ = lean_unbox_usize(v_sz_3225_);
lean_dec(v_sz_3225_);
v_i_boxed_3229_ = lean_unbox_usize(v_i_3226_);
lean_dec(v_i_3226_);
v_res_3230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4_spec__7(v_sz_boxed_3228_, v_i_boxed_3229_, v_bs_3227_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4(lean_object* v_x_3231_){
_start:
{
if (lean_obj_tag(v_x_3231_) == 4)
{
lean_object* v_elems_3232_; size_t v_sz_3233_; size_t v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v_elems_3232_ = lean_ctor_get(v_x_3231_, 0);
lean_inc_ref(v_elems_3232_);
lean_dec_ref_known(v_x_3231_, 1);
v_sz_3233_ = lean_array_size(v_elems_3232_);
v___x_3234_ = ((size_t)0ULL);
v___x_3235_ = l_unsafeCast___redArg(v_elems_3232_);
lean_dec_ref(v_elems_3232_);
v___x_3236_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4_spec__7(v_sz_3233_, v___x_3234_, v___x_3235_);
v___x_3237_ = l_unsafeCast___redArg(v___x_3236_);
lean_dec_ref(v___x_3236_);
return v___x_3237_;
}
else
{
lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3238_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0));
v___x_3239_ = lean_unsigned_to_nat(80u);
v___x_3240_ = l_Lean_Json_pretty(v_x_3231_, v___x_3239_);
v___x_3241_ = lean_string_append(v___x_3238_, v___x_3240_);
lean_dec_ref(v___x_3240_);
v___x_3242_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3243_ = lean_string_append(v___x_3241_, v___x_3242_);
v___x_3244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3244_, 0, v___x_3243_);
return v___x_3244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3_spec__7(size_t v_sz_3245_, size_t v_i_3246_, lean_object* v_bs_3247_){
_start:
{
uint8_t v___x_3248_; 
v___x_3248_ = lean_usize_dec_lt(v_i_3246_, v_sz_3245_);
if (v___x_3248_ == 0)
{
lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3249_ = l_unsafeCast___redArg(v_bs_3247_);
lean_dec_ref(v_bs_3247_);
v___x_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3249_);
return v___x_3250_;
}
else
{
lean_object* v_v_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v_v_3251_ = lean_array_uget_borrowed(v_bs_3247_, v_i_3246_);
v___x_3252_ = l_unsafeCast___redArg(v_v_3251_);
v___x_3253_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4(v___x_3252_);
if (lean_obj_tag(v___x_3253_) == 0)
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_dec_ref(v_bs_3247_);
v_a_3254_ = lean_ctor_get(v___x_3253_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3253_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3253_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3253_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3263_; lean_object* v_bs_x27_3264_; size_t v___x_3265_; size_t v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v_a_3262_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3253_, 1);
v___x_3263_ = lean_unsigned_to_nat(0u);
v_bs_x27_3264_ = lean_array_uset(v_bs_3247_, v_i_3246_, v___x_3263_);
v___x_3265_ = ((size_t)1ULL);
v___x_3266_ = lean_usize_add(v_i_3246_, v___x_3265_);
v___x_3267_ = l_unsafeCast___redArg(v_a_3262_);
lean_dec(v_a_3262_);
v___x_3268_ = lean_array_uset(v_bs_x27_3264_, v_i_3246_, v___x_3267_);
v_i_3246_ = v___x_3266_;
v_bs_3247_ = v___x_3268_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3_spec__7___boxed(lean_object* v_sz_3270_, lean_object* v_i_3271_, lean_object* v_bs_3272_){
_start:
{
size_t v_sz_boxed_3273_; size_t v_i_boxed_3274_; lean_object* v_res_3275_; 
v_sz_boxed_3273_ = lean_unbox_usize(v_sz_3270_);
lean_dec(v_sz_3270_);
v_i_boxed_3274_ = lean_unbox_usize(v_i_3271_);
lean_dec(v_i_3271_);
v_res_3275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3_spec__7(v_sz_boxed_3273_, v_i_boxed_3274_, v_bs_3272_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3(lean_object* v_x_3276_){
_start:
{
if (lean_obj_tag(v_x_3276_) == 4)
{
lean_object* v_elems_3277_; size_t v_sz_3278_; size_t v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_elems_3277_ = lean_ctor_get(v_x_3276_, 0);
lean_inc_ref(v_elems_3277_);
lean_dec_ref_known(v_x_3276_, 1);
v_sz_3278_ = lean_array_size(v_elems_3277_);
v___x_3279_ = ((size_t)0ULL);
v___x_3280_ = l_unsafeCast___redArg(v_elems_3277_);
lean_dec_ref(v_elems_3277_);
v___x_3281_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3_spec__7(v_sz_3278_, v___x_3279_, v___x_3280_);
v___x_3282_ = l_unsafeCast___redArg(v___x_3281_);
lean_dec_ref(v___x_3281_);
return v___x_3282_;
}
else
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3283_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__0));
v___x_3284_ = lean_unsigned_to_nat(80u);
v___x_3285_ = l_Lean_Json_pretty(v_x_3276_, v___x_3284_);
v___x_3286_ = lean_string_append(v___x_3283_, v___x_3285_);
lean_dec_ref(v___x_3285_);
v___x_3287_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3288_ = lean_string_append(v___x_3286_, v___x_3287_);
v___x_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
return v___x_3289_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__4(lean_object* v_init_3290_, lean_object* v_x_3291_){
_start:
{
if (lean_obj_tag(v_x_3291_) == 0)
{
lean_object* v_k_3292_; lean_object* v_v_3293_; lean_object* v_l_3294_; lean_object* v_r_3295_; lean_object* v___x_3296_; 
v_k_3292_ = lean_ctor_get(v_x_3291_, 1);
lean_inc(v_k_3292_);
v_v_3293_ = lean_ctor_get(v_x_3291_, 2);
lean_inc(v_v_3293_);
v_l_3294_ = lean_ctor_get(v_x_3291_, 3);
lean_inc(v_l_3294_);
v_r_3295_ = lean_ctor_get(v_x_3291_, 4);
lean_inc(v_r_3295_);
lean_dec_ref_known(v_x_3291_, 5);
v___x_3296_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__4(v_init_3290_, v_l_3294_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_dec(v_r_3295_);
lean_dec(v_v_3293_);
lean_dec(v_k_3292_);
return v___x_3296_;
}
else
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3337_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3299_ = v___x_3296_;
v_isShared_3300_ = v_isSharedCheck_3337_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3296_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3337_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3301_; uint8_t v___x_3302_; 
v___x_3301_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__2));
v___x_3302_ = lean_string_dec_eq(v_k_3292_, v___x_3301_);
if (v___x_3302_ == 0)
{
lean_object* v_n_3303_; uint8_t v___x_3304_; 
lean_inc(v_k_3292_);
v_n_3303_ = l_String_toName(v_k_3292_);
v___x_3304_ = l_Lean_Name_isAnonymous(v_n_3303_);
if (v___x_3304_ == 0)
{
lean_object* v___x_3305_; 
lean_del_object(v___x_3299_);
lean_dec(v_k_3292_);
v___x_3305_ = l_Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3(v_v_3293_);
if (lean_obj_tag(v___x_3305_) == 0)
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
lean_dec(v_n_3303_);
lean_dec(v_a_3297_);
lean_dec(v_r_3295_);
v_a_3306_ = lean_ctor_get(v___x_3305_, 0);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3305_);
if (v_isSharedCheck_3313_ == 0)
{
v___x_3308_ = v___x_3305_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v___x_3305_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_a_3306_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
else
{
lean_object* v_a_3314_; lean_object* v___x_3315_; 
v_a_3314_ = lean_ctor_get(v___x_3305_, 0);
lean_inc(v_a_3314_);
lean_dec_ref_known(v___x_3305_, 1);
v___x_3315_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_3303_, v_a_3314_, v_a_3297_);
v_init_3290_ = v___x_3315_;
v_x_3291_ = v_r_3295_;
goto _start;
}
}
else
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3322_; 
lean_dec(v_n_3303_);
lean_dec(v_a_3297_);
lean_dec(v_r_3295_);
lean_dec(v_v_3293_);
v___x_3317_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8_spec__13___closed__4));
v___x_3318_ = lean_string_append(v___x_3317_, v_k_3292_);
lean_dec(v_k_3292_);
v___x_3319_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3320_ = lean_string_append(v___x_3318_, v___x_3319_);
if (v_isShared_3300_ == 0)
{
lean_ctor_set_tag(v___x_3299_, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3320_);
v___x_3322_ = v___x_3299_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
else
{
lean_object* v___x_3324_; 
lean_del_object(v___x_3299_);
lean_dec(v_k_3292_);
v___x_3324_ = l_Lean_Array_fromJson_x3f___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__3(v_v_3293_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
lean_dec(v_a_3297_);
lean_dec(v_r_3295_);
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3324_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3324_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v_a_3333_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_a_3333_);
lean_dec_ref_known(v___x_3324_, 1);
v___x_3334_ = lean_obj_once(&l_Lean_instInhabitedImport_default___closed__0, &l_Lean_instInhabitedImport_default___closed__0_once, _init_l_Lean_instInhabitedImport_default___closed__0);
v___x_3335_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_3334_, v_a_3333_, v_a_3297_);
v_init_3290_ = v___x_3335_;
v_x_3291_ = v_r_3295_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3338_, 0, v_init_3290_);
return v___x_3338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2(lean_object* v_x_3339_){
_start:
{
if (lean_obj_tag(v_x_3339_) == 5)
{
lean_object* v_kvPairs_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v_kvPairs_3340_ = lean_ctor_get(v_x_3339_, 0);
lean_inc(v_kvPairs_3340_);
lean_dec_ref_known(v_x_3339_, 1);
v___x_3341_ = lean_box(1);
v___x_3342_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2_spec__4(v___x_3341_, v_kvPairs_3340_);
return v___x_3342_;
}
else
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3343_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4_spec__8___closed__0));
v___x_3344_ = lean_unsigned_to_nat(80u);
v___x_3345_ = l_Lean_Json_pretty(v_x_3339_, v___x_3344_);
v___x_3346_ = lean_string_append(v___x_3343_, v___x_3345_);
lean_dec_ref(v___x_3345_);
v___x_3347_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleHeader_fromJson_spec__0_spec__0___closed__1));
v___x_3348_ = lean_string_append(v___x_3346_, v___x_3347_);
v___x_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
return v___x_3349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1(lean_object* v_j_3350_, lean_object* v_k_3351_){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = l_Lean_Json_getObjValD(v_j_3350_, v_k_3351_);
v___x_3353_ = l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1_spec__2(v___x_3352_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1___boxed(lean_object* v_j_3354_, lean_object* v_k_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1(v_j_3354_, v_k_3355_);
lean_dec_ref(v_k_3355_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2(lean_object* v_j_3357_, lean_object* v_k_3358_){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = l_Lean_Json_getObjValD(v_j_3357_, v_k_3358_);
v___x_3360_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2_spec__4(v___x_3359_);
return v___x_3360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2___boxed(lean_object* v_j_3361_, lean_object* v_k_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2(v_j_3361_, v_k_3362_);
lean_dec_ref(v_k_3362_);
return v_res_3363_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3368_ = 1;
v___x_3369_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__1));
v___x_3370_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3369_, v___x_3368_);
return v___x_3370_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3371_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__4));
v___x_3372_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__2, &l_Lean_instFromJsonModuleSetup_fromJson___closed__2_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__2);
v___x_3373_ = lean_string_append(v___x_3372_, v___x_3371_);
return v___x_3373_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__5(void){
_start:
{
uint8_t v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3376_ = 1;
v___x_3377_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__4));
v___x_3378_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3377_, v___x_3376_);
return v___x_3378_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__6(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3379_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__5, &l_Lean_instFromJsonModuleSetup_fromJson___closed__5_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__5);
v___x_3380_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3381_ = lean_string_append(v___x_3380_, v___x_3379_);
return v___x_3381_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3383_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__6, &l_Lean_instFromJsonModuleSetup_fromJson___closed__6_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__6);
v___x_3384_ = lean_string_append(v___x_3383_, v___x_3382_);
return v___x_3384_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__9(void){
_start:
{
uint8_t v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3387_ = 1;
v___x_3388_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__8));
v___x_3389_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3388_, v___x_3387_);
return v___x_3389_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__10(void){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3390_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__9, &l_Lean_instFromJsonModuleSetup_fromJson___closed__9_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__9);
v___x_3391_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3392_ = lean_string_append(v___x_3391_, v___x_3390_);
return v___x_3392_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__11(void){
_start:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3393_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3394_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__10, &l_Lean_instFromJsonModuleSetup_fromJson___closed__10_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__10);
v___x_3395_ = lean_string_append(v___x_3394_, v___x_3393_);
return v___x_3395_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___x_3396_ = lean_obj_once(&l_Lean_instFromJsonModuleHeader_fromJson___closed__9, &l_Lean_instFromJsonModuleHeader_fromJson___closed__9_once, _init_l_Lean_instFromJsonModuleHeader_fromJson___closed__9);
v___x_3397_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3398_ = lean_string_append(v___x_3397_, v___x_3396_);
return v___x_3398_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3399_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3400_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__12, &l_Lean_instFromJsonModuleSetup_fromJson___closed__12_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__12);
v___x_3401_ = lean_string_append(v___x_3400_, v___x_3399_);
return v___x_3401_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__15(void){
_start:
{
uint8_t v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3404_ = 1;
v___x_3405_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__14));
v___x_3406_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3405_, v___x_3404_);
return v___x_3406_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__16(void){
_start:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3407_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__15, &l_Lean_instFromJsonModuleSetup_fromJson___closed__15_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__15);
v___x_3408_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3409_ = lean_string_append(v___x_3408_, v___x_3407_);
return v___x_3409_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3410_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3411_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__16, &l_Lean_instFromJsonModuleSetup_fromJson___closed__16_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__16);
v___x_3412_ = lean_string_append(v___x_3411_, v___x_3410_);
return v___x_3412_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__19(void){
_start:
{
uint8_t v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3415_ = 1;
v___x_3416_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__18));
v___x_3417_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3416_, v___x_3415_);
return v___x_3417_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__20(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3418_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__19, &l_Lean_instFromJsonModuleSetup_fromJson___closed__19_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__19);
v___x_3419_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3420_ = lean_string_append(v___x_3419_, v___x_3418_);
return v___x_3420_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__21(void){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3422_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__20, &l_Lean_instFromJsonModuleSetup_fromJson___closed__20_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__20);
v___x_3423_ = lean_string_append(v___x_3422_, v___x_3421_);
return v___x_3423_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__23(void){
_start:
{
uint8_t v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3426_ = 1;
v___x_3427_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__22));
v___x_3428_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3427_, v___x_3426_);
return v___x_3428_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__24(void){
_start:
{
lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3429_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__23, &l_Lean_instFromJsonModuleSetup_fromJson___closed__23_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__23);
v___x_3430_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3431_ = lean_string_append(v___x_3430_, v___x_3429_);
return v___x_3431_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__25(void){
_start:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; 
v___x_3432_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3433_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__24, &l_Lean_instFromJsonModuleSetup_fromJson___closed__24_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__24);
v___x_3434_ = lean_string_append(v___x_3433_, v___x_3432_);
return v___x_3434_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__27(void){
_start:
{
uint8_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3437_ = 1;
v___x_3438_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__26));
v___x_3439_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3438_, v___x_3437_);
return v___x_3439_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__28(void){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3440_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__27, &l_Lean_instFromJsonModuleSetup_fromJson___closed__27_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__27);
v___x_3441_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3442_ = lean_string_append(v___x_3441_, v___x_3440_);
return v___x_3442_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__29(void){
_start:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3444_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__28, &l_Lean_instFromJsonModuleSetup_fromJson___closed__28_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__28);
v___x_3445_ = lean_string_append(v___x_3444_, v___x_3443_);
return v___x_3445_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__31(void){
_start:
{
uint8_t v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3448_ = 1;
v___x_3449_ = ((lean_object*)(l_Lean_instFromJsonModuleSetup_fromJson___closed__30));
v___x_3450_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3449_, v___x_3448_);
return v___x_3450_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__32(void){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3451_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__31, &l_Lean_instFromJsonModuleSetup_fromJson___closed__31_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__31);
v___x_3452_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__3, &l_Lean_instFromJsonModuleSetup_fromJson___closed__3_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__3);
v___x_3453_ = lean_string_append(v___x_3452_, v___x_3451_);
return v___x_3453_;
}
}
static lean_object* _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__33(void){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3455_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__32, &l_Lean_instFromJsonModuleSetup_fromJson___closed__32_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__32);
v___x_3456_ = lean_string_append(v___x_3455_, v___x_3454_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonModuleSetup_fromJson(lean_object* v_json_3457_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___x_3458_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__0));
lean_inc(v_json_3457_);
v___x_3459_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__0(v_json_3457_, v___x_3458_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3469_; 
lean_dec(v_json_3457_);
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3469_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3469_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3467_; 
v___x_3464_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__7, &l_Lean_instFromJsonModuleSetup_fromJson___closed__7_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__7);
v___x_3465_ = lean_string_append(v___x_3464_, v_a_3460_);
lean_dec(v_a_3460_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3465_);
v___x_3467_ = v___x_3462_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3465_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
else
{
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec(v_json_3457_);
v_a_3470_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3459_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3459_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
lean_ctor_set_tag(v___x_3472_, 0);
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v_a_3478_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3459_, 1);
v___x_3479_ = ((lean_object*)(l_Lean_instToJsonModuleSetup_toJson___closed__0));
lean_inc(v_json_3457_);
v___x_3480_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Plugin_fromJson_x3f_spec__1(v_json_3457_, v___x_3479_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3490_; 
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3483_ = v___x_3480_;
v_isShared_3484_ = v_isSharedCheck_3490_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3480_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3490_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v___x_3485_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__11, &l_Lean_instFromJsonModuleSetup_fromJson___closed__11_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__11);
v___x_3486_ = lean_string_append(v___x_3485_, v_a_3481_);
lean_dec(v_a_3481_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v___x_3486_);
v___x_3488_ = v___x_3483_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
else
{
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3491_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3480_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3480_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set_tag(v___x_3493_, 0);
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v_a_3499_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3480_, 1);
v___x_3500_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__5));
lean_inc(v_json_3457_);
v___x_3501_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonImport_fromJson_spec__1(v_json_3457_, v___x_3500_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3511_; 
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3504_ = v___x_3501_;
v_isShared_3505_ = v_isSharedCheck_3511_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3511_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3509_; 
v___x_3506_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__13, &l_Lean_instFromJsonModuleSetup_fromJson___closed__13_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__13);
v___x_3507_ = lean_string_append(v___x_3506_, v_a_3502_);
lean_dec(v_a_3502_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3507_);
v___x_3509_ = v___x_3504_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
else
{
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3519_; 
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3512_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3514_ = v___x_3501_;
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3501_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3517_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set_tag(v___x_3514_, 0);
v___x_3517_ = v___x_3514_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_a_3512_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v_a_3520_ = lean_ctor_get(v___x_3501_, 0);
lean_inc(v_a_3520_);
lean_dec_ref_known(v___x_3501_, 1);
v___x_3521_ = ((lean_object*)(l_Lean_instReprModuleHeader_repr___redArg___closed__0));
lean_inc(v_json_3457_);
v___x_3522_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__0(v_json_3457_, v___x_3521_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3532_; 
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3525_ = v___x_3522_;
v_isShared_3526_ = v_isSharedCheck_3532_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3522_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3532_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3527_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__17, &l_Lean_instFromJsonModuleSetup_fromJson___closed__17_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__17);
v___x_3528_ = lean_string_append(v___x_3527_, v_a_3523_);
lean_dec(v_a_3523_);
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3528_);
v___x_3530_ = v___x_3525_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
else
{
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3540_; 
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3533_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3535_ = v___x_3522_;
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3522_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
if (v_isShared_3536_ == 0)
{
lean_ctor_set_tag(v___x_3535_, 0);
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3533_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v_a_3541_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3541_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3542_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__8));
lean_inc(v_json_3457_);
v___x_3543_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__1(v_json_3457_, v___x_3542_);
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v_a_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3553_; 
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3544_ = lean_ctor_get(v___x_3543_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3543_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3546_ = v___x_3543_;
v_isShared_3547_ = v_isSharedCheck_3553_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_a_3544_);
lean_dec(v___x_3543_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3553_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3551_; 
v___x_3548_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__21, &l_Lean_instFromJsonModuleSetup_fromJson___closed__21_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__21);
v___x_3549_ = lean_string_append(v___x_3548_, v_a_3544_);
lean_dec(v_a_3544_);
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 0, v___x_3549_);
v___x_3551_ = v___x_3546_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3549_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
else
{
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3554_ = lean_ctor_get(v___x_3543_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3543_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3543_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3543_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
lean_ctor_set_tag(v___x_3556_, 0);
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v_a_3562_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3562_);
lean_dec_ref_known(v___x_3543_, 1);
v___x_3563_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__12));
lean_inc(v_json_3457_);
v___x_3564_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__2(v_json_3457_, v___x_3563_);
if (lean_obj_tag(v___x_3564_) == 0)
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3574_; 
lean_dec(v_a_3562_);
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3565_ = lean_ctor_get(v___x_3564_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3564_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3567_ = v___x_3564_;
v_isShared_3568_ = v_isSharedCheck_3574_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3564_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3574_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3572_; 
v___x_3569_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__25, &l_Lean_instFromJsonModuleSetup_fromJson___closed__25_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__25);
v___x_3570_ = lean_string_append(v___x_3569_, v_a_3565_);
lean_dec(v_a_3565_);
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 0, v___x_3570_);
v___x_3572_ = v___x_3567_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3570_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
else
{
if (lean_obj_tag(v___x_3564_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_dec(v_a_3562_);
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3575_ = lean_ctor_get(v___x_3564_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3564_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3564_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3564_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
lean_ctor_set_tag(v___x_3577_, 0);
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v_a_3583_ = lean_ctor_get(v___x_3564_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3564_, 1);
v___x_3584_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__14));
lean_inc(v_json_3457_);
v___x_3585_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__3(v_json_3457_, v___x_3584_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3595_; 
lean_dec(v_a_3583_);
lean_dec(v_a_3562_);
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3588_ = v___x_3585_;
v_isShared_3589_ = v_isSharedCheck_3595_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3585_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3595_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3590_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__29, &l_Lean_instFromJsonModuleSetup_fromJson___closed__29_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__29);
v___x_3591_ = lean_string_append(v___x_3590_, v_a_3586_);
lean_dec(v_a_3586_);
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v___x_3591_);
v___x_3593_ = v___x_3588_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3591_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
else
{
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
lean_dec(v_a_3583_);
lean_dec(v_a_3562_);
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
lean_dec(v_json_3457_);
v_a_3596_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3585_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3585_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
lean_ctor_set_tag(v___x_3598_, 0);
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v_a_3604_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3585_, 1);
v___x_3605_ = ((lean_object*)(l_Lean_instReprModuleSetup_repr___redArg___closed__16));
v___x_3606_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonModuleSetup_fromJson_spec__4(v_json_3457_, v___x_3605_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3616_; 
lean_dec(v_a_3604_);
lean_dec(v_a_3583_);
lean_dec(v_a_3562_);
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3609_ = v___x_3606_;
v_isShared_3610_ = v_isSharedCheck_3616_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3616_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3611_ = lean_obj_once(&l_Lean_instFromJsonModuleSetup_fromJson___closed__33, &l_Lean_instFromJsonModuleSetup_fromJson___closed__33_once, _init_l_Lean_instFromJsonModuleSetup_fromJson___closed__33);
v___x_3612_ = lean_string_append(v___x_3611_, v_a_3607_);
lean_dec(v_a_3607_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v___x_3612_);
v___x_3614_ = v___x_3609_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v___x_3612_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
}
else
{
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3624_; 
lean_dec(v_a_3604_);
lean_dec(v_a_3583_);
lean_dec(v_a_3562_);
lean_dec(v_a_3541_);
lean_dec(v_a_3520_);
lean_dec(v_a_3499_);
lean_dec(v_a_3478_);
v_a_3617_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3619_ = v___x_3606_;
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_dec(v___x_3606_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
lean_ctor_set_tag(v___x_3619_, 0);
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3634_; 
v_a_3625_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3627_ = v___x_3606_;
v_isShared_3628_ = v_isSharedCheck_3634_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3606_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3634_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3629_; uint8_t v___x_3630_; lean_object* v___x_3632_; 
v___x_3629_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3629_, 0, v_a_3478_);
lean_ctor_set(v___x_3629_, 1, v_a_3499_);
lean_ctor_set(v___x_3629_, 2, v_a_3541_);
lean_ctor_set(v___x_3629_, 3, v_a_3562_);
lean_ctor_set(v___x_3629_, 4, v_a_3583_);
lean_ctor_set(v___x_3629_, 5, v_a_3604_);
lean_ctor_set(v___x_3629_, 6, v_a_3625_);
v___x_3630_ = lean_unbox(v_a_3520_);
lean_dec(v_a_3520_);
lean_ctor_set_uint8(v___x_3629_, sizeof(void*)*7, v___x_3630_);
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 0, v___x_3629_);
v___x_3632_ = v___x_3627_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3629_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
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
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleSetup_load(lean_object* v_path_3638_){
_start:
{
lean_object* v___x_3640_; 
v___x_3640_ = l_IO_FS_readFile(v_path_3638_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3669_; 
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3643_ = v___x_3640_;
v_isShared_3644_ = v_isSharedCheck_3669_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3640_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3669_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v_a_3646_; lean_object* v___x_3656_; 
v___x_3656_ = l_Lean_Json_parse(v_a_3641_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v_a_3657_; 
v_a_3657_ = lean_ctor_get(v___x_3656_, 0);
lean_inc(v_a_3657_);
lean_dec_ref_known(v___x_3656_, 1);
v_a_3646_ = v_a_3657_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3658_; lean_object* v___x_3659_; 
v_a_3658_ = lean_ctor_get(v___x_3656_, 0);
lean_inc(v_a_3658_);
lean_dec_ref_known(v___x_3656_, 1);
v___x_3659_ = l_Lean_instFromJsonModuleSetup_fromJson(v_a_3658_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3659_, 1);
v_a_3646_ = v_a_3660_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
lean_del_object(v___x_3643_);
v_a_3661_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___x_3659_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___x_3659_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
lean_ctor_set_tag(v___x_3663_, 0);
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
}
v___jp_3645_:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3654_; 
v___x_3647_ = ((lean_object*)(l_Lean_ModuleSetup_load___closed__0));
v___x_3648_ = lean_string_append(v___x_3647_, v_path_3638_);
v___x_3649_ = ((lean_object*)(l_Lean_instFromJsonImport_fromJson___closed__9));
v___x_3650_ = lean_string_append(v___x_3648_, v___x_3649_);
v___x_3651_ = lean_string_append(v___x_3650_, v_a_3646_);
lean_dec_ref(v_a_3646_);
v___x_3652_ = lean_mk_io_user_error(v___x_3651_);
if (v_isShared_3644_ == 0)
{
lean_ctor_set_tag(v___x_3643_, 1);
lean_ctor_set(v___x_3643_, 0, v___x_3652_);
v___x_3654_ = v___x_3643_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3652_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
}
else
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3677_; 
v_a_3670_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3672_ = v___x_3640_;
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3640_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
if (v_isShared_3673_ == 0)
{
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_a_3670_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleSetup_load___boxed(lean_object* v_path_3678_, lean_object* v_a_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l_Lean_ModuleSetup_load(v_path_3678_);
lean_dec_ref(v_path_3678_);
return v_res_3680_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_LeanOptions(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Setup(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_LeanOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedImport_default = _init_l_Lean_instInhabitedImport_default();
lean_mark_persistent(l_Lean_instInhabitedImport_default);
l_Lean_instInhabitedImport = _init_l_Lean_instInhabitedImport();
lean_mark_persistent(l_Lean_instInhabitedImport);
l_Lean_instInhabitedIRPhases_default = _init_l_Lean_instInhabitedIRPhases_default();
l_Lean_instInhabitedIRPhases = _init_l_Lean_instInhabitedIRPhases();
l_Lean_instInhabitedModuleSetup_default = _init_l_Lean_instInhabitedModuleSetup_default();
lean_mark_persistent(l_Lean_instInhabitedModuleSetup_default);
l_Lean_instInhabitedModuleSetup = _init_l_Lean_instInhabitedModuleSetup();
lean_mark_persistent(l_Lean_instInhabitedModuleSetup);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Setup(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_Parser(uint8_t builtin);
lean_object* initialize_Lean_Util_LeanOptions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Setup(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_LeanOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Setup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Setup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Setup(builtin);
}
#ifdef __cplusplus
}
#endif

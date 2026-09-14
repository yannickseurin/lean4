// Lean compiler output
// Module: Lean.ErrorExplanation
// Imports: public import Lean.Message public import Lean.EnvExtension public import Lean.DocString.Links meta import Lean.Message
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_MessageSeverity_toString(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "summary"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__0 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__0_value;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__1 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__1_value;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ErrorExplanation"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__2 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__2_value;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Metadata"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__3 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(228, 124, 72, 60, 38, 86, 32, 253)}};
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(228, 194, 107, 149, 38, 116, 86, 230)}};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__5;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__6 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7;
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 113, 57, 223, 239, 104, 46, 80)}};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__8 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__9;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__10;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__12;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "sinceVersion"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__13 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(22, 91, 83, 204, 74, 158, 30, 114)}};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__14 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__15;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__16;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__17;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "severity"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__18 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__18_value;
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__18_value),LEAN_SCALAR_PTR_LITERAL(220, 87, 21, 107, 78, 188, 130, 35)}};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__19 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__19_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__20;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__21;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__22;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "removedVersion"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__23 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__23_value;
static const lean_string_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "removedVersion\?"};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__24 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__24_value;
static const lean_ctor_object l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__24_value),LEAN_SCALAR_PTR_LITERAL(189, 225, 119, 213, 100, 129, 15, 193)}};
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__25 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__25_value;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__26;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__27;
static lean_once_cell_t l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__28;
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson(lean_object*);
static const lean_closure_object l_Lean_ErrorExplanation_instFromJsonMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata___closed__0 = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata = (const lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_ErrorExplanation_instToJsonMetadata_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_ErrorExplanation_instToJsonMetadata_toJson_spec__1(lean_object*, lean_object*);
static const lean_array_object l_Lean_ErrorExplanation_instToJsonMetadata_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ErrorExplanation_instToJsonMetadata_toJson___closed__0 = (const lean_object*)&l_Lean_ErrorExplanation_instToJsonMetadata_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_instToJsonMetadata_toJson(lean_object*);
static const lean_closure_object l_Lean_ErrorExplanation_instToJsonMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ErrorExplanation_instToJsonMetadata_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ErrorExplanation_instToJsonMetadata___closed__0 = (const lean_object*)&l_Lean_ErrorExplanation_instToJsonMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ErrorExplanation_instToJsonMetadata = (const lean_object*)&l_Lean_ErrorExplanation_instToJsonMetadata___closed__0_value;
static const lean_string_object l_Lean_ErrorExplanation_summaryWithSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_ErrorExplanation_summaryWithSeverity___closed__0 = (const lean_object*)&l_Lean_ErrorExplanation_summaryWithSeverity___closed__0_value;
static const lean_string_object l_Lean_ErrorExplanation_summaryWithSeverity___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ") "};
static const lean_object* l_Lean_ErrorExplanation_summaryWithSeverity___closed__1 = (const lean_object*)&l_Lean_ErrorExplanation_summaryWithSeverity___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_summaryWithSeverity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_summaryWithSeverity___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__3_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "errorExplanationExt"};
static const lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__3_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__3_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__4_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__4_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__4_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__3_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(132, 33, 219, 37, 109, 235, 253, 255)}};
static const lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__4_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__4_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__5_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__4_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__5_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__5_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorExplanationExt;
static lean_once_cell_t l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationRaw_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationRaw_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getErrorExplanations___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getErrorExplanations___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getErrorExplanations___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_getErrorExplanations___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_getErrorExplanations___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getErrorExplanations___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getErrorExplanations___redArg___closed__0 = (const lean_object*)&l_Lean_getErrorExplanations___redArg___closed__0_value;
static const lean_closure_object l_Lean_getErrorExplanations___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getErrorExplanations___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getErrorExplanations___redArg___closed__1 = (const lean_object*)&l_Lean_getErrorExplanations___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationsRaw(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationsSorted___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationsSorted(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0(lean_object* v_j_1_, lean_object* v_k_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = l_Lean_Json_getObjValD(v_j_1_, v_k_2_);
v___x_4_ = l_Lean_Json_getStr_x3f(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0___boxed(lean_object* v_j_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0(v_j_5_, v_k_6_);
lean_dec_ref(v_k_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__1(lean_object* v_j_8_, lean_object* v_k_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = l_Lean_Json_getObjValD(v_j_8_, v_k_9_);
v___x_11_ = l_Lean_instFromJsonMessageSeverity_fromJson(v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__1___boxed(lean_object* v_j_12_, lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__1(v_j_12_, v_k_13_);
lean_dec_ref(v_k_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2(lean_object* v_x_17_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
lean_object* v___x_18_; 
v___x_18_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2___closed__0));
return v___x_18_;
}
else
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Json_getStr_x3f(v_x_17_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
else
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_36_; 
v_a_28_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_36_ == 0)
{
v___x_30_ = v___x_19_;
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v___x_19_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_32_, 0, v_a_28_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_32_);
v___x_34_ = v___x_30_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v___x_32_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2(lean_object* v_j_37_, lean_object* v_k_38_){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = l_Lean_Json_getObjValD(v_j_37_, v_k_38_);
v___x_40_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2_spec__2(v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2___boxed(lean_object* v_j_41_, lean_object* v_k_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2(v_j_41_, v_k_42_);
lean_dec_ref(v_k_42_);
return v_res_43_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__5(void){
_start:
{
uint8_t v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = 1;
v___x_53_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__4));
v___x_54_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__6));
v___x_57_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__5, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__5_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__5);
v___x_58_ = lean_string_append(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__9(void){
_start:
{
uint8_t v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = 1;
v___x_62_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__8));
v___x_63_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__10(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__9, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__9_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__9);
v___x_65_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7);
v___x_66_ = lean_string_append(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__12(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11));
v___x_69_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__10, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__10_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__10);
v___x_70_ = lean_string_append(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__15(void){
_start:
{
uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = 1;
v___x_75_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__14));
v___x_76_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__16(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__15, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__15_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__15);
v___x_78_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7);
v___x_79_ = lean_string_append(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__17(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11));
v___x_81_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__16, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__16_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__16);
v___x_82_ = lean_string_append(v___x_81_, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__20(void){
_start:
{
uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = 1;
v___x_87_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__19));
v___x_88_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__21(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__20, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__20_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__20);
v___x_90_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7);
v___x_91_ = lean_string_append(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__22(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11));
v___x_93_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__21, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__21_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__21);
v___x_94_ = lean_string_append(v___x_93_, v___x_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__26(void){
_start:
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = 1;
v___x_100_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__25));
v___x_101_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__27(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__26, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__26_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__26);
v___x_103_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__7);
v___x_104_ = lean_string_append(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__28(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__11));
v___x_106_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__27, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__27_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__27);
v___x_107_ = lean_string_append(v___x_106_, v___x_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson(lean_object* v_json_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__0));
lean_inc(v_json_108_);
v___x_110_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0(v_json_108_, v___x_109_);
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
v___x_115_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__12, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__12_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__12);
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
v___x_130_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__13));
lean_inc(v_json_108_);
v___x_131_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__0(v_json_108_, v___x_130_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_141_; 
lean_dec(v_a_129_);
lean_dec(v_json_108_);
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
v___x_136_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__17, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__17_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__17);
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
lean_dec(v_json_108_);
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
lean_object* v_a_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_a_150_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_131_, 1);
v___x_151_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__18));
lean_inc(v_json_108_);
v___x_152_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__1(v_json_108_, v___x_151_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_162_; 
lean_dec(v_a_150_);
lean_dec(v_a_129_);
lean_dec(v_json_108_);
v_a_153_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_162_ == 0)
{
v___x_155_ = v___x_152_;
v_isShared_156_ = v_isSharedCheck_162_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_152_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_162_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_157_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__22, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__22_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__22);
v___x_158_ = lean_string_append(v___x_157_, v_a_153_);
lean_dec(v_a_153_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v___x_158_);
v___x_160_ = v___x_155_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
else
{
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
lean_dec(v_a_150_);
lean_dec(v_a_129_);
lean_dec(v_json_108_);
v_a_163_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v___x_152_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_152_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set_tag(v___x_165_, 0);
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_a_163_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_a_171_ = lean_ctor_get(v___x_152_, 0);
lean_inc(v_a_171_);
lean_dec_ref_known(v___x_152_, 1);
v___x_172_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__23));
v___x_173_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_ErrorExplanation_instFromJsonMetadata_fromJson_spec__2(v_json_108_, v___x_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_183_; 
lean_dec(v_a_171_);
lean_dec(v_a_150_);
lean_dec(v_a_129_);
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_183_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_183_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_183_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_178_ = lean_obj_once(&l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__28, &l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__28_once, _init_l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__28);
v___x_179_ = lean_string_append(v___x_178_, v_a_174_);
lean_dec(v_a_174_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_179_);
v___x_181_ = v___x_176_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
else
{
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_a_171_);
lean_dec(v_a_150_);
lean_dec(v_a_129_);
v_a_184_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_173_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_173_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set_tag(v___x_186_, 0);
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
else
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_201_; 
v_a_192_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_201_ == 0)
{
v___x_194_ = v___x_173_;
v_isShared_195_ = v_isSharedCheck_201_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_173_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_201_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_199_; 
v___x_196_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_196_, 0, v_a_129_);
lean_ctor_set(v___x_196_, 1, v_a_150_);
lean_ctor_set(v___x_196_, 2, v_a_192_);
v___x_197_ = lean_unbox(v_a_171_);
lean_dec(v_a_171_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*3, v___x_197_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_196_);
v___x_199_ = v___x_194_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_196_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
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
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_ErrorExplanation_instToJsonMetadata_toJson_spec__0(lean_object* v_k_204_, lean_object* v_x_205_){
_start:
{
if (lean_obj_tag(v_x_205_) == 0)
{
lean_object* v___x_206_; 
lean_dec_ref(v_k_204_);
v___x_206_ = lean_box(0);
return v___x_206_;
}
else
{
lean_object* v_val_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_217_; 
v_val_207_ = lean_ctor_get(v_x_205_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v_x_205_);
if (v_isSharedCheck_217_ == 0)
{
v___x_209_ = v_x_205_;
v_isShared_210_ = v_isSharedCheck_217_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_val_207_);
lean_dec(v_x_205_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_217_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set_tag(v___x_209_, 3);
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_val_207_);
v___x_212_ = v_reuseFailAlloc_216_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v_k_204_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = lean_box(0);
v___x_215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
return v___x_215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_ErrorExplanation_instToJsonMetadata_toJson_spec__1(lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
if (lean_obj_tag(v_a_218_) == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_array_to_list(v_a_219_);
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; lean_object* v___x_223_; 
v_head_221_ = lean_ctor_get(v_a_218_, 0);
lean_inc(v_head_221_);
v_tail_222_ = lean_ctor_get(v_a_218_, 1);
lean_inc(v_tail_222_);
lean_dec_ref_known(v_a_218_, 2);
v___x_223_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_219_, v_head_221_);
v_a_218_ = v_tail_222_;
v_a_219_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_instToJsonMetadata_toJson(lean_object* v_x_227_){
_start:
{
lean_object* v_summary_228_; lean_object* v_sinceVersion_229_; uint8_t v_severity_230_; lean_object* v_removedVersion_x3f_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_summary_228_ = lean_ctor_get(v_x_227_, 0);
lean_inc_ref(v_summary_228_);
v_sinceVersion_229_ = lean_ctor_get(v_x_227_, 1);
lean_inc_ref(v_sinceVersion_229_);
v_severity_230_ = lean_ctor_get_uint8(v_x_227_, sizeof(void*)*3);
v_removedVersion_x3f_231_ = lean_ctor_get(v_x_227_, 2);
lean_inc(v_removedVersion_x3f_231_);
lean_dec_ref(v_x_227_);
v___x_232_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__0));
v___x_233_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_233_, 0, v_summary_228_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_box(0);
v___x_236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_234_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__13));
v___x_238_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_238_, 0, v_sinceVersion_229_);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___x_235_);
v___x_241_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__18));
v___x_242_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_230_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v___x_235_);
v___x_245_ = ((lean_object*)(l_Lean_ErrorExplanation_instFromJsonMetadata_fromJson___closed__23));
v___x_246_ = l_Lean_Json_opt___at___00Lean_ErrorExplanation_instToJsonMetadata_toJson_spec__0(v___x_245_, v_removedVersion_x3f_231_);
v___x_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___x_235_);
v___x_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_244_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_240_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_236_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lean_ErrorExplanation_instToJsonMetadata_toJson___closed__0));
v___x_252_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_ErrorExplanation_instToJsonMetadata_toJson_spec__1(v___x_250_, v___x_251_);
v___x_253_ = l_Lean_Json_mkObj(v___x_252_);
lean_dec(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_summaryWithSeverity(lean_object* v_explan_258_){
_start:
{
lean_object* v_metadata_259_; lean_object* v_summary_260_; uint8_t v_severity_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_metadata_259_ = lean_ctor_get(v_explan_258_, 1);
v_summary_260_ = lean_ctor_get(v_metadata_259_, 0);
v_severity_261_ = lean_ctor_get_uint8(v_metadata_259_, sizeof(void*)*3);
v___x_262_ = ((lean_object*)(l_Lean_ErrorExplanation_summaryWithSeverity___closed__0));
v___x_263_ = l_Lean_MessageSeverity_toString(v_severity_261_);
v___x_264_ = lean_string_append(v___x_262_, v___x_263_);
lean_dec_ref(v___x_263_);
v___x_265_ = ((lean_object*)(l_Lean_ErrorExplanation_summaryWithSeverity___closed__1));
v___x_266_ = lean_string_append(v___x_264_, v___x_265_);
v___x_267_ = lean_string_append(v___x_266_, v_summary_260_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_ErrorExplanation_summaryWithSeverity___boxed(lean_object* v_explan_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_ErrorExplanation_summaryWithSeverity(v_explan_268_);
lean_dec_ref(v_explan_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__0_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(lean_object* v_s_270_, lean_object* v_x_271_){
_start:
{
lean_object* v_fst_272_; lean_object* v_snd_273_; lean_object* v___x_274_; 
v_fst_272_ = lean_ctor_get(v_x_271_, 0);
lean_inc(v_fst_272_);
v_snd_273_ = lean_ctor_get(v_x_271_, 1);
lean_inc(v_snd_273_);
lean_dec_ref(v_x_271_);
v___x_274_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_272_, v_snd_273_, v_s_270_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_275_, size_t v_i_276_, size_t v_stop_277_, lean_object* v_b_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = lean_usize_dec_eq(v_i_276_, v_stop_277_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v_fst_281_; lean_object* v_snd_282_; lean_object* v___x_283_; size_t v___x_284_; size_t v___x_285_; 
v___x_280_ = lean_array_uget_borrowed(v_as_275_, v_i_276_);
v_fst_281_ = lean_ctor_get(v___x_280_, 0);
v_snd_282_ = lean_ctor_get(v___x_280_, 1);
lean_inc(v_snd_282_);
lean_inc(v_fst_281_);
v___x_283_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_281_, v_snd_282_, v_b_278_);
v___x_284_ = ((size_t)1ULL);
v___x_285_ = lean_usize_add(v_i_276_, v___x_284_);
v_i_276_ = v___x_285_;
v_b_278_ = v___x_283_;
goto _start;
}
else
{
return v_b_278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_287_, lean_object* v_i_288_, lean_object* v_stop_289_, lean_object* v_b_290_){
_start:
{
size_t v_i_boxed_291_; size_t v_stop_boxed_292_; lean_object* v_res_293_; 
v_i_boxed_291_ = lean_unbox_usize(v_i_288_);
lean_dec(v_i_288_);
v_stop_boxed_292_ = lean_unbox_usize(v_stop_289_);
lean_dec(v_stop_289_);
v_res_293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0_spec__0(v_as_287_, v_i_boxed_291_, v_stop_boxed_292_, v_b_290_);
lean_dec_ref(v_as_287_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0(lean_object* v_as_294_, size_t v_i_295_, size_t v_stop_296_, lean_object* v_b_297_){
_start:
{
uint8_t v___x_298_; 
v___x_298_ = lean_usize_dec_eq(v_i_295_, v_stop_296_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v___x_302_; size_t v___x_303_; size_t v___x_304_; lean_object* v___x_305_; 
v___x_299_ = lean_array_uget_borrowed(v_as_294_, v_i_295_);
v_fst_300_ = lean_ctor_get(v___x_299_, 0);
v_snd_301_ = lean_ctor_get(v___x_299_, 1);
lean_inc(v_snd_301_);
lean_inc(v_fst_300_);
v___x_302_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_300_, v_snd_301_, v_b_297_);
v___x_303_ = ((size_t)1ULL);
v___x_304_ = lean_usize_add(v_i_295_, v___x_303_);
v___x_305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0_spec__0(v_as_294_, v___x_304_, v_stop_296_, v___x_302_);
return v___x_305_;
}
else
{
return v_b_297_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_306_, lean_object* v_i_307_, lean_object* v_stop_308_, lean_object* v_b_309_){
_start:
{
size_t v_i_boxed_310_; size_t v_stop_boxed_311_; lean_object* v_res_312_; 
v_i_boxed_310_ = lean_unbox_usize(v_i_307_);
lean_dec(v_i_307_);
v_stop_boxed_311_ = lean_unbox_usize(v_stop_308_);
lean_dec(v_stop_308_);
v_res_312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0(v_as_306_, v_i_boxed_310_, v_stop_boxed_311_, v_b_309_);
lean_dec_ref(v_as_306_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1(lean_object* v_as_313_, size_t v_i_314_, size_t v_stop_315_, lean_object* v_b_316_){
_start:
{
lean_object* v___y_318_; uint8_t v___x_322_; 
v___x_322_ = lean_usize_dec_eq(v_i_314_, v_stop_315_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_323_ = lean_array_uget_borrowed(v_as_313_, v_i_314_);
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_array_get_size(v___x_323_);
v___x_326_ = lean_nat_dec_lt(v___x_324_, v___x_325_);
if (v___x_326_ == 0)
{
v___y_318_ = v_b_316_;
goto v___jp_317_;
}
else
{
uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_le(v___x_325_, v___x_325_);
if (v___x_327_ == 0)
{
if (v___x_326_ == 0)
{
v___y_318_ = v_b_316_;
goto v___jp_317_;
}
else
{
size_t v___x_328_; size_t v___x_329_; lean_object* v___x_330_; 
v___x_328_ = ((size_t)0ULL);
v___x_329_ = lean_usize_of_nat(v___x_325_);
v___x_330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0(v___x_323_, v___x_328_, v___x_329_, v_b_316_);
v___y_318_ = v___x_330_;
goto v___jp_317_;
}
}
else
{
size_t v___x_331_; size_t v___x_332_; lean_object* v___x_333_; 
v___x_331_ = ((size_t)0ULL);
v___x_332_ = lean_usize_of_nat(v___x_325_);
v___x_333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__0(v___x_323_, v___x_331_, v___x_332_, v_b_316_);
v___y_318_ = v___x_333_;
goto v___jp_317_;
}
}
}
else
{
return v_b_316_;
}
v___jp_317_:
{
size_t v___x_319_; size_t v___x_320_; 
v___x_319_ = ((size_t)1ULL);
v___x_320_ = lean_usize_add(v_i_314_, v___x_319_);
v_i_314_ = v___x_320_;
v_b_316_ = v___y_318_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_334_, lean_object* v_i_335_, lean_object* v_stop_336_, lean_object* v_b_337_){
_start:
{
size_t v_i_boxed_338_; size_t v_stop_boxed_339_; lean_object* v_res_340_; 
v_i_boxed_338_ = lean_unbox_usize(v_i_335_);
lean_dec(v_i_335_);
v_stop_boxed_339_ = lean_unbox_usize(v_stop_336_);
lean_dec(v_stop_336_);
v_res_340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1(v_as_334_, v_i_boxed_338_, v_stop_boxed_339_, v_b_337_);
lean_dec_ref(v_as_334_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(lean_object* v_ess_341_){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_342_ = lean_box(1);
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = lean_array_get_size(v_ess_341_);
v___x_345_ = lean_nat_dec_lt(v___x_343_, v___x_344_);
if (v___x_345_ == 0)
{
return v___x_342_;
}
else
{
uint8_t v___x_346_; 
v___x_346_ = lean_nat_dec_le(v___x_344_, v___x_344_);
if (v___x_346_ == 0)
{
if (v___x_345_ == 0)
{
return v___x_342_;
}
else
{
size_t v___x_347_; size_t v___x_348_; lean_object* v___x_349_; 
v___x_347_ = ((size_t)0ULL);
v___x_348_ = lean_usize_of_nat(v___x_344_);
v___x_349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1(v_ess_341_, v___x_347_, v___x_348_, v___x_342_);
return v___x_349_;
}
}
else
{
size_t v___x_350_; size_t v___x_351_; lean_object* v___x_352_; 
v___x_350_ = ((size_t)0ULL);
v___x_351_ = lean_usize_of_nat(v___x_344_);
v___x_352_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2__spec__1(v_ess_341_, v___x_350_, v___x_351_, v___x_342_);
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2____boxed(lean_object* v_ess_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__1_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(v_ess_353_);
lean_dec_ref(v_ess_353_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn___lam__2_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(lean_object* v_es_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = lean_array_mk(v_es_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = ((lean_object*)(l___private_Lean_ErrorExplanation_0__Lean_initFn___closed__5_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_));
v___x_373_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2____boxed(lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l___private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_();
return v_res_375_;
}
}
static lean_object* _init_l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_box(0);
v___x_377_ = l_unsafeCast___redArg(v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___redArg___lam__0(lean_object* v___x_378_, lean_object* v_name_379_, lean_object* v_toPure_380_, lean_object* v_____do__lift_381_){
_start:
{
lean_object* v___x_382_; lean_object* v_toEnvExtension_383_; lean_object* v_asyncMode_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_382_ = l_Lean_errorExplanationExt;
v_toEnvExtension_383_ = lean_ctor_get(v___x_382_, 0);
v_asyncMode_384_ = lean_ctor_get(v_toEnvExtension_383_, 2);
v___x_385_ = lean_obj_once(&l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0, &l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0_once, _init_l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0);
v___x_386_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_378_, v___x_382_, v_____do__lift_381_, v_asyncMode_384_, v___x_385_);
v___x_387_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_386_, v_name_379_);
lean_dec(v___x_386_);
v___x_388_ = lean_apply_2(v_toPure_380_, lean_box(0), v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___redArg___lam__0___boxed(lean_object* v___x_389_, lean_object* v_name_390_, lean_object* v_toPure_391_, lean_object* v_____do__lift_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_getErrorExplanation_x3f___redArg___lam__0(v___x_389_, v_name_390_, v_toPure_391_, v_____do__lift_392_);
lean_dec(v_name_390_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___redArg(lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_name_396_){
_start:
{
lean_object* v_toApplicative_397_; lean_object* v_toBind_398_; lean_object* v_getEnv_399_; lean_object* v_toPure_400_; lean_object* v___x_401_; lean_object* v___f_402_; lean_object* v___x_403_; 
v_toApplicative_397_ = lean_ctor_get(v_inst_394_, 0);
lean_inc_ref(v_toApplicative_397_);
v_toBind_398_ = lean_ctor_get(v_inst_394_, 1);
lean_inc(v_toBind_398_);
lean_dec_ref(v_inst_394_);
v_getEnv_399_ = lean_ctor_get(v_inst_395_, 0);
lean_inc(v_getEnv_399_);
lean_dec_ref(v_inst_395_);
v_toPure_400_ = lean_ctor_get(v_toApplicative_397_, 1);
lean_inc(v_toPure_400_);
lean_dec_ref(v_toApplicative_397_);
v___x_401_ = lean_box(1);
v___f_402_ = lean_alloc_closure((void*)(l_Lean_getErrorExplanation_x3f___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_402_, 0, v___x_401_);
lean_closure_set(v___f_402_, 1, v_name_396_);
lean_closure_set(v___f_402_, 2, v_toPure_400_);
v___x_403_ = lean_apply_4(v_toBind_398_, lean_box(0), lean_box(0), v_getEnv_399_, v___f_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f(lean_object* v_m_404_, lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_name_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_getErrorExplanation_x3f___redArg(v_inst_405_, v_inst_406_, v_name_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationRaw_x3f(lean_object* v_env_409_, lean_object* v_name_410_){
_start:
{
lean_object* v___x_411_; lean_object* v_toEnvExtension_412_; lean_object* v_asyncMode_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_411_ = l_Lean_errorExplanationExt;
v_toEnvExtension_412_ = lean_ctor_get(v___x_411_, 0);
v_asyncMode_413_ = lean_ctor_get(v_toEnvExtension_412_, 2);
v___x_414_ = lean_box(1);
v___x_415_ = lean_obj_once(&l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0, &l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0_once, _init_l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0);
v___x_416_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_414_, v___x_411_, v_env_409_, v_asyncMode_413_, v___x_415_);
v___x_417_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_416_, v_name_410_);
lean_dec(v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationRaw_x3f___boxed(lean_object* v_env_418_, lean_object* v_name_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_getErrorExplanationRaw_x3f(v_env_418_, v_name_419_);
lean_dec(v_name_419_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___redArg___lam__0(lean_object* v___x_421_, lean_object* v_name_422_, lean_object* v_toPure_423_, lean_object* v_____do__lift_424_){
_start:
{
lean_object* v___x_425_; lean_object* v_toEnvExtension_426_; lean_object* v_asyncMode_427_; lean_object* v___x_428_; lean_object* v___x_429_; uint8_t v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_425_ = l_Lean_errorExplanationExt;
v_toEnvExtension_426_ = lean_ctor_get(v___x_425_, 0);
v_asyncMode_427_ = lean_ctor_get(v_toEnvExtension_426_, 2);
v___x_428_ = lean_obj_once(&l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0, &l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0_once, _init_l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0);
v___x_429_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_421_, v___x_425_, v_____do__lift_424_, v_asyncMode_427_, v___x_428_);
v___x_430_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_422_, v___x_429_);
lean_dec(v___x_429_);
v___x_431_ = lean_box(v___x_430_);
v___x_432_ = lean_apply_2(v_toPure_423_, lean_box(0), v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___redArg___lam__0___boxed(lean_object* v___x_433_, lean_object* v_name_434_, lean_object* v_toPure_435_, lean_object* v_____do__lift_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_hasErrorExplanation___redArg___lam__0(v___x_433_, v_name_434_, v_toPure_435_, v_____do__lift_436_);
lean_dec(v_name_434_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___redArg(lean_object* v_inst_438_, lean_object* v_inst_439_, lean_object* v_name_440_){
_start:
{
lean_object* v_toApplicative_441_; lean_object* v_toBind_442_; lean_object* v_getEnv_443_; lean_object* v_toPure_444_; lean_object* v___x_445_; lean_object* v___f_446_; lean_object* v___x_447_; 
v_toApplicative_441_ = lean_ctor_get(v_inst_438_, 0);
lean_inc_ref(v_toApplicative_441_);
v_toBind_442_ = lean_ctor_get(v_inst_438_, 1);
lean_inc(v_toBind_442_);
lean_dec_ref(v_inst_438_);
v_getEnv_443_ = lean_ctor_get(v_inst_439_, 0);
lean_inc(v_getEnv_443_);
lean_dec_ref(v_inst_439_);
v_toPure_444_ = lean_ctor_get(v_toApplicative_441_, 1);
lean_inc(v_toPure_444_);
lean_dec_ref(v_toApplicative_441_);
v___x_445_ = lean_box(1);
v___f_446_ = lean_alloc_closure((void*)(l_Lean_hasErrorExplanation___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_446_, 0, v___x_445_);
lean_closure_set(v___f_446_, 1, v_name_440_);
lean_closure_set(v___f_446_, 2, v_toPure_444_);
v___x_447_ = lean_apply_4(v_toBind_442_, lean_box(0), lean_box(0), v_getEnv_443_, v___f_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation(lean_object* v_m_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_name_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l_Lean_hasErrorExplanation___redArg(v_inst_449_, v_inst_450_, v_name_451_);
return v___x_452_;
}
}
LEAN_EXPORT uint8_t l_Lean_getErrorExplanations___redArg___lam__0(lean_object* v_e_453_, lean_object* v_e_x27_454_){
_start:
{
lean_object* v_fst_455_; lean_object* v_fst_456_; uint8_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v_fst_455_ = lean_ctor_get(v_e_453_, 0);
lean_inc(v_fst_455_);
lean_dec_ref(v_e_453_);
v_fst_456_ = lean_ctor_get(v_e_x27_454_, 0);
lean_inc(v_fst_456_);
lean_dec_ref(v_e_x27_454_);
v___x_457_ = 1;
v___x_458_ = l_Lean_Name_toString(v_fst_455_, v___x_457_);
v___x_459_ = l_Lean_Name_toString(v_fst_456_, v___x_457_);
v___x_460_ = lean_string_dec_lt(v___x_458_, v___x_459_);
lean_dec_ref(v___x_459_);
lean_dec_ref(v___x_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg___lam__0___boxed(lean_object* v_e_461_, lean_object* v_e_x27_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = l_Lean_getErrorExplanations___redArg___lam__0(v_e_461_, v_e_x27_462_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg___lam__1(lean_object* v_acc_465_, lean_object* v_k_466_, lean_object* v_v_467_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v_k_466_);
lean_ctor_set(v___x_468_, 1, v_v_467_);
v___x_469_ = lean_array_push(v_acc_465_, v___x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg___lam__2(lean_object* v___x_472_, lean_object* v___f_473_, lean_object* v___f_474_, lean_object* v_toPure_475_, lean_object* v_____do__lift_476_){
_start:
{
lean_object* v___x_477_; lean_object* v_toEnvExtension_478_; lean_object* v_asyncMode_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___y_487_; lean_object* v___y_488_; uint8_t v___x_491_; 
v___x_477_ = l_Lean_errorExplanationExt;
v_toEnvExtension_478_ = lean_ctor_get(v___x_477_, 0);
v_asyncMode_479_ = lean_ctor_get(v_toEnvExtension_478_, 2);
v___x_480_ = lean_obj_once(&l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0, &l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0_once, _init_l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0);
v___x_481_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_472_, v___x_477_, v_____do__lift_476_, v_asyncMode_479_, v___x_480_);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = ((lean_object*)(l_Lean_getErrorExplanations___redArg___lam__2___closed__0));
v___x_484_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_473_, v___x_483_, v___x_481_);
v___x_485_ = lean_array_get_size(v___x_484_);
v___x_491_ = lean_nat_dec_eq(v___x_485_, v___x_482_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___y_495_; uint8_t v___x_497_; 
v___x_492_ = lean_unsigned_to_nat(1u);
v___x_493_ = lean_nat_sub(v___x_485_, v___x_492_);
v___x_497_ = lean_nat_dec_le(v___x_482_, v___x_493_);
if (v___x_497_ == 0)
{
lean_inc(v___x_493_);
v___y_495_ = v___x_493_;
goto v___jp_494_;
}
else
{
v___y_495_ = v___x_482_;
goto v___jp_494_;
}
v___jp_494_:
{
uint8_t v___x_496_; 
v___x_496_ = lean_nat_dec_le(v___y_495_, v___x_493_);
if (v___x_496_ == 0)
{
lean_dec(v___x_493_);
lean_inc(v___y_495_);
v___y_487_ = v___y_495_;
v___y_488_ = v___y_495_;
goto v___jp_486_;
}
else
{
v___y_487_ = v___y_495_;
v___y_488_ = v___x_493_;
goto v___jp_486_;
}
}
}
else
{
lean_object* v___x_498_; 
lean_dec_ref(v___f_474_);
v___x_498_ = lean_apply_2(v_toPure_475_, lean_box(0), v___x_484_);
return v___x_498_;
}
v___jp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_474_, v___x_485_, v___x_484_, v___y_487_, v___y_488_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_488_);
v___x_490_ = lean_apply_2(v_toPure_475_, lean_box(0), v___x_489_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___redArg(lean_object* v_inst_501_, lean_object* v_inst_502_){
_start:
{
lean_object* v_toApplicative_503_; lean_object* v_toBind_504_; lean_object* v_getEnv_505_; lean_object* v_toPure_506_; lean_object* v___f_507_; lean_object* v___f_508_; lean_object* v___x_509_; lean_object* v___f_510_; lean_object* v___x_511_; 
v_toApplicative_503_ = lean_ctor_get(v_inst_501_, 0);
lean_inc_ref(v_toApplicative_503_);
v_toBind_504_ = lean_ctor_get(v_inst_501_, 1);
lean_inc(v_toBind_504_);
lean_dec_ref(v_inst_501_);
v_getEnv_505_ = lean_ctor_get(v_inst_502_, 0);
lean_inc(v_getEnv_505_);
lean_dec_ref(v_inst_502_);
v_toPure_506_ = lean_ctor_get(v_toApplicative_503_, 1);
lean_inc(v_toPure_506_);
lean_dec_ref(v_toApplicative_503_);
v___f_507_ = ((lean_object*)(l_Lean_getErrorExplanations___redArg___closed__0));
v___f_508_ = ((lean_object*)(l_Lean_getErrorExplanations___redArg___closed__1));
v___x_509_ = lean_box(1);
v___f_510_ = lean_alloc_closure((void*)(l_Lean_getErrorExplanations___redArg___lam__2), 5, 4);
lean_closure_set(v___f_510_, 0, v___x_509_);
lean_closure_set(v___f_510_, 1, v___f_508_);
lean_closure_set(v___f_510_, 2, v___f_507_);
lean_closure_set(v___f_510_, 3, v_toPure_506_);
v___x_511_ = lean_apply_4(v_toBind_504_, lean_box(0), lean_box(0), v_getEnv_505_, v___f_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations(lean_object* v_m_512_, lean_object* v_inst_513_, lean_object* v_inst_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_getErrorExplanations___redArg(v_inst_513_, v_inst_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg(lean_object* v_hi_516_, lean_object* v_pivot_517_, lean_object* v_as_518_, lean_object* v_i_519_, lean_object* v_k_520_){
_start:
{
uint8_t v___x_521_; 
v___x_521_ = lean_nat_dec_lt(v_k_520_, v_hi_516_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_523_; 
lean_dec(v_k_520_);
lean_dec_ref(v_pivot_517_);
v___x_522_ = lean_array_fswap(v_as_518_, v_i_519_, v_hi_516_);
v___x_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_523_, 0, v_i_519_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
return v___x_523_;
}
else
{
lean_object* v___x_524_; lean_object* v_fst_525_; lean_object* v_fst_526_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_524_ = lean_array_fget_borrowed(v_as_518_, v_k_520_);
v_fst_525_ = lean_ctor_get(v___x_524_, 0);
v_fst_526_ = lean_ctor_get(v_pivot_517_, 0);
lean_inc(v_fst_525_);
v___x_527_ = l_Lean_Name_toString(v_fst_525_, v___x_521_);
lean_inc(v_fst_526_);
v___x_528_ = l_Lean_Name_toString(v_fst_526_, v___x_521_);
v___x_529_ = lean_string_dec_lt(v___x_527_, v___x_528_);
lean_dec_ref(v___x_528_);
lean_dec_ref(v___x_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_unsigned_to_nat(1u);
v___x_531_ = lean_nat_add(v_k_520_, v___x_530_);
lean_dec(v_k_520_);
v_k_520_ = v___x_531_;
goto _start;
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_533_ = lean_array_fswap(v_as_518_, v_i_519_, v_k_520_);
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_nat_add(v_i_519_, v___x_534_);
lean_dec(v_i_519_);
v___x_536_ = lean_nat_add(v_k_520_, v___x_534_);
lean_dec(v_k_520_);
v_as_518_ = v___x_533_;
v_i_519_ = v___x_535_;
v_k_520_ = v___x_536_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg___boxed(lean_object* v_hi_538_, lean_object* v_pivot_539_, lean_object* v_as_540_, lean_object* v_i_541_, lean_object* v_k_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg(v_hi_538_, v_pivot_539_, v_as_540_, v_i_541_, v_k_542_);
lean_dec(v_hi_538_);
return v_res_543_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0(uint8_t v___x_544_, lean_object* v_e_545_, lean_object* v_e_x27_546_){
_start:
{
lean_object* v_fst_547_; lean_object* v_fst_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_fst_547_ = lean_ctor_get(v_e_545_, 0);
lean_inc(v_fst_547_);
lean_dec_ref(v_e_545_);
v_fst_548_ = lean_ctor_get(v_e_x27_546_, 0);
lean_inc(v_fst_548_);
lean_dec_ref(v_e_x27_546_);
v___x_549_ = l_Lean_Name_toString(v_fst_547_, v___x_544_);
v___x_550_ = l_Lean_Name_toString(v_fst_548_, v___x_544_);
v___x_551_ = lean_string_dec_lt(v___x_549_, v___x_550_);
lean_dec_ref(v___x_550_);
lean_dec_ref(v___x_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0___boxed(lean_object* v___x_552_, lean_object* v_e_553_, lean_object* v_e_x27_554_){
_start:
{
uint8_t v___x_413__boxed_555_; uint8_t v_res_556_; lean_object* v_r_557_; 
v___x_413__boxed_555_ = lean_unbox(v___x_552_);
v_res_556_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0(v___x_413__boxed_555_, v_e_553_, v_e_x27_554_);
v_r_557_ = lean_box(v_res_556_);
return v_r_557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(lean_object* v_n_558_, lean_object* v_as_559_, lean_object* v_lo_560_, lean_object* v_hi_561_){
_start:
{
lean_object* v___y_563_; uint8_t v___x_573_; 
v___x_573_ = lean_nat_dec_lt(v_lo_560_, v_hi_561_);
if (v___x_573_ == 0)
{
lean_dec(v_lo_560_);
return v_as_559_;
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v_mid_576_; lean_object* v___y_578_; lean_object* v___y_584_; lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_574_ = lean_nat_add(v_lo_560_, v_hi_561_);
v___x_575_ = lean_unsigned_to_nat(1u);
v_mid_576_ = lean_nat_shiftr(v___x_574_, v___x_575_);
lean_dec(v___x_574_);
v___x_589_ = lean_array_fget_borrowed(v_as_559_, v_mid_576_);
v___x_590_ = lean_array_fget_borrowed(v_as_559_, v_lo_560_);
lean_inc(v___x_590_);
lean_inc(v___x_589_);
v___x_591_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0(v___x_573_, v___x_589_, v___x_590_);
if (v___x_591_ == 0)
{
v___y_584_ = v_as_559_;
goto v___jp_583_;
}
else
{
lean_object* v___x_592_; 
v___x_592_ = lean_array_fswap(v_as_559_, v_lo_560_, v_mid_576_);
v___y_584_ = v___x_592_;
goto v___jp_583_;
}
v___jp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = lean_array_fget_borrowed(v___y_578_, v_mid_576_);
v___x_580_ = lean_array_fget_borrowed(v___y_578_, v_hi_561_);
lean_inc(v___x_580_);
lean_inc(v___x_579_);
v___x_581_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0(v___x_573_, v___x_579_, v___x_580_);
if (v___x_581_ == 0)
{
lean_dec(v_mid_576_);
v___y_563_ = v___y_578_;
goto v___jp_562_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_array_fswap(v___y_578_, v_mid_576_, v_hi_561_);
lean_dec(v_mid_576_);
v___y_563_ = v___x_582_;
goto v___jp_562_;
}
}
v___jp_583_:
{
lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lean_array_fget_borrowed(v___y_584_, v_hi_561_);
v___x_586_ = lean_array_fget_borrowed(v___y_584_, v_lo_560_);
lean_inc(v___x_586_);
lean_inc(v___x_585_);
v___x_587_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___lam__0(v___x_573_, v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
v___y_578_ = v___y_584_;
goto v___jp_577_;
}
else
{
lean_object* v___x_588_; 
v___x_588_ = lean_array_fswap(v___y_584_, v_lo_560_, v_hi_561_);
v___y_578_ = v___x_588_;
goto v___jp_577_;
}
}
}
v___jp_562_:
{
lean_object* v_pivot_564_; lean_object* v___x_565_; lean_object* v_fst_566_; lean_object* v_snd_567_; uint8_t v___x_568_; 
v_pivot_564_ = lean_array_fget(v___y_563_, v_hi_561_);
lean_inc_n(v_lo_560_, 2);
v___x_565_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg(v_hi_561_, v_pivot_564_, v___y_563_, v_lo_560_, v_lo_560_);
v_fst_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_fst_566_);
v_snd_567_ = lean_ctor_get(v___x_565_, 1);
lean_inc(v_snd_567_);
lean_dec_ref(v___x_565_);
v___x_568_ = lean_nat_dec_le(v_hi_561_, v_fst_566_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(v_n_558_, v_snd_567_, v_lo_560_, v_fst_566_);
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_fst_566_, v___x_570_);
lean_dec(v_fst_566_);
v_as_559_ = v___x_569_;
v_lo_560_ = v___x_571_;
goto _start;
}
else
{
lean_dec(v_fst_566_);
lean_dec(v_lo_560_);
return v_snd_567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg___boxed(lean_object* v_n_593_, lean_object* v_as_594_, lean_object* v_lo_595_, lean_object* v_hi_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(v_n_593_, v_as_594_, v_lo_595_, v_hi_596_);
lean_dec(v_hi_596_);
lean_dec(v_n_593_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0(lean_object* v_init_598_, lean_object* v_x_599_){
_start:
{
if (lean_obj_tag(v_x_599_) == 0)
{
lean_object* v_k_600_; lean_object* v_v_601_; lean_object* v_l_602_; lean_object* v_r_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v_k_600_ = lean_ctor_get(v_x_599_, 1);
v_v_601_ = lean_ctor_get(v_x_599_, 2);
v_l_602_ = lean_ctor_get(v_x_599_, 3);
v_r_603_ = lean_ctor_get(v_x_599_, 4);
v___x_604_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0(v_init_598_, v_l_602_);
lean_inc(v_v_601_);
lean_inc(v_k_600_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v_k_600_);
lean_ctor_set(v___x_605_, 1, v_v_601_);
v___x_606_ = lean_array_push(v___x_604_, v___x_605_);
v_init_598_ = v___x_606_;
v_x_599_ = v_r_603_;
goto _start;
}
else
{
return v_init_598_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0___boxed(lean_object* v_init_608_, lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0(v_init_608_, v_x_609_);
lean_dec(v_x_609_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationsRaw(lean_object* v_env_611_){
_start:
{
lean_object* v___x_612_; lean_object* v_toEnvExtension_613_; lean_object* v_asyncMode_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_612_ = l_Lean_errorExplanationExt;
v_toEnvExtension_613_ = lean_ctor_get(v___x_612_, 0);
v_asyncMode_614_ = lean_ctor_get(v_toEnvExtension_613_, 2);
v___x_615_ = lean_box(1);
v___x_616_ = lean_obj_once(&l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0, &l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0_once, _init_l_Lean_getErrorExplanation_x3f___redArg___lam__0___closed__0);
v___x_617_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_615_, v___x_612_, v_env_611_, v_asyncMode_614_, v___x_616_);
v___x_618_ = lean_unsigned_to_nat(0u);
v___x_619_ = ((lean_object*)(l_Lean_getErrorExplanations___redArg___lam__2___closed__0));
v___x_620_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0(v___x_619_, v___x_617_);
lean_dec(v___x_617_);
v___x_621_ = lean_array_get_size(v___x_620_);
v___x_622_ = lean_nat_dec_eq(v___x_621_, v___x_618_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___y_626_; uint8_t v___x_630_; 
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_nat_sub(v___x_621_, v___x_623_);
v___x_630_ = lean_nat_dec_le(v___x_618_, v___x_624_);
if (v___x_630_ == 0)
{
lean_inc(v___x_624_);
v___y_626_ = v___x_624_;
goto v___jp_625_;
}
else
{
v___y_626_ = v___x_618_;
goto v___jp_625_;
}
v___jp_625_:
{
uint8_t v___x_627_; 
v___x_627_ = lean_nat_dec_le(v___y_626_, v___x_624_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; 
lean_dec(v___x_624_);
lean_inc(v___y_626_);
v___x_628_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(v___x_621_, v___x_620_, v___y_626_, v___y_626_);
lean_dec(v___y_626_);
return v___x_628_;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(v___x_621_, v___x_620_, v___y_626_, v___x_624_);
lean_dec(v___x_624_);
return v___x_629_;
}
}
}
else
{
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0(lean_object* v_init_631_, lean_object* v_t_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0_spec__0(v_init_631_, v_t_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0___boxed(lean_object* v_init_634_, lean_object* v_t_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanationsRaw_spec__0(v_init_634_, v_t_635_);
lean_dec(v_t_635_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1(lean_object* v_n_637_, lean_object* v_as_638_, lean_object* v_lo_639_, lean_object* v_hi_640_, lean_object* v_w_641_, lean_object* v_hlo_642_, lean_object* v_hhi_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___redArg(v_n_637_, v_as_638_, v_lo_639_, v_hi_640_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1___boxed(lean_object* v_n_645_, lean_object* v_as_646_, lean_object* v_lo_647_, lean_object* v_hi_648_, lean_object* v_w_649_, lean_object* v_hlo_650_, lean_object* v_hhi_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1(v_n_645_, v_as_646_, v_lo_647_, v_hi_648_, v_w_649_, v_hlo_650_, v_hhi_651_);
lean_dec(v_hi_648_);
lean_dec(v_n_645_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2(lean_object* v_n_653_, lean_object* v_lo_654_, lean_object* v_hi_655_, lean_object* v_hhi_656_, lean_object* v_pivot_657_, lean_object* v_as_658_, lean_object* v_i_659_, lean_object* v_k_660_, lean_object* v_ilo_661_, lean_object* v_ik_662_, lean_object* v_w_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___redArg(v_hi_655_, v_pivot_657_, v_as_658_, v_i_659_, v_k_660_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2___boxed(lean_object* v_n_665_, lean_object* v_lo_666_, lean_object* v_hi_667_, lean_object* v_hhi_668_, lean_object* v_pivot_669_, lean_object* v_as_670_, lean_object* v_i_671_, lean_object* v_k_672_, lean_object* v_ilo_673_, lean_object* v_ik_674_, lean_object* v_w_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanationsRaw_spec__1_spec__2(v_n_665_, v_lo_666_, v_hi_667_, v_hhi_668_, v_pivot_669_, v_as_670_, v_i_671_, v_k_672_, v_ilo_673_, v_ik_674_, v_w_675_);
lean_dec(v_hi_667_);
lean_dec(v_lo_666_);
lean_dec(v_n_665_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationsSorted___redArg(lean_object* v_inst_677_, lean_object* v_inst_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_getErrorExplanations___redArg(v_inst_677_, v_inst_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanationsSorted(lean_object* v_m_680_, lean_object* v_inst_681_, lean_object* v_inst_682_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lean_getErrorExplanations___redArg(v_inst_681_, v_inst_682_);
return v___x_683_;
}
}
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Links(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ErrorExplanation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Links(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ErrorExplanation_0__Lean_initFn_00___x40_Lean_ErrorExplanation_3643637962____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_errorExplanationExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_errorExplanationExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ErrorExplanation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Message(uint8_t builtin);
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* initialize_Lean_DocString_Links(uint8_t builtin);
lean_object* initialize_Lean_Message(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ErrorExplanation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Links(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ErrorExplanation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ErrorExplanation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ErrorExplanation(builtin);
}
#ifdef __cplusplus
}
#endif

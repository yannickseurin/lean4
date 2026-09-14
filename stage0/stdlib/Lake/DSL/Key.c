// Lean compiler output
// Module: Lake.DSL.Key
// Imports: import Lake.Build.Key import Lake.DSL.Syntax import Lake.Util.Name
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
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "BuildKey.facet"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BuildKey"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "facet"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(133, 27, 82, 57, 172, 89, 47, 9)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 75, 14, 202, 104, 193, 229, 234)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 131, 65, 250, 184, 216, 104, 176)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 27, 25, 93, 254, 0, 108, 248)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__11_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__12_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "BuildKey.packageTarget"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__0 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__0_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__1;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "packageTarget"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__2 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__2_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(133, 27, 82, 57, 172, 89, 47, 9)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__3_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 140, 45, 122, 206, 4, 164, 109)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__3 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__3_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 131, 65, 250, 184, 216, 104, 176)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 92, 20, 225, 40, 68, 34, 127)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__5 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__5_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__4_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__6 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__6_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__7 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__7_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__5_value),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__7_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__8 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__8_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "DSL"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "packageTargetLit"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__10 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__10_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__10_value),LEAN_SCALAR_PTR_LITERAL(185, 101, 186, 35, 177, 203, 61, 85)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "BuildKey.packageModule"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__12 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__12_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__13;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "packageModule"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__14 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__14_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(133, 27, 82, 57, 172, 89, 47, 9)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__15_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__14_value),LEAN_SCALAR_PTR_LITERAL(242, 134, 87, 53, 32, 22, 186, 79)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__15 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__15_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 131, 65, 250, 184, 216, 104, 176)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__14_value),LEAN_SCALAR_PTR_LITERAL(94, 243, 96, 112, 128, 255, 170, 168)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__17 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__17_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__16_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__18 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__18_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__19 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__19_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__17_value),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__19_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__20 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__20_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "ill-formed package target literal"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__21 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "facetSuffix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 19, 148, 195, 91, 53, 9, 109)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "moduleTargetKeyLit"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__0 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 150, 87, 20, 34, 170, 193, 64)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "BuildKey.module"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__2 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__2_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__3;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__4 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__4_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(133, 27, 82, 57, 172, 89, 47, 9)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__5_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(73, 236, 94, 56, 83, 110, 98, 1)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__5 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__5_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 131, 65, 250, 184, 216, 104, 176)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(221, 58, 59, 194, 129, 244, 250, 35)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__7 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__7_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__6_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__8 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__8_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__9 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__9_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__7_value),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__9_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__10 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__10_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "PartialBuildKey.mk"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__11 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__11_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "PartialBuildKey"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__13 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__13_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__14 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__14_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__13_value),LEAN_SCALAR_PTR_LITERAL(180, 52, 6, 197, 116, 206, 1, 69)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__14_value),LEAN_SCALAR_PTR_LITERAL(28, 231, 188, 142, 234, 164, 248, 161)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__13_value),LEAN_SCALAR_PTR_LITERAL(240, 118, 215, 162, 245, 143, 94, 85)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__14_value),LEAN_SCALAR_PTR_LITERAL(8, 60, 60, 183, 7, 8, 42, 49)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__17 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__17_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__18 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__1 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__1_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__2;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__3;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__4;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Key"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__5 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__5_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__6;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__7;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__8;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expandModuleTargetKeyLit"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__10 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__10_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__11;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___boxed(lean_object*);
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "packageTargetKeyLit"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__0 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 78, 171, 75, 222, 86, 241, 235)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BuildKey.package"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__2 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__2_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__3;
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "package"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__4 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__4_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(133, 27, 82, 57, 172, 89, 47, 9)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__5_value_aux_0),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 53, 181, 53, 221, 17, 169, 132)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__5 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__5_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 131, 65, 250, 184, 216, 104, 176)}};
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value_aux_1),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(181, 47, 206, 212, 31, 90, 112, 197)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__7 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__7_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__6_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__8 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__8_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__9 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__9_value;
static const lean_ctor_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__7_value),((lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__9_value)}};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__10 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "expandPackageTargetKeyLit"};
static const lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__0 = (const lean_object*)&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__0_value;
static lean_once_cell_t l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___boxed(lean_object*);
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__5));
v___x_12_ = l_String_toRawSubstring_x27(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1(lean_object* v_as_37_, size_t v_i_38_, size_t v_stop_39_, lean_object* v_b_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = lean_usize_dec_eq(v_i_38_, v_stop_39_);
if (v___x_43_ == 0)
{
lean_object* v_quotContext_44_; lean_object* v_currMacroScope_45_; lean_object* v_ref_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; size_t v___x_58_; size_t v___x_59_; 
v_quotContext_44_ = lean_ctor_get(v___y_41_, 1);
v_currMacroScope_45_ = lean_ctor_get(v___y_41_, 2);
v_ref_46_ = lean_ctor_get(v___y_41_, 5);
v___x_47_ = lean_array_uget_borrowed(v_as_37_, v_i_38_);
v___x_48_ = l_Lean_SourceInfo_fromRef(v_ref_46_, v___x_43_);
v___x_49_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4));
v___x_50_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__6);
v___x_51_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__9));
lean_inc(v_currMacroScope_45_);
lean_inc(v_quotContext_44_);
v___x_52_ = l_Lean_addMacroScope(v_quotContext_44_, v___x_51_, v_currMacroScope_45_);
v___x_53_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__15));
lean_inc_n(v___x_48_, 2);
v___x_54_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_54_, 0, v___x_48_);
lean_ctor_set(v___x_54_, 1, v___x_50_);
lean_ctor_set(v___x_54_, 2, v___x_52_);
lean_ctor_set(v___x_54_, 3, v___x_53_);
v___x_55_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17));
lean_inc(v___x_47_);
v___x_56_ = l_Lean_Syntax_node2(v___x_48_, v___x_55_, v_b_40_, v___x_47_);
v___x_57_ = l_Lean_Syntax_node2(v___x_48_, v___x_49_, v___x_54_, v___x_56_);
v___x_58_ = ((size_t)1ULL);
v___x_59_ = lean_usize_add(v_i_38_, v___x_58_);
v_i_38_ = v___x_59_;
v_b_40_ = v___x_57_;
goto _start;
}
else
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_61_, 0, v_b_40_);
lean_ctor_set(v___x_61_, 1, v___y_42_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___boxed(lean_object* v_as_62_, lean_object* v_i_63_, lean_object* v_stop_64_, lean_object* v_b_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
size_t v_i_boxed_68_; size_t v_stop_boxed_69_; lean_object* v_res_70_; 
v_i_boxed_68_ = lean_unbox_usize(v_i_63_);
lean_dec(v_i_63_);
v_stop_boxed_69_ = lean_unbox_usize(v_stop_64_);
lean_dec(v_stop_64_);
v_res_70_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1(v_as_62_, v_i_boxed_68_, v_stop_boxed_69_, v_b_65_, v___y_66_, v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec_ref(v_as_62_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__0(size_t v_sz_71_, size_t v_i_72_, lean_object* v_bs_73_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = lean_usize_dec_lt(v_i_72_, v_sz_71_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
v___x_75_ = l_unsafeCast___redArg(v_bs_73_);
lean_dec_ref(v_bs_73_);
return v___x_75_;
}
else
{
lean_object* v_v_76_; lean_object* v___x_77_; lean_object* v_bs_x27_78_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_v_76_ = lean_array_uget(v_bs_73_, v_i_72_);
v___x_77_ = lean_unsigned_to_nat(0u);
v_bs_x27_78_ = lean_array_uset(v_bs_73_, v_i_72_, v___x_77_);
v___x_79_ = l_unsafeCast___redArg(v_v_76_);
lean_dec(v_v_76_);
v___x_80_ = l_Lean_Syntax_getId(v___x_79_);
v___x_81_ = 0;
v___x_82_ = l_Lake_Name_quoteFrom(v___x_79_, v___x_80_, v___x_81_);
v___x_83_ = ((size_t)1ULL);
v___x_84_ = lean_usize_add(v_i_72_, v___x_83_);
v___x_85_ = l_unsafeCast___redArg(v___x_82_);
lean_dec(v___x_82_);
v___x_86_ = lean_array_uset(v_bs_x27_78_, v_i_72_, v___x_85_);
v_i_72_ = v___x_84_;
v_bs_73_ = v___x_86_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__0___boxed(lean_object* v_sz_88_, lean_object* v_i_89_, lean_object* v_bs_90_){
_start:
{
size_t v_sz_boxed_91_; size_t v_i_boxed_92_; lean_object* v_res_93_; 
v_sz_boxed_91_ = lean_unbox_usize(v_sz_88_);
lean_dec(v_sz_88_);
v_i_boxed_92_ = lean_unbox_usize(v_i_89_);
lean_dec(v_i_89_);
v_res_93_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__0(v_sz_boxed_91_, v_i_boxed_92_, v_bs_90_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets(lean_object* v_tgt_94_, lean_object* v_facets_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_98_; size_t v_sz_99_; size_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v_facetLits_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_98_ = l_unsafeCast___redArg(v_facets_95_);
v_sz_99_ = lean_array_size(v___x_98_);
v___x_100_ = ((size_t)0ULL);
v___x_101_ = l_unsafeCast___redArg(v___x_98_);
lean_dec(v___x_98_);
v___x_102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__0(v_sz_99_, v___x_100_, v___x_101_);
v_facetLits_103_ = l_unsafeCast___redArg(v___x_102_);
lean_dec_ref(v___x_102_);
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_array_get_size(v_facetLits_103_);
v___x_106_ = lean_nat_dec_lt(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_facetLits_103_);
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v_tgt_94_);
lean_ctor_set(v___x_107_, 1, v_a_97_);
return v___x_107_;
}
else
{
uint8_t v___x_108_; 
v___x_108_ = lean_nat_dec_le(v___x_105_, v___x_105_);
if (v___x_108_ == 0)
{
if (v___x_106_ == 0)
{
lean_object* v___x_109_; 
lean_dec(v_facetLits_103_);
v___x_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_109_, 0, v_tgt_94_);
lean_ctor_set(v___x_109_, 1, v_a_97_);
return v___x_109_;
}
else
{
size_t v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_usize_of_nat(v___x_105_);
v___x_111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1(v_facetLits_103_, v___x_100_, v___x_110_, v_tgt_94_, v_a_96_, v_a_97_);
lean_dec(v_facetLits_103_);
return v___x_111_;
}
}
else
{
size_t v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_usize_of_nat(v___x_105_);
v___x_113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1(v_facetLits_103_, v___x_100_, v___x_112_, v_tgt_94_, v_a_96_, v_a_97_);
lean_dec(v_facetLits_103_);
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets___boxed(lean_object* v_tgt_114_, lean_object* v_facets_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets(v_tgt_114_, v_facets_115_, v_a_116_, v_a_117_);
lean_dec_ref(v_a_116_);
lean_dec_ref(v_facets_115_);
return v_res_118_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__1(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__0));
v___x_121_ = l_String_toRawSubstring_x27(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__13(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__12));
v___x_149_ = l_String_toRawSubstring_x27(v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit(lean_object* v_pkg_170_, lean_object* v_stx_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_methods_174_; lean_object* v_quotContext_175_; lean_object* v_currMacroScope_176_; lean_object* v_currRecDepth_177_; lean_object* v_maxRecDepth_178_; lean_object* v_ref_179_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_183_; uint8_t v___y_184_; lean_object* v___x_199_; uint8_t v___x_200_; lean_object* v_mod_x3f_202_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v_ref_224_; lean_object* v___x_225_; 
v_methods_174_ = lean_ctor_get(v_a_172_, 0);
v_quotContext_175_ = lean_ctor_get(v_a_172_, 1);
v_currMacroScope_176_ = lean_ctor_get(v_a_172_, 2);
v_currRecDepth_177_ = lean_ctor_get(v_a_172_, 3);
v_maxRecDepth_178_ = lean_ctor_get(v_a_172_, 4);
v_ref_179_ = lean_ctor_get(v_a_172_, 5);
v___x_199_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__11));
lean_inc(v_stx_171_);
v___x_200_ = l_Lean_Syntax_isOfKind(v_stx_171_, v___x_199_);
v_ref_224_ = l_Lean_replaceRef(v_stx_171_, v_ref_179_);
lean_inc(v_maxRecDepth_178_);
lean_inc(v_currRecDepth_177_);
lean_inc(v_currMacroScope_176_);
lean_inc(v_quotContext_175_);
lean_inc(v_methods_174_);
v___x_225_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_225_, 0, v_methods_174_);
lean_ctor_set(v___x_225_, 1, v_quotContext_175_);
lean_ctor_set(v___x_225_, 2, v_currMacroScope_176_);
lean_ctor_set(v___x_225_, 3, v_currRecDepth_177_);
lean_ctor_set(v___x_225_, 4, v_maxRecDepth_178_);
lean_ctor_set(v___x_225_, 5, v_ref_224_);
if (v___x_200_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec(v_stx_171_);
lean_dec(v_pkg_170_);
v___x_226_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__21));
v___x_227_ = l_Lean_Macro_throwError___redArg(v___x_226_, v___x_225_, v_a_173_);
lean_dec_ref_known(v___x_225_, 6);
return v___x_227_;
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = l_Lean_Syntax_getArg(v_stx_171_, v___x_228_);
v___x_230_ = l_Lean_Syntax_isNone(v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_229_);
v___x_232_ = l_Lean_Syntax_matchesNull(v___x_229_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; 
lean_dec(v___x_229_);
lean_dec(v_stx_171_);
lean_dec(v_pkg_170_);
v___x_233_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__21));
v___x_234_ = l_Lean_Macro_throwError___redArg(v___x_233_, v___x_225_, v_a_173_);
lean_dec_ref_known(v___x_225_, 6);
return v___x_234_;
}
else
{
lean_object* v_mod_x3f_235_; lean_object* v___x_236_; 
v_mod_x3f_235_ = l_Lean_Syntax_getArg(v___x_229_, v___x_228_);
lean_dec(v___x_229_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v_mod_x3f_235_);
v_mod_x3f_202_ = v___x_236_;
v___y_203_ = v___x_225_;
v___y_204_ = v_a_173_;
goto v___jp_201_;
}
}
else
{
lean_object* v___x_237_; 
lean_dec(v___x_229_);
v___x_237_ = lean_box(0);
v_mod_x3f_202_ = v___x_237_;
v___y_203_ = v___x_225_;
v___y_204_ = v_a_173_;
goto v___jp_201_;
}
}
v___jp_180_:
{
lean_object* v_quotContext_185_; lean_object* v_currMacroScope_186_; lean_object* v_ref_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_quotContext_185_ = lean_ctor_get(v___y_183_, 1);
lean_inc(v_quotContext_185_);
v_currMacroScope_186_ = lean_ctor_get(v___y_183_, 2);
lean_inc(v_currMacroScope_186_);
v_ref_187_ = lean_ctor_get(v___y_183_, 5);
lean_inc(v_ref_187_);
lean_dec_ref(v___y_183_);
v___x_188_ = l_Lean_SourceInfo_fromRef(v_ref_187_, v___y_184_);
lean_dec(v_ref_187_);
v___x_189_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4));
v___x_190_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__1, &l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__1_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__1);
v___x_191_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__3));
v___x_192_ = l_Lean_addMacroScope(v_quotContext_185_, v___x_191_, v_currMacroScope_186_);
v___x_193_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__8));
lean_inc_n(v___x_188_, 2);
v___x_194_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_194_, 0, v___x_188_);
lean_ctor_set(v___x_194_, 1, v___x_190_);
lean_ctor_set(v___x_194_, 2, v___x_192_);
lean_ctor_set(v___x_194_, 3, v___x_193_);
v___x_195_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17));
v___x_196_ = l_Lean_Syntax_node2(v___x_188_, v___x_195_, v_pkg_170_, v___y_181_);
v___x_197_ = l_Lean_Syntax_node2(v___x_188_, v___x_189_, v___x_194_, v___x_196_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___y_182_);
return v___x_198_;
}
v___jp_201_:
{
lean_object* v___x_205_; lean_object* v_tgt_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v_tgtLit_209_; 
v___x_205_ = lean_unsigned_to_nat(1u);
v_tgt_206_ = l_Lean_Syntax_getArg(v_stx_171_, v___x_205_);
lean_dec(v_stx_171_);
v___x_207_ = l_Lean_TSyntax_getId(v_tgt_206_);
v___x_208_ = 0;
v_tgtLit_209_ = l_Lake_Name_quoteFrom(v_tgt_206_, v___x_207_, v___x_208_);
if (lean_obj_tag(v_mod_x3f_202_) == 0)
{
v___y_181_ = v_tgtLit_209_;
v___y_182_ = v___y_204_;
v___y_183_ = v___y_203_;
v___y_184_ = v___x_208_;
goto v___jp_180_;
}
else
{
lean_dec_ref_known(v_mod_x3f_202_, 1);
if (v___x_200_ == 0)
{
v___y_181_ = v_tgtLit_209_;
v___y_182_ = v___y_204_;
v___y_183_ = v___y_203_;
v___y_184_ = v___x_200_;
goto v___jp_180_;
}
else
{
lean_object* v_quotContext_210_; lean_object* v_currMacroScope_211_; lean_object* v_ref_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_quotContext_210_ = lean_ctor_get(v___y_203_, 1);
lean_inc(v_quotContext_210_);
v_currMacroScope_211_ = lean_ctor_get(v___y_203_, 2);
lean_inc(v_currMacroScope_211_);
v_ref_212_ = lean_ctor_get(v___y_203_, 5);
lean_inc(v_ref_212_);
lean_dec_ref(v___y_203_);
v___x_213_ = l_Lean_SourceInfo_fromRef(v_ref_212_, v___x_208_);
lean_dec(v_ref_212_);
v___x_214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4));
v___x_215_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__13, &l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__13_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__13);
v___x_216_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__15));
v___x_217_ = l_Lean_addMacroScope(v_quotContext_210_, v___x_216_, v_currMacroScope_211_);
v___x_218_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__20));
lean_inc_n(v___x_213_, 2);
v___x_219_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_219_, 0, v___x_213_);
lean_ctor_set(v___x_219_, 1, v___x_215_);
lean_ctor_set(v___x_219_, 2, v___x_217_);
lean_ctor_set(v___x_219_, 3, v___x_218_);
v___x_220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17));
v___x_221_ = l_Lean_Syntax_node2(v___x_213_, v___x_220_, v_pkg_170_, v_tgtLit_209_);
v___x_222_ = l_Lean_Syntax_node2(v___x_213_, v___x_214_, v___x_219_, v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___y_204_);
return v___x_223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___boxed(lean_object* v_pkg_238_, lean_object* v_stx_239_, lean_object* v_a_240_, lean_object* v_a_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit(v_pkg_238_, v_stx_239_, v_a_240_, v_a_241_);
lean_dec_ref(v_a_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0(size_t v_sz_248_, size_t v_i_249_, lean_object* v_bs_250_){
_start:
{
uint8_t v___x_251_; 
v___x_251_ = lean_usize_dec_lt(v_i_249_, v_sz_248_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = l_unsafeCast___redArg(v_bs_250_);
lean_dec_ref(v_bs_250_);
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
else
{
lean_object* v_v_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v_v_254_ = lean_array_uget_borrowed(v_bs_250_, v_i_249_);
v___x_255_ = l_unsafeCast___redArg(v_v_254_);
v___x_256_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___closed__1));
lean_inc(v___x_255_);
v___x_257_ = l_Lean_Syntax_isOfKind(v___x_255_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; 
lean_dec(v___x_255_);
lean_dec_ref(v_bs_250_);
v___x_258_ = lean_box(0);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v_bs_x27_261_; lean_object* v_facets_262_; size_t v___x_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_259_ = lean_unsigned_to_nat(1u);
v___x_260_ = lean_unsigned_to_nat(0u);
v_bs_x27_261_ = lean_array_uset(v_bs_250_, v_i_249_, v___x_260_);
v_facets_262_ = l_Lean_Syntax_getArg(v___x_255_, v___x_259_);
lean_dec(v___x_255_);
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_add(v_i_249_, v___x_263_);
v___x_265_ = l_unsafeCast___redArg(v_facets_262_);
lean_dec(v_facets_262_);
v___x_266_ = lean_array_uset(v_bs_x27_261_, v_i_249_, v___x_265_);
v_i_249_ = v___x_264_;
v_bs_250_ = v___x_266_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0___boxed(lean_object* v_sz_268_, lean_object* v_i_269_, lean_object* v_bs_270_){
_start:
{
size_t v_sz_boxed_271_; size_t v_i_boxed_272_; lean_object* v_res_273_; 
v_sz_boxed_271_ = lean_unbox_usize(v_sz_268_);
lean_dec(v_sz_268_);
v_i_boxed_272_ = lean_unbox_usize(v_i_269_);
lean_dec(v_i_269_);
v_res_273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0(v_sz_boxed_271_, v_i_boxed_272_, v_bs_270_);
return v_res_273_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__3(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__2));
v___x_281_ = l_String_toRawSubstring_x27(v___x_280_);
return v___x_281_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__11));
v___x_303_ = l_String_toRawSubstring_x27(v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit(lean_object* v_stx_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1));
lean_inc(v_stx_319_);
v___x_323_ = l_Lean_Syntax_isOfKind(v_stx_319_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
lean_dec(v_stx_319_);
v___x_324_ = l_Lean_Macro_throwUnsupported___redArg(v_a_321_);
return v___x_324_;
}
else
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; size_t v_sz_328_; size_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_325_ = lean_unsigned_to_nat(2u);
v___x_326_ = l_Lean_Syntax_getArg(v_stx_319_, v___x_325_);
v___x_327_ = l_Lean_Syntax_getArgs(v___x_326_);
lean_dec(v___x_326_);
v_sz_328_ = lean_array_size(v___x_327_);
v___x_329_ = ((size_t)0ULL);
v___x_330_ = l_unsafeCast___redArg(v___x_327_);
lean_dec_ref(v___x_327_);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0(v_sz_328_, v___x_329_, v___x_330_);
v___x_332_ = l_unsafeCast___redArg(v___x_331_);
lean_dec(v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v___x_333_; 
lean_dec(v_stx_319_);
v___x_333_ = l_Lean_Macro_throwUnsupported___redArg(v_a_321_);
return v___x_333_;
}
else
{
lean_object* v_val_334_; lean_object* v_methods_335_; lean_object* v_quotContext_336_; lean_object* v_currMacroScope_337_; lean_object* v_currRecDepth_338_; lean_object* v_maxRecDepth_339_; lean_object* v_ref_340_; lean_object* v___x_341_; lean_object* v_mod_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_tk_345_; uint8_t v___x_346_; lean_object* v_modLit_347_; lean_object* v_ref_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_val_334_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v___x_332_, 1);
v_methods_335_ = lean_ctor_get(v_a_320_, 0);
v_quotContext_336_ = lean_ctor_get(v_a_320_, 1);
v_currMacroScope_337_ = lean_ctor_get(v_a_320_, 2);
v_currRecDepth_338_ = lean_ctor_get(v_a_320_, 3);
v_maxRecDepth_339_ = lean_ctor_get(v_a_320_, 4);
v_ref_340_ = lean_ctor_get(v_a_320_, 5);
v___x_341_ = lean_unsigned_to_nat(1u);
v_mod_342_ = l_Lean_Syntax_getArg(v_stx_319_, v___x_341_);
v___x_343_ = l_Lean_TSyntax_getId(v_mod_342_);
v___x_344_ = lean_unsigned_to_nat(0u);
v_tk_345_ = l_Lean_Syntax_getArg(v_stx_319_, v___x_344_);
lean_dec(v_stx_319_);
v___x_346_ = 0;
v_modLit_347_ = l_Lake_Name_quoteFrom(v_mod_342_, v___x_343_, v___x_346_);
v_ref_348_ = l_Lean_replaceRef(v_tk_345_, v_ref_340_);
lean_dec(v_tk_345_);
lean_inc(v_ref_348_);
lean_inc(v_maxRecDepth_339_);
lean_inc(v_currRecDepth_338_);
lean_inc_n(v_currMacroScope_337_, 2);
lean_inc_n(v_quotContext_336_, 2);
lean_inc(v_methods_335_);
v___x_349_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_349_, 0, v_methods_335_);
lean_ctor_set(v___x_349_, 1, v_quotContext_336_);
lean_ctor_set(v___x_349_, 2, v_currMacroScope_337_);
lean_ctor_set(v___x_349_, 3, v_currRecDepth_338_);
lean_ctor_set(v___x_349_, 4, v_maxRecDepth_339_);
lean_ctor_set(v___x_349_, 5, v_ref_348_);
v___x_350_ = l_Lean_SourceInfo_fromRef(v_ref_348_, v___x_346_);
lean_dec(v_ref_348_);
v___x_351_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4));
v___x_352_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__3, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__3_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__3);
v___x_353_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__5));
v___x_354_ = l_Lean_addMacroScope(v_quotContext_336_, v___x_353_, v_currMacroScope_337_);
v___x_355_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__10));
lean_inc_n(v___x_350_, 3);
v___x_356_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_356_, 0, v___x_350_);
lean_ctor_set(v___x_356_, 1, v___x_352_);
lean_ctor_set(v___x_356_, 2, v___x_354_);
lean_ctor_set(v___x_356_, 3, v___x_355_);
v___x_357_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17));
v___x_358_ = l_Lean_Syntax_node1(v___x_350_, v___x_357_, v_modLit_347_);
v___x_359_ = l_Lean_Syntax_node2(v___x_350_, v___x_351_, v___x_356_, v___x_358_);
v___x_360_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets(v___x_359_, v_val_334_, v___x_349_, v_a_321_);
lean_dec_ref_known(v___x_349_, 6);
lean_dec(v_val_334_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_376_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_a_362_ = lean_ctor_get(v___x_360_, 1);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_376_ == 0)
{
v___x_364_ = v___x_360_;
v_isShared_365_ = v_isSharedCheck_376_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_376_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_366_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12);
v___x_367_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15));
lean_inc(v_currMacroScope_337_);
lean_inc(v_quotContext_336_);
v___x_368_ = l_Lean_addMacroScope(v_quotContext_336_, v___x_367_, v_currMacroScope_337_);
v___x_369_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__18));
lean_inc_n(v___x_350_, 2);
v___x_370_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_370_, 0, v___x_350_);
lean_ctor_set(v___x_370_, 1, v___x_366_);
lean_ctor_set(v___x_370_, 2, v___x_368_);
lean_ctor_set(v___x_370_, 3, v___x_369_);
v___x_371_ = l_Lean_Syntax_node1(v___x_350_, v___x_357_, v_a_361_);
v___x_372_ = l_Lean_Syntax_node2(v___x_350_, v___x_351_, v___x_370_, v___x_371_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_372_);
v___x_374_ = v___x_364_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_a_362_);
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
lean_object* v_a_377_; lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec(v___x_350_);
v_a_377_ = lean_ctor_get(v___x_360_, 0);
v_a_378_ = lean_ctor_get(v___x_360_, 1);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_360_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_inc(v_a_377_);
lean_dec(v___x_360_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_377_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___boxed(lean_object* v_stx_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit(v_stx_386_, v_a_387_, v_a_388_);
lean_dec_ref(v_a_387_);
return v_res_389_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_box(0);
v___x_391_ = l_unsafeCast___redArg(v___x_390_);
return v___x_391_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__2(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__1));
v___x_394_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0);
v___x_395_ = l_Lean_Name_str___override(v___x_394_, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__3(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10));
v___x_397_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__2, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__2_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__2);
v___x_398_ = l_Lean_Name_str___override(v___x_397_, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__4(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9));
v___x_400_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__3, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__3_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__3);
v___x_401_ = l_Lean_Name_str___override(v___x_400_, v___x_399_);
return v___x_401_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__6(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__5));
v___x_404_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__4, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__4_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__4);
v___x_405_ = l_Lean_Name_str___override(v___x_404_, v___x_403_);
return v___x_405_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__7(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__6, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__6_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__6);
v___x_408_ = l_Lean_Name_num___override(v___x_407_, v___x_406_);
return v___x_408_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__8(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__10));
v___x_410_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__7, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__7_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__7);
v___x_411_ = l_Lean_Name_str___override(v___x_410_, v___x_409_);
return v___x_411_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit___closed__9));
v___x_413_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__8, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__8_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__8);
v___x_414_ = l_Lean_Name_str___override(v___x_413_, v___x_412_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__11(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__10));
v___x_417_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9);
v___x_418_ = l_Lean_Name_str___override(v___x_417_, v___x_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1(){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_420_ = l_Lean_Elab_macroAttribute;
v___x_421_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__1));
v___x_422_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__11, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__11_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__11);
v___x_423_ = lean_alloc_closure((void*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___boxed), 3, 0);
v___x_424_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_420_, v___x_421_, v___x_422_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___boxed(lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1();
return v_res_426_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__3(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__2));
v___x_434_ = l_String_toRawSubstring_x27(v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit(lean_object* v_stx_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v___y_458_; lean_object* v_tgt_459_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_495_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1));
lean_inc(v_stx_454_);
v___x_496_ = l_Lean_Syntax_isOfKind(v_stx_454_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
lean_dec(v_stx_454_);
v___x_497_ = l_Lean_Macro_throwUnsupported___redArg(v_a_456_);
return v___x_497_;
}
else
{
lean_object* v___x_498_; lean_object* v_tk_499_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_505_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v_tgt_x3f_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v_tk_499_ = l_Lean_Syntax_getArg(v_stx_454_, v___x_498_);
v___x_538_ = lean_unsigned_to_nat(1u);
v___x_539_ = l_Lean_Syntax_getArg(v_stx_454_, v___x_538_);
v___x_562_ = lean_unsigned_to_nat(2u);
v___x_563_ = l_Lean_Syntax_getArg(v_stx_454_, v___x_562_);
v___x_564_ = l_Lean_Syntax_isNone(v___x_563_);
if (v___x_564_ == 0)
{
uint8_t v___x_565_; 
lean_inc(v___x_563_);
v___x_565_ = l_Lean_Syntax_matchesNull(v___x_563_, v___x_562_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
lean_dec(v___x_563_);
lean_dec(v___x_539_);
lean_dec(v_tk_499_);
lean_dec(v_stx_454_);
v___x_566_ = l_Lean_Macro_throwUnsupported___redArg(v_a_456_);
return v___x_566_;
}
else
{
lean_object* v_tgt_x3f_567_; lean_object* v___x_568_; 
v_tgt_x3f_567_ = l_Lean_Syntax_getArg(v___x_563_, v___x_538_);
lean_dec(v___x_563_);
v___x_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_568_, 0, v_tgt_x3f_567_);
v_tgt_x3f_541_ = v___x_568_;
v___y_542_ = v_a_455_;
v___y_543_ = v_a_456_;
goto v___jp_540_;
}
}
else
{
lean_object* v___x_569_; 
lean_dec(v___x_563_);
v___x_569_ = lean_box(0);
v_tgt_x3f_541_ = v___x_569_;
v___y_542_ = v_a_455_;
v___y_543_ = v_a_456_;
goto v___jp_540_;
}
v___jp_500_:
{
lean_object* v_methods_506_; lean_object* v_quotContext_507_; lean_object* v_currMacroScope_508_; lean_object* v_currRecDepth_509_; lean_object* v_maxRecDepth_510_; lean_object* v_ref_511_; lean_object* v_ref_512_; lean_object* v___x_513_; 
v_methods_506_ = lean_ctor_get(v___y_504_, 0);
v_quotContext_507_ = lean_ctor_get(v___y_504_, 1);
v_currMacroScope_508_ = lean_ctor_get(v___y_504_, 2);
v_currRecDepth_509_ = lean_ctor_get(v___y_504_, 3);
v_maxRecDepth_510_ = lean_ctor_get(v___y_504_, 4);
v_ref_511_ = lean_ctor_get(v___y_504_, 5);
v_ref_512_ = l_Lean_replaceRef(v_tk_499_, v_ref_511_);
lean_dec(v_tk_499_);
lean_inc(v_ref_512_);
lean_inc(v_maxRecDepth_510_);
lean_inc(v_currRecDepth_509_);
lean_inc(v_currMacroScope_508_);
lean_inc(v_quotContext_507_);
lean_inc(v_methods_506_);
v___x_513_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_513_, 0, v_methods_506_);
lean_ctor_set(v___x_513_, 1, v_quotContext_507_);
lean_ctor_set(v___x_513_, 2, v_currMacroScope_508_);
lean_ctor_set(v___x_513_, 3, v_currRecDepth_509_);
lean_ctor_set(v___x_513_, 4, v_maxRecDepth_510_);
lean_ctor_set(v___x_513_, 5, v_ref_512_);
if (lean_obj_tag(v___y_502_) == 1)
{
lean_object* v_val_514_; lean_object* v___x_515_; 
lean_dec(v_ref_512_);
v_val_514_ = lean_ctor_get(v___y_502_, 0);
lean_inc(v_val_514_);
lean_dec_ref_known(v___y_502_, 1);
v___x_515_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetLit(v___y_505_, v_val_514_, v___x_513_, v___y_501_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v_a_517_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
v_a_517_ = lean_ctor_get(v___x_515_, 1);
lean_inc(v_a_517_);
lean_dec_ref_known(v___x_515_, 2);
v___y_458_ = v___y_503_;
v_tgt_459_ = v_a_516_;
v___y_460_ = v___x_513_;
v___y_461_ = v_a_517_;
goto v___jp_457_;
}
else
{
lean_object* v_a_518_; lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref_known(v___x_513_, 6);
lean_dec_ref(v___y_503_);
v_a_518_ = lean_ctor_get(v___x_515_, 0);
v_a_519_ = lean_ctor_get(v___x_515_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_515_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_inc(v_a_518_);
lean_dec(v___x_515_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_518_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec(v___y_502_);
v___x_527_ = 0;
v___x_528_ = l_Lean_SourceInfo_fromRef(v_ref_512_, v___x_527_);
lean_dec(v_ref_512_);
v___x_529_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4));
v___x_530_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__3, &l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__3_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__3);
v___x_531_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__5));
lean_inc(v_currMacroScope_508_);
lean_inc(v_quotContext_507_);
v___x_532_ = l_Lean_addMacroScope(v_quotContext_507_, v___x_531_, v_currMacroScope_508_);
v___x_533_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__10));
lean_inc_n(v___x_528_, 2);
v___x_534_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_534_, 0, v___x_528_);
lean_ctor_set(v___x_534_, 1, v___x_530_);
lean_ctor_set(v___x_534_, 2, v___x_532_);
lean_ctor_set(v___x_534_, 3, v___x_533_);
v___x_535_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17));
v___x_536_ = l_Lean_Syntax_node1(v___x_528_, v___x_535_, v___y_505_);
v___x_537_ = l_Lean_Syntax_node2(v___x_528_, v___x_529_, v___x_534_, v___x_536_);
v___y_458_ = v___y_503_;
v_tgt_459_ = v___x_537_;
v___y_460_ = v___x_513_;
v___y_461_ = v___y_501_;
goto v___jp_457_;
}
}
v___jp_540_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; size_t v_sz_547_; size_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_544_ = lean_unsigned_to_nat(3u);
v___x_545_ = l_Lean_Syntax_getArg(v_stx_454_, v___x_544_);
lean_dec(v_stx_454_);
v___x_546_ = l_Lean_Syntax_getArgs(v___x_545_);
lean_dec(v___x_545_);
v_sz_547_ = lean_array_size(v___x_546_);
v___x_548_ = ((size_t)0ULL);
v___x_549_ = l_unsafeCast___redArg(v___x_546_);
lean_dec_ref(v___x_546_);
v___x_550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit_spec__0(v_sz_547_, v___x_548_, v___x_549_);
v___x_551_ = l_unsafeCast___redArg(v___x_550_);
lean_dec(v___x_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v___x_552_; 
lean_dec(v_tgt_x3f_541_);
lean_dec(v___x_539_);
lean_dec(v_tk_499_);
v___x_552_ = l_Lean_Macro_throwUnsupported___redArg(v___y_543_);
return v___x_552_;
}
else
{
lean_object* v_val_553_; lean_object* v___x_554_; 
v_val_553_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_val_553_);
lean_dec_ref_known(v___x_551_, 1);
v___x_554_ = l_Lean_Syntax_getOptional_x3f(v___x_539_);
lean_dec(v___x_539_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v___x_555_; uint8_t v___x_556_; lean_object* v___x_557_; 
v___x_555_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__0);
v___x_556_ = 0;
lean_inc(v_tk_499_);
v___x_557_ = l_Lake_Name_quoteFrom(v_tk_499_, v___x_555_, v___x_556_);
v___y_501_ = v___y_543_;
v___y_502_ = v_tgt_x3f_541_;
v___y_503_ = v_val_553_;
v___y_504_ = v___y_542_;
v___y_505_ = v___x_557_;
goto v___jp_500_;
}
else
{
lean_object* v_val_558_; lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v___x_561_; 
v_val_558_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v___x_554_, 1);
v___x_559_ = l_Lean_TSyntax_getId(v_val_558_);
v___x_560_ = 0;
v___x_561_ = l_Lake_Name_quoteFrom(v_val_558_, v___x_559_, v___x_560_);
v___y_501_ = v___y_543_;
v___y_502_ = v_tgt_x3f_541_;
v___y_503_ = v_val_553_;
v___y_504_ = v___y_542_;
v___y_505_ = v___x_561_;
goto v___jp_500_;
}
}
}
}
v___jp_457_:
{
lean_object* v___x_462_; 
v___x_462_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandFacets(v_tgt_459_, v___y_458_, v___y_460_, v___y_461_);
lean_dec_ref(v___y_458_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_485_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
v_a_464_ = lean_ctor_get(v___x_462_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_485_ == 0)
{
v___x_466_ = v___x_462_;
v_isShared_467_ = v_isSharedCheck_485_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_inc(v_a_463_);
lean_dec(v___x_462_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_485_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v_quotContext_468_; lean_object* v_currMacroScope_469_; lean_object* v_ref_470_; uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v_quotContext_468_ = lean_ctor_get(v___y_460_, 1);
lean_inc(v_quotContext_468_);
v_currMacroScope_469_ = lean_ctor_get(v___y_460_, 2);
lean_inc(v_currMacroScope_469_);
v_ref_470_ = lean_ctor_get(v___y_460_, 5);
lean_inc(v_ref_470_);
lean_dec_ref(v___y_460_);
v___x_471_ = 0;
v___x_472_ = l_Lean_SourceInfo_fromRef(v_ref_470_, v___x_471_);
lean_dec(v_ref_470_);
v___x_473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__4));
v___x_474_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__12);
v___x_475_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__15));
v___x_476_ = l_Lean_addMacroScope(v_quotContext_468_, v___x_475_, v_currMacroScope_469_);
v___x_477_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___closed__18));
lean_inc_n(v___x_472_, 2);
v___x_478_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_478_, 0, v___x_472_);
lean_ctor_set(v___x_478_, 1, v___x_474_);
lean_ctor_set(v___x_478_, 2, v___x_476_);
lean_ctor_set(v___x_478_, 3, v___x_477_);
v___x_479_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_DSL_Key_0__Lake_DSL_expandFacets_spec__1___closed__17));
v___x_480_ = l_Lean_Syntax_node1(v___x_472_, v___x_479_, v_a_463_);
v___x_481_ = l_Lean_Syntax_node2(v___x_472_, v___x_473_, v___x_478_, v___x_480_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_481_);
v___x_483_ = v___x_466_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_a_464_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
else
{
lean_object* v_a_486_; lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
lean_dec_ref(v___y_460_);
v_a_486_ = lean_ctor_get(v___x_462_, 0);
v_a_487_ = lean_ctor_get(v___x_462_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_462_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_inc(v_a_486_);
lean_dec(v___x_462_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_486_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___boxed(lean_object* v_stx_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit(v_stx_570_, v_a_571_, v_a_572_);
lean_dec_ref(v_a_571_);
return v_res_573_;
}
}
static lean_object* _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__1(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__0));
v___x_576_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9, &l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1___closed__9);
v___x_577_ = l_Lean_Name_str___override(v___x_576_, v___x_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1(){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_579_ = l_Lean_Elab_macroAttribute;
v___x_580_ = ((lean_object*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___closed__1));
v___x_581_ = lean_obj_once(&l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__1, &l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__1_once, _init_l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___closed__1);
v___x_582_ = lean_alloc_closure((void*)(l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___boxed), 3, 0);
v___x_583_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_579_, v___x_580_, v___x_581_, v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1___boxed(lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1();
return v_res_585_;
}
}
lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_DSL_Key(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandModuleTargetKeyLit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit___regBuiltin___private_Lake_DSL_Key_0__Lake_DSL_expandPackageTargetKeyLit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_DSL_Key(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Key(uint8_t builtin);
lean_object* initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_DSL_Key(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_DSL_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_DSL_Key(builtin);
}
#ifdef __cplusplus
}
#endif

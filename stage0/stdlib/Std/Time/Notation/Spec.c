// Lean compiler output
// Module: Std.Time.Notation.Spec
// Imports: public import Std.Time.Format.Basic public meta import Std.Time.Format.Basic
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
extern lean_object* l_Std_Time_DateFormat_enUS;
lean_object* l_Std_Time_GenericFormat_spec___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Text.short"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Time"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Text"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "short"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(173, 214, 90, 117, 56, 8, 198, 188)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(26, 39, 135, 112, 213, 217, 93, 143)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__8_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__9_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__7_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__9_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__10_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Time.Text.full"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__11_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__12;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "full"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(173, 214, 90, 117, 56, 8, 198, 188)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value),LEAN_SCALAR_PTR_LITERAL(249, 161, 82, 63, 128, 99, 134, 35)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__15_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__16_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__17_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__15_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__17_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__18 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__18_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Std.Time.Text.narrow"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__19_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__20;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "narrow"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(173, 214, 90, 117, 56, 8, 198, 188)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__21_value),LEAN_SCALAR_PTR_LITERAL(222, 165, 179, 214, 155, 106, 191, 242)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__23_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__24 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__24_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__25 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__25_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__23_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__25_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__26 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__26_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.Text.twoLetterShort"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__27 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__27_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__28;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "twoLetterShort"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__29 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__29_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(173, 214, 90, 117, 56, 8, 198, 188)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__29_value),LEAN_SCALAR_PTR_LITERAL(168, 63, 137, 16, 74, 20, 200, 159)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__31 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__31_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__32 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__32_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__33 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__33_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__31_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__33_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__34 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__34_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Time.Number.mk"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__5_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__6;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Number"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__7_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__8_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__7_value),LEAN_SCALAR_PTR_LITERAL(149, 31, 30, 146, 171, 66, 77, 169)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__8_value),LEAN_SCALAR_PTR_LITERAL(17, 215, 130, 19, 65, 152, 2, 206)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__10_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__10_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__12_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__13_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__14_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Std.Time.Fraction.nano"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Fraction"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "nano"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 147, 200, 1, 236, 88, 4, 2)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 130, 55, 186, 177, 120, 199, 35)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__5_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__7_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__8_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Std.Time.Fraction.truncated"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__9_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__10;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "truncated"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 147, 200, 1, 236, 88, 4, 2)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__11_value),LEAN_SCALAR_PTR_LITERAL(245, 244, 158, 231, 210, 230, 8, 254)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__15_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__13_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__15_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__16_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Std.Time.Year.any"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Year"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "any"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 61, 104, 127, 147, 223, 116, 59)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 87, 37, 32, 28, 199, 229, 134)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__5_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__7_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__8_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Std.Time.Year.twoDigit"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__9_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__10;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "twoDigit"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 61, 104, 127, 147, 223, 116, 59)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__11_value),LEAN_SCALAR_PTR_LITERAL(10, 27, 61, 34, 208, 129, 36, 157)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__15_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__13_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__15_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__16_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.Year.fourDigit"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__17_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__18;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fourDigit"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__19_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 61, 104, 127, 147, 223, 116, 59)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__19_value),LEAN_SCALAR_PTR_LITERAL(251, 28, 132, 113, 104, 79, 27, 228)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__23_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__21_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__23_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__24 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__24_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Std.Time.Year.extended"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__25 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__25_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__26;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "extended"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__27 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__27_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 61, 104, 127, 147, 223, 116, 59)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__27_value),LEAN_SCALAR_PTR_LITERAL(173, 52, 201, 124, 50, 137, 219, 209)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__29 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__29_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__30 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__30_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__31 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__31_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__29_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__31_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__32 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__32_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.ZoneId.unknown"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ZoneId"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 155, 217, 32, 218, 79, 133, 226)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 61, 96, 224, 240, 156, 239, 4)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__5_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__7_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__8_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.ZoneId.short"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__9_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__10;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 155, 217, 32, 218, 79, 133, 226)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(208, 236, 57, 76, 90, 0, 9, 31)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__12_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__14_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__15_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Std.Time.ZoneId.full"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__16_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__17;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 155, 217, 32, 218, 79, 133, 226)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 171, 27, 57, 53, 132, 168)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__19_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__19_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__21_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__22_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.ZoneName.short"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ZoneName"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 221, 249, 71, 196, 230, 130, 14)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 208, 46, 14, 98, 17, 211, 187)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__4_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__7_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Std.Time.ZoneName.full"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__8_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__9;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 221, 249, 71, 196, 230, 130, 14)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value),LEAN_SCALAR_PTR_LITERAL(227, 76, 103, 143, 218, 9, 212, 240)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__11_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__13_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__14_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.OffsetX.hour"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OffsetX"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hour"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 17, 42, 12, 20, 221, 211, 164)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__3_value),LEAN_SCALAR_PTR_LITERAL(94, 128, 73, 10, 93, 38, 17, 147)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__5_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__7_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__8_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Std.Time.OffsetX.hourMinute"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__9_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__10;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hourMinute"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 17, 42, 12, 20, 221, 211, 164)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__11_value),LEAN_SCALAR_PTR_LITERAL(224, 164, 8, 144, 244, 85, 185, 49)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__15_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__13_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__15_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__16_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Std.Time.OffsetX.hourMinuteColon"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__17_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__18;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "hourMinuteColon"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__19_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 17, 42, 12, 20, 221, 211, 164)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 14, 191, 247, 70, 78, 152, 94)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__23_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__21_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__23_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__24 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__24_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Time.OffsetX.hourMinuteSecond"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__25 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__25_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__26;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "hourMinuteSecond"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__27 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__27_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 17, 42, 12, 20, 221, 211, 164)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__27_value),LEAN_SCALAR_PTR_LITERAL(225, 206, 103, 171, 252, 66, 132, 235)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__29 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__29_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__30 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__30_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__31 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__31_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__29_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__31_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__32 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__32_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Std.Time.OffsetX.hourMinuteSecondColon"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__33 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__33_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__34;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "hourMinuteSecondColon"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__35 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__35_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 17, 42, 12, 20, 221, 211, 164)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__35_value),LEAN_SCALAR_PTR_LITERAL(140, 30, 191, 40, 228, 93, 219, 98)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__37 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__37_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__38 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__38_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__39 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__39_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__37_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__39_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__40 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__40_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Std.Time.OffsetO.short"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OffsetO"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 124, 82, 133, 197, 108, 218, 207)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(12, 166, 178, 82, 100, 100, 15, 194)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__4_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__7_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.OffsetO.full"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__8_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__9;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 124, 82, 133, 197, 108, 218, 207)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value),LEAN_SCALAR_PTR_LITERAL(87, 208, 214, 192, 175, 181, 101, 171)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__11_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__13_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__14_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Std.Time.OffsetZ.hourMinute"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OffsetZ"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 154, 120, 218, 15, 36, 228, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__11_value),LEAN_SCALAR_PTR_LITERAL(17, 33, 135, 180, 146, 21, 133, 89)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__4_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__7_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.OffsetZ.full"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__8_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__9;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 154, 120, 218, 15, 36, 228, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__13_value),LEAN_SCALAR_PTR_LITERAL(161, 2, 237, 139, 76, 238, 101, 192)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__11_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__13_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__14_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Std.Time.OffsetZ.hourMinuteSecondColon"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__15_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__16;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 154, 120, 218, 15, 36, 228, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__35_value),LEAN_SCALAR_PTR_LITERAL(5, 26, 115, 31, 113, 82, 202, 87)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__18 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__18_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__19_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__18_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__20_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__21_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.G"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__1;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Modifier"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "G"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__3_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 232, 180, 245, 222, 138, 191)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__5_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__7_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__8_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.u"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__9_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__10;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__11_value),LEAN_SCALAR_PTR_LITERAL(147, 80, 165, 32, 82, 240, 32, 222)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__14_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__15_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__13_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__15_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__16_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.y"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__17_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__18;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__19_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__19_value),LEAN_SCALAR_PTR_LITERAL(115, 95, 28, 131, 21, 96, 16, 178)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__23_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__21_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__23_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__24 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__24_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.D"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__25 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__25_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__26;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "D"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__27 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__27_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__27_value),LEAN_SCALAR_PTR_LITERAL(110, 212, 173, 37, 208, 12, 21, 131)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__29 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__29_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__30 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__30_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__31 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__31_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__29_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__31_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__32 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__32_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.M"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__33 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__33_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__35 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__35_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__35_value),LEAN_SCALAR_PTR_LITERAL(176, 179, 166, 105, 244, 184, 142, 60)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__37 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__37_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__38 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__38_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__39 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__39_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__37_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__39_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__40 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__40_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__41 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__41_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__41_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__43 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__43_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__43_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__46 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__46_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__46_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__48 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__48_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__51_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__51 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__51_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__51_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__52 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__52_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__53 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__53_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__53_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__54 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__54_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__55 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__55_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__55_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__56_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__57 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__57_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__58_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__58 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__58_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__58_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__59 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__59_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__60 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__60_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__60_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__61 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__61_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__61_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__62 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__62_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__59_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__62_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__63 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__63_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__57_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__63_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__64 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__64_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__54_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__64_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__65 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__65_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__52_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__65_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__67 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__67_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__67_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__70 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__70_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__70_value),LEAN_SCALAR_PTR_LITERAL(86, 142, 99, 99, 156, 120, 56, 132)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__74 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__74_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__74_value),LEAN_SCALAR_PTR_LITERAL(209, 212, 202, 104, 137, 8, 49, 108)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.L"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__77 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__77_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "L"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__79 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__79_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__79_value),LEAN_SCALAR_PTR_LITERAL(10, 49, 255, 3, 30, 59, 119, 162)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__81 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__81_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__82 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__82_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__82_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__83 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__83_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__81_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__83_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__84 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__84_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.d"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__85 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__85_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__86;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__87 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__87_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__87_value),LEAN_SCALAR_PTR_LITERAL(43, 177, 95, 132, 207, 75, 80, 59)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__89 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__89_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__90 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__90_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__90_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__91 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__91_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__89_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__91_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__92 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__92_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.Q"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__93 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__93_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Q"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__95 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__95_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__95_value),LEAN_SCALAR_PTR_LITERAL(2, 45, 222, 148, 85, 12, 195, 87)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__97 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__97_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__98 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__98_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__98_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__99 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__99_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__97_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__99_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__100 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__100_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.q"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__101 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__101_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "q"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__103 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__103_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__103_value),LEAN_SCALAR_PTR_LITERAL(236, 248, 36, 9, 92, 215, 91, 102)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__105 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__105_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__106 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__106_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__106_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__107 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__107_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__105_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__107_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__108 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__108_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.Y"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__109 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__109_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__110;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Y"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__111 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__111_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__111_value),LEAN_SCALAR_PTR_LITERAL(14, 155, 135, 75, 42, 253, 153, 241)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__113 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__113_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__114 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__114_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__114_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__115 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__115_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__113_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__115_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__116 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__116_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.w"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__117 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__117_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__118;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "w"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__119 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__119_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__119_value),LEAN_SCALAR_PTR_LITERAL(109, 122, 115, 3, 58, 174, 210, 61)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__121 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__121_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__122 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__122_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__122_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__123 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__123_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__121_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__123_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__124 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__124_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.W"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__125 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__125_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__126;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "W"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__127 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__127_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__127_value),LEAN_SCALAR_PTR_LITERAL(142, 210, 249, 219, 201, 68, 141, 242)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__129 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__129_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__130 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__130_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__130_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__131 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__131_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__129_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__131_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__132 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__132_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.E"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__133 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__133_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__134;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "E"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__135 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__135_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__135_value),LEAN_SCALAR_PTR_LITERAL(221, 114, 205, 107, 57, 101, 237, 55)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__137 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__137_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__138 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__138_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__138_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__139 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__139_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__137_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__139_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__140 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__140_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.e"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__141 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__141_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__143 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__143_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__143_value),LEAN_SCALAR_PTR_LITERAL(65, 97, 136, 164, 196, 185, 6, 236)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__145 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__145_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__146 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__146_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__146_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__147 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__147_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__145_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__147_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__148 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__148_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.c"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__149 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__149_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__151_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__151 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__151_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__151_value),LEAN_SCALAR_PTR_LITERAL(85, 172, 192, 170, 145, 101, 192, 197)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__153 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__153_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__154 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__154_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__154_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__155 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__155_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__153_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__155_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__156 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__156_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.F"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__157 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__157_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__158_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__158;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "F"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__159 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__159_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__159_value),LEAN_SCALAR_PTR_LITERAL(255, 172, 252, 76, 184, 53, 176, 25)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__161 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__161_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__162 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__162_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__163_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__162_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__163 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__163_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__164_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__161_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__163_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__164 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__164_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__165_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.a"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__165 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__165_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__166_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__166;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__167_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__167 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__167_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__167_value),LEAN_SCALAR_PTR_LITERAL(36, 69, 244, 234, 150, 73, 242, 198)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__169 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__169_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__170_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__170 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__170_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__171_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__170_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__171 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__171_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__172_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__169_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__171_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__172 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__172_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__173_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.b"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__173 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__173_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__174_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__174;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__175_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__175 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__175_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__175_value),LEAN_SCALAR_PTR_LITERAL(44, 133, 176, 52, 47, 30, 166, 26)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__177_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__177 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__177_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__178_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__178 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__178_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__178_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__179 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__179_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__180_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__177_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__179_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__180 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__180_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__181_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.B"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__181 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__181_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__182_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__182;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__183_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__183 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__183_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__183_value),LEAN_SCALAR_PTR_LITERAL(235, 206, 18, 37, 245, 139, 43, 135)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__185_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__185 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__185_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__186_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__186 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__186_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__187_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__186_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__187 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__187_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__188_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__185_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__187_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__188 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__188_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__189_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.h"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__189 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__189_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__190_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__190;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__191_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__191 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__191_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__191_value),LEAN_SCALAR_PTR_LITERAL(171, 19, 0, 95, 105, 8, 122, 135)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__193_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__193 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__193_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__194_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__194 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__194_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__195_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__194_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__195 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__195_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__196_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__193_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__195_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__196 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__196_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__197_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.K"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__197 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__197_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__198_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__198;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__199_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "K"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__199 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__199_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__199_value),LEAN_SCALAR_PTR_LITERAL(175, 237, 107, 230, 188, 207, 116, 239)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__201_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__201 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__201_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__202_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__202 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__202_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__203_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__202_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__203 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__203_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__204_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__201_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__203_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__204 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__204_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__205_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.k"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__205 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__205_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__206_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__206;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__207_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__207 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__207_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__207_value),LEAN_SCALAR_PTR_LITERAL(186, 55, 92, 94, 160, 8, 215, 223)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__209_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__209 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__209_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__210_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__210 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__210_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__211_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__210_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__211 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__211_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__212_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__209_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__211_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__212 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__212_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__213_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.H"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__213 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__213_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__214_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__214;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__215_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "H"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__215 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__215_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__215_value),LEAN_SCALAR_PTR_LITERAL(202, 31, 161, 0, 128, 16, 18, 169)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__217_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__217 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__217_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__218_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__218 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__218_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__219_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__218_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__219 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__219_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__220_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__217_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__219_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__220 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__220_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__221_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.m"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__221 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__221_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__222_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__222;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__223_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__223 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__223_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__223_value),LEAN_SCALAR_PTR_LITERAL(118, 254, 173, 99, 0, 222, 89, 33)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__225_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__225 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__225_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__226_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__226 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__226_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__227_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__226_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__227 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__227_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__228_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__225_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__227_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__228 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__228_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__229_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.s"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__229 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__229_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__230_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__230;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__231_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__231 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__231_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__231_value),LEAN_SCALAR_PTR_LITERAL(80, 170, 75, 145, 176, 122, 31, 111)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__233_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__233 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__233_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__234_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__234 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__234_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__235_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__234_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__235 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__235_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__236_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__233_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__235_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__236 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__236_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__237_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.S"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__237 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__237_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__238_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__238;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__239_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "S"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__239 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__239_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__239_value),LEAN_SCALAR_PTR_LITERAL(61, 110, 227, 5, 165, 49, 182, 207)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__241_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__241 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__241_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__242_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__242 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__242_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__243_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__242_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__243 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__243_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__244_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__241_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__243_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__244 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__244_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__245_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.A"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__245 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__245_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__246_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__246;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__247_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "A"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__247 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__247_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__247_value),LEAN_SCALAR_PTR_LITERAL(254, 42, 156, 100, 183, 179, 31, 180)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__249_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__249 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__249_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__250_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__250 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__250_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__251_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__250_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__251 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__251_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__252_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__249_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__251_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__252 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__252_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__253_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.n"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__253 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__253_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__254_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__254;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__255_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__255 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__255_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__255_value),LEAN_SCALAR_PTR_LITERAL(38, 78, 251, 143, 117, 169, 85, 233)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__257_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__257 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__257_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__258_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__258 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__258_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__259_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__258_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__259 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__259_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__260_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__257_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__259_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__260 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__260_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__261_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.N"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__261 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__261_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__262_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__262;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__263_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "N"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__263 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__263_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__263_value),LEAN_SCALAR_PTR_LITERAL(139, 9, 15, 62, 231, 211, 146, 60)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__265_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__265 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__265_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__266_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__266 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__266_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__267_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__266_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__267 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__267_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__268_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__265_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__267_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__268 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__268_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__269_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.V"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__269 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__269_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__270_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__270;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__271_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "V"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__271 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__271_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__271_value),LEAN_SCALAR_PTR_LITERAL(49, 190, 37, 135, 7, 5, 128, 4)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__273_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__273 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__273_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__274_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__274 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__274_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__275_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__274_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__275 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__275_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__276_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__273_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__275_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__276 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__276_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__277_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.z"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__277 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__277_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__278_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__278;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__279_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "z"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__279 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__279_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__279_value),LEAN_SCALAR_PTR_LITERAL(181, 218, 97, 100, 129, 163, 177, 227)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__281_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__281 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__281_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__282_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__282 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__282_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__283_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__282_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__283 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__283_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__284_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__281_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__283_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__284 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__284_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__285_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.v"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__285 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__285_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__286_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__286;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__287_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "v"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__287 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__287_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__287_value),LEAN_SCALAR_PTR_LITERAL(213, 204, 59, 153, 58, 232, 246, 39)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__289_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__289 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__289_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__290_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__290 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__290_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__291_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__290_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__291 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__291_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__292_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__289_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__291_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__292 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__292_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__293_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.O"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__293 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__293_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__294_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__294;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__295_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "O"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__295 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__295_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__295_value),LEAN_SCALAR_PTR_LITERAL(58, 151, 205, 45, 234, 213, 167, 33)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__297_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__297 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__297_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__298_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__298 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__298_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__299_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__298_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__299 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__299_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__300_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__297_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__299_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__300 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__300_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__301_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.X"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__301 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__301_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__302_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__302;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__303_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__303 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__303_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__303_value),LEAN_SCALAR_PTR_LITERAL(26, 41, 196, 142, 13, 161, 206, 121)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__305_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__305 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__305_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__306_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__306 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__306_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__307_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__306_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__307 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__307_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__308_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__305_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__307_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__308 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__308_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__309_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.x"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__309 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__309_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__310_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__310;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__311_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__311 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__311_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__311_value),LEAN_SCALAR_PTR_LITERAL(200, 2, 62, 177, 15, 17, 219, 69)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__313_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__313 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__313_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__314_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__314 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__314_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__315_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__314_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__315 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__315_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__316_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__313_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__315_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__316 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__316_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__317_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.Time.Modifier.Z"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__317 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__317_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__318_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__318;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__319_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__319 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__319_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 108, 36, 40, 30, 100, 55, 195)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__319_value),LEAN_SCALAR_PTR_LITERAL(44, 18, 171, 9, 22, 243, 82, 66)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__321_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__321 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__321_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__322_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__322 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__322_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__323_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__322_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__323 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__323_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__324_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__321_value),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__323_value)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__324 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__324_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__1;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 56, 52, 137, 138, 241, 128, 175)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "modifier"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__3_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__4;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 238, 236, 22, 130, 68, 194, 201)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_termDatespec_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "termDatespec(_)"};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 128, 190, 137, 197, 98, 142, 204)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termDatespec_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__3_value;
static const lean_string_object l_Std_Time_termDatespec_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "datespec("};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__4_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__5_value;
static const lean_string_object l_Std_Time_termDatespec_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__6_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__7 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__7_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__7_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__8 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__8_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__5_value),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__9 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__9_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__10 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__10_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__9_value),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__10_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__11 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__11_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x29___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__11_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x29___closed__12 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__12_value;
LEAN_EXPORT const lean_object* l_Std_Time_termDatespec_x28___x29 = (const lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__12_value;
static const lean_string_object l_Std_Time_termDatespec_x28___x2c___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDatespec(_,_)"};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__0 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 74, 99, 46, 223, 91, 91, 115)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__1 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value;
static const lean_string_object l_Std_Time_termDatespec_x28___x2c___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__2 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__3 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__9_value),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__3_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__4 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__4_value;
static const lean_string_object l_Std_Time_termDatespec_x28___x2c___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__5 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__5_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__6 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__6_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__7 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__7_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__4_value),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__7_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__8 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__8_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__8_value),((lean_object*)&l_Std_Time_termDatespec_x28___x29___closed__10_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__9 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__9_value;
static const lean_ctor_object l_Std_Time_termDatespec_x28___x2c___x29___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__9_value)}};
static const lean_object* l_Std_Time_termDatespec_x28___x2c___x29___closed__10 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__10_value;
LEAN_EXPORT const lean_object* l_Std_Time_termDatespec_x28___x2c___x29 = (const lean_object*)&l_Std_Time_termDatespec_x28___x2c___x29___closed__10_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__0;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cannot compile spec: "};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__1 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__1_value;
static const lean_array_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__3_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__5_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__6_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__7_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__8_value;
static lean_once_cell_t l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__10_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__11_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term{}"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__12_value),LEAN_SCALAR_PTR_LITERAL(44, 141, 217, 101, 193, 131, 35, 71)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__13_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__14_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__15_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__16_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__16_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__18 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__18_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__18_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__20_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21_value;
static const lean_string_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__22_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__23_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x2c___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x2c___x29__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__0));
v___x_3_ = l_String_toRawSubstring_x27(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__12(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__11));
v___x_26_ = l_String_toRawSubstring_x27(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__20(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__19));
v___x_46_ = l_String_toRawSubstring_x27(v___x_45_);
return v___x_46_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__28(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__27));
v___x_66_ = l_String_toRawSubstring_x27(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(uint8_t v_x_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
switch(v_x_84_)
{
case 0:
{
lean_object* v_quotContext_87_; lean_object* v_currMacroScope_88_; lean_object* v_ref_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_quotContext_87_ = lean_ctor_get(v_a_85_, 1);
v_currMacroScope_88_ = lean_ctor_get(v_a_85_, 2);
v_ref_89_ = lean_ctor_get(v_a_85_, 5);
v___x_90_ = 0;
v___x_91_ = l_Lean_SourceInfo_fromRef(v_ref_89_, v___x_90_);
v___x_92_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__1);
v___x_93_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__6));
lean_inc(v_currMacroScope_88_);
lean_inc(v_quotContext_87_);
v___x_94_ = l_Lean_addMacroScope(v_quotContext_87_, v___x_93_, v_currMacroScope_88_);
v___x_95_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__10));
v___x_96_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_96_, 0, v___x_91_);
lean_ctor_set(v___x_96_, 1, v___x_92_);
lean_ctor_set(v___x_96_, 2, v___x_94_);
lean_ctor_set(v___x_96_, 3, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_86_);
return v___x_97_;
}
case 1:
{
lean_object* v_quotContext_98_; lean_object* v_currMacroScope_99_; lean_object* v_ref_100_; uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_quotContext_98_ = lean_ctor_get(v_a_85_, 1);
v_currMacroScope_99_ = lean_ctor_get(v_a_85_, 2);
v_ref_100_ = lean_ctor_get(v_a_85_, 5);
v___x_101_ = 0;
v___x_102_ = l_Lean_SourceInfo_fromRef(v_ref_100_, v___x_101_);
v___x_103_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__12, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__12_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__12);
v___x_104_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__14));
lean_inc(v_currMacroScope_99_);
lean_inc(v_quotContext_98_);
v___x_105_ = l_Lean_addMacroScope(v_quotContext_98_, v___x_104_, v_currMacroScope_99_);
v___x_106_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__18));
v___x_107_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_107_, 0, v___x_102_);
lean_ctor_set(v___x_107_, 1, v___x_103_);
lean_ctor_set(v___x_107_, 2, v___x_105_);
lean_ctor_set(v___x_107_, 3, v___x_106_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v_a_86_);
return v___x_108_;
}
case 2:
{
lean_object* v_quotContext_109_; lean_object* v_currMacroScope_110_; lean_object* v_ref_111_; uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_quotContext_109_ = lean_ctor_get(v_a_85_, 1);
v_currMacroScope_110_ = lean_ctor_get(v_a_85_, 2);
v_ref_111_ = lean_ctor_get(v_a_85_, 5);
v___x_112_ = 0;
v___x_113_ = l_Lean_SourceInfo_fromRef(v_ref_111_, v___x_112_);
v___x_114_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__20, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__20_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__20);
v___x_115_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__22));
lean_inc(v_currMacroScope_110_);
lean_inc(v_quotContext_109_);
v___x_116_ = l_Lean_addMacroScope(v_quotContext_109_, v___x_115_, v_currMacroScope_110_);
v___x_117_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__26));
v___x_118_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_118_, 0, v___x_113_);
lean_ctor_set(v___x_118_, 1, v___x_114_);
lean_ctor_set(v___x_118_, 2, v___x_116_);
lean_ctor_set(v___x_118_, 3, v___x_117_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v_a_86_);
return v___x_119_;
}
default: 
{
lean_object* v_quotContext_120_; lean_object* v_currMacroScope_121_; lean_object* v_ref_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_quotContext_120_ = lean_ctor_get(v_a_85_, 1);
v_currMacroScope_121_ = lean_ctor_get(v_a_85_, 2);
v_ref_122_ = lean_ctor_get(v_a_85_, 5);
v___x_123_ = 0;
v___x_124_ = l_Lean_SourceInfo_fromRef(v_ref_122_, v___x_123_);
v___x_125_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__28, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__28_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__28);
v___x_126_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__30));
lean_inc(v_currMacroScope_121_);
lean_inc(v_quotContext_120_);
v___x_127_ = l_Lean_addMacroScope(v_quotContext_120_, v___x_126_, v_currMacroScope_121_);
v___x_128_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___closed__34));
v___x_129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_129_, 0, v___x_124_);
lean_ctor_set(v___x_129_, 1, v___x_125_);
lean_ctor_set(v___x_129_, 2, v___x_127_);
lean_ctor_set(v___x_129_, 3, v___x_128_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v_a_86_);
return v___x_130_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertText___boxed(lean_object* v_x_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
uint8_t v_x_5371__boxed_134_; lean_object* v_res_135_; 
v_x_5371__boxed_134_ = lean_unbox(v_x_131_);
v_res_135_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v_x_5371__boxed_134_, v_a_132_, v_a_133_);
lean_dec_ref(v_a_132_);
return v_res_135_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__6(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__5));
v___x_147_ = l_String_toRawSubstring_x27(v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(lean_object* v_x_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_quotContext_172_; lean_object* v_currMacroScope_173_; lean_object* v_ref_174_; uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_quotContext_172_ = lean_ctor_get(v_a_170_, 1);
v_currMacroScope_173_ = lean_ctor_get(v_a_170_, 2);
v_ref_174_ = lean_ctor_get(v_a_170_, 5);
v___x_175_ = 0;
v___x_176_ = l_Lean_SourceInfo_fromRef(v_ref_174_, v___x_175_);
v___x_177_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_178_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__6, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__6_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__6);
v___x_179_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__9));
lean_inc(v_currMacroScope_173_);
lean_inc(v_quotContext_172_);
v___x_180_ = l_Lean_addMacroScope(v_quotContext_172_, v___x_179_, v_currMacroScope_173_);
v___x_181_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__13));
lean_inc_n(v___x_176_, 2);
v___x_182_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_182_, 0, v___x_176_);
lean_ctor_set(v___x_182_, 1, v___x_178_);
lean_ctor_set(v___x_182_, 2, v___x_180_);
lean_ctor_set(v___x_182_, 3, v___x_181_);
v___x_183_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_184_ = l_Nat_reprFast(v_x_169_);
v___x_185_ = lean_box(2);
v___x_186_ = l_Lean_Syntax_mkNumLit(v___x_184_, v___x_185_);
v___x_187_ = l_Lean_Syntax_node1(v___x_176_, v___x_183_, v___x_186_);
v___x_188_ = l_Lean_Syntax_node2(v___x_176_, v___x_177_, v___x_182_, v___x_187_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set(v___x_189_, 1, v_a_171_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___boxed(lean_object* v_x_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_x_190_, v_a_191_, v_a_192_);
lean_dec_ref(v_a_191_);
return v_res_193_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__1(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__0));
v___x_196_ = l_String_toRawSubstring_x27(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__10(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__9));
v___x_217_ = l_String_toRawSubstring_x27(v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction(lean_object* v_x_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
if (lean_obj_tag(v_x_235_) == 0)
{
lean_object* v_quotContext_238_; lean_object* v_currMacroScope_239_; lean_object* v_ref_240_; uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_quotContext_238_ = lean_ctor_get(v_a_236_, 1);
v_currMacroScope_239_ = lean_ctor_get(v_a_236_, 2);
v_ref_240_ = lean_ctor_get(v_a_236_, 5);
v___x_241_ = 0;
v___x_242_ = l_Lean_SourceInfo_fromRef(v_ref_240_, v___x_241_);
v___x_243_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__1);
v___x_244_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__4));
lean_inc(v_currMacroScope_239_);
lean_inc(v_quotContext_238_);
v___x_245_ = l_Lean_addMacroScope(v_quotContext_238_, v___x_244_, v_currMacroScope_239_);
v___x_246_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__8));
v___x_247_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_247_, 0, v___x_242_);
lean_ctor_set(v___x_247_, 1, v___x_243_);
lean_ctor_set(v___x_247_, 2, v___x_245_);
lean_ctor_set(v___x_247_, 3, v___x_246_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v_a_237_);
return v___x_248_;
}
else
{
lean_object* v_digits_249_; lean_object* v_quotContext_250_; lean_object* v_currMacroScope_251_; lean_object* v_ref_252_; uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_digits_249_ = lean_ctor_get(v_x_235_, 0);
lean_inc(v_digits_249_);
lean_dec_ref_known(v_x_235_, 1);
v_quotContext_250_ = lean_ctor_get(v_a_236_, 1);
v_currMacroScope_251_ = lean_ctor_get(v_a_236_, 2);
v_ref_252_ = lean_ctor_get(v_a_236_, 5);
v___x_253_ = 0;
v___x_254_ = l_Lean_SourceInfo_fromRef(v_ref_252_, v___x_253_);
v___x_255_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_256_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__10, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__10_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__10);
v___x_257_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__12));
lean_inc(v_currMacroScope_251_);
lean_inc(v_quotContext_250_);
v___x_258_ = l_Lean_addMacroScope(v_quotContext_250_, v___x_257_, v_currMacroScope_251_);
v___x_259_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___closed__16));
lean_inc_n(v___x_254_, 2);
v___x_260_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_260_, 0, v___x_254_);
lean_ctor_set(v___x_260_, 1, v___x_256_);
lean_ctor_set(v___x_260_, 2, v___x_258_);
lean_ctor_set(v___x_260_, 3, v___x_259_);
v___x_261_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_262_ = l_Nat_reprFast(v_digits_249_);
v___x_263_ = lean_box(2);
v___x_264_ = l_Lean_Syntax_mkNumLit(v___x_262_, v___x_263_);
v___x_265_ = l_Lean_Syntax_node1(v___x_254_, v___x_261_, v___x_264_);
v___x_266_ = l_Lean_Syntax_node2(v___x_254_, v___x_255_, v___x_260_, v___x_265_);
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v_a_237_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction___boxed(lean_object* v_x_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction(v_x_268_, v_a_269_, v_a_270_);
lean_dec_ref(v_a_269_);
return v_res_271_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__1(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__0));
v___x_274_ = l_String_toRawSubstring_x27(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__10(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__9));
v___x_295_ = l_String_toRawSubstring_x27(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__18(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__17));
v___x_315_ = l_String_toRawSubstring_x27(v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__26(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__25));
v___x_335_ = l_String_toRawSubstring_x27(v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear(lean_object* v_x_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
switch(lean_obj_tag(v_x_353_))
{
case 0:
{
lean_object* v_quotContext_356_; lean_object* v_currMacroScope_357_; lean_object* v_ref_358_; uint8_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_quotContext_356_ = lean_ctor_get(v_a_354_, 1);
v_currMacroScope_357_ = lean_ctor_get(v_a_354_, 2);
v_ref_358_ = lean_ctor_get(v_a_354_, 5);
v___x_359_ = 0;
v___x_360_ = l_Lean_SourceInfo_fromRef(v_ref_358_, v___x_359_);
v___x_361_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__1);
v___x_362_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__4));
lean_inc(v_currMacroScope_357_);
lean_inc(v_quotContext_356_);
v___x_363_ = l_Lean_addMacroScope(v_quotContext_356_, v___x_362_, v_currMacroScope_357_);
v___x_364_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__8));
v___x_365_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_365_, 0, v___x_360_);
lean_ctor_set(v___x_365_, 1, v___x_361_);
lean_ctor_set(v___x_365_, 2, v___x_363_);
lean_ctor_set(v___x_365_, 3, v___x_364_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_a_355_);
return v___x_366_;
}
case 1:
{
lean_object* v_quotContext_367_; lean_object* v_currMacroScope_368_; lean_object* v_ref_369_; uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_quotContext_367_ = lean_ctor_get(v_a_354_, 1);
v_currMacroScope_368_ = lean_ctor_get(v_a_354_, 2);
v_ref_369_ = lean_ctor_get(v_a_354_, 5);
v___x_370_ = 0;
v___x_371_ = l_Lean_SourceInfo_fromRef(v_ref_369_, v___x_370_);
v___x_372_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__10, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__10_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__10);
v___x_373_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__12));
lean_inc(v_currMacroScope_368_);
lean_inc(v_quotContext_367_);
v___x_374_ = l_Lean_addMacroScope(v_quotContext_367_, v___x_373_, v_currMacroScope_368_);
v___x_375_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__16));
v___x_376_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_376_, 0, v___x_371_);
lean_ctor_set(v___x_376_, 1, v___x_372_);
lean_ctor_set(v___x_376_, 2, v___x_374_);
lean_ctor_set(v___x_376_, 3, v___x_375_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v_a_355_);
return v___x_377_;
}
case 2:
{
lean_object* v_quotContext_378_; lean_object* v_currMacroScope_379_; lean_object* v_ref_380_; uint8_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_quotContext_378_ = lean_ctor_get(v_a_354_, 1);
v_currMacroScope_379_ = lean_ctor_get(v_a_354_, 2);
v_ref_380_ = lean_ctor_get(v_a_354_, 5);
v___x_381_ = 0;
v___x_382_ = l_Lean_SourceInfo_fromRef(v_ref_380_, v___x_381_);
v___x_383_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__18, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__18_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__18);
v___x_384_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__20));
lean_inc(v_currMacroScope_379_);
lean_inc(v_quotContext_378_);
v___x_385_ = l_Lean_addMacroScope(v_quotContext_378_, v___x_384_, v_currMacroScope_379_);
v___x_386_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__24));
v___x_387_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_387_, 0, v___x_382_);
lean_ctor_set(v___x_387_, 1, v___x_383_);
lean_ctor_set(v___x_387_, 2, v___x_385_);
lean_ctor_set(v___x_387_, 3, v___x_386_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set(v___x_388_, 1, v_a_355_);
return v___x_388_;
}
default: 
{
lean_object* v_num_389_; lean_object* v_quotContext_390_; lean_object* v_currMacroScope_391_; lean_object* v_ref_392_; uint8_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v_num_389_ = lean_ctor_get(v_x_353_, 0);
lean_inc(v_num_389_);
lean_dec_ref_known(v_x_353_, 1);
v_quotContext_390_ = lean_ctor_get(v_a_354_, 1);
v_currMacroScope_391_ = lean_ctor_get(v_a_354_, 2);
v_ref_392_ = lean_ctor_get(v_a_354_, 5);
v___x_393_ = 0;
v___x_394_ = l_Lean_SourceInfo_fromRef(v_ref_392_, v___x_393_);
v___x_395_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_396_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__26, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__26_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__26);
v___x_397_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__28));
lean_inc(v_currMacroScope_391_);
lean_inc(v_quotContext_390_);
v___x_398_ = l_Lean_addMacroScope(v_quotContext_390_, v___x_397_, v_currMacroScope_391_);
v___x_399_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___closed__32));
lean_inc_n(v___x_394_, 2);
v___x_400_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_400_, 0, v___x_394_);
lean_ctor_set(v___x_400_, 1, v___x_396_);
lean_ctor_set(v___x_400_, 2, v___x_398_);
lean_ctor_set(v___x_400_, 3, v___x_399_);
v___x_401_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_402_ = l_Nat_reprFast(v_num_389_);
v___x_403_ = lean_box(2);
v___x_404_ = l_Lean_Syntax_mkNumLit(v___x_402_, v___x_403_);
v___x_405_ = l_Lean_Syntax_node1(v___x_394_, v___x_401_, v___x_404_);
v___x_406_ = l_Lean_Syntax_node2(v___x_394_, v___x_395_, v___x_400_, v___x_405_);
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v_a_355_);
return v___x_407_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear___boxed(lean_object* v_x_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear(v_x_408_, v_a_409_, v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_411_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__1(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__0));
v___x_414_ = l_String_toRawSubstring_x27(v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__10(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__9));
v___x_435_ = l_String_toRawSubstring_x27(v___x_434_);
return v___x_435_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__17(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__16));
v___x_454_ = l_String_toRawSubstring_x27(v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId(uint8_t v_x_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
switch(v_x_471_)
{
case 0:
{
lean_object* v_quotContext_474_; lean_object* v_currMacroScope_475_; lean_object* v_ref_476_; uint8_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_quotContext_474_ = lean_ctor_get(v_a_472_, 1);
v_currMacroScope_475_ = lean_ctor_get(v_a_472_, 2);
v_ref_476_ = lean_ctor_get(v_a_472_, 5);
v___x_477_ = 0;
v___x_478_ = l_Lean_SourceInfo_fromRef(v_ref_476_, v___x_477_);
v___x_479_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__1);
v___x_480_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__4));
lean_inc(v_currMacroScope_475_);
lean_inc(v_quotContext_474_);
v___x_481_ = l_Lean_addMacroScope(v_quotContext_474_, v___x_480_, v_currMacroScope_475_);
v___x_482_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__8));
v___x_483_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_483_, 0, v___x_478_);
lean_ctor_set(v___x_483_, 1, v___x_479_);
lean_ctor_set(v___x_483_, 2, v___x_481_);
lean_ctor_set(v___x_483_, 3, v___x_482_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v_a_473_);
return v___x_484_;
}
case 1:
{
lean_object* v_quotContext_485_; lean_object* v_currMacroScope_486_; lean_object* v_ref_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_quotContext_485_ = lean_ctor_get(v_a_472_, 1);
v_currMacroScope_486_ = lean_ctor_get(v_a_472_, 2);
v_ref_487_ = lean_ctor_get(v_a_472_, 5);
v___x_488_ = 0;
v___x_489_ = l_Lean_SourceInfo_fromRef(v_ref_487_, v___x_488_);
v___x_490_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__10, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__10_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__10);
v___x_491_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__11));
lean_inc(v_currMacroScope_486_);
lean_inc(v_quotContext_485_);
v___x_492_ = l_Lean_addMacroScope(v_quotContext_485_, v___x_491_, v_currMacroScope_486_);
v___x_493_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__15));
v___x_494_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_494_, 0, v___x_489_);
lean_ctor_set(v___x_494_, 1, v___x_490_);
lean_ctor_set(v___x_494_, 2, v___x_492_);
lean_ctor_set(v___x_494_, 3, v___x_493_);
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v_a_473_);
return v___x_495_;
}
default: 
{
lean_object* v_quotContext_496_; lean_object* v_currMacroScope_497_; lean_object* v_ref_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_quotContext_496_ = lean_ctor_get(v_a_472_, 1);
v_currMacroScope_497_ = lean_ctor_get(v_a_472_, 2);
v_ref_498_ = lean_ctor_get(v_a_472_, 5);
v___x_499_ = 0;
v___x_500_ = l_Lean_SourceInfo_fromRef(v_ref_498_, v___x_499_);
v___x_501_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__17, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__17_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__17);
v___x_502_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__18));
lean_inc(v_currMacroScope_497_);
lean_inc(v_quotContext_496_);
v___x_503_ = l_Lean_addMacroScope(v_quotContext_496_, v___x_502_, v_currMacroScope_497_);
v___x_504_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___closed__22));
v___x_505_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_505_, 0, v___x_500_);
lean_ctor_set(v___x_505_, 1, v___x_501_);
lean_ctor_set(v___x_505_, 2, v___x_503_);
lean_ctor_set(v___x_505_, 3, v___x_504_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v_a_473_);
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId___boxed(lean_object* v_x_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
uint8_t v_x_4028__boxed_510_; lean_object* v_res_511_; 
v_x_4028__boxed_510_ = lean_unbox(v_x_507_);
v_res_511_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId(v_x_4028__boxed_510_, v_a_508_, v_a_509_);
lean_dec_ref(v_a_508_);
return v_res_511_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__1(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__0));
v___x_514_ = l_String_toRawSubstring_x27(v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__9(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__8));
v___x_534_ = l_String_toRawSubstring_x27(v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName(uint8_t v_x_551_, lean_object* v_a_552_, lean_object* v_a_553_){
_start:
{
if (v_x_551_ == 0)
{
lean_object* v_quotContext_554_; lean_object* v_currMacroScope_555_; lean_object* v_ref_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_quotContext_554_ = lean_ctor_get(v_a_552_, 1);
v_currMacroScope_555_ = lean_ctor_get(v_a_552_, 2);
v_ref_556_ = lean_ctor_get(v_a_552_, 5);
v___x_557_ = 0;
v___x_558_ = l_Lean_SourceInfo_fromRef(v_ref_556_, v___x_557_);
v___x_559_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__1);
v___x_560_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__3));
lean_inc(v_currMacroScope_555_);
lean_inc(v_quotContext_554_);
v___x_561_ = l_Lean_addMacroScope(v_quotContext_554_, v___x_560_, v_currMacroScope_555_);
v___x_562_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__7));
v___x_563_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_563_, 0, v___x_558_);
lean_ctor_set(v___x_563_, 1, v___x_559_);
lean_ctor_set(v___x_563_, 2, v___x_561_);
lean_ctor_set(v___x_563_, 3, v___x_562_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
lean_ctor_set(v___x_564_, 1, v_a_553_);
return v___x_564_;
}
else
{
lean_object* v_quotContext_565_; lean_object* v_currMacroScope_566_; lean_object* v_ref_567_; uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_quotContext_565_ = lean_ctor_get(v_a_552_, 1);
v_currMacroScope_566_ = lean_ctor_get(v_a_552_, 2);
v_ref_567_ = lean_ctor_get(v_a_552_, 5);
v___x_568_ = 0;
v___x_569_ = l_Lean_SourceInfo_fromRef(v_ref_567_, v___x_568_);
v___x_570_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__9, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__9_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__9);
v___x_571_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__10));
lean_inc(v_currMacroScope_566_);
lean_inc(v_quotContext_565_);
v___x_572_ = l_Lean_addMacroScope(v_quotContext_565_, v___x_571_, v_currMacroScope_566_);
v___x_573_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___closed__14));
v___x_574_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_574_, 0, v___x_569_);
lean_ctor_set(v___x_574_, 1, v___x_570_);
lean_ctor_set(v___x_574_, 2, v___x_572_);
lean_ctor_set(v___x_574_, 3, v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
lean_ctor_set(v___x_575_, 1, v_a_553_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName___boxed(lean_object* v_x_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
uint8_t v_x_2689__boxed_579_; lean_object* v_res_580_; 
v_x_2689__boxed_579_ = lean_unbox(v_x_576_);
v_res_580_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName(v_x_2689__boxed_579_, v_a_577_, v_a_578_);
lean_dec_ref(v_a_577_);
return v_res_580_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__1(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__0));
v___x_583_ = l_String_toRawSubstring_x27(v___x_582_);
return v___x_583_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__10(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__9));
v___x_604_ = l_String_toRawSubstring_x27(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__18(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__17));
v___x_624_ = l_String_toRawSubstring_x27(v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__26(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__25));
v___x_644_ = l_String_toRawSubstring_x27(v___x_643_);
return v___x_644_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__34(void){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__33));
v___x_664_ = l_String_toRawSubstring_x27(v___x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX(uint8_t v_x_682_, lean_object* v_a_683_, lean_object* v_a_684_){
_start:
{
switch(v_x_682_)
{
case 0:
{
lean_object* v_quotContext_685_; lean_object* v_currMacroScope_686_; lean_object* v_ref_687_; uint8_t v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v_quotContext_685_ = lean_ctor_get(v_a_683_, 1);
v_currMacroScope_686_ = lean_ctor_get(v_a_683_, 2);
v_ref_687_ = lean_ctor_get(v_a_683_, 5);
v___x_688_ = 0;
v___x_689_ = l_Lean_SourceInfo_fromRef(v_ref_687_, v___x_688_);
v___x_690_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__1);
v___x_691_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__4));
lean_inc(v_currMacroScope_686_);
lean_inc(v_quotContext_685_);
v___x_692_ = l_Lean_addMacroScope(v_quotContext_685_, v___x_691_, v_currMacroScope_686_);
v___x_693_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__8));
v___x_694_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_694_, 0, v___x_689_);
lean_ctor_set(v___x_694_, 1, v___x_690_);
lean_ctor_set(v___x_694_, 2, v___x_692_);
lean_ctor_set(v___x_694_, 3, v___x_693_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v_a_684_);
return v___x_695_;
}
case 1:
{
lean_object* v_quotContext_696_; lean_object* v_currMacroScope_697_; lean_object* v_ref_698_; uint8_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v_quotContext_696_ = lean_ctor_get(v_a_683_, 1);
v_currMacroScope_697_ = lean_ctor_get(v_a_683_, 2);
v_ref_698_ = lean_ctor_get(v_a_683_, 5);
v___x_699_ = 0;
v___x_700_ = l_Lean_SourceInfo_fromRef(v_ref_698_, v___x_699_);
v___x_701_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__10, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__10_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__10);
v___x_702_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__12));
lean_inc(v_currMacroScope_697_);
lean_inc(v_quotContext_696_);
v___x_703_ = l_Lean_addMacroScope(v_quotContext_696_, v___x_702_, v_currMacroScope_697_);
v___x_704_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__16));
v___x_705_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_705_, 0, v___x_700_);
lean_ctor_set(v___x_705_, 1, v___x_701_);
lean_ctor_set(v___x_705_, 2, v___x_703_);
lean_ctor_set(v___x_705_, 3, v___x_704_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
lean_ctor_set(v___x_706_, 1, v_a_684_);
return v___x_706_;
}
case 2:
{
lean_object* v_quotContext_707_; lean_object* v_currMacroScope_708_; lean_object* v_ref_709_; uint8_t v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_quotContext_707_ = lean_ctor_get(v_a_683_, 1);
v_currMacroScope_708_ = lean_ctor_get(v_a_683_, 2);
v_ref_709_ = lean_ctor_get(v_a_683_, 5);
v___x_710_ = 0;
v___x_711_ = l_Lean_SourceInfo_fromRef(v_ref_709_, v___x_710_);
v___x_712_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__18, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__18_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__18);
v___x_713_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__20));
lean_inc(v_currMacroScope_708_);
lean_inc(v_quotContext_707_);
v___x_714_ = l_Lean_addMacroScope(v_quotContext_707_, v___x_713_, v_currMacroScope_708_);
v___x_715_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__24));
v___x_716_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_716_, 0, v___x_711_);
lean_ctor_set(v___x_716_, 1, v___x_712_);
lean_ctor_set(v___x_716_, 2, v___x_714_);
lean_ctor_set(v___x_716_, 3, v___x_715_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
lean_ctor_set(v___x_717_, 1, v_a_684_);
return v___x_717_;
}
case 3:
{
lean_object* v_quotContext_718_; lean_object* v_currMacroScope_719_; lean_object* v_ref_720_; uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v_quotContext_718_ = lean_ctor_get(v_a_683_, 1);
v_currMacroScope_719_ = lean_ctor_get(v_a_683_, 2);
v_ref_720_ = lean_ctor_get(v_a_683_, 5);
v___x_721_ = 0;
v___x_722_ = l_Lean_SourceInfo_fromRef(v_ref_720_, v___x_721_);
v___x_723_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__26, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__26_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__26);
v___x_724_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__28));
lean_inc(v_currMacroScope_719_);
lean_inc(v_quotContext_718_);
v___x_725_ = l_Lean_addMacroScope(v_quotContext_718_, v___x_724_, v_currMacroScope_719_);
v___x_726_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__32));
v___x_727_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_727_, 0, v___x_722_);
lean_ctor_set(v___x_727_, 1, v___x_723_);
lean_ctor_set(v___x_727_, 2, v___x_725_);
lean_ctor_set(v___x_727_, 3, v___x_726_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_ctor_set(v___x_728_, 1, v_a_684_);
return v___x_728_;
}
default: 
{
lean_object* v_quotContext_729_; lean_object* v_currMacroScope_730_; lean_object* v_ref_731_; uint8_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_quotContext_729_ = lean_ctor_get(v_a_683_, 1);
v_currMacroScope_730_ = lean_ctor_get(v_a_683_, 2);
v_ref_731_ = lean_ctor_get(v_a_683_, 5);
v___x_732_ = 0;
v___x_733_ = l_Lean_SourceInfo_fromRef(v_ref_731_, v___x_732_);
v___x_734_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__34, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__34_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__34);
v___x_735_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__36));
lean_inc(v_currMacroScope_730_);
lean_inc(v_quotContext_729_);
v___x_736_ = l_Lean_addMacroScope(v_quotContext_729_, v___x_735_, v_currMacroScope_730_);
v___x_737_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___closed__40));
v___x_738_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_738_, 0, v___x_733_);
lean_ctor_set(v___x_738_, 1, v___x_734_);
lean_ctor_set(v___x_738_, 2, v___x_736_);
lean_ctor_set(v___x_738_, 3, v___x_737_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v_a_684_);
return v___x_739_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX___boxed(lean_object* v_x_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
uint8_t v_x_6708__boxed_743_; lean_object* v_res_744_; 
v_x_6708__boxed_743_ = lean_unbox(v_x_740_);
v_res_744_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX(v_x_6708__boxed_743_, v_a_741_, v_a_742_);
lean_dec_ref(v_a_741_);
return v_res_744_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__1(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__0));
v___x_747_ = l_String_toRawSubstring_x27(v___x_746_);
return v___x_747_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__9(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__8));
v___x_767_ = l_String_toRawSubstring_x27(v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO(uint8_t v_x_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
if (v_x_784_ == 0)
{
lean_object* v_quotContext_787_; lean_object* v_currMacroScope_788_; lean_object* v_ref_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_quotContext_787_ = lean_ctor_get(v_a_785_, 1);
v_currMacroScope_788_ = lean_ctor_get(v_a_785_, 2);
v_ref_789_ = lean_ctor_get(v_a_785_, 5);
v___x_790_ = 0;
v___x_791_ = l_Lean_SourceInfo_fromRef(v_ref_789_, v___x_790_);
v___x_792_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__1);
v___x_793_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__3));
lean_inc(v_currMacroScope_788_);
lean_inc(v_quotContext_787_);
v___x_794_ = l_Lean_addMacroScope(v_quotContext_787_, v___x_793_, v_currMacroScope_788_);
v___x_795_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__7));
v___x_796_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_796_, 0, v___x_791_);
lean_ctor_set(v___x_796_, 1, v___x_792_);
lean_ctor_set(v___x_796_, 2, v___x_794_);
lean_ctor_set(v___x_796_, 3, v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
lean_ctor_set(v___x_797_, 1, v_a_786_);
return v___x_797_;
}
else
{
lean_object* v_quotContext_798_; lean_object* v_currMacroScope_799_; lean_object* v_ref_800_; uint8_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_quotContext_798_ = lean_ctor_get(v_a_785_, 1);
v_currMacroScope_799_ = lean_ctor_get(v_a_785_, 2);
v_ref_800_ = lean_ctor_get(v_a_785_, 5);
v___x_801_ = 0;
v___x_802_ = l_Lean_SourceInfo_fromRef(v_ref_800_, v___x_801_);
v___x_803_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__9, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__9_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__9);
v___x_804_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__10));
lean_inc(v_currMacroScope_799_);
lean_inc(v_quotContext_798_);
v___x_805_ = l_Lean_addMacroScope(v_quotContext_798_, v___x_804_, v_currMacroScope_799_);
v___x_806_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___closed__14));
v___x_807_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_807_, 0, v___x_802_);
lean_ctor_set(v___x_807_, 1, v___x_803_);
lean_ctor_set(v___x_807_, 2, v___x_805_);
lean_ctor_set(v___x_807_, 3, v___x_806_);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v_a_786_);
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO___boxed(lean_object* v_x_809_, lean_object* v_a_810_, lean_object* v_a_811_){
_start:
{
uint8_t v_x_2689__boxed_812_; lean_object* v_res_813_; 
v_x_2689__boxed_812_ = lean_unbox(v_x_809_);
v_res_813_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO(v_x_2689__boxed_812_, v_a_810_, v_a_811_);
lean_dec_ref(v_a_810_);
return v_res_813_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__1(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__0));
v___x_816_ = l_String_toRawSubstring_x27(v___x_815_);
return v___x_816_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__9(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__8));
v___x_836_ = l_String_toRawSubstring_x27(v___x_835_);
return v___x_836_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__16(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__15));
v___x_855_ = l_String_toRawSubstring_x27(v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ(uint8_t v_x_872_, lean_object* v_a_873_, lean_object* v_a_874_){
_start:
{
switch(v_x_872_)
{
case 0:
{
lean_object* v_quotContext_875_; lean_object* v_currMacroScope_876_; lean_object* v_ref_877_; uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_quotContext_875_ = lean_ctor_get(v_a_873_, 1);
v_currMacroScope_876_ = lean_ctor_get(v_a_873_, 2);
v_ref_877_ = lean_ctor_get(v_a_873_, 5);
v___x_878_ = 0;
v___x_879_ = l_Lean_SourceInfo_fromRef(v_ref_877_, v___x_878_);
v___x_880_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__1);
v___x_881_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__3));
lean_inc(v_currMacroScope_876_);
lean_inc(v_quotContext_875_);
v___x_882_ = l_Lean_addMacroScope(v_quotContext_875_, v___x_881_, v_currMacroScope_876_);
v___x_883_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__7));
v___x_884_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_884_, 0, v___x_879_);
lean_ctor_set(v___x_884_, 1, v___x_880_);
lean_ctor_set(v___x_884_, 2, v___x_882_);
lean_ctor_set(v___x_884_, 3, v___x_883_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v_a_874_);
return v___x_885_;
}
case 1:
{
lean_object* v_quotContext_886_; lean_object* v_currMacroScope_887_; lean_object* v_ref_888_; uint8_t v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_quotContext_886_ = lean_ctor_get(v_a_873_, 1);
v_currMacroScope_887_ = lean_ctor_get(v_a_873_, 2);
v_ref_888_ = lean_ctor_get(v_a_873_, 5);
v___x_889_ = 0;
v___x_890_ = l_Lean_SourceInfo_fromRef(v_ref_888_, v___x_889_);
v___x_891_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__9, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__9_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__9);
v___x_892_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__10));
lean_inc(v_currMacroScope_887_);
lean_inc(v_quotContext_886_);
v___x_893_ = l_Lean_addMacroScope(v_quotContext_886_, v___x_892_, v_currMacroScope_887_);
v___x_894_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__14));
v___x_895_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_895_, 0, v___x_890_);
lean_ctor_set(v___x_895_, 1, v___x_891_);
lean_ctor_set(v___x_895_, 2, v___x_893_);
lean_ctor_set(v___x_895_, 3, v___x_894_);
v___x_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v_a_874_);
return v___x_896_;
}
default: 
{
lean_object* v_quotContext_897_; lean_object* v_currMacroScope_898_; lean_object* v_ref_899_; uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v_quotContext_897_ = lean_ctor_get(v_a_873_, 1);
v_currMacroScope_898_ = lean_ctor_get(v_a_873_, 2);
v_ref_899_ = lean_ctor_get(v_a_873_, 5);
v___x_900_ = 0;
v___x_901_ = l_Lean_SourceInfo_fromRef(v_ref_899_, v___x_900_);
v___x_902_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__16, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__16_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__16);
v___x_903_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__17));
lean_inc(v_currMacroScope_898_);
lean_inc(v_quotContext_897_);
v___x_904_ = l_Lean_addMacroScope(v_quotContext_897_, v___x_903_, v_currMacroScope_898_);
v___x_905_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___closed__21));
v___x_906_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_906_, 0, v___x_901_);
lean_ctor_set(v___x_906_, 1, v___x_902_);
lean_ctor_set(v___x_906_, 2, v___x_904_);
lean_ctor_set(v___x_906_, 3, v___x_905_);
v___x_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_906_);
lean_ctor_set(v___x_907_, 1, v_a_874_);
return v___x_907_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ___boxed(lean_object* v_x_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
uint8_t v_x_4027__boxed_911_; lean_object* v_res_912_; 
v_x_4027__boxed_911_ = lean_unbox(v_x_908_);
v_res_912_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ(v_x_4027__boxed_911_, v_a_909_, v_a_910_);
lean_dec_ref(v_a_909_);
return v_res_912_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__1(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__0));
v___x_915_ = l_String_toRawSubstring_x27(v___x_914_);
return v___x_915_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__10(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__9));
v___x_936_ = l_String_toRawSubstring_x27(v___x_935_);
return v___x_936_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__18(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__17));
v___x_956_ = l_String_toRawSubstring_x27(v___x_955_);
return v___x_956_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__26(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__25));
v___x_976_ = l_String_toRawSubstring_x27(v___x_975_);
return v___x_976_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__33));
v___x_996_ = l_String_toRawSubstring_x27(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__48));
v___x_1032_ = l_String_toRawSubstring_x27(v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_box(0);
v___x_1034_ = l_unsafeCast___redArg(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__70));
v___x_1084_ = l_String_toRawSubstring_x27(v___x_1083_);
return v___x_1084_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__74));
v___x_1090_ = l_String_toRawSubstring_x27(v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__77));
v___x_1095_ = l_String_toRawSubstring_x27(v___x_1094_);
return v___x_1095_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__86(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__85));
v___x_1115_ = l_String_toRawSubstring_x27(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__93));
v___x_1135_ = l_String_toRawSubstring_x27(v___x_1134_);
return v___x_1135_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__101));
v___x_1155_ = l_String_toRawSubstring_x27(v___x_1154_);
return v___x_1155_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__110(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__109));
v___x_1175_ = l_String_toRawSubstring_x27(v___x_1174_);
return v___x_1175_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__118(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__117));
v___x_1195_ = l_String_toRawSubstring_x27(v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__126(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__125));
v___x_1215_ = l_String_toRawSubstring_x27(v___x_1214_);
return v___x_1215_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__134(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__133));
v___x_1235_ = l_String_toRawSubstring_x27(v___x_1234_);
return v___x_1235_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__141));
v___x_1255_ = l_String_toRawSubstring_x27(v___x_1254_);
return v___x_1255_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__149));
v___x_1275_ = l_String_toRawSubstring_x27(v___x_1274_);
return v___x_1275_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__158(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__157));
v___x_1295_ = l_String_toRawSubstring_x27(v___x_1294_);
return v___x_1295_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__166(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__165));
v___x_1315_ = l_String_toRawSubstring_x27(v___x_1314_);
return v___x_1315_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__174(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__173));
v___x_1335_ = l_String_toRawSubstring_x27(v___x_1334_);
return v___x_1335_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__182(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__181));
v___x_1355_ = l_String_toRawSubstring_x27(v___x_1354_);
return v___x_1355_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__190(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__189));
v___x_1375_ = l_String_toRawSubstring_x27(v___x_1374_);
return v___x_1375_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__198(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__197));
v___x_1395_ = l_String_toRawSubstring_x27(v___x_1394_);
return v___x_1395_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__206(void){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__205));
v___x_1415_ = l_String_toRawSubstring_x27(v___x_1414_);
return v___x_1415_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__214(void){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__213));
v___x_1435_ = l_String_toRawSubstring_x27(v___x_1434_);
return v___x_1435_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__222(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__221));
v___x_1455_ = l_String_toRawSubstring_x27(v___x_1454_);
return v___x_1455_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__230(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__229));
v___x_1475_ = l_String_toRawSubstring_x27(v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__238(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__237));
v___x_1495_ = l_String_toRawSubstring_x27(v___x_1494_);
return v___x_1495_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__246(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__245));
v___x_1515_ = l_String_toRawSubstring_x27(v___x_1514_);
return v___x_1515_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__254(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__253));
v___x_1535_ = l_String_toRawSubstring_x27(v___x_1534_);
return v___x_1535_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__262(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__261));
v___x_1555_ = l_String_toRawSubstring_x27(v___x_1554_);
return v___x_1555_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__270(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__269));
v___x_1575_ = l_String_toRawSubstring_x27(v___x_1574_);
return v___x_1575_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__278(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__277));
v___x_1595_ = l_String_toRawSubstring_x27(v___x_1594_);
return v___x_1595_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__286(void){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__285));
v___x_1615_ = l_String_toRawSubstring_x27(v___x_1614_);
return v___x_1615_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__294(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__293));
v___x_1635_ = l_String_toRawSubstring_x27(v___x_1634_);
return v___x_1635_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__302(void){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__301));
v___x_1655_ = l_String_toRawSubstring_x27(v___x_1654_);
return v___x_1655_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__310(void){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__309));
v___x_1675_ = l_String_toRawSubstring_x27(v___x_1674_);
return v___x_1675_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__318(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__317));
v___x_1695_ = l_String_toRawSubstring_x27(v___x_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier(lean_object* v_x_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_){
_start:
{
switch(lean_obj_tag(v_x_1713_))
{
case 0:
{
uint8_t v_presentation_1716_; lean_object* v___x_1717_; lean_object* v_a_1718_; lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1740_; 
v_presentation_1716_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_1717_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v_presentation_1716_, v_a_1714_, v_a_1715_);
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
v_a_1719_ = lean_ctor_get(v___x_1717_, 1);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1721_ = v___x_1717_;
v_isShared_1722_ = v_isSharedCheck_1740_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_inc(v_a_1718_);
lean_dec(v___x_1717_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1740_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v_quotContext_1723_; lean_object* v_currMacroScope_1724_; lean_object* v_ref_1725_; uint8_t v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
v_quotContext_1723_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1724_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1725_ = lean_ctor_get(v_a_1714_, 5);
v___x_1726_ = 0;
v___x_1727_ = l_Lean_SourceInfo_fromRef(v_ref_1725_, v___x_1726_);
v___x_1728_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1729_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__1);
v___x_1730_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__4));
lean_inc(v_currMacroScope_1724_);
lean_inc(v_quotContext_1723_);
v___x_1731_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1730_, v_currMacroScope_1724_);
v___x_1732_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__8));
lean_inc_n(v___x_1727_, 2);
v___x_1733_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1727_);
lean_ctor_set(v___x_1733_, 1, v___x_1729_);
lean_ctor_set(v___x_1733_, 2, v___x_1731_);
lean_ctor_set(v___x_1733_, 3, v___x_1732_);
v___x_1734_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1735_ = l_Lean_Syntax_node1(v___x_1727_, v___x_1734_, v_a_1718_);
v___x_1736_ = l_Lean_Syntax_node2(v___x_1727_, v___x_1728_, v___x_1733_, v___x_1735_);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v___x_1736_);
v___x_1738_ = v___x_1721_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v_a_1719_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
case 1:
{
lean_object* v_presentation_1741_; lean_object* v___x_1742_; lean_object* v_a_1743_; lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1765_; 
v_presentation_1741_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_1741_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_1742_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear(v_presentation_1741_, v_a_1714_, v_a_1715_);
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_a_1744_ = lean_ctor_get(v___x_1742_, 1);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1746_ = v___x_1742_;
v_isShared_1747_ = v_isSharedCheck_1765_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1765_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v_quotContext_1748_; lean_object* v_currMacroScope_1749_; lean_object* v_ref_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1763_; 
v_quotContext_1748_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1749_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1750_ = lean_ctor_get(v_a_1714_, 5);
v___x_1751_ = 0;
v___x_1752_ = l_Lean_SourceInfo_fromRef(v_ref_1750_, v___x_1751_);
v___x_1753_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1754_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__10, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__10_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__10);
v___x_1755_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__12));
lean_inc(v_currMacroScope_1749_);
lean_inc(v_quotContext_1748_);
v___x_1756_ = l_Lean_addMacroScope(v_quotContext_1748_, v___x_1755_, v_currMacroScope_1749_);
v___x_1757_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__16));
lean_inc_n(v___x_1752_, 2);
v___x_1758_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1752_);
lean_ctor_set(v___x_1758_, 1, v___x_1754_);
lean_ctor_set(v___x_1758_, 2, v___x_1756_);
lean_ctor_set(v___x_1758_, 3, v___x_1757_);
v___x_1759_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1760_ = l_Lean_Syntax_node1(v___x_1752_, v___x_1759_, v_a_1743_);
v___x_1761_ = l_Lean_Syntax_node2(v___x_1752_, v___x_1753_, v___x_1758_, v___x_1760_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1761_);
v___x_1763_ = v___x_1746_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1761_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v_a_1744_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
case 2:
{
lean_object* v_presentation_1766_; lean_object* v___x_1767_; lean_object* v_a_1768_; lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1790_; 
v_presentation_1766_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_1766_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_1767_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear(v_presentation_1766_, v_a_1714_, v_a_1715_);
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
v_a_1769_ = lean_ctor_get(v___x_1767_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1771_ = v___x_1767_;
v_isShared_1772_ = v_isSharedCheck_1790_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_inc(v_a_1768_);
lean_dec(v___x_1767_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1790_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v_quotContext_1773_; lean_object* v_currMacroScope_1774_; lean_object* v_ref_1775_; uint8_t v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1788_; 
v_quotContext_1773_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1774_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1775_ = lean_ctor_get(v_a_1714_, 5);
v___x_1776_ = 0;
v___x_1777_ = l_Lean_SourceInfo_fromRef(v_ref_1775_, v___x_1776_);
v___x_1778_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1779_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__18, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__18_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__18);
v___x_1780_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__20));
lean_inc(v_currMacroScope_1774_);
lean_inc(v_quotContext_1773_);
v___x_1781_ = l_Lean_addMacroScope(v_quotContext_1773_, v___x_1780_, v_currMacroScope_1774_);
v___x_1782_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__24));
lean_inc_n(v___x_1777_, 2);
v___x_1783_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1777_);
lean_ctor_set(v___x_1783_, 1, v___x_1779_);
lean_ctor_set(v___x_1783_, 2, v___x_1781_);
lean_ctor_set(v___x_1783_, 3, v___x_1782_);
v___x_1784_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1785_ = l_Lean_Syntax_node1(v___x_1777_, v___x_1784_, v_a_1768_);
v___x_1786_ = l_Lean_Syntax_node2(v___x_1777_, v___x_1778_, v___x_1783_, v___x_1785_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1786_);
v___x_1788_ = v___x_1771_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v___x_1786_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_a_1769_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
case 3:
{
lean_object* v_presentation_1791_; lean_object* v___x_1792_; lean_object* v_a_1793_; lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1815_; 
v_presentation_1791_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_1791_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_1792_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_1791_, v_a_1714_, v_a_1715_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_a_1794_ = lean_ctor_get(v___x_1792_, 1);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1796_ = v___x_1792_;
v_isShared_1797_ = v_isSharedCheck_1815_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1815_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v_quotContext_1798_; lean_object* v_currMacroScope_1799_; lean_object* v_ref_1800_; uint8_t v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1813_; 
v_quotContext_1798_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1799_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1800_ = lean_ctor_get(v_a_1714_, 5);
v___x_1801_ = 0;
v___x_1802_ = l_Lean_SourceInfo_fromRef(v_ref_1800_, v___x_1801_);
v___x_1803_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1804_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__26, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__26_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__26);
v___x_1805_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__28));
lean_inc(v_currMacroScope_1799_);
lean_inc(v_quotContext_1798_);
v___x_1806_ = l_Lean_addMacroScope(v_quotContext_1798_, v___x_1805_, v_currMacroScope_1799_);
v___x_1807_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__32));
lean_inc_n(v___x_1802_, 2);
v___x_1808_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1802_);
lean_ctor_set(v___x_1808_, 1, v___x_1804_);
lean_ctor_set(v___x_1808_, 2, v___x_1806_);
lean_ctor_set(v___x_1808_, 3, v___x_1807_);
v___x_1809_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1810_ = l_Lean_Syntax_node1(v___x_1802_, v___x_1809_, v_a_1793_);
v___x_1811_ = l_Lean_Syntax_node2(v___x_1802_, v___x_1803_, v___x_1808_, v___x_1810_);
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 0, v___x_1811_);
v___x_1813_ = v___x_1796_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1811_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_a_1794_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
case 4:
{
lean_object* v_presentation_1816_; 
v_presentation_1816_ = lean_ctor_get(v_x_1713_, 0);
lean_inc_ref(v_presentation_1816_);
lean_dec_ref_known(v_x_1713_, 1);
if (lean_obj_tag(v_presentation_1816_) == 0)
{
lean_object* v_val_1817_; lean_object* v___x_1818_; lean_object* v_a_1819_; lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1867_; 
v_val_1817_ = lean_ctor_get(v_presentation_1816_, 0);
lean_inc(v_val_1817_);
lean_dec_ref_known(v_presentation_1816_, 1);
v___x_1818_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_val_1817_, v_a_1714_, v_a_1715_);
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
v_a_1820_ = lean_ctor_get(v___x_1818_, 1);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1822_ = v___x_1818_;
v_isShared_1823_ = v_isSharedCheck_1867_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_inc(v_a_1819_);
lean_dec(v___x_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1867_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v_quotContext_1824_; lean_object* v_currMacroScope_1825_; lean_object* v_ref_1826_; uint8_t v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1865_; 
v_quotContext_1824_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1825_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1826_ = lean_ctor_get(v_a_1714_, 5);
v___x_1827_ = 0;
v___x_1828_ = l_Lean_SourceInfo_fromRef(v_ref_1826_, v___x_1827_);
v___x_1829_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1830_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34);
v___x_1831_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36));
lean_inc_n(v_currMacroScope_1825_, 3);
lean_inc_n(v_quotContext_1824_, 3);
v___x_1832_ = l_Lean_addMacroScope(v_quotContext_1824_, v___x_1831_, v_currMacroScope_1825_);
v___x_1833_ = lean_box(0);
v___x_1834_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__40));
lean_inc_n(v___x_1828_, 13);
v___x_1835_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1828_);
lean_ctor_set(v___x_1835_, 1, v___x_1830_);
lean_ctor_set(v___x_1835_, 2, v___x_1832_);
lean_ctor_set(v___x_1835_, 3, v___x_1834_);
v___x_1836_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1837_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_1838_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_1839_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_1840_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1828_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_1842_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_1843_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_1844_ = l_Lean_addMacroScope(v_quotContext_1824_, v___x_1843_, v_currMacroScope_1825_);
v___x_1845_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_1846_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1828_);
lean_ctor_set(v___x_1846_, 1, v___x_1842_);
lean_ctor_set(v___x_1846_, 2, v___x_1844_);
lean_ctor_set(v___x_1846_, 3, v___x_1845_);
v___x_1847_ = l_Lean_Syntax_node1(v___x_1828_, v___x_1841_, v___x_1846_);
v___x_1848_ = l_Lean_Syntax_node2(v___x_1828_, v___x_1838_, v___x_1840_, v___x_1847_);
v___x_1849_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_1850_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_1851_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1828_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71);
v___x_1853_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72));
v___x_1854_ = l_Lean_addMacroScope(v_quotContext_1824_, v___x_1853_, v_currMacroScope_1825_);
v___x_1855_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1828_);
lean_ctor_set(v___x_1855_, 1, v___x_1852_);
lean_ctor_set(v___x_1855_, 2, v___x_1854_);
lean_ctor_set(v___x_1855_, 3, v___x_1833_);
v___x_1856_ = l_Lean_Syntax_node2(v___x_1828_, v___x_1849_, v___x_1851_, v___x_1855_);
v___x_1857_ = l_Lean_Syntax_node1(v___x_1828_, v___x_1836_, v_a_1819_);
v___x_1858_ = l_Lean_Syntax_node2(v___x_1828_, v___x_1829_, v___x_1856_, v___x_1857_);
v___x_1859_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_1860_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1828_);
lean_ctor_set(v___x_1860_, 1, v___x_1859_);
v___x_1861_ = l_Lean_Syntax_node3(v___x_1828_, v___x_1837_, v___x_1848_, v___x_1858_, v___x_1860_);
v___x_1862_ = l_Lean_Syntax_node1(v___x_1828_, v___x_1836_, v___x_1861_);
v___x_1863_ = l_Lean_Syntax_node2(v___x_1828_, v___x_1829_, v___x_1835_, v___x_1862_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 0, v___x_1863_);
v___x_1865_ = v___x_1822_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_a_1820_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
else
{
lean_object* v_val_1868_; uint8_t v___x_1869_; lean_object* v___x_1870_; lean_object* v_a_1871_; lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1919_; 
v_val_1868_ = lean_ctor_get(v_presentation_1816_, 0);
lean_inc(v_val_1868_);
lean_dec_ref_known(v_presentation_1816_, 1);
v___x_1869_ = lean_unbox(v_val_1868_);
lean_dec(v_val_1868_);
v___x_1870_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v___x_1869_, v_a_1714_, v_a_1715_);
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
v_a_1872_ = lean_ctor_get(v___x_1870_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1874_ = v___x_1870_;
v_isShared_1875_ = v_isSharedCheck_1919_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_inc(v_a_1871_);
lean_dec(v___x_1870_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1919_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v_quotContext_1876_; lean_object* v_currMacroScope_1877_; lean_object* v_ref_1878_; uint8_t v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1917_; 
v_quotContext_1876_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1877_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1878_ = lean_ctor_get(v_a_1714_, 5);
v___x_1879_ = 0;
v___x_1880_ = l_Lean_SourceInfo_fromRef(v_ref_1878_, v___x_1879_);
v___x_1881_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1882_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__34);
v___x_1883_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__36));
lean_inc_n(v_currMacroScope_1877_, 3);
lean_inc_n(v_quotContext_1876_, 3);
v___x_1884_ = l_Lean_addMacroScope(v_quotContext_1876_, v___x_1883_, v_currMacroScope_1877_);
v___x_1885_ = lean_box(0);
v___x_1886_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__40));
lean_inc_n(v___x_1880_, 13);
v___x_1887_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1880_);
lean_ctor_set(v___x_1887_, 1, v___x_1882_);
lean_ctor_set(v___x_1887_, 2, v___x_1884_);
lean_ctor_set(v___x_1887_, 3, v___x_1886_);
v___x_1888_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1889_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_1890_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_1891_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_1892_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1880_);
lean_ctor_set(v___x_1892_, 1, v___x_1891_);
v___x_1893_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_1894_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_1895_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_1896_ = l_Lean_addMacroScope(v_quotContext_1876_, v___x_1895_, v_currMacroScope_1877_);
v___x_1897_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_1898_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1880_);
lean_ctor_set(v___x_1898_, 1, v___x_1894_);
lean_ctor_set(v___x_1898_, 2, v___x_1896_);
lean_ctor_set(v___x_1898_, 3, v___x_1897_);
v___x_1899_ = l_Lean_Syntax_node1(v___x_1880_, v___x_1893_, v___x_1898_);
v___x_1900_ = l_Lean_Syntax_node2(v___x_1880_, v___x_1890_, v___x_1892_, v___x_1899_);
v___x_1901_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_1902_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_1903_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1880_);
lean_ctor_set(v___x_1903_, 1, v___x_1902_);
v___x_1904_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75);
v___x_1905_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76));
v___x_1906_ = l_Lean_addMacroScope(v_quotContext_1876_, v___x_1905_, v_currMacroScope_1877_);
v___x_1907_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1880_);
lean_ctor_set(v___x_1907_, 1, v___x_1904_);
lean_ctor_set(v___x_1907_, 2, v___x_1906_);
lean_ctor_set(v___x_1907_, 3, v___x_1885_);
v___x_1908_ = l_Lean_Syntax_node2(v___x_1880_, v___x_1901_, v___x_1903_, v___x_1907_);
v___x_1909_ = l_Lean_Syntax_node1(v___x_1880_, v___x_1888_, v_a_1871_);
v___x_1910_ = l_Lean_Syntax_node2(v___x_1880_, v___x_1881_, v___x_1908_, v___x_1909_);
v___x_1911_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_1912_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1880_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = l_Lean_Syntax_node3(v___x_1880_, v___x_1889_, v___x_1900_, v___x_1910_, v___x_1912_);
v___x_1914_ = l_Lean_Syntax_node1(v___x_1880_, v___x_1888_, v___x_1913_);
v___x_1915_ = l_Lean_Syntax_node2(v___x_1880_, v___x_1881_, v___x_1887_, v___x_1914_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set(v___x_1874_, 0, v___x_1915_);
v___x_1917_ = v___x_1874_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1915_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v_a_1872_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
case 5:
{
lean_object* v_presentation_1920_; 
v_presentation_1920_ = lean_ctor_get(v_x_1713_, 0);
lean_inc_ref(v_presentation_1920_);
lean_dec_ref_known(v_x_1713_, 1);
if (lean_obj_tag(v_presentation_1920_) == 0)
{
lean_object* v_val_1921_; lean_object* v___x_1922_; lean_object* v_a_1923_; lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1971_; 
v_val_1921_ = lean_ctor_get(v_presentation_1920_, 0);
lean_inc(v_val_1921_);
lean_dec_ref_known(v_presentation_1920_, 1);
v___x_1922_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_val_1921_, v_a_1714_, v_a_1715_);
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
v_a_1924_ = lean_ctor_get(v___x_1922_, 1);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1926_ = v___x_1922_;
v_isShared_1927_ = v_isSharedCheck_1971_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_inc(v_a_1923_);
lean_dec(v___x_1922_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1971_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v_quotContext_1928_; lean_object* v_currMacroScope_1929_; lean_object* v_ref_1930_; uint8_t v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1969_; 
v_quotContext_1928_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1929_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1930_ = lean_ctor_get(v_a_1714_, 5);
v___x_1931_ = 0;
v___x_1932_ = l_Lean_SourceInfo_fromRef(v_ref_1930_, v___x_1931_);
v___x_1933_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1934_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78);
v___x_1935_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80));
lean_inc_n(v_currMacroScope_1929_, 3);
lean_inc_n(v_quotContext_1928_, 3);
v___x_1936_ = l_Lean_addMacroScope(v_quotContext_1928_, v___x_1935_, v_currMacroScope_1929_);
v___x_1937_ = lean_box(0);
v___x_1938_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__84));
lean_inc_n(v___x_1932_, 13);
v___x_1939_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1932_);
lean_ctor_set(v___x_1939_, 1, v___x_1934_);
lean_ctor_set(v___x_1939_, 2, v___x_1936_);
lean_ctor_set(v___x_1939_, 3, v___x_1938_);
v___x_1940_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1941_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_1942_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_1943_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_1944_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1932_);
lean_ctor_set(v___x_1944_, 1, v___x_1943_);
v___x_1945_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_1946_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_1947_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_1948_ = l_Lean_addMacroScope(v_quotContext_1928_, v___x_1947_, v_currMacroScope_1929_);
v___x_1949_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_1950_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1932_);
lean_ctor_set(v___x_1950_, 1, v___x_1946_);
lean_ctor_set(v___x_1950_, 2, v___x_1948_);
lean_ctor_set(v___x_1950_, 3, v___x_1949_);
v___x_1951_ = l_Lean_Syntax_node1(v___x_1932_, v___x_1945_, v___x_1950_);
v___x_1952_ = l_Lean_Syntax_node2(v___x_1932_, v___x_1942_, v___x_1944_, v___x_1951_);
v___x_1953_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_1954_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_1955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1932_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
v___x_1956_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71);
v___x_1957_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72));
v___x_1958_ = l_Lean_addMacroScope(v_quotContext_1928_, v___x_1957_, v_currMacroScope_1929_);
v___x_1959_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1932_);
lean_ctor_set(v___x_1959_, 1, v___x_1956_);
lean_ctor_set(v___x_1959_, 2, v___x_1958_);
lean_ctor_set(v___x_1959_, 3, v___x_1937_);
v___x_1960_ = l_Lean_Syntax_node2(v___x_1932_, v___x_1953_, v___x_1955_, v___x_1959_);
v___x_1961_ = l_Lean_Syntax_node1(v___x_1932_, v___x_1940_, v_a_1923_);
v___x_1962_ = l_Lean_Syntax_node2(v___x_1932_, v___x_1933_, v___x_1960_, v___x_1961_);
v___x_1963_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_1964_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1932_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v___x_1965_ = l_Lean_Syntax_node3(v___x_1932_, v___x_1941_, v___x_1952_, v___x_1962_, v___x_1964_);
v___x_1966_ = l_Lean_Syntax_node1(v___x_1932_, v___x_1940_, v___x_1965_);
v___x_1967_ = l_Lean_Syntax_node2(v___x_1932_, v___x_1933_, v___x_1939_, v___x_1966_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v___x_1967_);
v___x_1969_ = v___x_1926_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1967_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v_a_1924_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
else
{
lean_object* v_val_1972_; uint8_t v___x_1973_; lean_object* v___x_1974_; lean_object* v_a_1975_; lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_2023_; 
v_val_1972_ = lean_ctor_get(v_presentation_1920_, 0);
lean_inc(v_val_1972_);
lean_dec_ref_known(v_presentation_1920_, 1);
v___x_1973_ = lean_unbox(v_val_1972_);
lean_dec(v_val_1972_);
v___x_1974_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v___x_1973_, v_a_1714_, v_a_1715_);
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
v_a_1976_ = lean_ctor_get(v___x_1974_, 1);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_1978_ = v___x_1974_;
v_isShared_1979_ = v_isSharedCheck_2023_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_inc(v_a_1975_);
lean_dec(v___x_1974_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_2023_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v_quotContext_1980_; lean_object* v_currMacroScope_1981_; lean_object* v_ref_1982_; uint8_t v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2021_; 
v_quotContext_1980_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_1981_ = lean_ctor_get(v_a_1714_, 2);
v_ref_1982_ = lean_ctor_get(v_a_1714_, 5);
v___x_1983_ = 0;
v___x_1984_ = l_Lean_SourceInfo_fromRef(v_ref_1982_, v___x_1983_);
v___x_1985_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_1986_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__78);
v___x_1987_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__80));
lean_inc_n(v_currMacroScope_1981_, 3);
lean_inc_n(v_quotContext_1980_, 3);
v___x_1988_ = l_Lean_addMacroScope(v_quotContext_1980_, v___x_1987_, v_currMacroScope_1981_);
v___x_1989_ = lean_box(0);
v___x_1990_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__84));
lean_inc_n(v___x_1984_, 13);
v___x_1991_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1984_);
lean_ctor_set(v___x_1991_, 1, v___x_1986_);
lean_ctor_set(v___x_1991_, 2, v___x_1988_);
lean_ctor_set(v___x_1991_, 3, v___x_1990_);
v___x_1992_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_1993_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_1994_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_1995_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_1996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1984_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
v___x_1997_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_1998_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_1999_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2000_ = l_Lean_addMacroScope(v_quotContext_1980_, v___x_1999_, v_currMacroScope_1981_);
v___x_2001_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2002_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2002_, 0, v___x_1984_);
lean_ctor_set(v___x_2002_, 1, v___x_1998_);
lean_ctor_set(v___x_2002_, 2, v___x_2000_);
lean_ctor_set(v___x_2002_, 3, v___x_2001_);
v___x_2003_ = l_Lean_Syntax_node1(v___x_1984_, v___x_1997_, v___x_2002_);
v___x_2004_ = l_Lean_Syntax_node2(v___x_1984_, v___x_1994_, v___x_1996_, v___x_2003_);
v___x_2005_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2006_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2007_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___x_1984_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
v___x_2008_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75);
v___x_2009_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76));
v___x_2010_ = l_Lean_addMacroScope(v_quotContext_1980_, v___x_2009_, v_currMacroScope_1981_);
v___x_2011_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2011_, 0, v___x_1984_);
lean_ctor_set(v___x_2011_, 1, v___x_2008_);
lean_ctor_set(v___x_2011_, 2, v___x_2010_);
lean_ctor_set(v___x_2011_, 3, v___x_1989_);
v___x_2012_ = l_Lean_Syntax_node2(v___x_1984_, v___x_2005_, v___x_2007_, v___x_2011_);
v___x_2013_ = l_Lean_Syntax_node1(v___x_1984_, v___x_1992_, v_a_1975_);
v___x_2014_ = l_Lean_Syntax_node2(v___x_1984_, v___x_1985_, v___x_2012_, v___x_2013_);
v___x_2015_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_1984_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___x_2017_ = l_Lean_Syntax_node3(v___x_1984_, v___x_1993_, v___x_2004_, v___x_2014_, v___x_2016_);
v___x_2018_ = l_Lean_Syntax_node1(v___x_1984_, v___x_1992_, v___x_2017_);
v___x_2019_ = l_Lean_Syntax_node2(v___x_1984_, v___x_1985_, v___x_1991_, v___x_2018_);
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 0, v___x_2019_);
v___x_2021_ = v___x_1978_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v___x_2019_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v_a_1976_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
case 6:
{
lean_object* v_presentation_2024_; lean_object* v___x_2025_; lean_object* v_a_2026_; lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2048_; 
v_presentation_2024_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2024_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2025_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2024_, v_a_1714_, v_a_1715_);
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
v_a_2027_ = lean_ctor_get(v___x_2025_, 1);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2029_ = v___x_2025_;
v_isShared_2030_ = v_isSharedCheck_2048_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_inc(v_a_2026_);
lean_dec(v___x_2025_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2048_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v_quotContext_2031_; lean_object* v_currMacroScope_2032_; lean_object* v_ref_2033_; uint8_t v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2046_; 
v_quotContext_2031_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2032_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2033_ = lean_ctor_get(v_a_1714_, 5);
v___x_2034_ = 0;
v___x_2035_ = l_Lean_SourceInfo_fromRef(v_ref_2033_, v___x_2034_);
v___x_2036_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2037_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__86, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__86_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__86);
v___x_2038_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__88));
lean_inc(v_currMacroScope_2032_);
lean_inc(v_quotContext_2031_);
v___x_2039_ = l_Lean_addMacroScope(v_quotContext_2031_, v___x_2038_, v_currMacroScope_2032_);
v___x_2040_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__92));
lean_inc_n(v___x_2035_, 2);
v___x_2041_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2035_);
lean_ctor_set(v___x_2041_, 1, v___x_2037_);
lean_ctor_set(v___x_2041_, 2, v___x_2039_);
lean_ctor_set(v___x_2041_, 3, v___x_2040_);
v___x_2042_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2043_ = l_Lean_Syntax_node1(v___x_2035_, v___x_2042_, v_a_2026_);
v___x_2044_ = l_Lean_Syntax_node2(v___x_2035_, v___x_2036_, v___x_2041_, v___x_2043_);
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 0, v___x_2044_);
v___x_2046_ = v___x_2029_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2044_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v_a_2027_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
case 7:
{
lean_object* v_presentation_2049_; 
v_presentation_2049_ = lean_ctor_get(v_x_1713_, 0);
lean_inc_ref(v_presentation_2049_);
lean_dec_ref_known(v_x_1713_, 1);
if (lean_obj_tag(v_presentation_2049_) == 0)
{
lean_object* v_val_2050_; lean_object* v___x_2051_; lean_object* v_a_2052_; lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2100_; 
v_val_2050_ = lean_ctor_get(v_presentation_2049_, 0);
lean_inc(v_val_2050_);
lean_dec_ref_known(v_presentation_2049_, 1);
v___x_2051_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_val_2050_, v_a_1714_, v_a_1715_);
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_a_2053_ = lean_ctor_get(v___x_2051_, 1);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2055_ = v___x_2051_;
v_isShared_2056_ = v_isSharedCheck_2100_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2100_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v_quotContext_2057_; lean_object* v_currMacroScope_2058_; lean_object* v_ref_2059_; uint8_t v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2098_; 
v_quotContext_2057_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2058_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2059_ = lean_ctor_get(v_a_1714_, 5);
v___x_2060_ = 0;
v___x_2061_ = l_Lean_SourceInfo_fromRef(v_ref_2059_, v___x_2060_);
v___x_2062_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2063_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94);
v___x_2064_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96));
lean_inc_n(v_currMacroScope_2058_, 3);
lean_inc_n(v_quotContext_2057_, 3);
v___x_2065_ = l_Lean_addMacroScope(v_quotContext_2057_, v___x_2064_, v_currMacroScope_2058_);
v___x_2066_ = lean_box(0);
v___x_2067_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__100));
lean_inc_n(v___x_2061_, 13);
v___x_2068_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2061_);
lean_ctor_set(v___x_2068_, 1, v___x_2063_);
lean_ctor_set(v___x_2068_, 2, v___x_2065_);
lean_ctor_set(v___x_2068_, 3, v___x_2067_);
v___x_2069_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2070_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2071_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2072_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2061_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
v___x_2074_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2075_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2076_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2077_ = l_Lean_addMacroScope(v_quotContext_2057_, v___x_2076_, v_currMacroScope_2058_);
v___x_2078_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2079_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2061_);
lean_ctor_set(v___x_2079_, 1, v___x_2075_);
lean_ctor_set(v___x_2079_, 2, v___x_2077_);
lean_ctor_set(v___x_2079_, 3, v___x_2078_);
v___x_2080_ = l_Lean_Syntax_node1(v___x_2061_, v___x_2074_, v___x_2079_);
v___x_2081_ = l_Lean_Syntax_node2(v___x_2061_, v___x_2071_, v___x_2073_, v___x_2080_);
v___x_2082_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2083_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2061_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71);
v___x_2086_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72));
v___x_2087_ = l_Lean_addMacroScope(v_quotContext_2057_, v___x_2086_, v_currMacroScope_2058_);
v___x_2088_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2061_);
lean_ctor_set(v___x_2088_, 1, v___x_2085_);
lean_ctor_set(v___x_2088_, 2, v___x_2087_);
lean_ctor_set(v___x_2088_, 3, v___x_2066_);
v___x_2089_ = l_Lean_Syntax_node2(v___x_2061_, v___x_2082_, v___x_2084_, v___x_2088_);
v___x_2090_ = l_Lean_Syntax_node1(v___x_2061_, v___x_2069_, v_a_2052_);
v___x_2091_ = l_Lean_Syntax_node2(v___x_2061_, v___x_2062_, v___x_2089_, v___x_2090_);
v___x_2092_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2061_);
lean_ctor_set(v___x_2093_, 1, v___x_2092_);
v___x_2094_ = l_Lean_Syntax_node3(v___x_2061_, v___x_2070_, v___x_2081_, v___x_2091_, v___x_2093_);
v___x_2095_ = l_Lean_Syntax_node1(v___x_2061_, v___x_2069_, v___x_2094_);
v___x_2096_ = l_Lean_Syntax_node2(v___x_2061_, v___x_2062_, v___x_2068_, v___x_2095_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2096_);
v___x_2098_ = v___x_2055_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2096_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v_a_2053_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
else
{
lean_object* v_val_2101_; uint8_t v___x_2102_; lean_object* v___x_2103_; lean_object* v_a_2104_; lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2152_; 
v_val_2101_ = lean_ctor_get(v_presentation_2049_, 0);
lean_inc(v_val_2101_);
lean_dec_ref_known(v_presentation_2049_, 1);
v___x_2102_ = lean_unbox(v_val_2101_);
lean_dec(v_val_2101_);
v___x_2103_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v___x_2102_, v_a_1714_, v_a_1715_);
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
v_a_2105_ = lean_ctor_get(v___x_2103_, 1);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2107_ = v___x_2103_;
v_isShared_2108_ = v_isSharedCheck_2152_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_inc(v_a_2104_);
lean_dec(v___x_2103_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2152_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v_quotContext_2109_; lean_object* v_currMacroScope_2110_; lean_object* v_ref_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2150_; 
v_quotContext_2109_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2110_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2111_ = lean_ctor_get(v_a_1714_, 5);
v___x_2112_ = 0;
v___x_2113_ = l_Lean_SourceInfo_fromRef(v_ref_2111_, v___x_2112_);
v___x_2114_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2115_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__94);
v___x_2116_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__96));
lean_inc_n(v_currMacroScope_2110_, 3);
lean_inc_n(v_quotContext_2109_, 3);
v___x_2117_ = l_Lean_addMacroScope(v_quotContext_2109_, v___x_2116_, v_currMacroScope_2110_);
v___x_2118_ = lean_box(0);
v___x_2119_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__100));
lean_inc_n(v___x_2113_, 13);
v___x_2120_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2113_);
lean_ctor_set(v___x_2120_, 1, v___x_2115_);
lean_ctor_set(v___x_2120_, 2, v___x_2117_);
lean_ctor_set(v___x_2120_, 3, v___x_2119_);
v___x_2121_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2122_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2123_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2124_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2125_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2113_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2127_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2128_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2129_ = l_Lean_addMacroScope(v_quotContext_2109_, v___x_2128_, v_currMacroScope_2110_);
v___x_2130_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2131_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2113_);
lean_ctor_set(v___x_2131_, 1, v___x_2127_);
lean_ctor_set(v___x_2131_, 2, v___x_2129_);
lean_ctor_set(v___x_2131_, 3, v___x_2130_);
v___x_2132_ = l_Lean_Syntax_node1(v___x_2113_, v___x_2126_, v___x_2131_);
v___x_2133_ = l_Lean_Syntax_node2(v___x_2113_, v___x_2123_, v___x_2125_, v___x_2132_);
v___x_2134_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2135_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2136_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2113_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75);
v___x_2138_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76));
v___x_2139_ = l_Lean_addMacroScope(v_quotContext_2109_, v___x_2138_, v_currMacroScope_2110_);
v___x_2140_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2113_);
lean_ctor_set(v___x_2140_, 1, v___x_2137_);
lean_ctor_set(v___x_2140_, 2, v___x_2139_);
lean_ctor_set(v___x_2140_, 3, v___x_2118_);
v___x_2141_ = l_Lean_Syntax_node2(v___x_2113_, v___x_2134_, v___x_2136_, v___x_2140_);
v___x_2142_ = l_Lean_Syntax_node1(v___x_2113_, v___x_2121_, v_a_2104_);
v___x_2143_ = l_Lean_Syntax_node2(v___x_2113_, v___x_2114_, v___x_2141_, v___x_2142_);
v___x_2144_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2145_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2113_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = l_Lean_Syntax_node3(v___x_2113_, v___x_2122_, v___x_2133_, v___x_2143_, v___x_2145_);
v___x_2147_ = l_Lean_Syntax_node1(v___x_2113_, v___x_2121_, v___x_2146_);
v___x_2148_ = l_Lean_Syntax_node2(v___x_2113_, v___x_2114_, v___x_2120_, v___x_2147_);
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 0, v___x_2148_);
v___x_2150_ = v___x_2107_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2148_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_a_2105_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
case 8:
{
lean_object* v_presentation_2153_; 
v_presentation_2153_ = lean_ctor_get(v_x_1713_, 0);
lean_inc_ref(v_presentation_2153_);
lean_dec_ref_known(v_x_1713_, 1);
if (lean_obj_tag(v_presentation_2153_) == 0)
{
lean_object* v_val_2154_; lean_object* v___x_2155_; lean_object* v_a_2156_; lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2204_; 
v_val_2154_ = lean_ctor_get(v_presentation_2153_, 0);
lean_inc(v_val_2154_);
lean_dec_ref_known(v_presentation_2153_, 1);
v___x_2155_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_val_2154_, v_a_1714_, v_a_1715_);
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
v_a_2157_ = lean_ctor_get(v___x_2155_, 1);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2159_ = v___x_2155_;
v_isShared_2160_ = v_isSharedCheck_2204_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_inc(v_a_2156_);
lean_dec(v___x_2155_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2204_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v_quotContext_2161_; lean_object* v_currMacroScope_2162_; lean_object* v_ref_2163_; uint8_t v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v_quotContext_2161_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2162_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2163_ = lean_ctor_get(v_a_1714_, 5);
v___x_2164_ = 0;
v___x_2165_ = l_Lean_SourceInfo_fromRef(v_ref_2163_, v___x_2164_);
v___x_2166_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2167_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102);
v___x_2168_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104));
lean_inc_n(v_currMacroScope_2162_, 3);
lean_inc_n(v_quotContext_2161_, 3);
v___x_2169_ = l_Lean_addMacroScope(v_quotContext_2161_, v___x_2168_, v_currMacroScope_2162_);
v___x_2170_ = lean_box(0);
v___x_2171_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__108));
lean_inc_n(v___x_2165_, 13);
v___x_2172_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2165_);
lean_ctor_set(v___x_2172_, 1, v___x_2167_);
lean_ctor_set(v___x_2172_, 2, v___x_2169_);
lean_ctor_set(v___x_2172_, 3, v___x_2171_);
v___x_2173_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2174_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2175_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2176_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2177_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2165_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2179_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2180_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2181_ = l_Lean_addMacroScope(v_quotContext_2161_, v___x_2180_, v_currMacroScope_2162_);
v___x_2182_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2183_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2165_);
lean_ctor_set(v___x_2183_, 1, v___x_2179_);
lean_ctor_set(v___x_2183_, 2, v___x_2181_);
lean_ctor_set(v___x_2183_, 3, v___x_2182_);
v___x_2184_ = l_Lean_Syntax_node1(v___x_2165_, v___x_2178_, v___x_2183_);
v___x_2185_ = l_Lean_Syntax_node2(v___x_2165_, v___x_2175_, v___x_2177_, v___x_2184_);
v___x_2186_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2187_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2188_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2165_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71);
v___x_2190_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72));
v___x_2191_ = l_Lean_addMacroScope(v_quotContext_2161_, v___x_2190_, v_currMacroScope_2162_);
v___x_2192_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2165_);
lean_ctor_set(v___x_2192_, 1, v___x_2189_);
lean_ctor_set(v___x_2192_, 2, v___x_2191_);
lean_ctor_set(v___x_2192_, 3, v___x_2170_);
v___x_2193_ = l_Lean_Syntax_node2(v___x_2165_, v___x_2186_, v___x_2188_, v___x_2192_);
v___x_2194_ = l_Lean_Syntax_node1(v___x_2165_, v___x_2173_, v_a_2156_);
v___x_2195_ = l_Lean_Syntax_node2(v___x_2165_, v___x_2166_, v___x_2193_, v___x_2194_);
v___x_2196_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2165_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
v___x_2198_ = l_Lean_Syntax_node3(v___x_2165_, v___x_2174_, v___x_2185_, v___x_2195_, v___x_2197_);
v___x_2199_ = l_Lean_Syntax_node1(v___x_2165_, v___x_2173_, v___x_2198_);
v___x_2200_ = l_Lean_Syntax_node2(v___x_2165_, v___x_2166_, v___x_2172_, v___x_2199_);
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 0, v___x_2200_);
v___x_2202_ = v___x_2159_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v_a_2157_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
else
{
lean_object* v_val_2205_; uint8_t v___x_2206_; lean_object* v___x_2207_; lean_object* v_a_2208_; lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2256_; 
v_val_2205_ = lean_ctor_get(v_presentation_2153_, 0);
lean_inc(v_val_2205_);
lean_dec_ref_known(v_presentation_2153_, 1);
v___x_2206_ = lean_unbox(v_val_2205_);
lean_dec(v_val_2205_);
v___x_2207_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v___x_2206_, v_a_1714_, v_a_1715_);
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
v_a_2209_ = lean_ctor_get(v___x_2207_, 1);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2211_ = v___x_2207_;
v_isShared_2212_ = v_isSharedCheck_2256_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_inc(v_a_2208_);
lean_dec(v___x_2207_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2256_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v_quotContext_2213_; lean_object* v_currMacroScope_2214_; lean_object* v_ref_2215_; uint8_t v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2254_; 
v_quotContext_2213_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2214_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2215_ = lean_ctor_get(v_a_1714_, 5);
v___x_2216_ = 0;
v___x_2217_ = l_Lean_SourceInfo_fromRef(v_ref_2215_, v___x_2216_);
v___x_2218_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2219_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__102);
v___x_2220_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__104));
lean_inc_n(v_currMacroScope_2214_, 3);
lean_inc_n(v_quotContext_2213_, 3);
v___x_2221_ = l_Lean_addMacroScope(v_quotContext_2213_, v___x_2220_, v_currMacroScope_2214_);
v___x_2222_ = lean_box(0);
v___x_2223_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__108));
lean_inc_n(v___x_2217_, 13);
v___x_2224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2217_);
lean_ctor_set(v___x_2224_, 1, v___x_2219_);
lean_ctor_set(v___x_2224_, 2, v___x_2221_);
lean_ctor_set(v___x_2224_, 3, v___x_2223_);
v___x_2225_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2226_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2227_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2228_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2217_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2231_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2232_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2233_ = l_Lean_addMacroScope(v_quotContext_2213_, v___x_2232_, v_currMacroScope_2214_);
v___x_2234_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2235_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2217_);
lean_ctor_set(v___x_2235_, 1, v___x_2231_);
lean_ctor_set(v___x_2235_, 2, v___x_2233_);
lean_ctor_set(v___x_2235_, 3, v___x_2234_);
v___x_2236_ = l_Lean_Syntax_node1(v___x_2217_, v___x_2230_, v___x_2235_);
v___x_2237_ = l_Lean_Syntax_node2(v___x_2217_, v___x_2227_, v___x_2229_, v___x_2236_);
v___x_2238_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2239_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2217_);
lean_ctor_set(v___x_2240_, 1, v___x_2239_);
v___x_2241_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75);
v___x_2242_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76));
v___x_2243_ = l_Lean_addMacroScope(v_quotContext_2213_, v___x_2242_, v_currMacroScope_2214_);
v___x_2244_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2217_);
lean_ctor_set(v___x_2244_, 1, v___x_2241_);
lean_ctor_set(v___x_2244_, 2, v___x_2243_);
lean_ctor_set(v___x_2244_, 3, v___x_2222_);
v___x_2245_ = l_Lean_Syntax_node2(v___x_2217_, v___x_2238_, v___x_2240_, v___x_2244_);
v___x_2246_ = l_Lean_Syntax_node1(v___x_2217_, v___x_2225_, v_a_2208_);
v___x_2247_ = l_Lean_Syntax_node2(v___x_2217_, v___x_2218_, v___x_2245_, v___x_2246_);
v___x_2248_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2249_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2217_);
lean_ctor_set(v___x_2249_, 1, v___x_2248_);
v___x_2250_ = l_Lean_Syntax_node3(v___x_2217_, v___x_2226_, v___x_2237_, v___x_2247_, v___x_2249_);
v___x_2251_ = l_Lean_Syntax_node1(v___x_2217_, v___x_2225_, v___x_2250_);
v___x_2252_ = l_Lean_Syntax_node2(v___x_2217_, v___x_2218_, v___x_2224_, v___x_2251_);
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 0, v___x_2252_);
v___x_2254_ = v___x_2211_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2252_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_a_2209_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
case 9:
{
lean_object* v_presentation_2257_; lean_object* v___x_2258_; lean_object* v_a_2259_; lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2281_; 
v_presentation_2257_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2257_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2258_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertYear(v_presentation_2257_, v_a_1714_, v_a_1715_);
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_a_2260_ = lean_ctor_get(v___x_2258_, 1);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2262_ = v___x_2258_;
v_isShared_2263_ = v_isSharedCheck_2281_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2281_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v_quotContext_2264_; lean_object* v_currMacroScope_2265_; lean_object* v_ref_2266_; uint8_t v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2279_; 
v_quotContext_2264_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2265_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2266_ = lean_ctor_get(v_a_1714_, 5);
v___x_2267_ = 0;
v___x_2268_ = l_Lean_SourceInfo_fromRef(v_ref_2266_, v___x_2267_);
v___x_2269_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2270_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__110, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__110_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__110);
v___x_2271_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__112));
lean_inc(v_currMacroScope_2265_);
lean_inc(v_quotContext_2264_);
v___x_2272_ = l_Lean_addMacroScope(v_quotContext_2264_, v___x_2271_, v_currMacroScope_2265_);
v___x_2273_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__116));
lean_inc_n(v___x_2268_, 2);
v___x_2274_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2268_);
lean_ctor_set(v___x_2274_, 1, v___x_2270_);
lean_ctor_set(v___x_2274_, 2, v___x_2272_);
lean_ctor_set(v___x_2274_, 3, v___x_2273_);
v___x_2275_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2276_ = l_Lean_Syntax_node1(v___x_2268_, v___x_2275_, v_a_2259_);
v___x_2277_ = l_Lean_Syntax_node2(v___x_2268_, v___x_2269_, v___x_2274_, v___x_2276_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v___x_2277_);
v___x_2279_ = v___x_2262_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v___x_2277_);
lean_ctor_set(v_reuseFailAlloc_2280_, 1, v_a_2260_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
case 10:
{
lean_object* v_presentation_2282_; lean_object* v___x_2283_; lean_object* v_a_2284_; lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2306_; 
v_presentation_2282_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2282_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2283_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2282_, v_a_1714_, v_a_1715_);
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
v_a_2285_ = lean_ctor_get(v___x_2283_, 1);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2287_ = v___x_2283_;
v_isShared_2288_ = v_isSharedCheck_2306_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_inc(v_a_2284_);
lean_dec(v___x_2283_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2306_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v_quotContext_2289_; lean_object* v_currMacroScope_2290_; lean_object* v_ref_2291_; uint8_t v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2304_; 
v_quotContext_2289_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2290_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2291_ = lean_ctor_get(v_a_1714_, 5);
v___x_2292_ = 0;
v___x_2293_ = l_Lean_SourceInfo_fromRef(v_ref_2291_, v___x_2292_);
v___x_2294_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2295_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__118, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__118_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__118);
v___x_2296_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__120));
lean_inc(v_currMacroScope_2290_);
lean_inc(v_quotContext_2289_);
v___x_2297_ = l_Lean_addMacroScope(v_quotContext_2289_, v___x_2296_, v_currMacroScope_2290_);
v___x_2298_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__124));
lean_inc_n(v___x_2293_, 2);
v___x_2299_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2293_);
lean_ctor_set(v___x_2299_, 1, v___x_2295_);
lean_ctor_set(v___x_2299_, 2, v___x_2297_);
lean_ctor_set(v___x_2299_, 3, v___x_2298_);
v___x_2300_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2301_ = l_Lean_Syntax_node1(v___x_2293_, v___x_2300_, v_a_2284_);
v___x_2302_ = l_Lean_Syntax_node2(v___x_2293_, v___x_2294_, v___x_2299_, v___x_2301_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2302_);
v___x_2304_ = v___x_2287_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2305_, 1, v_a_2285_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
case 11:
{
lean_object* v_presentation_2307_; lean_object* v___x_2308_; lean_object* v_a_2309_; lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2331_; 
v_presentation_2307_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2307_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2308_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2307_, v_a_1714_, v_a_1715_);
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
v_a_2310_ = lean_ctor_get(v___x_2308_, 1);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2312_ = v___x_2308_;
v_isShared_2313_ = v_isSharedCheck_2331_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_inc(v_a_2309_);
lean_dec(v___x_2308_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2331_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v_quotContext_2314_; lean_object* v_currMacroScope_2315_; lean_object* v_ref_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2329_; 
v_quotContext_2314_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2315_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2316_ = lean_ctor_get(v_a_1714_, 5);
v___x_2317_ = 0;
v___x_2318_ = l_Lean_SourceInfo_fromRef(v_ref_2316_, v___x_2317_);
v___x_2319_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2320_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__126, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__126_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__126);
v___x_2321_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__128));
lean_inc(v_currMacroScope_2315_);
lean_inc(v_quotContext_2314_);
v___x_2322_ = l_Lean_addMacroScope(v_quotContext_2314_, v___x_2321_, v_currMacroScope_2315_);
v___x_2323_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__132));
lean_inc_n(v___x_2318_, 2);
v___x_2324_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2318_);
lean_ctor_set(v___x_2324_, 1, v___x_2320_);
lean_ctor_set(v___x_2324_, 2, v___x_2322_);
lean_ctor_set(v___x_2324_, 3, v___x_2323_);
v___x_2325_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2326_ = l_Lean_Syntax_node1(v___x_2318_, v___x_2325_, v_a_2309_);
v___x_2327_ = l_Lean_Syntax_node2(v___x_2318_, v___x_2319_, v___x_2324_, v___x_2326_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2327_);
v___x_2329_ = v___x_2312_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2327_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v_a_2310_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
case 12:
{
uint8_t v_presentation_2332_; lean_object* v___x_2333_; lean_object* v_a_2334_; lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2356_; 
v_presentation_2332_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2333_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v_presentation_2332_, v_a_1714_, v_a_1715_);
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
v_a_2335_ = lean_ctor_get(v___x_2333_, 1);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2337_ = v___x_2333_;
v_isShared_2338_ = v_isSharedCheck_2356_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_inc(v_a_2334_);
lean_dec(v___x_2333_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2356_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v_quotContext_2339_; lean_object* v_currMacroScope_2340_; lean_object* v_ref_2341_; uint8_t v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2354_; 
v_quotContext_2339_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2340_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2341_ = lean_ctor_get(v_a_1714_, 5);
v___x_2342_ = 0;
v___x_2343_ = l_Lean_SourceInfo_fromRef(v_ref_2341_, v___x_2342_);
v___x_2344_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2345_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__134, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__134_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__134);
v___x_2346_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__136));
lean_inc(v_currMacroScope_2340_);
lean_inc(v_quotContext_2339_);
v___x_2347_ = l_Lean_addMacroScope(v_quotContext_2339_, v___x_2346_, v_currMacroScope_2340_);
v___x_2348_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__140));
lean_inc_n(v___x_2343_, 2);
v___x_2349_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2343_);
lean_ctor_set(v___x_2349_, 1, v___x_2345_);
lean_ctor_set(v___x_2349_, 2, v___x_2347_);
lean_ctor_set(v___x_2349_, 3, v___x_2348_);
v___x_2350_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2351_ = l_Lean_Syntax_node1(v___x_2343_, v___x_2350_, v_a_2334_);
v___x_2352_ = l_Lean_Syntax_node2(v___x_2343_, v___x_2344_, v___x_2349_, v___x_2351_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2352_);
v___x_2354_ = v___x_2337_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2352_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_a_2335_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
case 13:
{
lean_object* v_presentation_2357_; 
v_presentation_2357_ = lean_ctor_get(v_x_1713_, 0);
lean_inc_ref(v_presentation_2357_);
lean_dec_ref_known(v_x_1713_, 1);
if (lean_obj_tag(v_presentation_2357_) == 0)
{
lean_object* v_val_2358_; lean_object* v___x_2359_; lean_object* v_a_2360_; lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2408_; 
v_val_2358_ = lean_ctor_get(v_presentation_2357_, 0);
lean_inc(v_val_2358_);
lean_dec_ref_known(v_presentation_2357_, 1);
v___x_2359_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_val_2358_, v_a_1714_, v_a_1715_);
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
v_a_2361_ = lean_ctor_get(v___x_2359_, 1);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2363_ = v___x_2359_;
v_isShared_2364_ = v_isSharedCheck_2408_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_inc(v_a_2360_);
lean_dec(v___x_2359_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2408_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v_quotContext_2365_; lean_object* v_currMacroScope_2366_; lean_object* v_ref_2367_; uint8_t v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
v_quotContext_2365_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2366_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2367_ = lean_ctor_get(v_a_1714_, 5);
v___x_2368_ = 0;
v___x_2369_ = l_Lean_SourceInfo_fromRef(v_ref_2367_, v___x_2368_);
v___x_2370_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2371_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142);
v___x_2372_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144));
lean_inc_n(v_currMacroScope_2366_, 3);
lean_inc_n(v_quotContext_2365_, 3);
v___x_2373_ = l_Lean_addMacroScope(v_quotContext_2365_, v___x_2372_, v_currMacroScope_2366_);
v___x_2374_ = lean_box(0);
v___x_2375_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__148));
lean_inc_n(v___x_2369_, 13);
v___x_2376_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2369_);
lean_ctor_set(v___x_2376_, 1, v___x_2371_);
lean_ctor_set(v___x_2376_, 2, v___x_2373_);
lean_ctor_set(v___x_2376_, 3, v___x_2375_);
v___x_2377_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2378_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2379_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2380_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2369_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2383_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2384_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2385_ = l_Lean_addMacroScope(v_quotContext_2365_, v___x_2384_, v_currMacroScope_2366_);
v___x_2386_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2387_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2369_);
lean_ctor_set(v___x_2387_, 1, v___x_2383_);
lean_ctor_set(v___x_2387_, 2, v___x_2385_);
lean_ctor_set(v___x_2387_, 3, v___x_2386_);
v___x_2388_ = l_Lean_Syntax_node1(v___x_2369_, v___x_2382_, v___x_2387_);
v___x_2389_ = l_Lean_Syntax_node2(v___x_2369_, v___x_2379_, v___x_2381_, v___x_2388_);
v___x_2390_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2391_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2392_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2369_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
v___x_2393_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71);
v___x_2394_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72));
v___x_2395_ = l_Lean_addMacroScope(v_quotContext_2365_, v___x_2394_, v_currMacroScope_2366_);
v___x_2396_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2369_);
lean_ctor_set(v___x_2396_, 1, v___x_2393_);
lean_ctor_set(v___x_2396_, 2, v___x_2395_);
lean_ctor_set(v___x_2396_, 3, v___x_2374_);
v___x_2397_ = l_Lean_Syntax_node2(v___x_2369_, v___x_2390_, v___x_2392_, v___x_2396_);
v___x_2398_ = l_Lean_Syntax_node1(v___x_2369_, v___x_2377_, v_a_2360_);
v___x_2399_ = l_Lean_Syntax_node2(v___x_2369_, v___x_2370_, v___x_2397_, v___x_2398_);
v___x_2400_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2401_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2369_);
lean_ctor_set(v___x_2401_, 1, v___x_2400_);
v___x_2402_ = l_Lean_Syntax_node3(v___x_2369_, v___x_2378_, v___x_2389_, v___x_2399_, v___x_2401_);
v___x_2403_ = l_Lean_Syntax_node1(v___x_2369_, v___x_2377_, v___x_2402_);
v___x_2404_ = l_Lean_Syntax_node2(v___x_2369_, v___x_2370_, v___x_2376_, v___x_2403_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 0, v___x_2404_);
v___x_2406_ = v___x_2363_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2407_, 1, v_a_2361_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
else
{
lean_object* v_val_2409_; uint8_t v___x_2410_; lean_object* v___x_2411_; lean_object* v_a_2412_; lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2460_; 
v_val_2409_ = lean_ctor_get(v_presentation_2357_, 0);
lean_inc(v_val_2409_);
lean_dec_ref_known(v_presentation_2357_, 1);
v___x_2410_ = lean_unbox(v_val_2409_);
lean_dec(v_val_2409_);
v___x_2411_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v___x_2410_, v_a_1714_, v_a_1715_);
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
v_a_2413_ = lean_ctor_get(v___x_2411_, 1);
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2415_ = v___x_2411_;
v_isShared_2416_ = v_isSharedCheck_2460_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_inc(v_a_2412_);
lean_dec(v___x_2411_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2460_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v_quotContext_2417_; lean_object* v_currMacroScope_2418_; lean_object* v_ref_2419_; uint8_t v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2458_; 
v_quotContext_2417_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2418_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2419_ = lean_ctor_get(v_a_1714_, 5);
v___x_2420_ = 0;
v___x_2421_ = l_Lean_SourceInfo_fromRef(v_ref_2419_, v___x_2420_);
v___x_2422_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2423_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__142);
v___x_2424_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__144));
lean_inc_n(v_currMacroScope_2418_, 3);
lean_inc_n(v_quotContext_2417_, 3);
v___x_2425_ = l_Lean_addMacroScope(v_quotContext_2417_, v___x_2424_, v_currMacroScope_2418_);
v___x_2426_ = lean_box(0);
v___x_2427_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__148));
lean_inc_n(v___x_2421_, 13);
v___x_2428_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2421_);
lean_ctor_set(v___x_2428_, 1, v___x_2423_);
lean_ctor_set(v___x_2428_, 2, v___x_2425_);
lean_ctor_set(v___x_2428_, 3, v___x_2427_);
v___x_2429_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2430_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2431_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2432_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2421_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2435_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2436_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2437_ = l_Lean_addMacroScope(v_quotContext_2417_, v___x_2436_, v_currMacroScope_2418_);
v___x_2438_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2439_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2421_);
lean_ctor_set(v___x_2439_, 1, v___x_2435_);
lean_ctor_set(v___x_2439_, 2, v___x_2437_);
lean_ctor_set(v___x_2439_, 3, v___x_2438_);
v___x_2440_ = l_Lean_Syntax_node1(v___x_2421_, v___x_2434_, v___x_2439_);
v___x_2441_ = l_Lean_Syntax_node2(v___x_2421_, v___x_2431_, v___x_2433_, v___x_2440_);
v___x_2442_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2443_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2421_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75);
v___x_2446_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76));
v___x_2447_ = l_Lean_addMacroScope(v_quotContext_2417_, v___x_2446_, v_currMacroScope_2418_);
v___x_2448_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2421_);
lean_ctor_set(v___x_2448_, 1, v___x_2445_);
lean_ctor_set(v___x_2448_, 2, v___x_2447_);
lean_ctor_set(v___x_2448_, 3, v___x_2426_);
v___x_2449_ = l_Lean_Syntax_node2(v___x_2421_, v___x_2442_, v___x_2444_, v___x_2448_);
v___x_2450_ = l_Lean_Syntax_node1(v___x_2421_, v___x_2429_, v_a_2412_);
v___x_2451_ = l_Lean_Syntax_node2(v___x_2421_, v___x_2422_, v___x_2449_, v___x_2450_);
v___x_2452_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2453_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2421_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v___x_2454_ = l_Lean_Syntax_node3(v___x_2421_, v___x_2430_, v___x_2441_, v___x_2451_, v___x_2453_);
v___x_2455_ = l_Lean_Syntax_node1(v___x_2421_, v___x_2429_, v___x_2454_);
v___x_2456_ = l_Lean_Syntax_node2(v___x_2421_, v___x_2422_, v___x_2428_, v___x_2455_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2456_);
v___x_2458_ = v___x_2415_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v___x_2456_);
lean_ctor_set(v_reuseFailAlloc_2459_, 1, v_a_2413_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
}
}
case 14:
{
lean_object* v_presentation_2461_; 
v_presentation_2461_ = lean_ctor_get(v_x_1713_, 0);
lean_inc_ref(v_presentation_2461_);
lean_dec_ref_known(v_x_1713_, 1);
if (lean_obj_tag(v_presentation_2461_) == 0)
{
lean_object* v_val_2462_; lean_object* v___x_2463_; lean_object* v_a_2464_; lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2512_; 
v_val_2462_ = lean_ctor_get(v_presentation_2461_, 0);
lean_inc(v_val_2462_);
lean_dec_ref_known(v_presentation_2461_, 1);
v___x_2463_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_val_2462_, v_a_1714_, v_a_1715_);
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
v_a_2465_ = lean_ctor_get(v___x_2463_, 1);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2467_ = v___x_2463_;
v_isShared_2468_ = v_isSharedCheck_2512_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_inc(v_a_2464_);
lean_dec(v___x_2463_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2512_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v_quotContext_2469_; lean_object* v_currMacroScope_2470_; lean_object* v_ref_2471_; uint8_t v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2510_; 
v_quotContext_2469_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2470_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2471_ = lean_ctor_get(v_a_1714_, 5);
v___x_2472_ = 0;
v___x_2473_ = l_Lean_SourceInfo_fromRef(v_ref_2471_, v___x_2472_);
v___x_2474_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2475_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150);
v___x_2476_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152));
lean_inc_n(v_currMacroScope_2470_, 3);
lean_inc_n(v_quotContext_2469_, 3);
v___x_2477_ = l_Lean_addMacroScope(v_quotContext_2469_, v___x_2476_, v_currMacroScope_2470_);
v___x_2478_ = lean_box(0);
v___x_2479_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__156));
lean_inc_n(v___x_2473_, 13);
v___x_2480_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2473_);
lean_ctor_set(v___x_2480_, 1, v___x_2475_);
lean_ctor_set(v___x_2480_, 2, v___x_2477_);
lean_ctor_set(v___x_2480_, 3, v___x_2479_);
v___x_2481_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2482_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2483_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2484_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2485_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2473_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2487_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2488_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2489_ = l_Lean_addMacroScope(v_quotContext_2469_, v___x_2488_, v_currMacroScope_2470_);
v___x_2490_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2491_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2473_);
lean_ctor_set(v___x_2491_, 1, v___x_2487_);
lean_ctor_set(v___x_2491_, 2, v___x_2489_);
lean_ctor_set(v___x_2491_, 3, v___x_2490_);
v___x_2492_ = l_Lean_Syntax_node1(v___x_2473_, v___x_2486_, v___x_2491_);
v___x_2493_ = l_Lean_Syntax_node2(v___x_2473_, v___x_2483_, v___x_2485_, v___x_2492_);
v___x_2494_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2495_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2496_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2473_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__71);
v___x_2498_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__72));
v___x_2499_ = l_Lean_addMacroScope(v_quotContext_2469_, v___x_2498_, v_currMacroScope_2470_);
v___x_2500_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2473_);
lean_ctor_set(v___x_2500_, 1, v___x_2497_);
lean_ctor_set(v___x_2500_, 2, v___x_2499_);
lean_ctor_set(v___x_2500_, 3, v___x_2478_);
v___x_2501_ = l_Lean_Syntax_node2(v___x_2473_, v___x_2494_, v___x_2496_, v___x_2500_);
v___x_2502_ = l_Lean_Syntax_node1(v___x_2473_, v___x_2481_, v_a_2464_);
v___x_2503_ = l_Lean_Syntax_node2(v___x_2473_, v___x_2474_, v___x_2501_, v___x_2502_);
v___x_2504_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2473_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = l_Lean_Syntax_node3(v___x_2473_, v___x_2482_, v___x_2493_, v___x_2503_, v___x_2505_);
v___x_2507_ = l_Lean_Syntax_node1(v___x_2473_, v___x_2481_, v___x_2506_);
v___x_2508_ = l_Lean_Syntax_node2(v___x_2473_, v___x_2474_, v___x_2480_, v___x_2507_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 0, v___x_2508_);
v___x_2510_ = v___x_2467_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v_a_2465_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
else
{
lean_object* v_val_2513_; uint8_t v___x_2514_; lean_object* v___x_2515_; lean_object* v_a_2516_; lean_object* v_a_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2564_; 
v_val_2513_ = lean_ctor_get(v_presentation_2461_, 0);
lean_inc(v_val_2513_);
lean_dec_ref_known(v_presentation_2461_, 1);
v___x_2514_ = lean_unbox(v_val_2513_);
lean_dec(v_val_2513_);
v___x_2515_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v___x_2514_, v_a_1714_, v_a_1715_);
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
v_a_2517_ = lean_ctor_get(v___x_2515_, 1);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2519_ = v___x_2515_;
v_isShared_2520_ = v_isSharedCheck_2564_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_a_2517_);
lean_inc(v_a_2516_);
lean_dec(v___x_2515_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2564_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v_quotContext_2521_; lean_object* v_currMacroScope_2522_; lean_object* v_ref_2523_; uint8_t v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2562_; 
v_quotContext_2521_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2522_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2523_ = lean_ctor_get(v_a_1714_, 5);
v___x_2524_ = 0;
v___x_2525_ = l_Lean_SourceInfo_fromRef(v_ref_2523_, v___x_2524_);
v___x_2526_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2527_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__150);
v___x_2528_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__152));
lean_inc_n(v_currMacroScope_2522_, 3);
lean_inc_n(v_quotContext_2521_, 3);
v___x_2529_ = l_Lean_addMacroScope(v_quotContext_2521_, v___x_2528_, v_currMacroScope_2522_);
v___x_2530_ = lean_box(0);
v___x_2531_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__156));
lean_inc_n(v___x_2525_, 13);
v___x_2532_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2525_);
lean_ctor_set(v___x_2532_, 1, v___x_2527_);
lean_ctor_set(v___x_2532_, 2, v___x_2529_);
lean_ctor_set(v___x_2532_, 3, v___x_2531_);
v___x_2533_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2534_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__42));
v___x_2535_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__44));
v___x_2536_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__45));
v___x_2537_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2525_);
lean_ctor_set(v___x_2537_, 1, v___x_2536_);
v___x_2538_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__47));
v___x_2539_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__49);
v___x_2540_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__50);
v___x_2541_ = l_Lean_addMacroScope(v_quotContext_2521_, v___x_2540_, v_currMacroScope_2522_);
v___x_2542_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__66));
v___x_2543_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2525_);
lean_ctor_set(v___x_2543_, 1, v___x_2539_);
lean_ctor_set(v___x_2543_, 2, v___x_2541_);
lean_ctor_set(v___x_2543_, 3, v___x_2542_);
v___x_2544_ = l_Lean_Syntax_node1(v___x_2525_, v___x_2538_, v___x_2543_);
v___x_2545_ = l_Lean_Syntax_node2(v___x_2525_, v___x_2535_, v___x_2537_, v___x_2544_);
v___x_2546_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_2547_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
v___x_2548_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2525_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__75);
v___x_2550_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__76));
v___x_2551_ = l_Lean_addMacroScope(v_quotContext_2521_, v___x_2550_, v_currMacroScope_2522_);
v___x_2552_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2525_);
lean_ctor_set(v___x_2552_, 1, v___x_2549_);
lean_ctor_set(v___x_2552_, 2, v___x_2551_);
lean_ctor_set(v___x_2552_, 3, v___x_2530_);
v___x_2553_ = l_Lean_Syntax_node2(v___x_2525_, v___x_2546_, v___x_2548_, v___x_2552_);
v___x_2554_ = l_Lean_Syntax_node1(v___x_2525_, v___x_2533_, v_a_2516_);
v___x_2555_ = l_Lean_Syntax_node2(v___x_2525_, v___x_2526_, v___x_2553_, v___x_2554_);
v___x_2556_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__73));
v___x_2557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2525_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
v___x_2558_ = l_Lean_Syntax_node3(v___x_2525_, v___x_2534_, v___x_2545_, v___x_2555_, v___x_2557_);
v___x_2559_ = l_Lean_Syntax_node1(v___x_2525_, v___x_2533_, v___x_2558_);
v___x_2560_ = l_Lean_Syntax_node2(v___x_2525_, v___x_2526_, v___x_2532_, v___x_2559_);
if (v_isShared_2520_ == 0)
{
lean_ctor_set(v___x_2519_, 0, v___x_2560_);
v___x_2562_ = v___x_2519_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2560_);
lean_ctor_set(v_reuseFailAlloc_2563_, 1, v_a_2517_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
case 15:
{
lean_object* v_presentation_2565_; lean_object* v___x_2566_; lean_object* v_a_2567_; lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2589_; 
v_presentation_2565_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2565_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2566_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2565_, v_a_1714_, v_a_1715_);
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
v_a_2568_ = lean_ctor_get(v___x_2566_, 1);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2570_ = v___x_2566_;
v_isShared_2571_ = v_isSharedCheck_2589_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_inc(v_a_2567_);
lean_dec(v___x_2566_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2589_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v_quotContext_2572_; lean_object* v_currMacroScope_2573_; lean_object* v_ref_2574_; uint8_t v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2587_; 
v_quotContext_2572_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2573_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2574_ = lean_ctor_get(v_a_1714_, 5);
v___x_2575_ = 0;
v___x_2576_ = l_Lean_SourceInfo_fromRef(v_ref_2574_, v___x_2575_);
v___x_2577_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2578_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__158, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__158_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__158);
v___x_2579_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__160));
lean_inc(v_currMacroScope_2573_);
lean_inc(v_quotContext_2572_);
v___x_2580_ = l_Lean_addMacroScope(v_quotContext_2572_, v___x_2579_, v_currMacroScope_2573_);
v___x_2581_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__164));
lean_inc_n(v___x_2576_, 2);
v___x_2582_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2576_);
lean_ctor_set(v___x_2582_, 1, v___x_2578_);
lean_ctor_set(v___x_2582_, 2, v___x_2580_);
lean_ctor_set(v___x_2582_, 3, v___x_2581_);
v___x_2583_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2584_ = l_Lean_Syntax_node1(v___x_2576_, v___x_2583_, v_a_2567_);
v___x_2585_ = l_Lean_Syntax_node2(v___x_2576_, v___x_2577_, v___x_2582_, v___x_2584_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2585_);
v___x_2587_ = v___x_2570_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2585_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v_a_2568_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
case 16:
{
uint8_t v_presentation_2590_; lean_object* v___x_2591_; lean_object* v_a_2592_; lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2614_; 
v_presentation_2590_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2591_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v_presentation_2590_, v_a_1714_, v_a_1715_);
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
v_a_2593_ = lean_ctor_get(v___x_2591_, 1);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2595_ = v___x_2591_;
v_isShared_2596_ = v_isSharedCheck_2614_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_inc(v_a_2592_);
lean_dec(v___x_2591_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2614_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v_quotContext_2597_; lean_object* v_currMacroScope_2598_; lean_object* v_ref_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2612_; 
v_quotContext_2597_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2598_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2599_ = lean_ctor_get(v_a_1714_, 5);
v___x_2600_ = 0;
v___x_2601_ = l_Lean_SourceInfo_fromRef(v_ref_2599_, v___x_2600_);
v___x_2602_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2603_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__166, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__166_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__166);
v___x_2604_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__168));
lean_inc(v_currMacroScope_2598_);
lean_inc(v_quotContext_2597_);
v___x_2605_ = l_Lean_addMacroScope(v_quotContext_2597_, v___x_2604_, v_currMacroScope_2598_);
v___x_2606_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__172));
lean_inc_n(v___x_2601_, 2);
v___x_2607_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2601_);
lean_ctor_set(v___x_2607_, 1, v___x_2603_);
lean_ctor_set(v___x_2607_, 2, v___x_2605_);
lean_ctor_set(v___x_2607_, 3, v___x_2606_);
v___x_2608_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2609_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2608_, v_a_2592_);
v___x_2610_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2602_, v___x_2607_, v___x_2609_);
if (v_isShared_2596_ == 0)
{
lean_ctor_set(v___x_2595_, 0, v___x_2610_);
v___x_2612_ = v___x_2595_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2610_);
lean_ctor_set(v_reuseFailAlloc_2613_, 1, v_a_2593_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
case 17:
{
uint8_t v_presentation_2615_; lean_object* v___x_2616_; lean_object* v_a_2617_; lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2639_; 
v_presentation_2615_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2616_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v_presentation_2615_, v_a_1714_, v_a_1715_);
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
v_a_2618_ = lean_ctor_get(v___x_2616_, 1);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2620_ = v___x_2616_;
v_isShared_2621_ = v_isSharedCheck_2639_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_inc(v_a_2617_);
lean_dec(v___x_2616_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2639_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v_quotContext_2622_; lean_object* v_currMacroScope_2623_; lean_object* v_ref_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2637_; 
v_quotContext_2622_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2623_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2624_ = lean_ctor_get(v_a_1714_, 5);
v___x_2625_ = 0;
v___x_2626_ = l_Lean_SourceInfo_fromRef(v_ref_2624_, v___x_2625_);
v___x_2627_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2628_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__174, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__174_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__174);
v___x_2629_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__176));
lean_inc(v_currMacroScope_2623_);
lean_inc(v_quotContext_2622_);
v___x_2630_ = l_Lean_addMacroScope(v_quotContext_2622_, v___x_2629_, v_currMacroScope_2623_);
v___x_2631_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__180));
lean_inc_n(v___x_2626_, 2);
v___x_2632_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2626_);
lean_ctor_set(v___x_2632_, 1, v___x_2628_);
lean_ctor_set(v___x_2632_, 2, v___x_2630_);
lean_ctor_set(v___x_2632_, 3, v___x_2631_);
v___x_2633_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2634_ = l_Lean_Syntax_node1(v___x_2626_, v___x_2633_, v_a_2617_);
v___x_2635_ = l_Lean_Syntax_node2(v___x_2626_, v___x_2627_, v___x_2632_, v___x_2634_);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v___x_2635_);
v___x_2637_ = v___x_2620_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v___x_2635_);
lean_ctor_set(v_reuseFailAlloc_2638_, 1, v_a_2618_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
case 18:
{
uint8_t v_presentation_2640_; lean_object* v___x_2641_; lean_object* v_a_2642_; lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2664_; 
v_presentation_2640_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2641_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertText(v_presentation_2640_, v_a_1714_, v_a_1715_);
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
v_a_2643_ = lean_ctor_get(v___x_2641_, 1);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2645_ = v___x_2641_;
v_isShared_2646_ = v_isSharedCheck_2664_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_inc(v_a_2642_);
lean_dec(v___x_2641_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2664_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v_quotContext_2647_; lean_object* v_currMacroScope_2648_; lean_object* v_ref_2649_; uint8_t v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2662_; 
v_quotContext_2647_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2648_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2649_ = lean_ctor_get(v_a_1714_, 5);
v___x_2650_ = 0;
v___x_2651_ = l_Lean_SourceInfo_fromRef(v_ref_2649_, v___x_2650_);
v___x_2652_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2653_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__182, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__182_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__182);
v___x_2654_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__184));
lean_inc(v_currMacroScope_2648_);
lean_inc(v_quotContext_2647_);
v___x_2655_ = l_Lean_addMacroScope(v_quotContext_2647_, v___x_2654_, v_currMacroScope_2648_);
v___x_2656_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__188));
lean_inc_n(v___x_2651_, 2);
v___x_2657_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2651_);
lean_ctor_set(v___x_2657_, 1, v___x_2653_);
lean_ctor_set(v___x_2657_, 2, v___x_2655_);
lean_ctor_set(v___x_2657_, 3, v___x_2656_);
v___x_2658_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2659_ = l_Lean_Syntax_node1(v___x_2651_, v___x_2658_, v_a_2642_);
v___x_2660_ = l_Lean_Syntax_node2(v___x_2651_, v___x_2652_, v___x_2657_, v___x_2659_);
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 0, v___x_2660_);
v___x_2662_ = v___x_2645_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v___x_2660_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_a_2643_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
case 19:
{
lean_object* v_presentation_2665_; lean_object* v___x_2666_; lean_object* v_a_2667_; lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2689_; 
v_presentation_2665_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2665_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2666_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2665_, v_a_1714_, v_a_1715_);
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
v_a_2668_ = lean_ctor_get(v___x_2666_, 1);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2670_ = v___x_2666_;
v_isShared_2671_ = v_isSharedCheck_2689_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_inc(v_a_2667_);
lean_dec(v___x_2666_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2689_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v_quotContext_2672_; lean_object* v_currMacroScope_2673_; lean_object* v_ref_2674_; uint8_t v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
v_quotContext_2672_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2673_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2674_ = lean_ctor_get(v_a_1714_, 5);
v___x_2675_ = 0;
v___x_2676_ = l_Lean_SourceInfo_fromRef(v_ref_2674_, v___x_2675_);
v___x_2677_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2678_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__190, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__190_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__190);
v___x_2679_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__192));
lean_inc(v_currMacroScope_2673_);
lean_inc(v_quotContext_2672_);
v___x_2680_ = l_Lean_addMacroScope(v_quotContext_2672_, v___x_2679_, v_currMacroScope_2673_);
v___x_2681_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__196));
lean_inc_n(v___x_2676_, 2);
v___x_2682_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2676_);
lean_ctor_set(v___x_2682_, 1, v___x_2678_);
lean_ctor_set(v___x_2682_, 2, v___x_2680_);
lean_ctor_set(v___x_2682_, 3, v___x_2681_);
v___x_2683_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2684_ = l_Lean_Syntax_node1(v___x_2676_, v___x_2683_, v_a_2667_);
v___x_2685_ = l_Lean_Syntax_node2(v___x_2676_, v___x_2677_, v___x_2682_, v___x_2684_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2685_);
v___x_2687_ = v___x_2670_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v_a_2668_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
case 20:
{
lean_object* v_presentation_2690_; lean_object* v___x_2691_; lean_object* v_a_2692_; lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2714_; 
v_presentation_2690_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2690_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2691_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2690_, v_a_1714_, v_a_1715_);
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
v_a_2693_ = lean_ctor_get(v___x_2691_, 1);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2695_ = v___x_2691_;
v_isShared_2696_ = v_isSharedCheck_2714_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_inc(v_a_2692_);
lean_dec(v___x_2691_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2714_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v_quotContext_2697_; lean_object* v_currMacroScope_2698_; lean_object* v_ref_2699_; uint8_t v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
v_quotContext_2697_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2698_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2699_ = lean_ctor_get(v_a_1714_, 5);
v___x_2700_ = 0;
v___x_2701_ = l_Lean_SourceInfo_fromRef(v_ref_2699_, v___x_2700_);
v___x_2702_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2703_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__198, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__198_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__198);
v___x_2704_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__200));
lean_inc(v_currMacroScope_2698_);
lean_inc(v_quotContext_2697_);
v___x_2705_ = l_Lean_addMacroScope(v_quotContext_2697_, v___x_2704_, v_currMacroScope_2698_);
v___x_2706_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__204));
lean_inc_n(v___x_2701_, 2);
v___x_2707_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2701_);
lean_ctor_set(v___x_2707_, 1, v___x_2703_);
lean_ctor_set(v___x_2707_, 2, v___x_2705_);
lean_ctor_set(v___x_2707_, 3, v___x_2706_);
v___x_2708_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2709_ = l_Lean_Syntax_node1(v___x_2701_, v___x_2708_, v_a_2692_);
v___x_2710_ = l_Lean_Syntax_node2(v___x_2701_, v___x_2702_, v___x_2707_, v___x_2709_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 0, v___x_2710_);
v___x_2712_ = v___x_2695_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2710_);
lean_ctor_set(v_reuseFailAlloc_2713_, 1, v_a_2693_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
case 21:
{
lean_object* v_presentation_2715_; lean_object* v___x_2716_; lean_object* v_a_2717_; lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2739_; 
v_presentation_2715_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2715_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2716_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2715_, v_a_1714_, v_a_1715_);
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_a_2718_ = lean_ctor_get(v___x_2716_, 1);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2720_ = v___x_2716_;
v_isShared_2721_ = v_isSharedCheck_2739_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2739_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v_quotContext_2722_; lean_object* v_currMacroScope_2723_; lean_object* v_ref_2724_; uint8_t v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2737_; 
v_quotContext_2722_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2723_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2724_ = lean_ctor_get(v_a_1714_, 5);
v___x_2725_ = 0;
v___x_2726_ = l_Lean_SourceInfo_fromRef(v_ref_2724_, v___x_2725_);
v___x_2727_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2728_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__206, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__206_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__206);
v___x_2729_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__208));
lean_inc(v_currMacroScope_2723_);
lean_inc(v_quotContext_2722_);
v___x_2730_ = l_Lean_addMacroScope(v_quotContext_2722_, v___x_2729_, v_currMacroScope_2723_);
v___x_2731_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__212));
lean_inc_n(v___x_2726_, 2);
v___x_2732_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2726_);
lean_ctor_set(v___x_2732_, 1, v___x_2728_);
lean_ctor_set(v___x_2732_, 2, v___x_2730_);
lean_ctor_set(v___x_2732_, 3, v___x_2731_);
v___x_2733_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2734_ = l_Lean_Syntax_node1(v___x_2726_, v___x_2733_, v_a_2717_);
v___x_2735_ = l_Lean_Syntax_node2(v___x_2726_, v___x_2727_, v___x_2732_, v___x_2734_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 0, v___x_2735_);
v___x_2737_ = v___x_2720_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v___x_2735_);
lean_ctor_set(v_reuseFailAlloc_2738_, 1, v_a_2718_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
case 22:
{
lean_object* v_presentation_2740_; lean_object* v___x_2741_; lean_object* v_a_2742_; lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2764_; 
v_presentation_2740_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2740_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2741_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2740_, v_a_1714_, v_a_1715_);
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
v_a_2743_ = lean_ctor_get(v___x_2741_, 1);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2745_ = v___x_2741_;
v_isShared_2746_ = v_isSharedCheck_2764_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_inc(v_a_2742_);
lean_dec(v___x_2741_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2764_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v_quotContext_2747_; lean_object* v_currMacroScope_2748_; lean_object* v_ref_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
v_quotContext_2747_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2748_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2749_ = lean_ctor_get(v_a_1714_, 5);
v___x_2750_ = 0;
v___x_2751_ = l_Lean_SourceInfo_fromRef(v_ref_2749_, v___x_2750_);
v___x_2752_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2753_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__214, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__214_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__214);
v___x_2754_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__216));
lean_inc(v_currMacroScope_2748_);
lean_inc(v_quotContext_2747_);
v___x_2755_ = l_Lean_addMacroScope(v_quotContext_2747_, v___x_2754_, v_currMacroScope_2748_);
v___x_2756_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__220));
lean_inc_n(v___x_2751_, 2);
v___x_2757_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2751_);
lean_ctor_set(v___x_2757_, 1, v___x_2753_);
lean_ctor_set(v___x_2757_, 2, v___x_2755_);
lean_ctor_set(v___x_2757_, 3, v___x_2756_);
v___x_2758_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2759_ = l_Lean_Syntax_node1(v___x_2751_, v___x_2758_, v_a_2742_);
v___x_2760_ = l_Lean_Syntax_node2(v___x_2751_, v___x_2752_, v___x_2757_, v___x_2759_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 0, v___x_2760_);
v___x_2762_ = v___x_2745_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v___x_2760_);
lean_ctor_set(v_reuseFailAlloc_2763_, 1, v_a_2743_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
case 23:
{
lean_object* v_presentation_2765_; lean_object* v___x_2766_; lean_object* v_a_2767_; lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2789_; 
v_presentation_2765_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2765_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2766_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2765_, v_a_1714_, v_a_1715_);
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
v_a_2768_ = lean_ctor_get(v___x_2766_, 1);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2770_ = v___x_2766_;
v_isShared_2771_ = v_isSharedCheck_2789_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_inc(v_a_2767_);
lean_dec(v___x_2766_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2789_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v_quotContext_2772_; lean_object* v_currMacroScope_2773_; lean_object* v_ref_2774_; uint8_t v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
v_quotContext_2772_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2773_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2774_ = lean_ctor_get(v_a_1714_, 5);
v___x_2775_ = 0;
v___x_2776_ = l_Lean_SourceInfo_fromRef(v_ref_2774_, v___x_2775_);
v___x_2777_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2778_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__222, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__222_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__222);
v___x_2779_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__224));
lean_inc(v_currMacroScope_2773_);
lean_inc(v_quotContext_2772_);
v___x_2780_ = l_Lean_addMacroScope(v_quotContext_2772_, v___x_2779_, v_currMacroScope_2773_);
v___x_2781_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__228));
lean_inc_n(v___x_2776_, 2);
v___x_2782_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2776_);
lean_ctor_set(v___x_2782_, 1, v___x_2778_);
lean_ctor_set(v___x_2782_, 2, v___x_2780_);
lean_ctor_set(v___x_2782_, 3, v___x_2781_);
v___x_2783_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2784_ = l_Lean_Syntax_node1(v___x_2776_, v___x_2783_, v_a_2767_);
v___x_2785_ = l_Lean_Syntax_node2(v___x_2776_, v___x_2777_, v___x_2782_, v___x_2784_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 0, v___x_2785_);
v___x_2787_ = v___x_2770_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2788_, 1, v_a_2768_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
case 24:
{
lean_object* v_presentation_2790_; lean_object* v___x_2791_; lean_object* v_a_2792_; lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2814_; 
v_presentation_2790_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2790_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2791_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2790_, v_a_1714_, v_a_1715_);
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
v_a_2793_ = lean_ctor_get(v___x_2791_, 1);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2795_ = v___x_2791_;
v_isShared_2796_ = v_isSharedCheck_2814_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_inc(v_a_2792_);
lean_dec(v___x_2791_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2814_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v_quotContext_2797_; lean_object* v_currMacroScope_2798_; lean_object* v_ref_2799_; uint8_t v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2812_; 
v_quotContext_2797_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2798_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2799_ = lean_ctor_get(v_a_1714_, 5);
v___x_2800_ = 0;
v___x_2801_ = l_Lean_SourceInfo_fromRef(v_ref_2799_, v___x_2800_);
v___x_2802_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2803_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__230, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__230_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__230);
v___x_2804_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__232));
lean_inc(v_currMacroScope_2798_);
lean_inc(v_quotContext_2797_);
v___x_2805_ = l_Lean_addMacroScope(v_quotContext_2797_, v___x_2804_, v_currMacroScope_2798_);
v___x_2806_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__236));
lean_inc_n(v___x_2801_, 2);
v___x_2807_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2801_);
lean_ctor_set(v___x_2807_, 1, v___x_2803_);
lean_ctor_set(v___x_2807_, 2, v___x_2805_);
lean_ctor_set(v___x_2807_, 3, v___x_2806_);
v___x_2808_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2809_ = l_Lean_Syntax_node1(v___x_2801_, v___x_2808_, v_a_2792_);
v___x_2810_ = l_Lean_Syntax_node2(v___x_2801_, v___x_2802_, v___x_2807_, v___x_2809_);
if (v_isShared_2796_ == 0)
{
lean_ctor_set(v___x_2795_, 0, v___x_2810_);
v___x_2812_ = v___x_2795_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v___x_2810_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v_a_2793_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
case 25:
{
lean_object* v_presentation_2815_; lean_object* v___x_2816_; lean_object* v_a_2817_; lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2839_; 
v_presentation_2815_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2815_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2816_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertFraction(v_presentation_2815_, v_a_1714_, v_a_1715_);
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_a_2818_ = lean_ctor_get(v___x_2816_, 1);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2820_ = v___x_2816_;
v_isShared_2821_ = v_isSharedCheck_2839_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2839_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v_quotContext_2822_; lean_object* v_currMacroScope_2823_; lean_object* v_ref_2824_; uint8_t v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2837_; 
v_quotContext_2822_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2823_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2824_ = lean_ctor_get(v_a_1714_, 5);
v___x_2825_ = 0;
v___x_2826_ = l_Lean_SourceInfo_fromRef(v_ref_2824_, v___x_2825_);
v___x_2827_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2828_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__238, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__238_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__238);
v___x_2829_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__240));
lean_inc(v_currMacroScope_2823_);
lean_inc(v_quotContext_2822_);
v___x_2830_ = l_Lean_addMacroScope(v_quotContext_2822_, v___x_2829_, v_currMacroScope_2823_);
v___x_2831_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__244));
lean_inc_n(v___x_2826_, 2);
v___x_2832_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2826_);
lean_ctor_set(v___x_2832_, 1, v___x_2828_);
lean_ctor_set(v___x_2832_, 2, v___x_2830_);
lean_ctor_set(v___x_2832_, 3, v___x_2831_);
v___x_2833_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2834_ = l_Lean_Syntax_node1(v___x_2826_, v___x_2833_, v_a_2817_);
v___x_2835_ = l_Lean_Syntax_node2(v___x_2826_, v___x_2827_, v___x_2832_, v___x_2834_);
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 0, v___x_2835_);
v___x_2837_ = v___x_2820_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2835_);
lean_ctor_set(v_reuseFailAlloc_2838_, 1, v_a_2818_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
case 26:
{
lean_object* v_presentation_2840_; lean_object* v___x_2841_; lean_object* v_a_2842_; lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2864_; 
v_presentation_2840_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2840_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2841_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2840_, v_a_1714_, v_a_1715_);
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
v_a_2843_ = lean_ctor_get(v___x_2841_, 1);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2845_ = v___x_2841_;
v_isShared_2846_ = v_isSharedCheck_2864_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_inc(v_a_2842_);
lean_dec(v___x_2841_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2864_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v_quotContext_2847_; lean_object* v_currMacroScope_2848_; lean_object* v_ref_2849_; uint8_t v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2862_; 
v_quotContext_2847_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2848_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2849_ = lean_ctor_get(v_a_1714_, 5);
v___x_2850_ = 0;
v___x_2851_ = l_Lean_SourceInfo_fromRef(v_ref_2849_, v___x_2850_);
v___x_2852_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2853_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__246, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__246_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__246);
v___x_2854_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__248));
lean_inc(v_currMacroScope_2848_);
lean_inc(v_quotContext_2847_);
v___x_2855_ = l_Lean_addMacroScope(v_quotContext_2847_, v___x_2854_, v_currMacroScope_2848_);
v___x_2856_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__252));
lean_inc_n(v___x_2851_, 2);
v___x_2857_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2851_);
lean_ctor_set(v___x_2857_, 1, v___x_2853_);
lean_ctor_set(v___x_2857_, 2, v___x_2855_);
lean_ctor_set(v___x_2857_, 3, v___x_2856_);
v___x_2858_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2859_ = l_Lean_Syntax_node1(v___x_2851_, v___x_2858_, v_a_2842_);
v___x_2860_ = l_Lean_Syntax_node2(v___x_2851_, v___x_2852_, v___x_2857_, v___x_2859_);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v___x_2860_);
v___x_2862_ = v___x_2845_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v___x_2860_);
lean_ctor_set(v_reuseFailAlloc_2863_, 1, v_a_2843_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
case 27:
{
lean_object* v_presentation_2865_; lean_object* v___x_2866_; lean_object* v_a_2867_; lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2889_; 
v_presentation_2865_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2865_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2866_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2865_, v_a_1714_, v_a_1715_);
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
v_a_2868_ = lean_ctor_get(v___x_2866_, 1);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2870_ = v___x_2866_;
v_isShared_2871_ = v_isSharedCheck_2889_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_inc(v_a_2867_);
lean_dec(v___x_2866_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2889_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v_quotContext_2872_; lean_object* v_currMacroScope_2873_; lean_object* v_ref_2874_; uint8_t v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2887_; 
v_quotContext_2872_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2873_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2874_ = lean_ctor_get(v_a_1714_, 5);
v___x_2875_ = 0;
v___x_2876_ = l_Lean_SourceInfo_fromRef(v_ref_2874_, v___x_2875_);
v___x_2877_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2878_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__254, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__254_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__254);
v___x_2879_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__256));
lean_inc(v_currMacroScope_2873_);
lean_inc(v_quotContext_2872_);
v___x_2880_ = l_Lean_addMacroScope(v_quotContext_2872_, v___x_2879_, v_currMacroScope_2873_);
v___x_2881_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__260));
lean_inc_n(v___x_2876_, 2);
v___x_2882_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2876_);
lean_ctor_set(v___x_2882_, 1, v___x_2878_);
lean_ctor_set(v___x_2882_, 2, v___x_2880_);
lean_ctor_set(v___x_2882_, 3, v___x_2881_);
v___x_2883_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2884_ = l_Lean_Syntax_node1(v___x_2876_, v___x_2883_, v_a_2867_);
v___x_2885_ = l_Lean_Syntax_node2(v___x_2876_, v___x_2877_, v___x_2882_, v___x_2884_);
if (v_isShared_2871_ == 0)
{
lean_ctor_set(v___x_2870_, 0, v___x_2885_);
v___x_2887_ = v___x_2870_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2885_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v_a_2868_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
case 28:
{
lean_object* v_presentation_2890_; lean_object* v___x_2891_; lean_object* v_a_2892_; lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2914_; 
v_presentation_2890_ = lean_ctor_get(v_x_1713_, 0);
lean_inc(v_presentation_2890_);
lean_dec_ref_known(v_x_1713_, 1);
v___x_2891_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber(v_presentation_2890_, v_a_1714_, v_a_1715_);
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
v_a_2893_ = lean_ctor_get(v___x_2891_, 1);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2895_ = v___x_2891_;
v_isShared_2896_ = v_isSharedCheck_2914_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_inc(v_a_2892_);
lean_dec(v___x_2891_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2914_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v_quotContext_2897_; lean_object* v_currMacroScope_2898_; lean_object* v_ref_2899_; uint8_t v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2912_; 
v_quotContext_2897_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2898_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2899_ = lean_ctor_get(v_a_1714_, 5);
v___x_2900_ = 0;
v___x_2901_ = l_Lean_SourceInfo_fromRef(v_ref_2899_, v___x_2900_);
v___x_2902_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2903_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__262, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__262_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__262);
v___x_2904_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__264));
lean_inc(v_currMacroScope_2898_);
lean_inc(v_quotContext_2897_);
v___x_2905_ = l_Lean_addMacroScope(v_quotContext_2897_, v___x_2904_, v_currMacroScope_2898_);
v___x_2906_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__268));
lean_inc_n(v___x_2901_, 2);
v___x_2907_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2901_);
lean_ctor_set(v___x_2907_, 1, v___x_2903_);
lean_ctor_set(v___x_2907_, 2, v___x_2905_);
lean_ctor_set(v___x_2907_, 3, v___x_2906_);
v___x_2908_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2909_ = l_Lean_Syntax_node1(v___x_2901_, v___x_2908_, v_a_2892_);
v___x_2910_ = l_Lean_Syntax_node2(v___x_2901_, v___x_2902_, v___x_2907_, v___x_2909_);
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 0, v___x_2910_);
v___x_2912_ = v___x_2895_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2910_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v_a_2893_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
case 29:
{
uint8_t v_presentation_2915_; lean_object* v___x_2916_; lean_object* v_a_2917_; lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2939_; 
v_presentation_2915_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2916_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneId(v_presentation_2915_, v_a_1714_, v_a_1715_);
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
v_a_2918_ = lean_ctor_get(v___x_2916_, 1);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2920_ = v___x_2916_;
v_isShared_2921_ = v_isSharedCheck_2939_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_inc(v_a_2917_);
lean_dec(v___x_2916_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2939_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v_quotContext_2922_; lean_object* v_currMacroScope_2923_; lean_object* v_ref_2924_; uint8_t v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2937_; 
v_quotContext_2922_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2923_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2924_ = lean_ctor_get(v_a_1714_, 5);
v___x_2925_ = 0;
v___x_2926_ = l_Lean_SourceInfo_fromRef(v_ref_2924_, v___x_2925_);
v___x_2927_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2928_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__270, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__270_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__270);
v___x_2929_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__272));
lean_inc(v_currMacroScope_2923_);
lean_inc(v_quotContext_2922_);
v___x_2930_ = l_Lean_addMacroScope(v_quotContext_2922_, v___x_2929_, v_currMacroScope_2923_);
v___x_2931_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__276));
lean_inc_n(v___x_2926_, 2);
v___x_2932_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2926_);
lean_ctor_set(v___x_2932_, 1, v___x_2928_);
lean_ctor_set(v___x_2932_, 2, v___x_2930_);
lean_ctor_set(v___x_2932_, 3, v___x_2931_);
v___x_2933_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2934_ = l_Lean_Syntax_node1(v___x_2926_, v___x_2933_, v_a_2917_);
v___x_2935_ = l_Lean_Syntax_node2(v___x_2926_, v___x_2927_, v___x_2932_, v___x_2934_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2935_);
v___x_2937_ = v___x_2920_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v___x_2935_);
lean_ctor_set(v_reuseFailAlloc_2938_, 1, v_a_2918_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
case 30:
{
uint8_t v_presentation_2940_; lean_object* v___x_2941_; lean_object* v_a_2942_; lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2964_; 
v_presentation_2940_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2941_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName(v_presentation_2940_, v_a_1714_, v_a_1715_);
v_a_2942_ = lean_ctor_get(v___x_2941_, 0);
v_a_2943_ = lean_ctor_get(v___x_2941_, 1);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2945_ = v___x_2941_;
v_isShared_2946_ = v_isSharedCheck_2964_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_inc(v_a_2942_);
lean_dec(v___x_2941_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2964_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v_quotContext_2947_; lean_object* v_currMacroScope_2948_; lean_object* v_ref_2949_; uint8_t v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2962_; 
v_quotContext_2947_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2948_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2949_ = lean_ctor_get(v_a_1714_, 5);
v___x_2950_ = 0;
v___x_2951_ = l_Lean_SourceInfo_fromRef(v_ref_2949_, v___x_2950_);
v___x_2952_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2953_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__278, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__278_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__278);
v___x_2954_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__280));
lean_inc(v_currMacroScope_2948_);
lean_inc(v_quotContext_2947_);
v___x_2955_ = l_Lean_addMacroScope(v_quotContext_2947_, v___x_2954_, v_currMacroScope_2948_);
v___x_2956_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__284));
lean_inc_n(v___x_2951_, 2);
v___x_2957_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2951_);
lean_ctor_set(v___x_2957_, 1, v___x_2953_);
lean_ctor_set(v___x_2957_, 2, v___x_2955_);
lean_ctor_set(v___x_2957_, 3, v___x_2956_);
v___x_2958_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2959_ = l_Lean_Syntax_node1(v___x_2951_, v___x_2958_, v_a_2942_);
v___x_2960_ = l_Lean_Syntax_node2(v___x_2951_, v___x_2952_, v___x_2957_, v___x_2959_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v___x_2960_);
v___x_2962_ = v___x_2945_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2960_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_a_2943_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
case 31:
{
uint8_t v_presentation_2965_; lean_object* v___x_2966_; lean_object* v_a_2967_; lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2989_; 
v_presentation_2965_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2966_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertZoneName(v_presentation_2965_, v_a_1714_, v_a_1715_);
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
v_a_2968_ = lean_ctor_get(v___x_2966_, 1);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2970_ = v___x_2966_;
v_isShared_2971_ = v_isSharedCheck_2989_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_inc(v_a_2967_);
lean_dec(v___x_2966_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2989_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v_quotContext_2972_; lean_object* v_currMacroScope_2973_; lean_object* v_ref_2974_; uint8_t v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2987_; 
v_quotContext_2972_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2973_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2974_ = lean_ctor_get(v_a_1714_, 5);
v___x_2975_ = 0;
v___x_2976_ = l_Lean_SourceInfo_fromRef(v_ref_2974_, v___x_2975_);
v___x_2977_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_2978_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__286, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__286_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__286);
v___x_2979_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__288));
lean_inc(v_currMacroScope_2973_);
lean_inc(v_quotContext_2972_);
v___x_2980_ = l_Lean_addMacroScope(v_quotContext_2972_, v___x_2979_, v_currMacroScope_2973_);
v___x_2981_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__292));
lean_inc_n(v___x_2976_, 2);
v___x_2982_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2976_);
lean_ctor_set(v___x_2982_, 1, v___x_2978_);
lean_ctor_set(v___x_2982_, 2, v___x_2980_);
lean_ctor_set(v___x_2982_, 3, v___x_2981_);
v___x_2983_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_2984_ = l_Lean_Syntax_node1(v___x_2976_, v___x_2983_, v_a_2967_);
v___x_2985_ = l_Lean_Syntax_node2(v___x_2976_, v___x_2977_, v___x_2982_, v___x_2984_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v___x_2985_);
v___x_2987_ = v___x_2970_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2985_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v_a_2968_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
case 32:
{
uint8_t v_presentation_2990_; lean_object* v___x_2991_; lean_object* v_a_2992_; lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3014_; 
v_presentation_2990_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_2991_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetO(v_presentation_2990_, v_a_1714_, v_a_1715_);
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_a_2993_ = lean_ctor_get(v___x_2991_, 1);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_2995_ = v___x_2991_;
v_isShared_2996_ = v_isSharedCheck_3014_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3014_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v_quotContext_2997_; lean_object* v_currMacroScope_2998_; lean_object* v_ref_2999_; uint8_t v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3012_; 
v_quotContext_2997_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_2998_ = lean_ctor_get(v_a_1714_, 2);
v_ref_2999_ = lean_ctor_get(v_a_1714_, 5);
v___x_3000_ = 0;
v___x_3001_ = l_Lean_SourceInfo_fromRef(v_ref_2999_, v___x_3000_);
v___x_3002_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_3003_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__294, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__294_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__294);
v___x_3004_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__296));
lean_inc(v_currMacroScope_2998_);
lean_inc(v_quotContext_2997_);
v___x_3005_ = l_Lean_addMacroScope(v_quotContext_2997_, v___x_3004_, v_currMacroScope_2998_);
v___x_3006_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__300));
lean_inc_n(v___x_3001_, 2);
v___x_3007_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3001_);
lean_ctor_set(v___x_3007_, 1, v___x_3003_);
lean_ctor_set(v___x_3007_, 2, v___x_3005_);
lean_ctor_set(v___x_3007_, 3, v___x_3006_);
v___x_3008_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3009_ = l_Lean_Syntax_node1(v___x_3001_, v___x_3008_, v_a_2992_);
v___x_3010_ = l_Lean_Syntax_node2(v___x_3001_, v___x_3002_, v___x_3007_, v___x_3009_);
if (v_isShared_2996_ == 0)
{
lean_ctor_set(v___x_2995_, 0, v___x_3010_);
v___x_3012_ = v___x_2995_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_a_2993_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
case 33:
{
uint8_t v_presentation_3015_; lean_object* v___x_3016_; lean_object* v_a_3017_; lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3039_; 
v_presentation_3015_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_3016_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX(v_presentation_3015_, v_a_1714_, v_a_1715_);
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
v_a_3018_ = lean_ctor_get(v___x_3016_, 1);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3020_ = v___x_3016_;
v_isShared_3021_ = v_isSharedCheck_3039_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_inc(v_a_3017_);
lean_dec(v___x_3016_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3039_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v_quotContext_3022_; lean_object* v_currMacroScope_3023_; lean_object* v_ref_3024_; uint8_t v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3037_; 
v_quotContext_3022_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_3023_ = lean_ctor_get(v_a_1714_, 2);
v_ref_3024_ = lean_ctor_get(v_a_1714_, 5);
v___x_3025_ = 0;
v___x_3026_ = l_Lean_SourceInfo_fromRef(v_ref_3024_, v___x_3025_);
v___x_3027_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_3028_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__302, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__302_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__302);
v___x_3029_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__304));
lean_inc(v_currMacroScope_3023_);
lean_inc(v_quotContext_3022_);
v___x_3030_ = l_Lean_addMacroScope(v_quotContext_3022_, v___x_3029_, v_currMacroScope_3023_);
v___x_3031_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__308));
lean_inc_n(v___x_3026_, 2);
v___x_3032_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3026_);
lean_ctor_set(v___x_3032_, 1, v___x_3028_);
lean_ctor_set(v___x_3032_, 2, v___x_3030_);
lean_ctor_set(v___x_3032_, 3, v___x_3031_);
v___x_3033_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3034_ = l_Lean_Syntax_node1(v___x_3026_, v___x_3033_, v_a_3017_);
v___x_3035_ = l_Lean_Syntax_node2(v___x_3026_, v___x_3027_, v___x_3032_, v___x_3034_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 0, v___x_3035_);
v___x_3037_ = v___x_3020_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3035_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v_a_3018_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
case 34:
{
uint8_t v_presentation_3040_; lean_object* v___x_3041_; lean_object* v_a_3042_; lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3064_; 
v_presentation_3040_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_3041_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetX(v_presentation_3040_, v_a_1714_, v_a_1715_);
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
v_a_3043_ = lean_ctor_get(v___x_3041_, 1);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3045_ = v___x_3041_;
v_isShared_3046_ = v_isSharedCheck_3064_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_inc(v_a_3042_);
lean_dec(v___x_3041_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3064_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v_quotContext_3047_; lean_object* v_currMacroScope_3048_; lean_object* v_ref_3049_; uint8_t v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3062_; 
v_quotContext_3047_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_3048_ = lean_ctor_get(v_a_1714_, 2);
v_ref_3049_ = lean_ctor_get(v_a_1714_, 5);
v___x_3050_ = 0;
v___x_3051_ = l_Lean_SourceInfo_fromRef(v_ref_3049_, v___x_3050_);
v___x_3052_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_3053_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__310, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__310_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__310);
v___x_3054_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__312));
lean_inc(v_currMacroScope_3048_);
lean_inc(v_quotContext_3047_);
v___x_3055_ = l_Lean_addMacroScope(v_quotContext_3047_, v___x_3054_, v_currMacroScope_3048_);
v___x_3056_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__316));
lean_inc_n(v___x_3051_, 2);
v___x_3057_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3051_);
lean_ctor_set(v___x_3057_, 1, v___x_3053_);
lean_ctor_set(v___x_3057_, 2, v___x_3055_);
lean_ctor_set(v___x_3057_, 3, v___x_3056_);
v___x_3058_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3059_ = l_Lean_Syntax_node1(v___x_3051_, v___x_3058_, v_a_3042_);
v___x_3060_ = l_Lean_Syntax_node2(v___x_3051_, v___x_3052_, v___x_3057_, v___x_3059_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3060_);
v___x_3062_ = v___x_3045_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v___x_3060_);
lean_ctor_set(v_reuseFailAlloc_3063_, 1, v_a_3043_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
default: 
{
uint8_t v_presentation_3065_; lean_object* v___x_3066_; lean_object* v_a_3067_; lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3089_; 
v_presentation_3065_ = lean_ctor_get_uint8(v_x_1713_, 0);
lean_dec_ref_known(v_x_1713_, 0);
v___x_3066_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertOffsetZ(v_presentation_3065_, v_a_1714_, v_a_1715_);
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
v_a_3068_ = lean_ctor_get(v___x_3066_, 1);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3070_ = v___x_3066_;
v_isShared_3071_ = v_isSharedCheck_3089_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_inc(v_a_3067_);
lean_dec(v___x_3066_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3089_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v_quotContext_3072_; lean_object* v_currMacroScope_3073_; lean_object* v_ref_3074_; uint8_t v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3087_; 
v_quotContext_3072_ = lean_ctor_get(v_a_1714_, 1);
v_currMacroScope_3073_ = lean_ctor_get(v_a_1714_, 2);
v_ref_3074_ = lean_ctor_get(v_a_1714_, 5);
v___x_3075_ = 0;
v___x_3076_ = l_Lean_SourceInfo_fromRef(v_ref_3074_, v___x_3075_);
v___x_3077_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_3078_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__318, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__318_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__318);
v___x_3079_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__320));
lean_inc(v_currMacroScope_3073_);
lean_inc(v_quotContext_3072_);
v___x_3080_ = l_Lean_addMacroScope(v_quotContext_3072_, v___x_3079_, v_currMacroScope_3073_);
v___x_3081_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__324));
lean_inc_n(v___x_3076_, 2);
v___x_3082_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3076_);
lean_ctor_set(v___x_3082_, 1, v___x_3078_);
lean_ctor_set(v___x_3082_, 2, v___x_3080_);
lean_ctor_set(v___x_3082_, 3, v___x_3081_);
v___x_3083_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3084_ = l_Lean_Syntax_node1(v___x_3076_, v___x_3083_, v_a_3067_);
v___x_3085_ = l_Lean_Syntax_node2(v___x_3076_, v___x_3077_, v___x_3082_, v___x_3084_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 0, v___x_3085_);
v___x_3087_ = v___x_3070_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3085_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v_a_3068_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___boxed(lean_object* v_x_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier(v_x_3090_, v_a_3091_, v_a_3092_);
lean_dec_ref(v_a_3091_);
return v_res_3093_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__1(void){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__0));
v___x_3096_ = l_String_toRawSubstring_x27(v___x_3095_);
return v___x_3096_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__4(void){
_start:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3100_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__3));
v___x_3101_ = l_String_toRawSubstring_x27(v___x_3100_);
return v___x_3101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart(lean_object* v_x_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
if (lean_obj_tag(v_x_3104_) == 0)
{
lean_object* v_val_3107_; lean_object* v_quotContext_3108_; lean_object* v_currMacroScope_3109_; lean_object* v_ref_3110_; uint8_t v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_val_3107_ = lean_ctor_get(v_x_3104_, 0);
lean_inc_ref(v_val_3107_);
lean_dec_ref_known(v_x_3104_, 1);
v_quotContext_3108_ = lean_ctor_get(v_a_3105_, 1);
v_currMacroScope_3109_ = lean_ctor_get(v_a_3105_, 2);
v_ref_3110_ = lean_ctor_get(v_a_3105_, 5);
v___x_3111_ = 0;
v___x_3112_ = l_Lean_SourceInfo_fromRef(v_ref_3110_, v___x_3111_);
v___x_3113_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_3114_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_3115_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
lean_inc_n(v___x_3112_, 4);
v___x_3116_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3112_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__1, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__1_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__1);
v___x_3118_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__2));
lean_inc(v_currMacroScope_3109_);
lean_inc(v_quotContext_3108_);
v___x_3119_ = l_Lean_addMacroScope(v_quotContext_3108_, v___x_3118_, v_currMacroScope_3109_);
v___x_3120_ = lean_box(0);
v___x_3121_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3112_);
lean_ctor_set(v___x_3121_, 1, v___x_3117_);
lean_ctor_set(v___x_3121_, 2, v___x_3119_);
lean_ctor_set(v___x_3121_, 3, v___x_3120_);
v___x_3122_ = l_Lean_Syntax_node2(v___x_3112_, v___x_3114_, v___x_3116_, v___x_3121_);
v___x_3123_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3124_ = lean_box(2);
v___x_3125_ = l_Lean_Syntax_mkStrLit(v_val_3107_, v___x_3124_);
v___x_3126_ = l_Lean_Syntax_node1(v___x_3112_, v___x_3123_, v___x_3125_);
v___x_3127_ = l_Lean_Syntax_node2(v___x_3112_, v___x_3113_, v___x_3122_, v___x_3126_);
v___x_3128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v_a_3106_);
return v___x_3128_;
}
else
{
lean_object* v_modifier_3129_; lean_object* v___x_3130_; lean_object* v_a_3131_; lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3157_; 
v_modifier_3129_ = lean_ctor_get(v_x_3104_, 0);
lean_inc_ref(v_modifier_3129_);
lean_dec_ref_known(v_x_3104_, 1);
v___x_3130_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier(v_modifier_3129_, v_a_3105_, v_a_3106_);
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
v_a_3132_ = lean_ctor_get(v___x_3130_, 1);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3134_ = v___x_3130_;
v_isShared_3135_ = v_isSharedCheck_3157_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_inc(v_a_3131_);
lean_dec(v___x_3130_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3157_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v_quotContext_3136_; lean_object* v_currMacroScope_3137_; lean_object* v_ref_3138_; uint8_t v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3155_; 
v_quotContext_3136_ = lean_ctor_get(v_a_3105_, 1);
v_currMacroScope_3137_ = lean_ctor_get(v_a_3105_, 2);
v_ref_3138_ = lean_ctor_get(v_a_3105_, 5);
v___x_3139_ = 0;
v___x_3140_ = l_Lean_SourceInfo_fromRef(v_ref_3138_, v___x_3139_);
v___x_3141_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__4));
v___x_3142_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__68));
v___x_3143_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertModifier___closed__69));
lean_inc_n(v___x_3140_, 4);
v___x_3144_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3140_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__4, &l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__4_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__4);
v___x_3146_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___closed__5));
lean_inc(v_currMacroScope_3137_);
lean_inc(v_quotContext_3136_);
v___x_3147_ = l_Lean_addMacroScope(v_quotContext_3136_, v___x_3146_, v_currMacroScope_3137_);
v___x_3148_ = lean_box(0);
v___x_3149_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3140_);
lean_ctor_set(v___x_3149_, 1, v___x_3145_);
lean_ctor_set(v___x_3149_, 2, v___x_3147_);
lean_ctor_set(v___x_3149_, 3, v___x_3148_);
v___x_3150_ = l_Lean_Syntax_node2(v___x_3140_, v___x_3142_, v___x_3144_, v___x_3149_);
v___x_3151_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3152_ = l_Lean_Syntax_node1(v___x_3140_, v___x_3151_, v_a_3131_);
v___x_3153_ = l_Lean_Syntax_node2(v___x_3140_, v___x_3141_, v___x_3150_, v___x_3152_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v___x_3153_);
v___x_3155_ = v___x_3134_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v___x_3153_);
lean_ctor_set(v_reuseFailAlloc_3156_, 1, v_a_3132_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart___boxed(lean_object* v_x_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart(v_x_3158_, v_a_3159_, v_a_3160_);
lean_dec_ref(v_a_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__1(lean_object* v_x_3224_, lean_object* v_x_3225_){
_start:
{
if (lean_obj_tag(v_x_3225_) == 0)
{
return v_x_3224_;
}
else
{
lean_object* v_head_3226_; lean_object* v_tail_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
v_head_3226_ = lean_ctor_get(v_x_3225_, 0);
lean_inc(v_head_3226_);
v_tail_3227_ = lean_ctor_get(v_x_3225_, 1);
lean_inc(v_tail_3227_);
lean_dec_ref_known(v_x_3225_, 2);
v___x_3228_ = ((lean_object*)(l_Std_Time_termDatespec_x28___x2c___x29___closed__2));
v___x_3229_ = l_Lean_Syntax_TSepArray_push___redArg(v___x_3228_, v_x_3224_, v_head_3226_);
v_x_3224_ = v___x_3229_;
v_x_3225_ = v_tail_3227_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__0(lean_object* v_x_3231_, lean_object* v_x_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
if (lean_obj_tag(v_x_3231_) == 0)
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = l_List_reverse___redArg(v_x_3232_);
v___x_3236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3235_);
lean_ctor_set(v___x_3236_, 1, v___y_3234_);
return v___x_3236_;
}
else
{
lean_object* v_head_3237_; lean_object* v_tail_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3249_; 
v_head_3237_ = lean_ctor_get(v_x_3231_, 0);
v_tail_3238_ = lean_ctor_get(v_x_3231_, 1);
v_isSharedCheck_3249_ = !lean_is_exclusive(v_x_3231_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3240_ = v_x_3231_;
v_isShared_3241_ = v_isSharedCheck_3249_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_tail_3238_);
lean_inc(v_head_3237_);
lean_dec(v_x_3231_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3249_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3242_; lean_object* v_a_3243_; lean_object* v_a_3244_; lean_object* v___x_3246_; 
v___x_3242_ = l___private_Std_Time_Notation_Spec_0__Std_Time_convertFormatPart(v_head_3237_, v___y_3233_, v___y_3234_);
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_a_3243_);
v_a_3244_ = lean_ctor_get(v___x_3242_, 1);
lean_inc(v_a_3244_);
lean_dec_ref(v___x_3242_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 1, v_x_3232_);
lean_ctor_set(v___x_3240_, 0, v_a_3243_);
v___x_3246_ = v___x_3240_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_a_3243_);
lean_ctor_set(v_reuseFailAlloc_3248_, 1, v_x_3232_);
v___x_3246_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
v_x_3231_ = v_tail_3238_;
v_x_3232_ = v___x_3246_;
v___y_3234_ = v_a_3244_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__0___boxed(lean_object* v_x_3250_, lean_object* v_x_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_List_mapM_loop___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__0(v_x_3250_, v_x_3251_, v___y_3252_, v___y_3253_);
lean_dec_ref(v___y_3252_);
return v_res_3254_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__0(void){
_start:
{
lean_object* v___x_3255_; uint8_t v___x_3256_; lean_object* v___x_3257_; 
v___x_3255_ = l_Std_Time_DateFormat_enUS;
v___x_3256_ = 0;
v___x_3257_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3257_, 0, v___x_3255_);
lean_ctor_set_uint8(v___x_3257_, sizeof(void*)*1, v___x_3256_);
return v___x_3257_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9(void){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = l_Array_mkArray0___redArg();
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat(lean_object* v_fmt_3301_, lean_object* v_config_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_){
_start:
{
lean_object* v_input_3305_; uint8_t v___x_3306_; lean_object* v___x_3307_; lean_object* v_format_3308_; 
v_input_3305_ = l_Lean_TSyntax_getString(v_fmt_3301_);
v___x_3306_ = 0;
v___x_3307_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__0, &l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__0_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__0);
v_format_3308_ = l_Std_Time_GenericFormat_spec___redArg(v_input_3305_, v___x_3307_);
if (lean_obj_tag(v_format_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
lean_dec(v_config_3302_);
v_a_3309_ = lean_ctor_get(v_format_3308_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v_format_3308_, 1);
v___x_3310_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__1));
v___x_3311_ = lean_string_append(v___x_3310_, v_a_3309_);
lean_dec(v_a_3309_);
v___x_3312_ = l_Lean_Macro_throwErrorAt___redArg(v_fmt_3301_, v___x_3311_, v_a_3303_, v_a_3304_);
return v___x_3312_;
}
else
{
lean_object* v_a_3313_; lean_object* v_string_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3384_; 
v_a_3313_ = lean_ctor_get(v_format_3308_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v_format_3308_, 1);
v_string_3314_ = lean_ctor_get(v_a_3313_, 1);
v_isSharedCheck_3384_ = !lean_is_exclusive(v_a_3313_);
if (v_isSharedCheck_3384_ == 0)
{
lean_object* v_unused_3385_; 
v_unused_3385_ = lean_ctor_get(v_a_3313_, 0);
lean_dec(v_unused_3385_);
v___x_3316_ = v_a_3313_;
v_isShared_3317_ = v_isSharedCheck_3384_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_string_3314_);
lean_dec(v_a_3313_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3384_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3318_ = lean_box(0);
v___x_3319_ = l_List_mapM_loop___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__0(v_string_3314_, v___x_3318_, v_a_3303_, v_a_3304_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3374_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
v_a_3321_ = lean_ctor_get(v___x_3319_, 1);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3323_ = v___x_3319_;
v_isShared_3324_ = v_isSharedCheck_3374_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_inc(v_a_3320_);
lean_dec(v___x_3319_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3374_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v_ref_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___y_3330_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_ref_3325_ = lean_ctor_get(v_a_3303_, 5);
v___x_3326_ = ((lean_object*)(l_Std_Time_termDatespec_x28___x2c___x29___closed__2));
v___x_3327_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__2));
v___x_3328_ = l_List_foldl___at___00__private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat_spec__1(v___x_3327_, v_a_3320_);
v___x_3355_ = l_Lean_SourceInfo_fromRef(v_ref_3325_, v___x_3306_);
v___x_3356_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__13));
v___x_3357_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__14));
lean_inc_n(v___x_3355_, 7);
v___x_3358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3355_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__15));
v___x_3360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3355_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
lean_inc_ref(v___x_3360_);
lean_inc_ref(v___x_3358_);
v___x_3361_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3356_, v___x_3358_, v___x_3360_);
v___x_3362_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__17));
v___x_3363_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
v___x_3364_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9, &l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9);
v___x_3365_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3355_);
lean_ctor_set(v___x_3365_, 1, v___x_3363_);
lean_ctor_set(v___x_3365_, 2, v___x_3364_);
v___x_3366_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__19));
lean_inc_ref_n(v___x_3365_, 3);
v___x_3367_ = l_Lean_Syntax_node1(v___x_3355_, v___x_3366_, v___x_3365_);
v___x_3368_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__21));
v___x_3369_ = l_Lean_Syntax_node1(v___x_3355_, v___x_3368_, v___x_3365_);
v___x_3370_ = l_Lean_Syntax_node6(v___x_3355_, v___x_3362_, v___x_3358_, v___x_3365_, v___x_3367_, v___x_3369_, v___x_3365_, v___x_3360_);
if (lean_obj_tag(v_config_3302_) == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__23));
v___x_3372_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3371_, v___x_3361_, v___x_3370_);
v___y_3330_ = v___x_3372_;
goto v___jp_3329_;
}
else
{
lean_object* v_val_3373_; 
lean_dec(v___x_3370_);
lean_dec(v___x_3361_);
lean_dec(v___x_3355_);
v_val_3373_ = lean_ctor_get(v_config_3302_, 0);
lean_inc(v_val_3373_);
lean_dec_ref_known(v_config_3302_, 1);
v___y_3330_ = v_val_3373_;
goto v___jp_3329_;
}
v___jp_3329_:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3335_; 
v___x_3331_ = l_Lean_SourceInfo_fromRef(v_ref_3325_, v___x_3306_);
v___x_3332_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__4));
v___x_3333_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__5));
lean_inc(v___x_3331_);
if (v_isShared_3317_ == 0)
{
lean_ctor_set_tag(v___x_3316_, 2);
lean_ctor_set(v___x_3316_, 1, v___x_3333_);
lean_ctor_set(v___x_3316_, 0, v___x_3331_);
v___x_3335_ = v___x_3316_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3331_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v___x_3333_);
v___x_3335_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3352_; 
v___x_3336_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_convertNumber___closed__15));
lean_inc_n(v___x_3331_, 7);
v___x_3337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3331_);
lean_ctor_set(v___x_3337_, 1, v___x_3326_);
v___x_3338_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__7));
v___x_3339_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__8));
v___x_3340_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3331_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
v___x_3341_ = lean_obj_once(&l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9, &l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9_once, _init_l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__9);
v___x_3342_ = l_Array_append___redArg(v___x_3341_, v___x_3328_);
lean_dec_ref(v___x_3328_);
v___x_3343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3331_);
lean_ctor_set(v___x_3343_, 1, v___x_3336_);
lean_ctor_set(v___x_3343_, 2, v___x_3342_);
v___x_3344_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__10));
v___x_3345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3331_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
v___x_3346_ = l_Lean_Syntax_node3(v___x_3331_, v___x_3338_, v___x_3340_, v___x_3343_, v___x_3345_);
v___x_3347_ = l_Lean_Syntax_node3(v___x_3331_, v___x_3336_, v___y_3330_, v___x_3337_, v___x_3346_);
v___x_3348_ = ((lean_object*)(l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___closed__11));
v___x_3349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3331_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = l_Lean_Syntax_node3(v___x_3331_, v___x_3332_, v___x_3335_, v___x_3347_, v___x_3349_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set(v___x_3323_, 0, v___x_3350_);
v___x_3352_ = v___x_3323_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3350_);
lean_ctor_set(v_reuseFailAlloc_3353_, 1, v_a_3321_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
}
else
{
lean_object* v_a_3375_; lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_del_object(v___x_3316_);
lean_dec(v_config_3302_);
v_a_3375_ = lean_ctor_get(v___x_3319_, 0);
v_a_3376_ = lean_ctor_get(v___x_3319_, 1);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3319_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_inc(v_a_3375_);
lean_dec(v___x_3319_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3375_);
lean_ctor_set(v_reuseFailAlloc_3382_, 1, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat___boxed(lean_object* v_fmt_3386_, lean_object* v_config_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat(v_fmt_3386_, v_config_3387_, v_a_3388_, v_a_3389_);
lean_dec_ref(v_a_3388_);
lean_dec(v_fmt_3386_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x29__1(lean_object* v_x_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_){
_start:
{
lean_object* v___x_3394_; uint8_t v___x_3395_; 
v___x_3394_ = ((lean_object*)(l_Std_Time_termDatespec_x28___x29___closed__1));
lean_inc(v_x_3391_);
v___x_3395_ = l_Lean_Syntax_isOfKind(v_x_3391_, v___x_3394_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; lean_object* v___x_3397_; 
lean_dec(v_x_3391_);
v___x_3396_ = lean_box(1);
v___x_3397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3396_);
lean_ctor_set(v___x_3397_, 1, v_a_3393_);
return v___x_3397_;
}
else
{
lean_object* v___x_3398_; lean_object* v_fmt_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3398_ = lean_unsigned_to_nat(1u);
v_fmt_3399_ = l_Lean_Syntax_getArg(v_x_3391_, v___x_3398_);
lean_dec(v_x_3391_);
v___x_3400_ = ((lean_object*)(l_Std_Time_termDatespec_x28___x29___closed__7));
lean_inc(v_fmt_3399_);
v___x_3401_ = l_Lean_Syntax_isOfKind(v_fmt_3399_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
lean_dec(v_fmt_3399_);
v___x_3402_ = lean_box(1);
v___x_3403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3402_);
lean_ctor_set(v___x_3403_, 1, v_a_3393_);
return v___x_3403_;
}
else
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = lean_box(0);
v___x_3405_ = l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat(v_fmt_3399_, v___x_3404_, v_a_3392_, v_a_3393_);
lean_dec(v_fmt_3399_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3414_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
v_a_3407_ = lean_ctor_get(v___x_3405_, 1);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3409_ = v___x_3405_;
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_inc(v_a_3406_);
lean_dec(v___x_3405_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3412_; 
if (v_isShared_3410_ == 0)
{
v___x_3412_ = v___x_3409_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_a_3406_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v_a_3407_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3423_; 
v_a_3415_ = lean_ctor_get(v___x_3405_, 0);
v_a_3416_ = lean_ctor_get(v___x_3405_, 1);
v_isSharedCheck_3423_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3418_ = v___x_3405_;
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_inc(v_a_3415_);
lean_dec(v___x_3405_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_a_3415_);
lean_ctor_set(v_reuseFailAlloc_3422_, 1, v_a_3416_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x29__1___boxed(lean_object* v_x_3424_, lean_object* v_a_3425_, lean_object* v_a_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x29__1(v_x_3424_, v_a_3425_, v_a_3426_);
lean_dec_ref(v_a_3425_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x2c___x29__1(lean_object* v_x_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_){
_start:
{
lean_object* v___x_3431_; uint8_t v___x_3432_; 
v___x_3431_ = ((lean_object*)(l_Std_Time_termDatespec_x28___x2c___x29___closed__1));
lean_inc(v_x_3428_);
v___x_3432_ = l_Lean_Syntax_isOfKind(v_x_3428_, v___x_3431_);
if (v___x_3432_ == 0)
{
lean_object* v___x_3433_; lean_object* v___x_3434_; 
lean_dec(v_x_3428_);
v___x_3433_ = lean_box(1);
v___x_3434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3433_);
lean_ctor_set(v___x_3434_, 1, v_a_3430_);
return v___x_3434_;
}
else
{
lean_object* v___x_3435_; lean_object* v_fmt_3436_; lean_object* v___x_3437_; uint8_t v___x_3438_; 
v___x_3435_ = lean_unsigned_to_nat(1u);
v_fmt_3436_ = l_Lean_Syntax_getArg(v_x_3428_, v___x_3435_);
v___x_3437_ = ((lean_object*)(l_Std_Time_termDatespec_x28___x29___closed__7));
lean_inc(v_fmt_3436_);
v___x_3438_ = l_Lean_Syntax_isOfKind(v_fmt_3436_, v___x_3437_);
if (v___x_3438_ == 0)
{
lean_object* v___x_3439_; lean_object* v___x_3440_; 
lean_dec(v_fmt_3436_);
lean_dec(v_x_3428_);
v___x_3439_ = lean_box(1);
v___x_3440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
lean_ctor_set(v___x_3440_, 1, v_a_3430_);
return v___x_3440_;
}
else
{
lean_object* v___x_3441_; lean_object* v_config_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3441_ = lean_unsigned_to_nat(3u);
v_config_3442_ = l_Lean_Syntax_getArg(v_x_3428_, v___x_3441_);
lean_dec(v_x_3428_);
v___x_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3443_, 0, v_config_3442_);
v___x_3444_ = l___private_Std_Time_Notation_Spec_0__Std_Time_formatStringToFormat(v_fmt_3436_, v___x_3443_, v_a_3429_, v_a_3430_);
lean_dec(v_fmt_3436_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; lean_object* v_a_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3453_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
v_a_3446_ = lean_ctor_get(v___x_3444_, 1);
v_isSharedCheck_3453_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3448_ = v___x_3444_;
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_a_3446_);
lean_inc(v_a_3445_);
lean_dec(v___x_3444_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3451_; 
if (v_isShared_3449_ == 0)
{
v___x_3451_ = v___x_3448_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_a_3445_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_a_3446_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
else
{
lean_object* v_a_3454_; lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
v_a_3454_ = lean_ctor_get(v___x_3444_, 0);
v_a_3455_ = lean_ctor_get(v___x_3444_, 1);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3444_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_inc(v_a_3454_);
lean_dec(v___x_3444_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3454_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x2c___x29__1___boxed(lean_object* v_x_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Std_Time___aux__Std__Time__Notation__Spec______macroRules__Std__Time__termDatespec_x28___x2c___x29__1(v_x_3463_, v_a_3464_, v_a_3465_);
lean_dec_ref(v_a_3464_);
return v_res_3466_;
}
}
lean_object* runtime_initialize_Std_Time_Format_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Notation_Spec(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Std_Time_Format_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Notation_Spec(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Format_Basic(uint8_t builtin);
lean_object* initialize_Std_Time_Format_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Notation_Spec(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Notation_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Notation_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Notation_Spec(builtin);
}
#ifdef __cplusplus
}
#endif

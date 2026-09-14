// Lean compiler output
// Module: Init.Data.Slice.Notation
// Imports: public import Init.Data.Range.Polymorphic.PRange
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term__[_]"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__0 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__0_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 146, 84, 128, 183, 70, 246)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__1 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__1_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term*...*"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__3 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__3_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__4_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 9, 100, 11, 112, 109, 114, 219)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__4 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__4_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_...*"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__5 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__5_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__6_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(89, 184, 85, 23, 243, 11, 13, 179)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__6 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__6_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_<...*"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__7 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__7_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__8_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(171, 27, 224, 193, 208, 224, 37, 254)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__8 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__8_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term*...<_"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__9 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__9_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__10_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(76, 95, 249, 207, 5, 93, 41, 245)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__10 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__10_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_...<_"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__11 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__11_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__12_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(136, 56, 180, 150, 42, 67, 215, 61)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__12 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__12_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term_<...<_"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__13 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__13_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__14_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(137, 24, 184, 113, 209, 224, 82, 248)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__14 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__14_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term*..._"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__15 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__15_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__16_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(172, 214, 10, 96, 112, 57, 139, 148)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__16 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__16_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_..._"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__17 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__17_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__18_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(16, 215, 136, 196, 225, 228, 219, 74)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__18 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__18_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_<..._"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__19 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__19_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__20_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(138, 200, 25, 103, 90, 101, 53, 48)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__20 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__20_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term*...=_"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__21 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__21_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__22_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(128, 142, 110, 52, 44, 186, 117, 12)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__22 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__22_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_...=_"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__23 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__23_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__24_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(20, 81, 4, 194, 158, 170, 93, 115)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__24 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__24_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term_<...=_"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__25 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__25_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__26_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 254, 139, 229, 96, 28, 211)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__26 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__26_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__27 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__27_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__28 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__28_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__29 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__29_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__30 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__30_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Roc.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__32 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__32_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__33;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Roc"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__34 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__34_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Sliceable"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(179, 253, 213, 29, 242, 199, 8, 132)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(155, 90, 225, 74, 125, 117, 19, 59)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(68, 208, 119, 155, 118, 235, 195, 192)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(28, 166, 87, 113, 118, 177, 150, 230)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(192, 187, 48, 102, 153, 240, 15, 6)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(155, 218, 79, 213, 74, 162, 252, 226)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__39 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__39_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__40 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__40_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__41 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__41_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__43 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__43_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__45 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__45_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__48 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__48_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__50 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__50_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__53 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__53_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__53_value)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__54 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__54_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PRange"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__55 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__55_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__56_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(74, 11, 109, 218, 234, 5, 175, 136)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__56 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__56_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__56_value)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__57 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__57_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__58 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__58_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__57_value),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__58_value)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__59 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__59_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__54_value),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__59_value)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<...="};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__61 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__61_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Rcc.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__63 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__63_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__64;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rcc"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__65 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__65_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(175, 69, 185, 129, 244, 236, 185, 225)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(239, 24, 232, 248, 93, 217, 11, 44)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(64, 89, 41, 52, 46, 111, 152, 23)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(24, 238, 58, 56, 209, 114, 29, 228)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(20, 122, 55, 147, 9, 98, 77, 162)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(215, 93, 105, 42, 190, 79, 24, 255)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__67_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__68 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__68_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__68_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__69 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__69_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "...="};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__70 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__70_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Ric.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__71 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__71_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__72;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ric"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__73 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__73_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__73_value),LEAN_SCALAR_PTR_LITERAL(118, 93, 82, 58, 11, 2, 27, 222)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(242, 79, 126, 14, 106, 134, 62, 153)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(33, 202, 183, 234, 177, 28, 141, 43)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__73_value),LEAN_SCALAR_PTR_LITERAL(185, 67, 230, 246, 155, 76, 10, 120)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(201, 212, 210, 37, 99, 28, 100, 213)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(94, 25, 102, 79, 225, 29, 165, 8)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__75_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__76 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__76_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__76_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__77 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__77_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "*...="};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__78 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__78_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Roo.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__79 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__79_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Roo"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__81 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__81_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__81_value),LEAN_SCALAR_PTR_LITERAL(33, 37, 125, 112, 69, 74, 250, 21)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(65, 163, 46, 111, 42, 204, 197, 250)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(134, 179, 210, 63, 158, 235, 4, 114)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__81_value),LEAN_SCALAR_PTR_LITERAL(142, 134, 1, 143, 80, 181, 102, 249)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(186, 253, 158, 10, 179, 154, 236, 24)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(57, 126, 121, 147, 234, 246, 113, 192)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__83_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__84 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__84_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__84_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__85 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__85_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<...<"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__86 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__86_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Rco.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__87 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__87_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rco"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__89 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__89_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__89_value),LEAN_SCALAR_PTR_LITERAL(149, 196, 187, 21, 78, 72, 98, 231)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(125, 177, 153, 210, 209, 171, 28, 97)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(58, 173, 19, 213, 171, 128, 134, 21)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__89_value),LEAN_SCALAR_PTR_LITERAL(82, 23, 146, 9, 98, 233, 127, 0)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(166, 129, 39, 31, 135, 73, 157, 103)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(61, 55, 89, 3, 2, 210, 14, 14)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__91_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__92 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__92_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__92_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__93 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__93_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "...<"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__94 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__94_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Rio.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__95 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__95_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rio"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__97 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__97_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__97_value),LEAN_SCALAR_PTR_LITERAL(238, 197, 64, 120, 99, 67, 210, 243)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(26, 74, 14, 141, 222, 177, 211, 225)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(89, 212, 12, 179, 189, 133, 161, 93)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__97_value),LEAN_SCALAR_PTR_LITERAL(129, 16, 150, 7, 181, 46, 199, 145)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(33, 13, 233, 69, 169, 10, 66, 198)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(166, 21, 144, 79, 255, 255, 52, 191)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__99_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__100 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__100_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__100_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__101 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__101_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "*...<"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__102 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__102_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Roi.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__103 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__103_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__104;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Roi"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__105 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__105_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__105_value),LEAN_SCALAR_PTR_LITERAL(200, 149, 179, 188, 144, 198, 181, 247)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(164, 218, 49, 228, 56, 94, 208, 10)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(103, 231, 147, 28, 34, 62, 61, 183)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__105_value),LEAN_SCALAR_PTR_LITERAL(95, 65, 216, 85, 31, 94, 16, 225)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(63, 94, 21, 4, 62, 95, 131, 63)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(208, 109, 61, 155, 88, 40, 244, 175)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__107_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__108 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__108_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__108_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__109 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__109_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<...*"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__110 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__110_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Rci.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__111 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__111_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__112_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__112;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rci"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__113 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__113_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__113_value),LEAN_SCALAR_PTR_LITERAL(188, 174, 152, 104, 54, 96, 0, 97)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(224, 123, 167, 21, 7, 221, 138, 199)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(251, 103, 148, 165, 232, 218, 146, 91)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__113_value),LEAN_SCALAR_PTR_LITERAL(83, 90, 19, 212, 182, 193, 89, 16)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(59, 154, 162, 63, 138, 169, 254, 121)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(36, 168, 149, 233, 19, 97, 77, 136)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__115_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__116 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__116_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__116_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__117 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__117_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "...*"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__118 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__118_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Rii.Sliceable.mkSlice"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__119 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__119_value;
static lean_once_cell_t l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__120;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rii"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__121 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__121_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__121_value),LEAN_SCALAR_PTR_LITERAL(99, 86, 88, 80, 224, 91, 82, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(43, 98, 24, 30, 58, 223, 40, 193)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(212, 38, 39, 225, 121, 75, 62, 129)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__121_value),LEAN_SCALAR_PTR_LITERAL(204, 10, 192, 182, 218, 42, 98, 220)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(80, 73, 45, 73, 24, 53, 108, 7)}};
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(107, 196, 47, 111, 172, 112, 27, 214)}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__123_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__124 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__124_value;
static const lean_ctor_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__124_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__125 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__125_value;
static const lean_string_object l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "*...*"};
static const lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__126 = (const lean_object*)&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__126_value;
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__33(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__32));
v___x_64_ = l_String_toRawSubstring_x27(v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__50));
v___x_104_ = l_String_toRawSubstring_x27(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_box(0);
v___x_106_ = l_unsafeCast___redArg(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__64(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__63));
v___x_130_ = l_String_toRawSubstring_x27(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__72(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__71));
v___x_150_ = l_String_toRawSubstring_x27(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__79));
v___x_170_ = l_String_toRawSubstring_x27(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__87));
v___x_190_ = l_String_toRawSubstring_x27(v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__95));
v___x_210_ = l_String_toRawSubstring_x27(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__104(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__103));
v___x_230_ = l_String_toRawSubstring_x27(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__112(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__111));
v___x_250_ = l_String_toRawSubstring_x27(v___x_249_);
return v___x_250_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__120(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__119));
v___x_270_ = l_String_toRawSubstring_x27(v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1(lean_object* v_x_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__1));
lean_inc(v_x_288_);
v___x_292_ = l_Lean_Syntax_isOfKind(v_x_288_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec(v_x_288_);
v___x_293_ = lean_box(1);
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v_a_290_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = l_Lean_Syntax_getArg(v_x_288_, v___x_295_);
v___x_297_ = lean_unsigned_to_nat(2u);
v___x_298_ = l_Lean_Syntax_getArg(v_x_288_, v___x_297_);
lean_dec(v_x_288_);
v___x_299_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__4));
lean_inc(v___x_298_);
v___x_300_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__6));
lean_inc(v___x_298_);
v___x_302_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__8));
lean_inc(v___x_298_);
v___x_304_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_305_ = lean_unsigned_to_nat(1u);
v___x_306_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__10));
lean_inc(v___x_298_);
v___x_307_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_308_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__12));
lean_inc(v___x_298_);
v___x_309_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_308_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__14));
lean_inc(v___x_298_);
v___x_311_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__16));
lean_inc(v___x_298_);
v___x_313_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__18));
lean_inc(v___x_298_);
v___x_315_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__20));
lean_inc(v___x_298_);
v___x_317_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__22));
lean_inc(v___x_298_);
v___x_319_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__24));
lean_inc(v___x_298_);
v___x_321_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__26));
lean_inc(v___x_298_);
v___x_323_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec(v___x_298_);
lean_dec(v___x_296_);
v___x_324_ = lean_box(1);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v_a_290_);
return v___x_325_;
}
else
{
lean_object* v_quotContext_326_; lean_object* v_currMacroScope_327_; lean_object* v_ref_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_quotContext_326_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_327_ = lean_ctor_get(v_a_289_, 2);
v_ref_328_ = lean_ctor_get(v_a_289_, 5);
v___x_329_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
v___x_330_ = l_Lean_Syntax_getArg(v___x_298_, v___x_297_);
lean_dec(v___x_298_);
v___x_331_ = l_Lean_SourceInfo_fromRef(v_ref_328_, v___x_321_);
v___x_332_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_333_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__33, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__33_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__33);
v___x_334_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__37));
lean_inc_n(v_currMacroScope_327_, 2);
lean_inc_n(v_quotContext_326_, 2);
v___x_335_ = l_Lean_addMacroScope(v_quotContext_326_, v___x_334_, v_currMacroScope_327_);
v___x_336_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__40));
lean_inc_n(v___x_331_, 10);
v___x_337_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_337_, 0, v___x_331_);
lean_ctor_set(v___x_337_, 1, v___x_333_);
lean_ctor_set(v___x_337_, 2, v___x_335_);
lean_ctor_set(v___x_337_, 3, v___x_336_);
v___x_338_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_339_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_340_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_341_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_342_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_331_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v___x_343_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_344_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_345_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_346_ = l_Lean_addMacroScope(v_quotContext_326_, v___x_345_, v_currMacroScope_327_);
v___x_347_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_348_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_348_, 0, v___x_331_);
lean_ctor_set(v___x_348_, 1, v___x_344_);
lean_ctor_set(v___x_348_, 2, v___x_346_);
lean_ctor_set(v___x_348_, 3, v___x_347_);
v___x_349_ = l_Lean_Syntax_node1(v___x_331_, v___x_343_, v___x_348_);
v___x_350_ = l_Lean_Syntax_node2(v___x_331_, v___x_340_, v___x_342_, v___x_349_);
v___x_351_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__61));
v___x_352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_331_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = l_Lean_Syntax_node3(v___x_331_, v___x_322_, v___x_329_, v___x_352_, v___x_330_);
v___x_354_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_355_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_331_);
lean_ctor_set(v___x_355_, 1, v___x_354_);
v___x_356_ = l_Lean_Syntax_node3(v___x_331_, v___x_339_, v___x_350_, v___x_353_, v___x_355_);
v___x_357_ = l_Lean_Syntax_node2(v___x_331_, v___x_338_, v___x_296_, v___x_356_);
v___x_358_ = l_Lean_Syntax_node2(v___x_331_, v___x_332_, v___x_337_, v___x_357_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v_a_290_);
return v___x_359_;
}
}
else
{
lean_object* v_quotContext_360_; lean_object* v_currMacroScope_361_; lean_object* v_ref_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_quotContext_360_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_361_ = lean_ctor_get(v_a_289_, 2);
v_ref_362_ = lean_ctor_get(v_a_289_, 5);
v___x_363_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
v___x_364_ = l_Lean_Syntax_getArg(v___x_298_, v___x_297_);
lean_dec(v___x_298_);
v___x_365_ = l_Lean_SourceInfo_fromRef(v_ref_362_, v___x_319_);
v___x_366_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_367_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__64, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__64_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__64);
v___x_368_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__66));
lean_inc_n(v_currMacroScope_361_, 2);
lean_inc_n(v_quotContext_360_, 2);
v___x_369_ = l_Lean_addMacroScope(v_quotContext_360_, v___x_368_, v_currMacroScope_361_);
v___x_370_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__69));
lean_inc_n(v___x_365_, 10);
v___x_371_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_371_, 0, v___x_365_);
lean_ctor_set(v___x_371_, 1, v___x_367_);
lean_ctor_set(v___x_371_, 2, v___x_369_);
lean_ctor_set(v___x_371_, 3, v___x_370_);
v___x_372_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_373_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_374_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_375_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_365_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_378_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_379_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_380_ = l_Lean_addMacroScope(v_quotContext_360_, v___x_379_, v_currMacroScope_361_);
v___x_381_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_382_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_382_, 0, v___x_365_);
lean_ctor_set(v___x_382_, 1, v___x_378_);
lean_ctor_set(v___x_382_, 2, v___x_380_);
lean_ctor_set(v___x_382_, 3, v___x_381_);
v___x_383_ = l_Lean_Syntax_node1(v___x_365_, v___x_377_, v___x_382_);
v___x_384_ = l_Lean_Syntax_node2(v___x_365_, v___x_374_, v___x_376_, v___x_383_);
v___x_385_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__70));
v___x_386_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_365_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = l_Lean_Syntax_node3(v___x_365_, v___x_320_, v___x_363_, v___x_386_, v___x_364_);
v___x_388_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_389_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_365_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = l_Lean_Syntax_node3(v___x_365_, v___x_373_, v___x_384_, v___x_387_, v___x_389_);
v___x_391_ = l_Lean_Syntax_node2(v___x_365_, v___x_372_, v___x_296_, v___x_390_);
v___x_392_ = l_Lean_Syntax_node2(v___x_365_, v___x_366_, v___x_371_, v___x_391_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v_a_290_);
return v___x_393_;
}
}
else
{
lean_object* v_quotContext_394_; lean_object* v_currMacroScope_395_; lean_object* v_ref_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_quotContext_394_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_395_ = lean_ctor_get(v_a_289_, 2);
v_ref_396_ = lean_ctor_get(v_a_289_, 5);
v___x_397_ = l_Lean_Syntax_getArg(v___x_298_, v___x_305_);
lean_dec(v___x_298_);
v___x_398_ = l_Lean_SourceInfo_fromRef(v_ref_396_, v___x_317_);
v___x_399_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_400_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__72, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__72_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__72);
v___x_401_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__74));
lean_inc_n(v_currMacroScope_395_, 2);
lean_inc_n(v_quotContext_394_, 2);
v___x_402_ = l_Lean_addMacroScope(v_quotContext_394_, v___x_401_, v_currMacroScope_395_);
v___x_403_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__77));
lean_inc_n(v___x_398_, 10);
v___x_404_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_404_, 0, v___x_398_);
lean_ctor_set(v___x_404_, 1, v___x_400_);
lean_ctor_set(v___x_404_, 2, v___x_402_);
lean_ctor_set(v___x_404_, 3, v___x_403_);
v___x_405_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_406_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_407_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_408_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_409_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_398_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_411_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_412_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_413_ = l_Lean_addMacroScope(v_quotContext_394_, v___x_412_, v_currMacroScope_395_);
v___x_414_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_415_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_415_, 0, v___x_398_);
lean_ctor_set(v___x_415_, 1, v___x_411_);
lean_ctor_set(v___x_415_, 2, v___x_413_);
lean_ctor_set(v___x_415_, 3, v___x_414_);
v___x_416_ = l_Lean_Syntax_node1(v___x_398_, v___x_410_, v___x_415_);
v___x_417_ = l_Lean_Syntax_node2(v___x_398_, v___x_407_, v___x_409_, v___x_416_);
v___x_418_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__78));
v___x_419_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_398_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = l_Lean_Syntax_node2(v___x_398_, v___x_318_, v___x_419_, v___x_397_);
v___x_421_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_422_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_398_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
v___x_423_ = l_Lean_Syntax_node3(v___x_398_, v___x_406_, v___x_417_, v___x_420_, v___x_422_);
v___x_424_ = l_Lean_Syntax_node2(v___x_398_, v___x_405_, v___x_296_, v___x_423_);
v___x_425_ = l_Lean_Syntax_node2(v___x_398_, v___x_399_, v___x_404_, v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v_a_290_);
return v___x_426_;
}
}
else
{
lean_object* v_quotContext_427_; lean_object* v_currMacroScope_428_; lean_object* v_ref_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_quotContext_427_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_428_ = lean_ctor_get(v_a_289_, 2);
v_ref_429_ = lean_ctor_get(v_a_289_, 5);
v___x_430_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
v___x_431_ = l_Lean_Syntax_getArg(v___x_298_, v___x_297_);
lean_dec(v___x_298_);
v___x_432_ = l_Lean_SourceInfo_fromRef(v_ref_429_, v___x_315_);
v___x_433_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_434_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80);
v___x_435_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82));
lean_inc_n(v_currMacroScope_428_, 2);
lean_inc_n(v_quotContext_427_, 2);
v___x_436_ = l_Lean_addMacroScope(v_quotContext_427_, v___x_435_, v_currMacroScope_428_);
v___x_437_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__85));
lean_inc_n(v___x_432_, 10);
v___x_438_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_438_, 0, v___x_432_);
lean_ctor_set(v___x_438_, 1, v___x_434_);
lean_ctor_set(v___x_438_, 2, v___x_436_);
lean_ctor_set(v___x_438_, 3, v___x_437_);
v___x_439_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_440_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_441_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_442_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_443_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_432_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_445_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_446_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_447_ = l_Lean_addMacroScope(v_quotContext_427_, v___x_446_, v_currMacroScope_428_);
v___x_448_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_449_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_449_, 0, v___x_432_);
lean_ctor_set(v___x_449_, 1, v___x_445_);
lean_ctor_set(v___x_449_, 2, v___x_447_);
lean_ctor_set(v___x_449_, 3, v___x_448_);
v___x_450_ = l_Lean_Syntax_node1(v___x_432_, v___x_444_, v___x_449_);
v___x_451_ = l_Lean_Syntax_node2(v___x_432_, v___x_441_, v___x_443_, v___x_450_);
v___x_452_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__86));
v___x_453_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_432_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = l_Lean_Syntax_node3(v___x_432_, v___x_310_, v___x_430_, v___x_453_, v___x_431_);
v___x_455_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_456_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_432_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = l_Lean_Syntax_node3(v___x_432_, v___x_440_, v___x_451_, v___x_454_, v___x_456_);
v___x_458_ = l_Lean_Syntax_node2(v___x_432_, v___x_439_, v___x_296_, v___x_457_);
v___x_459_ = l_Lean_Syntax_node2(v___x_432_, v___x_433_, v___x_438_, v___x_458_);
v___x_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v_a_290_);
return v___x_460_;
}
}
else
{
lean_object* v_quotContext_461_; lean_object* v_currMacroScope_462_; lean_object* v_ref_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_quotContext_461_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_462_ = lean_ctor_get(v_a_289_, 2);
v_ref_463_ = lean_ctor_get(v_a_289_, 5);
v___x_464_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
v___x_465_ = l_Lean_Syntax_getArg(v___x_298_, v___x_297_);
lean_dec(v___x_298_);
v___x_466_ = l_Lean_SourceInfo_fromRef(v_ref_463_, v___x_313_);
v___x_467_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_468_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88);
v___x_469_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90));
lean_inc_n(v_currMacroScope_462_, 2);
lean_inc_n(v_quotContext_461_, 2);
v___x_470_ = l_Lean_addMacroScope(v_quotContext_461_, v___x_469_, v_currMacroScope_462_);
v___x_471_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__93));
lean_inc_n(v___x_466_, 10);
v___x_472_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_472_, 0, v___x_466_);
lean_ctor_set(v___x_472_, 1, v___x_468_);
lean_ctor_set(v___x_472_, 2, v___x_470_);
lean_ctor_set(v___x_472_, 3, v___x_471_);
v___x_473_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_474_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_475_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_476_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_477_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_466_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_479_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_480_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_481_ = l_Lean_addMacroScope(v_quotContext_461_, v___x_480_, v_currMacroScope_462_);
v___x_482_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_483_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_483_, 0, v___x_466_);
lean_ctor_set(v___x_483_, 1, v___x_479_);
lean_ctor_set(v___x_483_, 2, v___x_481_);
lean_ctor_set(v___x_483_, 3, v___x_482_);
v___x_484_ = l_Lean_Syntax_node1(v___x_466_, v___x_478_, v___x_483_);
v___x_485_ = l_Lean_Syntax_node2(v___x_466_, v___x_475_, v___x_477_, v___x_484_);
v___x_486_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__94));
v___x_487_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_466_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = l_Lean_Syntax_node3(v___x_466_, v___x_308_, v___x_464_, v___x_487_, v___x_465_);
v___x_489_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_466_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = l_Lean_Syntax_node3(v___x_466_, v___x_474_, v___x_485_, v___x_488_, v___x_490_);
v___x_492_ = l_Lean_Syntax_node2(v___x_466_, v___x_473_, v___x_296_, v___x_491_);
v___x_493_ = l_Lean_Syntax_node2(v___x_466_, v___x_467_, v___x_472_, v___x_492_);
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
lean_ctor_set(v___x_494_, 1, v_a_290_);
return v___x_494_;
}
}
else
{
lean_object* v_quotContext_495_; lean_object* v_currMacroScope_496_; lean_object* v_ref_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_quotContext_495_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_496_ = lean_ctor_get(v_a_289_, 2);
v_ref_497_ = lean_ctor_get(v_a_289_, 5);
v___x_498_ = l_Lean_Syntax_getArg(v___x_298_, v___x_305_);
lean_dec(v___x_298_);
v___x_499_ = l_Lean_SourceInfo_fromRef(v_ref_497_, v___x_311_);
v___x_500_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_501_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96);
v___x_502_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98));
lean_inc_n(v_currMacroScope_496_, 2);
lean_inc_n(v_quotContext_495_, 2);
v___x_503_ = l_Lean_addMacroScope(v_quotContext_495_, v___x_502_, v_currMacroScope_496_);
v___x_504_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__101));
lean_inc_n(v___x_499_, 10);
v___x_505_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_505_, 0, v___x_499_);
lean_ctor_set(v___x_505_, 1, v___x_501_);
lean_ctor_set(v___x_505_, 2, v___x_503_);
lean_ctor_set(v___x_505_, 3, v___x_504_);
v___x_506_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_507_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_508_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_509_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_510_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_499_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v___x_511_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_512_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_513_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_514_ = l_Lean_addMacroScope(v_quotContext_495_, v___x_513_, v_currMacroScope_496_);
v___x_515_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_516_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_516_, 0, v___x_499_);
lean_ctor_set(v___x_516_, 1, v___x_512_);
lean_ctor_set(v___x_516_, 2, v___x_514_);
lean_ctor_set(v___x_516_, 3, v___x_515_);
v___x_517_ = l_Lean_Syntax_node1(v___x_499_, v___x_511_, v___x_516_);
v___x_518_ = l_Lean_Syntax_node2(v___x_499_, v___x_508_, v___x_510_, v___x_517_);
v___x_519_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__102));
v___x_520_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_499_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = l_Lean_Syntax_node2(v___x_499_, v___x_306_, v___x_520_, v___x_498_);
v___x_522_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_523_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_499_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = l_Lean_Syntax_node3(v___x_499_, v___x_507_, v___x_518_, v___x_521_, v___x_523_);
v___x_525_ = l_Lean_Syntax_node2(v___x_499_, v___x_506_, v___x_296_, v___x_524_);
v___x_526_ = l_Lean_Syntax_node2(v___x_499_, v___x_500_, v___x_505_, v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
lean_ctor_set(v___x_527_, 1, v_a_290_);
return v___x_527_;
}
}
else
{
lean_object* v_quotContext_528_; lean_object* v_currMacroScope_529_; lean_object* v_ref_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_quotContext_528_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_529_ = lean_ctor_get(v_a_289_, 2);
v_ref_530_ = lean_ctor_get(v_a_289_, 5);
v___x_531_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
v___x_532_ = l_Lean_Syntax_getArg(v___x_298_, v___x_297_);
lean_dec(v___x_298_);
v___x_533_ = l_Lean_SourceInfo_fromRef(v_ref_530_, v___x_309_);
v___x_534_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_535_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__80);
v___x_536_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__82));
lean_inc_n(v_currMacroScope_529_, 2);
lean_inc_n(v_quotContext_528_, 2);
v___x_537_ = l_Lean_addMacroScope(v_quotContext_528_, v___x_536_, v_currMacroScope_529_);
v___x_538_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__85));
lean_inc_n(v___x_533_, 10);
v___x_539_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_539_, 0, v___x_533_);
lean_ctor_set(v___x_539_, 1, v___x_535_);
lean_ctor_set(v___x_539_, 2, v___x_537_);
lean_ctor_set(v___x_539_, 3, v___x_538_);
v___x_540_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_541_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_542_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_543_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_544_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_533_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_546_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_547_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_548_ = l_Lean_addMacroScope(v_quotContext_528_, v___x_547_, v_currMacroScope_529_);
v___x_549_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_550_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_550_, 0, v___x_533_);
lean_ctor_set(v___x_550_, 1, v___x_546_);
lean_ctor_set(v___x_550_, 2, v___x_548_);
lean_ctor_set(v___x_550_, 3, v___x_549_);
v___x_551_ = l_Lean_Syntax_node1(v___x_533_, v___x_545_, v___x_550_);
v___x_552_ = l_Lean_Syntax_node2(v___x_533_, v___x_542_, v___x_544_, v___x_551_);
v___x_553_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__86));
v___x_554_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_533_);
lean_ctor_set(v___x_554_, 1, v___x_553_);
v___x_555_ = l_Lean_Syntax_node3(v___x_533_, v___x_310_, v___x_531_, v___x_554_, v___x_532_);
v___x_556_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_533_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = l_Lean_Syntax_node3(v___x_533_, v___x_541_, v___x_552_, v___x_555_, v___x_557_);
v___x_559_ = l_Lean_Syntax_node2(v___x_533_, v___x_540_, v___x_296_, v___x_558_);
v___x_560_ = l_Lean_Syntax_node2(v___x_533_, v___x_534_, v___x_539_, v___x_559_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v_a_290_);
return v___x_561_;
}
}
else
{
lean_object* v_quotContext_562_; lean_object* v_currMacroScope_563_; lean_object* v_ref_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v_quotContext_562_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_563_ = lean_ctor_get(v_a_289_, 2);
v_ref_564_ = lean_ctor_get(v_a_289_, 5);
v___x_565_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
v___x_566_ = l_Lean_Syntax_getArg(v___x_298_, v___x_297_);
lean_dec(v___x_298_);
v___x_567_ = l_Lean_SourceInfo_fromRef(v_ref_564_, v___x_307_);
v___x_568_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_569_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__88);
v___x_570_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__90));
lean_inc_n(v_currMacroScope_563_, 2);
lean_inc_n(v_quotContext_562_, 2);
v___x_571_ = l_Lean_addMacroScope(v_quotContext_562_, v___x_570_, v_currMacroScope_563_);
v___x_572_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__93));
lean_inc_n(v___x_567_, 10);
v___x_573_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_573_, 0, v___x_567_);
lean_ctor_set(v___x_573_, 1, v___x_569_);
lean_ctor_set(v___x_573_, 2, v___x_571_);
lean_ctor_set(v___x_573_, 3, v___x_572_);
v___x_574_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_575_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_576_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_577_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_567_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_580_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_581_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_582_ = l_Lean_addMacroScope(v_quotContext_562_, v___x_581_, v_currMacroScope_563_);
v___x_583_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_584_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_584_, 0, v___x_567_);
lean_ctor_set(v___x_584_, 1, v___x_580_);
lean_ctor_set(v___x_584_, 2, v___x_582_);
lean_ctor_set(v___x_584_, 3, v___x_583_);
v___x_585_ = l_Lean_Syntax_node1(v___x_567_, v___x_579_, v___x_584_);
v___x_586_ = l_Lean_Syntax_node2(v___x_567_, v___x_576_, v___x_578_, v___x_585_);
v___x_587_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__94));
v___x_588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_567_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_Syntax_node3(v___x_567_, v___x_308_, v___x_565_, v___x_588_, v___x_566_);
v___x_590_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_591_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_567_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = l_Lean_Syntax_node3(v___x_567_, v___x_575_, v___x_586_, v___x_589_, v___x_591_);
v___x_593_ = l_Lean_Syntax_node2(v___x_567_, v___x_574_, v___x_296_, v___x_592_);
v___x_594_ = l_Lean_Syntax_node2(v___x_567_, v___x_568_, v___x_573_, v___x_593_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v_a_290_);
return v___x_595_;
}
}
else
{
lean_object* v_quotContext_596_; lean_object* v_currMacroScope_597_; lean_object* v_ref_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_quotContext_596_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_597_ = lean_ctor_get(v_a_289_, 2);
v_ref_598_ = lean_ctor_get(v_a_289_, 5);
v___x_599_ = l_Lean_Syntax_getArg(v___x_298_, v___x_305_);
lean_dec(v___x_298_);
v___x_600_ = l_Lean_SourceInfo_fromRef(v_ref_598_, v___x_304_);
v___x_601_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_602_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__96);
v___x_603_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__98));
lean_inc_n(v_currMacroScope_597_, 2);
lean_inc_n(v_quotContext_596_, 2);
v___x_604_ = l_Lean_addMacroScope(v_quotContext_596_, v___x_603_, v_currMacroScope_597_);
v___x_605_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__101));
lean_inc_n(v___x_600_, 10);
v___x_606_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_606_, 0, v___x_600_);
lean_ctor_set(v___x_606_, 1, v___x_602_);
lean_ctor_set(v___x_606_, 2, v___x_604_);
lean_ctor_set(v___x_606_, 3, v___x_605_);
v___x_607_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_608_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_609_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_610_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_611_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_600_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_613_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_614_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_615_ = l_Lean_addMacroScope(v_quotContext_596_, v___x_614_, v_currMacroScope_597_);
v___x_616_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_617_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_617_, 0, v___x_600_);
lean_ctor_set(v___x_617_, 1, v___x_613_);
lean_ctor_set(v___x_617_, 2, v___x_615_);
lean_ctor_set(v___x_617_, 3, v___x_616_);
v___x_618_ = l_Lean_Syntax_node1(v___x_600_, v___x_612_, v___x_617_);
v___x_619_ = l_Lean_Syntax_node2(v___x_600_, v___x_609_, v___x_611_, v___x_618_);
v___x_620_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__102));
v___x_621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_600_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = l_Lean_Syntax_node2(v___x_600_, v___x_306_, v___x_621_, v___x_599_);
v___x_623_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_600_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = l_Lean_Syntax_node3(v___x_600_, v___x_608_, v___x_619_, v___x_622_, v___x_624_);
v___x_626_ = l_Lean_Syntax_node2(v___x_600_, v___x_607_, v___x_296_, v___x_625_);
v___x_627_ = l_Lean_Syntax_node2(v___x_600_, v___x_601_, v___x_606_, v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v_a_290_);
return v___x_628_;
}
}
else
{
lean_object* v_quotContext_629_; lean_object* v_currMacroScope_630_; lean_object* v_ref_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_quotContext_629_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_630_ = lean_ctor_get(v_a_289_, 2);
v_ref_631_ = lean_ctor_get(v_a_289_, 5);
v___x_632_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
lean_dec(v___x_298_);
v___x_633_ = l_Lean_SourceInfo_fromRef(v_ref_631_, v___x_302_);
v___x_634_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_635_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__104, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__104_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__104);
v___x_636_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__106));
lean_inc_n(v_currMacroScope_630_, 2);
lean_inc_n(v_quotContext_629_, 2);
v___x_637_ = l_Lean_addMacroScope(v_quotContext_629_, v___x_636_, v_currMacroScope_630_);
v___x_638_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__109));
lean_inc_n(v___x_633_, 10);
v___x_639_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_639_, 0, v___x_633_);
lean_ctor_set(v___x_639_, 1, v___x_635_);
lean_ctor_set(v___x_639_, 2, v___x_637_);
lean_ctor_set(v___x_639_, 3, v___x_638_);
v___x_640_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_641_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_642_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_643_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_644_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_633_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_646_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_647_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_648_ = l_Lean_addMacroScope(v_quotContext_629_, v___x_647_, v_currMacroScope_630_);
v___x_649_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_650_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_650_, 0, v___x_633_);
lean_ctor_set(v___x_650_, 1, v___x_646_);
lean_ctor_set(v___x_650_, 2, v___x_648_);
lean_ctor_set(v___x_650_, 3, v___x_649_);
v___x_651_ = l_Lean_Syntax_node1(v___x_633_, v___x_645_, v___x_650_);
v___x_652_ = l_Lean_Syntax_node2(v___x_633_, v___x_642_, v___x_644_, v___x_651_);
v___x_653_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__110));
v___x_654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_633_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = l_Lean_Syntax_node2(v___x_633_, v___x_303_, v___x_632_, v___x_654_);
v___x_656_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_657_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_633_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = l_Lean_Syntax_node3(v___x_633_, v___x_641_, v___x_652_, v___x_655_, v___x_657_);
v___x_659_ = l_Lean_Syntax_node2(v___x_633_, v___x_640_, v___x_296_, v___x_658_);
v___x_660_ = l_Lean_Syntax_node2(v___x_633_, v___x_634_, v___x_639_, v___x_659_);
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
lean_ctor_set(v___x_661_, 1, v_a_290_);
return v___x_661_;
}
}
else
{
lean_object* v_quotContext_662_; lean_object* v_currMacroScope_663_; lean_object* v_ref_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_quotContext_662_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_663_ = lean_ctor_get(v_a_289_, 2);
v_ref_664_ = lean_ctor_get(v_a_289_, 5);
v___x_665_ = l_Lean_Syntax_getArg(v___x_298_, v___x_295_);
lean_dec(v___x_298_);
v___x_666_ = l_Lean_SourceInfo_fromRef(v_ref_664_, v___x_300_);
v___x_667_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_668_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__112, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__112_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__112);
v___x_669_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__114));
lean_inc_n(v_currMacroScope_663_, 2);
lean_inc_n(v_quotContext_662_, 2);
v___x_670_ = l_Lean_addMacroScope(v_quotContext_662_, v___x_669_, v_currMacroScope_663_);
v___x_671_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__117));
lean_inc_n(v___x_666_, 10);
v___x_672_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_672_, 0, v___x_666_);
lean_ctor_set(v___x_672_, 1, v___x_668_);
lean_ctor_set(v___x_672_, 2, v___x_670_);
lean_ctor_set(v___x_672_, 3, v___x_671_);
v___x_673_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_674_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_675_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_676_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_677_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_666_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_679_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_680_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_681_ = l_Lean_addMacroScope(v_quotContext_662_, v___x_680_, v_currMacroScope_663_);
v___x_682_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_683_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_683_, 0, v___x_666_);
lean_ctor_set(v___x_683_, 1, v___x_679_);
lean_ctor_set(v___x_683_, 2, v___x_681_);
lean_ctor_set(v___x_683_, 3, v___x_682_);
v___x_684_ = l_Lean_Syntax_node1(v___x_666_, v___x_678_, v___x_683_);
v___x_685_ = l_Lean_Syntax_node2(v___x_666_, v___x_675_, v___x_677_, v___x_684_);
v___x_686_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__118));
v___x_687_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_666_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v___x_688_ = l_Lean_Syntax_node2(v___x_666_, v___x_301_, v___x_665_, v___x_687_);
v___x_689_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_666_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = l_Lean_Syntax_node3(v___x_666_, v___x_674_, v___x_685_, v___x_688_, v___x_690_);
v___x_692_ = l_Lean_Syntax_node2(v___x_666_, v___x_673_, v___x_296_, v___x_691_);
v___x_693_ = l_Lean_Syntax_node2(v___x_666_, v___x_667_, v___x_672_, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v_a_290_);
return v___x_694_;
}
}
else
{
lean_object* v_quotContext_695_; lean_object* v_currMacroScope_696_; lean_object* v_ref_697_; uint8_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec(v___x_298_);
v_quotContext_695_ = lean_ctor_get(v_a_289_, 1);
v_currMacroScope_696_ = lean_ctor_get(v_a_289_, 2);
v_ref_697_ = lean_ctor_get(v_a_289_, 5);
v___x_698_ = 0;
v___x_699_ = l_Lean_SourceInfo_fromRef(v_ref_697_, v___x_698_);
v___x_700_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__31));
v___x_701_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__120, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__120_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__120);
v___x_702_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__122));
lean_inc_n(v_currMacroScope_696_, 2);
lean_inc_n(v_quotContext_695_, 2);
v___x_703_ = l_Lean_addMacroScope(v_quotContext_695_, v___x_702_, v_currMacroScope_696_);
v___x_704_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__125));
lean_inc_n(v___x_699_, 10);
v___x_705_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_705_, 0, v___x_699_);
lean_ctor_set(v___x_705_, 1, v___x_701_);
lean_ctor_set(v___x_705_, 2, v___x_703_);
lean_ctor_set(v___x_705_, 3, v___x_704_);
v___x_706_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__42));
v___x_707_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__44));
v___x_708_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__46));
v___x_709_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__47));
v___x_710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_699_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__49));
v___x_712_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__51);
v___x_713_ = lean_obj_once(&l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52, &l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52_once, _init_l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__52);
v___x_714_ = l_Lean_addMacroScope(v_quotContext_695_, v___x_713_, v_currMacroScope_696_);
v___x_715_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__60));
v___x_716_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_716_, 0, v___x_699_);
lean_ctor_set(v___x_716_, 1, v___x_712_);
lean_ctor_set(v___x_716_, 2, v___x_714_);
lean_ctor_set(v___x_716_, 3, v___x_715_);
v___x_717_ = l_Lean_Syntax_node1(v___x_699_, v___x_711_, v___x_716_);
v___x_718_ = l_Lean_Syntax_node2(v___x_699_, v___x_708_, v___x_710_, v___x_717_);
v___x_719_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__126));
v___x_720_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_699_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = l_Lean_Syntax_node1(v___x_699_, v___x_299_, v___x_720_);
v___x_722_ = ((lean_object*)(l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___closed__62));
v___x_723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_699_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = l_Lean_Syntax_node3(v___x_699_, v___x_707_, v___x_718_, v___x_721_, v___x_723_);
v___x_725_ = l_Lean_Syntax_node2(v___x_699_, v___x_706_, v___x_296_, v___x_724_);
v___x_726_ = l_Lean_Syntax_node2(v___x_699_, v___x_700_, v___x_705_, v___x_725_);
v___x_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
lean_ctor_set(v___x_727_, 1, v_a_290_);
return v___x_727_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1___boxed(lean_object* v_x_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Std___aux__Init__Data__Slice__Notation______macroRules__term_____x5b___x5d__1(v_x_728_, v_a_729_, v_a_730_);
lean_dec_ref(v_a_729_);
return v_res_731_;
}
}
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_PRange(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Slice_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range_Polymorphic_PRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Slice_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range_Polymorphic_PRange(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Slice_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range_Polymorphic_PRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Slice_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Slice_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Slice_Notation(builtin);
}
#ifdef __cplusplus
}
#endif

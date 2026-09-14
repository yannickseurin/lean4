// Lean compiler output
// Module: Lean.AutoDecl
// Imports: public import Lean.Structure public import Lean.CoreM
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_is_reserved_name(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_casesOnSuffix;
uint8_t l_Lean_Environment_isConstructor(lean_object*, lean_object*);
extern lean_object* l_Lean_belowSuffix;
extern lean_object* l_Lean_brecOnSuffix;
extern lean_object* l_Lean_recOnSuffix;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_functor"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "functor_unfold"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutual"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ndrecOn"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noConfusionType"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "noConfusion"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "toCtorIdx"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctorIdx"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ctorElim"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ctorElimType"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "below_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "brecOn_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sizeOf_spec"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "grind_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__40;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unsafe_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__41 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__41_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__42;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "match_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__43 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__43_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__44;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "proof_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__45 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__45_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__46;
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 1);
v___x_6_ = lean_string_dec_eq(v_a_1_, v_head_4_);
if (v___x_6_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0___boxed(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_a_8_, v_x_9_);
lean_dec(v_x_9_);
lean_dec_ref(v_a_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20));
v___x_52_ = l_Lean_belowSuffix;
v___x_53_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21);
v___x_55_ = l_Lean_brecOnSuffix;
v___x_56_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22);
v___x_58_ = l_Lean_recOnSuffix;
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23);
v___x_61_ = l_Lean_casesOnSuffix;
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_box(0);
v___x_64_ = l_unsafeCast___redArg(v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26));
v___x_67_ = lean_string_utf8_byte_size(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28));
v___x_70_ = lean_string_utf8_byte_size(v___x_69_);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__40(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39));
v___x_92_ = lean_string_utf8_byte_size(v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__42(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__41));
v___x_95_ = lean_string_utf8_byte_size(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__44(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__43));
v___x_98_ = lean_string_utf8_byte_size(v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__46(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__45));
v___x_101_ = lean_string_utf8_byte_size(v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object* v_decl_102_, lean_object* v_a_103_){
_start:
{
uint8_t v___x_105_; uint8_t v___x_106_; 
v___x_105_ = l_Lean_Name_hasMacroScopes(v_decl_102_);
v___x_106_ = 1;
if (v___x_105_ == 0)
{
uint8_t v___x_107_; 
v___x_107_ = l_Lean_Name_isInternal(v_decl_102_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v_env_109_; uint8_t v___x_110_; 
v___x_108_ = lean_st_ref_get(v_a_103_);
v_env_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc_ref_n(v_env_109_, 2);
lean_dec(v___x_108_);
lean_inc(v_decl_102_);
v___x_110_ = lean_is_reserved_name(v_env_109_, v_decl_102_);
if (v___x_110_ == 0)
{
if (lean_obj_tag(v_decl_102_) == 1)
{
lean_object* v_pre_111_; lean_object* v_str_112_; uint8_t v___y_114_; lean_object* v___x_162_; lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_256_; 
v_pre_111_ = lean_ctor_get(v_decl_102_, 0);
lean_inc_n(v_pre_111_, 2);
v_str_112_ = lean_ctor_get(v_decl_102_, 1);
lean_inc_ref(v_str_112_);
lean_dec_ref_known(v_decl_102_, 2);
v___x_162_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_pre_111_, v_a_103_);
v_a_163_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_256_ == 0)
{
v___x_165_ = v___x_162_;
v_isShared_166_ = v_isSharedCheck_256_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_256_;
goto v_resetjp_164_;
}
v___jp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0));
v___x_116_ = l_Lean_Name_str___override(v_pre_111_, v___x_115_);
lean_inc(v___x_116_);
lean_inc_ref(v_env_109_);
v___x_117_ = l_Lean_Environment_find_x3f(v_env_109_, v___x_116_, v___y_114_);
if (lean_obj_tag(v___x_117_) == 1)
{
lean_object* v_val_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_159_; 
v_val_118_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_159_ == 0)
{
v___x_120_ = v___x_117_;
v_isShared_121_ = v_isSharedCheck_159_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_val_118_);
lean_dec(v___x_117_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_159_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
if (lean_obj_tag(v_val_118_) == 5)
{
lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_153_; 
lean_del_object(v___x_120_);
v_isSharedCheck_153_ = !lean_is_exclusive(v_val_118_);
if (v_isSharedCheck_153_ == 0)
{
lean_object* v_unused_154_; 
v_unused_154_ = lean_ctor_get(v_val_118_, 0);
lean_dec(v_unused_154_);
v___x_123_ = v_val_118_;
v_isShared_124_ = v_isSharedCheck_153_;
goto v_resetjp_122_;
}
else
{
lean_dec(v_val_118_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_153_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1));
v___x_126_ = lean_string_dec_eq(v_str_112_, v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = l_Lean_casesOnSuffix;
v___x_128_ = lean_string_dec_eq(v_str_112_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2));
v___x_130_ = lean_string_dec_eq(v_str_112_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = l_Lean_Name_str___override(v___x_116_, v_str_112_);
v___x_132_ = l_Lean_Environment_isConstructor(v_env_109_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_133_ = lean_box(v___x_110_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
lean_ctor_set(v___x_123_, 0, v___x_133_);
v___x_135_ = v___x_123_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v___x_133_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
else
{
lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_137_ = lean_box(v___x_106_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
lean_ctor_set(v___x_123_, 0, v___x_137_);
v___x_139_ = v___x_123_;
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
lean_object* v___x_141_; lean_object* v___x_143_; 
lean_dec(v___x_116_);
lean_dec_ref(v_str_112_);
lean_dec_ref(v_env_109_);
v___x_141_ = lean_box(v___x_106_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
lean_ctor_set(v___x_123_, 0, v___x_141_);
v___x_143_ = v___x_123_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
else
{
lean_object* v___x_145_; lean_object* v___x_147_; 
lean_dec(v___x_116_);
lean_dec_ref(v_str_112_);
lean_dec_ref(v_env_109_);
v___x_145_ = lean_box(v___x_106_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
lean_ctor_set(v___x_123_, 0, v___x_145_);
v___x_147_ = v___x_123_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
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
lean_object* v___x_149_; lean_object* v___x_151_; 
lean_dec(v___x_116_);
lean_dec_ref(v_str_112_);
lean_dec_ref(v_env_109_);
v___x_149_ = lean_box(v___x_106_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
lean_ctor_set(v___x_123_, 0, v___x_149_);
v___x_151_ = v___x_123_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_149_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
else
{
lean_object* v___x_155_; lean_object* v___x_157_; 
lean_dec(v_val_118_);
lean_dec(v___x_116_);
lean_dec_ref(v_str_112_);
lean_dec_ref(v_env_109_);
v___x_155_ = lean_box(v___x_110_);
if (v_isShared_121_ == 0)
{
lean_ctor_set_tag(v___x_120_, 0);
lean_ctor_set(v___x_120_, 0, v___x_155_);
v___x_157_ = v___x_120_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_155_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec(v___x_117_);
lean_dec(v___x_116_);
lean_dec_ref(v_str_112_);
lean_dec_ref(v_env_109_);
v___x_160_ = lean_box(v___x_110_);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
v_resetjp_164_:
{
uint8_t v___y_168_; uint8_t v___y_183_; uint8_t v___y_193_; uint8_t v___y_212_; uint8_t v___x_245_; 
v___x_245_ = lean_unbox(v_a_163_);
lean_dec(v_a_163_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_246_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__45));
v___x_247_ = lean_string_utf8_byte_size(v_str_112_);
v___x_248_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__46, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__46_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__46);
v___x_249_ = lean_nat_dec_le(v___x_248_, v___x_247_);
if (v___x_249_ == 0)
{
goto v___jp_236_;
}
else
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = lean_string_memcmp(v_str_112_, v___x_246_, v___x_250_, v___x_250_, v___x_248_);
if (v___x_251_ == 0)
{
goto v___jp_236_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_252_ = lean_box(v___x_106_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_254_ = lean_box(v___x_106_);
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
return v___x_255_;
}
v___jp_167_:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24);
v___x_170_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_str_112_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25);
lean_inc_ref(v_str_112_);
v___x_172_ = l_Lean_Name_str___override(v___x_171_, v_str_112_);
lean_inc(v_pre_111_);
lean_inc_ref(v_env_109_);
v___x_173_ = l_Lean_isSubobjectField_x3f(v_env_109_, v_pre_111_, v___x_172_);
if (lean_obj_tag(v___x_173_) == 1)
{
lean_object* v___x_174_; lean_object* v___x_176_; 
lean_dec_ref_known(v___x_173_, 1);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_174_ = lean_box(v___x_106_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_174_);
v___x_176_ = v___x_165_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
else
{
lean_dec(v___x_173_);
lean_del_object(v___x_165_);
v___y_114_ = v___y_168_;
goto v___jp_113_;
}
}
else
{
lean_object* v___x_178_; lean_object* v___x_180_; 
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_178_ = lean_box(v___x_106_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_178_);
v___x_180_ = v___x_165_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
v___jp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_184_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26));
v___x_185_ = lean_string_utf8_byte_size(v_str_112_);
v___x_186_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27);
v___x_187_ = lean_nat_dec_le(v___x_186_, v___x_185_);
if (v___x_187_ == 0)
{
v___y_168_ = v___y_183_;
goto v___jp_167_;
}
else
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = lean_string_memcmp(v_str_112_, v___x_184_, v___x_188_, v___x_188_, v___x_186_);
if (v___x_189_ == 0)
{
v___y_168_ = v___y_183_;
goto v___jp_167_;
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_190_ = lean_box(v___x_106_);
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
return v___x_191_;
}
}
}
v___jp_192_:
{
lean_object* v___x_194_; 
lean_inc(v_pre_111_);
lean_inc_ref(v_env_109_);
v___x_194_ = l_Lean_Environment_find_x3f(v_env_109_, v_pre_111_, v___y_193_);
if (lean_obj_tag(v___x_194_) == 1)
{
lean_object* v_val_195_; 
v_val_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_val_195_);
lean_dec_ref_known(v___x_194_, 1);
if (lean_obj_tag(v_val_195_) == 5)
{
lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_209_; 
v_isSharedCheck_209_ = !lean_is_exclusive(v_val_195_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v_val_195_, 0);
lean_dec(v_unused_210_);
v___x_197_ = v_val_195_;
v_isShared_198_ = v_isSharedCheck_209_;
goto v_resetjp_196_;
}
else
{
lean_dec(v_val_195_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_209_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_199_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28));
v___x_200_ = lean_string_utf8_byte_size(v_str_112_);
v___x_201_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29);
v___x_202_ = lean_nat_dec_le(v___x_201_, v___x_200_);
if (v___x_202_ == 0)
{
lean_del_object(v___x_197_);
v___y_183_ = v___y_193_;
goto v___jp_182_;
}
else
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(0u);
v___x_204_ = lean_string_memcmp(v_str_112_, v___x_199_, v___x_203_, v___x_203_, v___x_201_);
if (v___x_204_ == 0)
{
lean_del_object(v___x_197_);
v___y_183_ = v___y_193_;
goto v___jp_182_;
}
else
{
lean_object* v___x_205_; lean_object* v___x_207_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_205_ = lean_box(v___x_106_);
if (v_isShared_198_ == 0)
{
lean_ctor_set_tag(v___x_197_, 0);
lean_ctor_set(v___x_197_, 0, v___x_205_);
v___x_207_ = v___x_197_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
else
{
lean_dec(v_val_195_);
lean_del_object(v___x_165_);
v___y_114_ = v___y_193_;
goto v___jp_113_;
}
}
else
{
lean_dec(v___x_194_);
lean_del_object(v___x_165_);
v___y_114_ = v___y_193_;
goto v___jp_113_;
}
}
v___jp_211_:
{
uint8_t v___x_213_; 
lean_inc(v_pre_111_);
lean_inc_ref(v_env_109_);
v___x_213_ = l_Lean_Environment_isConstructor(v_env_109_, v_pre_111_);
if (v___x_213_ == 0)
{
v___y_193_ = v___y_212_;
goto v___jp_192_;
}
else
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38));
v___x_215_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_str_112_, v___x_214_);
if (v___x_215_ == 0)
{
v___y_193_ = v___x_215_;
goto v___jp_192_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_216_ = lean_box(v___x_106_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
v___jp_218_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_219_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39));
v___x_220_ = lean_string_utf8_byte_size(v_str_112_);
v___x_221_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__40, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__40_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__40);
v___x_222_ = lean_nat_dec_le(v___x_221_, v___x_220_);
if (v___x_222_ == 0)
{
v___y_212_ = v___x_222_;
goto v___jp_211_;
}
else
{
lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = lean_string_memcmp(v_str_112_, v___x_219_, v___x_223_, v___x_223_, v___x_221_);
if (v___x_224_ == 0)
{
v___y_212_ = v___x_224_;
goto v___jp_211_;
}
else
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_225_ = lean_box(v___x_106_);
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
return v___x_226_;
}
}
}
v___jp_227_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_228_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__41));
v___x_229_ = lean_string_utf8_byte_size(v_str_112_);
v___x_230_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__42, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__42_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__42);
v___x_231_ = lean_nat_dec_le(v___x_230_, v___x_229_);
if (v___x_231_ == 0)
{
goto v___jp_218_;
}
else
{
lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_string_memcmp(v_str_112_, v___x_228_, v___x_232_, v___x_232_, v___x_230_);
if (v___x_233_ == 0)
{
goto v___jp_218_;
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_234_ = lean_box(v___x_106_);
v___x_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
return v___x_235_;
}
}
}
v___jp_236_:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_237_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__43));
v___x_238_ = lean_string_utf8_byte_size(v_str_112_);
v___x_239_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__44, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__44_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__44);
v___x_240_ = lean_nat_dec_le(v___x_239_, v___x_238_);
if (v___x_240_ == 0)
{
goto v___jp_227_;
}
else
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_string_memcmp(v_str_112_, v___x_237_, v___x_241_, v___x_241_, v___x_239_);
if (v___x_242_ == 0)
{
goto v___jp_227_;
}
else
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_del_object(v___x_165_);
lean_dec_ref(v_str_112_);
lean_dec(v_pre_111_);
lean_dec_ref(v_env_109_);
v___x_243_ = lean_box(v___x_106_);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
}
}
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec_ref(v_env_109_);
lean_dec(v_decl_102_);
v___x_257_ = lean_box(v___x_110_);
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref(v_env_109_);
lean_dec(v_decl_102_);
v___x_259_ = lean_box(v___x_106_);
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
return v___x_260_;
}
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec(v_decl_102_);
v___x_261_ = lean_box(v___x_106_);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v_decl_102_);
v___x_263_ = lean_box(v___x_106_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
return v___x_264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___boxed(lean_object* v_decl_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_decl_265_, v_a_266_);
lean_dec(v_a_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal(lean_object* v_decl_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_decl_269_, v_a_271_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___boxed(lean_object* v_decl_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_isAutoDeclOrPrivate__Internal(v_decl_274_, v_a_275_, v_a_276_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
return v_res_278_;
}
}
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AutoDecl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AutoDecl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AutoDecl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AutoDecl(builtin);
}
#ifdef __cplusplus
}
#endif

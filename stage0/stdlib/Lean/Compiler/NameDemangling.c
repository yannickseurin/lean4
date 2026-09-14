// Lean compiler output
// Module: Lean.Compiler.NameDemangling
// Imports: import Init.While import Init.Data.String.TakeDrop import Init.Data.String.Search import Init.Data.String.Iterate import Lean.Data.NameTrie public import Lean.Compiler.NameMangling
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
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedNamePart_default;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_instBEqNamePart_beq(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_Lean_Name_demangle_x3f(lean_object*);
lean_object* l_Lean_Name_demangle(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "λ"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_elam_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_redArg"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_lam"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_lambda"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_elam"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_closed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_lam_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "closed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "jp"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "impl"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "boxed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 6, .m_data = "arity↓"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spec_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value),((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_at_"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_spec"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " spec at "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0_value;
static const lean_array_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody___boxed(lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".cold"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__4;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__5;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__6 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lp_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "l_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "initialize_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "[module_init] "};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "initialize_lp_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "initialize_l_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_init_lp_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[init] "};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_init_l_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore(lean_object*);
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_lean_main"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__0 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__0_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__1 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__1_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[lean] main "};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__2 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__2_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[lean] main"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__3 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__3_value;
static const lean_ctor_object l_Lean_Name_Demangle_demangleSymbol___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__3_value)}};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__4 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__4_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lean_apply_"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__5 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__5_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<apply/"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__6 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__6_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__7 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleSymbol(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "0x"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__10;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__12;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleBtLine(lean_object*);
LEAN_EXPORT lean_object* lean_demangle_bt_line_cstr(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(lean_object* v_pre_1_, lean_object* v_s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_3_ = lean_string_utf8_byte_size(v_s_2_);
v___x_4_ = lean_string_utf8_byte_size(v_pre_1_);
v___x_5_ = lean_nat_dec_le(v___x_4_, v___x_3_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec_ref(v_s_2_);
v___x_6_ = lean_box(0);
return v___x_6_;
}
else
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_string_memcmp(v_s_2_, v_pre_1_, v___x_7_, v___x_7_, v___x_4_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; 
lean_dec_ref(v_s_2_);
v___x_9_ = lean_box(0);
return v___x_9_;
}
else
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
lean_inc_ref(v_s_2_);
v___x_10_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_10_, 0, v_s_2_);
lean_ctor_set(v___x_10_, 1, v___x_7_);
lean_ctor_set(v___x_10_, 2, v___x_3_);
v___x_11_ = l_String_Slice_pos_x21(v___x_10_, v___x_4_);
lean_dec_ref_known(v___x_10_, 3);
v___x_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_12_, 0, v_s_2_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
lean_ctor_set(v___x_12_, 2, v___x_3_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg___boxed(lean_object* v_pre_14_, lean_object* v_s_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(v_pre_14_, v_s_15_);
lean_dec_ref(v_pre_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0(lean_object* v_pre_17_, lean_object* v_s_18_, lean_object* v_pat_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(v_pre_17_, v_s_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___boxed(lean_object* v_pre_21_, lean_object* v_s_22_, lean_object* v_pat_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0(v_pre_21_, v_s_22_, v_pat_23_);
lean_dec_ref(v_pat_23_);
lean_dec_ref(v_pre_21_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(lean_object* v_s_25_, lean_object* v_pre_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(v_pre_26_, v_s_25_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v___x_28_; 
v___x_28_ = lean_box(0);
return v___x_28_;
}
else
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_37_; 
v_val_29_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_37_ == 0)
{
v___x_31_ = v___x_27_;
v_isShared_32_ = v_isSharedCheck_37_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___x_27_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_37_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = l_String_Slice_toString(v_val_29_);
lean_dec(v_val_29_);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 0, v___x_33_);
v___x_35_ = v___x_31_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f___boxed(lean_object* v_s_38_, lean_object* v_pre_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_38_, v_pre_39_);
lean_dec_ref(v_pre_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(lean_object* v_s_41_, lean_object* v_pos_42_){
_start:
{
lean_object* v_str_43_; lean_object* v_startInclusive_44_; lean_object* v_endExclusive_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v_decide_49_; 
v_str_43_ = lean_ctor_get(v_s_41_, 0);
v_startInclusive_44_ = lean_ctor_get(v_s_41_, 1);
v_endExclusive_45_ = lean_ctor_get(v_s_41_, 2);
v___x_46_ = lean_nat_add(v_startInclusive_44_, v_pos_42_);
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = lean_nat_sub(v_endExclusive_45_, v___x_46_);
v_decide_49_ = lean_nat_dec_eq(v___x_47_, v___x_48_);
lean_dec(v___x_48_);
if (v_decide_49_ == 0)
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = lean_string_utf8_get_fast(v_str_43_, v___x_46_);
v___x_51_ = 48;
v___x_52_ = lean_uint32_dec_le(v___x_51_, v___x_50_);
if (v___x_52_ == 0)
{
lean_dec(v___x_46_);
return v_pos_42_;
}
else
{
uint32_t v___x_53_; uint8_t v___x_54_; 
v___x_53_ = 57;
v___x_54_ = lean_uint32_dec_le(v___x_50_, v___x_53_);
if (v___x_54_ == 0)
{
lean_dec(v___x_46_);
return v_pos_42_;
}
else
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_55_ = lean_string_utf8_next_fast(v_str_43_, v___x_46_);
v___x_56_ = lean_nat_sub(v___x_55_, v___x_46_);
lean_dec(v___x_46_);
v___x_57_ = lean_nat_add(v_pos_42_, v___x_56_);
lean_dec(v___x_56_);
v___x_58_ = lean_unsigned_to_nat(1u);
v___x_59_ = lean_nat_add(v_pos_42_, v___x_58_);
v___x_60_ = lean_nat_dec_le(v___x_59_, v___x_57_);
lean_dec(v___x_59_);
if (v___x_60_ == 0)
{
lean_dec(v___x_57_);
return v_pos_42_;
}
else
{
lean_dec(v_pos_42_);
v_pos_42_ = v___x_57_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_46_);
return v_pos_42_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0___boxed(lean_object* v_s_62_, lean_object* v_pos_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(v_s_62_, v_pos_63_);
lean_dec_ref(v_s_62_);
return v_res_64_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(lean_object* v_s_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_66_ = lean_string_utf8_byte_size(v_s_65_);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_nat_dec_eq(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v_decide_71_; 
v___x_69_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_69_, 0, v_s_65_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
v___x_70_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(v___x_69_, v___x_67_);
lean_dec_ref_known(v___x_69_, 3);
v_decide_71_ = lean_nat_dec_eq(v___x_70_, v___x_66_);
lean_dec(v___x_70_);
return v_decide_71_;
}
else
{
uint8_t v___x_72_; 
lean_dec_ref(v_s_65_);
v___x_72_ = 0;
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits___boxed(lean_object* v_s_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_s_73_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
switch(lean_obj_tag(v_a_76_))
{
case 0:
{
return v_a_77_;
}
case 1:
{
lean_object* v_pre_78_; lean_object* v_str_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_pre_78_ = lean_ctor_get(v_a_76_, 0);
v_str_79_ = lean_ctor_get(v_a_76_, 1);
lean_inc_ref(v_str_79_);
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v_str_79_);
v___x_81_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v_a_77_);
v_a_76_ = v_pre_78_;
v_a_77_ = v___x_81_;
goto _start;
}
default: 
{
lean_object* v_pre_83_; lean_object* v_i_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_pre_83_ = lean_ctor_get(v_a_76_, 0);
v_i_84_ = lean_ctor_get(v_a_76_, 1);
lean_inc(v_i_84_);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v_i_84_);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v_a_77_);
v_a_76_ = v_pre_83_;
v_a_77_ = v___x_86_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go___boxed(lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(v_a_88_, v_a_89_);
lean_dec(v_a_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(lean_object* v_n_91_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = lean_box(0);
v___x_93_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(v_n_91_, v___x_92_);
v___x_94_ = lean_array_mk(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts___boxed(lean_object* v_n_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(v_n_95_);
lean_dec(v_n_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(lean_object* v_as_97_, size_t v_i_98_, size_t v_stop_99_, lean_object* v_b_100_){
_start:
{
lean_object* v___y_102_; uint8_t v___x_106_; 
v___x_106_ = lean_usize_dec_eq(v_i_98_, v_stop_99_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_array_uget_borrowed(v_as_97_, v_i_98_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_s_108_; lean_object* v___x_109_; 
v_s_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_s_108_);
v___x_109_ = l_Lean_Name_str___override(v_b_100_, v_s_108_);
v___y_102_ = v___x_109_;
goto v___jp_101_;
}
else
{
lean_object* v_n_110_; lean_object* v___x_111_; 
v_n_110_ = lean_ctor_get(v___x_107_, 0);
lean_inc(v_n_110_);
v___x_111_ = l_Lean_Name_num___override(v_b_100_, v_n_110_);
v___y_102_ = v___x_111_;
goto v___jp_101_;
}
}
else
{
return v_b_100_;
}
v___jp_101_:
{
size_t v___x_103_; size_t v___x_104_; 
v___x_103_ = ((size_t)1ULL);
v___x_104_ = lean_usize_add(v_i_98_, v___x_103_);
v_i_98_ = v___x_104_;
v_b_100_ = v___y_102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0___boxed(lean_object* v_as_112_, lean_object* v_i_113_, lean_object* v_stop_114_, lean_object* v_b_115_){
_start:
{
size_t v_i_boxed_116_; size_t v_stop_boxed_117_; lean_object* v_res_118_; 
v_i_boxed_116_ = lean_unbox_usize(v_i_113_);
lean_dec(v_i_113_);
v_stop_boxed_117_ = lean_unbox_usize(v_stop_114_);
lean_dec(v_stop_114_);
v_res_118_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(v_as_112_, v_i_boxed_116_, v_stop_boxed_117_, v_b_115_);
lean_dec_ref(v_as_112_);
return v_res_118_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_box(0);
v___x_120_ = l_unsafeCast___redArg(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(lean_object* v_parts_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_122_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___closed__0, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___closed__0_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___closed__0);
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = lean_array_get_size(v_parts_121_);
v___x_125_ = lean_nat_dec_lt(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
return v___x_122_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = lean_nat_dec_le(v___x_124_, v___x_124_);
if (v___x_126_ == 0)
{
if (v___x_125_ == 0)
{
return v___x_122_;
}
else
{
size_t v___x_127_; size_t v___x_128_; lean_object* v___x_129_; 
v___x_127_ = ((size_t)0ULL);
v___x_128_ = lean_usize_of_nat(v___x_124_);
v___x_129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(v_parts_121_, v___x_127_, v___x_128_, v___x_122_);
return v___x_129_;
}
}
else
{
size_t v___x_130_; size_t v___x_131_; lean_object* v___x_132_; 
v___x_130_ = ((size_t)0ULL);
v___x_131_ = lean_usize_of_nat(v___x_124_);
v___x_132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(v_parts_121_, v___x_130_, v___x_131_, v___x_122_);
return v___x_132_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___boxed(lean_object* v_parts_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(v_parts_133_);
lean_dec_ref(v_parts_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(lean_object* v_comps_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_137_ = lean_array_get_size(v_comps_136_);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_nat_dec_eq(v___x_137_, v___x_138_);
if (v___x_139_ == 0)
{
uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = 1;
v___x_141_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(v_comps_136_);
v___x_142_ = l_Lean_Name_toString(v___x_141_, v___x_140_);
return v___x_142_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___boxed(lean_object* v_comps_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(v_comps_144_);
lean_dec_ref(v_comps_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(lean_object* v_c_174_){
_start:
{
if (lean_obj_tag(v_c_174_) == 0)
{
lean_object* v_s_177_; lean_object* v___x_185_; uint8_t v___x_186_; 
v_s_177_ = lean_ctor_get(v_c_174_, 0);
lean_inc_ref(v_s_177_);
lean_dec_ref_known(v_c_174_, 1);
v___x_185_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3));
v___x_186_ = lean_string_dec_eq(v_s_177_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4));
v___x_188_ = lean_string_dec_eq(v_s_177_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5));
v___x_190_ = lean_string_dec_eq(v_s_177_, v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6));
v___x_192_ = lean_string_dec_eq(v_s_177_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7));
v___x_194_ = lean_string_dec_eq(v_s_177_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8));
v___x_196_ = lean_string_dec_eq(v_s_177_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_197_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9));
v___x_198_ = lean_string_dec_eq(v_s_177_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10));
v___x_200_ = lean_string_dec_eq(v_s_177_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11));
lean_inc_ref(v_s_177_);
v___x_202_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_177_, v___x_201_);
if (lean_obj_tag(v___x_202_) == 0)
{
goto v___jp_178_;
}
else
{
lean_object* v_val_203_; uint8_t v___x_204_; 
v_val_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_val_203_);
lean_dec_ref_known(v___x_202_, 1);
v___x_204_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_203_);
if (v___x_204_ == 0)
{
goto v___jp_178_;
}
else
{
lean_object* v___x_205_; 
lean_dec_ref(v_s_177_);
v___x_205_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1));
return v___x_205_;
}
}
}
else
{
lean_object* v___x_206_; 
lean_dec_ref(v_s_177_);
v___x_206_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13));
return v___x_206_;
}
}
else
{
lean_object* v___x_207_; 
lean_dec_ref(v_s_177_);
v___x_207_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15));
return v___x_207_;
}
}
else
{
lean_dec_ref(v_s_177_);
goto v___jp_175_;
}
}
else
{
lean_dec_ref(v_s_177_);
goto v___jp_175_;
}
}
else
{
lean_dec_ref(v_s_177_);
goto v___jp_175_;
}
}
else
{
lean_object* v___x_208_; 
lean_dec_ref(v_s_177_);
v___x_208_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17));
return v___x_208_;
}
}
else
{
lean_object* v___x_209_; 
lean_dec_ref(v_s_177_);
v___x_209_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19));
return v___x_209_;
}
}
else
{
lean_object* v___x_210_; 
lean_dec_ref(v_s_177_);
v___x_210_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21));
return v___x_210_;
}
v___jp_178_:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2));
v___x_180_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_177_, v___x_179_);
if (lean_obj_tag(v___x_180_) == 0)
{
return v___x_180_;
}
else
{
lean_object* v_val_181_; uint8_t v___x_182_; 
v_val_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v___x_180_, 1);
v___x_182_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; 
v___x_183_ = lean_box(0);
return v___x_183_;
}
else
{
lean_object* v___x_184_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1));
return v___x_184_;
}
}
}
}
else
{
lean_object* v___x_211_; 
lean_dec_ref(v_c_174_);
v___x_211_ = lean_box(0);
return v___x_211_;
}
v___jp_175_:
{
lean_object* v___x_176_; 
v___x_176_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1));
return v___x_176_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(lean_object* v_c_213_){
_start:
{
if (lean_obj_tag(v_c_213_) == 0)
{
lean_object* v_s_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_s_214_ = lean_ctor_get(v_c_213_, 0);
lean_inc_ref(v_s_214_);
lean_dec_ref_known(v_c_213_, 1);
v___x_215_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0));
v___x_216_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_214_, v___x_215_);
if (lean_obj_tag(v___x_216_) == 0)
{
uint8_t v___x_217_; 
v___x_217_ = 0;
return v___x_217_;
}
else
{
lean_object* v_val_218_; uint8_t v___x_219_; 
v_val_218_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_val_218_);
lean_dec_ref_known(v___x_216_, 1);
v___x_219_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_218_);
return v___x_219_;
}
}
else
{
uint8_t v___x_220_; 
lean_dec_ref(v_c_213_);
v___x_220_ = 0;
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___boxed(lean_object* v_c_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(v_c_221_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(lean_object* v_x_224_, lean_object* v_x_225_){
_start:
{
if (lean_obj_tag(v_x_224_) == 0)
{
if (lean_obj_tag(v_x_225_) == 0)
{
uint8_t v___x_226_; 
v___x_226_ = 1;
return v___x_226_;
}
else
{
uint8_t v___x_227_; 
v___x_227_ = 0;
return v___x_227_;
}
}
else
{
if (lean_obj_tag(v_x_225_) == 0)
{
uint8_t v___x_228_; 
v___x_228_ = 0;
return v___x_228_;
}
else
{
lean_object* v_val_229_; lean_object* v_val_230_; uint8_t v___x_231_; 
v_val_229_ = lean_ctor_get(v_x_224_, 0);
v_val_230_ = lean_ctor_get(v_x_225_, 0);
v___x_231_ = l_Lean_instBEqNamePart_beq(v_val_229_, v_val_230_);
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0___boxed(lean_object* v_x_232_, lean_object* v_x_233_){
_start:
{
uint8_t v_res_234_; lean_object* v_r_235_; 
v_res_234_ = l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v_x_232_, v_x_233_);
lean_dec(v_x_233_);
lean_dec(v_x_232_);
v_r_235_ = lean_box(v_res_234_);
return v_r_235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(lean_object* v_stop_243_, lean_object* v_start_244_, lean_object* v___x_245_, lean_object* v_comps_246_, lean_object* v_range_247_, lean_object* v_b_248_, lean_object* v_i_249_){
_start:
{
lean_object* v_stop_250_; lean_object* v_step_251_; uint8_t v___x_252_; 
v_stop_250_ = lean_ctor_get(v_range_247_, 1);
v_step_251_ = lean_ctor_get(v_range_247_, 2);
v___x_252_ = lean_nat_dec_lt(v_i_249_, v_stop_250_);
if (v___x_252_ == 0)
{
lean_dec(v_i_249_);
lean_dec(v_start_244_);
lean_inc_ref(v_b_248_);
return v_b_248_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; lean_object* v___y_260_; lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_253_ = lean_box(0);
v___x_254_ = lean_box(0);
v___x_255_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0));
v___x_256_ = lean_unsigned_to_nat(1u);
v___x_257_ = lean_unsigned_to_nat(3u);
v___x_258_ = lean_nat_dec_le(v___x_257_, v___x_245_);
v___x_275_ = lean_array_get_size(v_comps_246_);
v___x_276_ = lean_nat_dec_lt(v_i_249_, v___x_275_);
if (v___x_276_ == 0)
{
v___y_260_ = v___x_253_;
goto v___jp_259_;
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_array_fget_borrowed(v_comps_246_, v_i_249_);
lean_inc(v___x_277_);
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
v___y_260_ = v___x_278_;
goto v___jp_259_;
}
v___jp_259_:
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2));
v___x_262_ = l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_260_, v___x_261_);
lean_dec(v___y_260_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_nat_add(v_i_249_, v_step_251_);
lean_dec(v_i_249_);
v_b_248_ = v___x_255_;
v_i_249_ = v___x_263_;
goto _start;
}
else
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_nat_add(v_i_249_, v___x_256_);
lean_dec(v_i_249_);
v___x_266_ = lean_nat_dec_lt(v___x_265_, v_stop_243_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec(v___x_265_);
v___x_267_ = lean_box(v___x_266_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v_start_244_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_254_);
return v___x_270_;
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec(v_start_244_);
v___x_271_ = lean_box(v___x_258_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_265_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set(v___x_274_, 1, v___x_254_);
return v___x_274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___boxed(lean_object* v_stop_279_, lean_object* v_start_280_, lean_object* v___x_281_, lean_object* v_comps_282_, lean_object* v_range_283_, lean_object* v_b_284_, lean_object* v_i_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(v_stop_279_, v_start_280_, v___x_281_, v_comps_282_, v_range_283_, v_b_284_, v_i_285_);
lean_dec_ref(v_b_284_);
lean_dec_ref(v_range_283_);
lean_dec_ref(v_comps_282_);
lean_dec(v___x_281_);
lean_dec(v_stop_279_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(lean_object* v_comps_292_, lean_object* v_start_293_, lean_object* v_stop_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___y_298_; uint8_t v___x_320_; 
v___x_295_ = lean_unsigned_to_nat(3u);
v___x_296_ = lean_nat_sub(v_stop_294_, v_start_293_);
v___x_320_ = lean_nat_dec_le(v___x_295_, v___x_296_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v___x_296_);
lean_dec(v_stop_294_);
v___x_321_ = lean_box(v___x_320_);
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v_start_293_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
return v___x_322_;
}
else
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_array_get_size(v_comps_292_);
v___x_324_ = lean_nat_dec_lt(v_start_293_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; 
v___x_325_ = lean_box(0);
v___y_298_ = v___x_325_;
goto v___jp_297_;
}
else
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_array_fget_borrowed(v_comps_292_, v_start_293_);
lean_inc(v___x_326_);
v___x_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
v___y_298_ = v___x_327_;
goto v___jp_297_;
}
}
v___jp_297_:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2));
v___x_300_ = l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_298_, v___x_299_);
lean_dec(v___y_298_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec(v___x_296_);
lean_dec(v_stop_294_);
v___x_301_ = lean_box(v___x_300_);
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v_start_293_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
return v___x_302_;
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v_fst_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_318_; 
v___x_303_ = lean_unsigned_to_nat(1u);
v___x_304_ = lean_nat_add(v_start_293_, v___x_303_);
lean_inc(v_stop_294_);
lean_inc(v___x_304_);
v___x_305_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v_stop_294_);
lean_ctor_set(v___x_305_, 2, v___x_303_);
v___x_306_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0));
lean_inc(v_start_293_);
v___x_307_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(v_stop_294_, v_start_293_, v___x_296_, v_comps_292_, v___x_305_, v___x_306_, v___x_304_);
lean_dec_ref_known(v___x_305_, 3);
lean_dec(v___x_296_);
lean_dec(v_stop_294_);
v_fst_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; 
v_unused_319_ = lean_ctor_get(v___x_307_, 1);
lean_dec(v_unused_319_);
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_fst_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
if (lean_obj_tag(v_fst_308_) == 0)
{
uint8_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_312_ = 0;
v___x_313_ = lean_box(v___x_312_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_313_);
lean_ctor_set(v___x_310_, 0, v_start_293_);
v___x_315_ = v___x_310_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_start_293_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v___x_313_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
else
{
lean_object* v_val_317_; 
lean_del_object(v___x_310_);
lean_dec(v_start_293_);
v_val_317_ = lean_ctor_get(v_fst_308_, 0);
lean_inc(v_val_317_);
lean_dec_ref_known(v_fst_308_, 1);
return v_val_317_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___boxed(lean_object* v_comps_328_, lean_object* v_start_329_, lean_object* v_stop_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(v_comps_328_, v_start_329_, v_stop_330_);
lean_dec_ref(v_comps_328_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1(lean_object* v_stop_332_, lean_object* v_start_333_, lean_object* v___x_334_, lean_object* v_comps_335_, lean_object* v_range_336_, lean_object* v_b_337_, lean_object* v_i_338_, lean_object* v_hs_339_, lean_object* v_hl_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(v_stop_332_, v_start_333_, v___x_334_, v_comps_335_, v_range_336_, v_b_337_, v_i_338_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___boxed(lean_object* v_stop_342_, lean_object* v_start_343_, lean_object* v___x_344_, lean_object* v_comps_345_, lean_object* v_range_346_, lean_object* v_b_347_, lean_object* v_i_348_, lean_object* v_hs_349_, lean_object* v_hl_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1(v_stop_342_, v_start_343_, v___x_344_, v_comps_345_, v_range_346_, v_b_347_, v_i_348_, v_hs_349_, v_hl_350_);
lean_dec_ref(v_b_347_);
lean_dec_ref(v_range_346_);
lean_dec_ref(v_comps_345_);
lean_dec(v___x_344_);
lean_dec(v_stop_342_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(lean_object* v___x_352_, lean_object* v_comps_353_, lean_object* v_range_354_, lean_object* v_b_355_, lean_object* v_i_356_){
_start:
{
lean_object* v_stop_357_; lean_object* v_step_358_; uint8_t v___x_359_; 
v_stop_357_ = lean_ctor_get(v_range_354_, 1);
v_step_358_ = lean_ctor_get(v_range_354_, 2);
v___x_359_ = lean_nat_dec_lt(v_i_356_, v_stop_357_);
if (v___x_359_ == 0)
{
lean_dec(v_i_356_);
lean_inc(v_b_355_);
return v_b_355_;
}
else
{
lean_object* v___x_360_; uint8_t v___y_362_; lean_object* v___y_367_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_360_ = lean_unsigned_to_nat(1u);
v___x_372_ = lean_array_get_size(v_comps_353_);
v___x_373_ = lean_nat_dec_lt(v_i_356_, v___x_372_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = lean_box(0);
v___y_367_ = v___x_374_;
goto v___jp_366_;
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_array_fget_borrowed(v_comps_353_, v_i_356_);
lean_inc(v___x_375_);
v___x_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
v___y_367_ = v___x_376_;
goto v___jp_366_;
}
v___jp_361_:
{
if (v___y_362_ == 0)
{
lean_object* v___x_363_; 
v___x_363_ = lean_nat_add(v_i_356_, v_step_358_);
lean_dec(v_i_356_);
v_i_356_ = v___x_363_;
goto _start;
}
else
{
lean_object* v___x_365_; 
v___x_365_ = lean_nat_add(v_i_356_, v___x_360_);
lean_dec(v_i_356_);
return v___x_365_;
}
}
v___jp_366_:
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2));
v___x_369_ = l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_367_, v___x_368_);
lean_dec(v___y_367_);
if (v___x_369_ == 0)
{
v___y_362_ = v___x_369_;
goto v___jp_361_;
}
else
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_nat_add(v_i_356_, v___x_360_);
v___x_371_ = lean_nat_dec_lt(v___x_370_, v___x_352_);
lean_dec(v___x_370_);
v___y_362_ = v___x_371_;
goto v___jp_361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg___boxed(lean_object* v___x_377_, lean_object* v_comps_378_, lean_object* v_range_379_, lean_object* v_b_380_, lean_object* v_i_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(v___x_377_, v_comps_378_, v_range_379_, v_b_380_, v_i_381_);
lean_dec(v_b_380_);
lean_dec_ref(v_range_379_);
lean_dec_ref(v_comps_378_);
lean_dec(v___x_377_);
return v_res_382_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(lean_object* v_a_383_, lean_object* v_as_384_, size_t v_i_385_, size_t v_stop_386_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = lean_usize_dec_eq(v_i_385_, v_stop_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = lean_array_uget_borrowed(v_as_384_, v_i_385_);
v___x_389_ = lean_string_dec_eq(v_a_383_, v___x_388_);
if (v___x_389_ == 0)
{
size_t v___x_390_; size_t v___x_391_; 
v___x_390_ = ((size_t)1ULL);
v___x_391_ = lean_usize_add(v_i_385_, v___x_390_);
v_i_385_ = v___x_391_;
goto _start;
}
else
{
return v___x_389_;
}
}
else
{
uint8_t v___x_393_; 
v___x_393_ = 0;
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0___boxed(lean_object* v_a_394_, lean_object* v_as_395_, lean_object* v_i_396_, lean_object* v_stop_397_){
_start:
{
size_t v_i_boxed_398_; size_t v_stop_boxed_399_; uint8_t v_res_400_; lean_object* v_r_401_; 
v_i_boxed_398_ = lean_unbox_usize(v_i_396_);
lean_dec(v_i_396_);
v_stop_boxed_399_ = lean_unbox_usize(v_stop_397_);
lean_dec(v_stop_397_);
v_res_400_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(v_a_394_, v_as_395_, v_i_boxed_398_, v_stop_boxed_399_);
lean_dec_ref(v_as_395_);
lean_dec_ref(v_a_394_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(lean_object* v_as_402_, lean_object* v_a_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_array_get_size(v_as_402_);
v___x_406_ = lean_nat_dec_lt(v___x_404_, v___x_405_);
if (v___x_406_ == 0)
{
return v___x_406_;
}
else
{
if (v___x_406_ == 0)
{
return v___x_406_;
}
else
{
size_t v___x_407_; size_t v___x_408_; uint8_t v___x_409_; 
v___x_407_ = ((size_t)0ULL);
v___x_408_ = lean_usize_of_nat(v___x_405_);
v___x_409_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(v_a_403_, v_as_402_, v___x_407_, v___x_408_);
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0___boxed(lean_object* v_as_410_, lean_object* v_a_411_){
_start:
{
uint8_t v_res_412_; lean_object* v_r_413_; 
v_res_412_ = l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(v_as_410_, v_a_411_);
lean_dec_ref(v_a_411_);
lean_dec_ref(v_as_410_);
v_r_413_ = lean_box(v_res_412_);
return v_r_413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(lean_object* v_comps_414_, lean_object* v_range_415_, lean_object* v_b_416_, lean_object* v_i_417_){
_start:
{
lean_object* v_stop_418_; lean_object* v_step_419_; lean_object* v_a_421_; uint8_t v___x_424_; 
v_stop_418_ = lean_ctor_get(v_range_415_, 1);
v_step_419_ = lean_ctor_get(v_range_415_, 2);
v___x_424_ = lean_nat_dec_lt(v_i_417_, v_stop_418_);
if (v___x_424_ == 0)
{
lean_dec(v_i_417_);
return v_b_416_;
}
else
{
lean_object* v_fst_425_; lean_object* v_snd_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_450_; 
v_fst_425_ = lean_ctor_get(v_b_416_, 0);
v_snd_426_ = lean_ctor_get(v_b_416_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_b_416_);
if (v_isSharedCheck_450_ == 0)
{
v___x_428_ = v_b_416_;
v_isShared_429_ = v_isSharedCheck_450_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_snd_426_);
lean_inc(v_fst_425_);
lean_dec(v_b_416_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_450_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = l_Lean_instInhabitedNamePart_default;
v___x_431_ = lean_array_get_borrowed(v___x_430_, v_comps_414_, v_i_417_);
lean_inc(v___x_431_);
v___x_432_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(v___x_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
uint8_t v___x_433_; 
lean_inc(v___x_431_);
v___x_433_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(v___x_431_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_436_; 
lean_inc(v___x_431_);
v___x_434_ = lean_array_push(v_fst_425_, v___x_431_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_434_);
v___x_436_ = v___x_428_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v_snd_426_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
v_a_421_ = v___x_436_;
goto v___jp_420_;
}
}
else
{
lean_object* v___x_439_; 
if (v_isShared_429_ == 0)
{
v___x_439_ = v___x_428_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_fst_425_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_snd_426_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
v_a_421_ = v___x_439_;
goto v___jp_420_;
}
}
}
else
{
lean_object* v_val_441_; uint8_t v___x_442_; 
v_val_441_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_441_);
lean_dec_ref_known(v___x_432_, 1);
v___x_442_ = l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(v_snd_426_, v_val_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = lean_array_push(v_snd_426_, v_val_441_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 1, v___x_443_);
v___x_445_ = v___x_428_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_fst_425_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
v_a_421_ = v___x_445_;
goto v___jp_420_;
}
}
else
{
lean_object* v___x_448_; 
lean_dec(v_val_441_);
if (v_isShared_429_ == 0)
{
v___x_448_ = v___x_428_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_fst_425_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_snd_426_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
v_a_421_ = v___x_448_;
goto v___jp_420_;
}
}
}
}
}
v___jp_420_:
{
lean_object* v___x_422_; 
v___x_422_ = lean_nat_add(v_i_417_, v_step_419_);
lean_dec(v_i_417_);
v_b_416_ = v_a_421_;
v_i_417_ = v___x_422_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg___boxed(lean_object* v_comps_451_, lean_object* v_range_452_, lean_object* v_b_453_, lean_object* v_i_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(v_comps_451_, v_range_452_, v_b_453_, v_i_454_);
lean_dec_ref(v_range_452_);
lean_dec_ref(v_comps_451_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(lean_object* v_comps_460_){
_start:
{
lean_object* v_begin___462_; lean_object* v_begin___478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___y_482_; uint8_t v___x_488_; 
v_begin___478_ = lean_unsigned_to_nat(0u);
v___x_479_ = lean_unsigned_to_nat(3u);
v___x_480_ = lean_array_get_size(v_comps_460_);
v___x_488_ = lean_nat_dec_le(v___x_479_, v___x_480_);
if (v___x_488_ == 0)
{
v_begin___462_ = v_begin___478_;
goto v___jp_461_;
}
else
{
uint8_t v___x_489_; 
v___x_489_ = lean_nat_dec_lt(v_begin___478_, v___x_480_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; 
v___x_490_ = lean_box(0);
v___y_482_ = v___x_490_;
goto v___jp_481_;
}
else
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_array_fget_borrowed(v_comps_460_, v_begin___478_);
lean_inc(v___x_491_);
v___x_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
v___y_482_ = v___x_492_;
goto v___jp_481_;
}
}
v___jp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_fst_468_; lean_object* v_snd_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_477_; 
v___x_463_ = lean_array_get_size(v_comps_460_);
v___x_464_ = lean_unsigned_to_nat(1u);
lean_inc(v_begin___462_);
v___x_465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_465_, 0, v_begin___462_);
lean_ctor_set(v___x_465_, 1, v___x_463_);
lean_ctor_set(v___x_465_, 2, v___x_464_);
v___x_466_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1));
v___x_467_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(v_comps_460_, v___x_465_, v___x_466_, v_begin___462_);
lean_dec_ref_known(v___x_465_, 3);
v_fst_468_ = lean_ctor_get(v___x_467_, 0);
v_snd_469_ = lean_ctor_get(v___x_467_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_477_ == 0)
{
v___x_471_ = v___x_467_;
v_isShared_472_ = v_isSharedCheck_477_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_snd_469_);
lean_inc(v_fst_468_);
lean_dec(v___x_467_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_477_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_473_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(v_fst_468_);
lean_dec(v_fst_468_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_473_);
v___x_475_ = v___x_471_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_snd_469_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
v___jp_481_:
{
lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_483_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2));
v___x_484_ = l_Option_instBEq_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_482_, v___x_483_);
lean_dec(v___y_482_);
if (v___x_484_ == 0)
{
v_begin___462_ = v_begin___478_;
goto v___jp_461_;
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
lean_ctor_set(v___x_486_, 1, v___x_480_);
lean_ctor_set(v___x_486_, 2, v___x_485_);
v___x_487_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(v___x_480_, v_comps_460_, v___x_486_, v_begin___478_, v___x_485_);
lean_dec_ref_known(v___x_486_, 3);
v_begin___462_ = v___x_487_;
goto v___jp_461_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___boxed(lean_object* v_comps_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(v_comps_493_);
lean_dec_ref(v_comps_493_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1(lean_object* v_comps_495_, lean_object* v_range_496_, lean_object* v_b_497_, lean_object* v_i_498_, lean_object* v_hs_499_, lean_object* v_hl_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(v_comps_495_, v_range_496_, v_b_497_, v_i_498_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___boxed(lean_object* v_comps_502_, lean_object* v_range_503_, lean_object* v_b_504_, lean_object* v_i_505_, lean_object* v_hs_506_, lean_object* v_hl_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1(v_comps_502_, v_range_503_, v_b_504_, v_i_505_, v_hs_506_, v_hl_507_);
lean_dec_ref(v_range_503_);
lean_dec_ref(v_comps_502_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2(lean_object* v___x_509_, lean_object* v_comps_510_, lean_object* v_range_511_, lean_object* v_b_512_, lean_object* v_i_513_, lean_object* v_hs_514_, lean_object* v_hl_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(v___x_509_, v_comps_510_, v_range_511_, v_b_512_, v_i_513_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___boxed(lean_object* v___x_517_, lean_object* v_comps_518_, lean_object* v_range_519_, lean_object* v_b_520_, lean_object* v_i_521_, lean_object* v_hs_522_, lean_object* v_hl_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2(v___x_517_, v_comps_518_, v_range_519_, v_b_520_, v_i_521_, v_hs_522_, v_hl_523_);
lean_dec(v_b_520_);
lean_dec_ref(v_range_519_);
lean_dec_ref(v_comps_518_);
lean_dec(v___x_517_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(lean_object* v___x_528_, lean_object* v_range_529_, lean_object* v_b_530_, lean_object* v_i_531_){
_start:
{
lean_object* v_stop_532_; lean_object* v_step_533_; uint8_t v___x_534_; 
v_stop_532_ = lean_ctor_get(v_range_529_, 1);
v_step_533_ = lean_ctor_get(v_range_529_, 2);
v___x_534_ = lean_nat_dec_lt(v_i_531_, v_stop_532_);
if (v___x_534_ == 0)
{
lean_dec(v_i_531_);
lean_inc(v_b_530_);
return v_b_530_;
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_535_ = l_Lean_instInhabitedNamePart_default;
v___x_536_ = lean_array_get_borrowed(v___x_535_, v___x_528_, v_i_531_);
v___x_537_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1));
v___x_538_ = l_Lean_instBEqNamePart_beq(v___x_536_, v___x_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_nat_add(v_i_531_, v_step_533_);
lean_dec(v_i_531_);
v_i_531_ = v___x_539_;
goto _start;
}
else
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_541_, 0, v_i_531_);
return v___x_541_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___boxed(lean_object* v___x_542_, lean_object* v_range_543_, lean_object* v_b_544_, lean_object* v_i_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(v___x_542_, v_range_543_, v_b_544_, v_i_545_);
lean_dec(v_b_544_);
lean_dec_ref(v_range_543_);
lean_dec_ref(v___x_542_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(lean_object* v___x_547_, lean_object* v_as_548_, size_t v_sz_549_, size_t v_i_550_, lean_object* v_b_551_){
_start:
{
lean_object* v_a_553_; uint8_t v___x_557_; 
v___x_557_ = lean_usize_dec_lt(v_i_550_, v_sz_549_);
if (v___x_557_ == 0)
{
return v_b_551_;
}
else
{
lean_object* v_a_558_; lean_object* v___x_559_; lean_object* v_name_562_; lean_object* v_flags_563_; lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v_a_558_ = lean_array_uget_borrowed(v_as_548_, v_i_550_);
v___x_559_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(v_a_558_);
v_name_562_ = lean_ctor_get(v___x_559_, 0);
lean_inc_ref(v_name_562_);
v_flags_563_ = lean_ctor_get(v___x_559_, 1);
lean_inc_ref(v_flags_563_);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_string_utf8_byte_size(v_name_562_);
lean_dec_ref(v_name_562_);
v___x_566_ = lean_nat_dec_eq(v___x_565_, v___x_564_);
if (v___x_566_ == 0)
{
lean_dec_ref(v_flags_563_);
goto v___jp_560_;
}
else
{
uint8_t v_skipNext_567_; 
v_skipNext_567_ = lean_nat_dec_eq(v___x_547_, v___x_564_);
if (v_skipNext_567_ == 0)
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = lean_array_get_size(v_flags_563_);
lean_dec_ref(v_flags_563_);
v___x_569_ = lean_nat_dec_eq(v___x_568_, v___x_564_);
if (v___x_569_ == 0)
{
goto v___jp_560_;
}
else
{
lean_dec_ref(v___x_559_);
v_a_553_ = v_b_551_;
goto v___jp_552_;
}
}
else
{
lean_dec_ref(v_flags_563_);
goto v___jp_560_;
}
}
v___jp_560_:
{
lean_object* v___x_561_; 
v___x_561_ = lean_array_push(v_b_551_, v___x_559_);
v_a_553_ = v___x_561_;
goto v___jp_552_;
}
}
v___jp_552_:
{
size_t v___x_554_; size_t v___x_555_; 
v___x_554_ = ((size_t)1ULL);
v___x_555_ = lean_usize_add(v_i_550_, v___x_554_);
v_i_550_ = v___x_555_;
v_b_551_ = v_a_553_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5___boxed(lean_object* v___x_570_, lean_object* v_as_571_, lean_object* v_sz_572_, lean_object* v_i_573_, lean_object* v_b_574_){
_start:
{
size_t v_sz_boxed_575_; size_t v_i_boxed_576_; lean_object* v_res_577_; 
v_sz_boxed_575_ = lean_unbox_usize(v_sz_572_);
lean_dec(v_sz_572_);
v_i_boxed_576_ = lean_unbox_usize(v_i_573_);
lean_dec(v_i_573_);
v_res_577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(v___x_570_, v_as_571_, v_sz_boxed_575_, v_i_boxed_576_, v_b_574_);
lean_dec_ref(v_as_571_);
lean_dec(v___x_570_);
return v_res_577_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0));
v___x_580_ = lean_string_utf8_byte_size(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(lean_object* v_range_581_, lean_object* v_b_582_, lean_object* v_i_583_){
_start:
{
lean_object* v_stop_584_; lean_object* v_step_585_; lean_object* v_a_587_; uint8_t v___x_590_; 
v_stop_584_ = lean_ctor_get(v_range_581_, 1);
v_step_585_ = lean_ctor_get(v_range_581_, 2);
v___x_590_ = lean_nat_dec_lt(v_i_583_, v_stop_584_);
if (v___x_590_ == 0)
{
lean_dec(v_i_583_);
lean_inc_ref(v_b_582_);
return v_b_582_;
}
else
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = l_Lean_instInhabitedNamePart_default;
v___x_592_ = lean_array_get_borrowed(v___x_591_, v_b_582_, v_i_583_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_s_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v_s_593_ = lean_ctor_get(v___x_592_, 0);
v___x_594_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0));
v___x_595_ = lean_string_utf8_byte_size(v_s_593_);
v___x_596_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__1);
v___x_597_ = lean_nat_dec_le(v___x_596_, v___x_595_);
if (v___x_597_ == 0)
{
v_a_587_ = v_b_582_;
goto v___jp_586_;
}
else
{
lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_string_memcmp(v_s_593_, v___x_594_, v___x_598_, v___x_598_, v___x_596_);
if (v___x_599_ == 0)
{
v_a_587_ = v_b_582_;
goto v___jp_586_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = l_Array_extract___redArg(v_b_582_, v___x_598_, v_i_583_);
return v___x_600_;
}
}
}
else
{
v_a_587_ = v_b_582_;
goto v___jp_586_;
}
}
v___jp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = lean_nat_add(v_i_583_, v_step_585_);
lean_dec(v_i_583_);
v_b_582_ = v_a_587_;
v_i_583_ = v___x_588_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___boxed(lean_object* v_range_601_, lean_object* v_b_602_, lean_object* v_i_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(v_range_601_, v_b_602_, v_i_603_);
lean_dec_ref(v_b_602_);
lean_dec_ref(v_range_601_);
return v_res_604_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0));
v___x_609_ = lean_string_utf8_byte_size(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(lean_object* v___x_612_, lean_object* v___x_613_, lean_object* v_range_614_, lean_object* v_b_615_, lean_object* v_i_616_){
_start:
{
lean_object* v_stop_617_; lean_object* v_step_618_; lean_object* v_a_620_; uint8_t v___x_623_; 
v_stop_617_ = lean_ctor_get(v_range_614_, 1);
v_step_618_ = lean_ctor_get(v_range_614_, 2);
v___x_623_ = lean_nat_dec_lt(v_i_616_, v_stop_617_);
if (v___x_623_ == 0)
{
lean_dec(v_i_616_);
return v_b_615_;
}
else
{
lean_object* v_snd_624_; lean_object* v_snd_625_; lean_object* v_fst_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_722_; 
v_snd_624_ = lean_ctor_get(v_b_615_, 1);
lean_inc(v_snd_624_);
v_snd_625_ = lean_ctor_get(v_snd_624_, 1);
lean_inc(v_snd_625_);
v_fst_626_ = lean_ctor_get(v_b_615_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v_b_615_);
if (v_isSharedCheck_722_ == 0)
{
lean_object* v_unused_723_; 
v_unused_723_ = lean_ctor_get(v_b_615_, 1);
lean_dec(v_unused_723_);
v___x_628_ = v_b_615_;
v_isShared_629_ = v_isSharedCheck_722_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_fst_626_);
lean_dec(v_b_615_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_722_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v_fst_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_720_; 
v_fst_630_ = lean_ctor_get(v_snd_624_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v_snd_624_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v_snd_624_, 1);
lean_dec(v_unused_721_);
v___x_632_ = v_snd_624_;
v_isShared_633_ = v_isSharedCheck_720_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_fst_630_);
lean_dec(v_snd_624_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_720_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v_fst_634_; lean_object* v_snd_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_719_; 
v_fst_634_ = lean_ctor_get(v_snd_625_, 0);
v_snd_635_ = lean_ctor_get(v_snd_625_, 1);
v_isSharedCheck_719_ = !lean_is_exclusive(v_snd_625_);
if (v_isSharedCheck_719_ == 0)
{
v___x_637_ = v_snd_625_;
v_isShared_638_ = v_isSharedCheck_719_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_snd_635_);
lean_inc(v_fst_634_);
lean_dec(v_snd_625_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_719_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_639_ = lean_unsigned_to_nat(0u);
v___x_640_ = lean_unbox(v_snd_635_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_641_ = l_Lean_instInhabitedNamePart_default;
v___x_642_ = lean_array_get_borrowed(v___x_641_, v___x_612_, v_i_616_);
v___x_672_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1));
v___x_673_ = l_Lean_instBEqNamePart_beq(v___x_642_, v___x_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v_cont_677_; lean_object* v_entries_679_; lean_object* v_currentCtx_680_; 
v___x_674_ = lean_box(0);
v___x_675_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0));
v___x_676_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1));
v_cont_677_ = l_Lean_instBEqNamePart_beq(v___x_642_, v___x_676_);
if (v_cont_677_ == 0)
{
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_s_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v_s_685_ = lean_ctor_get(v___x_642_, 0);
v___x_686_ = lean_string_utf8_byte_size(v_s_685_);
v___x_687_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2);
v___x_688_ = lean_nat_dec_le(v___x_687_, v___x_686_);
if (v___x_688_ == 0)
{
goto v___jp_643_;
}
else
{
uint8_t v___x_689_; 
v___x_689_ = lean_string_memcmp(v_s_685_, v___x_675_, v___x_639_, v___x_639_, v___x_687_);
if (v___x_689_ == 0)
{
goto v___jp_643_;
}
else
{
lean_del_object(v___x_637_);
lean_del_object(v___x_632_);
lean_del_object(v___x_628_);
if (lean_obj_tag(v_fst_630_) == 1)
{
lean_object* v_val_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_val_690_ = lean_ctor_get(v_fst_630_, 0);
lean_inc(v_val_690_);
lean_dec_ref_known(v_fst_630_, 1);
v___x_691_ = lean_array_push(v_fst_626_, v_val_690_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v_fst_634_);
lean_ctor_set(v___x_692_, 1, v_snd_635_);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_674_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_691_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v_a_620_ = v___x_694_;
goto v___jp_619_;
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_fst_634_);
lean_ctor_set(v___x_695_, 1, v_snd_635_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v_fst_630_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_697_, 0, v_fst_626_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v_a_620_ = v___x_697_;
goto v___jp_619_;
}
}
}
}
else
{
goto v___jp_643_;
}
}
else
{
lean_del_object(v___x_637_);
lean_dec(v_snd_635_);
lean_del_object(v___x_632_);
lean_del_object(v___x_628_);
if (lean_obj_tag(v_fst_630_) == 1)
{
lean_object* v_val_698_; lean_object* v___x_699_; 
v_val_698_ = lean_ctor_get(v_fst_630_, 0);
lean_inc(v_val_698_);
lean_dec_ref_known(v_fst_630_, 1);
v___x_699_ = lean_array_push(v_fst_626_, v_val_698_);
v_entries_679_ = v___x_699_;
v_currentCtx_680_ = v___x_674_;
goto v___jp_678_;
}
else
{
v_entries_679_ = v_fst_626_;
v_currentCtx_680_ = v_fst_630_;
goto v___jp_678_;
}
}
v___jp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_681_ = lean_box(v_cont_677_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_fst_634_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v_currentCtx_680_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v_entries_679_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v_a_620_ = v___x_684_;
goto v___jp_619_;
}
}
else
{
lean_object* v_entries_701_; 
lean_del_object(v___x_637_);
lean_del_object(v___x_632_);
lean_del_object(v___x_628_);
if (lean_obj_tag(v_fst_630_) == 1)
{
lean_object* v_val_706_; lean_object* v___x_707_; 
v_val_706_ = lean_ctor_get(v_fst_630_, 0);
lean_inc(v_val_706_);
lean_dec_ref_known(v_fst_630_, 1);
v___x_707_ = lean_array_push(v_fst_626_, v_val_706_);
v_entries_701_ = v___x_707_;
goto v___jp_700_;
}
else
{
lean_dec(v_fst_630_);
v_entries_701_ = v_fst_626_;
goto v___jp_700_;
}
v___jp_700_:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_702_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__3));
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_fst_634_);
lean_ctor_set(v___x_703_, 1, v_snd_635_);
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_702_);
lean_ctor_set(v___x_704_, 1, v___x_703_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v_entries_701_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v_a_620_ = v___x_705_;
goto v___jp_619_;
}
}
v___jp_643_:
{
if (lean_obj_tag(v_fst_630_) == 0)
{
lean_object* v___x_644_; lean_object* v___x_646_; 
lean_inc(v___x_642_);
v___x_644_ = lean_array_push(v_fst_634_, v___x_642_);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 0, v___x_644_);
v___x_646_ = v___x_637_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_snd_635_);
v___x_646_ = v_reuseFailAlloc_653_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_648_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_646_);
v___x_648_ = v___x_632_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_fst_630_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v___x_646_);
v___x_648_ = v_reuseFailAlloc_652_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_650_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_648_);
v___x_650_ = v___x_628_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_fst_626_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
v_a_620_ = v___x_650_;
goto v___jp_619_;
}
}
}
}
else
{
lean_object* v_val_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_671_; 
v_val_654_ = lean_ctor_get(v_fst_630_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v_fst_630_);
if (v_isSharedCheck_671_ == 0)
{
v___x_656_ = v_fst_630_;
v_isShared_657_ = v_isSharedCheck_671_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_val_654_);
lean_dec(v_fst_630_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_671_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v___x_660_; 
lean_inc(v___x_642_);
v___x_658_ = lean_array_push(v_val_654_, v___x_642_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_658_);
v___x_660_ = v___x_656_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_670_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
lean_object* v___x_662_; 
if (v_isShared_638_ == 0)
{
v___x_662_ = v___x_637_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_fst_634_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_snd_635_);
v___x_662_ = v_reuseFailAlloc_669_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_664_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_662_);
lean_ctor_set(v___x_632_, 0, v___x_660_);
v___x_664_ = v___x_632_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_660_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v___x_662_);
v___x_664_ = v_reuseFailAlloc_668_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_666_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_664_);
v___x_666_ = v___x_628_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_fst_626_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v___x_664_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
v_a_620_ = v___x_666_;
goto v___jp_619_;
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
uint8_t v_skipNext_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
lean_dec(v_snd_635_);
v_skipNext_708_ = lean_nat_dec_eq(v___x_613_, v___x_639_);
v___x_709_ = lean_box(v_skipNext_708_);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 1, v___x_709_);
v___x_711_ = v___x_637_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_fst_634_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_709_);
v___x_711_ = v_reuseFailAlloc_718_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v___x_713_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_711_);
v___x_713_ = v___x_632_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_fst_630_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v___x_711_);
v___x_713_ = v_reuseFailAlloc_717_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_715_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_713_);
v___x_715_ = v___x_628_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_fst_626_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v___x_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
v_a_620_ = v___x_715_;
goto v___jp_619_;
}
}
}
}
}
}
}
}
v___jp_619_:
{
lean_object* v___x_621_; 
v___x_621_ = lean_nat_add(v_i_616_, v_step_618_);
lean_dec(v_i_616_);
v_b_615_ = v_a_620_;
v_i_616_ = v___x_621_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___boxed(lean_object* v___x_724_, lean_object* v___x_725_, lean_object* v_range_726_, lean_object* v_b_727_, lean_object* v_i_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(v___x_724_, v___x_725_, v_range_726_, v_b_727_, v_i_728_);
lean_dec_ref(v_range_726_);
lean_dec(v___x_725_);
lean_dec_ref(v___x_724_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(lean_object* v___x_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_snd_732_; lean_object* v_fst_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_790_; 
v_snd_732_ = lean_ctor_get(v_a_731_, 1);
v_fst_733_ = lean_ctor_get(v_a_731_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v_a_731_);
if (v_isSharedCheck_790_ == 0)
{
v___x_735_ = v_a_731_;
v_isShared_736_ = v_isSharedCheck_790_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_snd_732_);
lean_inc(v_fst_733_);
lean_dec(v_a_731_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_790_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_fst_737_; lean_object* v_snd_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_789_; 
v_fst_737_ = lean_ctor_get(v_snd_732_, 0);
v_snd_738_ = lean_ctor_get(v_snd_732_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_snd_732_);
if (v_isSharedCheck_789_ == 0)
{
v___x_740_ = v_snd_732_;
v_isShared_741_ = v_isSharedCheck_789_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_snd_738_);
lean_inc(v_fst_737_);
lean_dec(v_snd_732_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_789_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint8_t v___x_749_; 
v___x_749_ = lean_unbox(v_snd_738_);
if (v___x_749_ == 0)
{
goto v___jp_742_;
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_750_ = lean_unsigned_to_nat(0u);
v___x_751_ = lean_array_get_size(v_fst_733_);
v___x_752_ = lean_nat_dec_eq(v___x_751_, v___x_750_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_del_object(v___x_740_);
lean_del_object(v___x_735_);
v___x_753_ = l_Lean_instInhabitedNamePart_default;
v___x_754_ = lean_unsigned_to_nat(1u);
v___x_755_ = lean_nat_sub(v___x_751_, v___x_754_);
v___x_756_ = lean_array_get_borrowed(v___x_753_, v_fst_733_, v___x_755_);
lean_dec(v___x_755_);
lean_inc(v___x_756_);
v___x_757_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(v___x_756_);
if (lean_obj_tag(v___x_757_) == 0)
{
uint8_t v_skipNext_758_; 
v_skipNext_758_ = lean_nat_dec_eq(v___x_730_, v___x_750_);
if (lean_obj_tag(v___x_756_) == 1)
{
lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(2u);
v___x_760_ = lean_nat_dec_le(v___x_759_, v___x_751_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
lean_dec(v_snd_738_);
v___x_761_ = lean_box(v___x_760_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v_fst_737_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v_fst_733_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v_a_731_ = v___x_763_;
goto _start;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = lean_nat_sub(v___x_751_, v___x_759_);
v___x_766_ = lean_array_get_borrowed(v___x_753_, v_fst_733_, v___x_765_);
lean_dec(v___x_765_);
lean_inc(v___x_766_);
v___x_767_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(v___x_766_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
lean_dec(v_snd_738_);
v___x_768_ = lean_box(v_skipNext_758_);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v_fst_737_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v_fst_733_);
lean_ctor_set(v___x_770_, 1, v___x_769_);
v_a_731_ = v___x_770_;
goto _start;
}
else
{
lean_object* v_val_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_val_772_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_val_772_);
lean_dec_ref_known(v___x_767_, 1);
v___x_773_ = lean_array_push(v_fst_737_, v_val_772_);
v___x_774_ = lean_array_pop(v_fst_733_);
v___x_775_ = lean_array_pop(v___x_774_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_773_);
lean_ctor_set(v___x_776_, 1, v_snd_738_);
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_775_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v_a_731_ = v___x_777_;
goto _start;
}
}
}
else
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
lean_dec(v_snd_738_);
v___x_779_ = lean_box(v_skipNext_758_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v_fst_737_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v_fst_733_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v_a_731_ = v___x_781_;
goto _start;
}
}
else
{
lean_object* v_val_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_val_783_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_val_783_);
lean_dec_ref_known(v___x_757_, 1);
v___x_784_ = lean_array_push(v_fst_737_, v_val_783_);
v___x_785_ = lean_array_pop(v_fst_733_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v_snd_738_);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v_a_731_ = v___x_787_;
goto _start;
}
}
else
{
goto v___jp_742_;
}
}
v___jp_742_:
{
lean_object* v___x_744_; 
if (v_isShared_741_ == 0)
{
v___x_744_ = v___x_740_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_fst_737_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_snd_738_);
v___x_744_ = v_reuseFailAlloc_748_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_746_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 1, v___x_744_);
v___x_746_ = v___x_735_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_fst_733_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg___boxed(lean_object* v___x_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(v___x_791_, v_a_792_);
lean_dec(v___x_791_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(lean_object* v_as_799_, size_t v_sz_800_, size_t v_i_801_, lean_object* v_b_802_){
_start:
{
lean_object* v_a_804_; uint8_t v___x_808_; 
v___x_808_ = lean_usize_dec_lt(v_i_801_, v_sz_800_);
if (v___x_808_ == 0)
{
return v_b_802_;
}
else
{
lean_object* v_a_809_; lean_object* v___y_811_; lean_object* v_name_830_; lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v_a_809_ = lean_array_uget_borrowed(v_as_799_, v_i_801_);
v_name_830_ = lean_ctor_get(v_a_809_, 0);
v___x_831_ = lean_string_utf8_byte_size(v_name_830_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = lean_nat_dec_eq(v___x_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_inc_ref(v_name_830_);
v___y_811_ = v_name_830_;
goto v___jp_810_;
}
else
{
lean_object* v___x_834_; 
v___x_834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4));
v___y_811_ = v___x_834_;
goto v___jp_810_;
}
v___jp_810_:
{
lean_object* v_flags_812_; lean_object* v___x_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v_flags_812_ = lean_ctor_get(v_a_809_, 1);
v___x_813_ = lean_array_get_size(v_flags_812_);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = lean_nat_dec_eq(v___x_813_, v___x_814_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_816_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0));
v___x_817_ = lean_string_append(v_b_802_, v___x_816_);
v___x_818_ = lean_string_append(v___x_817_, v___y_811_);
lean_dec_ref(v___y_811_);
v___x_819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1));
v___x_820_ = lean_string_append(v___x_818_, v___x_819_);
v___x_821_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2));
lean_inc_ref(v_flags_812_);
v___x_822_ = lean_array_to_list(v_flags_812_);
v___x_823_ = l_String_intercalate(v___x_821_, v___x_822_);
v___x_824_ = lean_string_append(v___x_820_, v___x_823_);
lean_dec_ref(v___x_823_);
v___x_825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3));
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
v_a_804_ = v___x_826_;
goto v___jp_803_;
}
else
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0));
v___x_828_ = lean_string_append(v_b_802_, v___x_827_);
v___x_829_ = lean_string_append(v___x_828_, v___y_811_);
lean_dec_ref(v___y_811_);
v_a_804_ = v___x_829_;
goto v___jp_803_;
}
}
}
v___jp_803_:
{
size_t v___x_805_; size_t v___x_806_; 
v___x_805_ = ((size_t)1ULL);
v___x_806_ = lean_usize_add(v_i_801_, v___x_805_);
v_i_801_ = v___x_806_;
v_b_802_ = v_a_804_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___boxed(lean_object* v_as_835_, lean_object* v_sz_836_, lean_object* v_i_837_, lean_object* v_b_838_){
_start:
{
size_t v_sz_boxed_839_; size_t v_i_boxed_840_; lean_object* v_res_841_; 
v_sz_boxed_839_ = lean_unbox_usize(v_sz_836_);
lean_dec(v_sz_836_);
v_i_boxed_840_ = lean_unbox_usize(v_i_837_);
lean_dec(v_i_837_);
v_res_841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(v_as_835_, v_sz_boxed_839_, v_i_boxed_840_, v_b_838_);
lean_dec_ref(v_as_835_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(lean_object* v_components_850_){
_start:
{
lean_object* v___y_852_; lean_object* v_result_853_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_874_; lean_object* v_parts_875_; lean_object* v_specEntries_876_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v_entries_886_; uint8_t v_skipNext_891_; 
v___x_857_ = lean_array_get_size(v_components_850_);
v___x_858_ = lean_unsigned_to_nat(0u);
v_skipNext_891_ = lean_nat_dec_eq(v___x_857_, v___x_858_);
if (v_skipNext_891_ == 0)
{
lean_object* v___x_892_; lean_object* v_fst_893_; lean_object* v_snd_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_949_; 
v___x_892_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(v_components_850_, v___x_858_, v___x_857_);
v_fst_893_ = lean_ctor_get(v___x_892_, 0);
v_snd_894_ = lean_ctor_get(v___x_892_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_949_ == 0)
{
v___x_896_ = v___x_892_;
v_isShared_897_ = v_isSharedCheck_949_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_snd_894_);
lean_inc(v_fst_893_);
lean_dec(v___x_892_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_949_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v_parts_898_; lean_object* v_flags_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v_parts_898_ = l_Array_extract___redArg(v_components_850_, v_fst_893_, v___x_857_);
v_flags_899_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1));
v___x_900_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2));
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 1, v___x_900_);
lean_ctor_set(v___x_896_, 0, v_parts_898_);
v___x_902_ = v___x_896_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_parts_898_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v___x_900_);
v___x_902_ = v_reuseFailAlloc_948_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_903_; lean_object* v_fst_904_; lean_object* v_snd_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_947_; 
v___x_903_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(v___x_857_, v___x_902_);
v_fst_904_ = lean_ctor_get(v___x_903_, 0);
v_snd_905_ = lean_ctor_get(v___x_903_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_947_ == 0)
{
v___x_907_ = v___x_903_;
v_isShared_908_ = v_isSharedCheck_947_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_snd_905_);
lean_inc(v_fst_904_);
lean_dec(v___x_903_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_947_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v_flags_910_; uint8_t v___x_942_; 
v___x_942_ = lean_unbox(v_snd_894_);
lean_dec(v_snd_894_);
if (v___x_942_ == 0)
{
lean_object* v_fst_943_; 
v_fst_943_ = lean_ctor_get(v_snd_905_, 0);
lean_inc(v_fst_943_);
lean_dec(v_snd_905_);
v_flags_910_ = v_fst_943_;
goto v___jp_909_;
}
else
{
lean_object* v_fst_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v_fst_944_ = lean_ctor_get(v_snd_905_, 0);
lean_inc(v_fst_944_);
lean_dec(v_snd_905_);
v___x_945_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3));
v___x_946_ = lean_array_push(v_fst_944_, v___x_945_);
v_flags_910_ = v___x_946_;
goto v___jp_909_;
}
v___jp_909_:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_911_ = lean_array_get_size(v_fst_904_);
v___x_912_ = lean_unsigned_to_nat(1u);
v___x_913_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_913_, 0, v___x_858_);
lean_ctor_set(v___x_913_, 1, v___x_911_);
lean_ctor_set(v___x_913_, 2, v___x_912_);
v___x_914_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(v___x_913_, v_fst_904_, v___x_858_);
lean_dec(v_fst_904_);
lean_dec_ref_known(v___x_913_, 3);
v___x_915_ = lean_box(0);
v___x_916_ = lean_array_get_size(v___x_914_);
v___x_917_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_917_, 0, v___x_858_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
lean_ctor_set(v___x_917_, 2, v___x_912_);
v___x_918_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(v___x_914_, v___x_917_, v___x_915_, v___x_858_);
lean_dec_ref_known(v___x_917_, 3);
if (lean_obj_tag(v___x_918_) == 1)
{
lean_object* v_val_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v_val_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc_n(v_val_919_, 2);
lean_dec_ref_known(v___x_918_, 1);
v___x_920_ = l_Array_extract___redArg(v___x_914_, v___x_858_, v_val_919_);
v___x_921_ = l_Array_extract___redArg(v___x_914_, v_val_919_, v___x_916_);
lean_dec_ref(v___x_914_);
v___x_922_ = lean_array_get_size(v___x_921_);
v___x_923_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_923_, 0, v___x_858_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
lean_ctor_set(v___x_923_, 2, v___x_912_);
v___x_924_ = lean_box(v_skipNext_891_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 1, v___x_924_);
lean_ctor_set(v___x_907_, 0, v_flags_899_);
v___x_926_ = v___x_907_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_flags_899_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_941_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v_snd_930_; lean_object* v_snd_931_; lean_object* v_fst_932_; 
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_915_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_928_, 0, v_flags_899_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(v___x_921_, v___x_857_, v___x_923_, v___x_928_, v___x_858_);
lean_dec_ref_known(v___x_923_, 3);
lean_dec_ref(v___x_921_);
v_snd_930_ = lean_ctor_get(v___x_929_, 1);
lean_inc(v_snd_930_);
v_snd_931_ = lean_ctor_get(v_snd_930_, 1);
lean_inc(v_snd_931_);
v_fst_932_ = lean_ctor_get(v_snd_930_, 0);
lean_inc(v_fst_932_);
lean_dec(v_snd_930_);
if (lean_obj_tag(v_fst_932_) == 1)
{
lean_object* v_fst_933_; lean_object* v_fst_934_; lean_object* v_val_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v_fst_933_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_fst_933_);
lean_dec_ref(v___x_929_);
v_fst_934_ = lean_ctor_get(v_snd_931_, 0);
lean_inc(v_fst_934_);
lean_dec(v_snd_931_);
v_val_935_ = lean_ctor_get(v_fst_932_, 0);
lean_inc(v_val_935_);
lean_dec_ref_known(v_fst_932_, 1);
v___x_936_ = lean_array_get_size(v_val_935_);
v___x_937_ = lean_nat_dec_eq(v___x_936_, v___x_858_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
v___x_938_ = lean_array_push(v_fst_933_, v_val_935_);
v___y_882_ = v_fst_934_;
v___y_883_ = v_flags_899_;
v___y_884_ = v_flags_910_;
v___y_885_ = v___x_920_;
v_entries_886_ = v___x_938_;
goto v___jp_881_;
}
else
{
lean_dec(v_val_935_);
v___y_882_ = v_fst_934_;
v___y_883_ = v_flags_899_;
v___y_884_ = v_flags_910_;
v___y_885_ = v___x_920_;
v_entries_886_ = v_fst_933_;
goto v___jp_881_;
}
}
else
{
lean_object* v_fst_939_; lean_object* v_fst_940_; 
lean_dec(v_fst_932_);
v_fst_939_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_fst_939_);
lean_dec_ref(v___x_929_);
v_fst_940_ = lean_ctor_get(v_snd_931_, 0);
lean_inc(v_fst_940_);
lean_dec(v_snd_931_);
v___y_882_ = v_fst_940_;
v___y_883_ = v_flags_899_;
v___y_884_ = v_flags_910_;
v___y_885_ = v___x_920_;
v_entries_886_ = v_fst_939_;
goto v___jp_881_;
}
}
}
else
{
lean_dec(v___x_918_);
lean_del_object(v___x_907_);
v___y_874_ = v_flags_910_;
v_parts_875_ = v___x_914_;
v_specEntries_876_ = v_flags_899_;
goto v___jp_873_;
}
}
}
}
}
}
else
{
lean_object* v___x_950_; 
v___x_950_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
return v___x_950_;
}
v___jp_851_:
{
size_t v_sz_854_; size_t v___x_855_; lean_object* v___x_856_; 
v_sz_854_ = lean_array_size(v___y_852_);
v___x_855_ = ((size_t)0ULL);
v___x_856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(v___y_852_, v_sz_854_, v___x_855_, v_result_853_);
lean_dec_ref(v___y_852_);
return v___x_856_;
}
v___jp_859_:
{
lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_863_ = lean_array_get_size(v___y_860_);
v___x_864_ = lean_nat_dec_eq(v___x_863_, v___x_858_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_865_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0));
v___x_866_ = lean_string_append(v___y_862_, v___x_865_);
v___x_867_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2));
v___x_868_ = lean_array_to_list(v___y_860_);
v___x_869_ = l_String_intercalate(v___x_867_, v___x_868_);
v___x_870_ = lean_string_append(v___x_866_, v___x_869_);
lean_dec_ref(v___x_869_);
v___x_871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3));
v___x_872_ = lean_string_append(v___x_870_, v___x_871_);
v___y_852_ = v___y_861_;
v_result_853_ = v___x_872_;
goto v___jp_851_;
}
else
{
lean_dec_ref(v___y_860_);
v___y_852_ = v___y_861_;
v_result_853_ = v___y_862_;
goto v___jp_851_;
}
}
v___jp_873_:
{
lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_877_ = lean_array_get_size(v_parts_875_);
v___x_878_ = lean_nat_dec_eq(v___x_877_, v___x_858_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
v___x_879_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(v_parts_875_);
lean_dec_ref(v_parts_875_);
v___y_860_ = v___y_874_;
v___y_861_ = v_specEntries_876_;
v___y_862_ = v___x_879_;
goto v___jp_859_;
}
else
{
lean_object* v___x_880_; 
lean_dec_ref(v_parts_875_);
v___x_880_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4));
v___y_860_ = v___y_874_;
v___y_861_ = v_specEntries_876_;
v___y_862_ = v___x_880_;
goto v___jp_859_;
}
}
v___jp_881_:
{
size_t v_sz_887_; size_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_sz_887_ = lean_array_size(v_entries_886_);
v___x_888_ = ((size_t)0ULL);
v___x_889_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(v___x_857_, v_entries_886_, v_sz_887_, v___x_888_, v___y_883_);
lean_dec_ref(v_entries_886_);
v___x_890_ = l_Array_append___redArg(v___y_885_, v___y_882_);
lean_dec(v___y_882_);
v___y_874_ = v___y_884_;
v_parts_875_ = v___x_890_;
v_specEntries_876_ = v___x_889_;
goto v___jp_873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___boxed(lean_object* v_components_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(v_components_951_);
lean_dec_ref(v_components_951_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0(lean_object* v___x_953_, lean_object* v_inst_954_, lean_object* v_a_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(v___x_953_, v_a_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___boxed(lean_object* v___x_957_, lean_object* v_inst_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0(v___x_957_, v_inst_958_, v_a_959_);
lean_dec(v___x_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2(lean_object* v_range_961_, lean_object* v_b_962_, lean_object* v_i_963_, lean_object* v_hs_964_, lean_object* v_hl_965_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(v_range_961_, v_b_962_, v_i_963_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___boxed(lean_object* v_range_967_, lean_object* v_b_968_, lean_object* v_i_969_, lean_object* v_hs_970_, lean_object* v_hl_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2(v_range_967_, v_b_968_, v_i_969_, v_hs_970_, v_hl_971_);
lean_dec_ref(v_b_968_);
lean_dec_ref(v_range_967_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3(lean_object* v___x_973_, lean_object* v_range_974_, lean_object* v_b_975_, lean_object* v_i_976_, lean_object* v_hs_977_, lean_object* v_hl_978_){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(v___x_973_, v_range_974_, v_b_975_, v_i_976_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___boxed(lean_object* v___x_980_, lean_object* v_range_981_, lean_object* v_b_982_, lean_object* v_i_983_, lean_object* v_hs_984_, lean_object* v_hl_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3(v___x_980_, v_range_981_, v_b_982_, v_i_983_, v_hs_984_, v_hl_985_);
lean_dec(v_b_982_);
lean_dec_ref(v_range_981_);
lean_dec_ref(v___x_980_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4(lean_object* v___x_987_, lean_object* v___x_988_, lean_object* v_range_989_, lean_object* v_b_990_, lean_object* v_i_991_, lean_object* v_hs_992_, lean_object* v_hl_993_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(v___x_987_, v___x_988_, v_range_989_, v_b_990_, v_i_991_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___boxed(lean_object* v___x_995_, lean_object* v___x_996_, lean_object* v_range_997_, lean_object* v_b_998_, lean_object* v_i_999_, lean_object* v_hs_1000_, lean_object* v_hl_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4(v___x_995_, v___x_996_, v_range_997_, v_b_998_, v_i_999_, v_hs_1000_, v_hl_1001_);
lean_dec_ref(v_range_997_);
lean_dec(v___x_996_);
lean_dec_ref(v___x_995_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(lean_object* v_body_1003_){
_start:
{
lean_object* v_name_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v_name_1004_ = l_Lean_Name_demangle(v_body_1003_);
v___x_1005_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(v_name_1004_);
lean_dec(v_name_1004_);
v___x_1006_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(v___x_1005_);
lean_dec_ref(v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody___boxed(lean_object* v_body_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_body_1007_);
lean_dec_ref(v_body_1007_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(lean_object* v_s_1012_, lean_object* v___x_1013_, lean_object* v_a_1014_, lean_object* v_b_1015_){
_start:
{
uint8_t v_decide_1016_; 
v_decide_1016_ = lean_nat_dec_eq(v_a_1014_, v___x_1013_);
if (v_decide_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint32_t v___x_1020_; uint32_t v___x_1021_; uint8_t v___x_1022_; 
lean_dec_ref(v_b_1015_);
v___x_1017_ = lean_box(0);
v___x_1018_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0));
v___x_1019_ = lean_string_utf8_next_fast(v_s_1012_, v_a_1014_);
v___x_1020_ = lean_string_utf8_get_fast(v_s_1012_, v_a_1014_);
v___x_1021_ = 95;
v___x_1022_ = lean_uint32_dec_eq(v___x_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
lean_dec(v_a_1014_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
else
{
lean_object* v___x_1024_; uint8_t v_decide_1025_; 
v___x_1024_ = lean_unsigned_to_nat(0u);
v_decide_1025_ = lean_nat_dec_eq(v_a_1014_, v___x_1024_);
if (v_decide_1025_ == 0)
{
if (v___x_1022_ == 0)
{
lean_dec(v_a_1014_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
else
{
lean_object* v___x_1027_; uint8_t v_decide_1028_; 
v___x_1027_ = lean_string_utf8_byte_size(v_s_1012_);
v_decide_1028_ = lean_nat_dec_eq(v___x_1019_, v___x_1027_);
if (v_decide_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_string_utf8_extract_fast(v_s_1012_, v___x_1024_, v_a_1014_);
lean_dec(v_a_1014_);
v___x_1030_ = l_Lean_Name_demangle_x3f(v___x_1029_);
if (lean_obj_tag(v___x_1030_) == 1)
{
lean_object* v_val_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1053_; 
v_val_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1053_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_val_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1053_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
if (lean_obj_tag(v_val_1031_) == 1)
{
lean_object* v_pre_1035_; 
v_pre_1035_ = lean_ctor_get(v_val_1031_, 0);
lean_inc(v_pre_1035_);
lean_dec_ref_known(v_val_1031_, 2);
if (lean_obj_tag(v_pre_1035_) == 0)
{
lean_object* v___x_1036_; lean_object* v___y_1038_; lean_object* v___x_1046_; 
v___x_1036_ = lean_string_utf8_extract_fast(v_s_1012_, v___x_1019_, v___x_1027_);
v___x_1046_ = l_Lean_Name_demangle_x3f(v___x_1036_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_dec_ref(v___x_1036_);
lean_del_object(v___x_1033_);
lean_dec_ref(v___x_1029_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
else
{
lean_object* v___x_1048_; 
lean_dec_ref_known(v___x_1046_, 1);
v___x_1048_ = l_Lean_Name_demangle(v___x_1029_);
if (lean_obj_tag(v___x_1048_) == 1)
{
lean_object* v_pre_1049_; 
v_pre_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_pre_1049_);
if (lean_obj_tag(v_pre_1049_) == 0)
{
lean_object* v_str_1050_; 
lean_dec_ref(v___x_1029_);
v_str_1050_ = lean_ctor_get(v___x_1048_, 1);
lean_inc_ref(v_str_1050_);
lean_dec_ref_known(v___x_1048_, 2);
v___y_1038_ = v_str_1050_;
goto v___jp_1037_;
}
else
{
lean_dec(v_pre_1049_);
lean_dec_ref_known(v___x_1048_, 2);
v___y_1038_ = v___x_1029_;
goto v___jp_1037_;
}
}
else
{
lean_dec(v___x_1048_);
v___y_1038_ = v___x_1029_;
goto v___jp_1037_;
}
}
v___jp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1039_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v___x_1036_);
lean_dec_ref(v___x_1036_);
v___x_1040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
lean_ctor_set(v___x_1040_, 1, v___y_1038_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1040_);
v___x_1042_ = v___x_1033_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
lean_ctor_set(v___x_1043_, 1, v___x_1017_);
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
return v___x_1044_;
}
}
}
else
{
lean_dec(v_pre_1035_);
lean_del_object(v___x_1033_);
lean_dec_ref(v___x_1029_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
}
else
{
lean_del_object(v___x_1033_);
lean_dec(v_val_1031_);
lean_dec_ref(v___x_1029_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1030_);
lean_dec_ref(v___x_1029_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
}
else
{
lean_dec(v_a_1014_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
}
}
else
{
lean_dec(v_a_1014_);
v_a_1014_ = v___x_1019_;
v_b_1015_ = v___x_1018_;
goto _start;
}
}
}
else
{
lean_object* v___x_1057_; 
lean_dec(v_a_1014_);
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_b_1015_);
return v___x_1057_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___boxed(lean_object* v_s_1058_, lean_object* v___x_1059_, lean_object* v_a_1060_, lean_object* v_b_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(v_s_1058_, v___x_1059_, v_a_1060_, v_b_1061_);
lean_dec(v___x_1059_);
lean_dec_ref(v_s_1058_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(lean_object* v_s_1063_){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1064_ = lean_unsigned_to_nat(0u);
v___x_1065_ = lean_string_utf8_byte_size(v_s_1063_);
v___x_1066_ = lean_box(0);
v___x_1067_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0));
v___x_1068_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(v_s_1063_, v___x_1065_, v___x_1064_, v___x_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
return v___x_1066_;
}
else
{
lean_object* v_val_1069_; lean_object* v_fst_1070_; 
v_val_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_val_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v_fst_1070_ = lean_ctor_get(v_val_1069_, 0);
lean_inc(v_fst_1070_);
lean_dec(v_val_1069_);
if (lean_obj_tag(v_fst_1070_) == 0)
{
return v___x_1066_;
}
else
{
return v_fst_1070_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg___boxed(lean_object* v_s_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_s_1071_);
lean_dec_ref(v_s_1071_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0(lean_object* v_s_1073_, lean_object* v___x_1074_, lean_object* v___x_1075_, lean_object* v_inst_1076_, lean_object* v_R_1077_, lean_object* v_a_1078_, lean_object* v_b_1079_, lean_object* v_c_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(v_s_1073_, v___x_1074_, v_a_1078_, v_b_1079_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___boxed(lean_object* v_s_1082_, lean_object* v___x_1083_, lean_object* v___x_1084_, lean_object* v_inst_1085_, lean_object* v_R_1086_, lean_object* v_a_1087_, lean_object* v_b_1088_, lean_object* v_c_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0(v_s_1082_, v___x_1083_, v___x_1084_, v_inst_1085_, v_R_1086_, v_a_1087_, v_b_1088_, v_c_1089_);
lean_dec_ref(v___x_1084_);
lean_dec(v___x_1083_);
lean_dec_ref(v_s_1082_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(lean_object* v_s_1091_, lean_object* v___x_1092_, lean_object* v___x_1093_, lean_object* v_a_1094_, lean_object* v_b_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_box(0);
switch(lean_obj_tag(v_a_1094_))
{
case 0:
{
lean_object* v_pos_1097_; lean_object* v___x_1098_; 
v_pos_1097_ = lean_ctor_get(v_a_1094_, 0);
lean_inc(v_pos_1097_);
lean_dec_ref_known(v_a_1094_, 1);
v___x_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1098_, 0, v_pos_1097_);
return v___x_1098_;
}
case 1:
{
lean_object* v_pos_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1108_; 
v_pos_1099_ = lean_ctor_get(v_a_1094_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v_a_1094_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1101_ = v_a_1094_;
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_pos_1099_);
lean_dec(v_a_1094_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1103_ = lean_string_utf8_next_fast(v_s_1091_, v_pos_1099_);
lean_dec(v_pos_1099_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set_tag(v___x_1101_, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1103_);
v___x_1105_ = v___x_1101_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
v_a_1094_ = v___x_1105_;
v_b_1095_ = v___x_1096_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_1109_; lean_object* v_table_1110_; lean_object* v_stackPos_1111_; lean_object* v_needlePos_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1165_; 
v_needle_1109_ = lean_ctor_get(v_a_1094_, 0);
v_table_1110_ = lean_ctor_get(v_a_1094_, 1);
v_stackPos_1111_ = lean_ctor_get(v_a_1094_, 2);
v_needlePos_1112_ = lean_ctor_get(v_a_1094_, 3);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_a_1094_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1114_ = v_a_1094_;
v_isShared_1115_ = v_isSharedCheck_1165_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_needlePos_1112_);
lean_inc(v_stackPos_1111_);
lean_inc(v_table_1110_);
lean_inc(v_needle_1109_);
lean_dec(v_a_1094_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1165_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v_str_1116_; lean_object* v_startInclusive_1117_; lean_object* v_endExclusive_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v_str_1116_ = lean_ctor_get(v_needle_1109_, 0);
v_startInclusive_1117_ = lean_ctor_get(v_needle_1109_, 1);
v_endExclusive_1118_ = lean_ctor_get(v_needle_1109_, 2);
v___x_1119_ = lean_nat_sub(v_stackPos_1111_, v_needlePos_1112_);
v___x_1120_ = lean_nat_sub(v_endExclusive_1118_, v_startInclusive_1117_);
v___x_1121_ = lean_nat_add(v___x_1119_, v___x_1120_);
v___x_1122_ = lean_nat_dec_le(v___x_1121_, v___x_1093_);
lean_dec(v___x_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
lean_dec(v___x_1120_);
lean_del_object(v___x_1114_);
lean_dec(v_needlePos_1112_);
lean_dec(v_stackPos_1111_);
lean_dec_ref(v_table_1110_);
lean_dec_ref(v_needle_1109_);
v___x_1123_ = lean_unsigned_to_nat(1u);
v___x_1124_ = lean_nat_add(v___x_1119_, v___x_1123_);
lean_dec(v___x_1119_);
v___x_1125_ = lean_nat_dec_le(v___x_1124_, v___x_1093_);
lean_dec(v___x_1124_);
if (v___x_1125_ == 0)
{
lean_inc(v_b_1095_);
return v_b_1095_;
}
else
{
lean_object* v___x_1126_; 
v___x_1126_ = lean_box(3);
v_a_1094_ = v___x_1126_;
v_b_1095_ = v___x_1096_;
goto _start;
}
}
else
{
uint8_t v_stackByte_1128_; lean_object* v___x_1129_; uint8_t v_patByte_1130_; uint8_t v___x_1131_; 
lean_dec(v___x_1119_);
lean_inc(v_stackPos_1111_);
v_stackByte_1128_ = lean_string_get_byte_fast(v_s_1091_, v_stackPos_1111_);
v___x_1129_ = lean_nat_add(v_startInclusive_1117_, v_needlePos_1112_);
v_patByte_1130_ = lean_string_get_byte_fast(v_str_1116_, v___x_1129_);
v___x_1131_ = lean_uint8_dec_eq(v_stackByte_1128_, v_patByte_1130_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; uint8_t v_decide_1133_; 
lean_dec(v___x_1120_);
v___x_1132_ = lean_unsigned_to_nat(0u);
v_decide_1133_ = lean_nat_dec_eq(v_needlePos_1112_, v___x_1132_);
if (v_decide_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v_newNeedlePos_1136_; uint8_t v___x_1137_; 
v___x_1134_ = lean_unsigned_to_nat(1u);
v___x_1135_ = lean_nat_sub(v_needlePos_1112_, v___x_1134_);
lean_dec(v_needlePos_1112_);
v_newNeedlePos_1136_ = lean_array_fget_borrowed(v_table_1110_, v___x_1135_);
lean_dec(v___x_1135_);
v___x_1137_ = lean_nat_dec_eq(v_newNeedlePos_1136_, v___x_1132_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1139_; 
lean_inc(v_newNeedlePos_1136_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 3, v_newNeedlePos_1136_);
v___x_1139_ = v___x_1114_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_needle_1109_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v_table_1110_);
lean_ctor_set(v_reuseFailAlloc_1141_, 2, v_stackPos_1111_);
lean_ctor_set(v_reuseFailAlloc_1141_, 3, v_newNeedlePos_1136_);
v___x_1139_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
v_a_1094_ = v___x_1139_;
v_b_1095_ = v___x_1096_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_1142_; lean_object* v___x_1144_; 
v_nextStackPos_1142_ = l_String_Slice_posGE___redArg(v___x_1092_, v_stackPos_1111_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 3, v___x_1132_);
lean_ctor_set(v___x_1114_, 2, v_nextStackPos_1142_);
v___x_1144_ = v___x_1114_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_needle_1109_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v_table_1110_);
lean_ctor_set(v_reuseFailAlloc_1146_, 2, v_nextStackPos_1142_);
lean_ctor_set(v_reuseFailAlloc_1146_, 3, v___x_1132_);
v___x_1144_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
v_a_1094_ = v___x_1144_;
v_b_1095_ = v___x_1096_;
goto _start;
}
}
}
else
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v_nextStackPos_1149_; lean_object* v___x_1151_; 
lean_dec(v_needlePos_1112_);
v___x_1147_ = lean_unsigned_to_nat(1u);
v___x_1148_ = lean_nat_add(v_stackPos_1111_, v___x_1147_);
lean_dec(v_stackPos_1111_);
v_nextStackPos_1149_ = l_String_Slice_posGE___redArg(v___x_1092_, v___x_1148_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 3, v___x_1132_);
lean_ctor_set(v___x_1114_, 2, v_nextStackPos_1149_);
v___x_1151_ = v___x_1114_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_needle_1109_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_table_1110_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_nextStackPos_1149_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v___x_1132_);
v___x_1151_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
v_a_1094_ = v___x_1151_;
v_b_1095_ = v___x_1096_;
goto _start;
}
}
}
else
{
lean_object* v___x_1154_; lean_object* v_nextStackPos_1155_; lean_object* v_nextNeedlePos_1156_; uint8_t v_decide_1157_; 
v___x_1154_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1155_ = lean_nat_add(v_stackPos_1111_, v___x_1154_);
lean_dec(v_stackPos_1111_);
v_nextNeedlePos_1156_ = lean_nat_add(v_needlePos_1112_, v___x_1154_);
lean_dec(v_needlePos_1112_);
v_decide_1157_ = lean_nat_dec_eq(v_nextNeedlePos_1156_, v___x_1120_);
lean_dec(v___x_1120_);
if (v_decide_1157_ == 0)
{
lean_object* v___x_1159_; 
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 3, v_nextNeedlePos_1156_);
lean_ctor_set(v___x_1114_, 2, v_nextStackPos_1155_);
v___x_1159_ = v___x_1114_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_needle_1109_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_table_1110_);
lean_ctor_set(v_reuseFailAlloc_1161_, 2, v_nextStackPos_1155_);
lean_ctor_set(v_reuseFailAlloc_1161_, 3, v_nextNeedlePos_1156_);
v___x_1159_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
v_a_1094_ = v___x_1159_;
goto _start;
}
}
else
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
lean_del_object(v___x_1114_);
lean_dec_ref(v_table_1110_);
lean_dec_ref(v_needle_1109_);
v___x_1162_ = lean_nat_sub(v_nextStackPos_1155_, v_nextNeedlePos_1156_);
lean_dec(v_nextNeedlePos_1156_);
lean_dec(v_nextStackPos_1155_);
v___x_1163_ = l_String_Slice_pos_x21(v___x_1092_, v___x_1162_);
lean_dec(v___x_1162_);
v___x_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
}
}
}
default: 
{
lean_inc(v_b_1095_);
return v_b_1095_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg___boxed(lean_object* v_s_1166_, lean_object* v___x_1167_, lean_object* v___x_1168_, lean_object* v_a_1169_, lean_object* v_b_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_s_1166_, v___x_1167_, v___x_1168_, v_a_1169_, v_b_1170_);
lean_dec(v_b_1170_);
lean_dec(v___x_1168_);
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_s_1166_);
return v_res_1171_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0));
v___x_1174_ = lean_string_utf8_byte_size(v___x_1173_);
return v___x_1174_;
}
}
static uint8_t _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; 
v___x_1175_ = lean_unsigned_to_nat(0u);
v___x_1176_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1);
v___x_1177_ = lean_nat_dec_eq(v___x_1176_, v___x_1175_);
return v___x_1177_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1178_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1);
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0));
v___x_1181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
lean_ctor_set(v___x_1181_, 1, v___x_1179_);
lean_ctor_set(v___x_1181_, 2, v___x_1178_);
return v___x_1181_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__4(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3);
v___x_1183_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1182_);
return v___x_1183_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__5(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1184_ = lean_unsigned_to_nat(0u);
v___x_1185_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__4, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__4_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__4);
v___x_1186_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3);
v___x_1187_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___x_1185_);
lean_ctor_set(v___x_1187_, 2, v___x_1184_);
lean_ctor_set(v___x_1187_, 3, v___x_1184_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix(lean_object* v_s_1190_){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___y_1195_; uint8_t v___x_1204_; 
v___x_1191_ = lean_unsigned_to_nat(0u);
v___x_1192_ = lean_string_utf8_byte_size(v_s_1190_);
lean_inc_ref(v_s_1190_);
v___x_1193_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1193_, 0, v_s_1190_);
lean_ctor_set(v___x_1193_, 1, v___x_1191_);
lean_ctor_set(v___x_1193_, 2, v___x_1192_);
v___x_1204_ = lean_uint8_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; 
v___x_1205_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__5, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__5_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__5);
v___y_1195_ = v___x_1205_;
goto v___jp_1194_;
}
else
{
lean_object* v___x_1206_; 
v___x_1206_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__6));
v___y_1195_ = v___x_1206_;
goto v___jp_1194_;
}
v___jp_1194_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_box(0);
lean_inc(v___y_1195_);
v___x_1197_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_s_1190_, v___x_1193_, v___x_1192_, v___y_1195_, v___x_1196_);
lean_dec_ref_known(v___x_1193_, 3);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v_s_1190_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
return v___x_1199_;
}
else
{
lean_object* v_val_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v_val_1200_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_val_1200_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1201_ = lean_string_utf8_extract_fast(v_s_1190_, v___x_1191_, v_val_1200_);
v___x_1202_ = lean_string_utf8_extract_fast(v_s_1190_, v_val_1200_, v___x_1192_);
lean_dec(v_val_1200_);
lean_dec_ref(v_s_1190_);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1201_);
lean_ctor_set(v___x_1203_, 1, v___x_1202_);
return v___x_1203_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0(lean_object* v_s_1207_, lean_object* v___x_1208_, lean_object* v___x_1209_, lean_object* v_inst_1210_, lean_object* v_R_1211_, lean_object* v_a_1212_, lean_object* v_b_1213_, lean_object* v_c_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_s_1207_, v___x_1208_, v___x_1209_, v_a_1212_, v_b_1213_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___boxed(lean_object* v_s_1216_, lean_object* v___x_1217_, lean_object* v___x_1218_, lean_object* v_inst_1219_, lean_object* v_R_1220_, lean_object* v_a_1221_, lean_object* v_b_1222_, lean_object* v_c_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0(v_s_1216_, v___x_1217_, v___x_1218_, v_inst_1219_, v_R_1220_, v_a_1221_, v_b_1222_, v_c_1223_);
lean_dec(v_b_1222_);
lean_dec(v___x_1218_);
lean_dec_ref(v___x_1217_);
lean_dec_ref(v_s_1216_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore(lean_object* v_s_1236_){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10));
lean_inc_ref(v_s_1236_);
v___x_1353_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1352_);
if (lean_obj_tag(v___x_1353_) == 1)
{
lean_object* v_val_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1367_; 
v_val_1354_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1356_ = v___x_1353_;
v_isShared_1357_ = v_isSharedCheck_1367_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_val_1354_);
lean_dec(v___x_1353_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1367_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; uint8_t v___x_1360_; 
v___x_1358_ = lean_string_utf8_byte_size(v_val_1354_);
v___x_1359_ = lean_unsigned_to_nat(0u);
v___x_1360_ = lean_nat_dec_eq(v___x_1358_, v___x_1359_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1365_; 
lean_dec_ref(v_s_1236_);
v___x_1361_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9));
v___x_1362_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1354_);
lean_dec(v_val_1354_);
v___x_1363_ = lean_string_append(v___x_1361_, v___x_1362_);
lean_dec_ref(v___x_1362_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 0, v___x_1363_);
v___x_1365_ = v___x_1356_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
else
{
lean_del_object(v___x_1356_);
lean_dec(v_val_1354_);
goto v___jp_1330_;
}
}
}
else
{
lean_dec(v___x_1353_);
goto v___jp_1330_;
}
v___jp_1237_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0));
v___x_1239_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1238_);
if (lean_obj_tag(v___x_1239_) == 1)
{
lean_object* v_val_1240_; lean_object* v___x_1241_; 
v_val_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_val_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v___x_1241_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_val_1240_);
lean_dec(v_val_1240_);
if (lean_obj_tag(v___x_1241_) == 1)
{
lean_object* v_val_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1256_; 
v_val_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1256_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_val_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1256_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_fst_1246_; lean_object* v_snd_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
v_fst_1246_ = lean_ctor_get(v_val_1242_, 0);
lean_inc(v_fst_1246_);
v_snd_1247_ = lean_ctor_get(v_val_1242_, 1);
lean_inc(v_snd_1247_);
lean_dec(v_val_1242_);
v___x_1248_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1));
v___x_1249_ = lean_string_append(v_fst_1246_, v___x_1248_);
v___x_1250_ = lean_string_append(v___x_1249_, v_snd_1247_);
lean_dec(v_snd_1247_);
v___x_1251_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2));
v___x_1252_ = lean_string_append(v___x_1250_, v___x_1251_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v___x_1252_);
v___x_1254_ = v___x_1244_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v___x_1257_; 
lean_dec(v___x_1241_);
v___x_1257_ = lean_box(0);
return v___x_1257_;
}
}
else
{
lean_object* v___x_1258_; 
lean_dec(v___x_1239_);
v___x_1258_ = lean_box(0);
return v___x_1258_;
}
}
v___jp_1259_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3));
lean_inc_ref(v_s_1236_);
v___x_1261_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1260_);
if (lean_obj_tag(v___x_1261_) == 1)
{
lean_object* v_val_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1273_; 
v_val_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1273_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_val_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1273_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1266_ = lean_string_utf8_byte_size(v_val_1262_);
v___x_1267_ = lean_unsigned_to_nat(0u);
v___x_1268_ = lean_nat_dec_eq(v___x_1266_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; lean_object* v___x_1271_; 
lean_dec_ref(v_s_1236_);
v___x_1269_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1262_);
lean_dec(v_val_1262_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v___x_1269_);
v___x_1271_ = v___x_1264_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
else
{
lean_del_object(v___x_1264_);
lean_dec(v_val_1262_);
goto v___jp_1237_;
}
}
}
else
{
lean_dec(v___x_1261_);
goto v___jp_1237_;
}
}
v___jp_1274_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4));
lean_inc_ref(v_s_1236_);
v___x_1276_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1275_);
if (lean_obj_tag(v___x_1276_) == 1)
{
lean_object* v_val_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1290_; 
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1279_ = v___x_1276_;
v_isShared_1280_ = v_isSharedCheck_1290_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_val_1277_);
lean_dec(v___x_1276_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1290_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1281_ = lean_string_utf8_byte_size(v_val_1277_);
v___x_1282_ = lean_unsigned_to_nat(0u);
v___x_1283_ = lean_nat_dec_eq(v___x_1281_, v___x_1282_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1288_; 
lean_dec_ref(v_s_1236_);
v___x_1284_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5));
v___x_1285_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1277_);
lean_dec(v_val_1277_);
v___x_1286_ = lean_string_append(v___x_1284_, v___x_1285_);
lean_dec_ref(v___x_1285_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1286_);
v___x_1288_ = v___x_1279_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
else
{
lean_del_object(v___x_1279_);
lean_dec(v_val_1277_);
goto v___jp_1259_;
}
}
}
else
{
lean_dec(v___x_1276_);
goto v___jp_1259_;
}
}
v___jp_1291_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6));
lean_inc_ref(v_s_1236_);
v___x_1293_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1292_);
if (lean_obj_tag(v___x_1293_) == 1)
{
lean_object* v_val_1294_; lean_object* v___x_1295_; 
v_val_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_val_1294_);
lean_dec_ref_known(v___x_1293_, 1);
v___x_1295_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_val_1294_);
lean_dec(v_val_1294_);
if (lean_obj_tag(v___x_1295_) == 1)
{
lean_object* v_val_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1312_; 
lean_dec_ref(v_s_1236_);
v_val_1296_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1298_ = v___x_1295_;
v_isShared_1299_ = v_isSharedCheck_1312_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_val_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1312_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v_fst_1300_; lean_object* v_snd_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1310_; 
v_fst_1300_ = lean_ctor_get(v_val_1296_, 0);
lean_inc(v_fst_1300_);
v_snd_1301_ = lean_ctor_get(v_val_1296_, 1);
lean_inc(v_snd_1301_);
lean_dec(v_val_1296_);
v___x_1302_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5));
v___x_1303_ = lean_string_append(v___x_1302_, v_fst_1300_);
lean_dec(v_fst_1300_);
v___x_1304_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1));
v___x_1305_ = lean_string_append(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_string_append(v___x_1305_, v_snd_1301_);
lean_dec(v_snd_1301_);
v___x_1307_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2));
v___x_1308_ = lean_string_append(v___x_1306_, v___x_1307_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 0, v___x_1308_);
v___x_1310_ = v___x_1298_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
else
{
lean_dec(v___x_1295_);
goto v___jp_1274_;
}
}
else
{
lean_dec(v___x_1293_);
goto v___jp_1274_;
}
}
v___jp_1313_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7));
lean_inc_ref(v_s_1236_);
v___x_1315_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1314_);
if (lean_obj_tag(v___x_1315_) == 1)
{
lean_object* v_val_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1329_; 
v_val_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1329_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_val_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1329_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v___x_1320_ = lean_string_utf8_byte_size(v_val_1316_);
v___x_1321_ = lean_unsigned_to_nat(0u);
v___x_1322_ = lean_nat_dec_eq(v___x_1320_, v___x_1321_);
if (v___x_1322_ == 0)
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1327_; 
lean_dec_ref(v_s_1236_);
v___x_1323_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5));
v___x_1324_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1316_);
lean_dec(v_val_1316_);
v___x_1325_ = lean_string_append(v___x_1323_, v___x_1324_);
lean_dec_ref(v___x_1324_);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v___x_1325_);
v___x_1327_ = v___x_1318_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
else
{
lean_del_object(v___x_1318_);
lean_dec(v_val_1316_);
goto v___jp_1291_;
}
}
}
else
{
lean_dec(v___x_1315_);
goto v___jp_1291_;
}
}
v___jp_1330_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8));
lean_inc_ref(v_s_1236_);
v___x_1332_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1236_, v___x_1331_);
if (lean_obj_tag(v___x_1332_) == 1)
{
lean_object* v_val_1333_; lean_object* v___x_1334_; 
v_val_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_val_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v___x_1334_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_val_1333_);
lean_dec(v_val_1333_);
if (lean_obj_tag(v___x_1334_) == 1)
{
lean_object* v_val_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1351_; 
lean_dec_ref(v_s_1236_);
v_val_1335_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1337_ = v___x_1334_;
v_isShared_1338_ = v_isSharedCheck_1351_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_val_1335_);
lean_dec(v___x_1334_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1351_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v_fst_1339_; lean_object* v_snd_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v_fst_1339_ = lean_ctor_get(v_val_1335_, 0);
lean_inc(v_fst_1339_);
v_snd_1340_ = lean_ctor_get(v_val_1335_, 1);
lean_inc(v_snd_1340_);
lean_dec(v_val_1335_);
v___x_1341_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9));
v___x_1342_ = lean_string_append(v___x_1341_, v_fst_1339_);
lean_dec(v_fst_1339_);
v___x_1343_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1));
v___x_1344_ = lean_string_append(v___x_1342_, v___x_1343_);
v___x_1345_ = lean_string_append(v___x_1344_, v_snd_1340_);
lean_dec(v_snd_1340_);
v___x_1346_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2));
v___x_1347_ = lean_string_append(v___x_1345_, v___x_1346_);
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 0, v___x_1347_);
v___x_1349_ = v___x_1337_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
else
{
lean_dec(v___x_1334_);
goto v___jp_1313_;
}
}
else
{
lean_dec(v___x_1332_);
goto v___jp_1313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleSymbol(lean_object* v_symbol_1377_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = lean_string_utf8_byte_size(v_symbol_1377_);
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = lean_nat_dec_eq(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v_fst_1382_; lean_object* v_snd_1383_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1381_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix(v_symbol_1377_);
v_fst_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc_n(v_fst_1382_, 2);
v_snd_1383_ = lean_ctor_get(v___x_1381_, 1);
lean_inc(v_snd_1383_);
lean_dec_ref(v___x_1381_);
v___x_1408_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__5));
v___x_1409_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_fst_1382_, v___x_1408_);
if (lean_obj_tag(v___x_1409_) == 1)
{
lean_object* v_val_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1430_; 
v_val_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1430_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_val_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1430_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
uint8_t v___x_1414_; 
lean_inc(v_val_1410_);
v___x_1414_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_1410_);
if (v___x_1414_ == 0)
{
lean_del_object(v___x_1412_);
lean_dec(v_val_1410_);
goto v___jp_1384_;
}
else
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v_r_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; 
lean_dec(v_fst_1382_);
v___x_1415_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__6));
v___x_1416_ = lean_string_append(v___x_1415_, v_val_1410_);
lean_dec(v_val_1410_);
v___x_1417_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__7));
v_r_1418_ = lean_string_append(v___x_1416_, v___x_1417_);
v___x_1419_ = lean_string_utf8_byte_size(v_snd_1383_);
v___x_1420_ = lean_nat_dec_eq(v___x_1419_, v___x_1379_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1421_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__1));
v___x_1422_ = lean_string_append(v_r_1418_, v___x_1421_);
v___x_1423_ = lean_string_append(v___x_1422_, v_snd_1383_);
lean_dec(v_snd_1383_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v___x_1423_);
v___x_1425_ = v___x_1412_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
else
{
lean_object* v___x_1428_; 
lean_dec(v_snd_1383_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v_r_1418_);
v___x_1428_ = v___x_1412_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_r_1418_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
else
{
lean_dec(v___x_1409_);
goto v___jp_1384_;
}
v___jp_1384_:
{
lean_object* v___x_1385_; uint8_t v___x_1386_; 
v___x_1385_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__0));
v___x_1386_ = lean_string_dec_eq(v_fst_1382_, v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; 
v___x_1387_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore(v_fst_1382_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_dec(v_snd_1383_);
return v___x_1387_;
}
else
{
lean_object* v_val_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v_val_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_val_1388_);
v___x_1389_ = lean_string_utf8_byte_size(v_snd_1383_);
v___x_1390_ = lean_nat_dec_eq(v___x_1389_, v___x_1379_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1400_; 
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1400_ == 0)
{
lean_object* v_unused_1401_; 
v_unused_1401_ = lean_ctor_get(v___x_1387_, 0);
lean_dec(v_unused_1401_);
v___x_1392_ = v___x_1387_;
v_isShared_1393_ = v_isSharedCheck_1400_;
goto v_resetjp_1391_;
}
else
{
lean_dec(v___x_1387_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1400_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1394_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__1));
v___x_1395_ = lean_string_append(v_val_1388_, v___x_1394_);
v___x_1396_ = lean_string_append(v___x_1395_, v_snd_1383_);
lean_dec(v_snd_1383_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1396_);
v___x_1398_ = v___x_1392_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
else
{
lean_dec(v_val_1388_);
lean_dec(v_snd_1383_);
return v___x_1387_;
}
}
}
else
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
lean_dec(v_fst_1382_);
v___x_1402_ = lean_string_utf8_byte_size(v_snd_1383_);
v___x_1403_ = lean_nat_dec_eq(v___x_1402_, v___x_1379_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1404_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__2));
v___x_1405_ = lean_string_append(v___x_1404_, v_snd_1383_);
lean_dec(v_snd_1383_);
v___x_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
return v___x_1406_;
}
else
{
lean_object* v___x_1407_; 
lean_dec(v_snd_1383_);
v___x_1407_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__4));
return v___x_1407_;
}
}
}
}
else
{
lean_object* v___x_1431_; 
lean_dec_ref(v_symbol_1377_);
v___x_1431_ = lean_box(0);
return v___x_1431_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(lean_object* v_s_1432_, lean_object* v_pos_1433_, lean_object* v_pred_1434_){
_start:
{
lean_object* v___x_1435_; uint8_t v_decide_1436_; 
v___x_1435_ = lean_string_utf8_byte_size(v_s_1432_);
v_decide_1436_ = lean_nat_dec_eq(v_pos_1433_, v___x_1435_);
if (v_decide_1436_ == 0)
{
uint32_t v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v___x_1437_ = lean_string_utf8_get_fast(v_s_1432_, v_pos_1433_);
v___x_1438_ = lean_box_uint32(v___x_1437_);
lean_inc_ref(v_pred_1434_);
v___x_1439_ = lean_apply_1(v_pred_1434_, v___x_1438_);
v___x_1440_ = lean_unbox(v___x_1439_);
if (v___x_1440_ == 0)
{
lean_dec_ref(v_pred_1434_);
return v_pos_1433_;
}
else
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_string_utf8_next_fast(v_s_1432_, v_pos_1433_);
lean_dec(v_pos_1433_);
v_pos_1433_ = v___x_1441_;
goto _start;
}
}
else
{
lean_dec_ref(v_pred_1434_);
return v_pos_1433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile___boxed(lean_object* v_s_1443_, lean_object* v_pos_1444_, lean_object* v_pred_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(v_s_1443_, v_pos_1444_, v_pred_1445_);
lean_dec_ref(v_s_1443_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(lean_object* v_s_1447_, lean_object* v_p_u2081_1448_, lean_object* v_p_u2082_1449_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1450_ = lean_unsigned_to_nat(0u);
v___x_1451_ = lean_string_utf8_extract_fast(v_s_1447_, v___x_1450_, v_p_u2081_1448_);
v___x_1452_ = lean_string_utf8_extract_fast(v_s_1447_, v_p_u2081_1448_, v_p_u2082_1449_);
v___x_1453_ = lean_string_utf8_byte_size(v_s_1447_);
v___x_1454_ = lean_string_utf8_extract_fast(v_s_1447_, v_p_u2082_1449_, v___x_1453_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1452_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1451_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082___boxed(lean_object* v_s_1457_, lean_object* v_p_u2081_1458_, lean_object* v_p_u2082_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(v_s_1457_, v_p_u2081_1458_, v_p_u2082_1459_);
lean_dec(v_p_u2082_1459_);
lean_dec(v_p_u2081_1458_);
lean_dec_ref(v_s_1457_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(lean_object* v___x_1461_, lean_object* v___x_1462_, lean_object* v_line_1463_, lean_object* v_a_1464_, lean_object* v_b_1465_){
_start:
{
lean_object* v___x_1466_; uint8_t v_decide_1467_; 
v___x_1466_ = lean_nat_sub(v___x_1461_, v___x_1462_);
v_decide_1467_ = lean_nat_dec_eq(v_a_1464_, v___x_1466_);
lean_dec(v___x_1466_);
if (v_decide_1467_ == 0)
{
lean_object* v___x_1468_; lean_object* v___x_1469_; uint8_t v___y_1471_; uint32_t v___x_1476_; uint32_t v___x_1477_; uint8_t v___x_1478_; 
v___x_1468_ = lean_box(0);
v___x_1469_ = lean_nat_add(v___x_1462_, v_a_1464_);
v___x_1476_ = lean_string_utf8_get_fast(v_line_1463_, v___x_1469_);
v___x_1477_ = 43;
v___x_1478_ = lean_uint32_dec_eq(v___x_1476_, v___x_1477_);
if (v___x_1478_ == 0)
{
uint32_t v___x_1479_; uint8_t v___x_1480_; 
v___x_1479_ = 41;
v___x_1480_ = lean_uint32_dec_eq(v___x_1476_, v___x_1479_);
v___y_1471_ = v___x_1480_;
goto v___jp_1470_;
}
else
{
v___y_1471_ = v___x_1478_;
goto v___jp_1470_;
}
v___jp_1470_:
{
if (v___y_1471_ == 0)
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
lean_dec(v_a_1464_);
v___x_1472_ = lean_string_utf8_next_fast(v_line_1463_, v___x_1469_);
lean_dec(v___x_1469_);
v___x_1473_ = lean_nat_sub(v___x_1472_, v___x_1462_);
v_a_1464_ = v___x_1473_;
v_b_1465_ = v___x_1468_;
goto _start;
}
else
{
lean_object* v___x_1475_; 
lean_dec(v___x_1469_);
v___x_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1475_, 0, v_a_1464_);
return v___x_1475_;
}
}
}
else
{
lean_dec(v_a_1464_);
lean_inc(v_b_1465_);
return v_b_1465_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg___boxed(lean_object* v___x_1481_, lean_object* v___x_1482_, lean_object* v_line_1483_, lean_object* v_a_1484_, lean_object* v_b_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(v___x_1481_, v___x_1482_, v_line_1483_, v_a_1484_, v_b_1485_);
lean_dec(v_b_1485_);
lean_dec_ref(v_line_1483_);
lean_dec(v___x_1482_);
lean_dec(v___x_1481_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(lean_object* v___x_1487_, lean_object* v_line_1488_, lean_object* v_a_1489_, lean_object* v_b_1490_){
_start:
{
uint8_t v_decide_1491_; 
v_decide_1491_ = lean_nat_dec_eq(v_a_1489_, v___x_1487_);
if (v_decide_1491_ == 0)
{
uint32_t v___x_1492_; uint32_t v___x_1493_; uint8_t v___x_1494_; 
v___x_1492_ = lean_string_utf8_get_fast(v_line_1488_, v_a_1489_);
v___x_1493_ = 40;
v___x_1494_ = lean_uint32_dec_eq(v___x_1492_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_string_utf8_next_fast(v_line_1488_, v_a_1489_);
lean_dec(v_a_1489_);
v_a_1489_ = v___x_1496_;
v_b_1490_ = v___x_1495_;
goto _start;
}
else
{
lean_object* v___x_1498_; 
v___x_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1498_, 0, v_a_1489_);
return v___x_1498_;
}
}
else
{
lean_dec(v_a_1489_);
lean_inc(v_b_1490_);
return v_b_1490_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg___boxed(lean_object* v___x_1499_, lean_object* v_line_1500_, lean_object* v_a_1501_, lean_object* v_b_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(v___x_1499_, v_line_1500_, v_a_1501_, v_b_1502_);
lean_dec(v_b_1502_);
lean_dec_ref(v_line_1500_);
lean_dec(v___x_1499_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(lean_object* v_line_1504_){
_start:
{
lean_object* v_searcher_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v_searcher_1505_ = lean_unsigned_to_nat(0u);
v___x_1506_ = lean_string_utf8_byte_size(v_line_1504_);
v___x_1507_ = lean_box(0);
v___x_1508_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(v___x_1506_, v_line_1504_, v_searcher_1505_, v___x_1507_);
if (lean_obj_tag(v___x_1508_) == 0)
{
return v___x_1507_;
}
else
{
lean_object* v_val_1509_; uint8_t v_decide_1510_; 
v_val_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_val_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v_decide_1510_ = lean_nat_dec_eq(v_val_1509_, v___x_1506_);
if (v_decide_1510_ == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = lean_string_utf8_next_fast(v_line_1504_, v_val_1509_);
lean_dec(v_val_1509_);
v___x_1512_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(v___x_1506_, v___x_1511_, v_line_1504_, v_searcher_1505_, v___x_1507_);
if (lean_obj_tag(v___x_1512_) == 0)
{
return v___x_1507_;
}
else
{
lean_object* v_val_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1523_; 
v_val_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1523_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_val_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1523_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; uint8_t v_decide_1518_; 
v___x_1517_ = lean_nat_add(v___x_1511_, v_val_1513_);
lean_dec(v_val_1513_);
v_decide_1518_ = lean_nat_dec_eq(v___x_1517_, v___x_1511_);
if (v_decide_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(v_line_1504_, v___x_1511_, v___x_1517_);
lean_dec(v___x_1517_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1519_);
v___x_1521_ = v___x_1515_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
else
{
lean_dec(v___x_1517_);
lean_del_object(v___x_1515_);
return v___x_1507_;
}
}
}
}
else
{
lean_dec(v_val_1509_);
return v___x_1507_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux___boxed(lean_object* v_line_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(v_line_1524_);
lean_dec_ref(v_line_1524_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0(lean_object* v___x_1526_, lean_object* v___x_1527_, lean_object* v_line_1528_, lean_object* v_inst_1529_, lean_object* v_R_1530_, lean_object* v_a_1531_, lean_object* v_b_1532_, lean_object* v_c_1533_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(v___x_1526_, v_line_1528_, v_a_1531_, v_b_1532_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___boxed(lean_object* v___x_1535_, lean_object* v___x_1536_, lean_object* v_line_1537_, lean_object* v_inst_1538_, lean_object* v_R_1539_, lean_object* v_a_1540_, lean_object* v_b_1541_, lean_object* v_c_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0(v___x_1535_, v___x_1536_, v_line_1537_, v_inst_1538_, v_R_1539_, v_a_1540_, v_b_1541_, v_c_1542_);
lean_dec(v_b_1541_);
lean_dec_ref(v_line_1537_);
lean_dec_ref(v___x_1536_);
lean_dec(v___x_1535_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1(lean_object* v___x_1544_, lean_object* v___x_1545_, lean_object* v___x_1546_, lean_object* v_line_1547_, lean_object* v_inst_1548_, lean_object* v_R_1549_, lean_object* v_a_1550_, lean_object* v_b_1551_, lean_object* v_c_1552_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(v___x_1544_, v___x_1545_, v_line_1547_, v_a_1550_, v_b_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___boxed(lean_object* v___x_1554_, lean_object* v___x_1555_, lean_object* v___x_1556_, lean_object* v_line_1557_, lean_object* v_inst_1558_, lean_object* v_R_1559_, lean_object* v_a_1560_, lean_object* v_b_1561_, lean_object* v_c_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1(v___x_1554_, v___x_1555_, v___x_1556_, v_line_1557_, v_inst_1558_, v_R_1559_, v_a_1560_, v_b_1561_, v_c_1562_);
lean_dec(v_b_1561_);
lean_dec_ref(v_line_1557_);
lean_dec_ref(v___x_1556_);
lean_dec(v___x_1555_);
lean_dec(v___x_1554_);
return v_res_1563_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0(uint32_t v_x_1564_){
_start:
{
uint32_t v___x_1565_; uint8_t v___x_1566_; 
v___x_1565_ = 32;
v___x_1566_ = lean_uint32_dec_eq(v_x_1564_, v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0___boxed(lean_object* v_x_1567_){
_start:
{
uint32_t v_x_2699__boxed_1568_; uint8_t v_res_1569_; lean_object* v_r_1570_; 
v_x_2699__boxed_1568_ = lean_unbox_uint32(v_x_1567_);
lean_dec(v_x_1567_);
v_res_1569_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0(v_x_2699__boxed_1568_);
v_r_1570_ = lean_box(v_res_1569_);
return v_r_1570_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1(uint32_t v_x_1571_){
_start:
{
uint32_t v___x_1582_; uint8_t v___x_1583_; 
v___x_1582_ = 48;
v___x_1583_ = lean_uint32_dec_le(v___x_1582_, v_x_1571_);
if (v___x_1583_ == 0)
{
goto v___jp_1577_;
}
else
{
uint32_t v___x_1584_; uint8_t v___x_1585_; 
v___x_1584_ = 57;
v___x_1585_ = lean_uint32_dec_le(v_x_1571_, v___x_1584_);
if (v___x_1585_ == 0)
{
goto v___jp_1577_;
}
else
{
return v___x_1585_;
}
}
v___jp_1572_:
{
uint32_t v___x_1573_; uint8_t v___x_1574_; 
v___x_1573_ = 65;
v___x_1574_ = lean_uint32_dec_le(v___x_1573_, v_x_1571_);
if (v___x_1574_ == 0)
{
return v___x_1574_;
}
else
{
uint32_t v___x_1575_; uint8_t v___x_1576_; 
v___x_1575_ = 70;
v___x_1576_ = lean_uint32_dec_le(v_x_1571_, v___x_1575_);
return v___x_1576_;
}
}
v___jp_1577_:
{
uint32_t v___x_1578_; uint8_t v___x_1579_; 
v___x_1578_ = 97;
v___x_1579_ = lean_uint32_dec_le(v___x_1578_, v_x_1571_);
if (v___x_1579_ == 0)
{
goto v___jp_1572_;
}
else
{
uint32_t v___x_1580_; uint8_t v___x_1581_; 
v___x_1580_ = 102;
v___x_1581_ = lean_uint32_dec_le(v_x_1571_, v___x_1580_);
if (v___x_1581_ == 0)
{
goto v___jp_1572_;
}
else
{
return v___x_1581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1___boxed(lean_object* v_x_1586_){
_start:
{
uint32_t v_x_2706__boxed_1587_; uint8_t v_res_1588_; lean_object* v_r_1589_; 
v_x_2706__boxed_1587_ = lean_unbox_uint32(v_x_1586_);
lean_dec(v_x_1586_);
v_res_1588_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1(v_x_2706__boxed_1587_);
v_r_1589_ = lean_box(v_res_1588_);
return v_r_1589_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(lean_object* v___x_1590_, lean_object* v_line_1591_, lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v_a_1594_, lean_object* v_b_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_box(0);
switch(lean_obj_tag(v_a_1594_))
{
case 0:
{
lean_object* v_pos_1597_; lean_object* v___x_1598_; 
v_pos_1597_ = lean_ctor_get(v_a_1594_, 0);
lean_inc(v_pos_1597_);
lean_dec_ref_known(v_a_1594_, 1);
v___x_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_pos_1597_);
return v___x_1598_;
}
case 1:
{
lean_object* v_pos_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1610_; 
v_pos_1599_ = lean_ctor_get(v_a_1594_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_a_1594_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1601_ = v_a_1594_;
v_isShared_1602_ = v_isSharedCheck_1610_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_pos_1599_);
lean_dec(v_a_1594_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1610_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1603_ = lean_nat_add(v___x_1590_, v_pos_1599_);
lean_dec(v_pos_1599_);
v___x_1604_ = lean_string_utf8_next_fast(v_line_1591_, v___x_1603_);
lean_dec(v___x_1603_);
v___x_1605_ = lean_nat_sub(v___x_1604_, v___x_1590_);
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1605_);
v___x_1607_ = v___x_1601_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
v_a_1594_ = v___x_1607_;
v_b_1595_ = v___x_1596_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_1611_; lean_object* v_table_1612_; lean_object* v_stackPos_1613_; lean_object* v_needlePos_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1669_; 
v_needle_1611_ = lean_ctor_get(v_a_1594_, 0);
v_table_1612_ = lean_ctor_get(v_a_1594_, 1);
v_stackPos_1613_ = lean_ctor_get(v_a_1594_, 2);
v_needlePos_1614_ = lean_ctor_get(v_a_1594_, 3);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_a_1594_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1616_ = v_a_1594_;
v_isShared_1617_ = v_isSharedCheck_1669_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_needlePos_1614_);
lean_inc(v_stackPos_1613_);
lean_inc(v_table_1612_);
lean_inc(v_needle_1611_);
lean_dec(v_a_1594_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1669_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v_str_1618_; lean_object* v_startInclusive_1619_; lean_object* v_endExclusive_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; 
v_str_1618_ = lean_ctor_get(v_needle_1611_, 0);
v_startInclusive_1619_ = lean_ctor_get(v_needle_1611_, 1);
v_endExclusive_1620_ = lean_ctor_get(v_needle_1611_, 2);
v___x_1621_ = lean_nat_sub(v_stackPos_1613_, v_needlePos_1614_);
v___x_1622_ = lean_nat_sub(v_endExclusive_1620_, v_startInclusive_1619_);
v___x_1623_ = lean_nat_add(v___x_1621_, v___x_1622_);
v___x_1624_ = lean_nat_sub(v___x_1593_, v___x_1590_);
v___x_1625_ = lean_nat_dec_le(v___x_1623_, v___x_1624_);
lean_dec(v___x_1623_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
lean_dec(v___x_1622_);
lean_del_object(v___x_1616_);
lean_dec(v_needlePos_1614_);
lean_dec(v_stackPos_1613_);
lean_dec_ref(v_table_1612_);
lean_dec_ref(v_needle_1611_);
v___x_1626_ = lean_unsigned_to_nat(1u);
v___x_1627_ = lean_nat_add(v___x_1621_, v___x_1626_);
lean_dec(v___x_1621_);
v___x_1628_ = lean_nat_dec_le(v___x_1627_, v___x_1624_);
lean_dec(v___x_1624_);
lean_dec(v___x_1627_);
if (v___x_1628_ == 0)
{
lean_inc(v_b_1595_);
return v_b_1595_;
}
else
{
lean_object* v___x_1629_; 
v___x_1629_ = lean_box(3);
v_a_1594_ = v___x_1629_;
v_b_1595_ = v___x_1596_;
goto _start;
}
}
else
{
lean_object* v___x_1631_; uint8_t v_stackByte_1632_; lean_object* v___x_1633_; uint8_t v_patByte_1634_; uint8_t v___x_1635_; 
lean_dec(v___x_1624_);
lean_dec(v___x_1621_);
v___x_1631_ = lean_nat_add(v___x_1590_, v_stackPos_1613_);
v_stackByte_1632_ = lean_string_get_byte_fast(v_line_1591_, v___x_1631_);
v___x_1633_ = lean_nat_add(v_startInclusive_1619_, v_needlePos_1614_);
v_patByte_1634_ = lean_string_get_byte_fast(v_str_1618_, v___x_1633_);
v___x_1635_ = lean_uint8_dec_eq(v_stackByte_1632_, v_patByte_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; uint8_t v_decide_1637_; 
lean_dec(v___x_1622_);
v___x_1636_ = lean_unsigned_to_nat(0u);
v_decide_1637_ = lean_nat_dec_eq(v_needlePos_1614_, v___x_1636_);
if (v_decide_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v_newNeedlePos_1640_; uint8_t v___x_1641_; 
v___x_1638_ = lean_unsigned_to_nat(1u);
v___x_1639_ = lean_nat_sub(v_needlePos_1614_, v___x_1638_);
lean_dec(v_needlePos_1614_);
v_newNeedlePos_1640_ = lean_array_fget_borrowed(v_table_1612_, v___x_1639_);
lean_dec(v___x_1639_);
v___x_1641_ = lean_nat_dec_eq(v_newNeedlePos_1640_, v___x_1636_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1643_; 
lean_inc(v_newNeedlePos_1640_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 3, v_newNeedlePos_1640_);
v___x_1643_ = v___x_1616_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_needle_1611_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v_table_1612_);
lean_ctor_set(v_reuseFailAlloc_1645_, 2, v_stackPos_1613_);
lean_ctor_set(v_reuseFailAlloc_1645_, 3, v_newNeedlePos_1640_);
v___x_1643_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
v_a_1594_ = v___x_1643_;
v_b_1595_ = v___x_1596_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_1646_; lean_object* v___x_1648_; 
v_nextStackPos_1646_ = l_String_Slice_posGE___redArg(v___x_1592_, v_stackPos_1613_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 3, v___x_1636_);
lean_ctor_set(v___x_1616_, 2, v_nextStackPos_1646_);
v___x_1648_ = v___x_1616_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_needle_1611_);
lean_ctor_set(v_reuseFailAlloc_1650_, 1, v_table_1612_);
lean_ctor_set(v_reuseFailAlloc_1650_, 2, v_nextStackPos_1646_);
lean_ctor_set(v_reuseFailAlloc_1650_, 3, v___x_1636_);
v___x_1648_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
v_a_1594_ = v___x_1648_;
v_b_1595_ = v___x_1596_;
goto _start;
}
}
}
else
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v_nextStackPos_1653_; lean_object* v___x_1655_; 
lean_dec(v_needlePos_1614_);
v___x_1651_ = lean_unsigned_to_nat(1u);
v___x_1652_ = lean_nat_add(v_stackPos_1613_, v___x_1651_);
lean_dec(v_stackPos_1613_);
v_nextStackPos_1653_ = l_String_Slice_posGE___redArg(v___x_1592_, v___x_1652_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 3, v___x_1636_);
lean_ctor_set(v___x_1616_, 2, v_nextStackPos_1653_);
v___x_1655_ = v___x_1616_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_needle_1611_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_table_1612_);
lean_ctor_set(v_reuseFailAlloc_1657_, 2, v_nextStackPos_1653_);
lean_ctor_set(v_reuseFailAlloc_1657_, 3, v___x_1636_);
v___x_1655_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
v_a_1594_ = v___x_1655_;
v_b_1595_ = v___x_1596_;
goto _start;
}
}
}
else
{
lean_object* v___x_1658_; lean_object* v_nextStackPos_1659_; lean_object* v_nextNeedlePos_1660_; uint8_t v_decide_1661_; 
v___x_1658_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1659_ = lean_nat_add(v_stackPos_1613_, v___x_1658_);
lean_dec(v_stackPos_1613_);
v_nextNeedlePos_1660_ = lean_nat_add(v_needlePos_1614_, v___x_1658_);
lean_dec(v_needlePos_1614_);
v_decide_1661_ = lean_nat_dec_eq(v_nextNeedlePos_1660_, v___x_1622_);
lean_dec(v___x_1622_);
if (v_decide_1661_ == 0)
{
lean_object* v___x_1663_; 
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 3, v_nextNeedlePos_1660_);
lean_ctor_set(v___x_1616_, 2, v_nextStackPos_1659_);
v___x_1663_ = v___x_1616_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_needle_1611_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_table_1612_);
lean_ctor_set(v_reuseFailAlloc_1665_, 2, v_nextStackPos_1659_);
lean_ctor_set(v_reuseFailAlloc_1665_, 3, v_nextNeedlePos_1660_);
v___x_1663_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
v_a_1594_ = v___x_1663_;
goto _start;
}
}
else
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
lean_del_object(v___x_1616_);
lean_dec_ref(v_table_1612_);
lean_dec_ref(v_needle_1611_);
v___x_1666_ = lean_nat_sub(v_nextStackPos_1659_, v_nextNeedlePos_1660_);
lean_dec(v_nextNeedlePos_1660_);
lean_dec(v_nextStackPos_1659_);
v___x_1667_ = l_String_Slice_pos_x21(v___x_1592_, v___x_1666_);
lean_dec(v___x_1666_);
v___x_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
return v___x_1668_;
}
}
}
}
}
default: 
{
lean_inc(v_b_1595_);
return v_b_1595_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg___boxed(lean_object* v___x_1670_, lean_object* v_line_1671_, lean_object* v___x_1672_, lean_object* v___x_1673_, lean_object* v_a_1674_, lean_object* v_b_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(v___x_1670_, v_line_1671_, v___x_1672_, v___x_1673_, v_a_1674_, v_b_1675_);
lean_dec(v_b_1675_);
lean_dec(v___x_1673_);
lean_dec_ref(v___x_1672_);
lean_dec_ref(v_line_1671_);
lean_dec(v___x_1670_);
return v_res_1676_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4(void){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3));
v___x_1682_ = lean_string_utf8_byte_size(v___x_1681_);
return v___x_1682_;
}
}
static uint8_t _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5(void){
_start:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; uint8_t v___x_1685_; 
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4);
v___x_1685_ = lean_nat_dec_eq(v___x_1684_, v___x_1683_);
return v___x_1685_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6(void){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1686_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4);
v___x_1687_ = lean_unsigned_to_nat(0u);
v___x_1688_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3));
v___x_1689_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
lean_ctor_set(v___x_1689_, 1, v___x_1687_);
lean_ctor_set(v___x_1689_, 2, v___x_1686_);
return v___x_1689_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6);
v___x_1691_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1690_);
return v___x_1691_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8(void){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1692_ = lean_unsigned_to_nat(0u);
v___x_1693_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7);
v___x_1694_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6);
v___x_1695_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
lean_ctor_set(v___x_1695_, 1, v___x_1693_);
lean_ctor_set(v___x_1695_, 2, v___x_1692_);
lean_ctor_set(v___x_1695_, 3, v___x_1692_);
return v___x_1695_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9(void){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2));
v___x_1697_ = lean_string_utf8_byte_size(v___x_1696_);
return v___x_1697_;
}
}
static uint8_t _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__10(void){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1698_ = lean_unsigned_to_nat(0u);
v___x_1699_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9);
v___x_1700_ = lean_nat_dec_eq(v___x_1699_, v___x_1698_);
return v___x_1700_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1701_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9);
v___x_1702_ = lean_unsigned_to_nat(0u);
v___x_1703_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2));
v___x_1704_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
lean_ctor_set(v___x_1704_, 1, v___x_1702_);
lean_ctor_set(v___x_1704_, 2, v___x_1701_);
return v___x_1704_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__12(void){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11);
v___x_1706_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1705_);
return v___x_1706_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__13(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1707_ = lean_unsigned_to_nat(0u);
v___x_1708_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__12, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__12_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__12);
v___x_1709_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__11);
v___x_1710_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
lean_ctor_set(v___x_1710_, 1, v___x_1708_);
lean_ctor_set(v___x_1710_, 2, v___x_1707_);
lean_ctor_set(v___x_1710_, 3, v___x_1707_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS(lean_object* v_line_1711_){
_start:
{
lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___f_1719_; lean_object* v___f_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___x_1731_; lean_object* v___y_1733_; uint8_t v___x_1748_; 
v___f_1719_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0));
v___f_1720_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1));
v___x_1721_ = lean_unsigned_to_nat(0u);
v___x_1722_ = lean_string_utf8_byte_size(v_line_1711_);
lean_inc_ref(v_line_1711_);
v___x_1731_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1731_, 0, v_line_1711_);
lean_ctor_set(v___x_1731_, 1, v___x_1721_);
lean_ctor_set(v___x_1731_, 2, v___x_1722_);
v___x_1748_ = lean_uint8_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__10, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__10_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__10);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__13, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__13_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__13);
v___y_1733_ = v___x_1749_;
goto v___jp_1732_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__6));
v___y_1733_ = v___x_1750_;
goto v___jp_1732_;
}
v___jp_1712_:
{
uint8_t v_decide_1715_; 
v_decide_1715_ = lean_nat_dec_eq(v___y_1714_, v___y_1713_);
if (v_decide_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1716_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(v_line_1711_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v_line_1711_);
v___x_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
return v___x_1717_;
}
else
{
lean_object* v___x_1718_; 
lean_dec(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v_line_1711_);
v___x_1718_ = lean_box(0);
return v___x_1718_;
}
}
v___jp_1723_:
{
lean_object* v___x_1728_; 
lean_inc(v___y_1727_);
v___x_1728_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(v___y_1724_, v_line_1711_, v___y_1726_, v___x_1722_, v___y_1727_, v___y_1725_);
lean_dec_ref(v___y_1726_);
if (lean_obj_tag(v___x_1728_) == 0)
{
v___y_1713_ = v___y_1724_;
v___y_1714_ = v___x_1722_;
goto v___jp_1712_;
}
else
{
lean_object* v_val_1729_; lean_object* v___x_1730_; 
v_val_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_val_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1730_ = lean_nat_add(v___y_1724_, v_val_1729_);
lean_dec(v_val_1729_);
v___y_1713_ = v___y_1724_;
v___y_1714_ = v___x_1730_;
goto v___jp_1712_;
}
}
v___jp_1732_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_box(0);
lean_inc(v___y_1733_);
v___x_1735_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_line_1711_, v___x_1731_, v___x_1722_, v___y_1733_, v___x_1734_);
lean_dec_ref_known(v___x_1731_, 3);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_dec_ref(v_line_1711_);
return v___x_1734_;
}
else
{
lean_object* v_val_1736_; uint8_t v_decide_1737_; 
v_val_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_val_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v_decide_1737_ = lean_nat_dec_eq(v_val_1736_, v___x_1722_);
if (v_decide_1737_ == 0)
{
lean_object* v___x_1738_; uint8_t v_decide_1739_; 
v___x_1738_ = lean_string_utf8_next_fast(v_line_1711_, v_val_1736_);
lean_dec(v_val_1736_);
v_decide_1739_ = lean_nat_dec_eq(v___x_1738_, v___x_1722_);
if (v_decide_1739_ == 0)
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; uint8_t v_decide_1743_; 
v___x_1740_ = lean_string_utf8_next_fast(v_line_1711_, v___x_1738_);
v___x_1741_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(v_line_1711_, v___x_1740_, v___f_1720_);
v___x_1742_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(v_line_1711_, v___x_1741_, v___f_1719_);
v_decide_1743_ = lean_nat_dec_eq(v___x_1742_, v___x_1722_);
if (v_decide_1743_ == 0)
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
lean_inc(v___x_1742_);
lean_inc_ref(v_line_1711_);
v___x_1744_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1744_, 0, v_line_1711_);
lean_ctor_set(v___x_1744_, 1, v___x_1742_);
lean_ctor_set(v___x_1744_, 2, v___x_1722_);
v___x_1745_ = lean_uint8_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8);
v___y_1724_ = v___x_1742_;
v___y_1725_ = v___x_1734_;
v___y_1726_ = v___x_1744_;
v___y_1727_ = v___x_1746_;
goto v___jp_1723_;
}
else
{
lean_object* v___x_1747_; 
v___x_1747_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__6));
v___y_1724_ = v___x_1742_;
v___y_1725_ = v___x_1734_;
v___y_1726_ = v___x_1744_;
v___y_1727_ = v___x_1747_;
goto v___jp_1723_;
}
}
else
{
lean_dec(v___x_1742_);
lean_dec_ref(v_line_1711_);
return v___x_1734_;
}
}
else
{
lean_dec_ref(v_line_1711_);
return v___x_1734_;
}
}
else
{
lean_dec(v_val_1736_);
lean_dec_ref(v_line_1711_);
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0(lean_object* v___x_1751_, lean_object* v_line_1752_, lean_object* v___x_1753_, lean_object* v___x_1754_, lean_object* v_inst_1755_, lean_object* v_R_1756_, lean_object* v_a_1757_, lean_object* v_b_1758_, lean_object* v_c_1759_){
_start:
{
lean_object* v___x_1760_; 
v___x_1760_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(v___x_1751_, v_line_1752_, v___x_1753_, v___x_1754_, v_a_1757_, v_b_1758_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___boxed(lean_object* v___x_1761_, lean_object* v_line_1762_, lean_object* v___x_1763_, lean_object* v___x_1764_, lean_object* v_inst_1765_, lean_object* v_R_1766_, lean_object* v_a_1767_, lean_object* v_b_1768_, lean_object* v_c_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0(v___x_1761_, v_line_1762_, v___x_1763_, v___x_1764_, v_inst_1765_, v_R_1766_, v_a_1767_, v_b_1768_, v_c_1769_);
lean_dec(v_b_1768_);
lean_dec(v___x_1764_);
lean_dec_ref(v___x_1763_);
lean_dec_ref(v_line_1762_);
lean_dec(v___x_1761_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol(lean_object* v_line_1771_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(v_line_1771_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v___x_1773_; 
v___x_1773_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS(v_line_1771_);
return v___x_1773_;
}
else
{
lean_dec_ref(v_line_1771_);
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleBtLine(lean_object* v_line_1774_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol(v_line_1774_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_box(0);
return v___x_1776_;
}
else
{
lean_object* v_val_1777_; lean_object* v_snd_1778_; lean_object* v_fst_1779_; lean_object* v_fst_1780_; lean_object* v_snd_1781_; lean_object* v___x_1782_; 
v_val_1777_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_val_1777_);
lean_dec_ref_known(v___x_1775_, 1);
v_snd_1778_ = lean_ctor_get(v_val_1777_, 1);
lean_inc(v_snd_1778_);
v_fst_1779_ = lean_ctor_get(v_val_1777_, 0);
lean_inc(v_fst_1779_);
lean_dec(v_val_1777_);
v_fst_1780_ = lean_ctor_get(v_snd_1778_, 0);
lean_inc(v_fst_1780_);
v_snd_1781_ = lean_ctor_get(v_snd_1778_, 1);
lean_inc(v_snd_1781_);
lean_dec(v_snd_1778_);
v___x_1782_ = l_Lean_Name_Demangle_demangleSymbol(v_fst_1780_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_dec(v_snd_1781_);
lean_dec(v_fst_1779_);
return v___x_1782_;
}
else
{
lean_object* v_val_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1792_; 
v_val_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1792_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_val_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1792_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1790_; 
v___x_1787_ = lean_string_append(v_fst_1779_, v_val_1783_);
lean_dec(v_val_1783_);
v___x_1788_ = lean_string_append(v___x_1787_, v_snd_1781_);
lean_dec(v_snd_1781_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v___x_1788_);
v___x_1790_ = v___x_1785_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v___x_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lean_demangle_bt_line_cstr(lean_object* v_line_1793_){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l_Lean_Name_Demangle_demangleBtLine(v_line_1793_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
return v___x_1795_;
}
else
{
lean_object* v_val_1796_; 
v_val_1796_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_val_1796_);
lean_dec_ref_known(v___x_1794_, 1);
return v_val_1796_;
}
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_NameTrie(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NameMangling(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_NameDemangling(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_NameTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_NameDemangling(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* initialize_Lean_Data_NameTrie(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NameMangling(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_NameDemangling(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_NameTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NameDemangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_NameDemangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_NameDemangling(builtin);
}
#ifdef __cplusplus
}
#endif

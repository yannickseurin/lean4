// Lean compiler output
// Module: Lean.Meta.TryThis
// Imports: public import Lean.Data.Lsp.Basic public import Lean.PrettyPrinter
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
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_next_x21(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_String_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
double lean_float_mul(double, double);
double round(double);
lean_object* lean_float_to_string(double);
lean_object* lean_string_append(lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_sub(double, double);
double pow(double, double);
double lean_float_add(double, double);
uint8_t lean_float_decLe(double, double);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle___aux__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___aux__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "className"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "color"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "var(--vscode-errorForeground)"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "textDecoration"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "underline wavy var(--vscode-editorError-foreground) 1pt"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "gold pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "underline wavy var(--vscode-editorWarning-foreground) 1pt"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "information pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "goal-hyp pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "goal-inaccessible pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hsl("};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " 95% "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "%)"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Apply suggestion"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Apply suggestion ("};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value(double, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TryThis"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "TryThisInfo"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(207, 55, 191, 109, 224, 169, 145, 115)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(89, 112, 140, 127, 159, 194, 21, 171)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_instImpl___closed__6_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__6_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instTypeNameTryThisInfo;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "inputWidth"};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(41, 165, 100, 47, 160, 41, 84, 0)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 147, 146, 63, 150, 233, 253, 32)}};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ideal input width"};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(207, 55, 191, 109, 224, 169, 145, 115)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(133, 10, 29, 165, 121, 220, 111, 19)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(16, 85, 191, 240, 102, 91, 59, 55)}};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_format_inputWidth;
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_kind_8_; lean_object* v_a_9_; lean_object* v___x_10_; 
v_kind_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_kind_8_);
v_a_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc(v_a_9_);
lean_dec_ref_known(v_t_6_, 2);
v___x_10_ = lean_apply_2(v_k_7_, v_kind_8_, v_a_9_);
return v___x_10_;
}
else
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_a_11_);
lean_dec_ref_known(v_t_6_, 1);
v___x_12_ = lean_apply_1(v_k_7_, v_a_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim___redArg(lean_object* v_t_25_, lean_object* v_tsyntax_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_25_, v_tsyntax_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_tsyntax_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_29_, v_tsyntax_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim___redArg(lean_object* v_t_33_, lean_object* v_string_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_33_, v_string_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_string_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_37_, v_string_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = l_unsafeCast___redArg(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__1(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_box(0);
v___x_44_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0, &l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_once, _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0);
v___x_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__1, &l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__1_once, _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__1);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default;
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___lam__0(lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v_a_49_; lean_object* v___x_50_; 
v_a_49_ = lean_ctor_get(v_x_48_, 1);
lean_inc(v_a_49_);
lean_dec_ref_known(v_x_48_, 2);
v___x_50_ = l_Lean_MessageData_ofSyntax(v_a_49_);
return v___x_50_;
}
else
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_59_; 
v_a_51_ = lean_ctor_get(v_x_48_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v_x_48_);
if (v_isSharedCheck_59_ == 0)
{
v___x_53_ = v_x_48_;
v_isShared_54_ = v_isSharedCheck_59_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v_x_48_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_59_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_56_; 
if (v_isShared_54_ == 0)
{
lean_ctor_set_tag(v___x_53_, 3);
v___x_56_ = v___x_53_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_51_);
v___x_56_ = v_reuseFailAlloc_58_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_MessageData_ofFormat(v___x_56_);
return v___x_57_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText___lam__0(lean_object* v_kind_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v_kind_62_);
lean_ctor_set(v___x_64_, 1, v_a_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText(lean_object* v_kind_65_){
_start:
{
lean_object* v___f_66_; 
v___f_66_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText___lam__0), 2, 1);
lean_closure_set(v___f_66_, 0, v_kind_65_);
return v___f_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___lam__0(lean_object* v_a_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v_a_67_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle___aux__1(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_box(0);
return v___x_71_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_box(0);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___aux__1(lean_object* v_a_73_){
_start:
{
lean_inc(v_a_73_);
return v_a_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___aux__1___boxed(lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___aux__1(v_a_74_);
lean_dec(v_a_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0(lean_object* v___y_76_){
_start:
{
lean_inc(v___y_76_);
return v___y_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0___boxed(lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0(v___y_77_);
lean_dec(v___y_77_);
return v_res_78_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9));
v___x_100_ = l_Lean_Json_mkObj(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16));
v___x_115_ = l_Lean_Json_mkObj(v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error(uint8_t v_decorated_116_){
_start:
{
lean_object* v___y_118_; 
if (v_decorated_116_ == 0)
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10);
v___y_118_ = v___x_126_;
goto v___jp_117_;
}
else
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17);
v___y_118_ = v___x_127_;
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_119_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3));
v___x_120_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4));
lean_inc(v___y_118_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___y_118_);
v___x_122_ = lean_box(0);
v___x_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_119_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = l_Lean_Json_mkObj(v___x_124_);
lean_dec_ref_known(v___x_124_, 2);
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___boxed(lean_object* v_decorated_128_){
_start:
{
uint8_t v_decorated_boxed_129_; lean_object* v_res_130_; 
v_decorated_boxed_129_ = lean_unbox(v_decorated_128_);
v_res_130_ = l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error(v_decorated_boxed_129_);
return v_res_130_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3));
v___x_141_ = l_Lean_Json_mkObj(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8));
v___x_152_ = l_Lean_Json_mkObj(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_153_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9);
v___x_154_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4));
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
lean_ctor_set(v___x_155_, 1, v___x_153_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_box(0);
v___x_157_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10);
v___x_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11);
v___x_160_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2));
v___x_161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12);
v___x_163_ = l_Lean_Json_mkObj(v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning(uint8_t v_decorated_164_){
_start:
{
if (v_decorated_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13);
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___boxed(lean_object* v_decorated_167_){
_start:
{
uint8_t v_decorated_boxed_168_; lean_object* v_res_169_; 
v_decorated_boxed_168_ = lean_unbox(v_decorated_167_);
v_res_169_ = l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning(v_decorated_boxed_168_);
return v_res_169_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3));
v___x_180_ = l_Lean_Json_mkObj(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success(void){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3));
v___x_192_ = l_Lean_Json_mkObj(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3));
v___x_204_ = l_Lean_Json_mkObj(v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4);
return v___x_205_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1(void){
_start:
{
lean_object* v___x_207_; double v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(120u);
v___x_208_ = lean_float_of_nat(v___x_207_);
return v___x_208_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3(void){
_start:
{
lean_object* v___x_210_; double v___x_211_; 
v___x_210_ = lean_unsigned_to_nat(60u);
v___x_211_ = lean_float_of_nat(v___x_210_);
return v___x_211_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4(void){
_start:
{
lean_object* v___x_212_; double v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(2u);
v___x_213_ = lean_float_of_nat(v___x_212_);
return v___x_213_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5(void){
_start:
{
lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; double v___x_217_; 
v___x_214_ = lean_unsigned_to_nat(2u);
v___x_215_ = 1;
v___x_216_ = lean_unsigned_to_nat(75u);
v___x_217_ = l_Float_ofScientific(v___x_216_, v___x_215_, v___x_214_);
return v___x_217_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11(void){
_start:
{
lean_object* v___x_223_; double v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_float_of_nat(v___x_223_);
return v___x_224_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12(void){
_start:
{
lean_object* v___x_225_; double v___x_226_; 
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_float_of_nat(v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value(double v_t_227_, uint8_t v_showValueInHoverText_228_){
_start:
{
lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v___y_233_; lean_object* v___y_234_; lean_object* v___y_242_; double v___y_243_; double v___y_283_; double v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12);
v___x_288_ = lean_float_decLe(v_t_227_, v___x_287_);
if (v___x_288_ == 0)
{
v___y_283_ = v_t_227_;
goto v___jp_282_;
}
else
{
v___y_283_ = v___x_287_;
goto v___jp_282_;
}
v___jp_229_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_235_, 0, v___y_234_);
lean_inc_ref(v___y_231_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___y_231_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
lean_inc(v___y_230_);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___y_230_);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_233_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
lean_inc_ref(v___y_232_);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___y_232_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_Lean_Json_mkObj(v___x_239_);
lean_dec_ref_known(v___x_239_, 2);
return v___x_240_;
}
v___jp_241_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; double v___x_248_; double v___x_249_; double v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; double v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; double v___x_258_; double v___x_259_; double v___x_260_; double v___x_261_; double v___x_262_; double v___x_263_; double v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_244_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3));
v___x_245_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4));
v___x_246_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5));
v___x_247_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0));
v___x_248_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1);
v___x_249_ = lean_float_mul(v___y_243_, v___x_248_);
v___x_250_ = round(v___x_249_);
v___x_251_ = lean_float_to_string(v___x_250_);
v___x_252_ = lean_string_append(v___x_247_, v___x_251_);
lean_dec_ref(v___x_251_);
v___x_253_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2));
v___x_254_ = lean_string_append(v___x_252_, v___x_253_);
v___x_255_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3);
v___x_256_ = lean_unsigned_to_nat(5u);
v___x_257_ = 1;
v___x_258_ = l_Float_ofScientific(v___x_256_, v___x_257_, v___y_242_);
v___x_259_ = lean_float_sub(v___y_243_, v___x_258_);
v___x_260_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4);
v___x_261_ = pow(v___x_259_, v___x_260_);
v___x_262_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5);
v___x_263_ = lean_float_add(v___x_261_, v___x_262_);
v___x_264_ = lean_float_mul(v___x_255_, v___x_263_);
v___x_265_ = lean_float_to_string(v___x_264_);
v___x_266_ = lean_string_append(v___x_254_, v___x_265_);
lean_dec_ref(v___x_265_);
v___x_267_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6));
v___x_268_ = lean_string_append(v___x_266_, v___x_267_);
v___x_269_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_246_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = lean_box(0);
v___x_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_Lean_Json_mkObj(v___x_272_);
lean_dec_ref_known(v___x_272_, 2);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_245_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7));
if (v_showValueInHoverText_228_ == 0)
{
lean_object* v___x_276_; 
v___x_276_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8));
v___y_230_ = v___x_271_;
v___y_231_ = v___x_275_;
v___y_232_ = v___x_244_;
v___y_233_ = v___x_274_;
v___y_234_ = v___x_276_;
goto v___jp_229_;
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_277_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9));
v___x_278_ = lean_float_to_string(v___y_243_);
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
lean_dec_ref(v___x_278_);
v___x_280_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10));
v___x_281_ = lean_string_append(v___x_279_, v___x_280_);
v___y_230_ = v___x_271_;
v___y_231_ = v___x_275_;
v___y_232_ = v___x_244_;
v___y_233_ = v___x_274_;
v___y_234_ = v___x_281_;
goto v___jp_229_;
}
}
v___jp_282_:
{
lean_object* v___x_284_; double v___x_285_; uint8_t v___x_286_; 
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11);
v___x_286_ = lean_float_decLe(v___y_283_, v___x_285_);
if (v___x_286_ == 0)
{
v___y_242_ = v___x_284_;
v___y_243_ = v___x_285_;
goto v___jp_241_;
}
else
{
v___y_242_ = v___x_284_;
v___y_243_ = v___y_283_;
goto v___jp_241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___boxed(lean_object* v_t_289_, lean_object* v_showValueInHoverText_290_){
_start:
{
double v_t_boxed_291_; uint8_t v_showValueInHoverText_boxed_292_; lean_object* v_res_293_; 
v_t_boxed_291_ = lean_unbox_float(v_t_289_);
lean_dec_ref(v_t_289_);
v_showValueInHoverText_boxed_292_ = lean_unbox(v_showValueInHoverText_290_);
v_res_293_ = l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value(v_t_boxed_291_, v_showValueInHoverText_boxed_292_);
return v_res_293_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_box(0);
v___x_295_ = l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default;
v___x_296_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v___x_294_);
lean_ctor_set(v___x_296_, 2, v___x_294_);
lean_ctor_set(v___x_296_, 3, v___x_294_);
lean_ctor_set(v___x_296_, 4, v___x_294_);
lean_ctor_set(v___x_296_, 5, v___x_294_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default(void){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0, &l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0_once, _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion(void){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___lam__0(lean_object* v_s_299_){
_start:
{
lean_object* v_messageData_x3f_300_; 
v_messageData_x3f_300_ = lean_ctor_get(v_s_299_, 4);
if (lean_obj_tag(v_messageData_x3f_300_) == 0)
{
lean_object* v_suggestion_301_; 
v_suggestion_301_ = lean_ctor_get(v_s_299_, 0);
lean_inc_ref(v_suggestion_301_);
lean_dec_ref(v_s_299_);
if (lean_obj_tag(v_suggestion_301_) == 0)
{
lean_object* v_a_302_; lean_object* v___x_303_; 
v_a_302_ = lean_ctor_get(v_suggestion_301_, 1);
lean_inc(v_a_302_);
lean_dec_ref_known(v_suggestion_301_, 2);
v___x_303_ = l_Lean_MessageData_ofSyntax(v_a_302_);
return v___x_303_;
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_312_; 
v_a_304_ = lean_ctor_get(v_suggestion_301_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v_suggestion_301_);
if (v_isSharedCheck_312_ == 0)
{
v___x_306_ = v_suggestion_301_;
v_isShared_307_ = v_isSharedCheck_312_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v_suggestion_301_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_312_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set_tag(v___x_306_, 3);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_311_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_MessageData_ofFormat(v___x_309_);
return v___x_310_;
}
}
}
}
else
{
lean_object* v_val_313_; 
lean_inc_ref(v_messageData_x3f_300_);
lean_dec_ref(v_s_299_);
v_val_313_ = lean_ctor_get(v_messageData_x3f_300_, 0);
lean_inc(v_val_313_);
lean_dec_ref_known(v_messageData_x3f_300_, 1);
return v_val_313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___lam__0(lean_object* v_t_316_){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(0);
v___x_318_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_318_, 0, v_t_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
lean_ctor_set(v___x_318_, 2, v___x_317_);
lean_ctor_set(v___x_318_, 3, v___x_317_);
lean_ctor_set(v___x_318_, 4, v___x_317_);
lean_ctor_set(v___x_318_, 5, v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instImpl___closed__6_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_));
v___x_333_ = l_unsafeCast___redArg(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_(void){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_instImpl___closed__6_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_, &l_Lean_Meta_Tactic_TryThis_instImpl___closed__6_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__once, _init_l_Lean_Meta_Tactic_TryThis_instImpl___closed__6_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instTypeNameTryThisInfo(void){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(lean_object* v_s_336_, lean_object* v_a_337_, lean_object* v_b_338_){
_start:
{
lean_object* v___x_339_; uint8_t v_decide_340_; 
v___x_339_ = lean_unsigned_to_nat(0u);
v_decide_340_ = lean_nat_dec_eq(v_a_337_, v___x_339_);
if (v_decide_340_ == 0)
{
lean_object* v_str_341_; lean_object* v_startInclusive_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; uint32_t v___x_350_; uint32_t v___x_351_; uint8_t v___x_352_; 
v_str_341_ = lean_ctor_get(v_s_336_, 0);
v_startInclusive_342_ = lean_ctor_get(v_s_336_, 1);
v___x_343_ = lean_nat_add(v_startInclusive_342_, v_a_337_);
lean_inc(v___x_343_);
lean_inc(v_startInclusive_342_);
lean_inc_ref(v_str_341_);
v___x_344_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_344_, 0, v_str_341_);
lean_ctor_set(v___x_344_, 1, v_startInclusive_342_);
lean_ctor_set(v___x_344_, 2, v___x_343_);
v___x_345_ = lean_nat_sub(v___x_343_, v_startInclusive_342_);
lean_dec(v___x_343_);
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_sub(v___x_345_, v___x_346_);
lean_dec(v___x_345_);
v___x_348_ = l_String_Slice_posLE(v___x_344_, v___x_347_);
lean_dec_ref_known(v___x_344_, 3);
v___x_349_ = lean_nat_add(v_startInclusive_342_, v___x_348_);
v___x_350_ = lean_string_utf8_get_fast(v_str_341_, v___x_349_);
lean_dec(v___x_349_);
v___x_351_ = 10;
v___x_352_ = lean_uint32_dec_eq(v___x_350_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
lean_dec(v___x_348_);
v___x_353_ = lean_box(0);
v___x_354_ = lean_nat_sub(v_a_337_, v___x_346_);
lean_dec(v_a_337_);
v___x_355_ = l_String_Slice_posLE(v_s_336_, v___x_354_);
v_a_337_ = v___x_355_;
v_b_338_ = v___x_353_;
goto _start;
}
else
{
lean_object* v___x_357_; 
lean_dec(v_a_337_);
v___x_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_348_);
return v___x_357_;
}
}
else
{
lean_dec(v_a_337_);
lean_inc(v_b_338_);
return v_b_338_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg___boxed(lean_object* v_s_358_, lean_object* v_a_359_, lean_object* v_b_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(v_s_358_, v_a_359_, v_b_360_);
lean_dec(v_b_360_);
lean_dec_ref(v_s_358_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(lean_object* v_s_362_){
_start:
{
lean_object* v_startInclusive_363_; lean_object* v_endExclusive_364_; lean_object* v_searcher_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_startInclusive_363_ = lean_ctor_get(v_s_362_, 1);
v_endExclusive_364_ = lean_ctor_get(v_s_362_, 2);
v_searcher_365_ = lean_nat_sub(v_endExclusive_364_, v_startInclusive_363_);
v___x_366_ = lean_box(0);
v___x_367_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(v_s_362_, v_searcher_365_, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0___boxed(lean_object* v_s_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(v_s_368_);
lean_dec_ref(v_s_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart(lean_object* v_s_370_, lean_object* v_p_371_){
_start:
{
lean_object* v_val_373_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_s_370_);
v___x_379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_379_, 0, v_s_370_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
lean_ctor_set(v___x_379_, 2, v_p_371_);
v___x_380_ = l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(v___x_379_);
lean_dec_ref_known(v___x_379_, 3);
if (lean_obj_tag(v___x_380_) == 0)
{
if (lean_obj_tag(v___x_380_) == 0)
{
lean_dec_ref(v_s_370_);
return v___x_378_;
}
else
{
lean_object* v_val_381_; 
v_val_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_val_381_);
lean_dec_ref_known(v___x_380_, 1);
v_val_373_ = v_val_381_;
goto v___jp_372_;
}
}
else
{
lean_object* v_val_382_; 
v_val_382_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v___x_380_, 1);
v_val_373_ = v_val_382_;
goto v___jp_372_;
}
v___jp_372_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = lean_unsigned_to_nat(0u);
v___x_375_ = lean_string_utf8_byte_size(v_s_370_);
v___x_376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_376_, 0, v_s_370_);
lean_ctor_set(v___x_376_, 1, v___x_374_);
lean_ctor_set(v___x_376_, 2, v___x_375_);
v___x_377_ = l_String_Slice_Pos_next_x21(v___x_376_, v_val_373_);
lean_dec(v_val_373_);
lean_dec_ref_known(v___x_376_, 3);
return v___x_377_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0(lean_object* v_s_383_, lean_object* v_inst_384_, lean_object* v_R_385_, lean_object* v_a_386_, lean_object* v_b_387_, lean_object* v_c_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(v_s_383_, v_a_386_, v_b_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___boxed(lean_object* v_s_390_, lean_object* v_inst_391_, lean_object* v_R_392_, lean_object* v_a_393_, lean_object* v_b_394_, lean_object* v_c_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0(v_s_390_, v_inst_391_, v_R_392_, v_a_393_, v_b_394_, v_c_395_);
lean_dec(v_b_394_);
lean_dec_ref(v_s_390_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(lean_object* v___x_397_, lean_object* v_a_398_, lean_object* v_b_399_){
_start:
{
lean_object* v_str_400_; lean_object* v_startInclusive_401_; lean_object* v_endExclusive_402_; lean_object* v___x_403_; uint8_t v_decide_404_; 
v_str_400_ = lean_ctor_get(v___x_397_, 0);
v_startInclusive_401_ = lean_ctor_get(v___x_397_, 1);
v_endExclusive_402_ = lean_ctor_get(v___x_397_, 2);
v___x_403_ = lean_nat_sub(v_endExclusive_402_, v_startInclusive_401_);
v_decide_404_ = lean_nat_dec_eq(v_a_398_, v___x_403_);
lean_dec(v___x_403_);
if (v_decide_404_ == 0)
{
lean_object* v___x_405_; uint32_t v___x_406_; uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_405_ = lean_nat_add(v_startInclusive_401_, v_a_398_);
v___x_406_ = lean_string_utf8_get_fast(v_str_400_, v___x_405_);
v___x_407_ = 32;
v___x_408_ = lean_uint32_dec_eq(v___x_406_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
lean_dec(v___x_405_);
v___x_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_409_, 0, v_a_398_);
return v___x_409_;
}
else
{
if (v_decide_404_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
lean_dec(v_a_398_);
v___x_410_ = lean_box(0);
v___x_411_ = lean_string_utf8_next_fast(v_str_400_, v___x_405_);
lean_dec(v___x_405_);
v___x_412_ = lean_nat_sub(v___x_411_, v_startInclusive_401_);
v_a_398_ = v___x_412_;
v_b_399_ = v___x_410_;
goto _start;
}
else
{
lean_object* v___x_414_; 
lean_dec(v___x_405_);
v___x_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_414_, 0, v_a_398_);
return v___x_414_;
}
}
}
else
{
lean_dec(v_a_398_);
lean_inc(v_b_399_);
return v_b_399_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg___boxed(lean_object* v___x_415_, lean_object* v_a_416_, lean_object* v_b_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(v___x_415_, v_a_416_, v_b_417_);
lean_dec(v_b_417_);
lean_dec_ref(v___x_415_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(lean_object* v_map_419_, lean_object* v_range_420_){
_start:
{
lean_object* v_source_421_; lean_object* v_start_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_447_; 
v_source_421_ = lean_ctor_get(v_map_419_, 0);
lean_inc_ref(v_source_421_);
lean_dec_ref(v_map_419_);
v_start_422_ = lean_ctor_get(v_range_420_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v_range_420_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v_range_420_, 1);
lean_dec(v_unused_448_);
v___x_424_ = v_range_420_;
v_isShared_425_ = v_isSharedCheck_447_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_start_422_);
lean_dec(v_range_420_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_447_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v_searcher_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v_rangeStart_429_; lean_object* v_start_430_; lean_object* v___x_431_; lean_object* v___y_433_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_searcher_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = lean_string_utf8_byte_size(v_source_421_);
lean_inc_ref_n(v_source_421_, 2);
v___x_428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_428_, 0, v_source_421_);
lean_ctor_set(v___x_428_, 1, v_searcher_426_);
lean_ctor_set(v___x_428_, 2, v___x_427_);
v_rangeStart_429_ = l_String_Slice_pos_x21(v___x_428_, v_start_422_);
lean_dec_ref_known(v___x_428_, 3);
lean_inc(v_rangeStart_429_);
v_start_430_ = l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart(v_source_421_, v_rangeStart_429_);
v___x_431_ = l_String_slice_x21(v_source_421_, v_start_430_, v_rangeStart_429_);
lean_dec(v_rangeStart_429_);
v___x_441_ = lean_box(0);
v___x_442_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(v___x_431_, v_searcher_426_, v___x_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_startInclusive_443_; lean_object* v_endExclusive_444_; lean_object* v___x_445_; 
v_startInclusive_443_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_startInclusive_443_);
v_endExclusive_444_ = lean_ctor_get(v___x_431_, 2);
lean_inc(v_endExclusive_444_);
v___x_445_ = lean_nat_sub(v_endExclusive_444_, v_startInclusive_443_);
lean_dec(v_startInclusive_443_);
lean_dec(v_endExclusive_444_);
v___y_433_ = v___x_445_;
goto v___jp_432_;
}
else
{
lean_object* v_val_446_; 
v_val_446_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_val_446_);
lean_dec_ref_known(v___x_442_, 1);
v___y_433_ = v_val_446_;
goto v___jp_432_;
}
v___jp_432_:
{
lean_object* v_startInclusive_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
v_startInclusive_434_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_startInclusive_434_);
lean_dec_ref(v___x_431_);
v___x_435_ = lean_nat_add(v_startInclusive_434_, v___y_433_);
lean_dec(v___y_433_);
lean_dec(v_startInclusive_434_);
v___x_436_ = lean_nat_sub(v___x_435_, v_start_430_);
lean_dec(v___x_435_);
v___x_437_ = lean_nat_sub(v_start_422_, v_start_430_);
lean_dec(v_start_430_);
lean_dec(v_start_422_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_437_);
lean_ctor_set(v___x_424_, 0, v___x_436_);
v___x_439_ = v___x_424_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v___x_437_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0(lean_object* v___x_449_, lean_object* v_inst_450_, lean_object* v_R_451_, lean_object* v_a_452_, lean_object* v_b_453_, lean_object* v_c_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(v___x_449_, v_a_452_, v_b_453_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___boxed(lean_object* v___x_456_, lean_object* v_inst_457_, lean_object* v_R_458_, lean_object* v_a_459_, lean_object* v_b_460_, lean_object* v_c_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0(v___x_456_, v_inst_457_, v_R_458_, v_a_459_, v_b_460_, v_c_461_);
lean_dec(v_b_460_);
lean_dec_ref(v___x_456_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(lean_object* v_name_463_, lean_object* v_decl_464_, lean_object* v_ref_465_){
_start:
{
lean_object* v_defValue_467_; lean_object* v_descr_468_; lean_object* v_deprecation_x3f_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_defValue_467_ = lean_ctor_get(v_decl_464_, 0);
v_descr_468_ = lean_ctor_get(v_decl_464_, 1);
v_deprecation_x3f_469_ = lean_ctor_get(v_decl_464_, 2);
lean_inc(v_defValue_467_);
v___x_470_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_470_, 0, v_defValue_467_);
lean_inc(v_deprecation_x3f_469_);
lean_inc_ref(v_descr_468_);
lean_inc_n(v_name_463_, 2);
v___x_471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_471_, 0, v_name_463_);
lean_ctor_set(v___x_471_, 1, v_ref_465_);
lean_ctor_set(v___x_471_, 2, v___x_470_);
lean_ctor_set(v___x_471_, 3, v_descr_468_);
lean_ctor_set(v___x_471_, 4, v_deprecation_x3f_469_);
v___x_472_ = lean_register_option(v_name_463_, v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_480_; 
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_480_ == 0)
{
lean_object* v_unused_481_; 
v_unused_481_ = lean_ctor_get(v___x_472_, 0);
lean_dec(v_unused_481_);
v___x_474_ = v___x_472_;
v_isShared_475_ = v_isSharedCheck_480_;
goto v_resetjp_473_;
}
else
{
lean_dec(v___x_472_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_480_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_478_; 
lean_inc(v_defValue_467_);
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v_name_463_);
lean_ctor_set(v___x_476_, 1, v_defValue_467_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_476_);
v___x_478_ = v___x_474_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec(v_name_463_);
v_a_482_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_472_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_472_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_490_, lean_object* v_decl_491_, lean_object* v_ref_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(v_name_490_, v_decl_491_, v_ref_492_);
lean_dec_ref(v_decl_491_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_513_ = ((lean_object*)(l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_));
v___x_514_ = ((lean_object*)(l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_));
v___x_515_ = ((lean_object*)(l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_));
v___x_516_ = l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(v___x_513_, v___x_514_, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4____boxed(lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_();
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(lean_object* v_opts_519_, lean_object* v_opt_520_){
_start:
{
lean_object* v_name_521_; lean_object* v_defValue_522_; lean_object* v_map_523_; lean_object* v___x_524_; 
v_name_521_ = lean_ctor_get(v_opt_520_, 0);
v_defValue_522_ = lean_ctor_get(v_opt_520_, 1);
v_map_523_ = lean_ctor_get(v_opts_519_, 0);
v___x_524_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_523_, v_name_521_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_inc(v_defValue_522_);
return v_defValue_522_;
}
else
{
lean_object* v_val_525_; 
v_val_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_val_525_);
lean_dec_ref_known(v___x_524_, 1);
if (lean_obj_tag(v_val_525_) == 3)
{
lean_object* v_v_526_; 
v_v_526_ = lean_ctor_get(v_val_525_, 0);
lean_inc(v_v_526_);
lean_dec_ref_known(v_val_525_, 1);
return v_v_526_;
}
else
{
lean_dec(v_val_525_);
lean_inc(v_defValue_522_);
return v_defValue_522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0___boxed(lean_object* v_opts_527_, lean_object* v_opt_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(v_opts_527_, v_opt_528_);
lean_dec_ref(v_opt_528_);
lean_dec_ref(v_opts_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth(lean_object* v_o_530_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = l_Lean_Meta_Tactic_TryThis_format_inputWidth;
v___x_532_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(v_o_530_, v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth___boxed(lean_object* v_o_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_Meta_Tactic_TryThis_getInputWidth(v_o_533_);
lean_dec_ref(v_o_533_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty(lean_object* v_x_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
if (lean_obj_tag(v_x_535_) == 0)
{
lean_object* v_kind_539_; lean_object* v_a_540_; lean_object* v___x_541_; 
v_kind_539_ = lean_ctor_get(v_x_535_, 0);
lean_inc(v_kind_539_);
v_a_540_ = lean_ctor_get(v_x_535_, 1);
lean_inc(v_a_540_);
lean_dec_ref_known(v_x_535_, 2);
v___x_541_ = l_Lean_PrettyPrinter_ppCategory(v_kind_539_, v_a_540_, v_a_536_, v_a_537_);
return v___x_541_;
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_550_; 
v_a_542_ = lean_ctor_get(v_x_535_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v_x_535_);
if (v_isSharedCheck_550_ == 0)
{
v___x_544_ = v_x_535_;
v_isShared_545_ = v_isSharedCheck_550_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v_x_535_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_550_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
lean_ctor_set_tag(v___x_544_, 3);
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_549_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; 
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty___boxed(lean_object* v_x_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty(v_x_551_, v_a_552_, v_a_553_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(lean_object* v_s_556_, lean_object* v_w_557_, lean_object* v_indent_558_, lean_object* v_column_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
if (lean_obj_tag(v_s_556_) == 0)
{
lean_object* v_kind_563_; lean_object* v_a_564_; lean_object* v_w_566_; lean_object* v___y_567_; lean_object* v___y_568_; 
v_kind_563_ = lean_ctor_get(v_s_556_, 0);
lean_inc(v_kind_563_);
v_a_564_ = lean_ctor_get(v_s_556_, 1);
lean_inc(v_a_564_);
lean_dec_ref_known(v_s_556_, 2);
if (lean_obj_tag(v_w_557_) == 0)
{
lean_object* v_toCold_587_; lean_object* v_options_588_; lean_object* v___x_589_; 
v_toCold_587_ = lean_ctor_get(v_a_560_, 0);
v_options_588_ = lean_ctor_get(v_toCold_587_, 2);
v___x_589_ = l_Lean_Meta_Tactic_TryThis_getInputWidth(v_options_588_);
v_w_566_ = v___x_589_;
v___y_567_ = v_a_560_;
v___y_568_ = v_a_561_;
goto v___jp_565_;
}
else
{
lean_object* v_val_590_; 
v_val_590_ = lean_ctor_get(v_w_557_, 0);
lean_inc(v_val_590_);
lean_dec_ref_known(v_w_557_, 1);
v_w_566_ = v_val_590_;
v___y_567_ = v_a_560_;
v___y_568_ = v_a_561_;
goto v___jp_565_;
}
v___jp_565_:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_PrettyPrinter_ppCategory(v_kind_563_, v_a_564_, v___y_567_, v___y_568_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_578_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_578_ == 0)
{
v___x_572_ = v___x_569_;
v_isShared_573_ = v_isSharedCheck_578_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_578_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_574_ = l_Std_Format_pretty(v_a_570_, v_w_566_, v_indent_558_, v_column_559_);
lean_dec(v_w_566_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v___x_574_);
v___x_576_ = v___x_572_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v_w_566_);
lean_dec(v_column_559_);
lean_dec(v_indent_558_);
v_a_579_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_569_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_569_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec(v_column_559_);
lean_dec(v_indent_558_);
lean_dec(v_w_557_);
v_a_591_ = lean_ctor_get(v_s_556_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v_s_556_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v_s_556_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v_s_556_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set_tag(v___x_593_, 0);
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra___boxed(lean_object* v_s_599_, lean_object* v_w_600_, lean_object* v_indent_601_, lean_object* v_column_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(v_s_599_, v_w_600_, v_indent_601_, v_column_602_, v_a_603_, v_a_604_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(lean_object* v_s_607_, lean_object* v_w_608_, lean_object* v_indent_609_, lean_object* v_column_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_suggestion_614_; lean_object* v___x_615_; 
v_suggestion_614_ = lean_ctor_get(v_s_607_, 0);
lean_inc_ref(v_suggestion_614_);
lean_dec_ref(v_s_607_);
v___x_615_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(v_suggestion_614_, v_w_608_, v_indent_609_, v_column_610_, v_a_611_, v_a_612_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty___boxed(lean_object* v_s_616_, lean_object* v_w_617_, lean_object* v_indent_618_, lean_object* v_column_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(v_s_616_, v_w_617_, v_indent_618_, v_column_619_, v_a_620_, v_a_621_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(lean_object* v_s_624_, lean_object* v_range_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_toCold_629_; lean_object* v_fileMap_630_; lean_object* v___x_631_; lean_object* v_fst_632_; lean_object* v_snd_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_toCold_629_ = lean_ctor_get(v_a_626_, 0);
v_fileMap_630_ = lean_ctor_get(v_toCold_629_, 1);
lean_inc_ref(v_range_625_);
lean_inc_ref(v_fileMap_630_);
v___x_631_ = l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(v_fileMap_630_, v_range_625_);
v_fst_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_fst_632_);
v_snd_633_ = lean_ctor_get(v___x_631_, 1);
lean_inc(v_snd_633_);
lean_dec_ref(v___x_631_);
v___x_634_ = lean_box(0);
v___x_635_ = l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(v_s_624_, v___x_634_, v_fst_632_, v_snd_633_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_645_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_645_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_645_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_645_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
lean_inc_ref(v_fileMap_630_);
v___x_640_ = l_Lean_FileMap_utf8RangeToLspRange(v_fileMap_630_, v_range_625_);
v___x_641_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v_a_636_);
lean_ctor_set(v___x_641_, 2, v___x_634_);
lean_ctor_set(v___x_641_, 3, v___x_634_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_641_);
v___x_643_ = v___x_638_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v_range_625_);
v_a_646_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_635_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_635_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit___boxed(lean_object* v_s_654_, lean_object* v_range_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(v_s_654_, v_range_655_, v_a_656_, v_a_657_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
return v_res_659_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle___aux__1 = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle___aux__1();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle___aux__1);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle);
l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success = _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success);
l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis = _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis);
l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible = _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion);
l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = _init_l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_);
l_Lean_Meta_Tactic_TryThis_instTypeNameTryThisInfo = _init_l_Lean_Meta_Tactic_TryThis_instTypeNameTryThisInfo();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instTypeNameTryThisInfo);
res = l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Tactic_TryThis_format_inputWidth = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_format_inputWidth);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_TryThis(builtin);
}
#ifdef __cplusplus
}
#endif

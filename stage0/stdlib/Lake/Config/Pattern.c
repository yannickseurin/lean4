// Lean compiler output
// Module: Lake.Config.Pattern
// Imports: public import Init.System.FilePath public import Std.Data.TreeMap.Basic public import Lean.Data.Name import Lake.Util.Name import Init.Data.String.TakeDrop public import Init.Data.String.Basic import Init.Data.Option.Coe import Init.Omega
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_flip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
lean_object* l_System_FilePath_fileName(lean_object*);
static const lean_string_object l_Lake_term___x3d_x7e___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__0 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__0_value;
static const lean_string_object l_Lake_term___x3d_x7e___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_=~_"};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__1 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__1_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_term___x3d_x7e___00__closed__2_value_aux_0),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 9, 58, 153, 13, 139, 75, 99)}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__2 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__2_value;
static const lean_string_object l_Lake_term___x3d_x7e___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__3 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__3_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__4 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__4_value;
static const lean_string_object l_Lake_term___x3d_x7e___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " =~ "};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__5 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__5_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_term___x3d_x7e___00__closed__5_value)}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__6 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__6_value;
static const lean_string_object l_Lake_term___x3d_x7e___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__7 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__7_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__8 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__8_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lake_term___x3d_x7e___00__closed__8_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__9 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__9_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_term___x3d_x7e___00__closed__4_value),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__6_value),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__9_value)}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__10 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__10_value;
static const lean_ctor_object l_Lake_term___x3d_x7e___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lake_term___x3d_x7e___00__closed__2_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__10_value)}};
static const lean_object* l_Lake_term___x3d_x7e___00__closed__11 = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lake_term___x3d_x7e__ = (const lean_object*)&l_Lake_term___x3d_x7e___00__closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__3_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "IsPattern.satisfies"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__5_value;
static lean_once_cell_t l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__6;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "IsPattern"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "satisfies"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(203, 197, 37, 81, 87, 23, 4, 135)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__9_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(125, 16, 93, 115, 165, 91, 116, 240)}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__9_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term___x3d_x7e___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 171, 122, 173, 131, 19, 19, 187)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(73, 173, 192, 140, 178, 195, 226, 127)}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__11_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__12_value;
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__13_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__14_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_not_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_not_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_all_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_all_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_any_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_any_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_coe_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_coe_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instInhabitedPattern_default__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instInhabitedPattern_default__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instInhabitedPattern_default__1___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instInhabitedPattern_default__1___redArg___closed__0 = (const lean_object*)&l_Lake_instInhabitedPattern_default__1___redArg___closed__0_value;
static lean_once_cell_t l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPattern_default__1___redArg___closed__1;
static lean_once_cell_t l_Lake_instInhabitedPattern_default__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPattern_default__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1___redArg();
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_instInhabitedPattern_default__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPattern_default__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern___redArg();
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedPatternDescr_default__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPatternDescr_default__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr_default__1___redArg();
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr_default__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_instInhabitedPatternDescr_default__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPatternDescr_default__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr_default__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr___redArg();
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoePatternDescr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoePatternDescr___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoePatternDescr___redArg___closed__0 = (const lean_object*)&l_Lake_instCoePatternDescr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr___redArg();
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Pattern_matches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_matches___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Pattern_matches(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_matches___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instIsPatternPattern___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instIsPatternPattern___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instIsPatternPattern___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instIsPatternPattern___redArg___closed__0 = (const lean_object*)&l_Lake_instIsPatternPattern___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern___redArg();
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__0 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__0_value;
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__1 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__1_value;
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__2 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__2_value;
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__3 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__3_value;
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__4 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__4_value;
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__5 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__5_value;
static const lean_closure_object l_Lake_PatternDescr_matches___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__6 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__6_value;
static const lean_ctor_object l_Lake_PatternDescr_matches___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__0_value),((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__1_value)}};
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__7 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__7_value;
static const lean_ctor_object l_Lake_PatternDescr_matches___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__7_value),((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__2_value),((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__3_value),((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__4_value),((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__5_value)}};
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__8 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__8_value;
static const lean_ctor_object l_Lake_PatternDescr_matches___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__8_value),((lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__6_value)}};
static const lean_object* l_Lake_PatternDescr_matches___redArg___closed__9 = (const lean_object*)&l_Lake_PatternDescr_matches___redArg___closed__9_value;
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instIsPatternPatternDescr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instIsPatternPatternDescr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_ofFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeForallBoolPattern___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeForallBoolPattern___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeForallBoolPattern___redArg___closed__0 = (const lean_object*)&l_Lake_instCoeForallBoolPattern___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern___redArg();
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Pattern_ofDescr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_ofDescr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_ofDescr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_ofDescr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Pattern_not___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_not___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_not___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_not(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_all(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_any(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_PatternDescr_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_PatternDescr_empty___redArg___closed__0 = (const lean_object*)&l_Lake_PatternDescr_empty___redArg___closed__0_value;
static const lean_ctor_object l_Lake_PatternDescr_empty___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_PatternDescr_empty___redArg___closed__0_value)}};
static const lean_object* l_Lake_PatternDescr_empty___redArg___closed__1 = (const lean_object*)&l_Lake_PatternDescr_empty___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_PatternDescr_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_PatternDescr_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_PatternDescr_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PatternDescr_empty___closed__0;
LEAN_EXPORT lean_object* l_Lake_PatternDescr_empty(lean_object*, lean_object*);
static const lean_string_object l_Lake_Pattern_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "empty"};
static const lean_object* l_Lake_Pattern_empty___redArg___closed__0 = (const lean_object*)&l_Lake_Pattern_empty___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Pattern_empty___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Pattern_empty___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 82, 154, 99, 191, 124, 127, 105)}};
static const lean_object* l_Lake_Pattern_empty___redArg___closed__1 = (const lean_object*)&l_Lake_Pattern_empty___redArg___closed__1_value;
static lean_once_cell_t l_Lake_Pattern_empty___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Pattern_empty___redArg___closed__2;
static lean_once_cell_t l_Lake_Pattern_empty___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Pattern_empty___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lake_Pattern_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_Pattern_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_Pattern_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Pattern_empty___closed__0;
LEAN_EXPORT lean_object* l_Lake_Pattern_empty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPatternDescr___redArg();
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPatternDescr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPatternDescr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPattern___redArg();
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPattern___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPattern(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_PatternDescr_star___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PatternDescr_empty___redArg___closed__0_value)}};
static const lean_object* l_Lake_PatternDescr_star___redArg___closed__0 = (const lean_object*)&l_Lake_PatternDescr_star___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_PatternDescr_star___redArg();
LEAN_EXPORT lean_object* l_Lake_PatternDescr_star___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_PatternDescr_star___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PatternDescr_star___closed__0;
LEAN_EXPORT lean_object* l_Lake_PatternDescr_star(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Pattern_star___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Pattern_star___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Pattern_star___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Pattern_star___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Pattern_star___redArg___closed__0 = (const lean_object*)&l_Lake_Pattern_star___redArg___closed__0_value;
static const lean_string_object l_Lake_Pattern_star___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "star"};
static const lean_object* l_Lake_Pattern_star___redArg___closed__1 = (const lean_object*)&l_Lake_Pattern_star___redArg___closed__1_value;
static const lean_ctor_object l_Lake_Pattern_star___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Pattern_star___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 171, 138, 133, 66, 70, 83, 43)}};
static const lean_object* l_Lake_Pattern_star___redArg___closed__2 = (const lean_object*)&l_Lake_Pattern_star___redArg___closed__2_value;
static lean_once_cell_t l_Lake_Pattern_star___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Pattern_star___redArg___closed__3;
static lean_once_cell_t l_Lake_Pattern_star___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Pattern_star___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lake_Pattern_star___redArg();
LEAN_EXPORT lean_object* l_Lake_Pattern_star___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_Pattern_star___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Pattern_star___closed__0;
LEAN_EXPORT lean_object* l_Lake_Pattern_star(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_mem_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_mem_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_startsWith_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_startsWith_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_endsWith_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_endsWith_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_instInhabitedStrPatDescr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedStrPatDescr_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedStrPatDescr_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedStrPatDescr_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedStrPatDescr_default___closed__0_value)}};
static const lean_object* l_Lake_instInhabitedStrPatDescr_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedStrPatDescr_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedStrPatDescr_default = (const lean_object*)&l_Lake_instInhabitedStrPatDescr_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedStrPatDescr = (const lean_object*)&l_Lake_instInhabitedStrPatDescr_default___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lake_StrPatDescr_matches_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lake_StrPatDescr_matches_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lake_StrPatDescr_matches_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lake_StrPatDescr_matches_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_StrPatDescr_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_matches___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instIsPatternStrPatDescrString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StrPatDescr_matches___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instIsPatternStrPatDescrString___closed__0 = (const lean_object*)&l_Lake_instIsPatternStrPatDescrString___closed__0_value;
static const lean_closure_object l_Lake_instIsPatternStrPatDescrString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_flip, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instIsPatternStrPatDescrString___closed__0_value)} };
static const lean_object* l_Lake_instIsPatternStrPatDescrString___closed__1 = (const lean_object*)&l_Lake_instIsPatternStrPatDescrString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instIsPatternStrPatDescrString = (const lean_object*)&l_Lake_instIsPatternStrPatDescrString___closed__1_value;
LEAN_EXPORT uint8_t l_Lake_StrPat_mem___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPat_mem___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPat_mem(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeArrayStringStrPatDescr___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeArrayStringStrPatDescr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeArrayStringStrPatDescr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeArrayStringStrPatDescr___closed__0 = (const lean_object*)&l_Lake_instCoeArrayStringStrPatDescr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeArrayStringStrPatDescr = (const lean_object*)&l_Lake_instCoeArrayStringStrPatDescr___closed__0_value;
static const lean_closure_object l_Lake_instCoeArrayStringStrPat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StrPat_mem, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeArrayStringStrPat___closed__0 = (const lean_object*)&l_Lake_instCoeArrayStringStrPat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeArrayStringStrPat = (const lean_object*)&l_Lake_instCoeArrayStringStrPat___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StrPat_startsWith(lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPat_endsWith(lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_beq(lean_object*);
LEAN_EXPORT uint8_t l_Lake_StrPat_beq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StrPat_beq___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_StrPat_beq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_Lake_StrPat_beq___closed__0 = (const lean_object*)&l_Lake_StrPat_beq___closed__0_value;
static const lean_ctor_object l_Lake_StrPat_beq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_StrPat_beq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 198, 220, 8, 234, 83, 51, 77)}};
static const lean_object* l_Lake_StrPat_beq___closed__1 = (const lean_object*)&l_Lake_StrPat_beq___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_StrPat_beq(lean_object*);
static const lean_closure_object l_Lake_instCoeStringStrPatDescr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StrPatDescr_beq, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeStringStrPatDescr___closed__0 = (const lean_object*)&l_Lake_instCoeStringStrPatDescr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeStringStrPatDescr = (const lean_object*)&l_Lake_instCoeStringStrPatDescr___closed__0_value;
static const lean_closure_object l_Lake_instCoeStringStrPat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StrPat_beq, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeStringStrPat___closed__0 = (const lean_object*)&l_Lake_instCoeStringStrPat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeStringStrPat = (const lean_object*)&l_Lake_instCoeStringStrPat___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_path_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_path_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_extension_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_extension_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_fileName_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_fileName_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedPathPatDescr_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPathPatDescr_default___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPathPatDescr_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPathPatDescr;
LEAN_EXPORT uint8_t l_Lake_PathPatDescr_eq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_eq___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_eq(lean_object*);
LEAN_EXPORT uint8_t l_Lake_PathPatDescr_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_matches___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instIsPatternPathPatDescrFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PathPatDescr_matches___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instIsPatternPathPatDescrFilePath___closed__0 = (const lean_object*)&l_Lake_instIsPatternPathPatDescrFilePath___closed__0_value;
static const lean_closure_object l_Lake_instIsPatternPathPatDescrFilePath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_flip, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instIsPatternPathPatDescrFilePath___closed__0_value)} };
static const lean_object* l_Lake_instIsPatternPathPatDescrFilePath___closed__1 = (const lean_object*)&l_Lake_instIsPatternPathPatDescrFilePath___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instIsPatternPathPatDescrFilePath = (const lean_object*)&l_Lake_instIsPatternPathPatDescrFilePath___closed__1_value;
LEAN_EXPORT uint8_t l_Lake_PathPat_path___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPat_path___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPat_path(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPat_extension(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PathPat_fileName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Pattern_0__String_Pos_Raw_get_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Pattern_0__String_Pos_Raw_get_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_isVerLike(lean_object*);
LEAN_EXPORT lean_object* l_Lake_isVerLike___boxed(lean_object*);
static const lean_closure_object l_Lake_StrPat_verLike___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_isVerLike___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StrPat_verLike___closed__0 = (const lean_object*)&l_Lake_StrPat_verLike___closed__0_value;
static const lean_string_object l_Lake_StrPat_verLike___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verLike"};
static const lean_object* l_Lake_StrPat_verLike___closed__1 = (const lean_object*)&l_Lake_StrPat_verLike___closed__1_value;
static const lean_ctor_object l_Lake_StrPat_verLike___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_StrPat_verLike___closed__1_value),LEAN_SCALAR_PTR_LITERAL(106, 174, 94, 161, 245, 97, 255, 76)}};
static const lean_object* l_Lake_StrPat_verLike___closed__2 = (const lean_object*)&l_Lake_StrPat_verLike___closed__2_value;
static const lean_ctor_object l_Lake_StrPat_verLike___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_StrPat_verLike___closed__0_value),((lean_object*)&l_Lake_StrPat_verLike___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_StrPat_verLike___closed__3 = (const lean_object*)&l_Lake_StrPat_verLike___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_StrPat_verLike = (const lean_object*)&l_Lake_StrPat_verLike___closed__3_value;
static const lean_string_object l_Lake_defaultVersionTags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lake_defaultVersionTags___closed__0 = (const lean_object*)&l_Lake_defaultVersionTags___closed__0_value;
static const lean_ctor_object l_Lake_defaultVersionTags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_defaultVersionTags___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l_Lake_defaultVersionTags___closed__1 = (const lean_object*)&l_Lake_defaultVersionTags___closed__1_value;
static const lean_ctor_object l_Lake_defaultVersionTags___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_StrPat_verLike___closed__0_value),((lean_object*)&l_Lake_defaultVersionTags___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_defaultVersionTags___closed__2 = (const lean_object*)&l_Lake_defaultVersionTags___closed__2_value;
LEAN_EXPORT const lean_object* l_Lake_defaultVersionTags = (const lean_object*)&l_Lake_defaultVersionTags___closed__2_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_versionTagPresets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_versionTagPresets___closed__0;
static lean_once_cell_t l_Lake_versionTagPresets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_versionTagPresets___closed__1;
LEAN_EXPORT lean_object* l_Lake_versionTagPresets;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__6(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__5));
v___x_39_ = l_String_toRawSubstring_x27(v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1(lean_object* v_x_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = ((lean_object*)(l_Lake_term___x3d_x7e___00__closed__2));
lean_inc(v_x_58_);
v___x_62_ = l_Lean_Syntax_isOfKind(v_x_58_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec(v_x_58_);
v___x_63_ = lean_box(1);
v___x_64_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v_a_60_);
return v___x_64_;
}
else
{
lean_object* v_quotContext_65_; lean_object* v_currMacroScope_66_; lean_object* v_ref_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_quotContext_65_ = lean_ctor_get(v_a_59_, 1);
v_currMacroScope_66_ = lean_ctor_get(v_a_59_, 2);
v_ref_67_ = lean_ctor_get(v_a_59_, 5);
v___x_68_ = lean_unsigned_to_nat(0u);
v___x_69_ = l_Lean_Syntax_getArg(v_x_58_, v___x_68_);
v___x_70_ = lean_unsigned_to_nat(2u);
v___x_71_ = l_Lean_Syntax_getArg(v_x_58_, v___x_70_);
lean_dec(v_x_58_);
v___x_72_ = 0;
v___x_73_ = l_Lean_SourceInfo_fromRef(v_ref_67_, v___x_72_);
v___x_74_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4));
v___x_75_ = lean_obj_once(&l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__6, &l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__6_once, _init_l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__6);
v___x_76_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__9));
lean_inc(v_currMacroScope_66_);
lean_inc(v_quotContext_65_);
v___x_77_ = l_Lean_addMacroScope(v_quotContext_65_, v___x_76_, v_currMacroScope_66_);
v___x_78_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__12));
lean_inc_n(v___x_73_, 2);
v___x_79_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_79_, 0, v___x_73_);
lean_ctor_set(v___x_79_, 1, v___x_75_);
lean_ctor_set(v___x_79_, 2, v___x_77_);
lean_ctor_set(v___x_79_, 3, v___x_78_);
v___x_80_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__14));
v___x_81_ = l_Lean_Syntax_node2(v___x_73_, v___x_80_, v___x_69_, v___x_71_);
v___x_82_ = l_Lean_Syntax_node2(v___x_73_, v___x_74_, v___x_79_, v___x_81_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v_a_60_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___boxed(lean_object* v_x_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1(v_x_84_, v_a_85_, v_a_86_);
lean_dec_ref(v_a_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1(lean_object* v_x_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______macroRules__Lake__term___x3d_x7e____1___closed__4));
lean_inc(v_x_91_);
v___x_95_ = l_Lean_Syntax_isOfKind(v_x_91_, v___x_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
lean_dec(v_x_91_);
v___x_96_ = lean_box(0);
v___x_97_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_93_);
return v___x_97_;
}
else
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = l_Lean_Syntax_getArg(v_x_91_, v___x_98_);
v___x_100_ = ((lean_object*)(l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___closed__1));
lean_inc(v___x_99_);
v___x_101_ = l_Lean_Syntax_isOfKind(v___x_99_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v___x_99_);
lean_dec(v_x_91_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v_a_93_);
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_104_ = lean_unsigned_to_nat(1u);
v___x_105_ = l_Lean_Syntax_getArg(v_x_91_, v___x_104_);
lean_dec(v_x_91_);
v___x_106_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_105_);
v___x_107_ = l_Lean_Syntax_matchesNull(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; 
lean_dec(v___x_105_);
lean_dec(v___x_99_);
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v_a_93_);
return v___x_109_;
}
else
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v_ref_112_; uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_110_ = l_Lean_Syntax_getArg(v___x_105_, v___x_98_);
v___x_111_ = l_Lean_Syntax_getArg(v___x_105_, v___x_104_);
lean_dec(v___x_105_);
v_ref_112_ = l_Lean_replaceRef(v___x_99_, v_a_92_);
lean_dec(v___x_99_);
v___x_113_ = 0;
v___x_114_ = l_Lean_SourceInfo_fromRef(v_ref_112_, v___x_113_);
lean_dec(v_ref_112_);
v___x_115_ = ((lean_object*)(l_Lake_term___x3d_x7e___00__closed__2));
v___x_116_ = ((lean_object*)(l_Lake_term___x3d_x7e___00__closed__5));
lean_inc(v___x_114_);
v___x_117_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_114_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = l_Lean_Syntax_node3(v___x_114_, v___x_115_, v___x_110_, v___x_117_, v___x_111_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v_a_93_);
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1___boxed(lean_object* v_x_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lake___aux__Lake__Config__Pattern______unexpand__Lake__IsPattern__satisfies__1(v_x_120_, v_a_121_, v_a_122_);
lean_dec(v_a_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx___redArg(lean_object* v_x_124_){
_start:
{
switch(lean_obj_tag(v_x_124_))
{
case 0:
{
lean_object* v___x_125_; 
v___x_125_ = lean_unsigned_to_nat(0u);
return v___x_125_;
}
case 1:
{
lean_object* v___x_126_; 
v___x_126_ = lean_unsigned_to_nat(1u);
return v___x_126_;
}
case 2:
{
lean_object* v___x_127_; 
v___x_127_ = lean_unsigned_to_nat(2u);
return v___x_127_;
}
default: 
{
lean_object* v___x_128_; 
v___x_128_ = lean_unsigned_to_nat(3u);
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx___redArg___boxed(lean_object* v_x_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lake_PatternDescr_ctorIdx___redArg(v_x_129_);
lean_dec_ref(v_x_129_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx(lean_object* v_00_u03b1_131_, lean_object* v_00_u03b2_132_, lean_object* v_x_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lake_PatternDescr_ctorIdx___redArg(v_x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorIdx___boxed(lean_object* v_00_u03b1_135_, lean_object* v_00_u03b2_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lake_PatternDescr_ctorIdx(v_00_u03b1_135_, v_00_u03b2_136_, v_x_137_);
lean_dec_ref(v_x_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorElim___redArg(lean_object* v_t_139_, lean_object* v_k_140_){
_start:
{
if (lean_obj_tag(v_t_139_) == 3)
{
lean_object* v_p_141_; lean_object* v___x_142_; 
v_p_141_ = lean_ctor_get(v_t_139_, 0);
lean_inc(v_p_141_);
lean_dec_ref_known(v_t_139_, 1);
v___x_142_ = lean_apply_1(v_k_140_, v_p_141_);
return v___x_142_;
}
else
{
lean_object* v_p_143_; lean_object* v___x_144_; 
v_p_143_ = lean_ctor_get(v_t_139_, 0);
lean_inc_ref(v_p_143_);
lean_dec_ref(v_t_139_);
v___x_144_ = lean_apply_1(v_k_140_, v_p_143_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorElim(lean_object* v_00_u03b1_145_, lean_object* v_00_u03b2_146_, lean_object* v_motive__2_147_, lean_object* v_ctorIdx_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_k_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_149_, v_k_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_ctorElim___boxed(lean_object* v_00_u03b1_153_, lean_object* v_00_u03b2_154_, lean_object* v_motive__2_155_, lean_object* v_ctorIdx_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_k_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lake_PatternDescr_ctorElim(v_00_u03b1_153_, v_00_u03b2_154_, v_motive__2_155_, v_ctorIdx_156_, v_t_157_, v_h_158_, v_k_159_);
lean_dec(v_ctorIdx_156_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_not_elim___redArg(lean_object* v_t_161_, lean_object* v_not_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_161_, v_not_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_not_elim(lean_object* v_00_u03b1_164_, lean_object* v_00_u03b2_165_, lean_object* v_motive__2_166_, lean_object* v_t_167_, lean_object* v_h_168_, lean_object* v_not_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_167_, v_not_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_all_elim___redArg(lean_object* v_t_171_, lean_object* v_all_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_171_, v_all_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_all_elim(lean_object* v_00_u03b1_174_, lean_object* v_00_u03b2_175_, lean_object* v_motive__2_176_, lean_object* v_t_177_, lean_object* v_h_178_, lean_object* v_all_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_177_, v_all_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_any_elim___redArg(lean_object* v_t_181_, lean_object* v_any_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_181_, v_any_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_any_elim(lean_object* v_00_u03b1_184_, lean_object* v_00_u03b2_185_, lean_object* v_motive__2_186_, lean_object* v_t_187_, lean_object* v_h_188_, lean_object* v_any_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_187_, v_any_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_coe_elim___redArg(lean_object* v_t_191_, lean_object* v_coe_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_191_, v_coe_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_coe_elim(lean_object* v_00_u03b1_194_, lean_object* v_00_u03b2_195_, lean_object* v_motive__2_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_coe_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lake_PatternDescr_ctorElim___redArg(v_t_197_, v_coe_199_);
return v___x_200_;
}
}
LEAN_EXPORT uint8_t l_Lake_instInhabitedPattern_default__1___redArg___lam__0(lean_object* v_x_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = 0;
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1___redArg___lam__0___boxed(lean_object* v_x_203_){
_start:
{
uint8_t v_res_204_; lean_object* v_r_205_; 
v_res_204_ = l_Lake_instInhabitedPattern_default__1___redArg___lam__0(v_x_203_);
lean_dec(v_x_203_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
static lean_object* _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_box(0);
v___x_208_ = l_unsafeCast___redArg(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___f_211_; lean_object* v___x_212_; 
v___x_209_ = lean_box(0);
v___x_210_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___f_211_ = ((lean_object*)(l_Lake_instInhabitedPattern_default__1___redArg___closed__0));
v___x_212_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_212_, 0, v___f_211_);
lean_ctor_set(v___x_212_, 1, v___x_210_);
lean_ctor_set(v___x_212_, 2, v___x_209_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1___redArg(){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__2, &l_Lake_instInhabitedPattern_default__1___redArg___closed__2_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__2);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1___redArg___boxed(lean_object* v___dummy_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lake_instInhabitedPattern_default__1___redArg();
return v_res_216_;
}
}
static lean_object* _init_l_Lake_instInhabitedPattern_default__1___closed__0(void){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lake_instInhabitedPattern_default__1___redArg();
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern_default__1(lean_object* v_00_u03b1_218_, lean_object* v_00_u03b2_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___closed__0, &l_Lake_instInhabitedPattern_default__1___closed__0_once, _init_l_Lake_instInhabitedPattern_default__1___closed__0);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern___redArg(){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___closed__0, &l_Lake_instInhabitedPattern_default__1___closed__0_once, _init_l_Lake_instInhabitedPattern_default__1___closed__0);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern___redArg___boxed(lean_object* v___dummy_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lake_instInhabitedPattern___redArg();
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPattern(lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___closed__0, &l_Lake_instInhabitedPattern_default__1___closed__0_once, _init_l_Lake_instInhabitedPattern_default__1___closed__0);
return v___x_227_;
}
}
static lean_object* _init_l_Lake_instInhabitedPatternDescr_default__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___closed__0, &l_Lake_instInhabitedPattern_default__1___closed__0_once, _init_l_Lake_instInhabitedPattern_default__1___closed__0);
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr_default__1___redArg(){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = lean_obj_once(&l_Lake_instInhabitedPatternDescr_default__1___redArg___closed__0, &l_Lake_instInhabitedPatternDescr_default__1___redArg___closed__0_once, _init_l_Lake_instInhabitedPatternDescr_default__1___redArg___closed__0);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr_default__1___redArg___boxed(lean_object* v___dummy_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lake_instInhabitedPatternDescr_default__1___redArg();
return v_res_233_;
}
}
static lean_object* _init_l_Lake_instInhabitedPatternDescr_default__1___closed__0(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Lake_instInhabitedPatternDescr_default__1___redArg();
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr_default__1(lean_object* v_00_u03b1_235_, lean_object* v_00_u03b2_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_obj_once(&l_Lake_instInhabitedPatternDescr_default__1___closed__0, &l_Lake_instInhabitedPatternDescr_default__1___closed__0_once, _init_l_Lake_instInhabitedPatternDescr_default__1___closed__0);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr___redArg(){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lake_instInhabitedPatternDescr_default__1___closed__0, &l_Lake_instInhabitedPatternDescr_default__1___closed__0_once, _init_l_Lake_instInhabitedPatternDescr_default__1___closed__0);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr___redArg___boxed(lean_object* v___dummy_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lake_instInhabitedPatternDescr___redArg();
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPatternDescr(lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = lean_obj_once(&l_Lake_instInhabitedPatternDescr_default__1___closed__0, &l_Lake_instInhabitedPatternDescr_default__1___closed__0_once, _init_l_Lake_instInhabitedPatternDescr_default__1___closed__0);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr___redArg___lam__0(lean_object* v_p_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_246_, 0, v_p_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr___redArg(){
_start:
{
lean_object* v___f_249_; 
v___f_249_ = ((lean_object*)(l_Lake_instCoePatternDescr___redArg___closed__0));
return v___f_249_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr___redArg___boxed(lean_object* v___dummy_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lake_instCoePatternDescr___redArg();
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescr(lean_object* v_00_u03b2_252_, lean_object* v_00_u03b1_253_){
_start:
{
lean_object* v___f_254_; 
v___f_254_ = ((lean_object*)(l_Lake_instCoePatternDescr___redArg___closed__0));
return v___f_254_;
}
}
LEAN_EXPORT uint8_t l_Lake_Pattern_matches___redArg(lean_object* v_a_255_, lean_object* v_self_256_){
_start:
{
lean_object* v_filter_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_filter_257_ = lean_ctor_get(v_self_256_, 0);
lean_inc_ref(v_filter_257_);
lean_dec_ref(v_self_256_);
v___x_258_ = lean_apply_1(v_filter_257_, v_a_255_);
v___x_259_ = lean_unbox(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_matches___redArg___boxed(lean_object* v_a_260_, lean_object* v_self_261_){
_start:
{
uint8_t v_res_262_; lean_object* v_r_263_; 
v_res_262_ = l_Lake_Pattern_matches___redArg(v_a_260_, v_self_261_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT uint8_t l_Lake_Pattern_matches(lean_object* v_00_u03b1_264_, lean_object* v_00_u03b2_265_, lean_object* v_a_266_, lean_object* v_self_267_){
_start:
{
lean_object* v_filter_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v_filter_268_ = lean_ctor_get(v_self_267_, 0);
lean_inc_ref(v_filter_268_);
lean_dec_ref(v_self_267_);
v___x_269_ = lean_apply_1(v_filter_268_, v_a_266_);
v___x_270_ = lean_unbox(v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_matches___boxed(lean_object* v_00_u03b1_271_, lean_object* v_00_u03b2_272_, lean_object* v_a_273_, lean_object* v_self_274_){
_start:
{
uint8_t v_res_275_; lean_object* v_r_276_; 
v_res_275_ = l_Lake_Pattern_matches(v_00_u03b1_271_, v_00_u03b2_272_, v_a_273_, v_self_274_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
LEAN_EXPORT uint8_t l_Lake_instIsPatternPattern___redArg___lam__0(lean_object* v_self_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_filter_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_filter_279_ = lean_ctor_get(v_self_277_, 0);
lean_inc_ref(v_filter_279_);
lean_dec_ref(v_self_277_);
v___x_280_ = lean_apply_1(v_filter_279_, v___y_278_);
v___x_281_ = lean_unbox(v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern___redArg___lam__0___boxed(lean_object* v_self_282_, lean_object* v___y_283_){
_start:
{
uint8_t v_res_284_; lean_object* v_r_285_; 
v_res_284_ = l_Lake_instIsPatternPattern___redArg___lam__0(v_self_282_, v___y_283_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern___redArg(){
_start:
{
lean_object* v___f_288_; 
v___f_288_ = ((lean_object*)(l_Lake_instIsPatternPattern___redArg___closed__0));
return v___f_288_;
}
}
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern___redArg___boxed(lean_object* v___dummy_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lake_instIsPatternPattern___redArg();
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lake_instIsPatternPattern(lean_object* v_00_u03b1_291_, lean_object* v_00_u03b2_292_){
_start:
{
lean_object* v___f_293_; 
v___f_293_ = ((lean_object*)(l_Lake_instIsPatternPattern___redArg___closed__0));
return v___f_293_;
}
}
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches___redArg___lam__0(lean_object* v_val_294_, uint8_t v___x_295_, lean_object* v_v_296_){
_start:
{
lean_object* v_filter_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v_filter_297_ = lean_ctor_get(v_v_296_, 0);
lean_inc_ref(v_filter_297_);
lean_dec_ref(v_v_296_);
v___x_298_ = lean_apply_1(v_filter_297_, v_val_294_);
v___x_299_ = lean_unbox(v___x_298_);
if (v___x_299_ == 0)
{
return v___x_295_;
}
else
{
uint8_t v___x_300_; 
v___x_300_ = 0;
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___redArg___lam__0___boxed(lean_object* v_val_301_, lean_object* v___x_302_, lean_object* v_v_303_){
_start:
{
uint8_t v___x_202__boxed_304_; uint8_t v_res_305_; lean_object* v_r_306_; 
v___x_202__boxed_304_ = lean_unbox(v___x_302_);
v_res_305_ = l_Lake_PatternDescr_matches___redArg___lam__0(v_val_301_, v___x_202__boxed_304_, v_v_303_);
v_r_306_ = lean_box(v_res_305_);
return v_r_306_;
}
}
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches___redArg___lam__1(lean_object* v_val_307_, lean_object* v_x_308_){
_start:
{
lean_object* v_filter_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_filter_309_ = lean_ctor_get(v_x_308_, 0);
lean_inc_ref(v_filter_309_);
lean_dec_ref(v_x_308_);
v___x_310_ = lean_apply_1(v_filter_309_, v_val_307_);
v___x_311_ = lean_unbox(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___redArg___lam__1___boxed(lean_object* v_val_312_, lean_object* v_x_313_){
_start:
{
uint8_t v_res_314_; lean_object* v_r_315_; 
v_res_314_ = l_Lake_PatternDescr_matches___redArg___lam__1(v_val_312_, v_x_313_);
v_r_315_ = lean_box(v_res_314_);
return v_r_315_;
}
}
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches___redArg(lean_object* v_inst_335_, lean_object* v_val_336_, lean_object* v_self_337_){
_start:
{
switch(lean_obj_tag(v_self_337_))
{
case 0:
{
lean_object* v_p_338_; lean_object* v_filter_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
lean_dec_ref(v_inst_335_);
v_p_338_ = lean_ctor_get(v_self_337_, 0);
lean_inc_ref(v_p_338_);
lean_dec_ref_known(v_self_337_, 1);
v_filter_339_ = lean_ctor_get(v_p_338_, 0);
lean_inc_ref(v_filter_339_);
lean_dec_ref(v_p_338_);
v___x_340_ = lean_apply_1(v_filter_339_, v_val_336_);
v___x_341_ = lean_unbox(v___x_340_);
if (v___x_341_ == 0)
{
uint8_t v___x_342_; 
v___x_342_ = 1;
return v___x_342_;
}
else
{
uint8_t v___x_343_; 
v___x_343_ = 0;
return v___x_343_;
}
}
case 1:
{
lean_object* v_ps_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
lean_dec_ref(v_inst_335_);
v_ps_344_ = lean_ctor_get(v_self_337_, 0);
lean_inc_ref(v_ps_344_);
lean_dec_ref_known(v_self_337_, 1);
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = lean_array_get_size(v_ps_344_);
v___x_347_ = ((lean_object*)(l_Lake_PatternDescr_matches___redArg___closed__9));
v___x_348_ = lean_nat_dec_lt(v___x_345_, v___x_346_);
if (v___x_348_ == 0)
{
uint8_t v___x_349_; 
lean_dec_ref(v_ps_344_);
lean_dec(v_val_336_);
v___x_349_ = 1;
return v___x_349_;
}
else
{
if (v___x_348_ == 0)
{
lean_dec_ref(v_ps_344_);
lean_dec(v_val_336_);
return v___x_348_;
}
else
{
lean_object* v___x_350_; lean_object* v___f_351_; size_t v___x_352_; size_t v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_350_ = lean_box(v___x_348_);
v___f_351_ = lean_alloc_closure((void*)(l_Lake_PatternDescr_matches___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_351_, 0, v_val_336_);
lean_closure_set(v___f_351_, 1, v___x_350_);
v___x_352_ = ((size_t)0ULL);
v___x_353_ = lean_usize_of_nat(v___x_346_);
v___x_354_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_347_, v___f_351_, v_ps_344_, v___x_352_, v___x_353_);
v___x_355_ = lean_unbox(v___x_354_);
lean_dec(v___x_354_);
if (v___x_355_ == 0)
{
return v___x_348_;
}
else
{
uint8_t v___x_356_; 
v___x_356_ = 0;
return v___x_356_;
}
}
}
}
case 2:
{
lean_object* v_ps_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
lean_dec_ref(v_inst_335_);
v_ps_357_ = lean_ctor_get(v_self_337_, 0);
lean_inc_ref(v_ps_357_);
lean_dec_ref_known(v_self_337_, 1);
v___x_358_ = lean_unsigned_to_nat(0u);
v___x_359_ = lean_array_get_size(v_ps_357_);
v___x_360_ = ((lean_object*)(l_Lake_PatternDescr_matches___redArg___closed__9));
v___x_361_ = lean_nat_dec_lt(v___x_358_, v___x_359_);
if (v___x_361_ == 0)
{
lean_dec_ref(v_ps_357_);
lean_dec(v_val_336_);
return v___x_361_;
}
else
{
if (v___x_361_ == 0)
{
lean_dec_ref(v_ps_357_);
lean_dec(v_val_336_);
return v___x_361_;
}
else
{
lean_object* v___f_362_; size_t v___x_363_; size_t v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___f_362_ = lean_alloc_closure((void*)(l_Lake_PatternDescr_matches___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_362_, 0, v_val_336_);
v___x_363_ = ((size_t)0ULL);
v___x_364_ = lean_usize_of_nat(v___x_359_);
v___x_365_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_360_, v___f_362_, v_ps_357_, v___x_363_, v___x_364_);
v___x_366_ = lean_unbox(v___x_365_);
lean_dec(v___x_365_);
return v___x_366_;
}
}
}
default: 
{
lean_object* v_p_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v_p_367_ = lean_ctor_get(v_self_337_, 0);
lean_inc(v_p_367_);
lean_dec_ref_known(v_self_337_, 1);
v___x_368_ = lean_apply_2(v_inst_335_, v_p_367_, v_val_336_);
v___x_369_ = lean_unbox(v___x_368_);
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___redArg___boxed(lean_object* v_inst_370_, lean_object* v_val_371_, lean_object* v_self_372_){
_start:
{
uint8_t v_res_373_; lean_object* v_r_374_; 
v_res_373_ = l_Lake_PatternDescr_matches___redArg(v_inst_370_, v_val_371_, v_self_372_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT uint8_t l_Lake_PatternDescr_matches(lean_object* v_00_u03b2_375_, lean_object* v_00_u03b1_376_, lean_object* v_inst_377_, lean_object* v_val_378_, lean_object* v_self_379_){
_start:
{
uint8_t v___x_380_; 
v___x_380_ = l_Lake_PatternDescr_matches___redArg(v_inst_377_, v_val_378_, v_self_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_matches___boxed(lean_object* v_00_u03b2_381_, lean_object* v_00_u03b1_382_, lean_object* v_inst_383_, lean_object* v_val_384_, lean_object* v_self_385_){
_start:
{
uint8_t v_res_386_; lean_object* v_r_387_; 
v_res_386_ = l_Lake_PatternDescr_matches(v_00_u03b2_381_, v_00_u03b1_382_, v_inst_383_, v_val_384_, v_self_385_);
v_r_387_ = lean_box(v_res_386_);
return v_r_387_;
}
}
LEAN_EXPORT lean_object* l_Lake_instIsPatternPatternDescr___redArg(lean_object* v_inst_388_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_alloc_closure((void*)(l_Lake_PatternDescr_matches___boxed), 5, 3);
lean_closure_set(v___x_389_, 0, lean_box(0));
lean_closure_set(v___x_389_, 1, lean_box(0));
lean_closure_set(v___x_389_, 2, v_inst_388_);
v___x_390_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_390_, 0, lean_box(0));
lean_closure_set(v___x_390_, 1, lean_box(0));
lean_closure_set(v___x_390_, 2, lean_box(0));
lean_closure_set(v___x_390_, 3, v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lake_instIsPatternPatternDescr(lean_object* v_00_u03b2_391_, lean_object* v_00_u03b1_392_, lean_object* v_inst_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lake_instIsPatternPatternDescr___redArg(v_inst_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_ofFn___redArg(lean_object* v_f_395_, lean_object* v_name_396_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_box(0);
v___x_398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_398_, 0, v_f_395_);
lean_ctor_set(v___x_398_, 1, v_name_396_);
lean_ctor_set(v___x_398_, 2, v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_ofFn(lean_object* v_00_u03b1_399_, lean_object* v_00_u03b2_400_, lean_object* v_f_401_, lean_object* v_name_402_){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_box(0);
v___x_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_404_, 0, v_f_401_);
lean_ctor_set(v___x_404_, 1, v_name_402_);
lean_ctor_set(v___x_404_, 2, v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern___redArg___lam__0(lean_object* v_f_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_407_ = lean_box(0);
v___x_408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_408_, 0, v_f_405_);
lean_ctor_set(v___x_408_, 1, v___x_406_);
lean_ctor_set(v___x_408_, 2, v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern___redArg(){
_start:
{
lean_object* v___f_411_; 
v___f_411_ = ((lean_object*)(l_Lake_instCoeForallBoolPattern___redArg___closed__0));
return v___f_411_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern___redArg___boxed(lean_object* v___dummy_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lake_instCoeForallBoolPattern___redArg();
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeForallBoolPattern(lean_object* v_00_u03b1_414_, lean_object* v_00_u03b2_415_){
_start:
{
lean_object* v___f_416_; 
v___f_416_ = ((lean_object*)(l_Lake_instCoeForallBoolPattern___redArg___closed__0));
return v___f_416_;
}
}
LEAN_EXPORT uint8_t l_Lake_Pattern_ofDescr___redArg___lam__0(lean_object* v_inst_417_, lean_object* v_descr_418_, lean_object* v_x_419_){
_start:
{
uint8_t v___x_420_; 
v___x_420_ = l_Lake_PatternDescr_matches___redArg(v_inst_417_, v_x_419_, v_descr_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_ofDescr___redArg___lam__0___boxed(lean_object* v_inst_421_, lean_object* v_descr_422_, lean_object* v_x_423_){
_start:
{
uint8_t v_res_424_; lean_object* v_r_425_; 
v_res_424_ = l_Lake_Pattern_ofDescr___redArg___lam__0(v_inst_421_, v_descr_422_, v_x_423_);
v_r_425_ = lean_box(v_res_424_);
return v_r_425_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_ofDescr___redArg(lean_object* v_inst_426_, lean_object* v_descr_427_, lean_object* v_name_428_){
_start:
{
lean_object* v___f_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
lean_inc_ref(v_descr_427_);
v___f_429_ = lean_alloc_closure((void*)(l_Lake_Pattern_ofDescr___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_429_, 0, v_inst_426_);
lean_closure_set(v___f_429_, 1, v_descr_427_);
v___x_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_430_, 0, v_descr_427_);
v___x_431_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_431_, 0, v___f_429_);
lean_ctor_set(v___x_431_, 1, v_name_428_);
lean_ctor_set(v___x_431_, 2, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_ofDescr(lean_object* v_00_u03b2_432_, lean_object* v_00_u03b1_433_, lean_object* v_inst_434_, lean_object* v_descr_435_, lean_object* v_name_436_){
_start:
{
lean_object* v___f_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
lean_inc_ref(v_descr_435_);
v___f_437_ = lean_alloc_closure((void*)(l_Lake_Pattern_ofDescr___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_437_, 0, v_inst_434_);
lean_closure_set(v___f_437_, 1, v_descr_435_);
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v_descr_435_);
v___x_439_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_439_, 0, v___f_437_);
lean_ctor_set(v___x_439_, 1, v_name_436_);
lean_ctor_set(v___x_439_, 2, v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT uint8_t l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__0(lean_object* v_inst_440_, lean_object* v_x_441_, lean_object* v_x_442_){
_start:
{
uint8_t v___x_443_; 
v___x_443_ = l_Lake_PatternDescr_matches___redArg(v_inst_440_, v_x_442_, v_x_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__0___boxed(lean_object* v_inst_444_, lean_object* v_x_445_, lean_object* v_x_446_){
_start:
{
uint8_t v_res_447_; lean_object* v_r_448_; 
v_res_447_ = l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__0(v_inst_444_, v_x_445_, v_x_446_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__1(lean_object* v_inst_449_, lean_object* v_x_450_){
_start:
{
lean_object* v___f_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
lean_inc_ref(v_x_450_);
v___f_451_ = lean_alloc_closure((void*)(l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_451_, 0, v_inst_449_);
lean_closure_set(v___f_451_, 1, v_x_450_);
v___x_452_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_453_, 0, v_x_450_);
v___x_454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_454_, 0, v___f_451_);
lean_ctor_set(v___x_454_, 1, v___x_452_);
lean_ctor_set(v___x_454_, 2, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern___redArg(lean_object* v_inst_455_){
_start:
{
lean_object* v___f_456_; 
v___f_456_ = lean_alloc_closure((void*)(l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__1), 2, 1);
lean_closure_set(v___f_456_, 0, v_inst_455_);
return v___f_456_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoePatternDescrPatternOfIsPattern(lean_object* v_00_u03b2_457_, lean_object* v_00_u03b1_458_, lean_object* v_inst_459_){
_start:
{
lean_object* v___f_460_; 
v___f_460_ = lean_alloc_closure((void*)(l_Lake_instCoePatternDescrPatternOfIsPattern___redArg___lam__1), 2, 1);
lean_closure_set(v___f_460_, 0, v_inst_459_);
return v___f_460_;
}
}
LEAN_EXPORT uint8_t l_Lake_Pattern_not___redArg___lam__0(lean_object* v_inst_461_, lean_object* v___x_462_, lean_object* v_x_463_){
_start:
{
uint8_t v___x_464_; 
v___x_464_ = l_Lake_PatternDescr_matches___redArg(v_inst_461_, v_x_463_, v___x_462_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_not___redArg___lam__0___boxed(lean_object* v_inst_465_, lean_object* v___x_466_, lean_object* v_x_467_){
_start:
{
uint8_t v_res_468_; lean_object* v_r_469_; 
v_res_468_ = l_Lake_Pattern_not___redArg___lam__0(v_inst_465_, v___x_466_, v_x_467_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_not___redArg(lean_object* v_inst_470_, lean_object* v_p_471_){
_start:
{
lean_object* v___x_472_; lean_object* v___f_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v_p_471_);
lean_inc_ref(v___x_472_);
v___f_473_ = lean_alloc_closure((void*)(l_Lake_Pattern_not___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_473_, 0, v_inst_470_);
lean_closure_set(v___f_473_, 1, v___x_472_);
v___x_474_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_472_);
v___x_476_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_476_, 0, v___f_473_);
lean_ctor_set(v___x_476_, 1, v___x_474_);
lean_ctor_set(v___x_476_, 2, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_not(lean_object* v_00_u03b2_477_, lean_object* v_00_u03b1_478_, lean_object* v_inst_479_, lean_object* v_p_480_){
_start:
{
lean_object* v___x_481_; lean_object* v___f_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v_p_480_);
lean_inc_ref(v___x_481_);
v___f_482_ = lean_alloc_closure((void*)(l_Lake_Pattern_not___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_482_, 0, v_inst_479_);
lean_closure_set(v___f_482_, 1, v___x_481_);
v___x_483_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_481_);
v___x_485_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_485_, 0, v___f_482_);
lean_ctor_set(v___x_485_, 1, v___x_483_);
lean_ctor_set(v___x_485_, 2, v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_all___redArg(lean_object* v_inst_486_, lean_object* v_ps_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_488_, 0, v_ps_487_);
lean_inc_ref(v___x_488_);
v___f_489_ = lean_alloc_closure((void*)(l_Lake_Pattern_not___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_489_, 0, v_inst_486_);
lean_closure_set(v___f_489_, 1, v___x_488_);
v___x_490_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_488_);
v___x_492_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_492_, 0, v___f_489_);
lean_ctor_set(v___x_492_, 1, v___x_490_);
lean_ctor_set(v___x_492_, 2, v___x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_all(lean_object* v_00_u03b2_493_, lean_object* v_00_u03b1_494_, lean_object* v_inst_495_, lean_object* v_ps_496_){
_start:
{
lean_object* v___x_497_; lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_497_, 0, v_ps_496_);
lean_inc_ref(v___x_497_);
v___f_498_ = lean_alloc_closure((void*)(l_Lake_Pattern_not___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_498_, 0, v_inst_495_);
lean_closure_set(v___f_498_, 1, v___x_497_);
v___x_499_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_497_);
v___x_501_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_501_, 0, v___f_498_);
lean_ctor_set(v___x_501_, 1, v___x_499_);
lean_ctor_set(v___x_501_, 2, v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_any___redArg(lean_object* v_inst_502_, lean_object* v_ps_503_){
_start:
{
lean_object* v___x_504_; lean_object* v___f_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_504_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_504_, 0, v_ps_503_);
lean_inc_ref(v___x_504_);
v___f_505_ = lean_alloc_closure((void*)(l_Lake_Pattern_not___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_505_, 0, v_inst_502_);
lean_closure_set(v___f_505_, 1, v___x_504_);
v___x_506_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_504_);
v___x_508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_508_, 0, v___f_505_);
lean_ctor_set(v___x_508_, 1, v___x_506_);
lean_ctor_set(v___x_508_, 2, v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_any(lean_object* v_00_u03b2_509_, lean_object* v_00_u03b1_510_, lean_object* v_inst_511_, lean_object* v_ps_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___f_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_513_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_513_, 0, v_ps_512_);
lean_inc_ref(v___x_513_);
v___f_514_ = lean_alloc_closure((void*)(l_Lake_Pattern_not___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_514_, 0, v_inst_511_);
lean_closure_set(v___f_514_, 1, v___x_513_);
v___x_515_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_513_);
v___x_517_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_517_, 0, v___f_514_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
lean_ctor_set(v___x_517_, 2, v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_empty___redArg(){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = ((lean_object*)(l_Lake_PatternDescr_empty___redArg___closed__1));
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_empty___redArg___boxed(lean_object* v___dummy_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lake_PatternDescr_empty___redArg();
return v_res_525_;
}
}
static lean_object* _init_l_Lake_PatternDescr_empty___closed__0(void){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lake_PatternDescr_empty___redArg();
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_empty(lean_object* v_00_u03b1_527_, lean_object* v_00_u03b2_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_obj_once(&l_Lake_PatternDescr_empty___closed__0, &l_Lake_PatternDescr_empty___closed__0_once, _init_l_Lake_PatternDescr_empty___closed__0);
return v___x_529_;
}
}
static lean_object* _init_l_Lake_Pattern_empty___redArg___closed__2(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_obj_once(&l_Lake_PatternDescr_empty___closed__0, &l_Lake_PatternDescr_empty___closed__0_once, _init_l_Lake_PatternDescr_empty___closed__0);
v___x_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l_Lake_Pattern_empty___redArg___closed__3(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___f_537_; lean_object* v___x_538_; 
v___x_535_ = lean_obj_once(&l_Lake_Pattern_empty___redArg___closed__2, &l_Lake_Pattern_empty___redArg___closed__2_once, _init_l_Lake_Pattern_empty___redArg___closed__2);
v___x_536_ = ((lean_object*)(l_Lake_Pattern_empty___redArg___closed__1));
v___f_537_ = ((lean_object*)(l_Lake_instInhabitedPattern_default__1___redArg___closed__0));
v___x_538_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_538_, 0, v___f_537_);
lean_ctor_set(v___x_538_, 1, v___x_536_);
lean_ctor_set(v___x_538_, 2, v___x_535_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_empty___redArg(){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&l_Lake_Pattern_empty___redArg___closed__3, &l_Lake_Pattern_empty___redArg___closed__3_once, _init_l_Lake_Pattern_empty___redArg___closed__3);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_empty___redArg___boxed(lean_object* v___dummy_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lake_Pattern_empty___redArg();
return v_res_542_;
}
}
static lean_object* _init_l_Lake_Pattern_empty___closed__0(void){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lake_Pattern_empty___redArg();
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_empty(lean_object* v_00_u03b1_544_, lean_object* v_00_u03b2_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&l_Lake_Pattern_empty___closed__0, &l_Lake_Pattern_empty___closed__0_once, _init_l_Lake_Pattern_empty___closed__0);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPatternDescr___redArg(){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = lean_obj_once(&l_Lake_PatternDescr_empty___closed__0, &l_Lake_PatternDescr_empty___closed__0_once, _init_l_Lake_PatternDescr_empty___closed__0);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPatternDescr___redArg___boxed(lean_object* v___dummy_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lake_instEmptyCollectionPatternDescr___redArg();
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPatternDescr(lean_object* v_00_u03b1_551_, lean_object* v_00_u03b2_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = lean_obj_once(&l_Lake_PatternDescr_empty___closed__0, &l_Lake_PatternDescr_empty___closed__0_once, _init_l_Lake_PatternDescr_empty___closed__0);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPattern___redArg(){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lake_Pattern_empty___closed__0, &l_Lake_Pattern_empty___closed__0_once, _init_l_Lake_Pattern_empty___closed__0);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPattern___redArg___boxed(lean_object* v___dummy_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lake_instEmptyCollectionPattern___redArg();
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lake_instEmptyCollectionPattern(lean_object* v_00_u03b1_558_, lean_object* v_00_u03b2_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&l_Lake_Pattern_empty___closed__0, &l_Lake_Pattern_empty___closed__0_once, _init_l_Lake_Pattern_empty___closed__0);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_star___redArg(){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_Lake_PatternDescr_star___redArg___closed__0));
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_star___redArg___boxed(lean_object* v___dummy_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lake_PatternDescr_star___redArg();
return v_res_566_;
}
}
static lean_object* _init_l_Lake_PatternDescr_star___closed__0(void){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_Lake_PatternDescr_star___redArg();
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lake_PatternDescr_star(lean_object* v_00_u03b1_568_, lean_object* v_00_u03b2_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&l_Lake_PatternDescr_star___closed__0, &l_Lake_PatternDescr_star___closed__0_once, _init_l_Lake_PatternDescr_star___closed__0);
return v___x_570_;
}
}
LEAN_EXPORT uint8_t l_Lake_Pattern_star___redArg___lam__0(lean_object* v_x_571_){
_start:
{
uint8_t v___x_572_; 
v___x_572_ = 1;
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_star___redArg___lam__0___boxed(lean_object* v_x_573_){
_start:
{
uint8_t v_res_574_; lean_object* v_r_575_; 
v_res_574_ = l_Lake_Pattern_star___redArg___lam__0(v_x_573_);
lean_dec(v_x_573_);
v_r_575_ = lean_box(v_res_574_);
return v_r_575_;
}
}
static lean_object* _init_l_Lake_Pattern_star___redArg___closed__3(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = lean_obj_once(&l_Lake_PatternDescr_star___closed__0, &l_Lake_PatternDescr_star___closed__0_once, _init_l_Lake_PatternDescr_star___closed__0);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
static lean_object* _init_l_Lake_Pattern_star___redArg___closed__4(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___f_584_; lean_object* v___x_585_; 
v___x_582_ = lean_obj_once(&l_Lake_Pattern_star___redArg___closed__3, &l_Lake_Pattern_star___redArg___closed__3_once, _init_l_Lake_Pattern_star___redArg___closed__3);
v___x_583_ = ((lean_object*)(l_Lake_Pattern_star___redArg___closed__2));
v___f_584_ = ((lean_object*)(l_Lake_Pattern_star___redArg___closed__0));
v___x_585_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_585_, 0, v___f_584_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
lean_ctor_set(v___x_585_, 2, v___x_582_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_star___redArg(){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&l_Lake_Pattern_star___redArg___closed__4, &l_Lake_Pattern_star___redArg___closed__4_once, _init_l_Lake_Pattern_star___redArg___closed__4);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_star___redArg___boxed(lean_object* v___dummy_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lake_Pattern_star___redArg();
return v_res_589_;
}
}
static lean_object* _init_l_Lake_Pattern_star___closed__0(void){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lake_Pattern_star___redArg();
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lake_Pattern_star(lean_object* v_00_u03b1_591_, lean_object* v_00_u03b2_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = lean_obj_once(&l_Lake_Pattern_star___closed__0, &l_Lake_Pattern_star___closed__0_once, _init_l_Lake_Pattern_star___closed__0);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorIdx(lean_object* v_x_594_){
_start:
{
switch(lean_obj_tag(v_x_594_))
{
case 0:
{
lean_object* v___x_595_; 
v___x_595_ = lean_unsigned_to_nat(0u);
return v___x_595_;
}
case 1:
{
lean_object* v___x_596_; 
v___x_596_ = lean_unsigned_to_nat(1u);
return v___x_596_;
}
default: 
{
lean_object* v___x_597_; 
v___x_597_ = lean_unsigned_to_nat(2u);
return v___x_597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorIdx___boxed(lean_object* v_x_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lake_StrPatDescr_ctorIdx(v_x_598_);
lean_dec_ref(v_x_598_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorElim___redArg(lean_object* v_t_600_, lean_object* v_k_601_){
_start:
{
lean_object* v_xs_602_; lean_object* v___x_603_; 
v_xs_602_ = lean_ctor_get(v_t_600_, 0);
lean_inc_ref(v_xs_602_);
lean_dec_ref(v_t_600_);
v___x_603_ = lean_apply_1(v_k_601_, v_xs_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorElim(lean_object* v_motive_604_, lean_object* v_ctorIdx_605_, lean_object* v_t_606_, lean_object* v_h_607_, lean_object* v_k_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_606_, v_k_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_ctorElim___boxed(lean_object* v_motive_610_, lean_object* v_ctorIdx_611_, lean_object* v_t_612_, lean_object* v_h_613_, lean_object* v_k_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lake_StrPatDescr_ctorElim(v_motive_610_, v_ctorIdx_611_, v_t_612_, v_h_613_, v_k_614_);
lean_dec(v_ctorIdx_611_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_mem_elim___redArg(lean_object* v_t_616_, lean_object* v_mem_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_616_, v_mem_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_mem_elim(lean_object* v_motive_619_, lean_object* v_t_620_, lean_object* v_h_621_, lean_object* v_mem_622_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_620_, v_mem_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_startsWith_elim___redArg(lean_object* v_t_624_, lean_object* v_startsWith_625_){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_624_, v_startsWith_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_startsWith_elim(lean_object* v_motive_627_, lean_object* v_t_628_, lean_object* v_h_629_, lean_object* v_startsWith_630_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_628_, v_startsWith_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_endsWith_elim___redArg(lean_object* v_t_632_, lean_object* v_endsWith_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_632_, v_endsWith_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_endsWith_elim(lean_object* v_motive_635_, lean_object* v_t_636_, lean_object* v_h_637_, lean_object* v_endsWith_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Lake_StrPatDescr_ctorElim___redArg(v_t_636_, v_endsWith_638_);
return v___x_639_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lake_StrPatDescr_matches_spec__0_spec__0(lean_object* v_a_646_, lean_object* v_as_647_, size_t v_i_648_, size_t v_stop_649_){
_start:
{
uint8_t v___x_650_; 
v___x_650_ = lean_usize_dec_eq(v_i_648_, v_stop_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_651_ = lean_array_uget_borrowed(v_as_647_, v_i_648_);
v___x_652_ = lean_string_dec_eq(v_a_646_, v___x_651_);
if (v___x_652_ == 0)
{
size_t v___x_653_; size_t v___x_654_; 
v___x_653_ = ((size_t)1ULL);
v___x_654_ = lean_usize_add(v_i_648_, v___x_653_);
v_i_648_ = v___x_654_;
goto _start;
}
else
{
return v___x_652_;
}
}
else
{
uint8_t v___x_656_; 
v___x_656_ = 0;
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lake_StrPatDescr_matches_spec__0_spec__0___boxed(lean_object* v_a_657_, lean_object* v_as_658_, lean_object* v_i_659_, lean_object* v_stop_660_){
_start:
{
size_t v_i_boxed_661_; size_t v_stop_boxed_662_; uint8_t v_res_663_; lean_object* v_r_664_; 
v_i_boxed_661_ = lean_unbox_usize(v_i_659_);
lean_dec(v_i_659_);
v_stop_boxed_662_ = lean_unbox_usize(v_stop_660_);
lean_dec(v_stop_660_);
v_res_663_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lake_StrPatDescr_matches_spec__0_spec__0(v_a_657_, v_as_658_, v_i_boxed_661_, v_stop_boxed_662_);
lean_dec_ref(v_as_658_);
lean_dec_ref(v_a_657_);
v_r_664_ = lean_box(v_res_663_);
return v_r_664_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lake_StrPatDescr_matches_spec__0(lean_object* v_as_665_, lean_object* v_a_666_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_array_get_size(v_as_665_);
v___x_669_ = lean_nat_dec_lt(v___x_667_, v___x_668_);
if (v___x_669_ == 0)
{
return v___x_669_;
}
else
{
if (v___x_669_ == 0)
{
return v___x_669_;
}
else
{
size_t v___x_670_; size_t v___x_671_; uint8_t v___x_672_; 
v___x_670_ = ((size_t)0ULL);
v___x_671_ = lean_usize_of_nat(v___x_668_);
v___x_672_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lake_StrPatDescr_matches_spec__0_spec__0(v_a_666_, v_as_665_, v___x_670_, v___x_671_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lake_StrPatDescr_matches_spec__0___boxed(lean_object* v_as_673_, lean_object* v_a_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l_Array_contains___at___00Lake_StrPatDescr_matches_spec__0(v_as_673_, v_a_674_);
lean_dec_ref(v_a_674_);
lean_dec_ref(v_as_673_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT uint8_t l_Lake_StrPatDescr_matches(lean_object* v_s_677_, lean_object* v_self_678_){
_start:
{
switch(lean_obj_tag(v_self_678_))
{
case 0:
{
lean_object* v_xs_679_; uint8_t v___x_680_; 
v_xs_679_ = lean_ctor_get(v_self_678_, 0);
v___x_680_ = l_Array_contains___at___00Lake_StrPatDescr_matches_spec__0(v_xs_679_, v_s_677_);
return v___x_680_;
}
case 1:
{
lean_object* v_affix_681_; lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v_affix_681_ = lean_ctor_get(v_self_678_, 0);
v___x_682_ = lean_string_utf8_byte_size(v_s_677_);
v___x_683_ = lean_string_utf8_byte_size(v_affix_681_);
v___x_684_ = lean_nat_dec_le(v___x_683_, v___x_682_);
if (v___x_684_ == 0)
{
return v___x_684_;
}
else
{
lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = lean_string_memcmp(v_s_677_, v_affix_681_, v___x_685_, v___x_685_, v___x_683_);
return v___x_686_;
}
}
default: 
{
lean_object* v_affix_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_affix_687_ = lean_ctor_get(v_self_678_, 0);
v___x_688_ = lean_string_utf8_byte_size(v_s_677_);
v___x_689_ = lean_string_utf8_byte_size(v_affix_687_);
v___x_690_ = lean_nat_dec_le(v___x_689_, v___x_688_);
if (v___x_690_ == 0)
{
return v___x_690_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_nat_sub(v___x_688_, v___x_689_);
v___x_693_ = lean_string_memcmp(v_s_677_, v_affix_687_, v___x_692_, v___x_691_, v___x_689_);
lean_dec(v___x_692_);
return v___x_693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_matches___boxed(lean_object* v_s_694_, lean_object* v_self_695_){
_start:
{
uint8_t v_res_696_; lean_object* v_r_697_; 
v_res_696_ = l_Lake_StrPatDescr_matches(v_s_694_, v_self_695_);
lean_dec_ref(v_self_695_);
lean_dec_ref(v_s_694_);
v_r_697_ = lean_box(v_res_696_);
return v_r_697_;
}
}
LEAN_EXPORT uint8_t l_Lake_StrPat_mem___lam__0(lean_object* v___x_702_, lean_object* v___x_703_, lean_object* v_x_704_){
_start:
{
uint8_t v___x_705_; 
v___x_705_ = l_Lake_PatternDescr_matches___redArg(v___x_702_, v_x_704_, v___x_703_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPat_mem___lam__0___boxed(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v_x_708_){
_start:
{
uint8_t v_res_709_; lean_object* v_r_710_; 
v_res_709_ = l_Lake_StrPat_mem___lam__0(v___x_706_, v___x_707_, v_x_708_);
v_r_710_ = lean_box(v_res_709_);
return v_r_710_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPat_mem(lean_object* v_xs_711_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___f_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_712_ = ((lean_object*)(l_Lake_instIsPatternStrPatDescrString));
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v_xs_711_);
v___x_714_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
lean_inc_ref(v___x_714_);
v___f_715_ = lean_alloc_closure((void*)(l_Lake_StrPat_mem___lam__0___boxed), 3, 2);
lean_closure_set(v___f_715_, 0, v___x_712_);
lean_closure_set(v___f_715_, 1, v___x_714_);
v___x_716_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_714_);
v___x_718_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_718_, 0, v___f_715_);
lean_ctor_set(v___x_718_, 1, v___x_716_);
lean_ctor_set(v___x_718_, 2, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeArrayStringStrPatDescr___lam__0(lean_object* v_xs_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v_xs_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPat_startsWith(lean_object* v_affix_725_){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___f_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_726_ = ((lean_object*)(l_Lake_instIsPatternStrPatDescrString));
v___x_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_727_, 0, v_affix_725_);
v___x_728_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_inc_ref(v___x_728_);
v___f_729_ = lean_alloc_closure((void*)(l_Lake_StrPat_mem___lam__0___boxed), 3, 2);
lean_closure_set(v___f_729_, 0, v___x_726_);
lean_closure_set(v___f_729_, 1, v___x_728_);
v___x_730_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_728_);
v___x_732_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_732_, 0, v___f_729_);
lean_ctor_set(v___x_732_, 1, v___x_730_);
lean_ctor_set(v___x_732_, 2, v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPat_endsWith(lean_object* v_affix_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___f_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_734_ = ((lean_object*)(l_Lake_instIsPatternStrPatDescrString));
v___x_735_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_735_, 0, v_affix_733_);
v___x_736_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
lean_inc_ref(v___x_736_);
v___f_737_ = lean_alloc_closure((void*)(l_Lake_StrPat_mem___lam__0___boxed), 3, 2);
lean_closure_set(v___f_737_, 0, v___x_734_);
lean_closure_set(v___f_737_, 1, v___x_736_);
v___x_738_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_736_);
v___x_740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_740_, 0, v___f_737_);
lean_ctor_set(v___x_740_, 1, v___x_738_);
lean_ctor_set(v___x_740_, 2, v___x_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPatDescr_beq(lean_object* v_s_741_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_742_ = lean_unsigned_to_nat(1u);
v___x_743_ = lean_mk_empty_array_with_capacity(v___x_742_);
v___x_744_ = lean_array_push(v___x_743_, v_s_741_);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT uint8_t l_Lake_StrPat_beq___lam__0(lean_object* v_s_746_, lean_object* v_x_747_){
_start:
{
uint8_t v___x_748_; 
v___x_748_ = lean_string_dec_eq(v_x_747_, v_s_746_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPat_beq___lam__0___boxed(lean_object* v_s_749_, lean_object* v_x_750_){
_start:
{
uint8_t v_res_751_; lean_object* v_r_752_; 
v_res_751_ = l_Lake_StrPat_beq___lam__0(v_s_749_, v_x_750_);
lean_dec_ref(v_x_750_);
lean_dec_ref(v_s_749_);
v_r_752_ = lean_box(v_res_751_);
return v_r_752_;
}
}
LEAN_EXPORT lean_object* l_Lake_StrPat_beq(lean_object* v_s_756_){
_start:
{
lean_object* v___f_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
lean_inc_ref(v_s_756_);
v___f_757_ = lean_alloc_closure((void*)(l_Lake_StrPat_beq___lam__0___boxed), 2, 1);
lean_closure_set(v___f_757_, 0, v_s_756_);
v___x_758_ = ((lean_object*)(l_Lake_StrPat_beq___closed__1));
v___x_759_ = l_Lake_StrPatDescr_beq(v_s_756_);
v___x_760_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
v___x_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
v___x_762_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_762_, 0, v___f_757_);
lean_ctor_set(v___x_762_, 1, v___x_758_);
lean_ctor_set(v___x_762_, 2, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorIdx(lean_object* v_x_767_){
_start:
{
switch(lean_obj_tag(v_x_767_))
{
case 0:
{
lean_object* v___x_768_; 
v___x_768_ = lean_unsigned_to_nat(0u);
return v___x_768_;
}
case 1:
{
lean_object* v___x_769_; 
v___x_769_ = lean_unsigned_to_nat(1u);
return v___x_769_;
}
default: 
{
lean_object* v___x_770_; 
v___x_770_ = lean_unsigned_to_nat(2u);
return v___x_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorIdx___boxed(lean_object* v_x_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lake_PathPatDescr_ctorIdx(v_x_771_);
lean_dec_ref(v_x_771_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorElim___redArg(lean_object* v_t_773_, lean_object* v_k_774_){
_start:
{
lean_object* v_p_775_; lean_object* v___x_776_; 
v_p_775_ = lean_ctor_get(v_t_773_, 0);
lean_inc_ref(v_p_775_);
lean_dec_ref(v_t_773_);
v___x_776_ = lean_apply_1(v_k_774_, v_p_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorElim(lean_object* v_motive_777_, lean_object* v_ctorIdx_778_, lean_object* v_t_779_, lean_object* v_h_780_, lean_object* v_k_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_779_, v_k_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_ctorElim___boxed(lean_object* v_motive_783_, lean_object* v_ctorIdx_784_, lean_object* v_t_785_, lean_object* v_h_786_, lean_object* v_k_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lake_PathPatDescr_ctorElim(v_motive_783_, v_ctorIdx_784_, v_t_785_, v_h_786_, v_k_787_);
lean_dec(v_ctorIdx_784_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_path_elim___redArg(lean_object* v_t_789_, lean_object* v_path_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_789_, v_path_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_path_elim(lean_object* v_motive_792_, lean_object* v_t_793_, lean_object* v_h_794_, lean_object* v_path_795_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_793_, v_path_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_extension_elim___redArg(lean_object* v_t_797_, lean_object* v_extension_798_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_797_, v_extension_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_extension_elim(lean_object* v_motive_800_, lean_object* v_t_801_, lean_object* v_h_802_, lean_object* v_extension_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_801_, v_extension_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_fileName_elim___redArg(lean_object* v_t_805_, lean_object* v_fileName_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_805_, v_fileName_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_fileName_elim(lean_object* v_motive_808_, lean_object* v_t_809_, lean_object* v_h_810_, lean_object* v_fileName_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l_Lake_PathPatDescr_ctorElim___redArg(v_t_809_, v_fileName_811_);
return v___x_812_;
}
}
static lean_object* _init_l_Lake_instInhabitedPathPatDescr_default___closed__0(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___closed__0, &l_Lake_instInhabitedPattern_default__1___closed__0_once, _init_l_Lake_instInhabitedPattern_default__1___closed__0);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
static lean_object* _init_l_Lake_instInhabitedPathPatDescr_default(void){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = lean_obj_once(&l_Lake_instInhabitedPathPatDescr_default___closed__0, &l_Lake_instInhabitedPathPatDescr_default___closed__0_once, _init_l_Lake_instInhabitedPathPatDescr_default___closed__0);
return v___x_815_;
}
}
static lean_object* _init_l_Lake_instInhabitedPathPatDescr(void){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Lake_instInhabitedPathPatDescr_default;
return v___x_816_;
}
}
LEAN_EXPORT uint8_t l_Lake_PathPatDescr_eq___lam__0(lean_object* v_p_817_, lean_object* v_x_818_){
_start:
{
uint8_t v___x_819_; 
v___x_819_ = lean_string_dec_eq(v_x_818_, v_p_817_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_eq___lam__0___boxed(lean_object* v_p_820_, lean_object* v_x_821_){
_start:
{
uint8_t v_res_822_; lean_object* v_r_823_; 
v_res_822_ = l_Lake_PathPatDescr_eq___lam__0(v_p_820_, v_x_821_);
lean_dec_ref(v_x_821_);
lean_dec_ref(v_p_820_);
v_r_823_ = lean_box(v_res_822_);
return v_r_823_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_eq(lean_object* v_p_824_){
_start:
{
lean_object* v___f_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
lean_inc_ref(v_p_824_);
v___f_825_ = lean_alloc_closure((void*)(l_Lake_PathPatDescr_eq___lam__0___boxed), 2, 1);
lean_closure_set(v___f_825_, 0, v_p_824_);
v___x_826_ = ((lean_object*)(l_Lake_StrPat_beq___closed__1));
v___x_827_ = l_Lake_StrPatDescr_beq(v_p_824_);
v___x_828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___x_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
v___x_830_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_830_, 0, v___f_825_);
lean_ctor_set(v___x_830_, 1, v___x_826_);
lean_ctor_set(v___x_830_, 2, v___x_829_);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT uint8_t l_Lake_PathPatDescr_matches(lean_object* v_path_832_, lean_object* v_self_833_){
_start:
{
switch(lean_obj_tag(v_self_833_))
{
case 0:
{
lean_object* v_p_834_; lean_object* v_filter_835_; lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v_p_834_ = lean_ctor_get(v_self_833_, 0);
lean_inc_ref(v_p_834_);
lean_dec_ref_known(v_self_833_, 1);
v_filter_835_ = lean_ctor_get(v_p_834_, 0);
lean_inc_ref(v_filter_835_);
lean_dec_ref(v_p_834_);
v___x_836_ = l_System_FilePath_normalize(v_path_832_);
v___x_837_ = lean_apply_1(v_filter_835_, v___x_836_);
v___x_838_ = lean_unbox(v___x_837_);
return v___x_838_;
}
case 1:
{
lean_object* v_p_839_; lean_object* v___x_840_; 
v_p_839_ = lean_ctor_get(v_self_833_, 0);
lean_inc_ref(v_p_839_);
lean_dec_ref_known(v_self_833_, 1);
v___x_840_ = l_System_FilePath_extension(v_path_832_);
if (lean_obj_tag(v___x_840_) == 0)
{
uint8_t v___x_841_; 
lean_dec_ref(v_p_839_);
v___x_841_ = 0;
return v___x_841_;
}
else
{
lean_object* v_val_842_; lean_object* v_filter_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_val_842_ = lean_ctor_get(v___x_840_, 0);
lean_inc(v_val_842_);
lean_dec_ref_known(v___x_840_, 1);
v_filter_843_ = lean_ctor_get(v_p_839_, 0);
lean_inc_ref(v_filter_843_);
lean_dec_ref(v_p_839_);
v___x_844_ = lean_apply_1(v_filter_843_, v_val_842_);
v___x_845_ = lean_unbox(v___x_844_);
return v___x_845_;
}
}
default: 
{
lean_object* v_p_846_; lean_object* v___x_847_; 
v_p_846_ = lean_ctor_get(v_self_833_, 0);
lean_inc_ref(v_p_846_);
lean_dec_ref_known(v_self_833_, 1);
v___x_847_ = l_System_FilePath_fileName(v_path_832_);
if (lean_obj_tag(v___x_847_) == 0)
{
uint8_t v___x_848_; 
lean_dec_ref(v_p_846_);
v___x_848_ = 0;
return v___x_848_;
}
else
{
lean_object* v_val_849_; lean_object* v_filter_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v_val_849_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_val_849_);
lean_dec_ref_known(v___x_847_, 1);
v_filter_850_ = lean_ctor_get(v_p_846_, 0);
lean_inc_ref(v_filter_850_);
lean_dec_ref(v_p_846_);
v___x_851_ = lean_apply_1(v_filter_850_, v_val_849_);
v___x_852_ = lean_unbox(v___x_851_);
return v___x_852_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PathPatDescr_matches___boxed(lean_object* v_path_853_, lean_object* v_self_854_){
_start:
{
uint8_t v_res_855_; lean_object* v_r_856_; 
v_res_855_ = l_Lake_PathPatDescr_matches(v_path_853_, v_self_854_);
v_r_856_ = lean_box(v_res_855_);
return v_r_856_;
}
}
LEAN_EXPORT uint8_t l_Lake_PathPat_path___lam__0(lean_object* v___x_861_, lean_object* v___x_862_, lean_object* v_x_863_){
_start:
{
uint8_t v___x_864_; 
v___x_864_ = l_Lake_PatternDescr_matches___redArg(v___x_861_, v_x_863_, v___x_862_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPat_path___lam__0___boxed(lean_object* v___x_865_, lean_object* v___x_866_, lean_object* v_x_867_){
_start:
{
uint8_t v_res_868_; lean_object* v_r_869_; 
v_res_868_ = l_Lake_PathPat_path___lam__0(v___x_865_, v___x_866_, v_x_867_);
v_r_869_ = lean_box(v_res_868_);
return v_r_869_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPat_path(lean_object* v_p_870_){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_871_ = ((lean_object*)(l_Lake_instIsPatternPathPatDescrFilePath));
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v_p_870_);
v___x_873_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_inc_ref(v___x_873_);
v___f_874_ = lean_alloc_closure((void*)(l_Lake_PathPat_path___lam__0___boxed), 3, 2);
lean_closure_set(v___f_874_, 0, v___x_871_);
lean_closure_set(v___f_874_, 1, v___x_873_);
v___x_875_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_873_);
v___x_877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_877_, 0, v___f_874_);
lean_ctor_set(v___x_877_, 1, v___x_875_);
lean_ctor_set(v___x_877_, 2, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPat_extension(lean_object* v_p_878_){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___f_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_879_ = ((lean_object*)(l_Lake_instIsPatternPathPatDescrFilePath));
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v_p_878_);
v___x_881_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_inc_ref(v___x_881_);
v___f_882_ = lean_alloc_closure((void*)(l_Lake_PathPat_path___lam__0___boxed), 3, 2);
lean_closure_set(v___f_882_, 0, v___x_879_);
lean_closure_set(v___f_882_, 1, v___x_881_);
v___x_883_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_881_);
v___x_885_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_885_, 0, v___f_882_);
lean_ctor_set(v___x_885_, 1, v___x_883_);
lean_ctor_set(v___x_885_, 2, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lake_PathPat_fileName(lean_object* v_p_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___f_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_887_ = ((lean_object*)(l_Lake_instIsPatternPathPatDescrFilePath));
v___x_888_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_888_, 0, v_p_886_);
v___x_889_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
lean_inc_ref(v___x_889_);
v___f_890_ = lean_alloc_closure((void*)(l_Lake_PathPat_path___lam__0___boxed), 3, 2);
lean_closure_set(v___f_890_, 0, v___x_887_);
lean_closure_set(v___f_890_, 1, v___x_889_);
v___x_891_ = lean_obj_once(&l_Lake_instInhabitedPattern_default__1___redArg___closed__1, &l_Lake_instInhabitedPattern_default__1___redArg___closed__1_once, _init_l_Lake_instInhabitedPattern_default__1___redArg___closed__1);
v___x_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_889_);
v___x_893_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_893_, 0, v___f_890_);
lean_ctor_set(v___x_893_, 1, v___x_891_);
lean_ctor_set(v___x_893_, 2, v___x_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Pattern_0__String_Pos_Raw_get_x3f_match__1_splitter___redArg(lean_object* v_x_894_, lean_object* v_x_895_, lean_object* v_h__1_896_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = lean_apply_2(v_h__1_896_, v_x_894_, v_x_895_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Pattern_0__String_Pos_Raw_get_x3f_match__1_splitter(lean_object* v_motive_898_, lean_object* v_x_899_, lean_object* v_x_900_, lean_object* v_h__1_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = lean_apply_2(v_h__1_901_, v_x_899_, v_x_900_);
return v___x_902_;
}
}
LEAN_EXPORT uint8_t l_Lake_isVerLike(lean_object* v_s_903_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v___x_904_ = lean_unsigned_to_nat(2u);
v___x_905_ = lean_string_utf8_byte_size(v_s_903_);
v___x_906_ = lean_nat_dec_le(v___x_904_, v___x_905_);
if (v___x_906_ == 0)
{
return v___x_906_;
}
else
{
lean_object* v___x_907_; uint32_t v___x_908_; uint32_t v___x_909_; uint8_t v___x_910_; 
v___x_907_ = lean_unsigned_to_nat(0u);
v___x_908_ = lean_string_utf8_get_fast(v_s_903_, v___x_907_);
v___x_909_ = 118;
v___x_910_ = lean_uint32_dec_eq(v___x_908_, v___x_909_);
if (v___x_910_ == 0)
{
return v___x_910_;
}
else
{
lean_object* v___x_911_; uint32_t v___x_912_; uint32_t v___x_913_; uint8_t v___x_914_; 
v___x_911_ = lean_unsigned_to_nat(1u);
v___x_912_ = lean_string_utf8_get_fast(v_s_903_, v___x_911_);
v___x_913_ = 48;
v___x_914_ = lean_uint32_dec_le(v___x_913_, v___x_912_);
if (v___x_914_ == 0)
{
return v___x_914_;
}
else
{
uint32_t v___x_915_; uint8_t v___x_916_; 
v___x_915_ = 57;
v___x_916_ = lean_uint32_dec_le(v___x_912_, v___x_915_);
return v___x_916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_isVerLike___boxed(lean_object* v_s_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l_Lake_isVerLike(v_s_917_);
lean_dec_ref(v_s_917_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0___redArg(lean_object* v_k_937_, lean_object* v_v_938_, lean_object* v_t_939_){
_start:
{
if (lean_obj_tag(v_t_939_) == 0)
{
lean_object* v_size_940_; lean_object* v_k_941_; lean_object* v_v_942_; lean_object* v_l_943_; lean_object* v_r_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_1224_; 
v_size_940_ = lean_ctor_get(v_t_939_, 0);
v_k_941_ = lean_ctor_get(v_t_939_, 1);
v_v_942_ = lean_ctor_get(v_t_939_, 2);
v_l_943_ = lean_ctor_get(v_t_939_, 3);
v_r_944_ = lean_ctor_get(v_t_939_, 4);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_t_939_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_946_ = v_t_939_;
v_isShared_947_ = v_isSharedCheck_1224_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_r_944_);
lean_inc(v_l_943_);
lean_inc(v_v_942_);
lean_inc(v_k_941_);
lean_inc(v_size_940_);
lean_dec(v_t_939_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_1224_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
uint8_t v___x_948_; 
v___x_948_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_937_, v_k_941_);
switch(v___x_948_)
{
case 0:
{
lean_object* v_impl_949_; lean_object* v___x_950_; 
lean_dec(v_size_940_);
v_impl_949_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0___redArg(v_k_937_, v_v_938_, v_l_943_);
v___x_950_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_944_) == 0)
{
lean_object* v_size_951_; lean_object* v_size_952_; lean_object* v_k_953_; lean_object* v_v_954_; lean_object* v_l_955_; lean_object* v_r_956_; lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v_size_951_ = lean_ctor_get(v_r_944_, 0);
v_size_952_ = lean_ctor_get(v_impl_949_, 0);
lean_inc(v_size_952_);
v_k_953_ = lean_ctor_get(v_impl_949_, 1);
lean_inc(v_k_953_);
v_v_954_ = lean_ctor_get(v_impl_949_, 2);
lean_inc(v_v_954_);
v_l_955_ = lean_ctor_get(v_impl_949_, 3);
lean_inc(v_l_955_);
v_r_956_ = lean_ctor_get(v_impl_949_, 4);
lean_inc(v_r_956_);
v___x_957_ = lean_unsigned_to_nat(3u);
v___x_958_ = lean_nat_mul(v___x_957_, v_size_951_);
v___x_959_ = lean_nat_dec_lt(v___x_958_, v_size_952_);
lean_dec(v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
lean_dec(v_r_956_);
lean_dec(v_l_955_);
lean_dec(v_v_954_);
lean_dec(v_k_953_);
v___x_960_ = lean_nat_add(v___x_950_, v_size_952_);
lean_dec(v_size_952_);
v___x_961_ = lean_nat_add(v___x_960_, v_size_951_);
lean_dec(v___x_960_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 3, v_impl_949_);
lean_ctor_set(v___x_946_, 0, v___x_961_);
v___x_963_ = v___x_946_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_impl_949_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v_r_944_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
else
{
lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_1030_; 
v_isSharedCheck_1030_ = !lean_is_exclusive(v_impl_949_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; lean_object* v_unused_1032_; lean_object* v_unused_1033_; lean_object* v_unused_1034_; lean_object* v_unused_1035_; 
v_unused_1031_ = lean_ctor_get(v_impl_949_, 4);
lean_dec(v_unused_1031_);
v_unused_1032_ = lean_ctor_get(v_impl_949_, 3);
lean_dec(v_unused_1032_);
v_unused_1033_ = lean_ctor_get(v_impl_949_, 2);
lean_dec(v_unused_1033_);
v_unused_1034_ = lean_ctor_get(v_impl_949_, 1);
lean_dec(v_unused_1034_);
v_unused_1035_ = lean_ctor_get(v_impl_949_, 0);
lean_dec(v_unused_1035_);
v___x_966_ = v_impl_949_;
v_isShared_967_ = v_isSharedCheck_1030_;
goto v_resetjp_965_;
}
else
{
lean_dec(v_impl_949_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_1030_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_size_968_; lean_object* v_size_969_; lean_object* v_k_970_; lean_object* v_v_971_; lean_object* v_l_972_; lean_object* v_r_973_; lean_object* v___x_974_; lean_object* v___x_975_; uint8_t v___x_976_; 
v_size_968_ = lean_ctor_get(v_l_955_, 0);
v_size_969_ = lean_ctor_get(v_r_956_, 0);
v_k_970_ = lean_ctor_get(v_r_956_, 1);
v_v_971_ = lean_ctor_get(v_r_956_, 2);
v_l_972_ = lean_ctor_get(v_r_956_, 3);
v_r_973_ = lean_ctor_get(v_r_956_, 4);
v___x_974_ = lean_unsigned_to_nat(2u);
v___x_975_ = lean_nat_mul(v___x_974_, v_size_968_);
v___x_976_ = lean_nat_dec_lt(v_size_969_, v___x_975_);
lean_dec(v___x_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1005_; 
lean_inc(v_r_973_);
lean_inc(v_l_972_);
lean_inc(v_v_971_);
lean_inc(v_k_970_);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_r_956_);
if (v_isSharedCheck_1005_ == 0)
{
lean_object* v_unused_1006_; lean_object* v_unused_1007_; lean_object* v_unused_1008_; lean_object* v_unused_1009_; lean_object* v_unused_1010_; 
v_unused_1006_ = lean_ctor_get(v_r_956_, 4);
lean_dec(v_unused_1006_);
v_unused_1007_ = lean_ctor_get(v_r_956_, 3);
lean_dec(v_unused_1007_);
v_unused_1008_ = lean_ctor_get(v_r_956_, 2);
lean_dec(v_unused_1008_);
v_unused_1009_ = lean_ctor_get(v_r_956_, 1);
lean_dec(v_unused_1009_);
v_unused_1010_ = lean_ctor_get(v_r_956_, 0);
lean_dec(v_unused_1010_);
v___x_978_ = v_r_956_;
v_isShared_979_ = v_isSharedCheck_1005_;
goto v_resetjp_977_;
}
else
{
lean_dec(v_r_956_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1005_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___x_993_; lean_object* v___y_995_; 
v___x_980_ = lean_nat_add(v___x_950_, v_size_952_);
lean_dec(v_size_952_);
v___x_981_ = lean_nat_add(v___x_980_, v_size_951_);
lean_dec(v___x_980_);
v___x_993_ = lean_nat_add(v___x_950_, v_size_968_);
if (lean_obj_tag(v_l_972_) == 0)
{
lean_object* v_size_1003_; 
v_size_1003_ = lean_ctor_get(v_l_972_, 0);
lean_inc(v_size_1003_);
v___y_995_ = v_size_1003_;
goto v___jp_994_;
}
else
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_unsigned_to_nat(0u);
v___y_995_ = v___x_1004_;
goto v___jp_994_;
}
v___jp_982_:
{
lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_986_ = lean_nat_add(v___y_984_, v___y_985_);
lean_dec(v___y_985_);
lean_dec(v___y_984_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 4, v_r_944_);
lean_ctor_set(v___x_978_, 3, v_r_973_);
lean_ctor_set(v___x_978_, 2, v_v_942_);
lean_ctor_set(v___x_978_, 1, v_k_941_);
lean_ctor_set(v___x_978_, 0, v___x_986_);
v___x_988_ = v___x_978_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_992_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_992_, 3, v_r_973_);
lean_ctor_set(v_reuseFailAlloc_992_, 4, v_r_944_);
v___x_988_ = v_reuseFailAlloc_992_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_990_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 4, v___x_988_);
lean_ctor_set(v___x_966_, 3, v___y_983_);
lean_ctor_set(v___x_966_, 2, v_v_971_);
lean_ctor_set(v___x_966_, 1, v_k_970_);
lean_ctor_set(v___x_966_, 0, v___x_981_);
v___x_990_ = v___x_966_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_981_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_k_970_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v_v_971_);
lean_ctor_set(v_reuseFailAlloc_991_, 3, v___y_983_);
lean_ctor_set(v_reuseFailAlloc_991_, 4, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
v___jp_994_:
{
lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_996_ = lean_nat_add(v___x_993_, v___y_995_);
lean_dec(v___y_995_);
lean_dec(v___x_993_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v_l_972_);
lean_ctor_set(v___x_946_, 3, v_l_955_);
lean_ctor_set(v___x_946_, 2, v_v_954_);
lean_ctor_set(v___x_946_, 1, v_k_953_);
lean_ctor_set(v___x_946_, 0, v___x_996_);
v___x_998_ = v___x_946_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_996_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_k_953_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_v_954_);
lean_ctor_set(v_reuseFailAlloc_1002_, 3, v_l_955_);
lean_ctor_set(v_reuseFailAlloc_1002_, 4, v_l_972_);
v___x_998_ = v_reuseFailAlloc_1002_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; 
v___x_999_ = lean_nat_add(v___x_950_, v_size_951_);
if (lean_obj_tag(v_r_973_) == 0)
{
lean_object* v_size_1000_; 
v_size_1000_ = lean_ctor_get(v_r_973_, 0);
lean_inc(v_size_1000_);
v___y_983_ = v___x_998_;
v___y_984_ = v___x_999_;
v___y_985_ = v_size_1000_;
goto v___jp_982_;
}
else
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_unsigned_to_nat(0u);
v___y_983_ = v___x_998_;
v___y_984_ = v___x_999_;
v___y_985_ = v___x_1001_;
goto v___jp_982_;
}
}
}
}
}
else
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_del_object(v___x_946_);
v___x_1011_ = lean_nat_add(v___x_950_, v_size_952_);
lean_dec(v_size_952_);
v___x_1012_ = lean_nat_add(v___x_1011_, v_size_951_);
lean_dec(v___x_1011_);
v___x_1013_ = lean_nat_add(v___x_950_, v_size_951_);
v___x_1014_ = lean_nat_add(v___x_1013_, v_size_969_);
lean_dec(v___x_1013_);
lean_inc_ref(v_r_944_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 4, v_r_944_);
lean_ctor_set(v___x_966_, 3, v_r_956_);
lean_ctor_set(v___x_966_, 2, v_v_942_);
lean_ctor_set(v___x_966_, 1, v_k_941_);
lean_ctor_set(v___x_966_, 0, v___x_1014_);
v___x_1016_ = v___x_966_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1029_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1029_, 3, v_r_956_);
lean_ctor_set(v_reuseFailAlloc_1029_, 4, v_r_944_);
v___x_1016_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_isSharedCheck_1023_ = !lean_is_exclusive(v_r_944_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; lean_object* v_unused_1025_; lean_object* v_unused_1026_; lean_object* v_unused_1027_; lean_object* v_unused_1028_; 
v_unused_1024_ = lean_ctor_get(v_r_944_, 4);
lean_dec(v_unused_1024_);
v_unused_1025_ = lean_ctor_get(v_r_944_, 3);
lean_dec(v_unused_1025_);
v_unused_1026_ = lean_ctor_get(v_r_944_, 2);
lean_dec(v_unused_1026_);
v_unused_1027_ = lean_ctor_get(v_r_944_, 1);
lean_dec(v_unused_1027_);
v_unused_1028_ = lean_ctor_get(v_r_944_, 0);
lean_dec(v_unused_1028_);
v___x_1018_ = v_r_944_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_dec(v_r_944_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 4, v___x_1016_);
lean_ctor_set(v___x_1018_, 3, v_l_955_);
lean_ctor_set(v___x_1018_, 2, v_v_954_);
lean_ctor_set(v___x_1018_, 1, v_k_953_);
lean_ctor_set(v___x_1018_, 0, v___x_1012_);
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_k_953_);
lean_ctor_set(v_reuseFailAlloc_1022_, 2, v_v_954_);
lean_ctor_set(v_reuseFailAlloc_1022_, 3, v_l_955_);
lean_ctor_set(v_reuseFailAlloc_1022_, 4, v___x_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1036_; 
v_l_1036_ = lean_ctor_get(v_impl_949_, 3);
lean_inc(v_l_1036_);
if (lean_obj_tag(v_l_1036_) == 0)
{
lean_object* v_r_1037_; lean_object* v_k_1038_; lean_object* v_v_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1050_; 
v_r_1037_ = lean_ctor_get(v_impl_949_, 4);
v_k_1038_ = lean_ctor_get(v_impl_949_, 1);
v_v_1039_ = lean_ctor_get(v_impl_949_, 2);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_impl_949_);
if (v_isSharedCheck_1050_ == 0)
{
lean_object* v_unused_1051_; lean_object* v_unused_1052_; 
v_unused_1051_ = lean_ctor_get(v_impl_949_, 3);
lean_dec(v_unused_1051_);
v_unused_1052_ = lean_ctor_get(v_impl_949_, 0);
lean_dec(v_unused_1052_);
v___x_1041_ = v_impl_949_;
v_isShared_1042_ = v_isSharedCheck_1050_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_r_1037_);
lean_inc(v_v_1039_);
lean_inc(v_k_1038_);
lean_dec(v_impl_949_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1050_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1043_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1037_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 3, v_r_1037_);
lean_ctor_set(v___x_1041_, 2, v_v_942_);
lean_ctor_set(v___x_1041_, 1, v_k_941_);
lean_ctor_set(v___x_1041_, 0, v___x_950_);
v___x_1045_ = v___x_1041_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_950_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1049_, 3, v_r_1037_);
lean_ctor_set(v_reuseFailAlloc_1049_, 4, v_r_1037_);
v___x_1045_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1047_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v___x_1045_);
lean_ctor_set(v___x_946_, 3, v_l_1036_);
lean_ctor_set(v___x_946_, 2, v_v_1039_);
lean_ctor_set(v___x_946_, 1, v_k_1038_);
lean_ctor_set(v___x_946_, 0, v___x_1043_);
v___x_1047_ = v___x_946_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_k_1038_);
lean_ctor_set(v_reuseFailAlloc_1048_, 2, v_v_1039_);
lean_ctor_set(v_reuseFailAlloc_1048_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1048_, 4, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
else
{
lean_object* v_r_1053_; 
v_r_1053_ = lean_ctor_get(v_impl_949_, 4);
lean_inc(v_r_1053_);
if (lean_obj_tag(v_r_1053_) == 0)
{
lean_object* v_k_1054_; lean_object* v_v_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1078_; 
v_k_1054_ = lean_ctor_get(v_impl_949_, 1);
v_v_1055_ = lean_ctor_get(v_impl_949_, 2);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_impl_949_);
if (v_isSharedCheck_1078_ == 0)
{
lean_object* v_unused_1079_; lean_object* v_unused_1080_; lean_object* v_unused_1081_; 
v_unused_1079_ = lean_ctor_get(v_impl_949_, 4);
lean_dec(v_unused_1079_);
v_unused_1080_ = lean_ctor_get(v_impl_949_, 3);
lean_dec(v_unused_1080_);
v_unused_1081_ = lean_ctor_get(v_impl_949_, 0);
lean_dec(v_unused_1081_);
v___x_1057_ = v_impl_949_;
v_isShared_1058_ = v_isSharedCheck_1078_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_v_1055_);
lean_inc(v_k_1054_);
lean_dec(v_impl_949_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1078_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v_k_1059_; lean_object* v_v_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1074_; 
v_k_1059_ = lean_ctor_get(v_r_1053_, 1);
v_v_1060_ = lean_ctor_get(v_r_1053_, 2);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_r_1053_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; lean_object* v_unused_1076_; lean_object* v_unused_1077_; 
v_unused_1075_ = lean_ctor_get(v_r_1053_, 4);
lean_dec(v_unused_1075_);
v_unused_1076_ = lean_ctor_get(v_r_1053_, 3);
lean_dec(v_unused_1076_);
v_unused_1077_ = lean_ctor_get(v_r_1053_, 0);
lean_dec(v_unused_1077_);
v___x_1062_ = v_r_1053_;
v_isShared_1063_ = v_isSharedCheck_1074_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_v_1060_);
lean_inc(v_k_1059_);
lean_dec(v_r_1053_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1074_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1064_ = lean_unsigned_to_nat(3u);
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 4, v_l_1036_);
lean_ctor_set(v___x_1062_, 3, v_l_1036_);
lean_ctor_set(v___x_1062_, 2, v_v_1055_);
lean_ctor_set(v___x_1062_, 1, v_k_1054_);
lean_ctor_set(v___x_1062_, 0, v___x_950_);
v___x_1066_ = v___x_1062_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_950_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_k_1054_);
lean_ctor_set(v_reuseFailAlloc_1073_, 2, v_v_1055_);
lean_ctor_set(v_reuseFailAlloc_1073_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1073_, 4, v_l_1036_);
v___x_1066_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1068_; 
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 4, v_l_1036_);
lean_ctor_set(v___x_1057_, 2, v_v_942_);
lean_ctor_set(v___x_1057_, 1, v_k_941_);
lean_ctor_set(v___x_1057_, 0, v___x_950_);
v___x_1068_ = v___x_1057_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_950_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1072_, 3, v_l_1036_);
lean_ctor_set(v_reuseFailAlloc_1072_, 4, v_l_1036_);
v___x_1068_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
lean_object* v___x_1070_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v___x_1068_);
lean_ctor_set(v___x_946_, 3, v___x_1066_);
lean_ctor_set(v___x_946_, 2, v_v_1060_);
lean_ctor_set(v___x_946_, 1, v_k_1059_);
lean_ctor_set(v___x_946_, 0, v___x_1064_);
v___x_1070_ = v___x_946_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_k_1059_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v_v_1060_);
lean_ctor_set(v_reuseFailAlloc_1071_, 3, v___x_1066_);
lean_ctor_set(v_reuseFailAlloc_1071_, 4, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
}
else
{
lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1082_ = lean_unsigned_to_nat(2u);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v_r_1053_);
lean_ctor_set(v___x_946_, 3, v_impl_949_);
lean_ctor_set(v___x_946_, 0, v___x_1082_);
v___x_1084_ = v___x_946_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1082_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1085_, 3, v_impl_949_);
lean_ctor_set(v_reuseFailAlloc_1085_, 4, v_r_1053_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1087_; 
lean_dec(v_v_942_);
lean_dec(v_k_941_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 2, v_v_938_);
lean_ctor_set(v___x_946_, 1, v_k_937_);
v___x_1087_ = v___x_946_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_size_940_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_k_937_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v_v_938_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_l_943_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v_r_944_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
default: 
{
lean_object* v_impl_1089_; lean_object* v___x_1090_; 
lean_dec(v_size_940_);
v_impl_1089_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0___redArg(v_k_937_, v_v_938_, v_r_944_);
v___x_1090_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_943_) == 0)
{
lean_object* v_size_1091_; lean_object* v_size_1092_; lean_object* v_k_1093_; lean_object* v_v_1094_; lean_object* v_l_1095_; lean_object* v_r_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v_size_1091_ = lean_ctor_get(v_l_943_, 0);
v_size_1092_ = lean_ctor_get(v_impl_1089_, 0);
lean_inc(v_size_1092_);
v_k_1093_ = lean_ctor_get(v_impl_1089_, 1);
lean_inc(v_k_1093_);
v_v_1094_ = lean_ctor_get(v_impl_1089_, 2);
lean_inc(v_v_1094_);
v_l_1095_ = lean_ctor_get(v_impl_1089_, 3);
lean_inc(v_l_1095_);
v_r_1096_ = lean_ctor_get(v_impl_1089_, 4);
lean_inc(v_r_1096_);
v___x_1097_ = lean_unsigned_to_nat(3u);
v___x_1098_ = lean_nat_mul(v___x_1097_, v_size_1091_);
v___x_1099_ = lean_nat_dec_lt(v___x_1098_, v_size_1092_);
lean_dec(v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1103_; 
lean_dec(v_r_1096_);
lean_dec(v_l_1095_);
lean_dec(v_v_1094_);
lean_dec(v_k_1093_);
v___x_1100_ = lean_nat_add(v___x_1090_, v_size_1091_);
v___x_1101_ = lean_nat_add(v___x_1100_, v_size_1092_);
lean_dec(v_size_1092_);
lean_dec(v___x_1100_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v_impl_1089_);
lean_ctor_set(v___x_946_, 0, v___x_1101_);
v___x_1103_ = v___x_946_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1104_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1104_, 3, v_l_943_);
lean_ctor_set(v_reuseFailAlloc_1104_, 4, v_impl_1089_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
else
{
lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1168_; 
v_isSharedCheck_1168_ = !lean_is_exclusive(v_impl_1089_);
if (v_isSharedCheck_1168_ == 0)
{
lean_object* v_unused_1169_; lean_object* v_unused_1170_; lean_object* v_unused_1171_; lean_object* v_unused_1172_; lean_object* v_unused_1173_; 
v_unused_1169_ = lean_ctor_get(v_impl_1089_, 4);
lean_dec(v_unused_1169_);
v_unused_1170_ = lean_ctor_get(v_impl_1089_, 3);
lean_dec(v_unused_1170_);
v_unused_1171_ = lean_ctor_get(v_impl_1089_, 2);
lean_dec(v_unused_1171_);
v_unused_1172_ = lean_ctor_get(v_impl_1089_, 1);
lean_dec(v_unused_1172_);
v_unused_1173_ = lean_ctor_get(v_impl_1089_, 0);
lean_dec(v_unused_1173_);
v___x_1106_ = v_impl_1089_;
v_isShared_1107_ = v_isSharedCheck_1168_;
goto v_resetjp_1105_;
}
else
{
lean_dec(v_impl_1089_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1168_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_size_1108_; lean_object* v_k_1109_; lean_object* v_v_1110_; lean_object* v_l_1111_; lean_object* v_r_1112_; lean_object* v_size_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v_size_1108_ = lean_ctor_get(v_l_1095_, 0);
v_k_1109_ = lean_ctor_get(v_l_1095_, 1);
v_v_1110_ = lean_ctor_get(v_l_1095_, 2);
v_l_1111_ = lean_ctor_get(v_l_1095_, 3);
v_r_1112_ = lean_ctor_get(v_l_1095_, 4);
v_size_1113_ = lean_ctor_get(v_r_1096_, 0);
v___x_1114_ = lean_unsigned_to_nat(2u);
v___x_1115_ = lean_nat_mul(v___x_1114_, v_size_1113_);
v___x_1116_ = lean_nat_dec_lt(v_size_1108_, v___x_1115_);
lean_dec(v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1144_; 
lean_inc(v_r_1112_);
lean_inc(v_l_1111_);
lean_inc(v_v_1110_);
lean_inc(v_k_1109_);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_l_1095_);
if (v_isSharedCheck_1144_ == 0)
{
lean_object* v_unused_1145_; lean_object* v_unused_1146_; lean_object* v_unused_1147_; lean_object* v_unused_1148_; lean_object* v_unused_1149_; 
v_unused_1145_ = lean_ctor_get(v_l_1095_, 4);
lean_dec(v_unused_1145_);
v_unused_1146_ = lean_ctor_get(v_l_1095_, 3);
lean_dec(v_unused_1146_);
v_unused_1147_ = lean_ctor_get(v_l_1095_, 2);
lean_dec(v_unused_1147_);
v_unused_1148_ = lean_ctor_get(v_l_1095_, 1);
lean_dec(v_unused_1148_);
v_unused_1149_ = lean_ctor_get(v_l_1095_, 0);
lean_dec(v_unused_1149_);
v___x_1118_ = v_l_1095_;
v_isShared_1119_ = v_isSharedCheck_1144_;
goto v_resetjp_1117_;
}
else
{
lean_dec(v_l_1095_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1144_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1134_; 
v___x_1120_ = lean_nat_add(v___x_1090_, v_size_1091_);
v___x_1121_ = lean_nat_add(v___x_1120_, v_size_1092_);
lean_dec(v_size_1092_);
if (lean_obj_tag(v_l_1111_) == 0)
{
lean_object* v_size_1142_; 
v_size_1142_ = lean_ctor_get(v_l_1111_, 0);
lean_inc(v_size_1142_);
v___y_1134_ = v_size_1142_;
goto v___jp_1133_;
}
else
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_unsigned_to_nat(0u);
v___y_1134_ = v___x_1143_;
goto v___jp_1133_;
}
v___jp_1122_:
{
lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___x_1126_ = lean_nat_add(v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec(v___y_1124_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 4, v_r_1096_);
lean_ctor_set(v___x_1118_, 3, v_r_1112_);
lean_ctor_set(v___x_1118_, 2, v_v_1094_);
lean_ctor_set(v___x_1118_, 1, v_k_1093_);
lean_ctor_set(v___x_1118_, 0, v___x_1126_);
v___x_1128_ = v___x_1118_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_k_1093_);
lean_ctor_set(v_reuseFailAlloc_1132_, 2, v_v_1094_);
lean_ctor_set(v_reuseFailAlloc_1132_, 3, v_r_1112_);
lean_ctor_set(v_reuseFailAlloc_1132_, 4, v_r_1096_);
v___x_1128_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1130_; 
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 4, v___x_1128_);
lean_ctor_set(v___x_1106_, 3, v___y_1123_);
lean_ctor_set(v___x_1106_, 2, v_v_1110_);
lean_ctor_set(v___x_1106_, 1, v_k_1109_);
lean_ctor_set(v___x_1106_, 0, v___x_1121_);
v___x_1130_ = v___x_1106_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_k_1109_);
lean_ctor_set(v_reuseFailAlloc_1131_, 2, v_v_1110_);
lean_ctor_set(v_reuseFailAlloc_1131_, 3, v___y_1123_);
lean_ctor_set(v_reuseFailAlloc_1131_, 4, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
v___jp_1133_:
{
lean_object* v___x_1135_; lean_object* v___x_1137_; 
v___x_1135_ = lean_nat_add(v___x_1120_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec(v___x_1120_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v_l_1111_);
lean_ctor_set(v___x_946_, 0, v___x_1135_);
v___x_1137_ = v___x_946_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1135_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1141_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1141_, 3, v_l_943_);
lean_ctor_set(v_reuseFailAlloc_1141_, 4, v_l_1111_);
v___x_1137_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_nat_add(v___x_1090_, v_size_1113_);
if (lean_obj_tag(v_r_1112_) == 0)
{
lean_object* v_size_1139_; 
v_size_1139_ = lean_ctor_get(v_r_1112_, 0);
lean_inc(v_size_1139_);
v___y_1123_ = v___x_1137_;
v___y_1124_ = v___x_1138_;
v___y_1125_ = v_size_1139_;
goto v___jp_1122_;
}
else
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_unsigned_to_nat(0u);
v___y_1123_ = v___x_1137_;
v___y_1124_ = v___x_1138_;
v___y_1125_ = v___x_1140_;
goto v___jp_1122_;
}
}
}
}
}
else
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1154_; 
lean_del_object(v___x_946_);
v___x_1150_ = lean_nat_add(v___x_1090_, v_size_1091_);
v___x_1151_ = lean_nat_add(v___x_1150_, v_size_1092_);
lean_dec(v_size_1092_);
v___x_1152_ = lean_nat_add(v___x_1150_, v_size_1108_);
lean_dec(v___x_1150_);
lean_inc_ref(v_l_943_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 4, v_l_1095_);
lean_ctor_set(v___x_1106_, 3, v_l_943_);
lean_ctor_set(v___x_1106_, 2, v_v_942_);
lean_ctor_set(v___x_1106_, 1, v_k_941_);
lean_ctor_set(v___x_1106_, 0, v___x_1152_);
v___x_1154_ = v___x_1106_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1152_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1167_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1167_, 3, v_l_943_);
lean_ctor_set(v_reuseFailAlloc_1167_, 4, v_l_1095_);
v___x_1154_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
v_isSharedCheck_1161_ = !lean_is_exclusive(v_l_943_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; lean_object* v_unused_1163_; lean_object* v_unused_1164_; lean_object* v_unused_1165_; lean_object* v_unused_1166_; 
v_unused_1162_ = lean_ctor_get(v_l_943_, 4);
lean_dec(v_unused_1162_);
v_unused_1163_ = lean_ctor_get(v_l_943_, 3);
lean_dec(v_unused_1163_);
v_unused_1164_ = lean_ctor_get(v_l_943_, 2);
lean_dec(v_unused_1164_);
v_unused_1165_ = lean_ctor_get(v_l_943_, 1);
lean_dec(v_unused_1165_);
v_unused_1166_ = lean_ctor_get(v_l_943_, 0);
lean_dec(v_unused_1166_);
v___x_1156_ = v_l_943_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_dec(v_l_943_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 4, v_r_1096_);
lean_ctor_set(v___x_1156_, 3, v___x_1154_);
lean_ctor_set(v___x_1156_, 2, v_v_1094_);
lean_ctor_set(v___x_1156_, 1, v_k_1093_);
lean_ctor_set(v___x_1156_, 0, v___x_1151_);
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_k_1093_);
lean_ctor_set(v_reuseFailAlloc_1160_, 2, v_v_1094_);
lean_ctor_set(v_reuseFailAlloc_1160_, 3, v___x_1154_);
lean_ctor_set(v_reuseFailAlloc_1160_, 4, v_r_1096_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1174_; 
v_l_1174_ = lean_ctor_get(v_impl_1089_, 3);
lean_inc(v_l_1174_);
if (lean_obj_tag(v_l_1174_) == 0)
{
lean_object* v_r_1175_; lean_object* v_k_1176_; lean_object* v_v_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1200_; 
v_r_1175_ = lean_ctor_get(v_impl_1089_, 4);
v_k_1176_ = lean_ctor_get(v_impl_1089_, 1);
v_v_1177_ = lean_ctor_get(v_impl_1089_, 2);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_impl_1089_);
if (v_isSharedCheck_1200_ == 0)
{
lean_object* v_unused_1201_; lean_object* v_unused_1202_; 
v_unused_1201_ = lean_ctor_get(v_impl_1089_, 3);
lean_dec(v_unused_1201_);
v_unused_1202_ = lean_ctor_get(v_impl_1089_, 0);
lean_dec(v_unused_1202_);
v___x_1179_ = v_impl_1089_;
v_isShared_1180_ = v_isSharedCheck_1200_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_r_1175_);
lean_inc(v_v_1177_);
lean_inc(v_k_1176_);
lean_dec(v_impl_1089_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1200_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v_k_1181_; lean_object* v_v_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1196_; 
v_k_1181_ = lean_ctor_get(v_l_1174_, 1);
v_v_1182_ = lean_ctor_get(v_l_1174_, 2);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_l_1174_);
if (v_isSharedCheck_1196_ == 0)
{
lean_object* v_unused_1197_; lean_object* v_unused_1198_; lean_object* v_unused_1199_; 
v_unused_1197_ = lean_ctor_get(v_l_1174_, 4);
lean_dec(v_unused_1197_);
v_unused_1198_ = lean_ctor_get(v_l_1174_, 3);
lean_dec(v_unused_1198_);
v_unused_1199_ = lean_ctor_get(v_l_1174_, 0);
lean_dec(v_unused_1199_);
v___x_1184_ = v_l_1174_;
v_isShared_1185_ = v_isSharedCheck_1196_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_v_1182_);
lean_inc(v_k_1181_);
lean_dec(v_l_1174_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1196_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1186_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1175_, 2);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 4, v_r_1175_);
lean_ctor_set(v___x_1184_, 3, v_r_1175_);
lean_ctor_set(v___x_1184_, 2, v_v_942_);
lean_ctor_set(v___x_1184_, 1, v_k_941_);
lean_ctor_set(v___x_1184_, 0, v___x_1090_);
v___x_1188_ = v___x_1184_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1195_, 3, v_r_1175_);
lean_ctor_set(v_reuseFailAlloc_1195_, 4, v_r_1175_);
v___x_1188_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1190_; 
lean_inc(v_r_1175_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 3, v_r_1175_);
lean_ctor_set(v___x_1179_, 0, v___x_1090_);
v___x_1190_ = v___x_1179_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v_k_1176_);
lean_ctor_set(v_reuseFailAlloc_1194_, 2, v_v_1177_);
lean_ctor_set(v_reuseFailAlloc_1194_, 3, v_r_1175_);
lean_ctor_set(v_reuseFailAlloc_1194_, 4, v_r_1175_);
v___x_1190_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1192_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v___x_1190_);
lean_ctor_set(v___x_946_, 3, v___x_1188_);
lean_ctor_set(v___x_946_, 2, v_v_1182_);
lean_ctor_set(v___x_946_, 1, v_k_1181_);
lean_ctor_set(v___x_946_, 0, v___x_1186_);
v___x_1192_ = v___x_946_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_k_1181_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_v_1182_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1193_, 4, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
}
else
{
lean_object* v_r_1203_; 
v_r_1203_ = lean_ctor_get(v_impl_1089_, 4);
lean_inc(v_r_1203_);
if (lean_obj_tag(v_r_1203_) == 0)
{
lean_object* v_k_1204_; lean_object* v_v_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1216_; 
v_k_1204_ = lean_ctor_get(v_impl_1089_, 1);
v_v_1205_ = lean_ctor_get(v_impl_1089_, 2);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_impl_1089_);
if (v_isSharedCheck_1216_ == 0)
{
lean_object* v_unused_1217_; lean_object* v_unused_1218_; lean_object* v_unused_1219_; 
v_unused_1217_ = lean_ctor_get(v_impl_1089_, 4);
lean_dec(v_unused_1217_);
v_unused_1218_ = lean_ctor_get(v_impl_1089_, 3);
lean_dec(v_unused_1218_);
v_unused_1219_ = lean_ctor_get(v_impl_1089_, 0);
lean_dec(v_unused_1219_);
v___x_1207_ = v_impl_1089_;
v_isShared_1208_ = v_isSharedCheck_1216_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_v_1205_);
lean_inc(v_k_1204_);
lean_dec(v_impl_1089_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1216_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1209_ = lean_unsigned_to_nat(3u);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 4, v_l_1174_);
lean_ctor_set(v___x_1207_, 2, v_v_942_);
lean_ctor_set(v___x_1207_, 1, v_k_941_);
lean_ctor_set(v___x_1207_, 0, v___x_1090_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1215_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1215_, 3, v_l_1174_);
lean_ctor_set(v_reuseFailAlloc_1215_, 4, v_l_1174_);
v___x_1211_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1213_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v_r_1203_);
lean_ctor_set(v___x_946_, 3, v___x_1211_);
lean_ctor_set(v___x_946_, 2, v_v_1205_);
lean_ctor_set(v___x_946_, 1, v_k_1204_);
lean_ctor_set(v___x_946_, 0, v___x_1209_);
v___x_1213_ = v___x_946_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_k_1204_);
lean_ctor_set(v_reuseFailAlloc_1214_, 2, v_v_1205_);
lean_ctor_set(v_reuseFailAlloc_1214_, 3, v___x_1211_);
lean_ctor_set(v_reuseFailAlloc_1214_, 4, v_r_1203_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1222_; 
v___x_1220_ = lean_unsigned_to_nat(2u);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v_impl_1089_);
lean_ctor_set(v___x_946_, 3, v_r_1203_);
lean_ctor_set(v___x_946_, 0, v___x_1220_);
v___x_1222_ = v___x_946_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v_k_941_);
lean_ctor_set(v_reuseFailAlloc_1223_, 2, v_v_942_);
lean_ctor_set(v_reuseFailAlloc_1223_, 3, v_r_1203_);
lean_ctor_set(v_reuseFailAlloc_1223_, 4, v_impl_1089_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
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
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(1u);
v___x_1226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v_k_937_);
lean_ctor_set(v___x_1226_, 2, v_v_938_);
lean_ctor_set(v___x_1226_, 3, v_t_939_);
lean_ctor_set(v___x_1226_, 4, v_t_939_);
return v___x_1226_;
}
}
}
static lean_object* _init_l_Lake_versionTagPresets___closed__0(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1227_ = lean_box(1);
v___x_1228_ = ((lean_object*)(l_Lake_StrPat_verLike));
v___x_1229_ = ((lean_object*)(l_Lake_StrPat_verLike___closed__2));
v___x_1230_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_1229_, v___x_1228_, v___x_1227_);
return v___x_1230_;
}
}
static lean_object* _init_l_Lake_versionTagPresets___closed__1(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = lean_obj_once(&l_Lake_versionTagPresets___closed__0, &l_Lake_versionTagPresets___closed__0_once, _init_l_Lake_versionTagPresets___closed__0);
v___x_1232_ = ((lean_object*)(l_Lake_defaultVersionTags));
v___x_1233_ = ((lean_object*)(l_Lake_defaultVersionTags___closed__1));
v___x_1234_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0___redArg(v___x_1233_, v___x_1232_, v___x_1231_);
return v___x_1234_;
}
}
static lean_object* _init_l_Lake_versionTagPresets(void){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_obj_once(&l_Lake_versionTagPresets___closed__1, &l_Lake_versionTagPresets___closed__1_once, _init_l_Lake_versionTagPresets___closed__1);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0(lean_object* v_00_u03b2_1236_, lean_object* v_k_1237_, lean_object* v_v_1238_, lean_object* v_t_1239_, lean_object* v_hl_1240_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_versionTagPresets_spec__0___redArg(v_k_1237_, v_v_1238_, v_t_1239_);
return v___x_1241_;
}
}
lean_object* runtime_initialize_Init_System_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedPathPatDescr_default = _init_l_Lake_instInhabitedPathPatDescr_default();
lean_mark_persistent(l_Lake_instInhabitedPathPatDescr_default);
l_Lake_instInhabitedPathPatDescr = _init_l_Lake_instInhabitedPathPatDescr();
lean_mark_persistent(l_Lake_instInhabitedPathPatDescr);
l_Lake_versionTagPresets = _init_l_Lake_versionTagPresets();
lean_mark_persistent(l_Lake_versionTagPresets);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_FilePath(uint8_t builtin);
lean_object* initialize_Std_Data_TreeMap_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Pattern(builtin);
}
#ifdef __cplusplus
}
#endif

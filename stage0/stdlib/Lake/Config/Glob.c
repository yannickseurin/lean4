// Lean compiler output
// Module: Lake.Config.Glob
// Imports: public import Lean.Util.Path import Init.Data.ToString.Name import Lean.Data.Name
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_forEachModuleInDir___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Array_singleton(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedGlob_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedGlob_default___closed__0;
static lean_once_cell_t l_Lake_instInhabitedGlob_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedGlob_default___closed__1;
LEAN_EXPORT lean_object* l_Lake_instInhabitedGlob_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedGlob;
static const lean_string_object l_Lake_instReprGlob_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lake.Glob.one"};
static const lean_object* l_Lake_instReprGlob_repr___closed__0 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprGlob_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprGlob_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprGlob_repr___closed__1 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__1_value;
static const lean_ctor_object l_Lake_instReprGlob_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprGlob_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprGlob_repr___closed__2 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__2_value;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__3;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__4;
static const lean_string_object l_Lake_instReprGlob_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.Glob.submodules"};
static const lean_object* l_Lake_instReprGlob_repr___closed__5 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__5_value;
static const lean_ctor_object l_Lake_instReprGlob_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprGlob_repr___closed__5_value)}};
static const lean_object* l_Lake_instReprGlob_repr___closed__6 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprGlob_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprGlob_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprGlob_repr___closed__7 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__7_value;
static const lean_string_object l_Lake_instReprGlob_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lake.Glob.andSubmodules"};
static const lean_object* l_Lake_instReprGlob_repr___closed__8 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprGlob_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprGlob_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprGlob_repr___closed__9 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__9_value;
static const lean_ctor_object l_Lake_instReprGlob_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprGlob_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprGlob_repr___closed__10 = (const lean_object*)&l_Lake_instReprGlob_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprGlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprGlob_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprGlob___closed__0 = (const lean_object*)&l_Lake_instReprGlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprGlob = (const lean_object*)&l_Lake_instReprGlob___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeNameGlob___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeNameGlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeNameGlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeNameGlob___closed__0 = (const lean_object*)&l_Lake_instCoeNameGlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeNameGlob = (const lean_object*)&l_Lake_instCoeNameGlob___closed__0_value;
static const lean_closure_object l_Lake_instCoeGlobArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_singleton, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instCoeGlobArray___closed__0 = (const lean_object*)&l_Lake_instCoeGlobArray___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeGlobArray = (const lean_object*)&l_Lake_instCoeGlobArray___closed__0_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__0 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__0_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term__.*"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__1 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__1_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__2_value_aux_0),((lean_object*)&l_Lake_term_____x2e_x2a___closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 124, 105, 77, 27, 110, 223, 140)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__2 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__2_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__3 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__3_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__4 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__4_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__5 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__5_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__5_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__6 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__6_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__6_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__7 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__7_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__8 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__8_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__8_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__9 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__9_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "noWs"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__10 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__10_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__10_value),LEAN_SCALAR_PTR_LITERAL(92, 29, 204, 148, 167, 109, 242, 21)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__11 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__11_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__11_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__12 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__12_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__9_value),((lean_object*)&l_Lake_term_____x2e_x2a___closed__12_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__13 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__13_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__4_value),((lean_object*)&l_Lake_term_____x2e_x2a___closed__7_value),((lean_object*)&l_Lake_term_____x2e_x2a___closed__13_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__14 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__14_value;
static const lean_string_object l_Lake_term_____x2e_x2a___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".*"};
static const lean_object* l_Lake_term_____x2e_x2a___closed__15 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__15_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__15_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__16 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__16_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__4_value),((lean_object*)&l_Lake_term_____x2e_x2a___closed__14_value),((lean_object*)&l_Lake_term_____x2e_x2a___closed__16_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__17 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__17_value;
static const lean_ctor_object l_Lake_term_____x2e_x2a___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__17_value)}};
static const lean_object* l_Lake_term_____x2e_x2a___closed__18 = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__18_value;
LEAN_EXPORT const lean_object* l_Lake_term_____x2e_x2a = (const lean_object*)&l_Lake_term_____x2e_x2a___closed__18_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Glob.andSubmodules"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5_value;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Glob"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "andSubmodules"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(26, 132, 67, 250, 48, 109, 63, 126)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(222, 145, 41, 104, 49, 15, 85, 40)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(222, 149, 144, 131, 37, 196, 123, 168)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(202, 0, 72, 87, 26, 211, 128, 20)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_value)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11_value),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13_value)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_term_____x2e_x2b___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term__.+"};
static const lean_object* l_Lake_term_____x2e_x2b___closed__0 = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__0_value;
static const lean_ctor_object l_Lake_term_____x2e_x2b___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_term_____x2e_x2b___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2b___closed__1_value_aux_0),((lean_object*)&l_Lake_term_____x2e_x2b___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 74, 46, 183, 128, 87, 172, 156)}};
static const lean_object* l_Lake_term_____x2e_x2b___closed__1 = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__1_value;
static const lean_string_object l_Lake_term_____x2e_x2b___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".+"};
static const lean_object* l_Lake_term_____x2e_x2b___closed__2 = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__2_value;
static const lean_ctor_object l_Lake_term_____x2e_x2b___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2b___closed__2_value)}};
static const lean_object* l_Lake_term_____x2e_x2b___closed__3 = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__3_value;
static const lean_ctor_object l_Lake_term_____x2e_x2b___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2a___closed__4_value),((lean_object*)&l_Lake_term_____x2e_x2a___closed__14_value),((lean_object*)&l_Lake_term_____x2e_x2b___closed__3_value)}};
static const lean_object* l_Lake_term_____x2e_x2b___closed__4 = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__4_value;
static const lean_ctor_object l_Lake_term_____x2e_x2b___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_term_____x2e_x2b___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2b___closed__4_value)}};
static const lean_object* l_Lake_term_____x2e_x2b___closed__5 = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__5_value;
LEAN_EXPORT const lean_object* l_Lake_term_____x2e_x2b = (const lean_object*)&l_Lake_term_____x2e_x2b___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Glob.submodules"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0_value;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1;
static const lean_string_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "submodules"};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(26, 132, 67, 250, 48, 109, 63, 126)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(30, 142, 32, 161, 255, 145, 57, 209)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_term_____x2e_x2a___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(222, 149, 144, 131, 37, 196, 123, 168)}};
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(138, 92, 73, 223, 11, 170, 61, 155)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_value)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7_value;
static const lean_ctor_object l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5_value),((lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7_value)}};
static const lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_toString(lean_object*);
static const lean_closure_object l_Lake_Glob_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Glob_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Glob_instToString___closed__0 = (const lean_object*)&l_Lake_Glob_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Glob_instToString = (const lean_object*)&l_Lake_Glob_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_Glob_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_matches___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0 = (const lean_object*)&l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lake_Glob_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
lean_object* v_a_9_; lean_object* v___x_10_; 
v_a_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_a_9_);
lean_dec_ref(v_t_7_);
v___x_10_ = lean_apply_1(v_k_8_, v_a_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lake_Glob_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lake_Glob_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim___redArg(lean_object* v_t_23_, lean_object* v_one_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lake_Glob_ctorElim___redArg(v_t_23_, v_one_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_one_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lake_Glob_ctorElim___redArg(v_t_27_, v_one_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim___redArg(lean_object* v_t_31_, lean_object* v_submodules_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lake_Glob_ctorElim___redArg(v_t_31_, v_submodules_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_submodules_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lake_Glob_ctorElim___redArg(v_t_35_, v_submodules_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim___redArg(lean_object* v_t_39_, lean_object* v_andSubmodules_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_Glob_ctorElim___redArg(v_t_39_, v_andSubmodules_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_andSubmodules_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lake_Glob_ctorElim___redArg(v_t_43_, v_andSubmodules_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob_default___closed__0(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_box(0);
v___x_48_ = l_unsafeCast___redArg(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob_default___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l_Lake_instInhabitedGlob_default___closed__0, &l_Lake_instInhabitedGlob_default___closed__0_once, _init_l_Lake_instInhabitedGlob_default___closed__0);
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob_default(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_obj_once(&l_Lake_instInhabitedGlob_default___closed__1, &l_Lake_instInhabitedGlob_default___closed__1_once, _init_l_Lake_instInhabitedGlob_default___closed__1);
return v___x_51_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lake_instInhabitedGlob_default;
return v___x_52_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__3(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(2u);
v___x_60_ = lean_nat_to_int(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__4(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_to_int(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr(lean_object* v_x_75_, lean_object* v_prec_76_){
_start:
{
switch(lean_obj_tag(v_x_75_))
{
case 0:
{
lean_object* v_a_77_; lean_object* v___y_79_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_a_77_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_a_77_);
lean_dec_ref_known(v_x_75_, 1);
v___x_88_ = lean_unsigned_to_nat(1024u);
v___x_89_ = lean_nat_dec_le(v___x_88_, v_prec_76_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__3, &l_Lake_instReprGlob_repr___closed__3_once, _init_l_Lake_instReprGlob_repr___closed__3);
v___y_79_ = v___x_90_;
goto v___jp_78_;
}
else
{
lean_object* v___x_91_; 
v___x_91_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__4, &l_Lake_instReprGlob_repr___closed__4_once, _init_l_Lake_instReprGlob_repr___closed__4);
v___y_79_ = v___x_91_;
goto v___jp_78_;
}
v___jp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_80_ = ((lean_object*)(l_Lake_instReprGlob_repr___closed__2));
v___x_81_ = lean_unsigned_to_nat(1024u);
v___x_82_ = l_Lean_Name_reprPrec(v_a_77_, v___x_81_);
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_80_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
lean_inc(v___y_79_);
v___x_84_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_84_, 0, v___y_79_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = 0;
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___x_85_);
v___x_87_ = l_Repr_addAppParen(v___x_86_, v_prec_76_);
return v___x_87_;
}
}
case 1:
{
lean_object* v_a_92_; lean_object* v___y_94_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_a_92_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_a_92_);
lean_dec_ref_known(v_x_75_, 1);
v___x_103_ = lean_unsigned_to_nat(1024u);
v___x_104_ = lean_nat_dec_le(v___x_103_, v_prec_76_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__3, &l_Lake_instReprGlob_repr___closed__3_once, _init_l_Lake_instReprGlob_repr___closed__3);
v___y_94_ = v___x_105_;
goto v___jp_93_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__4, &l_Lake_instReprGlob_repr___closed__4_once, _init_l_Lake_instReprGlob_repr___closed__4);
v___y_94_ = v___x_106_;
goto v___jp_93_;
}
v___jp_93_:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_95_ = ((lean_object*)(l_Lake_instReprGlob_repr___closed__7));
v___x_96_ = lean_unsigned_to_nat(1024u);
v___x_97_ = l_Lean_Name_reprPrec(v_a_92_, v___x_96_);
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_95_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
lean_inc(v___y_94_);
v___x_99_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_99_, 0, v___y_94_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = 0;
v___x_101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_101_, 0, v___x_99_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*1, v___x_100_);
v___x_102_ = l_Repr_addAppParen(v___x_101_, v_prec_76_);
return v___x_102_;
}
}
default: 
{
lean_object* v_a_107_; lean_object* v___y_109_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_a_107_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_a_107_);
lean_dec_ref_known(v_x_75_, 1);
v___x_118_ = lean_unsigned_to_nat(1024u);
v___x_119_ = lean_nat_dec_le(v___x_118_, v_prec_76_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
v___x_120_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__3, &l_Lake_instReprGlob_repr___closed__3_once, _init_l_Lake_instReprGlob_repr___closed__3);
v___y_109_ = v___x_120_;
goto v___jp_108_;
}
else
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__4, &l_Lake_instReprGlob_repr___closed__4_once, _init_l_Lake_instReprGlob_repr___closed__4);
v___y_109_ = v___x_121_;
goto v___jp_108_;
}
v___jp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_110_ = ((lean_object*)(l_Lake_instReprGlob_repr___closed__10));
v___x_111_ = lean_unsigned_to_nat(1024u);
v___x_112_ = l_Lean_Name_reprPrec(v_a_107_, v___x_111_);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_110_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
lean_inc(v___y_109_);
v___x_114_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_114_, 0, v___y_109_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = 0;
v___x_116_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*1, v___x_115_);
v___x_117_ = l_Repr_addAppParen(v___x_116_, v_prec_76_);
return v___x_117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr___boxed(lean_object* v_x_122_, lean_object* v_prec_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lake_instReprGlob_repr(v_x_122_, v_prec_123_);
lean_dec(v_prec_123_);
return v_res_124_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob_decEq(lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
switch(lean_obj_tag(v_x_127_))
{
case 0:
{
if (lean_obj_tag(v_x_128_) == 0)
{
lean_object* v_a_129_; lean_object* v_a_130_; uint8_t v___x_131_; 
v_a_129_ = lean_ctor_get(v_x_127_, 0);
v_a_130_ = lean_ctor_get(v_x_128_, 0);
v___x_131_ = lean_name_eq(v_a_129_, v_a_130_);
return v___x_131_;
}
else
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
}
case 1:
{
if (lean_obj_tag(v_x_128_) == 1)
{
lean_object* v_a_133_; lean_object* v_a_134_; uint8_t v___x_135_; 
v_a_133_ = lean_ctor_get(v_x_127_, 0);
v_a_134_ = lean_ctor_get(v_x_128_, 0);
v___x_135_ = lean_name_eq(v_a_133_, v_a_134_);
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
}
default: 
{
if (lean_obj_tag(v_x_128_) == 2)
{
lean_object* v_a_137_; lean_object* v_a_138_; uint8_t v___x_139_; 
v_a_137_ = lean_ctor_get(v_x_127_, 0);
v_a_138_ = lean_ctor_get(v_x_128_, 0);
v___x_139_ = lean_name_eq(v_a_137_, v_a_138_);
return v___x_139_;
}
else
{
uint8_t v___x_140_; 
v___x_140_ = 0;
return v___x_140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob_decEq___boxed(lean_object* v_x_141_, lean_object* v_x_142_){
_start:
{
uint8_t v_res_143_; lean_object* v_r_144_; 
v_res_143_ = l_Lake_instDecidableEqGlob_decEq(v_x_141_, v_x_142_);
lean_dec_ref(v_x_142_);
lean_dec_ref(v_x_141_);
v_r_144_ = lean_box(v_res_143_);
return v_r_144_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
uint8_t v___x_147_; 
v___x_147_ = l_Lake_instDecidableEqGlob_decEq(v_x_145_, v_x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob___boxed(lean_object* v_x_148_, lean_object* v_x_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l_Lake_instDecidableEqGlob(v_x_148_, v_x_149_);
lean_dec_ref(v_x_149_);
lean_dec_ref(v_x_148_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeNameGlob___lam__0(lean_object* v_a_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v_a_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5));
v___x_209_ = l_String_toRawSubstring_x27(v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1(lean_object* v_x_239_, lean_object* v_a_240_, lean_object* v_a_241_){
_start:
{
lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_242_ = ((lean_object*)(l_Lake_term_____x2e_x2a___closed__2));
lean_inc(v_x_239_);
v___x_243_ = l_Lean_Syntax_isOfKind(v_x_239_, v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_x_239_);
v___x_244_ = lean_box(1);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v_a_241_);
return v___x_245_;
}
else
{
lean_object* v_quotContext_246_; lean_object* v_currMacroScope_247_; lean_object* v_ref_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_quotContext_246_ = lean_ctor_get(v_a_240_, 1);
v_currMacroScope_247_ = lean_ctor_get(v_a_240_, 2);
v_ref_248_ = lean_ctor_get(v_a_240_, 5);
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = l_Lean_Syntax_getArg(v_x_239_, v___x_249_);
lean_dec(v_x_239_);
v___x_251_ = 0;
v___x_252_ = l_Lean_SourceInfo_fromRef(v_ref_248_, v___x_251_);
v___x_253_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4));
v___x_254_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6);
v___x_255_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9));
lean_inc(v_currMacroScope_247_);
lean_inc(v_quotContext_246_);
v___x_256_ = l_Lean_addMacroScope(v_quotContext_246_, v___x_255_, v_currMacroScope_247_);
v___x_257_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14));
lean_inc_n(v___x_252_, 2);
v___x_258_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_258_, 0, v___x_252_);
lean_ctor_set(v___x_258_, 1, v___x_254_);
lean_ctor_set(v___x_258_, 2, v___x_256_);
lean_ctor_set(v___x_258_, 3, v___x_257_);
v___x_259_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16));
v___x_260_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18));
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = lean_mk_empty_array_with_capacity(v___x_261_);
v___x_263_ = lean_array_push(v___x_262_, v___x_250_);
v___x_264_ = lean_box(2);
v___x_265_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___x_260_);
lean_ctor_set(v___x_265_, 2, v___x_263_);
v___x_266_ = l_Lean_Syntax_node1(v___x_252_, v___x_259_, v___x_265_);
v___x_267_ = l_Lean_Syntax_node2(v___x_252_, v___x_253_, v___x_258_, v___x_266_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v_a_241_);
return v___x_268_;
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___boxed(lean_object* v_x_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1(v_x_269_, v_a_270_, v_a_271_);
lean_dec_ref(v_a_270_);
return v_res_272_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0));
v___x_291_ = l_String_toRawSubstring_x27(v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1(lean_object* v_x_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = ((lean_object*)(l_Lake_term_____x2e_x2b___closed__1));
lean_inc(v_x_311_);
v___x_315_ = l_Lean_Syntax_isOfKind(v_x_311_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec(v_x_311_);
v___x_316_ = lean_box(1);
v___x_317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set(v___x_317_, 1, v_a_313_);
return v___x_317_;
}
else
{
lean_object* v_quotContext_318_; lean_object* v_currMacroScope_319_; lean_object* v_ref_320_; lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_quotContext_318_ = lean_ctor_get(v_a_312_, 1);
v_currMacroScope_319_ = lean_ctor_get(v_a_312_, 2);
v_ref_320_ = lean_ctor_get(v_a_312_, 5);
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = l_Lean_Syntax_getArg(v_x_311_, v___x_321_);
lean_dec(v_x_311_);
v___x_323_ = 0;
v___x_324_ = l_Lean_SourceInfo_fromRef(v_ref_320_, v___x_323_);
v___x_325_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4));
v___x_326_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1);
v___x_327_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3));
lean_inc(v_currMacroScope_319_);
lean_inc(v_quotContext_318_);
v___x_328_ = l_Lean_addMacroScope(v_quotContext_318_, v___x_327_, v_currMacroScope_319_);
v___x_329_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8));
lean_inc_n(v___x_324_, 2);
v___x_330_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_330_, 0, v___x_324_);
lean_ctor_set(v___x_330_, 1, v___x_326_);
lean_ctor_set(v___x_330_, 2, v___x_328_);
lean_ctor_set(v___x_330_, 3, v___x_329_);
v___x_331_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16));
v___x_332_ = ((lean_object*)(l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18));
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = lean_mk_empty_array_with_capacity(v___x_333_);
v___x_335_ = lean_array_push(v___x_334_, v___x_322_);
v___x_336_ = lean_box(2);
v___x_337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_332_);
lean_ctor_set(v___x_337_, 2, v___x_335_);
v___x_338_ = l_Lean_Syntax_node1(v___x_324_, v___x_331_, v___x_337_);
v___x_339_ = l_Lean_Syntax_node2(v___x_324_, v___x_325_, v___x_330_, v___x_338_);
v___x_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v_a_313_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___boxed(lean_object* v_x_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1(v_x_341_, v_a_342_, v_a_343_);
lean_dec_ref(v_a_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_toString(lean_object* v_x_345_){
_start:
{
switch(lean_obj_tag(v_x_345_))
{
case 0:
{
lean_object* v_a_346_; uint8_t v___x_347_; lean_object* v___x_348_; 
v_a_346_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v_x_345_, 1);
v___x_347_ = 1;
v___x_348_ = l_Lean_Name_toString(v_a_346_, v___x_347_);
return v___x_348_;
}
case 1:
{
lean_object* v_a_349_; uint8_t v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_a_349_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_a_349_);
lean_dec_ref_known(v_x_345_, 1);
v___x_350_ = 1;
v___x_351_ = l_Lean_Name_toString(v_a_349_, v___x_350_);
v___x_352_ = ((lean_object*)(l_Lake_term_____x2e_x2b___closed__2));
v___x_353_ = lean_string_append(v___x_351_, v___x_352_);
return v___x_353_;
}
default: 
{
lean_object* v_a_354_; uint8_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_a_354_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v_x_345_, 1);
v___x_355_ = 1;
v___x_356_ = l_Lean_Name_toString(v_a_354_, v___x_355_);
v___x_357_ = ((lean_object*)(l_Lake_term_____x2e_x2a___closed__15));
v___x_358_ = lean_string_append(v___x_356_, v___x_357_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_Glob_matches(lean_object* v_m_361_, lean_object* v_x_362_){
_start:
{
switch(lean_obj_tag(v_x_362_))
{
case 0:
{
lean_object* v_a_363_; uint8_t v___x_364_; 
v_a_363_ = lean_ctor_get(v_x_362_, 0);
v___x_364_ = lean_name_eq(v_a_363_, v_m_361_);
return v___x_364_;
}
case 1:
{
lean_object* v_a_365_; uint8_t v___x_366_; 
v_a_365_ = lean_ctor_get(v_x_362_, 0);
v___x_366_ = l_Lean_Name_isPrefixOf(v_a_365_, v_m_361_);
if (v___x_366_ == 0)
{
return v___x_366_;
}
else
{
uint8_t v___x_367_; 
v___x_367_ = lean_name_eq(v_a_365_, v_m_361_);
if (v___x_367_ == 0)
{
return v___x_366_;
}
else
{
uint8_t v___x_368_; 
v___x_368_ = 0;
return v___x_368_;
}
}
}
default: 
{
lean_object* v_a_369_; uint8_t v___x_370_; 
v_a_369_ = lean_ctor_get(v_x_362_, 0);
v___x_370_ = l_Lean_Name_isPrefixOf(v_a_369_, v_m_361_);
return v___x_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_matches___boxed(lean_object* v_m_371_, lean_object* v_x_372_){
_start:
{
uint8_t v_res_373_; lean_object* v_r_374_; 
v_res_373_ = l_Lake_Glob_matches(v_m_371_, v_x_372_);
lean_dec_ref(v_x_372_);
lean_dec(v_m_371_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__0(lean_object* v_a_375_, lean_object* v_f_376_, lean_object* v_x_377_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_Lean_Name_append(v_a_375_, v_x_377_);
v___x_379_ = lean_apply_1(v_f_376_, v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2(lean_object* v_dir_381_, lean_object* v_a_382_, lean_object* v_inst_383_, lean_object* v_inst_384_, lean_object* v___f_385_, lean_object* v_x_386_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = ((lean_object*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0));
v___x_388_ = l_Lean_modToFilePath(v_dir_381_, v_a_382_, v___x_387_);
v___x_389_ = l_Lean_forEachModuleInDir___redArg(v_inst_383_, v_inst_384_, v___x_388_, v___f_385_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed(lean_object* v_dir_390_, lean_object* v_a_391_, lean_object* v_inst_392_, lean_object* v_inst_393_, lean_object* v___f_394_, lean_object* v_x_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lake_Glob_forEachModuleIn___redArg___lam__2(v_dir_390_, v_a_391_, v_inst_392_, v_inst_393_, v___f_394_, v_x_395_);
lean_dec_ref(v_dir_390_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg(lean_object* v_inst_397_, lean_object* v_inst_398_, lean_object* v_dir_399_, lean_object* v_f_400_, lean_object* v_x_401_){
_start:
{
switch(lean_obj_tag(v_x_401_))
{
case 0:
{
lean_object* v_a_402_; lean_object* v___x_403_; 
lean_dec_ref(v_dir_399_);
lean_dec(v_inst_398_);
lean_dec_ref(v_inst_397_);
v_a_402_ = lean_ctor_get(v_x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v_x_401_, 1);
v___x_403_ = lean_apply_1(v_f_400_, v_a_402_);
return v___x_403_;
}
case 1:
{
lean_object* v_a_404_; lean_object* v___f_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_a_404_ = lean_ctor_get(v_x_401_, 0);
lean_inc_n(v_a_404_, 2);
lean_dec_ref_known(v_x_401_, 1);
v___f_405_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_405_, 0, v_a_404_);
lean_closure_set(v___f_405_, 1, v_f_400_);
v___x_406_ = ((lean_object*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0));
v___x_407_ = l_Lean_modToFilePath(v_dir_399_, v_a_404_, v___x_406_);
lean_dec_ref(v_dir_399_);
v___x_408_ = l_Lean_forEachModuleInDir___redArg(v_inst_397_, v_inst_398_, v___x_407_, v___f_405_);
return v___x_408_;
}
default: 
{
lean_object* v_toApplicative_409_; lean_object* v_toSeqRight_410_; lean_object* v_a_411_; lean_object* v___f_412_; lean_object* v___f_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_toApplicative_409_ = lean_ctor_get(v_inst_397_, 0);
v_toSeqRight_410_ = lean_ctor_get(v_toApplicative_409_, 4);
lean_inc(v_toSeqRight_410_);
v_a_411_ = lean_ctor_get(v_x_401_, 0);
lean_inc_n(v_a_411_, 3);
lean_dec_ref_known(v_x_401_, 1);
lean_inc(v_f_400_);
v___f_412_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_412_, 0, v_a_411_);
lean_closure_set(v___f_412_, 1, v_f_400_);
v___f_413_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_413_, 0, v_dir_399_);
lean_closure_set(v___f_413_, 1, v_a_411_);
lean_closure_set(v___f_413_, 2, v_inst_397_);
lean_closure_set(v___f_413_, 3, v_inst_398_);
lean_closure_set(v___f_413_, 4, v___f_412_);
v___x_414_ = lean_apply_1(v_f_400_, v_a_411_);
v___x_415_ = lean_apply_4(v_toSeqRight_410_, lean_box(0), lean_box(0), v___x_414_, v___f_413_);
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn(lean_object* v_m_416_, lean_object* v_inst_417_, lean_object* v_inst_418_, lean_object* v_dir_419_, lean_object* v_f_420_, lean_object* v_x_421_){
_start:
{
switch(lean_obj_tag(v_x_421_))
{
case 0:
{
lean_object* v_a_422_; lean_object* v___x_423_; 
lean_dec_ref(v_dir_419_);
lean_dec(v_inst_418_);
lean_dec_ref(v_inst_417_);
v_a_422_ = lean_ctor_get(v_x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v_x_421_, 1);
v___x_423_ = lean_apply_1(v_f_420_, v_a_422_);
return v___x_423_;
}
case 1:
{
lean_object* v_a_424_; lean_object* v___f_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_424_ = lean_ctor_get(v_x_421_, 0);
lean_inc_n(v_a_424_, 2);
lean_dec_ref_known(v_x_421_, 1);
v___f_425_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_425_, 0, v_a_424_);
lean_closure_set(v___f_425_, 1, v_f_420_);
v___x_426_ = ((lean_object*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0));
v___x_427_ = l_Lean_modToFilePath(v_dir_419_, v_a_424_, v___x_426_);
lean_dec_ref(v_dir_419_);
v___x_428_ = l_Lean_forEachModuleInDir___redArg(v_inst_417_, v_inst_418_, v___x_427_, v___f_425_);
return v___x_428_;
}
default: 
{
lean_object* v_toApplicative_429_; lean_object* v_toSeqRight_430_; lean_object* v_a_431_; lean_object* v___f_432_; lean_object* v___f_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_toApplicative_429_ = lean_ctor_get(v_inst_417_, 0);
v_toSeqRight_430_ = lean_ctor_get(v_toApplicative_429_, 4);
lean_inc(v_toSeqRight_430_);
v_a_431_ = lean_ctor_get(v_x_421_, 0);
lean_inc_n(v_a_431_, 3);
lean_dec_ref_known(v_x_421_, 1);
lean_inc(v_f_420_);
v___f_432_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_432_, 0, v_a_431_);
lean_closure_set(v___f_432_, 1, v_f_420_);
v___f_433_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_433_, 0, v_dir_419_);
lean_closure_set(v___f_433_, 1, v_a_431_);
lean_closure_set(v___f_433_, 2, v_inst_417_);
lean_closure_set(v___f_433_, 3, v_inst_418_);
lean_closure_set(v___f_433_, 4, v___f_432_);
v___x_434_ = lean_apply_1(v_f_420_, v_a_431_);
v___x_435_ = lean_apply_4(v_toSeqRight_430_, lean_box(0), lean_box(0), v___x_434_, v___f_433_);
return v___x_435_;
}
}
}
}
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Glob(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedGlob_default = _init_l_Lake_instInhabitedGlob_default();
lean_mark_persistent(l_Lake_instInhabitedGlob_default);
l_Lake_instInhabitedGlob = _init_l_Lake_instInhabitedGlob();
lean_mark_persistent(l_Lake_instInhabitedGlob);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Glob(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_Path(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Glob(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Glob(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Glob(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Glob(builtin);
}
#ifdef __cplusplus
}
#endif

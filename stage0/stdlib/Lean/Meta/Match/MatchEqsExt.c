// Lean compiler output
// Module: Lean.Meta.Match.MatchEqsExt
// Imports: public import Lean.Meta.Match.Basic public import Lean.Meta.Match.MatcherInfo import Lean.Meta.Eqns
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_Meta_Match_instReprMatcherInfo_repr___redArg(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedMatcherInfo_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__0 = (const lean_object*)&l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedMatchEqns_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedMatchEqns;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eqnNames"};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__7;
static const lean_string_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "splitterName"};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__10;
static const lean_string_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "splitterMatchInfo"};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__13;
static const lean_string_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Match_instReprMatchEqns___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Match_instReprMatchEqns_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Match_instReprMatchEqns___closed__0 = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Match_instReprMatchEqns = (const lean_object*)&l_Lean_Meta_Match_instReprMatchEqns___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_MatchEqns_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_MatchEqns_size___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedMatchEqnsExtState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_matchEqnsExt;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_registerMatchEqns___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_registerMatchEqns___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_congr_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_genMatchCongrEqns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Match_isMatchEqnTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Match_isMatchEqnTheorem___closed__0 = (const lean_object*)&l_Lean_Meta_Match_isMatchEqnTheorem___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Match_isMatchEqnTheorem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_isMatchEqnTheorem___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = l_unsafeCast___redArg(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_5_ = l_Lean_Meta_Match_instInhabitedMatcherInfo_default;
v___x_6_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1, &l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1_once, _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1);
v___x_7_ = ((lean_object*)(l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__0));
v___x_8_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
lean_ctor_set(v___x_8_, 2, v___x_5_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__2, &l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__2_once, _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__2);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqns(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Meta_Match_instInhabitedMatchEqns_default;
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__1(lean_object* v_a_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_nat_to_int(v_a_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_13_, lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
lean_dec(v_x_13_);
return v_x_14_;
}
else
{
lean_object* v_head_16_; lean_object* v_tail_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_28_; 
v_head_16_ = lean_ctor_get(v_x_15_, 0);
v_tail_17_ = lean_ctor_get(v_x_15_, 1);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_28_ == 0)
{
v___x_19_ = v_x_15_;
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_tail_17_);
lean_inc(v_head_16_);
lean_dec(v_x_15_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
lean_inc(v_x_13_);
if (v_isShared_20_ == 0)
{
lean_ctor_set_tag(v___x_19_, 5);
lean_ctor_set(v___x_19_, 1, v_x_13_);
lean_ctor_set(v___x_19_, 0, v_x_14_);
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_x_14_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_x_13_);
v___x_22_ = v_reuseFailAlloc_27_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_unsigned_to_nat(0u);
v___x_24_ = l_Lean_Name_reprPrec(v_head_16_, v___x_23_);
v___x_25_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_22_);
lean_ctor_set(v___x_25_, 1, v___x_24_);
v_x_14_ = v___x_25_;
v_x_15_ = v_tail_17_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0_spec__2(lean_object* v_x_29_, lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
if (lean_obj_tag(v_x_31_) == 0)
{
lean_dec(v_x_29_);
return v_x_30_;
}
else
{
lean_object* v_head_32_; lean_object* v_tail_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_44_; 
v_head_32_ = lean_ctor_get(v_x_31_, 0);
v_tail_33_ = lean_ctor_get(v_x_31_, 1);
v_isSharedCheck_44_ = !lean_is_exclusive(v_x_31_);
if (v_isSharedCheck_44_ == 0)
{
v___x_35_ = v_x_31_;
v_isShared_36_ = v_isSharedCheck_44_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_tail_33_);
lean_inc(v_head_32_);
lean_dec(v_x_31_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_44_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_38_; 
lean_inc(v_x_29_);
if (v_isShared_36_ == 0)
{
lean_ctor_set_tag(v___x_35_, 5);
lean_ctor_set(v___x_35_, 1, v_x_29_);
lean_ctor_set(v___x_35_, 0, v_x_30_);
v___x_38_ = v___x_35_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_x_30_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_x_29_);
v___x_38_ = v_reuseFailAlloc_43_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_39_ = lean_unsigned_to_nat(0u);
v___x_40_ = l_Lean_Name_reprPrec(v_head_32_, v___x_39_);
v___x_41_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_38_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v___x_42_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0_spec__2_spec__3(v_x_29_, v___x_41_, v_tail_33_);
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0___lam__0(lean_object* v___y_45_){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(0u);
v___x_47_ = l_Lean_Name_reprPrec(v___y_45_, v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0(lean_object* v_x_48_, lean_object* v_x_49_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v___x_50_; 
lean_dec(v_x_49_);
v___x_50_ = lean_box(0);
return v___x_50_;
}
else
{
lean_object* v_tail_51_; 
v_tail_51_ = lean_ctor_get(v_x_48_, 1);
if (lean_obj_tag(v_tail_51_) == 0)
{
lean_object* v_head_52_; lean_object* v___x_53_; 
lean_dec(v_x_49_);
v_head_52_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_head_52_);
lean_dec_ref_known(v_x_48_, 2);
v___x_53_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0___lam__0(v_head_52_);
return v___x_53_;
}
else
{
lean_object* v_head_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
lean_inc(v_tail_51_);
v_head_54_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_head_54_);
lean_dec_ref_known(v_x_48_, 2);
v___x_55_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0___lam__0(v_head_54_);
v___x_56_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0_spec__2(v_x_49_, v___x_55_, v_tail_51_);
return v___x_56_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__0));
v___x_66_ = lean_string_length(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_obj_once(&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__5, &l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__5);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0(lean_object* v_xs_76_){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_77_ = lean_array_get_size(v_xs_76_);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_nat_dec_eq(v___x_77_, v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_80_ = lean_array_to_list(v_xs_76_);
v___x_81_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__3));
v___x_82_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0_spec__0(v___x_80_, v___x_81_);
v___x_83_ = lean_obj_once(&l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__6);
v___x_84_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__7));
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_82_);
v___x_86_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__8));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_83_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = l_Std_Format_fill(v___x_88_);
return v___x_89_;
}
else
{
lean_object* v___x_90_; 
lean_dec_ref(v_xs_76_);
v___x_90_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__10));
return v___x_90_;
}
}
}
static lean_object* _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(12u);
v___x_105_ = lean_nat_to_int(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_unsigned_to_nat(16u);
v___x_110_ = lean_nat_to_int(v___x_109_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(21u);
v___x_115_ = lean_nat_to_int(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__0));
v___x_118_ = lean_string_length(v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_obj_once(&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__15, &l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__15_once, _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__15);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___redArg(lean_object* v_x_125_){
_start:
{
lean_object* v_eqnNames_126_; lean_object* v_splitterName_127_; lean_object* v_splitterMatchInfo_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v_eqnNames_126_ = lean_ctor_get(v_x_125_, 0);
lean_inc_ref(v_eqnNames_126_);
v_splitterName_127_ = lean_ctor_get(v_x_125_, 1);
lean_inc(v_splitterName_127_);
v_splitterMatchInfo_128_ = lean_ctor_get(v_x_125_, 2);
lean_inc_ref(v_splitterMatchInfo_128_);
lean_dec_ref(v_x_125_);
v___x_129_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__5));
v___x_130_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__6));
v___x_131_ = lean_obj_once(&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__7, &l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__7_once, _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__7);
v___x_132_ = l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0(v_eqnNames_126_);
v___x_133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = 0;
v___x_135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_135_, 0, v___x_133_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*1, v___x_134_);
v___x_136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_130_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Match_instReprMatchEqns_repr_spec__0___closed__2));
v___x_138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = lean_box(1);
v___x_140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__9));
v___x_142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___x_129_);
v___x_144_ = lean_obj_once(&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__10, &l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__10_once, _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__10);
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = l_Lean_Name_reprPrec(v_splitterName_127_, v___x_145_);
v___x_147_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_144_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*1, v___x_134_);
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_143_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_137_);
v___x_151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_139_);
v___x_152_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__12));
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_151_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_129_);
v___x_155_ = lean_obj_once(&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__13, &l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__13_once, _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__13);
v___x_156_ = l_Lean_Meta_Match_instReprMatcherInfo_repr___redArg(v_splitterMatchInfo_128_);
v___x_157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*1, v___x_134_);
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_154_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_obj_once(&l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__16, &l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__16_once, _init_l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__16);
v___x_161_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__17));
v___x_162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_159_);
v___x_163_ = ((lean_object*)(l_Lean_Meta_Match_instReprMatchEqns_repr___redArg___closed__18));
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_160_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*1, v___x_134_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr(lean_object* v_x_167_, lean_object* v_prec_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_Meta_Match_instReprMatchEqns_repr___redArg(v_x_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instReprMatchEqns_repr___boxed(lean_object* v_x_170_, lean_object* v_prec_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Meta_Match_instReprMatchEqns_repr(v_x_170_, v_prec_171_);
lean_dec(v_prec_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_MatchEqns_size(lean_object* v_e_175_){
_start:
{
lean_object* v_eqnNames_176_; lean_object* v___x_177_; 
v_eqnNames_176_ = lean_ctor_get(v_e_175_, 0);
v___x_177_ = lean_array_get_size(v_eqnNames_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_MatchEqns_size___boxed(lean_object* v_e_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Meta_Match_MatchEqns_size(v_e_178_);
lean_dec_ref(v_e_178_);
return v_res_179_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_180_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg(){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__1);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___boxed(lean_object* v___dummy_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg();
return v_res_186_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg();
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0(lean_object* v_00_u03b2_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__0(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0);
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___closed__0);
v___x_193_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__0, &l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__0);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1, &l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1_once, _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_(lean_object* v___x_197_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2____boxed(lean_object* v___x_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_(v___x_200_);
return v_res_202_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_203_; lean_object* v___f_204_; 
v___x_203_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1, &l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1_once, _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default___closed__1);
v___f_204_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_204_, 0, v___x_203_);
return v___f_204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___f_206_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_);
v___x_207_ = lean_box(0);
v___x_208_ = lean_box(1);
v___x_209_ = l_Lean_registerEnvExtension___redArg(v___f_206_, v___x_207_, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2____boxed(lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_();
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_212_, lean_object* v_x_213_, lean_object* v_x_214_, lean_object* v_x_215_){
_start:
{
lean_object* v_ks_216_; lean_object* v_vs_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_241_; 
v_ks_216_ = lean_ctor_get(v_x_212_, 0);
v_vs_217_ = lean_ctor_get(v_x_212_, 1);
v_isSharedCheck_241_ = !lean_is_exclusive(v_x_212_);
if (v_isSharedCheck_241_ == 0)
{
v___x_219_ = v_x_212_;
v_isShared_220_ = v_isSharedCheck_241_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_vs_217_);
lean_inc(v_ks_216_);
lean_dec(v_x_212_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_241_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_221_ = lean_array_get_size(v_ks_216_);
v___x_222_ = lean_nat_dec_lt(v_x_213_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_226_; 
lean_dec(v_x_213_);
v___x_223_ = lean_array_push(v_ks_216_, v_x_214_);
v___x_224_ = lean_array_push(v_vs_217_, v_x_215_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_224_);
lean_ctor_set(v___x_219_, 0, v___x_223_);
v___x_226_ = v___x_219_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
else
{
lean_object* v_k_x27_228_; uint8_t v___x_229_; 
v_k_x27_228_ = lean_array_fget_borrowed(v_ks_216_, v_x_213_);
v___x_229_ = lean_name_eq(v_x_214_, v_k_x27_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_231_; 
if (v_isShared_220_ == 0)
{
v___x_231_ = v___x_219_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_ks_216_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_vs_217_);
v___x_231_ = v_reuseFailAlloc_235_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = lean_nat_add(v_x_213_, v___x_232_);
lean_dec(v_x_213_);
v_x_212_ = v___x_231_;
v_x_213_ = v___x_233_;
goto _start;
}
}
else
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_236_ = lean_array_fset(v_ks_216_, v_x_213_, v_x_214_);
v___x_237_ = lean_array_fset(v_vs_217_, v_x_213_, v_x_215_);
lean_dec(v_x_213_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_237_);
lean_ctor_set(v___x_219_, 0, v___x_236_);
v___x_239_ = v___x_219_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1___redArg(lean_object* v_n_242_, lean_object* v_k_243_, lean_object* v_v_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1_spec__3___redArg(v_n_242_, v___x_245_, v_k_243_, v_v_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_box(0);
v___x_248_ = l_unsafeCast___redArg(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(lean_object* v_x_250_, size_t v_x_251_, size_t v_x_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v_es_255_; size_t v___x_256_; size_t v___x_257_; lean_object* v_j_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_es_255_ = lean_ctor_get(v_x_250_, 0);
v___x_256_ = ((size_t)31ULL);
v___x_257_ = lean_usize_land(v_x_251_, v___x_256_);
v_j_258_ = lean_usize_to_nat(v___x_257_);
v___x_259_ = lean_array_get_size(v_es_255_);
v___x_260_ = lean_nat_dec_lt(v_j_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_dec(v_j_258_);
lean_dec(v_x_254_);
lean_dec(v_x_253_);
return v_x_250_;
}
else
{
lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_299_; 
lean_inc_ref(v_es_255_);
v_isSharedCheck_299_ = !lean_is_exclusive(v_x_250_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v_x_250_, 0);
lean_dec(v_unused_300_);
v___x_262_ = v_x_250_;
v_isShared_263_ = v_isSharedCheck_299_;
goto v_resetjp_261_;
}
else
{
lean_dec(v_x_250_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_299_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v_v_264_; lean_object* v___x_265_; lean_object* v_xs_x27_266_; lean_object* v___y_268_; 
v_v_264_ = lean_array_fget(v_es_255_, v_j_258_);
v___x_265_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__0);
v_xs_x27_266_ = lean_array_fset(v_es_255_, v_j_258_, v___x_265_);
switch(lean_obj_tag(v_v_264_))
{
case 0:
{
lean_object* v_key_273_; lean_object* v_val_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_284_; 
v_key_273_ = lean_ctor_get(v_v_264_, 0);
v_val_274_ = lean_ctor_get(v_v_264_, 1);
v_isSharedCheck_284_ = !lean_is_exclusive(v_v_264_);
if (v_isSharedCheck_284_ == 0)
{
v___x_276_ = v_v_264_;
v_isShared_277_ = v_isSharedCheck_284_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_val_274_);
lean_inc(v_key_273_);
lean_dec(v_v_264_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_284_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
uint8_t v___x_278_; 
v___x_278_ = lean_name_eq(v_x_253_, v_key_273_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
lean_del_object(v___x_276_);
v___x_279_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_273_, v_val_274_, v_x_253_, v_x_254_);
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
v___y_268_ = v___x_280_;
goto v___jp_267_;
}
else
{
lean_object* v___x_282_; 
lean_dec(v_val_274_);
lean_dec(v_key_273_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v_x_254_);
lean_ctor_set(v___x_276_, 0, v_x_253_);
v___x_282_ = v___x_276_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_x_253_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_x_254_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
v___y_268_ = v___x_282_;
goto v___jp_267_;
}
}
}
}
case 1:
{
lean_object* v_node_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_297_; 
v_node_285_ = lean_ctor_get(v_v_264_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v_v_264_);
if (v_isSharedCheck_297_ == 0)
{
v___x_287_ = v_v_264_;
v_isShared_288_ = v_isSharedCheck_297_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_node_285_);
lean_dec(v_v_264_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_297_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
size_t v___x_289_; size_t v___x_290_; size_t v___x_291_; size_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_289_ = ((size_t)5ULL);
v___x_290_ = lean_usize_shift_right(v_x_251_, v___x_289_);
v___x_291_ = ((size_t)1ULL);
v___x_292_ = lean_usize_add(v_x_252_, v___x_291_);
v___x_293_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(v_node_285_, v___x_290_, v___x_292_, v_x_253_, v_x_254_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_293_);
v___x_295_ = v___x_287_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
v___y_268_ = v___x_295_;
goto v___jp_267_;
}
}
}
default: 
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_x_253_);
lean_ctor_set(v___x_298_, 1, v_x_254_);
v___y_268_ = v___x_298_;
goto v___jp_267_;
}
}
v___jp_267_:
{
lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_269_ = lean_array_fset(v_xs_x27_266_, v_j_258_, v___y_268_);
lean_dec(v_j_258_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 0, v___x_269_);
v___x_271_ = v___x_262_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
else
{
lean_object* v_ks_301_; lean_object* v_vs_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_320_; 
v_ks_301_ = lean_ctor_get(v_x_250_, 0);
v_vs_302_ = lean_ctor_get(v_x_250_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v_x_250_);
if (v_isSharedCheck_320_ == 0)
{
v___x_304_ = v_x_250_;
v_isShared_305_ = v_isSharedCheck_320_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_vs_302_);
lean_inc(v_ks_301_);
lean_dec(v_x_250_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_320_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_ks_301_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_vs_302_);
v___x_307_ = v_reuseFailAlloc_319_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_object* v_newNode_308_; size_t v___x_309_; uint8_t v___x_310_; 
v_newNode_308_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1___redArg(v___x_307_, v_x_253_, v_x_254_);
v___x_309_ = ((size_t)7ULL);
v___x_310_ = lean_usize_dec_le(v___x_309_, v_x_252_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_311_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_308_);
v___x_312_ = lean_unsigned_to_nat(4u);
v___x_313_ = lean_nat_dec_lt(v___x_311_, v___x_312_);
lean_dec(v___x_311_);
if (v___x_313_ == 0)
{
lean_object* v_ks_314_; lean_object* v_vs_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_ks_314_ = lean_ctor_get(v_newNode_308_, 0);
lean_inc_ref(v_ks_314_);
v_vs_315_ = lean_ctor_get(v_newNode_308_, 1);
lean_inc_ref(v_vs_315_);
lean_dec_ref(v_newNode_308_);
v___x_316_ = lean_unsigned_to_nat(0u);
v___x_317_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___closed__1);
v___x_318_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg(v_x_252_, v_ks_314_, v_vs_315_, v___x_316_, v___x_317_);
lean_dec_ref(v_vs_315_);
lean_dec_ref(v_ks_314_);
return v___x_318_;
}
else
{
return v_newNode_308_;
}
}
else
{
return v_newNode_308_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg(size_t v_depth_321_, lean_object* v_keys_322_, lean_object* v_vals_323_, lean_object* v_i_324_, lean_object* v_entries_325_){
_start:
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = lean_array_get_size(v_keys_322_);
v___x_327_ = lean_nat_dec_lt(v_i_324_, v___x_326_);
if (v___x_327_ == 0)
{
lean_dec(v_i_324_);
return v_entries_325_;
}
else
{
lean_object* v_k_328_; lean_object* v_v_329_; uint64_t v___y_331_; lean_object* v___x_342_; 
v_k_328_ = lean_array_fget_borrowed(v_keys_322_, v_i_324_);
v_v_329_ = lean_array_fget_borrowed(v_vals_323_, v_i_324_);
v___x_342_ = l_unsafeCast___redArg(v_k_328_);
if (lean_obj_tag(v___x_342_) == 0)
{
uint64_t v___x_343_; 
v___x_343_ = 1723ULL;
v___y_331_ = v___x_343_;
goto v___jp_330_;
}
else
{
uint64_t v_hash_344_; 
v_hash_344_ = lean_ctor_get_uint64(v___x_342_, sizeof(void*)*2);
lean_dec(v___x_342_);
v___y_331_ = v_hash_344_;
goto v___jp_330_;
}
v___jp_330_:
{
size_t v_h_332_; size_t v___x_333_; lean_object* v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; size_t v_h_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_h_332_ = lean_uint64_to_usize(v___y_331_);
v___x_333_ = ((size_t)5ULL);
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_sub(v_depth_321_, v___x_335_);
v___x_337_ = lean_usize_mul(v___x_333_, v___x_336_);
v_h_338_ = lean_usize_shift_right(v_h_332_, v___x_337_);
v___x_339_ = lean_nat_add(v_i_324_, v___x_334_);
lean_dec(v_i_324_);
lean_inc(v_v_329_);
lean_inc(v_k_328_);
v___x_340_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(v_entries_325_, v_h_338_, v_depth_321_, v_k_328_, v_v_329_);
v_i_324_ = v___x_339_;
v_entries_325_ = v___x_340_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_345_, lean_object* v_keys_346_, lean_object* v_vals_347_, lean_object* v_i_348_, lean_object* v_entries_349_){
_start:
{
size_t v_depth_boxed_350_; lean_object* v_res_351_; 
v_depth_boxed_350_ = lean_unbox_usize(v_depth_345_);
lean_dec(v_depth_345_);
v_res_351_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg(v_depth_boxed_350_, v_keys_346_, v_vals_347_, v_i_348_, v_entries_349_);
lean_dec_ref(v_vals_347_);
lean_dec_ref(v_keys_346_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg___boxed(lean_object* v_x_352_, lean_object* v_x_353_, lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
size_t v_x_716__boxed_357_; size_t v_x_717__boxed_358_; lean_object* v_res_359_; 
v_x_716__boxed_357_ = lean_unbox_usize(v_x_353_);
lean_dec(v_x_353_);
v_x_717__boxed_358_ = lean_unbox_usize(v_x_354_);
lean_dec(v_x_354_);
v_res_359_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(v_x_352_, v_x_716__boxed_357_, v_x_717__boxed_358_, v_x_355_, v_x_356_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0___redArg(lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
uint64_t v___y_364_; lean_object* v___x_368_; 
v___x_368_ = l_unsafeCast___redArg(v_x_361_);
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
v___jp_363_:
{
size_t v___x_365_; size_t v___x_366_; lean_object* v___x_367_; 
v___x_365_ = lean_uint64_to_usize(v___y_364_);
v___x_366_ = ((size_t)1ULL);
v___x_367_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(v_x_360_, v___x_365_, v___x_366_, v_x_361_, v_x_362_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1(lean_object* v_as_371_, size_t v_i_372_, size_t v_stop_373_, lean_object* v_b_374_){
_start:
{
uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_eq(v_i_372_, v_stop_373_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; size_t v___x_379_; size_t v___x_380_; 
v___x_376_ = lean_array_uget_borrowed(v_as_371_, v_i_372_);
v___x_377_ = lean_box(0);
lean_inc(v___x_376_);
v___x_378_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0___redArg(v_b_374_, v___x_376_, v___x_377_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_add(v_i_372_, v___x_379_);
v_i_372_ = v___x_380_;
v_b_374_ = v___x_378_;
goto _start;
}
else
{
return v_b_374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1___boxed(lean_object* v_as_382_, lean_object* v_i_383_, lean_object* v_stop_384_, lean_object* v_b_385_){
_start:
{
size_t v_i_boxed_386_; size_t v_stop_boxed_387_; lean_object* v_res_388_; 
v_i_boxed_386_ = lean_unbox_usize(v_i_383_);
lean_dec(v_i_383_);
v_stop_boxed_387_ = lean_unbox_usize(v_stop_384_);
lean_dec(v_stop_384_);
v_res_388_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1(v_as_382_, v_i_boxed_386_, v_stop_boxed_387_, v_b_385_);
lean_dec_ref(v_as_382_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg___lam__0(lean_object* v_matchEqns_389_, lean_object* v_matchDeclName_390_, lean_object* v_x_391_){
_start:
{
lean_object* v_map_392_; lean_object* v_eqns_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_421_; 
v_map_392_ = lean_ctor_get(v_x_391_, 0);
v_eqns_393_ = lean_ctor_get(v_x_391_, 1);
v_isSharedCheck_421_ = !lean_is_exclusive(v_x_391_);
if (v_isSharedCheck_421_ == 0)
{
v___x_395_ = v_x_391_;
v_isShared_396_ = v_isSharedCheck_421_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_eqns_393_);
lean_inc(v_map_392_);
lean_dec(v_x_391_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_421_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_eqnNames_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v_eqnNames_397_ = lean_ctor_get(v_matchEqns_389_, 0);
lean_inc_ref(v_eqnNames_397_);
v___x_398_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0___redArg(v_map_392_, v_matchDeclName_390_, v_matchEqns_389_);
v___x_399_ = lean_unsigned_to_nat(0u);
v___x_400_ = lean_array_get_size(v_eqnNames_397_);
v___x_401_ = lean_nat_dec_lt(v___x_399_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_403_; 
lean_dec_ref(v_eqnNames_397_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_398_);
v___x_403_ = v___x_395_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_eqns_393_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
else
{
uint8_t v___x_405_; 
v___x_405_ = lean_nat_dec_le(v___x_400_, v___x_400_);
if (v___x_405_ == 0)
{
if (v___x_401_ == 0)
{
lean_object* v___x_407_; 
lean_dec_ref(v_eqnNames_397_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_398_);
v___x_407_ = v___x_395_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_eqns_393_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
else
{
size_t v___x_409_; size_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_409_ = ((size_t)0ULL);
v___x_410_ = lean_usize_of_nat(v___x_400_);
v___x_411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1(v_eqnNames_397_, v___x_409_, v___x_410_, v_eqns_393_);
lean_dec_ref(v_eqnNames_397_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 1, v___x_411_);
lean_ctor_set(v___x_395_, 0, v___x_398_);
v___x_413_ = v___x_395_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
else
{
size_t v___x_415_; size_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_415_ = ((size_t)0ULL);
v___x_416_ = lean_usize_of_nat(v___x_400_);
v___x_417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_registerMatchEqns_spec__1(v_eqnNames_397_, v___x_415_, v___x_416_, v_eqns_393_);
lean_dec_ref(v_eqnNames_397_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 1, v___x_417_);
lean_ctor_set(v___x_395_, 0, v___x_398_);
v___x_419_ = v___x_395_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_registerMatchEqns___redArg___closed__0(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Match_instInhabitedMatchEqnsExtState_default_spec__0___redArg___closed__0);
v___x_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l_Lean_Meta_Match_registerMatchEqns___redArg___closed__1(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_obj_once(&l_Lean_Meta_Match_registerMatchEqns___redArg___closed__0, &l_Lean_Meta_Match_registerMatchEqns___redArg___closed__0_once, _init_l_Lean_Meta_Match_registerMatchEqns___redArg___closed__0);
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg(lean_object* v_matchDeclName_426_, lean_object* v_matchEqns_427_, lean_object* v_a_428_){
_start:
{
lean_object* v___f_430_; lean_object* v___x_431_; lean_object* v_env_432_; lean_object* v_nextMacroScope_433_; lean_object* v_ngen_434_; lean_object* v_auxDeclNGen_435_; lean_object* v_traceState_436_; lean_object* v_messages_437_; lean_object* v_infoState_438_; lean_object* v_snapshotTasks_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_454_; 
v___f_430_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_registerMatchEqns___redArg___lam__0), 3, 2);
lean_closure_set(v___f_430_, 0, v_matchEqns_427_);
lean_closure_set(v___f_430_, 1, v_matchDeclName_426_);
v___x_431_ = lean_st_ref_take(v_a_428_);
v_env_432_ = lean_ctor_get(v___x_431_, 0);
v_nextMacroScope_433_ = lean_ctor_get(v___x_431_, 1);
v_ngen_434_ = lean_ctor_get(v___x_431_, 2);
v_auxDeclNGen_435_ = lean_ctor_get(v___x_431_, 3);
v_traceState_436_ = lean_ctor_get(v___x_431_, 4);
v_messages_437_ = lean_ctor_get(v___x_431_, 6);
v_infoState_438_ = lean_ctor_get(v___x_431_, 7);
v_snapshotTasks_439_ = lean_ctor_get(v___x_431_, 8);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_454_ == 0)
{
lean_object* v_unused_455_; 
v_unused_455_ = lean_ctor_get(v___x_431_, 5);
lean_dec(v_unused_455_);
v___x_441_ = v___x_431_;
v_isShared_442_ = v_isSharedCheck_454_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_snapshotTasks_439_);
lean_inc(v_infoState_438_);
lean_inc(v_messages_437_);
lean_inc(v_traceState_436_);
lean_inc(v_auxDeclNGen_435_);
lean_inc(v_ngen_434_);
lean_inc(v_nextMacroScope_433_);
lean_inc(v_env_432_);
lean_dec(v___x_431_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_454_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v_asyncMode_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_443_ = l_Lean_Meta_Match_matchEqnsExt;
v_asyncMode_444_ = lean_ctor_get(v___x_443_, 2);
v___x_445_ = lean_box(0);
v___x_446_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1, &l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1_once, _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default___closed__1);
v___x_447_ = l_Lean_EnvExtension_modifyState___redArg(v___x_443_, v_env_432_, v___f_430_, v_asyncMode_444_, v___x_446_);
v___x_448_ = lean_obj_once(&l_Lean_Meta_Match_registerMatchEqns___redArg___closed__1, &l_Lean_Meta_Match_registerMatchEqns___redArg___closed__1_once, _init_l_Lean_Meta_Match_registerMatchEqns___redArg___closed__1);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 5, v___x_448_);
lean_ctor_set(v___x_441_, 0, v___x_447_);
v___x_450_ = v___x_441_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_nextMacroScope_433_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_ngen_434_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_auxDeclNGen_435_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_traceState_436_);
lean_ctor_set(v_reuseFailAlloc_453_, 5, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_453_, 6, v_messages_437_);
lean_ctor_set(v_reuseFailAlloc_453_, 7, v_infoState_438_);
lean_ctor_set(v_reuseFailAlloc_453_, 8, v_snapshotTasks_439_);
v___x_450_ = v_reuseFailAlloc_453_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = lean_st_ref_put(v_a_428_, v___x_450_);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_445_);
return v___x_452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg___boxed(lean_object* v_matchDeclName_456_, lean_object* v_matchEqns_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_Meta_Match_registerMatchEqns___redArg(v_matchDeclName_456_, v_matchEqns_457_, v_a_458_);
lean_dec(v_a_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns(lean_object* v_matchDeclName_461_, lean_object* v_matchEqns_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_Meta_Match_registerMatchEqns___redArg(v_matchDeclName_461_, v_matchEqns_462_, v_a_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_registerMatchEqns___boxed(lean_object* v_matchDeclName_467_, lean_object* v_matchEqns_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lean_Meta_Match_registerMatchEqns(v_matchDeclName_467_, v_matchEqns_468_, v_a_469_, v_a_470_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0(lean_object* v_00_u03b2_473_, lean_object* v_x_474_, lean_object* v_x_475_, lean_object* v_x_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0___redArg(v_x_474_, v_x_475_, v_x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0(lean_object* v_00_u03b2_478_, lean_object* v_x_479_, size_t v_x_480_, size_t v_x_481_, lean_object* v_x_482_, lean_object* v_x_483_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___redArg(v_x_479_, v_x_480_, v_x_481_, v_x_482_, v_x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0___boxed(lean_object* v_00_u03b2_485_, lean_object* v_x_486_, lean_object* v_x_487_, lean_object* v_x_488_, lean_object* v_x_489_, lean_object* v_x_490_){
_start:
{
size_t v_x_1034__boxed_491_; size_t v_x_1035__boxed_492_; lean_object* v_res_493_; 
v_x_1034__boxed_491_ = lean_unbox_usize(v_x_487_);
lean_dec(v_x_487_);
v_x_1035__boxed_492_ = lean_unbox_usize(v_x_488_);
lean_dec(v_x_488_);
v_res_493_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0(v_00_u03b2_485_, v_x_486_, v_x_1034__boxed_491_, v_x_1035__boxed_492_, v_x_489_, v_x_490_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_494_, lean_object* v_n_495_, lean_object* v_k_496_, lean_object* v_v_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1___redArg(v_n_495_, v_k_496_, v_v_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_499_, size_t v_depth_500_, lean_object* v_keys_501_, lean_object* v_vals_502_, lean_object* v_heq_503_, lean_object* v_i_504_, lean_object* v_entries_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___redArg(v_depth_500_, v_keys_501_, v_vals_502_, v_i_504_, v_entries_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_507_, lean_object* v_depth_508_, lean_object* v_keys_509_, lean_object* v_vals_510_, lean_object* v_heq_511_, lean_object* v_i_512_, lean_object* v_entries_513_){
_start:
{
size_t v_depth_boxed_514_; lean_object* v_res_515_; 
v_depth_boxed_514_ = lean_unbox_usize(v_depth_508_);
lean_dec(v_depth_508_);
v_res_515_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__2(v_00_u03b2_507_, v_depth_boxed_514_, v_keys_509_, v_vals_510_, v_heq_511_, v_i_512_, v_entries_513_);
lean_dec_ref(v_vals_510_);
lean_dec_ref(v_keys_509_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_516_, lean_object* v_x_517_, lean_object* v_x_518_, lean_object* v_x_519_, lean_object* v_x_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Match_registerMatchEqns_spec__0_spec__0_spec__1_spec__3___redArg(v_x_517_, v_x_518_, v_x_519_, v_x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object* v_matchDeclName_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_00___x40___internal___hyg_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = lean_get_match_equations_for(v_matchDeclName_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_genMatchCongrEqns___boxed(lean_object* v_matchDeclName_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_00___x40___internal___hyg_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = lean_get_congr_match_equations_for(v_matchDeclName_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_);
return v_res_547_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_548_, lean_object* v_i_549_, lean_object* v_k_550_){
_start:
{
lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_551_ = lean_array_get_size(v_keys_548_);
v___x_552_ = lean_nat_dec_lt(v_i_549_, v___x_551_);
if (v___x_552_ == 0)
{
lean_dec(v_i_549_);
return v___x_552_;
}
else
{
lean_object* v_k_x27_553_; uint8_t v___x_554_; 
v_k_x27_553_ = lean_array_fget_borrowed(v_keys_548_, v_i_549_);
v___x_554_ = lean_name_eq(v_k_550_, v_k_x27_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = lean_nat_add(v_i_549_, v___x_555_);
lean_dec(v_i_549_);
v_i_549_ = v___x_556_;
goto _start;
}
else
{
lean_dec(v_i_549_);
return v___x_552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_558_, lean_object* v_i_559_, lean_object* v_k_560_){
_start:
{
uint8_t v_res_561_; lean_object* v_r_562_; 
v_res_561_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg(v_keys_558_, v_i_559_, v_k_560_);
lean_dec(v_k_560_);
lean_dec_ref(v_keys_558_);
v_r_562_ = lean_box(v_res_561_);
return v_r_562_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg(lean_object* v_x_563_, size_t v_x_564_, lean_object* v_x_565_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
lean_object* v_es_566_; lean_object* v___x_567_; size_t v___x_568_; size_t v___x_569_; lean_object* v_j_570_; lean_object* v___x_571_; 
v_es_566_ = lean_ctor_get(v_x_563_, 0);
v___x_567_ = lean_box(2);
v___x_568_ = ((size_t)31ULL);
v___x_569_ = lean_usize_land(v_x_564_, v___x_568_);
v_j_570_ = lean_usize_to_nat(v___x_569_);
v___x_571_ = lean_array_get_borrowed(v___x_567_, v_es_566_, v_j_570_);
lean_dec(v_j_570_);
switch(lean_obj_tag(v___x_571_))
{
case 0:
{
lean_object* v_key_572_; uint8_t v___x_573_; 
v_key_572_ = lean_ctor_get(v___x_571_, 0);
v___x_573_ = lean_name_eq(v_x_565_, v_key_572_);
return v___x_573_;
}
case 1:
{
lean_object* v_node_574_; size_t v___x_575_; size_t v___x_576_; 
v_node_574_ = lean_ctor_get(v___x_571_, 0);
v___x_575_ = ((size_t)5ULL);
v___x_576_ = lean_usize_shift_right(v_x_564_, v___x_575_);
v_x_563_ = v_node_574_;
v_x_564_ = v___x_576_;
goto _start;
}
default: 
{
uint8_t v___x_578_; 
v___x_578_ = 0;
return v___x_578_;
}
}
}
else
{
lean_object* v_ks_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v_ks_579_ = lean_ctor_get(v_x_563_, 0);
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg(v_ks_579_, v___x_580_, v_x_565_);
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_x_582_, lean_object* v_x_583_, lean_object* v_x_584_){
_start:
{
size_t v_x_299__boxed_585_; uint8_t v_res_586_; lean_object* v_r_587_; 
v_x_299__boxed_585_ = lean_unbox_usize(v_x_583_);
lean_dec(v_x_583_);
v_res_586_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg(v_x_582_, v_x_299__boxed_585_, v_x_584_);
lean_dec(v_x_584_);
lean_dec_ref(v_x_582_);
v_r_587_ = lean_box(v_res_586_);
return v_r_587_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg(lean_object* v_x_588_, lean_object* v_x_589_){
_start:
{
uint64_t v___y_591_; lean_object* v___x_594_; 
v___x_594_ = l_unsafeCast___redArg(v_x_589_);
if (lean_obj_tag(v___x_594_) == 0)
{
uint64_t v___x_595_; 
v___x_595_ = 1723ULL;
v___y_591_ = v___x_595_;
goto v___jp_590_;
}
else
{
uint64_t v_hash_596_; 
v_hash_596_ = lean_ctor_get_uint64(v___x_594_, sizeof(void*)*2);
lean_dec(v___x_594_);
v___y_591_ = v_hash_596_;
goto v___jp_590_;
}
v___jp_590_:
{
size_t v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_uint64_to_usize(v___y_591_);
v___x_593_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg(v_x_588_, v___x_592_, v_x_589_);
return v___x_593_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg___boxed(lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
uint8_t v_res_599_; lean_object* v_r_600_; 
v_res_599_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg(v_x_597_, v_x_598_);
lean_dec(v_x_598_);
lean_dec_ref(v_x_597_);
v_r_600_ = lean_box(v_res_599_);
return v_r_600_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Match_isMatchEqnTheorem(lean_object* v_env_603_, lean_object* v_declName_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Name_eraseMacroScopes(v_declName_604_);
if (lean_obj_tag(v___x_605_) == 1)
{
lean_object* v_str_606_; uint8_t v___x_607_; 
v_str_606_ = lean_ctor_get(v___x_605_, 1);
lean_inc_ref(v_str_606_);
lean_dec_ref_known(v___x_605_, 2);
v___x_607_ = l_Lean_Meta_isEqnLikeSuffix(v_str_606_);
if (v___x_607_ == 0)
{
lean_dec(v_declName_604_);
lean_dec_ref(v_env_603_);
return v___x_607_;
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v_eqns_612_; uint8_t v___x_613_; 
v___x_608_ = l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
v___x_609_ = l_Lean_Meta_Match_matchEqnsExt;
v___x_610_ = ((lean_object*)(l_Lean_Meta_Match_isMatchEqnTheorem___closed__0));
lean_inc(v_declName_604_);
v___x_611_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_608_, v___x_609_, v_env_603_, v___x_610_, v_declName_604_);
v_eqns_612_ = lean_ctor_get(v___x_611_, 1);
lean_inc_ref(v_eqns_612_);
lean_dec(v___x_611_);
v___x_613_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg(v_eqns_612_, v_declName_604_);
lean_dec(v_declName_604_);
lean_dec_ref(v_eqns_612_);
return v___x_613_;
}
}
else
{
uint8_t v___x_614_; 
lean_dec(v___x_605_);
lean_dec(v_declName_604_);
lean_dec_ref(v_env_603_);
v___x_614_ = 0;
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_isMatchEqnTheorem___boxed(lean_object* v_env_615_, lean_object* v_declName_616_){
_start:
{
uint8_t v_res_617_; lean_object* v_r_618_; 
v_res_617_ = l_Lean_Meta_Match_isMatchEqnTheorem(v_env_615_, v_declName_616_);
v_r_618_ = lean_box(v_res_617_);
return v_r_618_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0(lean_object* v_00_u03b2_619_, lean_object* v_x_620_, lean_object* v_x_621_){
_start:
{
uint8_t v___x_622_; 
v___x_622_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___redArg(v_x_620_, v_x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0___boxed(lean_object* v_00_u03b2_623_, lean_object* v_x_624_, lean_object* v_x_625_){
_start:
{
uint8_t v_res_626_; lean_object* v_r_627_; 
v_res_626_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0(v_00_u03b2_623_, v_x_624_, v_x_625_);
lean_dec(v_x_625_);
lean_dec_ref(v_x_624_);
v_r_627_ = lean_box(v_res_626_);
return v_r_627_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0(lean_object* v_00_u03b2_628_, lean_object* v_x_629_, size_t v_x_630_, lean_object* v_x_631_){
_start:
{
uint8_t v___x_632_; 
v___x_632_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___redArg(v_x_629_, v_x_630_, v_x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b2_633_, lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_x_636_){
_start:
{
size_t v_x_391__boxed_637_; uint8_t v_res_638_; lean_object* v_r_639_; 
v_x_391__boxed_637_ = lean_unbox_usize(v_x_635_);
lean_dec(v_x_635_);
v_res_638_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0(v_00_u03b2_633_, v_x_634_, v_x_391__boxed_637_, v_x_636_);
lean_dec(v_x_636_);
lean_dec_ref(v_x_634_);
v_r_639_ = lean_box(v_res_638_);
return v_r_639_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_640_, lean_object* v_keys_641_, lean_object* v_vals_642_, lean_object* v_heq_643_, lean_object* v_i_644_, lean_object* v_k_645_){
_start:
{
uint8_t v___x_646_; 
v___x_646_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___redArg(v_keys_641_, v_i_644_, v_k_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_647_, lean_object* v_keys_648_, lean_object* v_vals_649_, lean_object* v_heq_650_, lean_object* v_i_651_, lean_object* v_k_652_){
_start:
{
uint8_t v_res_653_; lean_object* v_r_654_; 
v_res_653_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Match_isMatchEqnTheorem_spec__0_spec__0_spec__1(v_00_u03b2_647_, v_keys_648_, v_vals_649_, v_heq_650_, v_i_651_, v_k_652_);
lean_dec(v_k_652_);
lean_dec_ref(v_vals_649_);
lean_dec_ref(v_keys_648_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eqns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Match_instInhabitedMatchEqns_default = _init_l_Lean_Meta_Match_instInhabitedMatchEqns_default();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedMatchEqns_default);
l_Lean_Meta_Match_instInhabitedMatchEqns = _init_l_Lean_Meta_Match_instInhabitedMatchEqns();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedMatchEqns);
l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default = _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default);
l_Lean_Meta_Match_instInhabitedMatchEqnsExtState = _init_l_Lean_Meta_Match_instInhabitedMatchEqnsExtState();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedMatchEqnsExtState);
res = l___private_Lean_Meta_Match_MatchEqsExt_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqsExt_1276161115____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Match_matchEqnsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Match_matchEqnsExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatchEqsExt(builtin);
}
#ifdef __cplusplus
}
#endif

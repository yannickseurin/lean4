// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.RecArgInfo
// Imports: public import Lean.Elab.PreDefinition.FixedParams public import Lean.Elab.PreDefinition.Structural.IndGroupInfo
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0;
static const lean_array_object l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__2(lean_object*);
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fnName"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "fixedParamPerm"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recArgPos"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "indicesPos"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "indGroupInst"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "indIdx"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21_value;
static const lean_string_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instReprRecArgInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instReprRecArgInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instReprRecArgInfo = (const lean_object*)&l_Lean_Elab_Structural_instReprRecArgInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1;
static const lean_array_object l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = l_Lean_Elab_Structural_instInhabitedIndGroupInst_default;
v___x_6_ = lean_unsigned_to_nat(0u);
v___x_7_ = ((lean_object*)(l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1));
v___x_8_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0, &l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0_once, _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0);
v___x_9_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_6_);
lean_ctor_set(v___x_9_, 3, v___x_7_);
lean_ctor_set(v___x_9_, 4, v___x_5_);
lean_ctor_set(v___x_9_, 5, v___x_6_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__2, &l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__2_once, _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__2);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__2(lean_object* v_a_12_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_nat_to_int(v_a_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(lean_object* v_x_20_, lean_object* v_x_21_){
_start:
{
if (lean_obj_tag(v_x_20_) == 0)
{
lean_object* v___x_22_; 
v___x_22_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1));
return v___x_22_;
}
else
{
lean_object* v_val_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_34_; 
v_val_23_ = lean_ctor_get(v_x_20_, 0);
v_isSharedCheck_34_ = !lean_is_exclusive(v_x_20_);
if (v_isSharedCheck_34_ == 0)
{
v___x_25_ = v_x_20_;
v_isShared_26_ = v_isSharedCheck_34_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_val_23_);
lean_dec(v_x_20_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_34_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
v___x_27_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3));
v___x_28_ = l_Nat_reprFast(v_val_23_);
if (v_isShared_26_ == 0)
{
lean_ctor_set_tag(v___x_25_, 3);
lean_ctor_set(v___x_25_, 0, v___x_28_);
v___x_30_ = v___x_25_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v___x_28_);
v___x_30_ = v_reuseFailAlloc_33_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_27_);
lean_ctor_set(v___x_31_, 1, v___x_30_);
v___x_32_ = l_Repr_addAppParen(v___x_31_, v_x_21_);
return v___x_32_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___boxed(lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_x_35_, v_x_36_);
lean_dec(v_x_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(lean_object* v___y_38_){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(0u);
v___x_40_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v___y_38_, v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3_spec__5(lean_object* v_x_41_, lean_object* v_x_42_, lean_object* v_x_43_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
lean_dec(v_x_41_);
return v_x_42_;
}
else
{
lean_object* v_head_44_; lean_object* v_tail_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_56_; 
v_head_44_ = lean_ctor_get(v_x_43_, 0);
v_tail_45_ = lean_ctor_get(v_x_43_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v_x_43_);
if (v_isSharedCheck_56_ == 0)
{
v___x_47_ = v_x_43_;
v_isShared_48_ = v_isSharedCheck_56_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_tail_45_);
lean_inc(v_head_44_);
lean_dec(v_x_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_56_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
lean_inc(v_x_41_);
if (v_isShared_48_ == 0)
{
lean_ctor_set_tag(v___x_47_, 5);
lean_ctor_set(v___x_47_, 1, v_x_41_);
lean_ctor_set(v___x_47_, 0, v_x_42_);
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_x_42_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v_x_41_);
v___x_50_ = v_reuseFailAlloc_55_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_unsigned_to_nat(0u);
v___x_52_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_head_44_, v___x_51_);
v___x_53_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_50_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v_x_42_ = v___x_53_;
v_x_43_ = v_tail_45_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3(lean_object* v_x_57_, lean_object* v_x_58_, lean_object* v_x_59_){
_start:
{
if (lean_obj_tag(v_x_59_) == 0)
{
lean_dec(v_x_57_);
return v_x_58_;
}
else
{
lean_object* v_head_60_; lean_object* v_tail_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_72_; 
v_head_60_ = lean_ctor_get(v_x_59_, 0);
v_tail_61_ = lean_ctor_get(v_x_59_, 1);
v_isSharedCheck_72_ = !lean_is_exclusive(v_x_59_);
if (v_isSharedCheck_72_ == 0)
{
v___x_63_ = v_x_59_;
v_isShared_64_ = v_isSharedCheck_72_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_tail_61_);
lean_inc(v_head_60_);
lean_dec(v_x_59_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_72_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_66_; 
lean_inc(v_x_57_);
if (v_isShared_64_ == 0)
{
lean_ctor_set_tag(v___x_63_, 5);
lean_ctor_set(v___x_63_, 1, v_x_57_);
lean_ctor_set(v___x_63_, 0, v_x_58_);
v___x_66_ = v___x_63_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_x_58_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_x_57_);
v___x_66_ = v_reuseFailAlloc_71_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_head_60_, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_66_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3_spec__5(v_x_57_, v___x_69_, v_tail_61_);
return v___x_70_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1(lean_object* v_x_73_, lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_73_) == 0)
{
lean_object* v___x_75_; 
lean_dec(v_x_74_);
v___x_75_ = lean_box(0);
return v___x_75_;
}
else
{
lean_object* v_tail_76_; 
v_tail_76_ = lean_ctor_get(v_x_73_, 1);
if (lean_obj_tag(v_tail_76_) == 0)
{
lean_object* v_head_77_; lean_object* v___x_78_; 
lean_dec(v_x_74_);
v_head_77_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_head_77_);
lean_dec_ref_known(v_x_73_, 2);
v___x_78_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(v_head_77_);
return v___x_78_;
}
else
{
lean_object* v_head_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
lean_inc(v_tail_76_);
v_head_79_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_head_79_);
lean_dec_ref_known(v_x_73_, 2);
v___x_80_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(v_head_79_);
v___x_81_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3(v_x_74_, v___x_80_, v_tail_76_);
return v___x_81_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__0));
v___x_91_ = lean_string_length(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__5, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__5);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0(lean_object* v_xs_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_102_ = lean_array_get_size(v_xs_101_);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_nat_dec_eq(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_105_ = lean_array_to_list(v_xs_101_);
v___x_106_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__3));
v___x_107_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1(v___x_105_, v___x_106_);
v___x_108_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6);
v___x_109_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__7));
v___x_110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_107_);
v___x_111_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__8));
v___x_112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_108_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = l_Std_Format_fill(v___x_113_);
return v___x_114_;
}
else
{
lean_object* v___x_115_; 
lean_dec_ref(v_xs_101_);
v___x_115_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__10));
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6_spec__8(lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
if (lean_obj_tag(v_x_118_) == 0)
{
lean_dec(v_x_116_);
return v_x_117_;
}
else
{
lean_object* v_head_119_; lean_object* v_tail_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_131_; 
v_head_119_ = lean_ctor_get(v_x_118_, 0);
v_tail_120_ = lean_ctor_get(v_x_118_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_x_118_);
if (v_isSharedCheck_131_ == 0)
{
v___x_122_ = v_x_118_;
v_isShared_123_ = v_isSharedCheck_131_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_tail_120_);
lean_inc(v_head_119_);
lean_dec(v_x_118_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_131_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
lean_inc(v_x_116_);
if (v_isShared_123_ == 0)
{
lean_ctor_set_tag(v___x_122_, 5);
lean_ctor_set(v___x_122_, 1, v_x_116_);
lean_ctor_set(v___x_122_, 0, v_x_117_);
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_x_117_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_x_116_);
v___x_125_ = v_reuseFailAlloc_130_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = l_Nat_reprFast(v_head_119_);
v___x_127_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_125_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v_x_117_ = v___x_128_;
v_x_118_ = v_tail_120_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6(lean_object* v_x_132_, lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_134_) == 0)
{
lean_dec(v_x_132_);
return v_x_133_;
}
else
{
lean_object* v_head_135_; lean_object* v_tail_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_147_; 
v_head_135_ = lean_ctor_get(v_x_134_, 0);
v_tail_136_ = lean_ctor_get(v_x_134_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_134_);
if (v_isSharedCheck_147_ == 0)
{
v___x_138_ = v_x_134_;
v_isShared_139_ = v_isSharedCheck_147_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_tail_136_);
lean_inc(v_head_135_);
lean_dec(v_x_134_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_147_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
lean_inc(v_x_132_);
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 5);
lean_ctor_set(v___x_138_, 1, v_x_132_);
lean_ctor_set(v___x_138_, 0, v_x_133_);
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_x_133_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_x_132_);
v___x_141_ = v_reuseFailAlloc_146_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_142_ = l_Nat_reprFast(v_head_135_);
v___x_143_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
v___x_144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_141_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
v___x_145_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6_spec__8(v_x_132_, v___x_144_, v_tail_136_);
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(lean_object* v___y_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = l_Nat_reprFast(v___y_148_);
v___x_150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3(lean_object* v_x_151_, lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
lean_object* v___x_153_; 
lean_dec(v_x_152_);
v___x_153_ = lean_box(0);
return v___x_153_;
}
else
{
lean_object* v_tail_154_; 
v_tail_154_ = lean_ctor_get(v_x_151_, 1);
if (lean_obj_tag(v_tail_154_) == 0)
{
lean_object* v_head_155_; lean_object* v___x_156_; 
lean_dec(v_x_152_);
v_head_155_ = lean_ctor_get(v_x_151_, 0);
lean_inc(v_head_155_);
lean_dec_ref_known(v_x_151_, 2);
v___x_156_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(v_head_155_);
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
lean_inc(v_tail_154_);
v_head_157_ = lean_ctor_get(v_x_151_, 0);
lean_inc(v_head_157_);
lean_dec_ref_known(v_x_151_, 2);
v___x_158_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(v_head_157_);
v___x_159_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6(v_x_152_, v___x_158_, v_tail_154_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1(lean_object* v_xs_160_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_161_ = lean_array_get_size(v_xs_160_);
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_nat_dec_eq(v___x_161_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_164_ = lean_array_to_list(v_xs_160_);
v___x_165_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__3));
v___x_166_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3(v___x_164_, v___x_165_);
v___x_167_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__6);
v___x_168_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__7));
v___x_169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_166_);
v___x_170_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__8));
v___x_171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_167_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = l_Std_Format_fill(v___x_172_);
return v___x_173_;
}
else
{
lean_object* v___x_174_; 
lean_dec_ref(v_xs_160_);
v___x_174_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__10));
return v___x_174_;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(10u);
v___x_189_ = lean_nat_to_int(v___x_188_);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(18u);
v___x_194_ = lean_nat_to_int(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(13u);
v___x_199_ = lean_nat_to_int(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(14u);
v___x_204_ = lean_nat_to_int(v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(16u);
v___x_209_ = lean_nat_to_int(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0));
v___x_215_ = lean_string_length(v___x_214_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23);
v___x_217_ = lean_nat_to_int(v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object* v_x_222_){
_start:
{
lean_object* v_fnName_223_; lean_object* v_fixedParamPerm_224_; lean_object* v_recArgPos_225_; lean_object* v_indicesPos_226_; lean_object* v_indGroupInst_227_; lean_object* v_indIdx_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_fnName_223_ = lean_ctor_get(v_x_222_, 0);
lean_inc(v_fnName_223_);
v_fixedParamPerm_224_ = lean_ctor_get(v_x_222_, 1);
lean_inc_ref(v_fixedParamPerm_224_);
v_recArgPos_225_ = lean_ctor_get(v_x_222_, 2);
lean_inc(v_recArgPos_225_);
v_indicesPos_226_ = lean_ctor_get(v_x_222_, 3);
lean_inc_ref(v_indicesPos_226_);
v_indGroupInst_227_ = lean_ctor_get(v_x_222_, 4);
lean_inc_ref(v_indGroupInst_227_);
v_indIdx_228_ = lean_ctor_get(v_x_222_, 5);
lean_inc(v_indIdx_228_);
lean_dec_ref(v_x_222_);
v___x_229_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5));
v___x_230_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6));
v___x_231_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7);
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = l_Lean_Name_reprPrec(v_fnName_223_, v___x_232_);
v___x_234_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_231_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = 0;
v___x_236_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_236_, 0, v___x_234_);
lean_ctor_set_uint8(v___x_236_, sizeof(void*)*1, v___x_235_);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_230_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0___closed__2));
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_box(1);
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9));
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v___x_229_);
v___x_245_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10);
v___x_246_ = l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0(v_fixedParamPerm_224_);
v___x_247_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set_uint8(v___x_248_, sizeof(void*)*1, v___x_235_);
v___x_249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_244_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v___x_238_);
v___x_251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v___x_240_);
v___x_252_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12));
v___x_253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_229_);
v___x_255_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13);
v___x_256_ = l_Nat_reprFast(v_recArgPos_225_);
v___x_257_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_255_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1, v___x_235_);
v___x_260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_254_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_238_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_240_);
v___x_263_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15));
v___x_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___x_229_);
v___x_266_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16);
v___x_267_ = l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1(v_indicesPos_226_);
v___x_268_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set_uint8(v___x_269_, sizeof(void*)*1, v___x_235_);
v___x_270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_265_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v___x_238_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_240_);
v___x_273_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18));
v___x_274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___x_229_);
v___x_276_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19);
v___x_277_ = l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(v_indGroupInst_227_);
v___x_278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set_uint8(v___x_279_, sizeof(void*)*1, v___x_235_);
v___x_280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_275_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v___x_238_);
v___x_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___x_240_);
v___x_283_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21));
v___x_284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_282_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___x_229_);
v___x_286_ = l_Nat_reprFast(v_indIdx_228_);
v___x_287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
v___x_288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_231_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set_uint8(v___x_289_, sizeof(void*)*1, v___x_235_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_285_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24);
v___x_292_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25));
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_290_);
v___x_294_ = ((lean_object*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26));
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_291_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set_uint8(v___x_297_, sizeof(void*)*1, v___x_235_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr(lean_object* v_x_298_, lean_object* v_prec_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_x_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___boxed(lean_object* v_x_301_, lean_object* v_prec_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr(v_x_301_, v_prec_302_);
lean_dec(v_prec_302_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(lean_object* v_info_306_){
_start:
{
lean_object* v_recArgPos_307_; lean_object* v_indicesPos_308_; lean_object* v___x_309_; 
v_recArgPos_307_ = lean_ctor_get(v_info_306_, 2);
lean_inc(v_recArgPos_307_);
v_indicesPos_308_ = lean_ctor_get(v_info_306_, 3);
lean_inc_ref(v_indicesPos_308_);
lean_dec_ref(v_info_306_);
v___x_309_ = lean_array_push(v_indicesPos_308_, v_recArgPos_307_);
return v___x_309_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(lean_object* v_a_310_, lean_object* v_as_311_, size_t v_i_312_, size_t v_stop_313_){
_start:
{
uint8_t v___x_314_; 
v___x_314_ = lean_usize_dec_eq(v_i_312_, v_stop_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_array_uget_borrowed(v_as_311_, v_i_312_);
v___x_316_ = lean_nat_dec_eq(v_a_310_, v___x_315_);
if (v___x_316_ == 0)
{
size_t v___x_317_; size_t v___x_318_; 
v___x_317_ = ((size_t)1ULL);
v___x_318_ = lean_usize_add(v_i_312_, v___x_317_);
v_i_312_ = v___x_318_;
goto _start;
}
else
{
return v___x_316_;
}
}
else
{
uint8_t v___x_320_; 
v___x_320_ = 0;
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0___boxed(lean_object* v_a_321_, lean_object* v_as_322_, lean_object* v_i_323_, lean_object* v_stop_324_){
_start:
{
size_t v_i_boxed_325_; size_t v_stop_boxed_326_; uint8_t v_res_327_; lean_object* v_r_328_; 
v_i_boxed_325_ = lean_unbox_usize(v_i_323_);
lean_dec(v_i_323_);
v_stop_boxed_326_ = lean_unbox_usize(v_stop_324_);
lean_dec(v_stop_324_);
v_res_327_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(v_a_321_, v_as_322_, v_i_boxed_325_, v_stop_boxed_326_);
lean_dec_ref(v_as_322_);
lean_dec(v_a_321_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(lean_object* v_as_329_, lean_object* v_a_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_array_get_size(v_as_329_);
v___x_333_ = lean_nat_dec_lt(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
return v___x_333_;
}
else
{
if (v___x_333_ == 0)
{
return v___x_333_;
}
else
{
size_t v___x_334_; size_t v___x_335_; uint8_t v___x_336_; 
v___x_334_ = ((size_t)0ULL);
v___x_335_ = lean_usize_of_nat(v___x_332_);
v___x_336_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(v_a_330_, v_as_329_, v___x_334_, v___x_335_);
return v___x_336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0___boxed(lean_object* v_as_337_, lean_object* v_a_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(v_as_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_as_337_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(lean_object* v_upperBound_341_, lean_object* v_indexMajorPos_342_, lean_object* v___x_343_, lean_object* v_xs_344_, lean_object* v_a_345_, lean_object* v_b_346_){
_start:
{
lean_object* v_a_348_; uint8_t v___x_352_; 
v___x_352_ = lean_nat_dec_lt(v_a_345_, v_upperBound_341_);
if (v___x_352_ == 0)
{
lean_dec(v_a_345_);
return v_b_346_;
}
else
{
uint8_t v___x_353_; 
v___x_353_ = l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(v_indexMajorPos_342_, v_a_345_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
v___x_354_ = l_Lean_Elab_FixedParamPerm_isFixed(v___x_343_, v_a_345_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_array_fget_borrowed(v_xs_344_, v_a_345_);
lean_inc(v___x_355_);
v___x_356_ = lean_array_push(v_b_346_, v___x_355_);
v_a_348_ = v___x_356_;
goto v___jp_347_;
}
else
{
v_a_348_ = v_b_346_;
goto v___jp_347_;
}
}
else
{
v_a_348_ = v_b_346_;
goto v___jp_347_;
}
}
v___jp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = lean_nat_add(v_a_345_, v___x_349_);
lean_dec(v_a_345_);
v_a_345_ = v___x_350_;
v_b_346_ = v_a_348_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg___boxed(lean_object* v_upperBound_357_, lean_object* v_indexMajorPos_358_, lean_object* v___x_359_, lean_object* v_xs_360_, lean_object* v_a_361_, lean_object* v_b_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(v_upperBound_357_, v_indexMajorPos_358_, v___x_359_, v_xs_360_, v_a_361_, v_b_362_);
lean_dec_ref(v_xs_360_);
lean_dec_ref(v___x_359_);
lean_dec_ref(v_indexMajorPos_358_);
lean_dec(v_upperBound_357_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(lean_object* v_xs_364_, lean_object* v_as_365_, size_t v_sz_366_, size_t v_i_367_, lean_object* v_b_368_){
_start:
{
uint8_t v___x_369_; 
v___x_369_ = lean_usize_dec_lt(v_i_367_, v_sz_366_);
if (v___x_369_ == 0)
{
return v_b_368_;
}
else
{
lean_object* v___x_370_; lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; size_t v___x_374_; size_t v___x_375_; 
v___x_370_ = l_Lean_instInhabitedExpr;
v_a_371_ = lean_array_uget_borrowed(v_as_365_, v_i_367_);
v___x_372_ = lean_array_get_borrowed(v___x_370_, v_xs_364_, v_a_371_);
lean_inc(v___x_372_);
v___x_373_ = lean_array_push(v_b_368_, v___x_372_);
v___x_374_ = ((size_t)1ULL);
v___x_375_ = lean_usize_add(v_i_367_, v___x_374_);
v_i_367_ = v___x_375_;
v_b_368_ = v___x_373_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1___boxed(lean_object* v_xs_377_, lean_object* v_as_378_, lean_object* v_sz_379_, lean_object* v_i_380_, lean_object* v_b_381_){
_start:
{
size_t v_sz_boxed_382_; size_t v_i_boxed_383_; lean_object* v_res_384_; 
v_sz_boxed_382_ = lean_unbox_usize(v_sz_379_);
lean_dec(v_sz_379_);
v_i_boxed_383_ = lean_unbox_usize(v_i_380_);
lean_dec(v_i_380_);
v_res_384_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(v_xs_377_, v_as_378_, v_sz_boxed_382_, v_i_boxed_383_, v_b_381_);
lean_dec_ref(v_as_378_);
lean_dec_ref(v_xs_377_);
return v_res_384_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_unsigned_to_nat(0u);
v___x_386_ = l_Lean_Level_ofNat(v___x_385_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_obj_once(&l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0, &l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0_once, _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0);
v___x_388_ = l_Lean_mkSort(v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object* v_info_391_, lean_object* v_xs_392_){
_start:
{
lean_object* v_fixedParamPerm_393_; lean_object* v_recArgPos_394_; lean_object* v_indicesPos_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v_xs_400_; lean_object* v_indexMajorPos_401_; size_t v_sz_402_; lean_object* v___x_403_; lean_object* v_indexMajorArgs_404_; size_t v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_fixedParamPerm_393_ = lean_ctor_get(v_info_391_, 1);
lean_inc_ref_n(v_fixedParamPerm_393_, 2);
v_recArgPos_394_ = lean_ctor_get(v_info_391_, 2);
lean_inc(v_recArgPos_394_);
v_indicesPos_395_ = lean_ctor_get(v_info_391_, 3);
lean_inc_ref(v_indicesPos_395_);
lean_dec_ref(v_info_391_);
v___x_396_ = l_Lean_Elab_FixedParamPerm_numFixed(v_fixedParamPerm_393_);
v___x_397_ = lean_unsigned_to_nat(0u);
v___x_398_ = lean_obj_once(&l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1, &l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1_once, _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1);
v___x_399_ = lean_mk_array(v___x_396_, v___x_398_);
v_xs_400_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_393_, v___x_399_, v_xs_392_);
lean_dec_ref(v___x_399_);
v_indexMajorPos_401_ = lean_array_push(v_indicesPos_395_, v_recArgPos_394_);
v_sz_402_ = lean_array_size(v_indexMajorPos_401_);
v___x_403_ = lean_array_get_size(v_xs_400_);
v_indexMajorArgs_404_ = ((lean_object*)(l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2));
v___x_405_ = ((size_t)0ULL);
v___x_406_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(v_xs_400_, v_indexMajorPos_401_, v_sz_402_, v___x_405_, v_indexMajorArgs_404_);
v___x_407_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(v___x_403_, v_indexMajorPos_401_, v_fixedParamPerm_393_, v_xs_400_, v___x_397_, v_indexMajorArgs_404_);
lean_dec_ref(v_xs_400_);
lean_dec_ref(v_fixedParamPerm_393_);
lean_dec_ref(v_indexMajorPos_401_);
v___x_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_406_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2(lean_object* v_upperBound_409_, lean_object* v_indexMajorPos_410_, lean_object* v___x_411_, lean_object* v_xs_412_, lean_object* v_inst_413_, lean_object* v_R_414_, lean_object* v_a_415_, lean_object* v_b_416_, lean_object* v_c_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(v_upperBound_409_, v_indexMajorPos_410_, v___x_411_, v_xs_412_, v_a_415_, v_b_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___boxed(lean_object* v_upperBound_419_, lean_object* v_indexMajorPos_420_, lean_object* v___x_421_, lean_object* v_xs_422_, lean_object* v_inst_423_, lean_object* v_R_424_, lean_object* v_a_425_, lean_object* v_b_426_, lean_object* v_c_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2(v_upperBound_419_, v_indexMajorPos_420_, v___x_421_, v_xs_422_, v_inst_423_, v_R_424_, v_a_425_, v_b_426_, v_c_427_);
lean_dec_ref(v_xs_422_);
lean_dec_ref(v___x_421_);
lean_dec_ref(v_indexMajorPos_420_);
lean_dec(v_upperBound_419_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21(lean_object* v_info_429_){
_start:
{
lean_object* v_indGroupInst_430_; lean_object* v_toIndGroupInfo_431_; lean_object* v_indIdx_432_; lean_object* v_all_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_indGroupInst_430_ = lean_ctor_get(v_info_429_, 4);
v_toIndGroupInfo_431_ = lean_ctor_get(v_indGroupInst_430_, 0);
v_indIdx_432_ = lean_ctor_get(v_info_429_, 5);
v_all_433_ = lean_ctor_get(v_toIndGroupInfo_431_, 0);
v___x_434_ = l_Lean_instInhabitedName;
v___x_435_ = lean_array_get_borrowed(v___x_434_, v_all_433_, v_indIdx_432_);
lean_inc(v___x_435_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21___boxed(lean_object* v_info_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Elab_Structural_RecArgInfo_indName_x21(v_info_436_);
lean_dec_ref(v_info_436_);
return v_res_437_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_instInhabitedRecArgInfo_default = _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedRecArgInfo_default);
l_Lean_Elab_Structural_instInhabitedRecArgInfo = _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedRecArgInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
}
#ifdef __cplusplus
}
#endif

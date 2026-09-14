// Lean compiler output
// Module: Lean.ProjFns
// Imports: public import Lean.EnvExtension
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
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
static lean_once_cell_t l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedProjectionFunctionInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedProjectionFunctionInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedProjectionFunctionInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedProjectionFunctionInfo;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprProjectionFunctionInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ctorName"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fromClass"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprProjectionFunctionInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprProjectionFunctionInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprProjectionFunctionInfo___closed__0 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprProjectionFunctionInfo = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "projectionFnInfoExt"};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 172, 107, 39, 139, 106, 85, 71)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_projectionFnInfoExt;
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_isProjectionFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAuxParentProjectionInfo_default = (const lean_object*)&l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAuxParentProjectionInfo = (const lean_object*)&l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0_value),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprAuxParentProjectionInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprAuxParentProjectionInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprAuxParentProjectionInfo___closed__0 = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprAuxParentProjectionInfo = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "auxParentProjInfoExt"};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(4, 64, 229, 66, 82, 134, 114, 43)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_auxParentProjInfoExt;
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getAuxParentProjectionInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_instInhabitedProjectionFunctionInfo_default___closed__1(void){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_3_ = 0;
v___x_4_ = lean_unsigned_to_nat(0u);
v___x_5_ = lean_obj_once(&l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0, &l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0_once, _init_l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0);
v___x_6_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
lean_ctor_set(v___x_6_, 2, v___x_4_);
lean_ctor_set_uint8(v___x_6_, sizeof(void*)*3, v___x_3_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_instInhabitedProjectionFunctionInfo_default(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_instInhabitedProjectionFunctionInfo_default___closed__1, &l_Lean_instInhabitedProjectionFunctionInfo_default___closed__1_once, _init_l_Lean_instInhabitedProjectionFunctionInfo_default___closed__1);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_instInhabitedProjectionFunctionInfo(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_instInhabitedProjectionFunctionInfo_default;
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprProjectionFunctionInfo_repr_spec__0(lean_object* v_a_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_nat_to_int(v_a_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(12u);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(13u);
v___x_33_ = lean_nat_to_int(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(5u);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0));
v___x_44_ = lean_string_length(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg(lean_object* v_x_51_){
_start:
{
lean_object* v_ctorName_52_; lean_object* v_numParams_53_; lean_object* v_i_54_; uint8_t v_fromClass_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_ctorName_52_ = lean_ctor_get(v_x_51_, 0);
lean_inc(v_ctorName_52_);
v_numParams_53_ = lean_ctor_get(v_x_51_, 1);
lean_inc(v_numParams_53_);
v_i_54_ = lean_ctor_get(v_x_51_, 2);
lean_inc(v_i_54_);
v_fromClass_55_ = lean_ctor_get_uint8(v_x_51_, sizeof(void*)*3);
lean_dec_ref(v_x_51_);
v___x_56_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5));
v___x_57_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6));
v___x_58_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7);
v___x_59_ = lean_unsigned_to_nat(0u);
v___x_60_ = l_Lean_Name_reprPrec(v_ctorName_52_, v___x_59_);
v___x_61_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_58_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = 0;
v___x_63_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set_uint8(v___x_63_, sizeof(void*)*1, v___x_62_);
v___x_64_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_57_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9));
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_box(1);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11));
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_56_);
v___x_72_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12);
v___x_73_ = l_Nat_reprFast(v_numParams_53_);
v___x_74_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
v___x_75_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_72_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set_uint8(v___x_76_, sizeof(void*)*1, v___x_62_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_71_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_65_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_67_);
v___x_80_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14));
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_79_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_56_);
v___x_83_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15);
v___x_84_ = l_Nat_reprFast(v_i_54_);
v___x_85_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
v___x_86_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_83_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*1, v___x_62_);
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_82_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_65_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_67_);
v___x_91_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17));
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_56_);
v___x_94_ = l_Bool_repr___redArg(v_fromClass_55_);
v___x_95_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_72_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set_uint8(v___x_96_, sizeof(void*)*1, v___x_62_);
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_93_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20);
v___x_99_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_97_);
v___x_101_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22));
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_98_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set_uint8(v___x_104_, sizeof(void*)*1, v___x_62_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr(lean_object* v_x_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lean_instReprProjectionFunctionInfo_repr___redArg(v_x_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___boxed(lean_object* v_x_108_, lean_object* v_prec_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_instReprProjectionFunctionInfo_repr(v_x_108_, v_prec_109_);
lean_dec(v_prec_109_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_113_, lean_object* v_x_114_){
_start:
{
if (lean_obj_tag(v_x_114_) == 0)
{
lean_object* v_k_115_; lean_object* v_v_116_; lean_object* v_l_117_; lean_object* v_r_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_k_115_ = lean_ctor_get(v_x_114_, 1);
v_v_116_ = lean_ctor_get(v_x_114_, 2);
v_l_117_ = lean_ctor_get(v_x_114_, 3);
v_r_118_ = lean_ctor_get(v_x_114_, 4);
v___x_119_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0(v_init_113_, v_l_117_);
lean_inc(v_v_116_);
lean_inc(v_k_115_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v_k_115_);
lean_ctor_set(v___x_120_, 1, v_v_116_);
v___x_121_ = lean_array_push(v___x_119_, v___x_120_);
v_init_113_ = v___x_121_;
v_x_114_ = v_r_118_;
goto _start;
}
else
{
return v_init_113_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_123_, lean_object* v_x_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0(v_init_123_, v_x_124_);
lean_dec(v_x_124_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1(lean_object* v_env_126_, lean_object* v_as_127_, size_t v_i_128_, size_t v_stop_129_, lean_object* v_b_130_){
_start:
{
lean_object* v___y_132_; uint8_t v___x_136_; 
v___x_136_ = lean_usize_dec_eq(v_i_128_, v_stop_129_);
if (v___x_136_ == 0)
{
lean_object* v___x_137_; lean_object* v_fst_138_; uint8_t v___x_139_; 
v___x_137_ = lean_array_uget_borrowed(v_as_127_, v_i_128_);
v_fst_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_138_);
lean_inc_ref(v_env_126_);
v___x_139_ = l_Lean_Environment_contains(v_env_126_, v_fst_138_, v___x_136_);
if (v___x_139_ == 0)
{
v___y_132_ = v_b_130_;
goto v___jp_131_;
}
else
{
lean_object* v___x_140_; 
lean_inc(v___x_137_);
v___x_140_ = lean_array_push(v_b_130_, v___x_137_);
v___y_132_ = v___x_140_;
goto v___jp_131_;
}
}
else
{
lean_dec_ref(v_env_126_);
return v_b_130_;
}
v___jp_131_:
{
size_t v___x_133_; size_t v___x_134_; 
v___x_133_ = ((size_t)1ULL);
v___x_134_ = lean_usize_add(v_i_128_, v___x_133_);
v_i_128_ = v___x_134_;
v_b_130_ = v___y_132_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_141_, lean_object* v_as_142_, lean_object* v_i_143_, lean_object* v_stop_144_, lean_object* v_b_145_){
_start:
{
size_t v_i_boxed_146_; size_t v_stop_boxed_147_; lean_object* v_res_148_; 
v_i_boxed_146_ = lean_unbox_usize(v_i_143_);
lean_dec(v_i_143_);
v_stop_boxed_147_ = lean_unbox_usize(v_stop_144_);
lean_dec(v_stop_144_);
v_res_148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1(v_env_141_, v_as_142_, v_i_boxed_146_, v_stop_boxed_147_, v_b_145_);
lean_dec_ref(v_as_142_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(lean_object* v_env_155_, lean_object* v_s_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_159_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0(v___x_158_, v_s_156_);
v___x_160_ = lean_array_get_size(v___x_159_);
v___x_161_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_162_ = lean_nat_dec_lt(v___x_157_, v___x_160_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
lean_dec_ref(v___x_159_);
lean_dec_ref(v_env_155_);
v___x_163_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
return v___x_163_;
}
else
{
uint8_t v___x_164_; 
v___x_164_ = lean_nat_dec_le(v___x_160_, v___x_160_);
if (v___x_164_ == 0)
{
if (v___x_162_ == 0)
{
lean_object* v___x_165_; 
lean_dec_ref(v___x_159_);
lean_dec_ref(v_env_155_);
v___x_165_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
return v___x_165_;
}
else
{
size_t v___x_166_; size_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = ((size_t)0ULL);
v___x_167_ = lean_usize_of_nat(v___x_160_);
v___x_168_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1(v_env_155_, v___x_159_, v___x_166_, v___x_167_, v___x_161_);
lean_dec_ref(v___x_159_);
lean_inc_ref_n(v___x_168_, 2);
v___x_169_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
lean_ctor_set(v___x_169_, 2, v___x_168_);
return v___x_169_;
}
}
else
{
size_t v___x_170_; size_t v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_170_ = ((size_t)0ULL);
v___x_171_ = lean_usize_of_nat(v___x_160_);
v___x_172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__1(v_env_155_, v___x_159_, v___x_170_, v___x_171_, v___x_161_);
lean_dec_ref(v___x_159_);
lean_inc_ref_n(v___x_172_, 2);
v___x_173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
lean_ctor_set(v___x_173_, 2, v___x_172_);
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object* v_env_174_, lean_object* v_s_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(v_env_174_, v_s_175_);
lean_dec(v_s_175_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___f_186_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_187_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_188_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_189_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_187_, v___x_188_, v___f_186_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object* v_a_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_();
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(lean_object* v_init_192_, lean_object* v_t_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0_spec__0(v_init_192_, v_t_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_195_, lean_object* v_t_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(v_init_195_, v_t_196_);
lean_dec(v_t_196_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo(lean_object* v_env_198_, lean_object* v_projName_199_, lean_object* v_ctorName_200_, lean_object* v_numParams_201_, lean_object* v_i_202_, uint8_t v_fromClass_203_){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = l_Lean_projectionFnInfoExt;
v___x_205_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_205_, 0, v_ctorName_200_);
lean_ctor_set(v___x_205_, 1, v_numParams_201_);
lean_ctor_set(v___x_205_, 2, v_i_202_);
lean_ctor_set_uint8(v___x_205_, sizeof(void*)*3, v_fromClass_203_);
v___x_206_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_204_, v_env_198_, v_projName_199_, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo___boxed(lean_object* v_env_207_, lean_object* v_projName_208_, lean_object* v_ctorName_209_, lean_object* v_numParams_210_, lean_object* v_i_211_, lean_object* v_fromClass_212_){
_start:
{
uint8_t v_fromClass_boxed_213_; lean_object* v_res_214_; 
v_fromClass_boxed_213_ = lean_unbox(v_fromClass_212_);
v_res_214_ = l_Lean_addProjectionFnInfo(v_env_207_, v_projName_208_, v_ctorName_209_, v_numParams_210_, v_i_211_, v_fromClass_boxed_213_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object* v_env_215_, lean_object* v_projName_216_){
_start:
{
lean_object* v___x_217_; lean_object* v_toEnvExtension_218_; lean_object* v_asyncMode_219_; lean_object* v___x_220_; uint8_t v___x_221_; lean_object* v___x_222_; 
v___x_217_ = l_Lean_projectionFnInfoExt;
v_toEnvExtension_218_ = lean_ctor_get(v___x_217_, 0);
v_asyncMode_219_ = lean_ctor_get(v_toEnvExtension_218_, 2);
v___x_220_ = l_Lean_instInhabitedProjectionFunctionInfo_default;
v___x_221_ = 0;
v___x_222_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_220_, v___x_217_, v_env_215_, v_projName_216_, v_asyncMode_219_, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_isProjectionFn(lean_object* v_env_223_, lean_object* v_declName_224_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_225_ = l_Lean_instInhabitedProjectionFunctionInfo_default;
v___x_226_ = l_Lean_projectionFnInfoExt;
v___x_227_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_225_, v___x_226_, v_env_223_, v_declName_224_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_isProjectionFn___boxed(lean_object* v_env_228_, lean_object* v_declName_229_){
_start:
{
uint8_t v_res_230_; lean_object* v_r_231_; 
v_res_230_ = l_Lean_Environment_isProjectionFn(v_env_228_, v_declName_229_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object* v_env_232_, lean_object* v_projName_233_){
_start:
{
lean_object* v___x_234_; 
lean_inc_ref(v_env_232_);
v___x_234_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_232_, v_projName_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; 
lean_dec_ref(v_env_232_);
v___x_235_ = lean_box(0);
return v___x_235_;
}
else
{
lean_object* v_val_236_; lean_object* v_ctorName_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v_val_236_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_val_236_);
lean_dec_ref_known(v___x_234_, 1);
v_ctorName_237_ = lean_ctor_get(v_val_236_, 0);
lean_inc(v_ctorName_237_);
lean_dec(v_val_236_);
v___x_238_ = 0;
v___x_239_ = l_Lean_Environment_find_x3f(v_env_232_, v_ctorName_237_, v___x_238_);
if (lean_obj_tag(v___x_239_) == 1)
{
lean_object* v_val_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_250_; 
v_val_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_250_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_250_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_val_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_250_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
if (lean_obj_tag(v_val_240_) == 6)
{
lean_object* v_val_244_; lean_object* v_induct_245_; lean_object* v___x_247_; 
v_val_244_ = lean_ctor_get(v_val_240_, 0);
lean_inc_ref(v_val_244_);
lean_dec_ref_known(v_val_240_, 1);
v_induct_245_ = lean_ctor_get(v_val_244_, 1);
lean_inc(v_induct_245_);
lean_dec_ref(v_val_244_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v_induct_245_);
v___x_247_ = v___x_242_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_induct_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
else
{
lean_object* v___x_249_; 
lean_del_object(v___x_242_);
lean_dec(v_val_240_);
v___x_249_ = lean_box(0);
return v___x_249_;
}
}
}
else
{
lean_object* v___x_251_; 
lean_dec(v___x_239_);
v___x_251_ = lean_box(0);
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg___lam__0(lean_object* v_declName_252_, lean_object* v_toPure_253_, lean_object* v_____do__lift_254_){
_start:
{
uint8_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = l_Lean_Environment_isProjectionFn(v_____do__lift_254_, v_declName_252_);
v___x_256_ = lean_box(v___x_255_);
v___x_257_ = lean_apply_2(v_toPure_253_, lean_box(0), v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg(lean_object* v_inst_258_, lean_object* v_inst_259_, lean_object* v_declName_260_){
_start:
{
lean_object* v_toApplicative_261_; lean_object* v_toBind_262_; lean_object* v_getEnv_263_; lean_object* v_toPure_264_; lean_object* v___f_265_; lean_object* v___x_266_; 
v_toApplicative_261_ = lean_ctor_get(v_inst_259_, 0);
lean_inc_ref(v_toApplicative_261_);
v_toBind_262_ = lean_ctor_get(v_inst_259_, 1);
lean_inc(v_toBind_262_);
lean_dec_ref(v_inst_259_);
v_getEnv_263_ = lean_ctor_get(v_inst_258_, 0);
lean_inc(v_getEnv_263_);
lean_dec_ref(v_inst_258_);
v_toPure_264_ = lean_ctor_get(v_toApplicative_261_, 1);
lean_inc(v_toPure_264_);
lean_dec_ref(v_toApplicative_261_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_isProjectionFn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_265_, 0, v_declName_260_);
lean_closure_set(v___f_265_, 1, v_toPure_264_);
v___x_266_ = lean_apply_4(v_toBind_262_, lean_box(0), lean_box(0), v_getEnv_263_, v___f_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn(lean_object* v_m_267_, lean_object* v_inst_268_, lean_object* v_inst_269_, lean_object* v_declName_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_isProjectionFn___redArg(v_inst_268_, v_inst_269_, v_declName_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg___lam__0(lean_object* v_declName_272_, lean_object* v_toPure_273_, lean_object* v_____do__lift_274_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_____do__lift_274_, v_declName_272_);
v___x_276_ = lean_apply_2(v_toPure_273_, lean_box(0), v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg(lean_object* v_inst_277_, lean_object* v_inst_278_, lean_object* v_declName_279_){
_start:
{
lean_object* v_toApplicative_280_; lean_object* v_toBind_281_; lean_object* v_getEnv_282_; lean_object* v_toPure_283_; lean_object* v___f_284_; lean_object* v___x_285_; 
v_toApplicative_280_ = lean_ctor_get(v_inst_278_, 0);
lean_inc_ref(v_toApplicative_280_);
v_toBind_281_ = lean_ctor_get(v_inst_278_, 1);
lean_inc(v_toBind_281_);
lean_dec_ref(v_inst_278_);
v_getEnv_282_ = lean_ctor_get(v_inst_277_, 0);
lean_inc(v_getEnv_282_);
lean_dec_ref(v_inst_277_);
v_toPure_283_ = lean_ctor_get(v_toApplicative_280_, 1);
lean_inc(v_toPure_283_);
lean_dec_ref(v_toApplicative_280_);
v___f_284_ = lean_alloc_closure((void*)(l_Lean_getProjectionFnInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_284_, 0, v_declName_279_);
lean_closure_set(v___f_284_, 1, v_toPure_283_);
v___x_285_ = lean_apply_4(v_toBind_281_, lean_box(0), lean_box(0), v_getEnv_282_, v___f_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f(lean_object* v_m_286_, lean_object* v_inst_287_, lean_object* v_inst_288_, lean_object* v_declName_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_getProjectionFnInfo_x3f___redArg(v_inst_287_, v_inst_288_, v_declName_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg(lean_object* v_x_302_){
_start:
{
lean_object* v_numParams_303_; uint8_t v_fromClass_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_337_; 
v_numParams_303_ = lean_ctor_get(v_x_302_, 0);
v_fromClass_304_ = lean_ctor_get_uint8(v_x_302_, sizeof(void*)*1);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_302_);
if (v_isSharedCheck_337_ == 0)
{
v___x_306_ = v_x_302_;
v_isShared_307_ = v_isSharedCheck_337_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_numParams_303_);
lean_dec(v_x_302_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_337_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; lean_object* v___x_316_; 
v___x_308_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5));
v___x_309_ = ((lean_object*)(l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1));
v___x_310_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12);
v___x_311_ = l_Nat_reprFast(v_numParams_303_);
v___x_312_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
v___x_313_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_310_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = 0;
if (v_isShared_307_ == 0)
{
lean_ctor_set_tag(v___x_306_, 6);
lean_ctor_set(v___x_306_, 0, v___x_313_);
v___x_316_ = v___x_306_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_313_);
v___x_316_ = v_reuseFailAlloc_336_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
lean_ctor_set_uint8(v___x_316_, sizeof(void*)*1, v___x_314_);
v___x_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_309_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9));
v___x_319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = lean_box(1);
v___x_321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17));
v___x_323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v___x_308_);
v___x_325_ = l_Bool_repr___redArg(v_fromClass_304_);
v___x_326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_310_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_327_, 0, v___x_326_);
lean_ctor_set_uint8(v___x_327_, sizeof(void*)*1, v___x_314_);
v___x_328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_324_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20);
v___x_330_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21));
v___x_331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v___x_328_);
v___x_332_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22));
v___x_333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_331_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_329_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*1, v___x_314_);
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr(lean_object* v_x_338_, lean_object* v_prec_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Lean_instReprAuxParentProjectionInfo_repr___redArg(v_x_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___boxed(lean_object* v_x_341_, lean_object* v_prec_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_instReprAuxParentProjectionInfo_repr(v_x_341_, v_prec_342_);
lean_dec(v_prec_342_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_346_, lean_object* v_x_347_){
_start:
{
if (lean_obj_tag(v_x_347_) == 0)
{
lean_object* v_k_348_; lean_object* v_v_349_; lean_object* v_l_350_; lean_object* v_r_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_k_348_ = lean_ctor_get(v_x_347_, 1);
v_v_349_ = lean_ctor_get(v_x_347_, 2);
v_l_350_ = lean_ctor_get(v_x_347_, 3);
v_r_351_ = lean_ctor_get(v_x_347_, 4);
v___x_352_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0(v_init_346_, v_l_350_);
lean_inc(v_v_349_);
lean_inc(v_k_348_);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v_k_348_);
lean_ctor_set(v___x_353_, 1, v_v_349_);
v___x_354_ = lean_array_push(v___x_352_, v___x_353_);
v_init_346_ = v___x_354_;
v_x_347_ = v_r_351_;
goto _start;
}
else
{
return v_init_346_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_356_, lean_object* v_x_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0(v_init_356_, v_x_357_);
lean_dec(v_x_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1(lean_object* v_env_359_, lean_object* v_as_360_, size_t v_i_361_, size_t v_stop_362_, lean_object* v_b_363_){
_start:
{
lean_object* v___y_365_; uint8_t v___x_369_; 
v___x_369_ = lean_usize_dec_eq(v_i_361_, v_stop_362_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v_fst_371_; uint8_t v___x_372_; 
v___x_370_ = lean_array_uget_borrowed(v_as_360_, v_i_361_);
v_fst_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_fst_371_);
lean_inc_ref(v_env_359_);
v___x_372_ = l_Lean_Environment_contains(v_env_359_, v_fst_371_, v___x_369_);
if (v___x_372_ == 0)
{
v___y_365_ = v_b_363_;
goto v___jp_364_;
}
else
{
lean_object* v___x_373_; 
lean_inc(v___x_370_);
v___x_373_ = lean_array_push(v_b_363_, v___x_370_);
v___y_365_ = v___x_373_;
goto v___jp_364_;
}
}
else
{
lean_dec_ref(v_env_359_);
return v_b_363_;
}
v___jp_364_:
{
size_t v___x_366_; size_t v___x_367_; 
v___x_366_ = ((size_t)1ULL);
v___x_367_ = lean_usize_add(v_i_361_, v___x_366_);
v_i_361_ = v___x_367_;
v_b_363_ = v___y_365_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_374_, lean_object* v_as_375_, lean_object* v_i_376_, lean_object* v_stop_377_, lean_object* v_b_378_){
_start:
{
size_t v_i_boxed_379_; size_t v_stop_boxed_380_; lean_object* v_res_381_; 
v_i_boxed_379_ = lean_unbox_usize(v_i_376_);
lean_dec(v_i_376_);
v_stop_boxed_380_ = lean_unbox_usize(v_stop_377_);
lean_dec(v_stop_377_);
v_res_381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1(v_env_374_, v_as_375_, v_i_boxed_379_, v_stop_boxed_380_, v_b_378_);
lean_dec_ref(v_as_375_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(lean_object* v_env_388_, lean_object* v_s_389_){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_392_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0(v___x_391_, v_s_389_);
v___x_393_ = lean_array_get_size(v___x_392_);
v___x_394_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_395_ = lean_nat_dec_lt(v___x_390_, v___x_393_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
lean_dec_ref(v___x_392_);
lean_dec_ref(v_env_388_);
v___x_396_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_le(v___x_393_, v___x_393_);
if (v___x_397_ == 0)
{
if (v___x_395_ == 0)
{
lean_object* v___x_398_; 
lean_dec_ref(v___x_392_);
lean_dec_ref(v_env_388_);
v___x_398_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
return v___x_398_;
}
else
{
size_t v___x_399_; size_t v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_399_ = ((size_t)0ULL);
v___x_400_ = lean_usize_of_nat(v___x_393_);
v___x_401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1(v_env_388_, v___x_392_, v___x_399_, v___x_400_, v___x_394_);
lean_dec_ref(v___x_392_);
lean_inc_ref_n(v___x_401_, 2);
v___x_402_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
lean_ctor_set(v___x_402_, 2, v___x_401_);
return v___x_402_;
}
}
else
{
size_t v___x_403_; size_t v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_403_ = ((size_t)0ULL);
v___x_404_ = lean_usize_of_nat(v___x_393_);
v___x_405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__1(v_env_388_, v___x_392_, v___x_403_, v___x_404_, v___x_394_);
lean_dec_ref(v___x_392_);
lean_inc_ref_n(v___x_405_, 2);
v___x_406_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
lean_ctor_set(v___x_406_, 2, v___x_405_);
return v___x_406_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object* v_env_407_, lean_object* v_s_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(v_env_407_, v_s_408_);
lean_dec(v_s_408_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___f_416_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_417_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_418_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_419_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_417_, v___x_418_, v___f_416_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_();
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(lean_object* v_init_422_, lean_object* v_t_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0_spec__0(v_init_422_, v_t_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_425_, lean_object* v_t_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(v_init_425_, v_t_426_);
lean_dec(v_t_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo(lean_object* v_env_428_, lean_object* v_projName_429_, lean_object* v_numParams_430_, uint8_t v_fromClass_431_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = l_Lean_auxParentProjInfoExt;
v___x_433_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_433_, 0, v_numParams_430_);
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*1, v_fromClass_431_);
v___x_434_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_432_, v_env_428_, v_projName_429_, v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo___boxed(lean_object* v_env_435_, lean_object* v_projName_436_, lean_object* v_numParams_437_, lean_object* v_fromClass_438_){
_start:
{
uint8_t v_fromClass_boxed_439_; lean_object* v_res_440_; 
v_fromClass_boxed_439_ = lean_unbox(v_fromClass_438_);
v_res_440_ = l_Lean_addAuxParentProjectionInfo(v_env_435_, v_projName_436_, v_numParams_437_, v_fromClass_boxed_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getAuxParentProjectionInfo_x3f(lean_object* v_env_441_, lean_object* v_projName_442_){
_start:
{
lean_object* v___x_443_; lean_object* v_toEnvExtension_444_; lean_object* v_asyncMode_445_; lean_object* v___x_446_; uint8_t v___x_447_; lean_object* v___x_448_; 
v___x_443_ = l_Lean_auxParentProjInfoExt;
v_toEnvExtension_444_ = lean_ctor_get(v___x_443_, 0);
v_asyncMode_445_ = lean_ctor_get(v_toEnvExtension_444_, 2);
v___x_446_ = ((lean_object*)(l_Lean_instInhabitedAuxParentProjectionInfo_default));
v___x_447_ = 0;
v___x_448_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_446_, v___x_443_, v_env_441_, v_projName_442_, v_asyncMode_445_, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg___lam__0(lean_object* v_declName_449_, lean_object* v_toPure_450_, lean_object* v_____do__lift_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = l_Lean_Environment_getAuxParentProjectionInfo_x3f(v_____do__lift_451_, v_declName_449_);
v___x_453_ = lean_apply_2(v_toPure_450_, lean_box(0), v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg(lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_declName_456_){
_start:
{
lean_object* v_toApplicative_457_; lean_object* v_toBind_458_; lean_object* v_getEnv_459_; lean_object* v_toPure_460_; lean_object* v___f_461_; lean_object* v___x_462_; 
v_toApplicative_457_ = lean_ctor_get(v_inst_455_, 0);
lean_inc_ref(v_toApplicative_457_);
v_toBind_458_ = lean_ctor_get(v_inst_455_, 1);
lean_inc(v_toBind_458_);
lean_dec_ref(v_inst_455_);
v_getEnv_459_ = lean_ctor_get(v_inst_454_, 0);
lean_inc(v_getEnv_459_);
lean_dec_ref(v_inst_454_);
v_toPure_460_ = lean_ctor_get(v_toApplicative_457_, 1);
lean_inc(v_toPure_460_);
lean_dec_ref(v_toApplicative_457_);
v___f_461_ = lean_alloc_closure((void*)(l_Lean_getAuxParentProjectionInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_461_, 0, v_declName_456_);
lean_closure_set(v___f_461_, 1, v_toPure_460_);
v___x_462_ = lean_apply_4(v_toBind_458_, lean_box(0), lean_box(0), v_getEnv_459_, v___f_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f(lean_object* v_m_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_declName_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_getAuxParentProjectionInfo_x3f___redArg(v_inst_464_, v_inst_465_, v_declName_466_);
return v___x_467_;
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedProjectionFunctionInfo_default = _init_l_Lean_instInhabitedProjectionFunctionInfo_default();
lean_mark_persistent(l_Lean_instInhabitedProjectionFunctionInfo_default);
l_Lean_instInhabitedProjectionFunctionInfo = _init_l_Lean_instInhabitedProjectionFunctionInfo();
lean_mark_persistent(l_Lean_instInhabitedProjectionFunctionInfo);
res = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_projectionFnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_projectionFnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_auxParentProjInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_auxParentProjInfoExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ProjFns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ProjFns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ProjFns(builtin);
}
#ifdef __cplusplus
}
#endif

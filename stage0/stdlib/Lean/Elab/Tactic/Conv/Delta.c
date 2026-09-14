// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Delta
// Imports: public import Lean.Elab.Tactic.Delta public import Lean.Elab.Tactic.Conv.Basic
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
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_deltaExpand(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_changeLhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_evalDelta___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "delta"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(191, 217, 17, 26, 4, 182, 95, 121)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalDelta"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(249, 242, 203, 140, 225, 25, 96, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__0_value),((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__1_value),((lean_object*)(((size_t)(18) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__3_value),((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__4_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg(v_e_30_, v___y_36_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_51_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2_spec__2(lean_object* v_a_52_, lean_object* v_as_53_, size_t v_i_54_, size_t v_stop_55_){
_start:
{
uint8_t v___x_56_; 
v___x_56_ = lean_usize_dec_eq(v_i_54_, v_stop_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_uget_borrowed(v_as_53_, v_i_54_);
v___x_58_ = lean_name_eq(v_a_52_, v___x_57_);
if (v___x_58_ == 0)
{
size_t v___x_59_; size_t v___x_60_; 
v___x_59_ = ((size_t)1ULL);
v___x_60_ = lean_usize_add(v_i_54_, v___x_59_);
v_i_54_ = v___x_60_;
goto _start;
}
else
{
return v___x_58_;
}
}
else
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2_spec__2___boxed(lean_object* v_a_63_, lean_object* v_as_64_, lean_object* v_i_65_, lean_object* v_stop_66_){
_start:
{
size_t v_i_boxed_67_; size_t v_stop_boxed_68_; uint8_t v_res_69_; lean_object* v_r_70_; 
v_i_boxed_67_ = lean_unbox_usize(v_i_65_);
lean_dec(v_i_65_);
v_stop_boxed_68_ = lean_unbox_usize(v_stop_66_);
lean_dec(v_stop_66_);
v_res_69_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2_spec__2(v_a_63_, v_as_64_, v_i_boxed_67_, v_stop_boxed_68_);
lean_dec_ref(v_as_64_);
lean_dec(v_a_63_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2(lean_object* v_as_71_, lean_object* v_a_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = lean_array_get_size(v_as_71_);
v___x_75_ = lean_nat_dec_lt(v___x_73_, v___x_74_);
if (v___x_75_ == 0)
{
return v___x_75_;
}
else
{
if (v___x_75_ == 0)
{
return v___x_75_;
}
else
{
size_t v___x_76_; size_t v___x_77_; uint8_t v___x_78_; 
v___x_76_ = ((size_t)0ULL);
v___x_77_ = lean_usize_of_nat(v___x_74_);
v___x_78_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2_spec__2(v_a_72_, v_as_71_, v___x_76_, v___x_77_);
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2___boxed(lean_object* v_as_79_, lean_object* v_a_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = l_Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2(v_as_79_, v_a_80_);
lean_dec(v_a_80_);
lean_dec_ref(v_as_79_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_evalDelta___lam__0(lean_object* v_a_83_, lean_object* v___y_84_){
_start:
{
uint8_t v___x_85_; 
v___x_85_ = l_Array_contains___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__2(v_a_83_, v___y_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__0___boxed(lean_object* v_a_86_, lean_object* v___y_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Lean_Elab_Tactic_Conv_evalDelta___lam__0(v_a_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec_ref(v_a_86_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___redArg(size_t v_sz_90_, size_t v_i_91_, lean_object* v_bs_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_usize_dec_lt(v_i_91_, v_sz_90_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = l_unsafeCast___redArg(v_bs_92_);
lean_dec_ref(v_bs_92_);
v___x_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
return v___x_98_;
}
else
{
lean_object* v_v_99_; lean_object* v___x_100_; lean_object* v_bs_x27_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_v_99_ = lean_array_uget(v_bs_92_, v_i_91_);
v___x_100_ = lean_unsigned_to_nat(0u);
v_bs_x27_101_ = lean_array_uset(v_bs_92_, v_i_91_, v___x_100_);
v___x_102_ = l_unsafeCast___redArg(v_v_99_);
lean_dec(v_v_99_);
v___x_103_ = lean_box(0);
v___x_104_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_102_, v___x_103_, v___y_93_, v___y_94_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; size_t v___x_106_; size_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref_known(v___x_104_, 1);
v___x_106_ = ((size_t)1ULL);
v___x_107_ = lean_usize_add(v_i_91_, v___x_106_);
v___x_108_ = l_unsafeCast___redArg(v_a_105_);
lean_dec(v_a_105_);
v___x_109_ = lean_array_uset(v_bs_x27_101_, v_i_91_, v___x_108_);
v_i_91_ = v___x_107_;
v_bs_92_ = v___x_109_;
goto _start;
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
lean_dec_ref(v_bs_x27_101_);
v_a_111_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_104_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_104_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___redArg___boxed(lean_object* v_sz_119_, lean_object* v_i_120_, lean_object* v_bs_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
size_t v_sz_boxed_125_; size_t v_i_boxed_126_; lean_object* v_res_127_; 
v_sz_boxed_125_ = lean_unbox_usize(v_sz_119_);
lean_dec(v_sz_119_);
v_i_boxed_126_ = lean_unbox_usize(v_i_120_);
lean_dec(v_i_120_);
v_res_127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___redArg(v_sz_boxed_125_, v_i_boxed_126_, v_bs_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0(size_t v_sz_128_, size_t v_i_129_, lean_object* v_bs_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___redArg(v_sz_128_, v_i_129_, v_bs_130_, v___y_137_, v___y_138_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___boxed(lean_object* v_sz_141_, lean_object* v_i_142_, lean_object* v_bs_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
size_t v_sz_boxed_153_; size_t v_i_boxed_154_; lean_object* v_res_155_; 
v_sz_boxed_153_ = lean_unbox_usize(v_sz_141_);
lean_dec(v_sz_141_);
v_i_boxed_154_ = lean_unbox_usize(v_i_142_);
lean_dec(v_i_142_);
v_res_155_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0(v_sz_boxed_153_, v_i_boxed_154_, v_bs_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__1(lean_object* v___x_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
size_t v_sz_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_1885__overap_173_; lean_object* v___x_174_; 
v_sz_168_ = lean_array_size(v___x_158_);
v___x_169_ = l_unsafeCast___redArg(v___x_158_);
v___x_170_ = lean_box_usize(v_sz_168_);
v___x_171_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed__const__1));
v___x_172_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__0___boxed), 12, 3);
lean_closure_set(v___x_172_, 0, v___x_170_);
lean_closure_set(v___x_172_, 1, v___x_171_);
lean_closure_set(v___x_172_, 2, v___x_169_);
v___x_1885__overap_173_ = l_unsafeCast___redArg(v___x_172_);
lean_dec_ref(v___x_172_);
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
lean_inc(v___y_162_);
lean_inc_ref(v___y_161_);
lean_inc(v___y_160_);
lean_inc_ref(v___y_159_);
v___x_174_ = lean_apply_9(v___x_1885__overap_173_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, lean_box(0));
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___f_176_; lean_object* v___x_177_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_a_175_);
lean_dec_ref_known(v___x_174_, 1);
v___f_176_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalDelta___lam__0___boxed), 2, 1);
lean_closure_set(v___f_176_, 0, v_a_175_);
v___x_177_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_160_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_179_; lean_object* v_a_180_; uint8_t v___x_181_; lean_object* v___x_182_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
v___x_179_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalDelta_spec__1___redArg(v_a_178_, v___y_164_);
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref(v___x_179_);
v___x_181_ = 0;
v___x_182_ = l_Lean_Meta_deltaExpand(v_a_180_, v___f_176_, v___x_181_, v___y_165_, v___y_166_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; lean_object* v___x_184_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_183_);
lean_dec_ref_known(v___x_182_, 1);
v___x_184_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_183_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
return v___x_184_;
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
v_a_185_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_182_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_182_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
else
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_dec_ref(v___f_176_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
v_a_193_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_177_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_177_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
v_a_201_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_174_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_174_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed(lean_object* v___x_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Elab_Tactic_Conv_evalDelta___lam__1(v___x_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
lean_dec_ref(v___x_209_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta(lean_object* v_stx_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___f_233_; lean_object* v___x_234_; 
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = l_Lean_Syntax_getArg(v_stx_220_, v___x_230_);
v___x_232_ = l_Lean_Syntax_getArgs(v___x_231_);
lean_dec(v___x_231_);
v___f_233_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalDelta___lam__1___boxed), 10, 1);
lean_closure_set(v___f_233_, 0, v___x_232_);
v___x_234_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_233_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalDelta___boxed(lean_object* v_stx_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Elab_Tactic_Conv_evalDelta(v_stx_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_stx_235_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1(){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_266_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_267_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__5));
v___x_268_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8));
v___x_269_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalDelta___boxed), 10, 0);
v___x_270_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_266_, v___x_267_, v___x_268_, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___boxed(lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1();
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3(){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1___closed__8));
v___x_300_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___closed__6));
v___x_301_ = l_Lean_addBuiltinDeclarationRanges(v___x_299_, v___x_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3___boxed(lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3();
return v_res_303_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Delta(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Delta_0__Lean_Elab_Tactic_Conv_evalDelta___regBuiltin_Lean_Elab_Tactic_Conv_evalDelta_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Delta(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Delta(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Delta(builtin);
}
#ifdef __cplusplus
}
#endif

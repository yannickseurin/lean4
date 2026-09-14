// Lean compiler output
// Module: Lean.Elab.BindersUtil
// Imports: public import Lean.Parser.Term meta import Lean.Parser.Term meta import Lean.Parser.Do import Init.Syntax
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
uint8_t l_Lean_Name_isImplementationDetail(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofBinderName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_getMatchAltsNumPatterns(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_getMatchAltsNumPatterns___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAlt(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0 = (const lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1 = (const lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2 = (const lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___closed__3 = (const lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__3_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4 = (const lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4_value;
static const lean_array_object l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5 = (const lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_shouldExpandMatchAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand___closed__0 = (const lean_object*)&l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4_value;
static const lean_string_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6 = (const lean_object*)&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clear"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_shouldExpandMatchAlt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 189, 43, 31, 203, 133, 30, 26)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "clear%"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_clearInMatchAlt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_clearInMatchAlt___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_clearInMatchAlt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_clearInMatchAlt___closed__1;
static lean_once_cell_t l_Lean_Elab_Term_clearInMatchAlt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_clearInMatchAlt___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatchAlt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatchAlt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_clearInMatch_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_clearInMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object* v_binderName_1_){
_start:
{
uint8_t v___x_2_; 
v___x_2_ = l_Lean_Name_isImplementationDetail(v_binderName_1_);
if (v___x_2_ == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 1;
return v___x_4_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofBinderName___boxed(lean_object* v_binderName_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l_Lean_LocalDeclKind_ofBinderName(v_binderName_5_);
lean_dec(v_binderName_5_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptType(lean_object* v_ref_8_, lean_object* v_optType_9_){
_start:
{
uint8_t v___x_10_; 
v___x_10_ = l_Lean_Syntax_isNone(v_optType_9_);
if (v___x_10_ == 0)
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = l_Lean_Syntax_getArg(v_optType_9_, v___x_11_);
v___x_13_ = lean_unsigned_to_nat(1u);
v___x_14_ = l_Lean_Syntax_getArg(v___x_12_, v___x_13_);
lean_dec(v___x_12_);
return v___x_14_;
}
else
{
uint8_t v___x_15_; lean_object* v___x_16_; 
v___x_15_ = 0;
v___x_16_ = l_Lean_mkHole(v_ref_8_, v___x_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object* v_ref_17_, lean_object* v_optType_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_Lean_Elab_Term_expandOptType(v_ref_17_, v_optType_18_);
lean_dec(v_optType_18_);
lean_dec(v_ref_17_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_getMatchAltsNumPatterns(lean_object* v_matchAlts_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v_alt0_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v_pats_27_; lean_object* v___x_28_; 
v___x_21_ = lean_unsigned_to_nat(0u);
v___x_22_ = l_Lean_Syntax_getArg(v_matchAlts_20_, v___x_21_);
v_alt0_23_ = l_Lean_Syntax_getArg(v___x_22_, v___x_21_);
lean_dec(v___x_22_);
v___x_24_ = lean_unsigned_to_nat(1u);
v___x_25_ = l_Lean_Syntax_getArg(v_alt0_23_, v___x_24_);
lean_dec(v_alt0_23_);
v___x_26_ = l_Lean_Syntax_getArg(v___x_25_, v___x_21_);
lean_dec(v___x_25_);
v_pats_27_ = l_Lean_Syntax_getSepArgs(v___x_26_);
lean_dec(v___x_26_);
v___x_28_ = lean_array_get_size(v_pats_27_);
lean_dec_ref(v_pats_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_getMatchAltsNumPatterns___boxed(lean_object* v_matchAlts_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_Term_getMatchAltsNumPatterns(v_matchAlts_29_);
lean_dec(v_matchAlts_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0(lean_object* v___x_34_, size_t v_sz_35_, size_t v_i_36_, lean_object* v_bs_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = lean_usize_dec_lt(v_i_36_, v_sz_35_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; 
lean_dec(v___x_34_);
v___x_39_ = l_unsafeCast___redArg(v_bs_37_);
lean_dec_ref(v_bs_37_);
return v___x_39_;
}
else
{
lean_object* v___x_40_; lean_object* v_v_41_; lean_object* v___x_42_; lean_object* v_bs_x27_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; size_t v___x_51_; size_t v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_40_ = lean_unsigned_to_nat(1u);
v_v_41_ = lean_array_uget(v_bs_37_, v_i_36_);
v___x_42_ = lean_unsigned_to_nat(0u);
v_bs_x27_43_ = lean_array_uset(v_bs_37_, v_i_36_, v___x_42_);
v___x_44_ = l_unsafeCast___redArg(v_v_41_);
lean_dec(v_v_41_);
v___x_45_ = lean_mk_empty_array_with_capacity(v___x_40_);
v___x_46_ = lean_array_push(v___x_45_, v___x_44_);
v___x_47_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1));
v___x_48_ = lean_box(2);
v___x_49_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
lean_ctor_set(v___x_49_, 1, v___x_47_);
lean_ctor_set(v___x_49_, 2, v___x_46_);
lean_inc(v___x_34_);
v___x_50_ = l_Lean_Syntax_setArg(v___x_34_, v___x_40_, v___x_49_);
v___x_51_ = ((size_t)1ULL);
v___x_52_ = lean_usize_add(v_i_36_, v___x_51_);
v___x_53_ = l_unsafeCast___redArg(v___x_50_);
lean_dec(v___x_50_);
v___x_54_ = lean_array_uset(v_bs_x27_43_, v_i_36_, v___x_53_);
v_i_36_ = v___x_52_;
v_bs_37_ = v___x_54_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___boxed(lean_object* v___x_56_, lean_object* v_sz_57_, lean_object* v_i_58_, lean_object* v_bs_59_){
_start:
{
size_t v_sz_boxed_60_; size_t v_i_boxed_61_; lean_object* v_res_62_; 
v_sz_boxed_60_ = lean_unbox_usize(v_sz_57_);
lean_dec(v_sz_57_);
v_i_boxed_61_ = lean_unbox_usize(v_i_58_);
lean_dec(v_i_58_);
v_res_62_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0(v___x_56_, v_sz_boxed_60_, v_i_boxed_61_, v_bs_59_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAlt(lean_object* v_stx_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v_patss_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = l_Lean_Syntax_getArg(v_stx_63_, v___x_64_);
v_patss_66_ = l_Lean_Syntax_getSepArgs(v___x_65_);
lean_dec(v___x_65_);
v___x_67_ = lean_array_get_size(v_patss_66_);
v___x_68_ = lean_nat_dec_le(v___x_67_, v___x_64_);
if (v___x_68_ == 0)
{
size_t v_sz_69_; size_t v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_sz_69_ = lean_array_size(v_patss_66_);
v___x_70_ = ((size_t)0ULL);
v___x_71_ = l_unsafeCast___redArg(v_patss_66_);
lean_dec_ref(v_patss_66_);
v___x_72_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0(v_stx_63_, v_sz_69_, v___x_70_, v___x_71_);
v___x_73_ = l_unsafeCast___redArg(v___x_72_);
lean_dec_ref(v___x_72_);
return v___x_73_;
}
else
{
lean_object* v___x_74_; lean_object* v___x_75_; 
lean_dec_ref(v_patss_66_);
v___x_74_ = lean_mk_empty_array_with_capacity(v___x_64_);
v___x_75_ = lean_array_push(v___x_74_, v_stx_63_);
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__0(size_t v_sz_76_, size_t v_i_77_, lean_object* v_bs_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = lean_usize_dec_lt(v_i_77_, v_sz_76_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = l_unsafeCast___redArg(v_bs_78_);
lean_dec_ref(v_bs_78_);
v___x_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
else
{
lean_object* v_v_82_; lean_object* v___x_83_; lean_object* v_bs_x27_84_; lean_object* v___x_85_; lean_object* v_patss_86_; size_t v___x_87_; size_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v_v_82_ = lean_array_uget(v_bs_78_, v_i_77_);
v___x_83_ = lean_unsigned_to_nat(0u);
v_bs_x27_84_ = lean_array_uset(v_bs_78_, v_i_77_, v___x_83_);
v___x_85_ = l_unsafeCast___redArg(v_v_82_);
lean_dec(v_v_82_);
v_patss_86_ = l_Lean_Syntax_getArgs(v___x_85_);
lean_dec(v___x_85_);
v___x_87_ = ((size_t)1ULL);
v___x_88_ = lean_usize_add(v_i_77_, v___x_87_);
v___x_89_ = l_unsafeCast___redArg(v_patss_86_);
lean_dec_ref(v_patss_86_);
v___x_90_ = lean_array_uset(v_bs_x27_84_, v_i_77_, v___x_89_);
v_i_77_ = v___x_88_;
v_bs_78_ = v___x_90_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__0___boxed(lean_object* v_sz_92_, lean_object* v_i_93_, lean_object* v_bs_94_){
_start:
{
size_t v_sz_boxed_95_; size_t v_i_boxed_96_; lean_object* v_res_97_; 
v_sz_boxed_95_ = lean_unbox_usize(v_sz_92_);
lean_dec(v_sz_92_);
v_i_boxed_96_ = lean_unbox_usize(v_i_93_);
lean_dec(v_i_93_);
v_res_97_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__0(v_sz_boxed_95_, v_i_boxed_96_, v_bs_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__1(uint8_t v___x_98_, lean_object* v_as_99_, size_t v_i_100_, size_t v_stop_101_, lean_object* v_b_102_){
_start:
{
lean_object* v___y_104_; uint8_t v___x_108_; 
v___x_108_ = lean_usize_dec_eq(v_i_100_, v_stop_101_);
if (v___x_108_ == 0)
{
lean_object* v_fst_109_; uint8_t v___x_110_; 
v_fst_109_ = lean_ctor_get(v_b_102_, 0);
v___x_110_ = lean_unbox(v_fst_109_);
if (v___x_110_ == 0)
{
lean_object* v_snd_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_119_; 
v_snd_111_ = lean_ctor_get(v_b_102_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_b_102_);
if (v_isSharedCheck_119_ == 0)
{
lean_object* v_unused_120_; 
v_unused_120_ = lean_ctor_get(v_b_102_, 0);
lean_dec(v_unused_120_);
v___x_113_ = v_b_102_;
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_snd_111_);
lean_dec(v_b_102_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_115_ = lean_box(v___x_98_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_115_);
v___x_117_ = v___x_113_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_snd_111_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
v___y_104_ = v___x_117_;
goto v___jp_103_;
}
}
}
else
{
lean_object* v_snd_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_131_; 
v_snd_121_ = lean_ctor_get(v_b_102_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_b_102_);
if (v_isSharedCheck_131_ == 0)
{
lean_object* v_unused_132_; 
v_unused_132_ = lean_ctor_get(v_b_102_, 0);
lean_dec(v_unused_132_);
v___x_123_ = v_b_102_;
v_isShared_124_ = v_isSharedCheck_131_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_snd_121_);
lean_dec(v_b_102_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_131_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_125_ = lean_array_uget_borrowed(v_as_99_, v_i_100_);
lean_inc(v___x_125_);
v___x_126_ = lean_array_push(v_snd_121_, v___x_125_);
v___x_127_ = lean_box(v___x_108_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v___x_126_);
lean_ctor_set(v___x_123_, 0, v___x_127_);
v___x_129_ = v___x_123_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___x_126_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
v___y_104_ = v___x_129_;
goto v___jp_103_;
}
}
}
}
else
{
return v_b_102_;
}
v___jp_103_:
{
size_t v___x_105_; size_t v___x_106_; 
v___x_105_ = ((size_t)1ULL);
v___x_106_ = lean_usize_add(v_i_100_, v___x_105_);
v_i_100_ = v___x_106_;
v_b_102_ = v___y_104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__1___boxed(lean_object* v___x_133_, lean_object* v_as_134_, lean_object* v_i_135_, lean_object* v_stop_136_, lean_object* v_b_137_){
_start:
{
uint8_t v___x_424__boxed_138_; size_t v_i_boxed_139_; size_t v_stop_boxed_140_; lean_object* v_res_141_; 
v___x_424__boxed_138_ = lean_unbox(v___x_133_);
v_i_boxed_139_ = lean_unbox_usize(v_i_135_);
lean_dec(v_i_135_);
v_stop_boxed_140_ = lean_unbox_usize(v_stop_136_);
lean_dec(v_stop_136_);
v_res_141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__1(v___x_424__boxed_138_, v_as_134_, v_i_boxed_139_, v_stop_boxed_140_, v_b_137_);
lean_dec_ref(v_as_134_);
return v_res_141_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_shouldExpandMatchAlt(lean_object* v_x_153_){
_start:
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__4));
lean_inc(v_x_153_);
v___x_155_ = l_Lean_Syntax_isOfKind(v_x_153_, v___x_154_);
if (v___x_155_ == 0)
{
lean_dec(v_x_153_);
return v___x_155_;
}
else
{
lean_object* v___x_156_; lean_object* v___y_158_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_168_ = l_Lean_Syntax_getArg(v_x_153_, v___x_156_);
lean_dec(v_x_153_);
v___x_169_ = l_Lean_Syntax_getArgs(v___x_168_);
lean_dec(v___x_168_);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___x_172_ = lean_array_get_size(v___x_169_);
v___x_173_ = lean_nat_dec_lt(v___x_170_, v___x_172_);
if (v___x_173_ == 0)
{
lean_dec_ref(v___x_169_);
v___y_158_ = v___x_171_;
goto v___jp_157_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; size_t v___x_176_; size_t v___x_177_; lean_object* v___x_178_; lean_object* v_snd_179_; 
v___x_174_ = lean_box(v___x_173_);
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_171_);
v___x_176_ = ((size_t)0ULL);
v___x_177_ = lean_usize_of_nat(v___x_172_);
v___x_178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__1(v___x_155_, v___x_169_, v___x_176_, v___x_177_, v___x_175_);
lean_dec_ref(v___x_169_);
v_snd_179_ = lean_ctor_get(v___x_178_, 1);
lean_inc(v_snd_179_);
lean_dec_ref(v___x_178_);
v___y_158_ = v_snd_179_;
goto v___jp_157_;
}
v___jp_157_:
{
size_t v_sz_159_; size_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_sz_159_ = lean_array_size(v___y_158_);
v___x_160_ = ((size_t)0ULL);
v___x_161_ = l_unsafeCast___redArg(v___y_158_);
lean_dec_ref(v___y_158_);
v___x_162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_shouldExpandMatchAlt_spec__0(v_sz_159_, v___x_160_, v___x_161_);
v___x_163_ = l_unsafeCast___redArg(v___x_162_);
lean_dec(v___x_162_);
if (lean_obj_tag(v___x_163_) == 0)
{
uint8_t v___x_164_; 
v___x_164_ = 0;
return v___x_164_;
}
else
{
lean_object* v_val_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v_val_165_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_val_165_);
lean_dec_ref_known(v___x_163_, 1);
v___x_166_ = lean_array_get_size(v_val_165_);
lean_dec(v_val_165_);
v___x_167_ = lean_nat_dec_lt(v___x_156_, v___x_166_);
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_shouldExpandMatchAlt___boxed(lean_object* v_x_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Lean_Elab_Term_shouldExpandMatchAlt(v_x_180_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg(lean_object* v_as_183_, size_t v_i_184_, size_t v_stop_185_, lean_object* v_b_186_, lean_object* v___y_187_){
_start:
{
uint8_t v___x_188_; 
v___x_188_ = lean_usize_dec_eq(v_i_184_, v_stop_185_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; size_t v___x_192_; size_t v___x_193_; 
v___x_189_ = lean_array_uget_borrowed(v_as_183_, v_i_184_);
lean_inc(v___x_189_);
v___x_190_ = l_Lean_Elab_Term_expandMatchAlt(v___x_189_);
v___x_191_ = l_Array_append___redArg(v_b_186_, v___x_190_);
lean_dec_ref(v___x_190_);
v___x_192_ = ((size_t)1ULL);
v___x_193_ = lean_usize_add(v_i_184_, v___x_192_);
v_i_184_ = v___x_193_;
v_b_186_ = v___x_191_;
goto _start;
}
else
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v_b_186_);
lean_ctor_set(v___x_195_, 1, v___y_187_);
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg___boxed(lean_object* v_as_196_, lean_object* v_i_197_, lean_object* v_stop_198_, lean_object* v_b_199_, lean_object* v___y_200_){
_start:
{
size_t v_i_boxed_201_; size_t v_stop_boxed_202_; lean_object* v_res_203_; 
v_i_boxed_201_ = lean_unbox_usize(v_i_197_);
lean_dec(v_i_197_);
v_stop_boxed_202_ = lean_unbox_usize(v_stop_198_);
lean_dec(v_stop_198_);
v_res_203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg(v_as_196_, v_i_boxed_201_, v_stop_boxed_202_, v_b_199_, v___y_200_);
lean_dec_ref(v_as_196_);
return v_res_203_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__0(lean_object* v_as_204_, size_t v_i_205_, size_t v_stop_206_){
_start:
{
uint8_t v___x_207_; 
v___x_207_ = lean_usize_dec_eq(v_i_205_, v_stop_206_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = lean_array_uget_borrowed(v_as_204_, v_i_205_);
lean_inc(v___x_208_);
v___x_209_ = l_Lean_Elab_Term_shouldExpandMatchAlt(v___x_208_);
if (v___x_209_ == 0)
{
size_t v___x_210_; size_t v___x_211_; 
v___x_210_ = ((size_t)1ULL);
v___x_211_ = lean_usize_add(v_i_205_, v___x_210_);
v_i_205_ = v___x_211_;
goto _start;
}
else
{
return v___x_209_;
}
}
else
{
uint8_t v___x_213_; 
v___x_213_ = 0;
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__0___boxed(lean_object* v_as_214_, lean_object* v_i_215_, lean_object* v_stop_216_){
_start:
{
size_t v_i_boxed_217_; size_t v_stop_boxed_218_; uint8_t v_res_219_; lean_object* v_r_220_; 
v_i_boxed_217_ = lean_unbox_usize(v_i_215_);
lean_dec(v_i_215_);
v_stop_boxed_218_ = lean_unbox_usize(v_stop_216_);
lean_dec(v_stop_216_);
v_res_219_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__0(v_as_214_, v_i_boxed_217_, v_stop_boxed_218_);
lean_dec_ref(v_as_214_);
v_r_220_ = lean_box(v_res_219_);
return v_r_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand(lean_object* v_alts_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_a_230_; lean_object* v_a_231_; lean_object* v___y_235_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = lean_array_get_size(v_alts_223_);
v___x_249_ = lean_nat_dec_lt(v___x_247_, v___x_248_);
if (v___x_249_ == 0)
{
goto v___jp_226_;
}
else
{
if (v___x_249_ == 0)
{
goto v___jp_226_;
}
else
{
size_t v___x_250_; size_t v___x_251_; uint8_t v___x_252_; 
v___x_250_ = ((size_t)0ULL);
v___x_251_ = lean_usize_of_nat(v___x_248_);
v___x_252_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__0(v_alts_223_, v___x_250_, v___x_251_);
if (v___x_252_ == 0)
{
goto v___jp_226_;
}
else
{
lean_object* v___x_253_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand___closed__0));
if (v___x_249_ == 0)
{
v_a_230_ = v___x_253_;
v_a_231_ = v_a_225_;
goto v___jp_229_;
}
else
{
uint8_t v___x_254_; 
v___x_254_ = lean_nat_dec_le(v___x_248_, v___x_248_);
if (v___x_254_ == 0)
{
if (v___x_249_ == 0)
{
v_a_230_ = v___x_253_;
v_a_231_ = v_a_225_;
goto v___jp_229_;
}
else
{
lean_object* v___x_255_; 
v___x_255_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg(v_alts_223_, v___x_250_, v___x_251_, v___x_253_, v_a_225_);
v___y_235_ = v___x_255_;
goto v___jp_234_;
}
}
else
{
lean_object* v___x_256_; 
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg(v_alts_223_, v___x_250_, v___x_251_, v___x_253_, v_a_225_);
v___y_235_ = v___x_256_;
goto v___jp_234_;
}
}
}
}
}
v___jp_226_:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_box(0);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set(v___x_228_, 1, v_a_225_);
return v___x_228_;
}
v___jp_229_:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_232_, 0, v_a_230_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v_a_231_);
return v___x_233_;
}
v___jp_234_:
{
if (lean_obj_tag(v___y_235_) == 0)
{
lean_object* v_a_236_; lean_object* v_a_237_; 
v_a_236_ = lean_ctor_get(v___y_235_, 0);
lean_inc(v_a_236_);
v_a_237_ = lean_ctor_get(v___y_235_, 1);
lean_inc(v_a_237_);
lean_dec_ref_known(v___y_235_, 2);
v_a_230_ = v_a_236_;
v_a_231_ = v_a_237_;
goto v___jp_229_;
}
else
{
lean_object* v_a_238_; lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
v_a_238_ = lean_ctor_get(v___y_235_, 0);
v_a_239_ = lean_ctor_get(v___y_235_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v___y_235_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___y_235_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_inc(v_a_238_);
lean_dec(v___y_235_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_238_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand___boxed(lean_object* v_alts_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand(v_alts_257_, v_a_258_, v_a_259_);
lean_dec_ref(v_a_258_);
lean_dec_ref(v_alts_257_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1(lean_object* v_as_261_, size_t v_i_262_, size_t v_stop_263_, lean_object* v_b_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___redArg(v_as_261_, v_i_262_, v_stop_263_, v_b_264_, v___y_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1___boxed(lean_object* v_as_268_, lean_object* v_i_269_, lean_object* v_stop_270_, lean_object* v_b_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
size_t v_i_boxed_274_; size_t v_stop_boxed_275_; lean_object* v_res_276_; 
v_i_boxed_274_ = lean_unbox_usize(v_i_269_);
lean_dec(v_i_269_);
v_stop_boxed_275_ = lean_unbox_usize(v_stop_270_);
lean_dec(v_stop_270_);
v_res_276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand_spec__1(v_as_268_, v_i_boxed_274_, v_stop_boxed_275_, v_b_271_, v___y_272_, v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec_ref(v_as_268_);
return v_res_276_;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Array_mkArray0___redArg();
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f(lean_object* v_stx_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; uint8_t v___x_326_; 
v___x_300_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__0));
v___x_301_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1));
lean_inc(v_stx_297_);
v___x_326_ = l_Lean_Syntax_isOfKind(v_stx_297_, v___x_301_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v___y_339_; uint8_t v___x_353_; 
v___x_327_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__4));
lean_inc(v_stx_297_);
v___x_353_ = l_Lean_Syntax_isOfKind(v_stx_297_, v___x_327_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v___x_355_; 
lean_dec(v_stx_297_);
v___x_354_ = lean_box(0);
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v_a_299_);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_364_; lean_object* v___y_365_; lean_object* v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_377_; lean_object* v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v_motive_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___x_440_; lean_object* v___y_442_; lean_object* v_gen_443_; lean_object* v___y_444_; lean_object* v___y_445_; lean_object* v_dep_x3f_456_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_468_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_440_);
v___x_469_ = l_Lean_Syntax_isNone(v___x_468_);
if (v___x_469_ == 0)
{
uint8_t v___x_470_; 
lean_inc(v___x_468_);
v___x_470_ = l_Lean_Syntax_matchesNull(v___x_468_, v___x_440_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; 
lean_dec(v___x_468_);
lean_dec(v_stx_297_);
v___x_471_ = lean_box(0);
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set(v___x_472_, 1, v_a_299_);
return v___x_472_;
}
else
{
lean_object* v_dep_x3f_473_; lean_object* v___x_474_; 
v_dep_x3f_473_ = l_Lean_Syntax_getArg(v___x_468_, v___x_356_);
lean_dec(v___x_468_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v_dep_x3f_473_);
v_dep_x3f_456_ = v___x_474_;
v___y_457_ = v_a_298_;
v___y_458_ = v_a_299_;
goto v___jp_455_;
}
}
else
{
lean_object* v___x_475_; 
lean_dec(v___x_468_);
v___x_475_ = lean_box(0);
v_dep_x3f_456_ = v___x_475_;
v___y_457_ = v_a_298_;
v___y_458_ = v_a_299_;
goto v___jp_455_;
}
v___jp_357_:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
lean_inc_ref(v___y_358_);
v___x_369_ = l_Array_append___redArg(v___y_358_, v___y_368_);
lean_dec_ref(v___y_368_);
lean_inc(v___y_366_);
lean_inc(v___y_360_);
v___x_370_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_370_, 0, v___y_360_);
lean_ctor_set(v___x_370_, 1, v___y_366_);
lean_ctor_set(v___x_370_, 2, v___x_369_);
if (lean_obj_tag(v___y_367_) == 1)
{
lean_object* v_val_371_; lean_object* v___x_372_; 
v_val_371_ = lean_ctor_get(v___y_367_, 0);
lean_inc(v_val_371_);
lean_dec_ref_known(v___y_367_, 1);
v___x_372_ = l_Array_mkArray1___redArg(v_val_371_);
v___y_329_ = v___y_358_;
v___y_330_ = v___y_359_;
v___y_331_ = v___y_360_;
v___y_332_ = v___y_361_;
v___y_333_ = v___y_362_;
v___y_334_ = v___y_363_;
v___y_335_ = v___x_370_;
v___y_336_ = v___y_364_;
v___y_337_ = v___y_365_;
v___y_338_ = v___y_366_;
v___y_339_ = v___x_372_;
goto v___jp_328_;
}
else
{
lean_object* v___x_373_; 
lean_dec(v___y_367_);
v___x_373_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_329_ = v___y_358_;
v___y_330_ = v___y_359_;
v___y_331_ = v___y_360_;
v___y_332_ = v___y_361_;
v___y_333_ = v___y_362_;
v___y_334_ = v___y_363_;
v___y_335_ = v___x_370_;
v___y_336_ = v___y_364_;
v___y_337_ = v___y_365_;
v___y_338_ = v___y_366_;
v___y_339_ = v___x_373_;
goto v___jp_328_;
}
}
v___jp_374_:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
lean_inc_ref(v___y_375_);
v___x_386_ = l_Array_append___redArg(v___y_375_, v___y_385_);
lean_dec_ref(v___y_385_);
lean_inc(v___y_383_);
lean_inc(v___y_377_);
v___x_387_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_387_, 0, v___y_377_);
lean_ctor_set(v___x_387_, 1, v___y_383_);
lean_ctor_set(v___x_387_, 2, v___x_386_);
if (lean_obj_tag(v___y_379_) == 1)
{
lean_object* v_val_388_; lean_object* v___x_389_; 
v_val_388_ = lean_ctor_get(v___y_379_, 0);
lean_inc(v_val_388_);
lean_dec_ref_known(v___y_379_, 1);
v___x_389_ = l_Array_mkArray1___redArg(v_val_388_);
v___y_358_ = v___y_375_;
v___y_359_ = v___y_376_;
v___y_360_ = v___y_377_;
v___y_361_ = v___x_387_;
v___y_362_ = v___y_378_;
v___y_363_ = v___y_380_;
v___y_364_ = v___y_381_;
v___y_365_ = v___y_382_;
v___y_366_ = v___y_383_;
v___y_367_ = v___y_384_;
v___y_368_ = v___x_389_;
goto v___jp_357_;
}
else
{
lean_object* v___x_390_; 
lean_dec(v___y_379_);
v___x_390_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_358_ = v___y_375_;
v___y_359_ = v___y_376_;
v___y_360_ = v___y_377_;
v___y_361_ = v___x_387_;
v___y_362_ = v___y_378_;
v___y_363_ = v___y_380_;
v___y_364_ = v___y_381_;
v___y_365_ = v___y_382_;
v___y_366_ = v___y_383_;
v___y_367_ = v___y_384_;
v___y_368_ = v___x_390_;
goto v___jp_357_;
}
}
v___jp_391_:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_397_ = lean_unsigned_to_nat(6u);
v___x_398_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_397_);
v___x_399_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6));
lean_inc(v___x_398_);
v___x_400_ = l_Lean_Syntax_isOfKind(v___x_398_, v___x_399_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; 
lean_dec(v___x_398_);
lean_dec(v_motive_394_);
lean_dec(v___y_393_);
lean_dec(v___y_392_);
lean_dec(v_stx_297_);
v___x_401_ = lean_box(0);
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___y_396_);
return v___x_402_;
}
else
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v_alts_405_; lean_object* v___x_406_; 
v___x_403_ = l_Lean_Syntax_getArg(v___x_398_, v___x_356_);
lean_dec(v___x_398_);
v___x_404_ = l_Lean_Syntax_getArgs(v___x_403_);
lean_dec(v___x_403_);
v_alts_405_ = l_unsafeCast___redArg(v___x_404_);
lean_dec_ref(v___x_404_);
v___x_406_ = l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand(v_alts_405_, v___y_395_, v___y_396_);
lean_dec(v_alts_405_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
if (lean_obj_tag(v_a_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_motive_394_);
lean_dec(v___y_393_);
lean_dec(v___y_392_);
lean_dec(v_stx_297_);
v_a_408_ = lean_ctor_get(v___x_406_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; 
v_unused_417_ = lean_ctor_get(v___x_406_, 0);
lean_dec(v_unused_417_);
v___x_410_ = v___x_406_;
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_406_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_412_ = lean_box(0);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_412_);
v___x_414_ = v___x_410_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_a_408_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_object* v_a_418_; lean_object* v_val_419_; lean_object* v_ref_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_a_418_ = lean_ctor_get(v___x_406_, 1);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_406_, 2);
v_val_419_ = lean_ctor_get(v_a_407_, 0);
lean_inc(v_val_419_);
lean_dec_ref_known(v_a_407_, 1);
v_ref_420_ = lean_ctor_get(v___y_395_, 5);
v___x_421_ = lean_unsigned_to_nat(4u);
v___x_422_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_421_);
lean_dec(v_stx_297_);
v___x_423_ = l_Lean_Syntax_getArgs(v___x_422_);
lean_dec(v___x_422_);
v___x_424_ = l_Lean_SourceInfo_fromRef(v_ref_420_, v___x_326_);
lean_inc(v___x_424_);
v___x_425_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set(v___x_425_, 1, v___x_300_);
v___x_426_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1));
v___x_427_ = lean_obj_once(&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7, &l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7_once, _init_l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7);
if (lean_obj_tag(v___y_393_) == 1)
{
lean_object* v_val_428_; lean_object* v___x_429_; 
v_val_428_ = lean_ctor_get(v___y_393_, 0);
lean_inc(v_val_428_);
lean_dec_ref_known(v___y_393_, 1);
v___x_429_ = l_Array_mkArray1___redArg(v_val_428_);
v___y_375_ = v___x_427_;
v___y_376_ = v___x_423_;
v___y_377_ = v___x_424_;
v___y_378_ = v_a_418_;
v___y_379_ = v___y_392_;
v___y_380_ = v___x_399_;
v___y_381_ = v___x_425_;
v___y_382_ = v_val_419_;
v___y_383_ = v___x_426_;
v___y_384_ = v_motive_394_;
v___y_385_ = v___x_429_;
goto v___jp_374_;
}
else
{
lean_object* v___x_430_; 
lean_dec(v___y_393_);
v___x_430_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_375_ = v___x_427_;
v___y_376_ = v___x_423_;
v___y_377_ = v___x_424_;
v___y_378_ = v_a_418_;
v___y_379_ = v___y_392_;
v___y_380_ = v___x_399_;
v___y_381_ = v___x_425_;
v___y_382_ = v_val_419_;
v___y_383_ = v___x_426_;
v___y_384_ = v_motive_394_;
v___y_385_ = v___x_430_;
goto v___jp_374_;
}
}
}
else
{
lean_object* v_a_431_; lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec(v_motive_394_);
lean_dec(v___y_393_);
lean_dec(v___y_392_);
lean_dec(v_stx_297_);
v_a_431_ = lean_ctor_get(v___x_406_, 0);
v_a_432_ = lean_ctor_get(v___x_406_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_406_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_inc(v_a_431_);
lean_dec(v___x_406_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_431_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
v___jp_441_:
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_unsigned_to_nat(3u);
v___x_447_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_446_);
v___x_448_ = l_Lean_Syntax_isNone(v___x_447_);
if (v___x_448_ == 0)
{
uint8_t v___x_449_; 
lean_inc(v___x_447_);
v___x_449_ = l_Lean_Syntax_matchesNull(v___x_447_, v___x_440_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v___x_447_);
lean_dec(v_gen_443_);
lean_dec(v___y_442_);
lean_dec(v_stx_297_);
v___x_450_ = lean_box(0);
v___x_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___y_445_);
return v___x_451_;
}
else
{
lean_object* v_motive_452_; lean_object* v___x_453_; 
v_motive_452_ = l_Lean_Syntax_getArg(v___x_447_, v___x_356_);
lean_dec(v___x_447_);
v___x_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_453_, 0, v_motive_452_);
v___y_392_ = v_gen_443_;
v___y_393_ = v___y_442_;
v_motive_394_ = v___x_453_;
v___y_395_ = v___y_444_;
v___y_396_ = v___y_445_;
goto v___jp_391_;
}
}
else
{
lean_object* v___x_454_; 
lean_dec(v___x_447_);
v___x_454_ = lean_box(0);
v___y_392_ = v_gen_443_;
v___y_393_ = v___y_442_;
v_motive_394_ = v___x_454_;
v___y_395_ = v___y_444_;
v___y_396_ = v___y_445_;
goto v___jp_391_;
}
}
v___jp_455_:
{
lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_459_ = lean_unsigned_to_nat(2u);
v___x_460_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_459_);
v___x_461_ = l_Lean_Syntax_isNone(v___x_460_);
if (v___x_461_ == 0)
{
uint8_t v___x_462_; 
lean_inc(v___x_460_);
v___x_462_ = l_Lean_Syntax_matchesNull(v___x_460_, v___x_440_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec(v___x_460_);
lean_dec(v_dep_x3f_456_);
lean_dec(v_stx_297_);
v___x_463_ = lean_box(0);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v___y_458_);
return v___x_464_;
}
else
{
lean_object* v_gen_465_; lean_object* v___x_466_; 
v_gen_465_ = l_Lean_Syntax_getArg(v___x_460_, v___x_356_);
lean_dec(v___x_460_);
v___x_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_466_, 0, v_gen_465_);
v___y_442_ = v_dep_x3f_456_;
v_gen_443_ = v___x_466_;
v___y_444_ = v___y_457_;
v___y_445_ = v___y_458_;
goto v___jp_441_;
}
}
else
{
lean_object* v___x_467_; 
lean_dec(v___x_460_);
v___x_467_ = lean_box(0);
v___y_442_ = v_dep_x3f_456_;
v_gen_443_ = v___x_467_;
v___y_444_ = v___y_457_;
v___y_445_ = v___y_458_;
goto v___jp_441_;
}
}
}
v___jp_328_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
lean_inc_ref_n(v___y_329_, 3);
v___x_340_ = l_Array_append___redArg(v___y_329_, v___y_339_);
lean_dec_ref(v___y_339_);
lean_inc_n(v___y_338_, 3);
lean_inc_n(v___y_331_, 5);
v___x_341_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_341_, 0, v___y_331_);
lean_ctor_set(v___x_341_, 1, v___y_338_);
lean_ctor_set(v___x_341_, 2, v___x_340_);
v___x_342_ = l_Array_append___redArg(v___y_329_, v___y_330_);
lean_dec_ref(v___y_330_);
v___x_343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_343_, 0, v___y_331_);
lean_ctor_set(v___x_343_, 1, v___y_338_);
lean_ctor_set(v___x_343_, 2, v___x_342_);
v___x_344_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__2));
v___x_345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_345_, 0, v___y_331_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = l_unsafeCast___redArg(v___y_337_);
lean_dec_ref(v___y_337_);
v___x_347_ = l_Array_append___redArg(v___y_329_, v___x_346_);
lean_dec(v___x_346_);
v___x_348_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_348_, 0, v___y_331_);
lean_ctor_set(v___x_348_, 1, v___y_338_);
lean_ctor_set(v___x_348_, 2, v___x_347_);
lean_inc(v___y_334_);
v___x_349_ = l_Lean_Syntax_node1(v___y_331_, v___y_334_, v___x_348_);
v___x_350_ = l_Lean_Syntax_node7(v___y_331_, v___x_327_, v___y_336_, v___y_332_, v___y_335_, v___x_341_, v___x_343_, v___x_345_, v___x_349_);
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
lean_ctor_set(v___x_352_, 1, v___y_333_);
return v___x_352_;
}
}
else
{
lean_object* v___x_476_; lean_object* v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; lean_object* v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_494_; lean_object* v_motive_495_; lean_object* v___y_496_; lean_object* v___y_497_; lean_object* v___x_542_; lean_object* v_gen_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_556_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_542_);
v___x_557_ = l_Lean_Syntax_isNone(v___x_556_);
if (v___x_557_ == 0)
{
uint8_t v___x_558_; 
lean_inc(v___x_556_);
v___x_558_ = l_Lean_Syntax_matchesNull(v___x_556_, v___x_542_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v___x_556_);
lean_dec(v_stx_297_);
v___x_559_ = lean_box(0);
v___x_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
lean_ctor_set(v___x_560_, 1, v_a_299_);
return v___x_560_;
}
else
{
lean_object* v_gen_561_; lean_object* v___x_562_; 
v_gen_561_ = l_Lean_Syntax_getArg(v___x_556_, v___x_476_);
lean_dec(v___x_556_);
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v_gen_561_);
v_gen_544_ = v___x_562_;
v___y_545_ = v_a_298_;
v___y_546_ = v_a_299_;
goto v___jp_543_;
}
}
else
{
lean_object* v___x_563_; 
lean_dec(v___x_556_);
v___x_563_ = lean_box(0);
v_gen_544_ = v___x_563_;
v___y_545_ = v_a_298_;
v___y_546_ = v_a_299_;
goto v___jp_543_;
}
v___jp_477_:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_inc_ref(v___y_481_);
v___x_488_ = l_Array_append___redArg(v___y_481_, v___y_487_);
lean_dec_ref(v___y_487_);
lean_inc(v___y_486_);
lean_inc(v___y_478_);
v___x_489_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_489_, 0, v___y_478_);
lean_ctor_set(v___x_489_, 1, v___y_486_);
lean_ctor_set(v___x_489_, 2, v___x_488_);
if (lean_obj_tag(v___y_484_) == 1)
{
lean_object* v_val_490_; lean_object* v___x_491_; 
v_val_490_ = lean_ctor_get(v___y_484_, 0);
lean_inc(v_val_490_);
lean_dec_ref_known(v___y_484_, 1);
v___x_491_ = l_Array_mkArray1___redArg(v_val_490_);
v___y_303_ = v___y_478_;
v___y_304_ = v___y_479_;
v___y_305_ = v___y_480_;
v___y_306_ = v___y_481_;
v___y_307_ = v___y_483_;
v___y_308_ = v___y_482_;
v___y_309_ = v___x_489_;
v___y_310_ = v___y_485_;
v___y_311_ = v___y_486_;
v___y_312_ = v___x_491_;
goto v___jp_302_;
}
else
{
lean_object* v___x_492_; 
lean_dec(v___y_484_);
v___x_492_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_303_ = v___y_478_;
v___y_304_ = v___y_479_;
v___y_305_ = v___y_480_;
v___y_306_ = v___y_481_;
v___y_307_ = v___y_483_;
v___y_308_ = v___y_482_;
v___y_309_ = v___x_489_;
v___y_310_ = v___y_485_;
v___y_311_ = v___y_486_;
v___y_312_ = v___x_492_;
goto v___jp_302_;
}
}
v___jp_493_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_498_ = lean_unsigned_to_nat(5u);
v___x_499_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_498_);
v___x_500_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6));
lean_inc(v___x_499_);
v___x_501_ = l_Lean_Syntax_isOfKind(v___x_499_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec(v___x_499_);
lean_dec(v_motive_495_);
lean_dec(v___y_494_);
lean_dec(v_stx_297_);
v___x_502_ = lean_box(0);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___y_497_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v_alts_506_; lean_object* v___x_507_; 
v___x_504_ = l_Lean_Syntax_getArg(v___x_499_, v___x_476_);
lean_dec(v___x_499_);
v___x_505_ = l_Lean_Syntax_getArgs(v___x_504_);
lean_dec(v___x_504_);
v_alts_506_ = l_unsafeCast___redArg(v___x_505_);
lean_dec_ref(v___x_505_);
v___x_507_ = l___private_Lean_Elab_BindersUtil_0__Lean_Elab_Term_expandMatchAlts_x3f_expand(v_alts_506_, v___y_496_, v___y_497_);
lean_dec(v_alts_506_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_a_508_);
if (lean_obj_tag(v_a_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_517_; 
lean_dec(v_motive_495_);
lean_dec(v___y_494_);
lean_dec(v_stx_297_);
v_a_509_ = lean_ctor_get(v___x_507_, 1);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_517_ == 0)
{
lean_object* v_unused_518_; 
v_unused_518_ = lean_ctor_get(v___x_507_, 0);
lean_dec(v_unused_518_);
v___x_511_ = v___x_507_;
v_isShared_512_ = v_isSharedCheck_517_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_507_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_517_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_513_ = lean_box(0);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v___x_513_);
v___x_515_ = v___x_511_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v_a_509_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
else
{
lean_object* v_a_519_; lean_object* v_val_520_; lean_object* v_ref_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_a_519_ = lean_ctor_get(v___x_507_, 1);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_507_, 2);
v_val_520_ = lean_ctor_get(v_a_508_, 0);
lean_inc(v_val_520_);
lean_dec_ref_known(v_a_508_, 1);
v_ref_521_ = lean_ctor_get(v___y_496_, 5);
v___x_522_ = lean_unsigned_to_nat(3u);
v___x_523_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_522_);
lean_dec(v_stx_297_);
v___x_524_ = l_Lean_Syntax_getArgs(v___x_523_);
lean_dec(v___x_523_);
v___x_525_ = 0;
v___x_526_ = l_Lean_SourceInfo_fromRef(v_ref_521_, v___x_525_);
lean_inc(v___x_526_);
v___x_527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
lean_ctor_set(v___x_527_, 1, v___x_300_);
v___x_528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1));
v___x_529_ = lean_obj_once(&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7, &l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7_once, _init_l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7);
if (lean_obj_tag(v___y_494_) == 1)
{
lean_object* v_val_530_; lean_object* v___x_531_; 
v_val_530_ = lean_ctor_get(v___y_494_, 0);
lean_inc(v_val_530_);
lean_dec_ref_known(v___y_494_, 1);
v___x_531_ = l_Array_mkArray1___redArg(v_val_530_);
v___y_478_ = v___x_526_;
v___y_479_ = v___x_500_;
v___y_480_ = v_a_519_;
v___y_481_ = v___x_529_;
v___y_482_ = v_val_520_;
v___y_483_ = v___x_527_;
v___y_484_ = v_motive_495_;
v___y_485_ = v___x_524_;
v___y_486_ = v___x_528_;
v___y_487_ = v___x_531_;
goto v___jp_477_;
}
else
{
lean_object* v___x_532_; 
lean_dec(v___y_494_);
v___x_532_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_478_ = v___x_526_;
v___y_479_ = v___x_500_;
v___y_480_ = v_a_519_;
v___y_481_ = v___x_529_;
v___y_482_ = v_val_520_;
v___y_483_ = v___x_527_;
v___y_484_ = v_motive_495_;
v___y_485_ = v___x_524_;
v___y_486_ = v___x_528_;
v___y_487_ = v___x_532_;
goto v___jp_477_;
}
}
}
else
{
lean_object* v_a_533_; lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v_motive_495_);
lean_dec(v___y_494_);
lean_dec(v_stx_297_);
v_a_533_ = lean_ctor_get(v___x_507_, 0);
v_a_534_ = lean_ctor_get(v___x_507_, 1);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_507_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_inc(v_a_533_);
lean_dec(v___x_507_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_533_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
}
v___jp_543_:
{
lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_547_ = lean_unsigned_to_nat(2u);
v___x_548_ = l_Lean_Syntax_getArg(v_stx_297_, v___x_547_);
v___x_549_ = l_Lean_Syntax_isNone(v___x_548_);
if (v___x_549_ == 0)
{
uint8_t v___x_550_; 
lean_inc(v___x_548_);
v___x_550_ = l_Lean_Syntax_matchesNull(v___x_548_, v___x_542_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v___x_548_);
lean_dec(v_gen_544_);
lean_dec(v_stx_297_);
v___x_551_ = lean_box(0);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
lean_ctor_set(v___x_552_, 1, v___y_546_);
return v___x_552_;
}
else
{
lean_object* v_motive_553_; lean_object* v___x_554_; 
v_motive_553_ = l_Lean_Syntax_getArg(v___x_548_, v___x_476_);
lean_dec(v___x_548_);
v___x_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_554_, 0, v_motive_553_);
v___y_494_ = v_gen_544_;
v_motive_495_ = v___x_554_;
v___y_496_ = v___y_545_;
v___y_497_ = v___y_546_;
goto v___jp_493_;
}
}
else
{
lean_object* v___x_555_; 
lean_dec(v___x_548_);
v___x_555_ = lean_box(0);
v___y_494_ = v_gen_544_;
v_motive_495_ = v___x_555_;
v___y_496_ = v___y_545_;
v___y_497_ = v___y_546_;
goto v___jp_493_;
}
}
}
v___jp_302_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
lean_inc_ref_n(v___y_306_, 3);
v___x_313_ = l_Array_append___redArg(v___y_306_, v___y_312_);
lean_dec_ref(v___y_312_);
lean_inc_n(v___y_311_, 3);
lean_inc_n(v___y_303_, 5);
v___x_314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_314_, 0, v___y_303_);
lean_ctor_set(v___x_314_, 1, v___y_311_);
lean_ctor_set(v___x_314_, 2, v___x_313_);
v___x_315_ = l_Array_append___redArg(v___y_306_, v___y_310_);
lean_dec_ref(v___y_310_);
v___x_316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_316_, 0, v___y_303_);
lean_ctor_set(v___x_316_, 1, v___y_311_);
lean_ctor_set(v___x_316_, 2, v___x_315_);
v___x_317_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__2));
v___x_318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_318_, 0, v___y_303_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = l_unsafeCast___redArg(v___y_308_);
lean_dec_ref(v___y_308_);
v___x_320_ = l_Array_append___redArg(v___y_306_, v___x_319_);
lean_dec(v___x_319_);
v___x_321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_321_, 0, v___y_303_);
lean_ctor_set(v___x_321_, 1, v___y_311_);
lean_ctor_set(v___x_321_, 2, v___x_320_);
lean_inc(v___y_304_);
v___x_322_ = l_Lean_Syntax_node1(v___y_303_, v___y_304_, v___x_321_);
v___x_323_ = l_Lean_Syntax_node6(v___y_303_, v___x_301_, v___y_307_, v___y_309_, v___x_314_, v___x_316_, v___x_318_, v___x_322_);
v___x_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___y_305_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAlts_x3f___boxed(lean_object* v_stx_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Elab_Term_expandMatchAlts_x3f(v_stx_564_, v_a_565_, v_a_566_);
lean_dec_ref(v_a_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0(lean_object* v_as_576_, size_t v_sz_577_, size_t v_i_578_, lean_object* v_b_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
uint8_t v___x_582_; 
v___x_582_ = lean_usize_dec_lt(v_i_578_, v_sz_577_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_b_579_);
lean_ctor_set(v___x_583_, 1, v___y_581_);
return v___x_583_;
}
else
{
lean_object* v_ref_584_; lean_object* v_a_585_; uint8_t v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; size_t v___x_594_; size_t v___x_595_; 
v_ref_584_ = lean_ctor_get(v___y_580_, 0);
v_a_585_ = lean_array_uget_borrowed(v_as_576_, v_i_578_);
v___x_586_ = 0;
v___x_587_ = l_Lean_SourceInfo_fromRef(v_ref_584_, v___x_586_);
v___x_588_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__1));
v___x_589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__2));
lean_inc_n(v___x_587_, 2);
v___x_590_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_587_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___closed__3));
v___x_592_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_587_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
lean_inc(v_a_585_);
v___x_593_ = l_Lean_Syntax_node4(v___x_587_, v___x_588_, v___x_590_, v_a_585_, v___x_592_, v_b_579_);
v___x_594_ = ((size_t)1ULL);
v___x_595_ = lean_usize_add(v_i_578_, v___x_594_);
v_i_578_ = v___x_595_;
v_b_579_ = v___x_593_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0___boxed(lean_object* v_as_597_, lean_object* v_sz_598_, lean_object* v_i_599_, lean_object* v_b_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
size_t v_sz_boxed_603_; size_t v_i_boxed_604_; lean_object* v_res_605_; 
v_sz_boxed_603_ = lean_unbox_usize(v_sz_598_);
lean_dec(v_sz_598_);
v_i_boxed_604_ = lean_unbox_usize(v_i_599_);
lean_dec(v_i_599_);
v_res_605_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0(v_as_597_, v_sz_boxed_603_, v_i_boxed_604_, v_b_600_, v___y_601_, v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec_ref(v_as_597_);
return v_res_605_;
}
}
static lean_object* _init_l_Lean_Elab_Term_clearInMatchAlt___closed__0(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = l_Lean_firstFrontendMacroScope;
v___x_607_ = lean_box(0);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v___x_606_);
return v___x_608_;
}
}
static lean_object* _init_l_Lean_Elab_Term_clearInMatchAlt___closed__1(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = l_Lean_firstFrontendMacroScope;
v___x_611_ = lean_nat_add(v___x_610_, v___x_609_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_Elab_Term_clearInMatchAlt___closed__2(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_box(0);
v___x_613_ = l_unsafeCast___redArg(v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatchAlt(lean_object* v_stx_614_, lean_object* v_vars_615_){
_start:
{
if (lean_obj_tag(v_stx_614_) == 1)
{
lean_object* v_info_616_; lean_object* v_kind_617_; lean_object* v_args_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v_info_616_ = lean_ctor_get(v_stx_614_, 0);
v_kind_617_ = lean_ctor_get(v_stx_614_, 1);
v_args_618_ = lean_ctor_get(v_stx_614_, 2);
v___x_619_ = lean_unsigned_to_nat(3u);
v___x_620_ = lean_array_get_size(v_args_618_);
v___x_621_ = lean_nat_dec_lt(v___x_619_, v___x_620_);
if (v___x_621_ == 0)
{
return v_stx_614_;
}
else
{
lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_638_; 
lean_inc_ref(v_args_618_);
lean_inc(v_kind_617_);
lean_inc(v_info_616_);
v_isSharedCheck_638_ = !lean_is_exclusive(v_stx_614_);
if (v_isSharedCheck_638_ == 0)
{
lean_object* v_unused_639_; lean_object* v_unused_640_; lean_object* v_unused_641_; 
v_unused_639_ = lean_ctor_get(v_stx_614_, 2);
lean_dec(v_unused_639_);
v_unused_640_ = lean_ctor_get(v_stx_614_, 1);
lean_dec(v_unused_640_);
v_unused_641_ = lean_ctor_get(v_stx_614_, 0);
lean_dec(v_unused_641_);
v___x_623_ = v_stx_614_;
v_isShared_624_ = v_isSharedCheck_638_;
goto v_resetjp_622_;
}
else
{
lean_dec(v_stx_614_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_638_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_v_625_; size_t v_sz_626_; size_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v_fst_631_; lean_object* v___x_632_; lean_object* v_xs_x27_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
v_v_625_ = lean_array_fget_borrowed(v_args_618_, v___x_619_);
v_sz_626_ = lean_array_size(v_vars_615_);
v___x_627_ = ((size_t)0ULL);
v___x_628_ = lean_obj_once(&l_Lean_Elab_Term_clearInMatchAlt___closed__0, &l_Lean_Elab_Term_clearInMatchAlt___closed__0_once, _init_l_Lean_Elab_Term_clearInMatchAlt___closed__0);
v___x_629_ = lean_obj_once(&l_Lean_Elab_Term_clearInMatchAlt___closed__1, &l_Lean_Elab_Term_clearInMatchAlt___closed__1_once, _init_l_Lean_Elab_Term_clearInMatchAlt___closed__1);
lean_inc(v_v_625_);
v___x_630_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_clearInMatchAlt_spec__0(v_vars_615_, v_sz_626_, v___x_627_, v_v_625_, v___x_628_, v___x_629_);
v_fst_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_fst_631_);
lean_dec_ref(v___x_630_);
v___x_632_ = lean_obj_once(&l_Lean_Elab_Term_clearInMatchAlt___closed__2, &l_Lean_Elab_Term_clearInMatchAlt___closed__2_once, _init_l_Lean_Elab_Term_clearInMatchAlt___closed__2);
v_xs_x27_633_ = lean_array_fset(v_args_618_, v___x_619_, v___x_632_);
v___x_634_ = lean_array_fset(v_xs_x27_633_, v___x_619_, v_fst_631_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 2, v___x_634_);
v___x_636_ = v___x_623_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_info_616_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_kind_617_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v___x_634_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
else
{
return v_stx_614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatchAlt___boxed(lean_object* v_stx_642_, lean_object* v_vars_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_Elab_Term_clearInMatchAlt(v_stx_642_, v_vars_643_);
lean_dec_ref(v_vars_643_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_clearInMatch_spec__0(lean_object* v_vars_645_, size_t v_sz_646_, size_t v_i_647_, lean_object* v_bs_648_){
_start:
{
uint8_t v___x_649_; 
v___x_649_ = lean_usize_dec_lt(v_i_647_, v_sz_646_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; 
v___x_650_ = l_unsafeCast___redArg(v_bs_648_);
lean_dec_ref(v_bs_648_);
return v___x_650_;
}
else
{
lean_object* v_v_651_; lean_object* v___x_652_; lean_object* v_bs_x27_653_; lean_object* v___x_654_; lean_object* v___x_655_; size_t v___x_656_; size_t v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_v_651_ = lean_array_uget(v_bs_648_, v_i_647_);
v___x_652_ = lean_unsigned_to_nat(0u);
v_bs_x27_653_ = lean_array_uset(v_bs_648_, v_i_647_, v___x_652_);
v___x_654_ = l_unsafeCast___redArg(v_v_651_);
lean_dec(v_v_651_);
v___x_655_ = l_Lean_Elab_Term_clearInMatchAlt(v___x_654_, v_vars_645_);
v___x_656_ = ((size_t)1ULL);
v___x_657_ = lean_usize_add(v_i_647_, v___x_656_);
v___x_658_ = l_unsafeCast___redArg(v___x_655_);
lean_dec(v___x_655_);
v___x_659_ = lean_array_uset(v_bs_x27_653_, v_i_647_, v___x_658_);
v_i_647_ = v___x_657_;
v_bs_648_ = v___x_659_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_clearInMatch_spec__0___boxed(lean_object* v_vars_661_, lean_object* v_sz_662_, lean_object* v_i_663_, lean_object* v_bs_664_){
_start:
{
size_t v_sz_boxed_665_; size_t v_i_boxed_666_; lean_object* v_res_667_; 
v_sz_boxed_665_ = lean_unbox_usize(v_sz_662_);
lean_dec(v_sz_662_);
v_i_boxed_666_ = lean_unbox_usize(v_i_663_);
lean_dec(v_i_663_);
v_res_667_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_clearInMatch_spec__0(v_vars_661_, v_sz_boxed_665_, v_i_boxed_666_, v_bs_664_);
lean_dec_ref(v_vars_661_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatch(lean_object* v_stx_668_, lean_object* v_vars_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_672_ = lean_array_get_size(v_vars_669_);
v___x_673_ = lean_unsigned_to_nat(0u);
v___x_674_ = lean_nat_dec_eq(v___x_672_, v___x_673_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_717_; lean_object* v_motive_718_; lean_object* v___y_719_; lean_object* v___y_720_; uint8_t v___x_745_; 
v___x_675_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__0));
v___x_676_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__1));
lean_inc(v_stx_668_);
v___x_745_ = l_Lean_Syntax_isOfKind(v_stx_668_, v___x_676_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_746_, 0, v_stx_668_);
lean_ctor_set(v___x_746_, 1, v_a_671_);
return v___x_746_;
}
else
{
lean_object* v___x_747_; lean_object* v_gen_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_747_ = lean_unsigned_to_nat(1u);
v___x_760_ = l_Lean_Syntax_getArg(v_stx_668_, v___x_747_);
v___x_761_ = l_Lean_Syntax_isNone(v___x_760_);
if (v___x_761_ == 0)
{
uint8_t v___x_762_; 
lean_inc(v___x_760_);
v___x_762_ = l_Lean_Syntax_matchesNull(v___x_760_, v___x_747_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
lean_dec(v___x_760_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v_stx_668_);
lean_ctor_set(v___x_763_, 1, v_a_671_);
return v___x_763_;
}
else
{
lean_object* v_gen_764_; lean_object* v___x_765_; 
v_gen_764_ = l_Lean_Syntax_getArg(v___x_760_, v___x_673_);
lean_dec(v___x_760_);
v___x_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_765_, 0, v_gen_764_);
v_gen_749_ = v___x_765_;
v___y_750_ = v_a_670_;
v___y_751_ = v_a_671_;
goto v___jp_748_;
}
}
else
{
lean_object* v___x_766_; 
lean_dec(v___x_760_);
v___x_766_ = lean_box(0);
v_gen_749_ = v___x_766_;
v___y_750_ = v_a_670_;
v___y_751_ = v_a_671_;
goto v___jp_748_;
}
v___jp_748_:
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_unsigned_to_nat(2u);
v___x_753_ = l_Lean_Syntax_getArg(v_stx_668_, v___x_752_);
v___x_754_ = l_Lean_Syntax_isNone(v___x_753_);
if (v___x_754_ == 0)
{
uint8_t v___x_755_; 
lean_inc(v___x_753_);
v___x_755_ = l_Lean_Syntax_matchesNull(v___x_753_, v___x_747_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; 
lean_dec(v___x_753_);
lean_dec(v_gen_749_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v_stx_668_);
lean_ctor_set(v___x_756_, 1, v___y_751_);
return v___x_756_;
}
else
{
lean_object* v_motive_757_; lean_object* v___x_758_; 
v_motive_757_ = l_Lean_Syntax_getArg(v___x_753_, v___x_673_);
lean_dec(v___x_753_);
v___x_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_758_, 0, v_motive_757_);
v___y_717_ = v_gen_749_;
v_motive_718_ = v___x_758_;
v___y_719_ = v___y_750_;
v___y_720_ = v___y_751_;
goto v___jp_716_;
}
}
else
{
lean_object* v___x_759_; 
lean_dec(v___x_753_);
v___x_759_ = lean_box(0);
v___y_717_ = v_gen_749_;
v_motive_718_ = v___x_759_;
v___y_719_ = v___y_750_;
v___y_720_ = v___y_751_;
goto v___jp_716_;
}
}
}
v___jp_677_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_inc_ref_n(v___y_686_, 3);
v___x_688_ = l_Array_append___redArg(v___y_686_, v___y_687_);
lean_dec_ref(v___y_687_);
lean_inc_n(v___y_681_, 3);
lean_inc_n(v___y_684_, 5);
v___x_689_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_689_, 0, v___y_684_);
lean_ctor_set(v___x_689_, 1, v___y_681_);
lean_ctor_set(v___x_689_, 2, v___x_688_);
v___x_690_ = l_Array_append___redArg(v___y_686_, v___y_682_);
lean_dec_ref(v___y_682_);
v___x_691_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_691_, 0, v___y_684_);
lean_ctor_set(v___x_691_, 1, v___y_681_);
lean_ctor_set(v___x_691_, 2, v___x_690_);
v___x_692_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__2));
v___x_693_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_693_, 0, v___y_684_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = l_unsafeCast___redArg(v___y_685_);
lean_dec(v___y_685_);
v___x_695_ = l_Array_append___redArg(v___y_686_, v___x_694_);
lean_dec(v___x_694_);
v___x_696_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_696_, 0, v___y_684_);
lean_ctor_set(v___x_696_, 1, v___y_681_);
lean_ctor_set(v___x_696_, 2, v___x_695_);
lean_inc(v___y_680_);
v___x_697_ = l_Lean_Syntax_node1(v___y_684_, v___y_680_, v___x_696_);
v___x_698_ = l_Lean_Syntax_node6(v___y_684_, v___x_676_, v___y_683_, v___y_678_, v___x_689_, v___x_691_, v___x_693_, v___x_697_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v___y_679_);
return v___x_699_;
}
v___jp_700_:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
lean_inc_ref(v___y_709_);
v___x_711_ = l_Array_append___redArg(v___y_709_, v___y_710_);
lean_dec_ref(v___y_710_);
lean_inc(v___y_704_);
lean_inc(v___y_707_);
v___x_712_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_712_, 0, v___y_707_);
lean_ctor_set(v___x_712_, 1, v___y_704_);
lean_ctor_set(v___x_712_, 2, v___x_711_);
if (lean_obj_tag(v___y_701_) == 1)
{
lean_object* v_val_713_; lean_object* v___x_714_; 
v_val_713_ = lean_ctor_get(v___y_701_, 0);
lean_inc(v_val_713_);
lean_dec_ref_known(v___y_701_, 1);
v___x_714_ = l_Array_mkArray1___redArg(v_val_713_);
v___y_678_ = v___x_712_;
v___y_679_ = v___y_703_;
v___y_680_ = v___y_702_;
v___y_681_ = v___y_704_;
v___y_682_ = v___y_705_;
v___y_683_ = v___y_706_;
v___y_684_ = v___y_707_;
v___y_685_ = v___y_708_;
v___y_686_ = v___y_709_;
v___y_687_ = v___x_714_;
goto v___jp_677_;
}
else
{
lean_object* v___x_715_; 
lean_dec(v___y_701_);
v___x_715_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_678_ = v___x_712_;
v___y_679_ = v___y_703_;
v___y_680_ = v___y_702_;
v___y_681_ = v___y_704_;
v___y_682_ = v___y_705_;
v___y_683_ = v___y_706_;
v___y_684_ = v___y_707_;
v___y_685_ = v___y_708_;
v___y_686_ = v___y_709_;
v___y_687_ = v___x_715_;
goto v___jp_677_;
}
}
v___jp_716_:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_721_ = lean_unsigned_to_nat(5u);
v___x_722_ = l_Lean_Syntax_getArg(v_stx_668_, v___x_721_);
v___x_723_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchAlts_x3f___closed__6));
lean_inc(v___x_722_);
v___x_724_ = l_Lean_Syntax_isOfKind(v___x_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_dec(v___x_722_);
lean_dec(v_motive_718_);
lean_dec(v___y_717_);
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v_stx_668_);
lean_ctor_set(v___x_725_, 1, v___y_720_);
return v___x_725_;
}
else
{
lean_object* v_ref_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v_alts_731_; lean_object* v___x_732_; size_t v_sz_733_; size_t v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_alts_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_ref_726_ = lean_ctor_get(v___y_719_, 5);
v___x_727_ = lean_unsigned_to_nat(3u);
v___x_728_ = l_Lean_Syntax_getArg(v_stx_668_, v___x_727_);
lean_dec(v_stx_668_);
v___x_729_ = l_Lean_Syntax_getArg(v___x_722_, v___x_673_);
lean_dec(v___x_722_);
v___x_730_ = l_Lean_Syntax_getArgs(v___x_729_);
lean_dec(v___x_729_);
v_alts_731_ = l_unsafeCast___redArg(v___x_730_);
lean_dec_ref(v___x_730_);
v___x_732_ = l_Lean_Syntax_getArgs(v___x_728_);
lean_dec(v___x_728_);
v_sz_733_ = lean_array_size(v_alts_731_);
v___x_734_ = ((size_t)0ULL);
v___x_735_ = l_unsafeCast___redArg(v_alts_731_);
lean_dec(v_alts_731_);
v___x_736_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_clearInMatch_spec__0(v_vars_669_, v_sz_733_, v___x_734_, v___x_735_);
v_alts_737_ = l_unsafeCast___redArg(v___x_736_);
lean_dec_ref(v___x_736_);
v___x_738_ = l_Lean_SourceInfo_fromRef(v_ref_726_, v___x_674_);
lean_inc(v___x_738_);
v___x_739_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v___x_675_);
v___x_740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_expandMatchAlt_spec__0___closed__1));
v___x_741_ = lean_obj_once(&l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7, &l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7_once, _init_l_Lean_Elab_Term_expandMatchAlts_x3f___closed__7);
if (lean_obj_tag(v___y_717_) == 1)
{
lean_object* v_val_742_; lean_object* v___x_743_; 
v_val_742_ = lean_ctor_get(v___y_717_, 0);
lean_inc(v_val_742_);
lean_dec_ref_known(v___y_717_, 1);
v___x_743_ = l_Array_mkArray1___redArg(v_val_742_);
v___y_701_ = v_motive_718_;
v___y_702_ = v___x_723_;
v___y_703_ = v___y_720_;
v___y_704_ = v___x_740_;
v___y_705_ = v___x_732_;
v___y_706_ = v___x_739_;
v___y_707_ = v___x_738_;
v___y_708_ = v_alts_737_;
v___y_709_ = v___x_741_;
v___y_710_ = v___x_743_;
goto v___jp_700_;
}
else
{
lean_object* v___x_744_; 
lean_dec(v___y_717_);
v___x_744_ = ((lean_object*)(l_Lean_Elab_Term_shouldExpandMatchAlt___closed__5));
v___y_701_ = v_motive_718_;
v___y_702_ = v___x_723_;
v___y_703_ = v___y_720_;
v___y_704_ = v___x_740_;
v___y_705_ = v___x_732_;
v___y_706_ = v___x_739_;
v___y_707_ = v___x_738_;
v___y_708_ = v_alts_737_;
v___y_709_ = v___x_741_;
v___y_710_ = v___x_744_;
goto v___jp_700_;
}
}
}
}
else
{
lean_object* v___x_767_; 
v___x_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_767_, 0, v_stx_668_);
lean_ctor_set(v___x_767_, 1, v_a_671_);
return v___x_767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_clearInMatch___boxed(lean_object* v_stx_768_, lean_object* v_vars_769_, lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_Elab_Term_clearInMatch(v_stx_768_, v_vars_769_, v_a_770_, v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec_ref(v_vars_769_);
return v_res_772_;
}
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Init_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BindersUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BindersUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Init_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BindersUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BindersUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BindersUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BindersUtil(builtin);
}
#ifdef __cplusplus
}
#endif

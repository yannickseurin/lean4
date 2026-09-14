// Lean compiler output
// Module: Lean.Elab.MatchExpr
// Imports: public import Lean.Elab.Term
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
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f(lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value_aux_2),((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_MatchExpr_shouldSaveActual(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_shouldSaveActual___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getAltFor_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getAltFor_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Elab_Term_MatchExpr_next_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Term_MatchExpr_next___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_next___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_next___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_next(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_initK___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "__do_jp"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_initK___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_initK___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_initK___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_initK___closed__1;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_initK___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_initK___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 121, 241, 59, 37, 189, 140, 219)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_initK___closed__2 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_initK___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_initK(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_initK___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_MatchExpr_getParams_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_MatchExpr_getParams_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Expr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 218, 74, 184, 29, 214, 185, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 208, 74, 211, 93, 83, 88, 82)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__10_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__1 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_getParams___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__2;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getParams___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__1_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__3 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getParams___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__4 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getParams___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__3_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__5 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getParams___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__6 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getParams___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__4_value),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__6_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getParams___closed__7 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getParams___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__1 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__2 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__3 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__4 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__5 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__5_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__6 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_getActuals___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__7;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_getActuals___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__8;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__9 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__9_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchExpr"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__10 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__10_value),LEAN_SCALAR_PTR_LITERAL(19, 93, 49, 96, 250, 188, 70, 43)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__11 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__11_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__12 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__13 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__13_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__14 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__15 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__15_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__16 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__17 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__17_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__18 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__19 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__16_value),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__19_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__20 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__14_value),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__20_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__21 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_getActuals___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__12_value),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__21_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___closed__22 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getActuals(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 121, 78, 150, 98, 156, 35, 157)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__2 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__4;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__5_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__7_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isConstOf"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__8_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__9;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(27, 40, 205, 144, 248, 209, 112, 151)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__10_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__11_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__12_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__13_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "__discr"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__0 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 107, 223, 4, 107, 76, 58, 232)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__2 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__2_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__3 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__4 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__4_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__5 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__5_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__7 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__7_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__9 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__9_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isApp"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__10 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__10_value),LEAN_SCALAR_PTR_LITERAL(106, 177, 134, 72, 179, 173, 226, 211)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__12 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__12_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13_value),LEAN_SCALAR_PTR_LITERAL(155, 166, 195, 152, 24, 103, 8, 2)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__15 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__15_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__17 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__17_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__19 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__19_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__21 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__21_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.appFnCleanup"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__24 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__24_value;
static lean_once_cell_t l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "appFnCleanup"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__26 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 218, 74, 184, 29, 214, 185, 80)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__26_value),LEAN_SCALAR_PTR_LITERAL(123, 55, 75, 50, 107, 106, 52, 36)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 208, 74, 211, 93, 83, 88, 82)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__26_value),LEAN_SCALAR_PTR_LITERAL(174, 132, 215, 81, 209, 85, 130, 115)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__29 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__29_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__30 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__30_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__32 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__32_value;
static lean_once_cell_t l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__32_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__34 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__34_value;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Expr.appArg"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__35 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__35_value;
static lean_once_cell_t l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__36;
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "appArg"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__37 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__37_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 218, 74, 184, 29, 214, 185, 80)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__38_value_aux_0),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__37_value),LEAN_SCALAR_PTR_LITERAL(143, 39, 209, 64, 239, 249, 76, 198)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__38 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__38_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 208, 74, 211, 93, 83, 88, 82)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value_aux_1),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__37_value),LEAN_SCALAR_PTR_LITERAL(114, 135, 152, 65, 17, 31, 173, 106)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__40 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__40_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__39_value)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__41 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__41_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__42 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__42_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__40_value),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__42_value)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__43 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__43_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let_delayed"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 71, 139, 72, 47, 176, 139, 254)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_getParams___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__1 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__0_value),((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__1_value)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__2 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_generate___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Expr.cleanupAnnotations"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__3 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Term_MatchExpr_generate___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__4;
static const lean_string_object l_Lean_Elab_Term_MatchExpr_generate___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cleanupAnnotations"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__5 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 218, 74, 184, 29, 214, 185, 80)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__5_value),LEAN_SCALAR_PTR_LITERAL(8, 214, 177, 247, 224, 185, 177, 113)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__6 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 208, 74, 211, 93, 83, 88, 82)}};
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__5_value),LEAN_SCALAR_PTR_LITERAL(37, 61, 193, 84, 254, 95, 16, 56)}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__7 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__8 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Term_MatchExpr_generate___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_MatchExpr_generate___closed__9 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_generate___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unexpected `match_expr` alternative"};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_MatchExpr_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "unexpected `match_expr` else-alternative"};
static const lean_object* l_Lean_Elab_Term_MatchExpr_main___closed__0 = (const lean_object*)&l_Lean_Elab_Term_MatchExpr_main___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandMatchExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchExpr"};
static const lean_object* l_Lean_Elab_Term_expandMatchExpr___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandMatchExpr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandMatchExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchExpr___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchExpr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchExpr___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandMatchExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandMatchExpr___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandMatchExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 125, 75, 13, 242, 250, 162, 88)}};
static const lean_object* l_Lean_Elab_Term_expandMatchExpr___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandMatchExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchExpr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "expandMatchExpr"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 0, 221, 127, 140, 97, 148, 247)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(203) << 1) | 1)),((lean_object*)(((size_t)(44) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(207) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__0_value),((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(203) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(203) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__3_value),((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__4_value),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandLetExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letExpr"};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 202, 86, 214, 6, 188, 214, 137)}};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_expandLetExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "match_expr"};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__2 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_expandLetExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__3 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_expandLetExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__4 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandLetExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__5 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__5_value;
static const lean_string_object l_Lean_Elab_Term_expandLetExpr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__6 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__6_value;
static const lean_string_object l_Lean_Elab_Term_expandLetExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Term_expandLetExpr___closed__7 = (const lean_object*)&l_Lean_Elab_Term_expandLetExpr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetExpr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expandLetExpr"};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_MatchExpr_getActuals___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 223, 197, 206, 64, 44, 35, 96)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(209) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(215) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__0_value),((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(209) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(209) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__3_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__4_value),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f(lean_object* v_stx_10_){
_start:
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4));
lean_inc(v_stx_10_);
v___x_12_ = l_Lean_Syntax_isOfKind(v_stx_10_, v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
lean_dec(v_stx_10_);
v___x_13_ = lean_box(0);
return v___x_13_;
}
else
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_unsigned_to_nat(3u);
v___x_15_ = l_Lean_Syntax_getArg(v_stx_10_, v___x_14_);
lean_dec(v_stx_10_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0(lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
if (lean_obj_tag(v_a_23_) == 0)
{
lean_object* v___x_25_; 
v___x_25_ = l_List_reverse___redArg(v_a_24_);
return v___x_25_;
}
else
{
lean_object* v_head_26_; lean_object* v_tail_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_41_; 
v_head_26_ = lean_ctor_get(v_a_23_, 0);
v_tail_27_ = lean_ctor_get(v_a_23_, 1);
v_isSharedCheck_41_ = !lean_is_exclusive(v_a_23_);
if (v_isSharedCheck_41_ == 0)
{
v___x_29_ = v_a_23_;
v_isShared_30_ = v_isSharedCheck_41_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_tail_27_);
lean_inc(v_head_26_);
lean_dec(v_a_23_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_41_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___y_32_; lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1));
lean_inc(v_head_26_);
v___x_38_ = l_Lean_Syntax_isOfKind(v_head_26_, v___x_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; 
v___x_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_39_, 0, v_head_26_);
v___y_32_ = v___x_39_;
goto v___jp_31_;
}
else
{
lean_object* v___x_40_; 
lean_dec(v_head_26_);
v___x_40_ = lean_box(0);
v___y_32_ = v___x_40_;
goto v___jp_31_;
}
v___jp_31_:
{
lean_object* v___x_34_; 
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 1, v_a_24_);
lean_ctor_set(v___x_29_, 0, v___y_32_);
v___x_34_ = v___x_29_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___y_32_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v_a_24_);
v___x_34_ = v_reuseFailAlloc_36_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
v_a_23_ = v_tail_27_;
v_a_24_ = v___x_34_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_toAlt_x3f(lean_object* v_stx_57_){
_start:
{
lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1));
lean_inc(v_stx_57_);
v___x_59_ = l_Lean_Syntax_isOfKind(v_stx_57_, v___x_58_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; 
lean_dec(v_stx_57_);
v___x_60_ = lean_box(0);
return v___x_60_;
}
else
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v_var_x3f_64_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = l_Lean_Syntax_getArg(v_stx_57_, v___x_61_);
v___x_82_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5));
lean_inc(v___x_62_);
v___x_83_ = l_Lean_Syntax_isOfKind(v___x_62_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
lean_dec(v___x_62_);
lean_dec(v_stx_57_);
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = l_Lean_Syntax_getArg(v___x_62_, v___x_85_);
v___x_87_ = l_Lean_Syntax_isNone(v___x_86_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_86_);
v___x_89_ = l_Lean_Syntax_matchesNull(v___x_86_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; 
lean_dec(v___x_86_);
lean_dec(v___x_62_);
lean_dec(v_stx_57_);
v___x_90_ = lean_box(0);
return v___x_90_;
}
else
{
lean_object* v_var_x3f_91_; lean_object* v___x_92_; 
v_var_x3f_91_ = l_Lean_Syntax_getArg(v___x_86_, v___x_85_);
lean_dec(v___x_86_);
v___x_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_92_, 0, v_var_x3f_91_);
v_var_x3f_64_ = v___x_92_;
goto v___jp_63_;
}
}
else
{
lean_object* v___x_93_; 
lean_dec(v___x_86_);
v___x_93_ = lean_box(0);
v_var_x3f_64_ = v___x_93_;
goto v___jp_63_;
}
}
v___jp_63_:
{
lean_object* v_funName_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v_funName_65_ = l_Lean_Syntax_getArg(v___x_62_, v___x_61_);
v___x_66_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__3));
lean_inc(v_funName_65_);
v___x_67_ = l_Lean_Syntax_isOfKind(v_funName_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; 
lean_dec(v_funName_65_);
lean_dec(v_var_x3f_64_);
lean_dec(v___x_62_);
lean_dec(v_stx_57_);
v___x_68_ = lean_box(0);
return v___x_68_;
}
else
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v_pvars_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v_pvars_76_; lean_object* v___x_77_; lean_object* v_rhs_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_69_ = lean_unsigned_to_nat(2u);
v___x_70_ = l_Lean_Syntax_getArg(v___x_62_, v___x_69_);
lean_dec(v___x_62_);
v___x_71_ = l_Lean_Syntax_getArgs(v___x_70_);
lean_dec(v___x_70_);
v_pvars_72_ = l_unsafeCast___redArg(v___x_71_);
lean_dec_ref(v___x_71_);
v___x_73_ = lean_array_to_list(v_pvars_72_);
v___x_74_ = l_List_reverse___redArg(v___x_73_);
v___x_75_ = lean_box(0);
v_pvars_76_ = l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0(v___x_74_, v___x_75_);
v___x_77_ = lean_unsigned_to_nat(3u);
v_rhs_78_ = l_Lean_Syntax_getArg(v_stx_57_, v___x_77_);
lean_dec(v_stx_57_);
v___x_79_ = lean_box(0);
v___x_80_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_80_, 0, v_var_x3f_64_);
lean_ctor_set(v___x_80_, 1, v_funName_65_);
lean_ctor_set(v___x_80_, 2, v_pvars_76_);
lean_ctor_set(v___x_80_, 3, v_rhs_78_);
lean_ctor_set(v___x_80_, 4, v___x_79_);
lean_ctor_set(v___x_80_, 5, v___x_75_);
v___x_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0(lean_object* v_a_97_, lean_object* v_as_98_, size_t v_sz_99_, size_t v_i_100_, lean_object* v_b_101_){
_start:
{
uint8_t v___x_102_; 
v___x_102_ = lean_usize_dec_lt(v_i_100_, v_sz_99_);
if (v___x_102_ == 0)
{
lean_inc_ref(v_b_101_);
return v_b_101_;
}
else
{
lean_object* v_funName_103_; lean_object* v___x_104_; lean_object* v_a_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v_funName_103_ = lean_ctor_get(v_a_97_, 1);
v___x_104_ = lean_box(0);
v_a_105_ = lean_array_uget_borrowed(v_as_98_, v_i_100_);
v___x_106_ = l_Lean_TSyntax_getId(v_a_105_);
v___x_107_ = l_Lean_TSyntax_getId(v_funName_103_);
v___x_108_ = lean_name_eq(v___x_106_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___x_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; size_t v___x_110_; size_t v___x_111_; 
v___x_109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___closed__0));
v___x_110_ = ((size_t)1ULL);
v___x_111_ = lean_usize_add(v_i_100_, v___x_110_);
v_i_100_ = v___x_111_;
v_b_101_ = v___x_109_;
goto _start;
}
else
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
lean_inc(v_a_105_);
v___x_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_113_, 0, v_a_105_);
v___x_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_104_);
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___boxed(lean_object* v_a_116_, lean_object* v_as_117_, lean_object* v_sz_118_, lean_object* v_i_119_, lean_object* v_b_120_){
_start:
{
size_t v_sz_boxed_121_; size_t v_i_boxed_122_; lean_object* v_res_123_; 
v_sz_boxed_121_ = lean_unbox_usize(v_sz_118_);
lean_dec(v_sz_118_);
v_i_boxed_122_ = lean_unbox_usize(v_i_119_);
lean_dec(v_i_119_);
v_res_123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0(v_a_116_, v_as_117_, v_sz_boxed_121_, v_i_boxed_122_, v_b_120_);
lean_dec_ref(v_b_120_);
lean_dec_ref(v_as_117_);
lean_dec_ref(v_a_116_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg(lean_object* v_as_x27_124_, lean_object* v_b_125_){
_start:
{
if (lean_obj_tag(v_as_x27_124_) == 0)
{
return v_b_125_;
}
else
{
lean_object* v_head_126_; lean_object* v_tail_127_; lean_object* v_funName_128_; lean_object* v_pvars_129_; uint8_t v___x_130_; 
v_head_126_ = lean_ctor_get(v_as_x27_124_, 0);
v_tail_127_ = lean_ctor_get(v_as_x27_124_, 1);
v_funName_128_ = lean_ctor_get(v_head_126_, 1);
v_pvars_129_ = lean_ctor_get(v_head_126_, 2);
v___x_130_ = l_List_isEmpty___redArg(v_pvars_129_);
if (v___x_130_ == 0)
{
v_as_x27_124_ = v_tail_127_;
goto _start;
}
else
{
lean_object* v___x_136_; size_t v_sz_137_; size_t v___x_138_; lean_object* v___x_139_; lean_object* v_fst_140_; 
v___x_136_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0___closed__0));
v_sz_137_ = lean_array_size(v_b_125_);
v___x_138_ = ((size_t)0ULL);
v___x_139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__0(v_head_126_, v_b_125_, v_sz_137_, v___x_138_, v___x_136_);
v_fst_140_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_fst_140_);
lean_dec_ref(v___x_139_);
if (lean_obj_tag(v_fst_140_) == 0)
{
goto v___jp_131_;
}
else
{
lean_object* v_val_141_; 
v_val_141_ = lean_ctor_get(v_fst_140_, 0);
lean_inc(v_val_141_);
lean_dec_ref_known(v_fst_140_, 1);
if (lean_obj_tag(v_val_141_) == 0)
{
goto v___jp_131_;
}
else
{
lean_dec_ref_known(v_val_141_, 1);
v_as_x27_124_ = v_tail_127_;
goto _start;
}
}
}
v___jp_131_:
{
if (v___x_130_ == 0)
{
v_as_x27_124_ = v_tail_127_;
goto _start;
}
else
{
lean_object* v___x_133_; 
lean_inc(v_funName_128_);
v___x_133_ = lean_array_push(v_b_125_, v_funName_128_);
v_as_x27_124_ = v_tail_127_;
v_b_125_ = v___x_133_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg___boxed(lean_object* v_as_x27_143_, lean_object* v_b_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg(v_as_x27_143_, v_b_144_);
lean_dec(v_as_x27_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch(lean_object* v_alts_148_){
_start:
{
lean_object* v_funNames_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_funNames_149_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0));
v___x_150_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg(v_alts_148_, v_funNames_149_);
v___x_151_ = lean_array_to_list(v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___boxed(lean_object* v_alts_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch(v_alts_152_);
lean_dec(v_alts_152_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1(lean_object* v_as_154_, lean_object* v_as_x27_155_, lean_object* v_b_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___redArg(v_as_x27_155_, v_b_156_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1___boxed(lean_object* v_as_159_, lean_object* v_as_x27_160_, lean_object* v_b_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_getFunNamesToMatch_spec__1(v_as_159_, v_as_x27_160_, v_b_161_, v_a_162_);
lean_dec(v_as_x27_160_);
lean_dec(v_as_159_);
return v_res_163_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0(lean_object* v_x_164_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
uint8_t v___x_165_; 
v___x_165_ = 0;
return v___x_165_;
}
else
{
lean_object* v_head_166_; lean_object* v_pvars_167_; 
v_head_166_ = lean_ctor_get(v_x_164_, 0);
v_pvars_167_ = lean_ctor_get(v_head_166_, 2);
if (lean_obj_tag(v_pvars_167_) == 1)
{
lean_object* v_head_168_; 
v_head_168_ = lean_ctor_get(v_pvars_167_, 0);
if (lean_obj_tag(v_head_168_) == 1)
{
uint8_t v___x_169_; 
v___x_169_ = 1;
return v___x_169_;
}
else
{
lean_object* v_tail_170_; 
v_tail_170_ = lean_ctor_get(v_x_164_, 1);
v_x_164_ = v_tail_170_;
goto _start;
}
}
else
{
lean_object* v_tail_172_; 
v_tail_172_ = lean_ctor_get(v_x_164_, 1);
v_x_164_ = v_tail_172_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0___boxed(lean_object* v_x_174_){
_start:
{
uint8_t v_res_175_; lean_object* v_r_176_; 
v_res_175_ = l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0(v_x_174_);
lean_dec(v_x_174_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_MatchExpr_shouldSaveActual(lean_object* v_alts_177_){
_start:
{
uint8_t v___x_178_; 
v___x_178_ = l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0(v_alts_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_shouldSaveActual___boxed(lean_object* v_alts_179_){
_start:
{
uint8_t v_res_180_; lean_object* v_r_181_; 
v_res_180_ = l_Lean_Elab_Term_MatchExpr_shouldSaveActual(v_alts_179_);
lean_dec(v_alts_179_);
v_r_181_ = lean_box(v_res_180_);
return v_r_181_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0(lean_object* v_funName_182_, lean_object* v_x_183_){
_start:
{
if (lean_obj_tag(v_x_183_) == 0)
{
lean_object* v___x_184_; 
v___x_184_ = lean_box(0);
return v___x_184_;
}
else
{
lean_object* v_head_185_; lean_object* v_tail_186_; uint8_t v___y_188_; lean_object* v_funName_191_; lean_object* v_pvars_192_; lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v_head_185_ = lean_ctor_get(v_x_183_, 0);
v_tail_186_ = lean_ctor_get(v_x_183_, 1);
v_funName_191_ = lean_ctor_get(v_head_185_, 1);
v_pvars_192_ = lean_ctor_get(v_head_185_, 2);
v___x_193_ = l_Lean_TSyntax_getId(v_funName_191_);
v___x_194_ = l_Lean_TSyntax_getId(v_funName_182_);
v___x_195_ = lean_name_eq(v___x_193_, v___x_194_);
lean_dec(v___x_194_);
lean_dec(v___x_193_);
if (v___x_195_ == 0)
{
v___y_188_ = v___x_195_;
goto v___jp_187_;
}
else
{
uint8_t v___x_196_; 
v___x_196_ = l_List_isEmpty___redArg(v_pvars_192_);
v___y_188_ = v___x_196_;
goto v___jp_187_;
}
v___jp_187_:
{
if (v___y_188_ == 0)
{
v_x_183_ = v_tail_186_;
goto _start;
}
else
{
lean_object* v___x_190_; 
lean_inc(v_head_185_);
v___x_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_190_, 0, v_head_185_);
return v___x_190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0___boxed(lean_object* v_funName_197_, lean_object* v_x_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0(v_funName_197_, v_x_198_);
lean_dec(v_x_198_);
lean_dec(v_funName_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getAltFor_x3f(lean_object* v_alts_200_, lean_object* v_funName_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0(v_funName_201_, v_alts_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getAltFor_x3f___boxed(lean_object* v_alts_203_, lean_object* v_funName_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Term_MatchExpr_getAltFor_x3f(v_alts_203_, v_funName_204_);
lean_dec(v_funName_204_);
lean_dec(v_alts_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Elab_Term_MatchExpr_next_spec__0(lean_object* v_actual_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
if (lean_obj_tag(v_a_207_) == 0)
{
lean_object* v___x_209_; 
lean_dec(v_actual_206_);
v___x_209_ = lean_array_to_list(v_a_208_);
return v___x_209_;
}
else
{
lean_object* v_head_210_; lean_object* v_tail_211_; lean_object* v_val_213_; lean_object* v_var_x3f_216_; lean_object* v_funName_217_; lean_object* v_pvars_218_; lean_object* v_rhs_219_; lean_object* v_k_220_; lean_object* v_actuals_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_244_; 
v_head_210_ = lean_ctor_get(v_a_207_, 0);
lean_inc(v_head_210_);
v_tail_211_ = lean_ctor_get(v_a_207_, 1);
lean_inc(v_tail_211_);
lean_dec_ref_known(v_a_207_, 2);
v_var_x3f_216_ = lean_ctor_get(v_head_210_, 0);
v_funName_217_ = lean_ctor_get(v_head_210_, 1);
v_pvars_218_ = lean_ctor_get(v_head_210_, 2);
v_rhs_219_ = lean_ctor_get(v_head_210_, 3);
v_k_220_ = lean_ctor_get(v_head_210_, 4);
v_actuals_221_ = lean_ctor_get(v_head_210_, 5);
v_isSharedCheck_244_ = !lean_is_exclusive(v_head_210_);
if (v_isSharedCheck_244_ == 0)
{
v___x_223_ = v_head_210_;
v_isShared_224_ = v_isSharedCheck_244_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_actuals_221_);
lean_inc(v_k_220_);
lean_inc(v_rhs_219_);
lean_inc(v_pvars_218_);
lean_inc(v_funName_217_);
lean_inc(v_var_x3f_216_);
lean_dec(v_head_210_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_244_;
goto v_resetjp_222_;
}
v___jp_212_:
{
lean_object* v___x_214_; 
v___x_214_ = lean_array_push(v_a_208_, v_val_213_);
v_a_207_ = v_tail_211_;
v_a_208_ = v___x_214_;
goto _start;
}
v_resetjp_222_:
{
if (lean_obj_tag(v_pvars_218_) == 1)
{
lean_object* v_head_233_; 
v_head_233_ = lean_ctor_get(v_pvars_218_, 0);
if (lean_obj_tag(v_head_233_) == 1)
{
lean_object* v_tail_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_242_; 
lean_del_object(v___x_223_);
v_tail_234_ = lean_ctor_get(v_pvars_218_, 1);
v_isSharedCheck_242_ = !lean_is_exclusive(v_pvars_218_);
if (v_isSharedCheck_242_ == 0)
{
lean_object* v_unused_243_; 
v_unused_243_ = lean_ctor_get(v_pvars_218_, 0);
lean_dec(v_unused_243_);
v___x_236_ = v_pvars_218_;
v_isShared_237_ = v_isSharedCheck_242_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_tail_234_);
lean_dec(v_pvars_218_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_242_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
lean_inc(v_actual_206_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v_actuals_221_);
lean_ctor_set(v___x_236_, 0, v_actual_206_);
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_actual_206_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_actuals_221_);
v___x_239_ = v_reuseFailAlloc_241_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_240_, 0, v_var_x3f_216_);
lean_ctor_set(v___x_240_, 1, v_funName_217_);
lean_ctor_set(v___x_240_, 2, v_tail_234_);
lean_ctor_set(v___x_240_, 3, v_rhs_219_);
lean_ctor_set(v___x_240_, 4, v_k_220_);
lean_ctor_set(v___x_240_, 5, v___x_239_);
v_val_213_ = v___x_240_;
goto v___jp_212_;
}
}
}
else
{
goto v___jp_225_;
}
}
else
{
goto v___jp_225_;
}
v___jp_225_:
{
if (lean_obj_tag(v_pvars_218_) == 1)
{
lean_object* v_head_226_; 
v_head_226_ = lean_ctor_get(v_pvars_218_, 0);
if (lean_obj_tag(v_head_226_) == 0)
{
lean_object* v_tail_227_; lean_object* v___x_229_; 
v_tail_227_ = lean_ctor_get(v_pvars_218_, 1);
lean_inc(v_tail_227_);
lean_dec_ref_known(v_pvars_218_, 2);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 2, v_tail_227_);
v___x_229_ = v___x_223_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_var_x3f_216_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_funName_217_);
lean_ctor_set(v_reuseFailAlloc_230_, 2, v_tail_227_);
lean_ctor_set(v_reuseFailAlloc_230_, 3, v_rhs_219_);
lean_ctor_set(v_reuseFailAlloc_230_, 4, v_k_220_);
lean_ctor_set(v_reuseFailAlloc_230_, 5, v_actuals_221_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
v_val_213_ = v___x_229_;
goto v___jp_212_;
}
}
else
{
lean_dec_ref_known(v_pvars_218_, 2);
lean_del_object(v___x_223_);
lean_dec(v_actuals_221_);
lean_dec(v_k_220_);
lean_dec(v_rhs_219_);
lean_dec(v_funName_217_);
lean_dec(v_var_x3f_216_);
v_a_207_ = v_tail_211_;
goto _start;
}
}
else
{
lean_del_object(v___x_223_);
lean_dec(v_actuals_221_);
lean_dec(v_k_220_);
lean_dec(v_rhs_219_);
lean_dec(v_pvars_218_);
lean_dec(v_funName_217_);
lean_dec(v_var_x3f_216_);
v_a_207_ = v_tail_211_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_next(lean_object* v_alts_247_, lean_object* v_actual_248_){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_next___closed__0));
v___x_250_ = l_List_filterMapTR_go___at___00Lean_Elab_Term_MatchExpr_next_spec__0(v_actual_248_, v_alts_247_, v___x_249_);
return v___x_250_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_initK___closed__1(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_initK___closed__0));
v___x_253_ = l_String_toRawSubstring_x27(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_initK(lean_object* v_alt_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_macroScope_259_; lean_object* v_traceMsgs_260_; lean_object* v_expandedMacroDecls_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_293_; 
v_macroScope_259_ = lean_ctor_get(v_a_258_, 0);
v_traceMsgs_260_ = lean_ctor_get(v_a_258_, 1);
v_expandedMacroDecls_261_ = lean_ctor_get(v_a_258_, 2);
v_isSharedCheck_293_ = !lean_is_exclusive(v_a_258_);
if (v_isSharedCheck_293_ == 0)
{
v___x_263_ = v_a_258_;
v_isShared_264_ = v_isSharedCheck_293_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_expandedMacroDecls_261_);
lean_inc(v_traceMsgs_260_);
lean_inc(v_macroScope_259_);
lean_dec(v_a_258_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_293_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_quotContext_265_; lean_object* v_ref_266_; lean_object* v_var_x3f_267_; lean_object* v_funName_268_; lean_object* v_pvars_269_; lean_object* v_rhs_270_; lean_object* v_actuals_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_291_; 
v_quotContext_265_ = lean_ctor_get(v_a_257_, 1);
v_ref_266_ = lean_ctor_get(v_a_257_, 5);
v_var_x3f_267_ = lean_ctor_get(v_alt_256_, 0);
v_funName_268_ = lean_ctor_get(v_alt_256_, 1);
v_pvars_269_ = lean_ctor_get(v_alt_256_, 2);
v_rhs_270_ = lean_ctor_get(v_alt_256_, 3);
v_actuals_271_ = lean_ctor_get(v_alt_256_, 5);
v_isSharedCheck_291_ = !lean_is_exclusive(v_alt_256_);
if (v_isSharedCheck_291_ == 0)
{
lean_object* v_unused_292_; 
v_unused_292_ = lean_ctor_get(v_alt_256_, 4);
lean_dec(v_unused_292_);
v___x_273_ = v_alt_256_;
v_isShared_274_ = v_isSharedCheck_291_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_actuals_271_);
lean_inc(v_rhs_270_);
lean_inc(v_pvars_269_);
lean_inc(v_funName_268_);
lean_inc(v_var_x3f_267_);
lean_dec(v_alt_256_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_291_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_275_ = lean_unsigned_to_nat(1u);
v___x_276_ = lean_nat_add(v_macroScope_259_, v___x_275_);
v___x_277_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_initK___closed__1, &l_Lean_Elab_Term_MatchExpr_initK___closed__1_once, _init_l_Lean_Elab_Term_MatchExpr_initK___closed__1);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_276_);
v___x_279_ = v___x_263_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_traceMsgs_260_);
lean_ctor_set(v_reuseFailAlloc_290_, 2, v_expandedMacroDecls_261_);
v___x_279_ = v_reuseFailAlloc_290_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
uint8_t v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_280_ = 0;
v___x_281_ = l_Lean_SourceInfo_fromRef(v_ref_266_, v___x_280_);
v___x_282_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_initK___closed__2));
lean_inc(v_quotContext_265_);
v___x_283_ = l_Lean_addMacroScope(v_quotContext_265_, v___x_282_, v_macroScope_259_);
v___x_284_ = lean_box(0);
v___x_285_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_285_, 0, v___x_281_);
lean_ctor_set(v___x_285_, 1, v___x_277_);
lean_ctor_set(v___x_285_, 2, v___x_283_);
lean_ctor_set(v___x_285_, 3, v___x_284_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 4, v___x_285_);
v___x_287_ = v___x_273_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_var_x3f_267_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_funName_268_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_pvars_269_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_rhs_270_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_289_, 5, v_actuals_271_);
v___x_287_ = v_reuseFailAlloc_289_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; 
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___x_279_);
return v___x_288_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_initK___boxed(lean_object* v_alt_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Elab_Term_MatchExpr_initK(v_alt_294_, v_a_295_, v_a_296_);
lean_dec_ref(v_a_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_MatchExpr_getParams_spec__1(size_t v_sz_298_, size_t v_i_299_, lean_object* v_bs_300_){
_start:
{
uint8_t v___x_301_; 
v___x_301_ = lean_usize_dec_lt(v_i_299_, v_sz_298_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
v___x_302_ = l_unsafeCast___redArg(v_bs_300_);
lean_dec_ref(v_bs_300_);
return v___x_302_;
}
else
{
lean_object* v_v_303_; lean_object* v___x_304_; lean_object* v_bs_x27_305_; lean_object* v___x_306_; size_t v___x_307_; size_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_v_303_ = lean_array_uget(v_bs_300_, v_i_299_);
v___x_304_ = lean_unsigned_to_nat(0u);
v_bs_x27_305_ = lean_array_uset(v_bs_300_, v_i_299_, v___x_304_);
v___x_306_ = l_unsafeCast___redArg(v_v_303_);
lean_dec(v_v_303_);
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_add(v_i_299_, v___x_307_);
v___x_309_ = l_unsafeCast___redArg(v___x_306_);
lean_dec(v___x_306_);
v___x_310_ = lean_array_uset(v_bs_x27_305_, v_i_299_, v___x_309_);
v_i_299_ = v___x_308_;
v_bs_300_ = v___x_310_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_MatchExpr_getParams_spec__1___boxed(lean_object* v_sz_312_, lean_object* v_i_313_, lean_object* v_bs_314_){
_start:
{
size_t v_sz_boxed_315_; size_t v_i_boxed_316_; lean_object* v_res_317_; 
v_sz_boxed_315_ = lean_unbox_usize(v_sz_312_);
lean_dec(v_sz_312_);
v_i_boxed_316_ = lean_unbox_usize(v_i_313_);
lean_dec(v_i_313_);
v_res_317_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_MatchExpr_getParams_spec__1(v_sz_boxed_315_, v_i_boxed_316_, v_bs_314_);
return v_res_317_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__6));
v___x_331_ = l_String_toRawSubstring_x27(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Array_mkArray0___redArg();
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0(lean_object* v_as_350_, size_t v_i_351_, size_t v_stop_352_, lean_object* v_b_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_a_357_; lean_object* v_a_358_; uint8_t v___x_362_; 
v___x_362_ = lean_usize_dec_eq(v_i_351_, v_stop_352_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; 
v___x_363_ = lean_array_uget_borrowed(v_as_350_, v_i_351_);
if (lean_obj_tag(v___x_363_) == 0)
{
v_a_357_ = v_b_353_;
v_a_358_ = v___y_355_;
goto v___jp_356_;
}
else
{
lean_object* v_val_364_; lean_object* v_quotContext_365_; lean_object* v_currMacroScope_366_; lean_object* v_ref_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_val_364_ = lean_ctor_get(v___x_363_, 0);
v_quotContext_365_ = lean_ctor_get(v___y_354_, 1);
v_currMacroScope_366_ = lean_ctor_get(v___y_354_, 2);
v_ref_367_ = lean_ctor_get(v___y_354_, 5);
v___x_368_ = l_Lean_SourceInfo_fromRef(v_ref_367_, v___x_362_);
v___x_369_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1));
v___x_370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
lean_inc_n(v___x_368_, 7);
v___x_371_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_368_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
lean_inc(v_val_364_);
v___x_373_ = l_Lean_Syntax_node1(v___x_368_, v___x_372_, v_val_364_);
v___x_374_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5));
v___x_375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_368_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7);
v___x_377_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__8));
lean_inc(v_currMacroScope_366_);
lean_inc(v_quotContext_365_);
v___x_378_ = l_Lean_addMacroScope(v_quotContext_365_, v___x_377_, v_currMacroScope_366_);
v___x_379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__13));
v___x_380_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_380_, 0, v___x_368_);
lean_ctor_set(v___x_380_, 1, v___x_376_);
lean_ctor_set(v___x_380_, 2, v___x_378_);
lean_ctor_set(v___x_380_, 3, v___x_379_);
v___x_381_ = l_Lean_Syntax_node2(v___x_368_, v___x_372_, v___x_375_, v___x_380_);
v___x_382_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_383_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_383_, 0, v___x_368_);
lean_ctor_set(v___x_383_, 1, v___x_372_);
lean_ctor_set(v___x_383_, 2, v___x_382_);
v___x_384_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_385_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_368_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = l_Lean_Syntax_node5(v___x_368_, v___x_369_, v___x_371_, v___x_373_, v___x_381_, v___x_383_, v___x_385_);
v___x_387_ = lean_array_push(v_b_353_, v___x_386_);
v_a_357_ = v___x_387_;
v_a_358_ = v___y_355_;
goto v___jp_356_;
}
}
else
{
lean_object* v___x_388_; 
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v_b_353_);
lean_ctor_set(v___x_388_, 1, v___y_355_);
return v___x_388_;
}
v___jp_356_:
{
size_t v___x_359_; size_t v___x_360_; 
v___x_359_ = ((size_t)1ULL);
v___x_360_ = lean_usize_add(v_i_351_, v___x_359_);
v_i_351_ = v___x_360_;
v_b_353_ = v_a_357_;
v___y_355_ = v_a_358_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___boxed(lean_object* v_as_389_, lean_object* v_i_390_, lean_object* v_stop_391_, lean_object* v_b_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
size_t v_i_boxed_395_; size_t v_stop_boxed_396_; lean_object* v_res_397_; 
v_i_boxed_395_ = lean_unbox_usize(v_i_390_);
lean_dec(v_i_390_);
v_stop_boxed_396_ = lean_unbox_usize(v_stop_391_);
lean_dec(v_stop_391_);
v_res_397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0(v_as_389_, v_i_boxed_395_, v_stop_boxed_396_, v_b_392_, v___y_393_, v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec_ref(v_as_389_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0(lean_object* v_as_398_, lean_object* v_start_399_, lean_object* v_stop_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_403_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0));
v___x_404_ = lean_nat_dec_lt(v_start_399_, v_stop_400_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; 
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_403_);
lean_ctor_set(v___x_405_, 1, v___y_402_);
return v___x_405_;
}
else
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = lean_array_get_size(v_as_398_);
v___x_407_ = lean_nat_dec_le(v_stop_400_, v___x_406_);
if (v___x_407_ == 0)
{
uint8_t v___x_408_; 
v___x_408_ = lean_nat_dec_lt(v_start_399_, v___x_406_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_403_);
lean_ctor_set(v___x_409_, 1, v___y_402_);
return v___x_409_;
}
else
{
size_t v___x_410_; size_t v___x_411_; lean_object* v___x_412_; 
v___x_410_ = lean_usize_of_nat(v_start_399_);
v___x_411_ = lean_usize_of_nat(v___x_406_);
v___x_412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0(v_as_398_, v___x_410_, v___x_411_, v___x_403_, v___y_401_, v___y_402_);
return v___x_412_;
}
}
else
{
size_t v___x_413_; size_t v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lean_usize_of_nat(v_start_399_);
v___x_414_ = lean_usize_of_nat(v_stop_400_);
v___x_415_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0(v_as_398_, v___x_413_, v___x_414_, v___x_403_, v___y_401_, v___y_402_);
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0___boxed(lean_object* v_as_416_, lean_object* v_start_417_, lean_object* v_stop_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0(v_as_416_, v_start_417_, v_stop_418_, v___y_419_, v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v_stop_418_);
lean_dec(v_start_417_);
lean_dec_ref(v_as_416_);
return v_res_421_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_getParams___closed__2(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__1));
v___x_425_ = l_String_toRawSubstring_x27(v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getParams(lean_object* v_alt_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_var_x3f_442_; lean_object* v_pvars_443_; lean_object* v_params_445_; lean_object* v___y_446_; lean_object* v___y_447_; lean_object* v_params_503_; 
v_var_x3f_442_ = lean_ctor_get(v_alt_439_, 0);
lean_inc(v_var_x3f_442_);
v_pvars_443_ = lean_ctor_get(v_alt_439_, 2);
lean_inc(v_pvars_443_);
lean_dec_ref(v_alt_439_);
v_params_503_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0));
if (lean_obj_tag(v_var_x3f_442_) == 1)
{
lean_object* v_val_504_; lean_object* v_quotContext_505_; lean_object* v_currMacroScope_506_; lean_object* v_ref_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_val_504_ = lean_ctor_get(v_var_x3f_442_, 0);
lean_inc(v_val_504_);
lean_dec_ref_known(v_var_x3f_442_, 1);
v_quotContext_505_ = lean_ctor_get(v_a_440_, 1);
v_currMacroScope_506_ = lean_ctor_get(v_a_440_, 2);
v_ref_507_ = lean_ctor_get(v_a_440_, 5);
v___x_508_ = 0;
v___x_509_ = l_Lean_SourceInfo_fromRef(v_ref_507_, v___x_508_);
v___x_510_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1));
v___x_511_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
lean_inc_n(v___x_509_, 7);
v___x_512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_509_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_514_ = l_Lean_Syntax_node1(v___x_509_, v___x_513_, v_val_504_);
v___x_515_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5));
v___x_516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_509_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__7);
v___x_518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__8));
lean_inc(v_currMacroScope_506_);
lean_inc(v_quotContext_505_);
v___x_519_ = l_Lean_addMacroScope(v_quotContext_505_, v___x_518_, v_currMacroScope_506_);
v___x_520_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__13));
v___x_521_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_521_, 0, v___x_509_);
lean_ctor_set(v___x_521_, 1, v___x_517_);
lean_ctor_set(v___x_521_, 2, v___x_519_);
lean_ctor_set(v___x_521_, 3, v___x_520_);
v___x_522_ = l_Lean_Syntax_node2(v___x_509_, v___x_513_, v___x_516_, v___x_521_);
v___x_523_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_524_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_524_, 0, v___x_509_);
lean_ctor_set(v___x_524_, 1, v___x_513_);
lean_ctor_set(v___x_524_, 2, v___x_523_);
v___x_525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_509_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = l_Lean_Syntax_node5(v___x_509_, v___x_510_, v___x_512_, v___x_514_, v___x_522_, v___x_524_, v___x_526_);
v___x_528_ = lean_array_push(v_params_503_, v___x_527_);
v_params_445_ = v___x_528_;
v___y_446_ = v_a_440_;
v___y_447_ = v_a_441_;
goto v___jp_444_;
}
else
{
lean_dec(v_var_x3f_442_);
v_params_445_ = v_params_503_;
v___y_446_ = v_a_440_;
v___y_447_ = v_a_441_;
goto v___jp_444_;
}
v___jp_444_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_448_ = lean_array_mk(v_pvars_443_);
v___x_449_ = l_Array_reverse___redArg(v___x_448_);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_array_get_size(v___x_449_);
v___x_452_ = l_Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0(v___x_449_, v___x_450_, v___x_451_, v___y_446_, v___y_447_);
lean_dec_ref(v___x_449_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_502_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
v_a_454_ = lean_ctor_get(v___x_452_, 1);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_502_ == 0)
{
v___x_456_ = v___x_452_;
v_isShared_457_ = v_isSharedCheck_502_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_inc(v_a_453_);
lean_dec(v___x_452_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_502_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_458_ = l_Array_append___redArg(v_params_445_, v_a_453_);
lean_dec(v_a_453_);
v___x_459_ = lean_array_get_size(v___x_458_);
v___x_460_ = lean_nat_dec_eq(v___x_459_, v___x_450_);
if (v___x_460_ == 0)
{
size_t v_sz_461_; size_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v_sz_461_ = lean_array_size(v___x_458_);
v___x_462_ = ((size_t)0ULL);
v___x_463_ = l_unsafeCast___redArg(v___x_458_);
lean_dec_ref(v___x_458_);
v___x_464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_MatchExpr_getParams_spec__1(v_sz_461_, v___x_462_, v___x_463_);
v___x_465_ = l_unsafeCast___redArg(v___x_464_);
lean_dec_ref(v___x_464_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_465_);
v___x_467_ = v___x_456_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_a_454_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
else
{
lean_object* v_quotContext_469_; lean_object* v_currMacroScope_470_; lean_object* v_ref_471_; uint8_t v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
lean_dec_ref(v___x_458_);
v_quotContext_469_ = lean_ctor_get(v___y_446_, 1);
v_currMacroScope_470_ = lean_ctor_get(v___y_446_, 2);
v_ref_471_ = lean_ctor_get(v___y_446_, 5);
v___x_472_ = 0;
v___x_473_ = l_Lean_SourceInfo_fromRef(v_ref_471_, v___x_472_);
v___x_474_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1));
v___x_475_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
lean_inc_n(v___x_473_, 9);
v___x_476_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_473_);
lean_ctor_set(v___x_476_, 1, v___x_475_);
v___x_477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_478_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1));
v___x_479_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__0));
v___x_480_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_473_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = l_Lean_Syntax_node1(v___x_473_, v___x_478_, v___x_480_);
v___x_482_ = l_Lean_Syntax_node1(v___x_473_, v___x_477_, v___x_481_);
v___x_483_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5));
v___x_484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_473_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getParams___closed__2, &l_Lean_Elab_Term_MatchExpr_getParams___closed__2_once, _init_l_Lean_Elab_Term_MatchExpr_getParams___closed__2);
v___x_486_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__3));
lean_inc(v_currMacroScope_470_);
lean_inc(v_quotContext_469_);
v___x_487_ = l_Lean_addMacroScope(v_quotContext_469_, v___x_486_, v_currMacroScope_470_);
v___x_488_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__7));
v___x_489_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_489_, 0, v___x_473_);
lean_ctor_set(v___x_489_, 1, v___x_485_);
lean_ctor_set(v___x_489_, 2, v___x_487_);
lean_ctor_set(v___x_489_, 3, v___x_488_);
v___x_490_ = l_Lean_Syntax_node2(v___x_473_, v___x_477_, v___x_484_, v___x_489_);
v___x_491_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_492_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_492_, 0, v___x_473_);
lean_ctor_set(v___x_492_, 1, v___x_477_);
lean_ctor_set(v___x_492_, 2, v___x_491_);
v___x_493_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_473_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = l_Lean_Syntax_node5(v___x_473_, v___x_474_, v___x_476_, v___x_482_, v___x_490_, v___x_492_, v___x_494_);
v___x_496_ = lean_unsigned_to_nat(1u);
v___x_497_ = lean_mk_empty_array_with_capacity(v___x_496_);
v___x_498_ = lean_array_push(v___x_497_, v___x_495_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_498_);
v___x_500_ = v___x_456_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_a_454_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
else
{
lean_dec_ref(v_params_445_);
return v___x_452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getParams___boxed(lean_object* v_alt_529_, lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_Elab_Term_MatchExpr_getParams(v_alt_529_, v_a_530_, v_a_531_);
lean_dec_ref(v_a_530_);
return v_res_532_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__7(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__6));
v___x_550_ = l_String_toRawSubstring_x27(v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__8(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_box(0);
v___x_552_ = l_unsafeCast___redArg(v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getActuals(lean_object* v_discr_591_, lean_object* v_alt_592_, lean_object* v_a_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_var_x3f_595_; lean_object* v_actuals_596_; lean_object* v_actuals_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v_actuals_634_; 
v_var_x3f_595_ = lean_ctor_get(v_alt_592_, 0);
lean_inc(v_var_x3f_595_);
v_actuals_596_ = lean_ctor_get(v_alt_592_, 5);
lean_inc(v_actuals_596_);
lean_dec_ref(v_alt_592_);
v_actuals_634_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch___closed__0));
if (lean_obj_tag(v_var_x3f_595_) == 0)
{
lean_dec(v_discr_591_);
v_actuals_598_ = v_actuals_634_;
v___y_599_ = v_a_593_;
v___y_600_ = v_a_594_;
goto v___jp_597_;
}
else
{
lean_object* v_actuals_635_; 
lean_dec_ref_known(v_var_x3f_595_, 1);
v_actuals_635_ = lean_array_push(v_actuals_634_, v_discr_591_);
v_actuals_598_ = v_actuals_635_;
v___y_599_ = v_a_593_;
v___y_600_ = v_a_594_;
goto v___jp_597_;
}
v___jp_597_:
{
lean_object* v___x_601_; lean_object* v_actuals_602_; lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_601_ = lean_array_mk(v_actuals_596_);
v_actuals_602_ = l_Array_append___redArg(v_actuals_598_, v___x_601_);
lean_dec_ref(v___x_601_);
v___x_603_ = lean_array_get_size(v_actuals_602_);
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_nat_dec_eq(v___x_603_, v___x_604_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; 
v___x_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_606_, 0, v_actuals_602_);
lean_ctor_set(v___x_606_, 1, v___y_600_);
return v___x_606_;
}
else
{
lean_object* v_quotContext_607_; lean_object* v_currMacroScope_608_; lean_object* v_ref_609_; uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec_ref(v_actuals_602_);
v_quotContext_607_ = lean_ctor_get(v___y_599_, 1);
v_currMacroScope_608_ = lean_ctor_get(v___y_599_, 2);
v_ref_609_ = lean_ctor_get(v___y_599_, 5);
v___x_610_ = 0;
v___x_611_ = l_Lean_SourceInfo_fromRef(v_ref_609_, v___x_610_);
v___x_612_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__1));
v___x_613_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__3));
v___x_614_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
lean_inc_n(v___x_611_, 6);
v___x_615_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_611_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__5));
v___x_617_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__7, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__7_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__7);
v___x_618_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__8, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__8_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__8);
lean_inc(v_currMacroScope_608_);
lean_inc(v_quotContext_607_);
v___x_619_ = l_Lean_addMacroScope(v_quotContext_607_, v___x_618_, v_currMacroScope_608_);
v___x_620_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__22));
v___x_621_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_621_, 0, v___x_611_);
lean_ctor_set(v___x_621_, 1, v___x_617_);
lean_ctor_set(v___x_621_, 2, v___x_619_);
lean_ctor_set(v___x_621_, 3, v___x_620_);
v___x_622_ = l_Lean_Syntax_node1(v___x_611_, v___x_616_, v___x_621_);
v___x_623_ = l_Lean_Syntax_node2(v___x_611_, v___x_613_, v___x_615_, v___x_622_);
v___x_624_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_625_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_626_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_626_, 0, v___x_611_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set(v___x_626_, 2, v___x_625_);
v___x_627_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_628_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_611_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = l_Lean_Syntax_node3(v___x_611_, v___x_612_, v___x_623_, v___x_626_, v___x_628_);
v___x_630_ = lean_unsigned_to_nat(1u);
v___x_631_ = lean_mk_empty_array_with_capacity(v___x_630_);
v___x_632_ = lean_array_push(v___x_631_, v___x_629_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___y_600_);
return v___x_633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_getActuals___boxed(lean_object* v_discr_636_, lean_object* v_alt_637_, lean_object* v_a_638_, lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_Elab_Term_MatchExpr_getActuals(v_discr_636_, v_alt_637_, v_a_638_, v_a_639_);
lean_dec_ref(v_a_638_);
return v_res_640_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__2));
v___x_649_ = l_Lean_mkAtom(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__4(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_650_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3, &l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3_once, _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3);
v___x_651_ = lean_unsigned_to_nat(3u);
v___x_652_ = lean_mk_empty_array_with_capacity(v___x_651_);
v___x_653_ = lean_array_push(v___x_652_, v___x_650_);
return v___x_653_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__5(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3, &l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3_once, _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__3);
v___x_655_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__4, &l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__4_once, _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__4);
v___x_656_ = lean_array_push(v___x_655_, v___x_654_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName(lean_object* v_ident_657_){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_658_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__1));
v___x_659_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__5, &l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__5_once, _init_l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName___closed__5);
v___x_660_ = lean_array_push(v___x_659_, v_ident_657_);
v___x_661_ = lean_box(2);
v___x_662_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
lean_ctor_set(v___x_662_, 1, v___x_658_);
lean_ctor_set(v___x_662_, 2, v___x_660_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0(uint8_t v___x_663_, lean_object* v_____do__lift_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = l_Lean_SourceInfo_fromRef(v_____do__lift_664_, v___x_663_);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___y_666_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0___boxed(lean_object* v___x_669_, lean_object* v_____do__lift_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
uint8_t v___x_18790__boxed_673_; lean_object* v_res_674_; 
v___x_18790__boxed_673_ = lean_unbox(v___x_669_);
v_res_674_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0(v___x_18790__boxed_673_, v_____do__lift_670_, v___y_671_, v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v_____do__lift_670_);
return v_res_674_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__8));
v___x_697_ = l_String_toRawSubstring_x27(v___x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(lean_object* v_alts_705_, lean_object* v_discr_706_, lean_object* v_as_x27_707_, lean_object* v_b_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
if (lean_obj_tag(v_as_x27_707_) == 0)
{
lean_object* v___x_711_; 
lean_dec(v_discr_706_);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v_b_708_);
lean_ctor_set(v___x_711_, 1, v___y_710_);
return v___x_711_;
}
else
{
lean_object* v_head_712_; lean_object* v_tail_713_; lean_object* v___x_714_; 
v_head_712_ = lean_ctor_get(v_as_x27_707_, 0);
v_tail_713_ = lean_ctor_get(v_as_x27_707_, 1);
v___x_714_ = l_List_find_x3f___at___00Lean_Elab_Term_MatchExpr_getAltFor_x3f_spec__0(v_head_712_, v_alts_705_);
if (lean_obj_tag(v___x_714_) == 1)
{
lean_object* v_val_715_; lean_object* v___x_716_; lean_object* v_a_717_; lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_773_; 
v_val_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc_n(v_val_715_, 2);
lean_dec_ref_known(v___x_714_, 1);
lean_inc(v_discr_706_);
v___x_716_ = l_Lean_Elab_Term_MatchExpr_getActuals(v_discr_706_, v_val_715_, v___y_709_, v___y_710_);
v_a_717_ = lean_ctor_get(v___x_716_, 0);
v_a_718_ = lean_ctor_get(v___x_716_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_773_ == 0)
{
v___x_720_ = v___x_716_;
v_isShared_721_ = v_isSharedCheck_773_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_inc(v_a_717_);
lean_dec(v___x_716_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_773_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v_quotContext_722_; lean_object* v_currMacroScope_723_; lean_object* v_ref_724_; uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
v_quotContext_722_ = lean_ctor_get(v___y_709_, 1);
v_currMacroScope_723_ = lean_ctor_get(v___y_709_, 2);
v_ref_724_ = lean_ctor_get(v___y_709_, 5);
v___x_725_ = 0;
v___x_726_ = l_Lean_SourceInfo_fromRef(v_ref_724_, v___x_725_);
v___x_727_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__0));
lean_inc(v___x_726_);
if (v_isShared_721_ == 0)
{
lean_ctor_set_tag(v___x_720_, 2);
lean_ctor_set(v___x_720_, 1, v___x_727_);
lean_ctor_set(v___x_720_, 0, v___x_726_);
v___x_729_ = v___x_720_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_727_);
v___x_729_ = v_reuseFailAlloc_772_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v_k_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_730_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2));
v___x_731_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4));
v___x_732_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6));
v___x_733_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__3));
v___x_734_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
lean_inc_n(v___x_726_, 15);
v___x_735_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_726_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__5));
v___x_737_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__7, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__7_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__7);
v___x_738_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__8, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__8_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__8);
lean_inc_n(v_currMacroScope_723_, 2);
lean_inc_n(v_quotContext_722_, 2);
v___x_739_ = l_Lean_addMacroScope(v_quotContext_722_, v___x_738_, v_currMacroScope_723_);
v___x_740_ = lean_box(0);
v___x_741_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__22));
v___x_742_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_742_, 0, v___x_726_);
lean_ctor_set(v___x_742_, 1, v___x_737_);
lean_ctor_set(v___x_742_, 2, v___x_739_);
lean_ctor_set(v___x_742_, 3, v___x_741_);
v___x_743_ = l_Lean_Syntax_node1(v___x_726_, v___x_736_, v___x_742_);
v___x_744_ = l_Lean_Syntax_node2(v___x_726_, v___x_733_, v___x_735_, v___x_743_);
v___x_745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_726_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
lean_inc(v_discr_706_);
v___x_747_ = l_Lean_Syntax_node3(v___x_726_, v___x_732_, v___x_744_, v_discr_706_, v___x_746_);
v___x_748_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__7));
v___x_749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_726_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__9, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__9_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__9);
v___x_751_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__10));
v___x_752_ = l_Lean_addMacroScope(v_quotContext_722_, v___x_751_, v_currMacroScope_723_);
v___x_753_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_753_, 0, v___x_726_);
lean_ctor_set(v___x_753_, 1, v___x_750_);
lean_ctor_set(v___x_753_, 2, v___x_752_);
lean_ctor_set(v___x_753_, 3, v___x_740_);
v___x_754_ = l_Lean_Syntax_node3(v___x_726_, v___x_731_, v___x_747_, v___x_749_, v___x_753_);
v___x_755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
lean_inc(v_head_712_);
v___x_756_ = l_Lean_Elab_Term_MatchExpr_toDoubleQuotedName(v_head_712_);
v___x_757_ = l_Lean_Syntax_node1(v___x_726_, v___x_755_, v___x_756_);
v_k_758_ = lean_ctor_get(v_val_715_, 4);
lean_inc(v_k_758_);
lean_dec(v_val_715_);
v___x_759_ = l_Lean_Syntax_node2(v___x_726_, v___x_730_, v___x_754_, v___x_757_);
v___x_760_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__12));
v___x_761_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__13));
v___x_762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_726_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_764_ = l_unsafeCast___redArg(v_a_717_);
lean_dec(v_a_717_);
v___x_765_ = l_Array_append___redArg(v___x_763_, v___x_764_);
lean_dec(v___x_764_);
v___x_766_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_766_, 0, v___x_726_);
lean_ctor_set(v___x_766_, 1, v___x_755_);
lean_ctor_set(v___x_766_, 2, v___x_765_);
v___x_767_ = l_Lean_Syntax_node2(v___x_726_, v___x_730_, v_k_758_, v___x_766_);
v___x_768_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__14));
v___x_769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_726_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = l_Lean_Syntax_node6(v___x_726_, v___x_760_, v___x_729_, v___x_759_, v___x_762_, v___x_767_, v___x_769_, v_b_708_);
v_as_x27_707_ = v_tail_713_;
v_b_708_ = v___x_770_;
v___y_710_ = v_a_718_;
goto _start;
}
}
}
else
{
lean_dec(v___x_714_);
v_as_x27_707_ = v_tail_713_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___boxed(lean_object* v_alts_775_, lean_object* v_discr_776_, lean_object* v_as_x27_777_, lean_object* v_b_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(v_alts_775_, v_discr_776_, v_as_x27_777_, v_b_778_, v___y_779_, v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v_as_x27_777_);
lean_dec(v_alts_775_);
return v_res_781_;
}
}
static lean_object* _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_783_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__0));
v___x_784_ = l_String_toRawSubstring_x27(v___x_783_);
return v___x_784_;
}
}
static lean_object* _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__7));
v___x_796_ = l_String_toRawSubstring_x27(v___x_795_);
return v___x_796_;
}
}
static lean_object* _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11(void){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__10));
v___x_801_ = l_String_toRawSubstring_x27(v___x_800_);
return v___x_801_;
}
}
static lean_object* _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__24));
v___x_837_ = l_String_toRawSubstring_x27(v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__32));
v___x_855_ = l_String_toRawSubstring_x27(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__36(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__35));
v___x_860_ = l_String_toRawSubstring_x27(v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop(lean_object* v_kElse_880_, lean_object* v_discr_881_, lean_object* v_alts_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_macroScope_885_; lean_object* v_traceMsgs_886_; lean_object* v_expandedMacroDecls_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_1157_; 
v_macroScope_885_ = lean_ctor_get(v_a_884_, 0);
v_traceMsgs_886_ = lean_ctor_get(v_a_884_, 1);
v_expandedMacroDecls_887_ = lean_ctor_get(v_a_884_, 2);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_a_884_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_889_ = v_a_884_;
v_isShared_890_ = v_isSharedCheck_1157_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_expandedMacroDecls_887_);
lean_inc(v_traceMsgs_886_);
lean_inc(v_macroScope_885_);
lean_dec(v_a_884_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_1157_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v_methods_891_; lean_object* v_quotContext_892_; lean_object* v_currRecDepth_893_; lean_object* v_maxRecDepth_894_; lean_object* v_ref_895_; lean_object* v_funNamesToMatch_896_; uint8_t v_saveActual_897_; lean_object* v_actual_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v_methods_891_ = lean_ctor_get(v_a_883_, 0);
v_quotContext_892_ = lean_ctor_get(v_a_883_, 1);
v_currRecDepth_893_ = lean_ctor_get(v_a_883_, 3);
v_maxRecDepth_894_ = lean_ctor_get(v_a_883_, 4);
v_ref_895_ = lean_ctor_get(v_a_883_, 5);
v_funNamesToMatch_896_ = l_Lean_Elab_Term_MatchExpr_getFunNamesToMatch(v_alts_882_);
v_saveActual_897_ = l_List_any___at___00Lean_Elab_Term_MatchExpr_shouldSaveActual_spec__0(v_alts_882_);
v___x_1139_ = lean_unsigned_to_nat(1u);
v___x_1140_ = lean_nat_add(v_macroScope_885_, v___x_1139_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_1140_);
v___x_1142_ = v___x_889_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1140_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_traceMsgs_886_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_expandedMacroDecls_887_);
v___x_1142_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1141_;
}
v___jp_898_:
{
lean_object* v_altsNext_902_; uint8_t v___x_903_; 
lean_inc(v_alts_882_);
v_altsNext_902_ = l_Lean_Elab_Term_MatchExpr_next(v_alts_882_, v_actual_899_);
v___x_903_ = l_List_isEmpty___redArg(v_altsNext_902_);
if (v___x_903_ == 0)
{
lean_object* v_quotContext_904_; lean_object* v_currMacroScope_905_; lean_object* v_ref_906_; lean_object* v___x_907_; 
v_quotContext_904_ = lean_ctor_get(v___y_900_, 1);
v_currMacroScope_905_ = lean_ctor_get(v___y_900_, 2);
v_ref_906_ = lean_ctor_get(v___y_900_, 5);
v___x_907_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0(v___x_903_, v_ref_906_, v___y_900_, v___y_901_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_908_);
v_a_909_ = lean_ctor_get(v___x_907_, 1);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_907_, 2);
v___x_910_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1);
v___x_911_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__2));
lean_inc(v_currMacroScope_905_);
lean_inc(v_quotContext_904_);
v___x_912_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_911_, v_currMacroScope_905_);
v___x_913_ = lean_box(0);
lean_inc(v___x_912_);
v___x_914_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_914_, 0, v_a_908_);
lean_ctor_set(v___x_914_, 1, v___x_910_);
lean_ctor_set(v___x_914_, 2, v___x_912_);
lean_ctor_set(v___x_914_, 3, v___x_913_);
lean_inc(v_kElse_880_);
v___x_915_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop(v_kElse_880_, v___x_914_, v_altsNext_902_, v___y_900_, v_a_909_);
if (lean_obj_tag(v___x_915_) == 0)
{
if (v_saveActual_897_ == 0)
{
lean_object* v_a_916_; lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_996_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
v_a_917_ = lean_ctor_get(v___x_915_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_996_ == 0)
{
v___x_919_ = v___x_915_;
v_isShared_920_ = v_isSharedCheck_996_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_inc(v_a_916_);
lean_dec(v___x_915_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_996_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_921_ = l_Lean_SourceInfo_fromRef(v_ref_906_, v___x_903_);
v___x_922_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__4));
v___x_923_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__0));
lean_inc(v___x_921_);
if (v_isShared_920_ == 0)
{
lean_ctor_set_tag(v___x_919_, 2);
lean_ctor_set(v___x_919_, 1, v___x_923_);
lean_ctor_set(v___x_919_, 0, v___x_921_);
v___x_925_ = v___x_919_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v___x_923_);
v___x_925_ = v_reuseFailAlloc_995_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_926_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6));
v___x_927_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8);
v___x_928_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__9));
lean_inc_n(v_currMacroScope_905_, 4);
lean_inc_n(v_quotContext_904_, 4);
v___x_929_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_928_, v_currMacroScope_905_);
lean_inc_n(v___x_921_, 30);
v___x_930_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_930_, 0, v___x_921_);
lean_ctor_set(v___x_930_, 1, v___x_927_);
lean_ctor_set(v___x_930_, 2, v___x_929_);
lean_ctor_set(v___x_930_, 3, v___x_913_);
lean_inc_ref(v___x_930_);
v___x_931_ = l_Lean_Syntax_node1(v___x_921_, v___x_926_, v___x_930_);
v___x_932_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5));
v___x_933_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_921_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4));
v___x_935_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6));
v___x_936_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__3));
v___x_937_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
v___x_938_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_921_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__5));
v___x_940_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__7, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__7_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__7);
v___x_941_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__8, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__8_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__8);
v___x_942_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_941_, v_currMacroScope_905_);
v___x_943_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__22));
v___x_944_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_944_, 0, v___x_921_);
lean_ctor_set(v___x_944_, 1, v___x_940_);
lean_ctor_set(v___x_944_, 2, v___x_942_);
lean_ctor_set(v___x_944_, 3, v___x_943_);
v___x_945_ = l_Lean_Syntax_node1(v___x_921_, v___x_939_, v___x_944_);
v___x_946_ = l_Lean_Syntax_node2(v___x_921_, v___x_936_, v___x_938_, v___x_945_);
v___x_947_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_948_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_921_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
lean_inc_ref(v___x_948_);
lean_inc_n(v_discr_881_, 2);
lean_inc(v___x_946_);
v___x_949_ = l_Lean_Syntax_node3(v___x_921_, v___x_935_, v___x_946_, v_discr_881_, v___x_948_);
v___x_950_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__7));
v___x_951_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_921_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11);
v___x_953_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__12));
v___x_954_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_953_, v_currMacroScope_905_);
v___x_955_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_955_, 0, v___x_921_);
lean_ctor_set(v___x_955_, 1, v___x_952_);
lean_ctor_set(v___x_955_, 2, v___x_954_);
lean_ctor_set(v___x_955_, 3, v___x_913_);
v___x_956_ = l_Lean_Syntax_node3(v___x_921_, v___x_934_, v___x_949_, v___x_951_, v___x_955_);
v___x_957_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__13));
v___x_958_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_921_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13));
v___x_960_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14));
v___x_961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_921_);
lean_ctor_set(v___x_961_, 1, v___x_959_);
v___x_962_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16));
v___x_963_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_964_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_965_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_965_, 0, v___x_921_);
lean_ctor_set(v___x_965_, 1, v___x_963_);
lean_ctor_set(v___x_965_, 2, v___x_964_);
lean_inc_ref_n(v___x_965_, 3);
v___x_966_ = l_Lean_Syntax_node1(v___x_921_, v___x_962_, v___x_965_);
v___x_967_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18));
v___x_968_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20));
v___x_969_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22));
v___x_970_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_970_, 0, v___x_921_);
lean_ctor_set(v___x_970_, 1, v___x_910_);
lean_ctor_set(v___x_970_, 2, v___x_912_);
lean_ctor_set(v___x_970_, 3, v___x_913_);
v___x_971_ = l_Lean_Syntax_node1(v___x_921_, v___x_969_, v___x_970_);
v___x_972_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23));
v___x_973_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_921_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v___x_974_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2));
v___x_975_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25);
v___x_976_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27));
v___x_977_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_976_, v_currMacroScope_905_);
v___x_978_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__30));
v___x_979_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_979_, 0, v___x_921_);
lean_ctor_set(v___x_979_, 1, v___x_975_);
lean_ctor_set(v___x_979_, 2, v___x_977_);
lean_ctor_set(v___x_979_, 3, v___x_978_);
v___x_980_ = l_Lean_Syntax_node2(v___x_921_, v___x_963_, v_discr_881_, v___x_930_);
v___x_981_ = l_Lean_Syntax_node2(v___x_921_, v___x_974_, v___x_979_, v___x_980_);
v___x_982_ = l_Lean_Syntax_node5(v___x_921_, v___x_968_, v___x_971_, v___x_965_, v___x_965_, v___x_973_, v___x_981_);
v___x_983_ = l_Lean_Syntax_node1(v___x_921_, v___x_967_, v___x_982_);
v___x_984_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31));
v___x_985_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_921_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_Syntax_node5(v___x_921_, v___x_960_, v___x_961_, v___x_966_, v___x_983_, v___x_985_, v_a_916_);
v___x_987_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__14));
v___x_988_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_921_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__1));
v___x_990_ = l_Lean_Syntax_node3(v___x_921_, v___x_989_, v___x_946_, v___x_965_, v___x_948_);
v___x_991_ = l_Lean_Syntax_node1(v___x_921_, v___x_963_, v___x_990_);
v___x_992_ = l_Lean_Syntax_node2(v___x_921_, v___x_974_, v_kElse_880_, v___x_991_);
v___x_993_ = l_Lean_Syntax_node8(v___x_921_, v___x_922_, v___x_925_, v___x_931_, v___x_933_, v___x_956_, v___x_958_, v___x_986_, v___x_988_, v___x_992_);
v___x_994_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(v_alts_882_, v_discr_881_, v_funNamesToMatch_896_, v___x_993_, v___y_900_, v_a_917_);
lean_dec_ref(v___y_900_);
lean_dec(v_funNamesToMatch_896_);
lean_dec(v_alts_882_);
return v___x_994_;
}
}
}
else
{
lean_object* v_a_997_; lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1102_; 
v_a_997_ = lean_ctor_get(v___x_915_, 0);
v_a_998_ = lean_ctor_get(v___x_915_, 1);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1000_ = v___x_915_;
v_isShared_1001_ = v_isSharedCheck_1102_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_inc(v_a_997_);
lean_dec(v___x_915_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1102_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; 
v___x_1002_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___lam__0(v___x_903_, v_ref_906_, v___y_900_, v_a_998_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v_a_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1008_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc_n(v_a_1003_, 2);
v_a_1004_ = lean_ctor_get(v___x_1002_, 1);
lean_inc(v_a_1004_);
lean_dec_ref_known(v___x_1002_, 2);
v___x_1005_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__4));
v___x_1006_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__0));
if (v_isShared_1001_ == 0)
{
lean_ctor_set_tag(v___x_1000_, 2);
lean_ctor_set(v___x_1000_, 1, v___x_1006_);
lean_ctor_set(v___x_1000_, 0, v_a_1003_);
v___x_1008_ = v___x_1000_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1003_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1009_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__6));
v___x_1010_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__8);
v___x_1011_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__9));
lean_inc_n(v_currMacroScope_905_, 6);
lean_inc_n(v_quotContext_904_, 6);
v___x_1012_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_1011_, v_currMacroScope_905_);
lean_inc_n(v_a_1003_, 37);
v___x_1013_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1013_, 0, v_a_1003_);
lean_ctor_set(v___x_1013_, 1, v___x_1010_);
lean_ctor_set(v___x_1013_, 2, v___x_1012_);
lean_ctor_set(v___x_1013_, 3, v___x_913_);
lean_inc_ref(v___x_1013_);
v___x_1014_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1009_, v___x_1013_);
v___x_1015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5));
v___x_1016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1016_, 0, v_a_1003_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__4));
v___x_1018_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__6));
v___x_1019_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__3));
v___x_1020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
v___x_1021_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1021_, 0, v_a_1003_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__5));
v___x_1023_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__7, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__7_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__7);
v___x_1024_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__8, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__8_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__8);
v___x_1025_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_1024_, v_currMacroScope_905_);
v___x_1026_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__22));
v___x_1027_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1027_, 0, v_a_1003_);
lean_ctor_set(v___x_1027_, 1, v___x_1023_);
lean_ctor_set(v___x_1027_, 2, v___x_1025_);
lean_ctor_set(v___x_1027_, 3, v___x_1026_);
v___x_1028_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1022_, v___x_1027_);
v___x_1029_ = l_Lean_Syntax_node2(v_a_1003_, v___x_1019_, v___x_1021_, v___x_1028_);
v___x_1030_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_1031_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1031_, 0, v_a_1003_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
lean_inc_ref(v___x_1031_);
lean_inc_n(v_discr_881_, 2);
lean_inc(v___x_1029_);
v___x_1032_ = l_Lean_Syntax_node3(v_a_1003_, v___x_1018_, v___x_1029_, v_discr_881_, v___x_1031_);
v___x_1033_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__7));
v___x_1034_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_a_1003_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__11);
v___x_1036_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__12));
v___x_1037_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_1036_, v_currMacroScope_905_);
v___x_1038_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1038_, 0, v_a_1003_);
lean_ctor_set(v___x_1038_, 1, v___x_1035_);
lean_ctor_set(v___x_1038_, 2, v___x_1037_);
lean_ctor_set(v___x_1038_, 3, v___x_913_);
v___x_1039_ = l_Lean_Syntax_node3(v_a_1003_, v___x_1017_, v___x_1032_, v___x_1034_, v___x_1038_);
v___x_1040_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__13));
v___x_1041_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_a_1003_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13));
v___x_1043_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14));
v___x_1044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1044_, 0, v_a_1003_);
lean_ctor_set(v___x_1044_, 1, v___x_1042_);
v___x_1045_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16));
v___x_1046_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_1047_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_1048_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1048_, 0, v_a_1003_);
lean_ctor_set(v___x_1048_, 1, v___x_1046_);
lean_ctor_set(v___x_1048_, 2, v___x_1047_);
lean_inc_ref_n(v___x_1048_, 5);
v___x_1049_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1045_, v___x_1048_);
v___x_1050_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18));
v___x_1051_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20));
v___x_1052_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22));
v___x_1053_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33);
v___x_1054_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__34));
v___x_1055_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_1054_, v_currMacroScope_905_);
v___x_1056_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1056_, 0, v_a_1003_);
lean_ctor_set(v___x_1056_, 1, v___x_1053_);
lean_ctor_set(v___x_1056_, 2, v___x_1055_);
lean_ctor_set(v___x_1056_, 3, v___x_913_);
v___x_1057_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1052_, v___x_1056_);
v___x_1058_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23));
v___x_1059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1059_, 0, v_a_1003_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2));
v___x_1061_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__36, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__36_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__36);
v___x_1062_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__38));
v___x_1063_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_1062_, v_currMacroScope_905_);
v___x_1064_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__43));
v___x_1065_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1065_, 0, v_a_1003_);
lean_ctor_set(v___x_1065_, 1, v___x_1061_);
lean_ctor_set(v___x_1065_, 2, v___x_1063_);
lean_ctor_set(v___x_1065_, 3, v___x_1064_);
v___x_1066_ = l_Lean_Syntax_node2(v_a_1003_, v___x_1046_, v_discr_881_, v___x_1013_);
lean_inc(v___x_1066_);
v___x_1067_ = l_Lean_Syntax_node2(v_a_1003_, v___x_1060_, v___x_1065_, v___x_1066_);
lean_inc_ref(v___x_1059_);
v___x_1068_ = l_Lean_Syntax_node5(v_a_1003_, v___x_1051_, v___x_1057_, v___x_1048_, v___x_1048_, v___x_1059_, v___x_1067_);
v___x_1069_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1050_, v___x_1068_);
v___x_1070_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31));
v___x_1071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_a_1003_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1072_, 0, v_a_1003_);
lean_ctor_set(v___x_1072_, 1, v___x_910_);
lean_ctor_set(v___x_1072_, 2, v___x_912_);
lean_ctor_set(v___x_1072_, 3, v___x_913_);
v___x_1073_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1052_, v___x_1072_);
v___x_1074_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__25);
v___x_1075_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__27));
v___x_1076_ = l_Lean_addMacroScope(v_quotContext_904_, v___x_1075_, v_currMacroScope_905_);
v___x_1077_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__30));
v___x_1078_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1078_, 0, v_a_1003_);
lean_ctor_set(v___x_1078_, 1, v___x_1074_);
lean_ctor_set(v___x_1078_, 2, v___x_1076_);
lean_ctor_set(v___x_1078_, 3, v___x_1077_);
v___x_1079_ = l_Lean_Syntax_node2(v_a_1003_, v___x_1060_, v___x_1078_, v___x_1066_);
v___x_1080_ = l_Lean_Syntax_node5(v_a_1003_, v___x_1051_, v___x_1073_, v___x_1048_, v___x_1048_, v___x_1059_, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1050_, v___x_1080_);
lean_inc_ref(v___x_1071_);
lean_inc(v___x_1049_);
lean_inc_ref(v___x_1044_);
v___x_1082_ = l_Lean_Syntax_node5(v_a_1003_, v___x_1043_, v___x_1044_, v___x_1049_, v___x_1081_, v___x_1071_, v_a_997_);
v___x_1083_ = l_Lean_Syntax_node5(v_a_1003_, v___x_1043_, v___x_1044_, v___x_1049_, v___x_1069_, v___x_1071_, v___x_1082_);
v___x_1084_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__14));
v___x_1085_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1085_, 0, v_a_1003_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__1));
v___x_1087_ = l_Lean_Syntax_node3(v_a_1003_, v___x_1086_, v___x_1029_, v___x_1048_, v___x_1031_);
v___x_1088_ = l_Lean_Syntax_node1(v_a_1003_, v___x_1046_, v___x_1087_);
v___x_1089_ = l_Lean_Syntax_node2(v_a_1003_, v___x_1060_, v_kElse_880_, v___x_1088_);
v___x_1090_ = l_Lean_Syntax_node8(v_a_1003_, v___x_1005_, v___x_1008_, v___x_1014_, v___x_1016_, v___x_1039_, v___x_1041_, v___x_1083_, v___x_1085_, v___x_1089_);
v___x_1091_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(v_alts_882_, v_discr_881_, v_funNamesToMatch_896_, v___x_1090_, v___y_900_, v_a_1004_);
lean_dec_ref(v___y_900_);
lean_dec(v_funNamesToMatch_896_);
lean_dec(v_alts_882_);
return v___x_1091_;
}
}
else
{
lean_object* v_a_1093_; lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
lean_del_object(v___x_1000_);
lean_dec(v_a_997_);
lean_dec(v___x_912_);
lean_dec_ref(v___y_900_);
lean_dec(v_funNamesToMatch_896_);
lean_dec(v_alts_882_);
lean_dec(v_discr_881_);
lean_dec(v_kElse_880_);
v_a_1093_ = lean_ctor_get(v___x_1002_, 0);
v_a_1094_ = lean_ctor_get(v___x_1002_, 1);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1002_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_inc(v_a_1093_);
lean_dec(v___x_1002_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1093_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
}
}
else
{
lean_dec(v___x_912_);
lean_dec_ref(v___y_900_);
lean_dec(v_funNamesToMatch_896_);
lean_dec(v_alts_882_);
lean_dec(v_discr_881_);
lean_dec(v_kElse_880_);
return v___x_915_;
}
}
else
{
lean_object* v_a_1103_; lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec(v_altsNext_902_);
lean_dec_ref(v___y_900_);
lean_dec(v_funNamesToMatch_896_);
lean_dec(v_alts_882_);
lean_dec(v_discr_881_);
lean_dec(v_kElse_880_);
v_a_1103_ = lean_ctor_get(v___x_907_, 0);
v_a_1104_ = lean_ctor_get(v___x_907_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_907_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_inc(v_a_1103_);
lean_dec(v___x_907_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1103_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_object* v_quotContext_1112_; lean_object* v_currMacroScope_1113_; lean_object* v_ref_1114_; uint8_t v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec(v_altsNext_902_);
v_quotContext_1112_ = lean_ctor_get(v___y_900_, 1);
v_currMacroScope_1113_ = lean_ctor_get(v___y_900_, 2);
v_ref_1114_ = lean_ctor_get(v___y_900_, 5);
v___x_1115_ = 0;
v___x_1116_ = l_Lean_SourceInfo_fromRef(v_ref_1114_, v___x_1115_);
v___x_1117_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2));
v___x_1118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_1119_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__1));
v___x_1120_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__3));
v___x_1121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
lean_inc_n(v___x_1116_, 8);
v___x_1122_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1116_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
v___x_1123_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__5));
v___x_1124_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__7, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__7_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__7);
v___x_1125_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getActuals___closed__8, &l_Lean_Elab_Term_MatchExpr_getActuals___closed__8_once, _init_l_Lean_Elab_Term_MatchExpr_getActuals___closed__8);
lean_inc(v_currMacroScope_1113_);
lean_inc(v_quotContext_1112_);
v___x_1126_ = l_Lean_addMacroScope(v_quotContext_1112_, v___x_1125_, v_currMacroScope_1113_);
v___x_1127_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getActuals___closed__22));
v___x_1128_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1116_);
lean_ctor_set(v___x_1128_, 1, v___x_1124_);
lean_ctor_set(v___x_1128_, 2, v___x_1126_);
lean_ctor_set(v___x_1128_, 3, v___x_1127_);
v___x_1129_ = l_Lean_Syntax_node1(v___x_1116_, v___x_1123_, v___x_1128_);
v___x_1130_ = l_Lean_Syntax_node2(v___x_1116_, v___x_1120_, v___x_1122_, v___x_1129_);
v___x_1131_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_1132_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1116_);
lean_ctor_set(v___x_1132_, 1, v___x_1118_);
lean_ctor_set(v___x_1132_, 2, v___x_1131_);
v___x_1133_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_1134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1116_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = l_Lean_Syntax_node3(v___x_1116_, v___x_1119_, v___x_1130_, v___x_1132_, v___x_1134_);
v___x_1136_ = l_Lean_Syntax_node1(v___x_1116_, v___x_1118_, v___x_1135_);
v___x_1137_ = l_Lean_Syntax_node2(v___x_1116_, v___x_1117_, v_kElse_880_, v___x_1136_);
v___x_1138_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(v_alts_882_, v_discr_881_, v_funNamesToMatch_896_, v___x_1137_, v___y_900_, v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v_funNamesToMatch_896_);
lean_dec(v_alts_882_);
return v___x_1138_;
}
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; 
lean_inc(v_ref_895_);
lean_inc(v_maxRecDepth_894_);
lean_inc(v_currRecDepth_893_);
lean_inc(v_macroScope_885_);
lean_inc(v_quotContext_892_);
lean_inc(v_methods_891_);
v___x_1143_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1143_, 0, v_methods_891_);
lean_ctor_set(v___x_1143_, 1, v_quotContext_892_);
lean_ctor_set(v___x_1143_, 2, v_macroScope_885_);
lean_ctor_set(v___x_1143_, 3, v_currRecDepth_893_);
lean_ctor_set(v___x_1143_, 4, v_maxRecDepth_894_);
lean_ctor_set(v___x_1143_, 5, v_ref_895_);
if (v_saveActual_897_ == 0)
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_dec(v_macroScope_885_);
v___x_1144_ = l_Lean_SourceInfo_fromRef(v_ref_895_, v_saveActual_897_);
v___x_1145_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1));
v___x_1146_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__0));
lean_inc(v___x_1144_);
v___x_1147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1144_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_Syntax_node1(v___x_1144_, v___x_1145_, v___x_1147_);
v_actual_899_ = v___x_1148_;
v___y_900_ = v___x_1143_;
v___y_901_ = v___x_1142_;
goto v___jp_898_;
}
else
{
uint8_t v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1149_ = 0;
v___x_1150_ = l_Lean_SourceInfo_fromRef(v_ref_895_, v___x_1149_);
v___x_1151_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__33);
v___x_1152_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__34));
lean_inc(v_quotContext_892_);
v___x_1153_ = l_Lean_addMacroScope(v_quotContext_892_, v___x_1152_, v_macroScope_885_);
v___x_1154_ = lean_box(0);
v___x_1155_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1150_);
lean_ctor_set(v___x_1155_, 1, v___x_1151_);
lean_ctor_set(v___x_1155_, 2, v___x_1153_);
lean_ctor_set(v___x_1155_, 3, v___x_1154_);
v_actual_899_ = v___x_1155_;
v___y_900_ = v___x_1143_;
v___y_901_ = v___x_1142_;
goto v___jp_898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___boxed(lean_object* v_kElse_1158_, lean_object* v_discr_1159_, lean_object* v_alts_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop(v_kElse_1158_, v_discr_1159_, v_alts_1160_, v_a_1161_, v_a_1162_);
lean_dec_ref(v_a_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0(lean_object* v_alts_1164_, lean_object* v_discr_1165_, lean_object* v_as_1166_, lean_object* v_as_x27_1167_, lean_object* v_b_1168_, lean_object* v_a_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg(v_alts_1164_, v_discr_1165_, v_as_x27_1167_, v_b_1168_, v___y_1170_, v___y_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___boxed(lean_object* v_alts_1173_, lean_object* v_discr_1174_, lean_object* v_as_1175_, lean_object* v_as_x27_1176_, lean_object* v_b_1177_, lean_object* v_a_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0(v_alts_1173_, v_discr_1174_, v_as_1175_, v_as_x27_1176_, v_b_1177_, v_a_1178_, v___y_1179_, v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v_as_x27_1176_);
lean_dec(v_as_1175_);
lean_dec(v_alts_1173_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate___lam__0(lean_object* v_____do__lift_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
uint8_t v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = 0;
v___x_1186_ = l_Lean_SourceInfo_fromRef(v_____do__lift_1182_, v___x_1185_);
v___x_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___y_1184_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate___lam__0___boxed(lean_object* v_____do__lift_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_Elab_Term_MatchExpr_generate___lam__0(v_____do__lift_1188_, v___y_1189_, v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v_____do__lift_1188_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg(lean_object* v_as_x27_1198_, lean_object* v_b_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
if (lean_obj_tag(v_as_x27_1198_) == 0)
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v_b_1199_);
lean_ctor_set(v___x_1202_, 1, v___y_1201_);
return v___x_1202_;
}
else
{
lean_object* v_head_1203_; lean_object* v_tail_1204_; lean_object* v___x_1205_; 
v_head_1203_ = lean_ctor_get(v_as_x27_1198_, 0);
v_tail_1204_ = lean_ctor_get(v_as_x27_1198_, 1);
lean_inc(v_head_1203_);
v___x_1205_ = l_Lean_Elab_Term_MatchExpr_getParams(v_head_1203_, v___y_1200_, v___y_1201_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v_a_1206_; lean_object* v_a_1207_; lean_object* v_ref_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v_rhs_1212_; lean_object* v_k_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
lean_inc(v_a_1206_);
v_a_1207_ = lean_ctor_get(v___x_1205_, 1);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1205_, 2);
v_ref_1208_ = lean_ctor_get(v___y_1200_, 5);
v___x_1209_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__0));
v___x_1210_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1));
v___x_1211_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18));
v_rhs_1212_ = lean_ctor_get(v_head_1203_, 3);
v_k_1213_ = lean_ctor_get(v_head_1203_, 4);
v___x_1214_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20));
v___x_1215_ = 0;
v___x_1216_ = l_Lean_SourceInfo_fromRef(v_ref_1208_, v___x_1215_);
lean_inc_n(v___x_1216_, 8);
v___x_1217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
lean_ctor_set(v___x_1217_, 1, v___x_1209_);
v___x_1218_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22));
lean_inc(v_k_1213_);
v___x_1219_ = l_Lean_Syntax_node1(v___x_1216_, v___x_1218_, v_k_1213_);
v___x_1220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_1221_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_1222_ = l_unsafeCast___redArg(v_a_1206_);
lean_dec(v_a_1206_);
v___x_1223_ = l_Array_append___redArg(v___x_1221_, v___x_1222_);
lean_dec(v___x_1222_);
v___x_1224_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1216_);
lean_ctor_set(v___x_1224_, 1, v___x_1220_);
lean_ctor_set(v___x_1224_, 2, v___x_1223_);
v___x_1225_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1216_);
lean_ctor_set(v___x_1225_, 1, v___x_1220_);
lean_ctor_set(v___x_1225_, 2, v___x_1221_);
v___x_1226_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23));
v___x_1227_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1216_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
lean_inc(v_rhs_1212_);
v___x_1228_ = l_Lean_Syntax_node5(v___x_1216_, v___x_1214_, v___x_1219_, v___x_1224_, v___x_1225_, v___x_1227_, v_rhs_1212_);
v___x_1229_ = l_Lean_Syntax_node1(v___x_1216_, v___x_1211_, v___x_1228_);
v___x_1230_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31));
v___x_1231_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1216_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = l_Lean_Syntax_node4(v___x_1216_, v___x_1210_, v___x_1217_, v___x_1229_, v___x_1231_, v_b_1199_);
v_as_x27_1198_ = v_tail_1204_;
v_b_1199_ = v___x_1232_;
v___y_1201_ = v_a_1207_;
goto _start;
}
else
{
lean_object* v_a_1234_; lean_object* v_a_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
lean_dec(v_b_1199_);
v_a_1234_ = lean_ctor_get(v___x_1205_, 0);
v_a_1235_ = lean_ctor_get(v___x_1205_, 1);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v___x_1205_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_a_1235_);
lean_inc(v_a_1234_);
lean_dec(v___x_1205_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_a_1234_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_a_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___boxed(lean_object* v_as_x27_1243_, lean_object* v_b_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg(v_as_x27_1243_, v_b_1244_, v___y_1245_, v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v_as_x27_1243_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__0(lean_object* v_x_1248_, lean_object* v_x_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
if (lean_obj_tag(v_x_1248_) == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = l_List_reverse___redArg(v_x_1249_);
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
lean_ctor_set(v___x_1253_, 1, v___y_1251_);
return v___x_1253_;
}
else
{
lean_object* v_head_1254_; lean_object* v_tail_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1266_; 
v_head_1254_ = lean_ctor_get(v_x_1248_, 0);
v_tail_1255_ = lean_ctor_get(v_x_1248_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_x_1248_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1257_ = v_x_1248_;
v_isShared_1258_ = v_isSharedCheck_1266_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_tail_1255_);
lean_inc(v_head_1254_);
lean_dec(v_x_1248_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1266_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1259_; lean_object* v_a_1260_; lean_object* v_a_1261_; lean_object* v___x_1263_; 
v___x_1259_ = l_Lean_Elab_Term_MatchExpr_initK(v_head_1254_, v___y_1250_, v___y_1251_);
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
v_a_1261_ = lean_ctor_get(v___x_1259_, 1);
lean_inc(v_a_1261_);
lean_dec_ref(v___x_1259_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v_x_1249_);
lean_ctor_set(v___x_1257_, 0, v_a_1260_);
v___x_1263_ = v___x_1257_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1260_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_x_1249_);
v___x_1263_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
v_x_1248_ = v_tail_1255_;
v_x_1249_ = v___x_1263_;
v___y_1251_ = v_a_1261_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__0___boxed(lean_object* v_x_1267_, lean_object* v_x_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__0(v_x_1267_, v_x_1268_, v___y_1269_, v___y_1270_);
lean_dec_ref(v___y_1269_);
return v_res_1271_;
}
}
static lean_object* _init_l_Lean_Elab_Term_MatchExpr_generate___closed__4(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_generate___closed__3));
v___x_1283_ = l_String_toRawSubstring_x27(v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate(lean_object* v_discr_1298_, lean_object* v_alts_1299_, lean_object* v_elseAlt_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = lean_box(0);
v___x_1304_ = l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__0(v_alts_1299_, v___x_1303_, v_a_1301_, v_a_1302_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v_a_1306_; lean_object* v_quotContext_1307_; lean_object* v_currMacroScope_1308_; lean_object* v_ref_1309_; lean_object* v___x_1310_; lean_object* v_a_1311_; lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1431_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
lean_inc(v_a_1305_);
v_a_1306_ = lean_ctor_get(v___x_1304_, 1);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1304_, 2);
v_quotContext_1307_ = lean_ctor_get(v_a_1301_, 1);
v_currMacroScope_1308_ = lean_ctor_get(v_a_1301_, 2);
v_ref_1309_ = lean_ctor_get(v_a_1301_, 5);
v___x_1310_ = l_Lean_Elab_Term_MatchExpr_generate___lam__0(v_ref_1309_, v_a_1301_, v_a_1306_);
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_a_1312_ = lean_ctor_get(v___x_1310_, 1);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1314_ = v___x_1310_;
v_isShared_1315_ = v_isSharedCheck_1431_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1431_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v_a_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1430_; 
v___x_1316_ = l_Lean_Elab_Term_MatchExpr_generate___lam__0(v_ref_1309_, v_a_1301_, v_a_1312_);
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
v_a_1318_ = lean_ctor_get(v___x_1316_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1320_ = v___x_1316_;
v_isShared_1321_ = v_isSharedCheck_1430_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_inc(v_a_1317_);
lean_dec(v___x_1316_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1430_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1322_ = lean_obj_once(&l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1, &l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1_once, _init_l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__1);
v___x_1323_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__2));
lean_inc_n(v_currMacroScope_1308_, 2);
lean_inc_n(v_quotContext_1307_, 2);
v___x_1324_ = l_Lean_addMacroScope(v_quotContext_1307_, v___x_1323_, v_currMacroScope_1308_);
lean_inc(v___x_1324_);
v___x_1325_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1325_, 0, v_a_1311_);
lean_ctor_set(v___x_1325_, 1, v___x_1322_);
lean_ctor_set(v___x_1325_, 2, v___x_1324_);
lean_ctor_set(v___x_1325_, 3, v___x_1303_);
v___x_1326_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_initK___closed__1, &l_Lean_Elab_Term_MatchExpr_initK___closed__1_once, _init_l_Lean_Elab_Term_MatchExpr_initK___closed__1);
v___x_1327_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_initK___closed__2));
v___x_1328_ = l_Lean_addMacroScope(v_quotContext_1307_, v___x_1327_, v_currMacroScope_1308_);
lean_inc(v___x_1328_);
v___x_1329_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1329_, 0, v_a_1317_);
lean_ctor_set(v___x_1329_, 1, v___x_1326_);
lean_ctor_set(v___x_1329_, 2, v___x_1328_);
lean_ctor_set(v___x_1329_, 3, v___x_1303_);
lean_inc(v_a_1305_);
v___x_1330_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop(v___x_1329_, v___x_1325_, v_a_1305_, v_a_1301_, v_a_1318_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v_a_1332_; lean_object* v___x_1333_; lean_object* v_a_1334_; lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1420_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
v_a_1332_ = lean_ctor_get(v___x_1330_, 1);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1330_, 2);
v___x_1333_ = l_Lean_Elab_Term_MatchExpr_generate___lam__0(v_ref_1309_, v_a_1301_, v_a_1332_);
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
v_a_1335_ = lean_ctor_get(v___x_1333_, 1);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1337_ = v___x_1333_;
v_isShared_1338_ = v_isSharedCheck_1420_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_inc(v_a_1334_);
lean_dec(v___x_1333_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1420_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1342_; 
v___x_1339_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__0));
v___x_1340_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg___closed__1));
lean_inc(v_a_1334_);
if (v_isShared_1338_ == 0)
{
lean_ctor_set_tag(v___x_1337_, 2);
lean_ctor_set(v___x_1337_, 1, v___x_1339_);
v___x_1342_ = v___x_1337_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1334_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v___x_1339_);
v___x_1342_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1343_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__18));
v___x_1344_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__20));
v___x_1345_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__22));
lean_inc_n(v_a_1334_, 3);
v___x_1346_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1346_, 0, v_a_1334_);
lean_ctor_set(v___x_1346_, 1, v___x_1326_);
lean_ctor_set(v___x_1346_, 2, v___x_1328_);
lean_ctor_set(v___x_1346_, 3, v___x_1303_);
v___x_1347_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1345_, v___x_1346_);
v___x_1348_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_1349_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__1));
v___x_1350_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__2));
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 2);
lean_ctor_set(v___x_1320_, 1, v___x_1350_);
lean_ctor_set(v___x_1320_, 0, v_a_1334_);
v___x_1352_ = v___x_1320_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1334_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1356_; 
v___x_1353_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1));
v___x_1354_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__0));
lean_inc(v_a_1334_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 2);
lean_ctor_set(v___x_1314_, 1, v___x_1354_);
lean_ctor_set(v___x_1314_, 0, v_a_1334_);
v___x_1356_ = v___x_1314_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1334_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_inc_n(v_a_1334_, 23);
v___x_1357_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1353_, v___x_1356_);
v___x_1358_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1348_, v___x_1357_);
v___x_1359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__5));
v___x_1360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1360_, 0, v_a_1334_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
v___x_1361_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_getParams___closed__2, &l_Lean_Elab_Term_MatchExpr_getParams___closed__2_once, _init_l_Lean_Elab_Term_MatchExpr_getParams___closed__2);
v___x_1362_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__3));
lean_inc_n(v_currMacroScope_1308_, 2);
lean_inc_n(v_quotContext_1307_, 2);
v___x_1363_ = l_Lean_addMacroScope(v_quotContext_1307_, v___x_1362_, v_currMacroScope_1308_);
v___x_1364_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_generate___closed__2));
v___x_1365_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1365_, 0, v_a_1334_);
lean_ctor_set(v___x_1365_, 1, v___x_1361_);
lean_ctor_set(v___x_1365_, 2, v___x_1363_);
lean_ctor_set(v___x_1365_, 3, v___x_1364_);
v___x_1366_ = l_Lean_Syntax_node2(v_a_1334_, v___x_1348_, v___x_1360_, v___x_1365_);
v___x_1367_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__14);
v___x_1368_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1368_, 0, v_a_1334_);
lean_ctor_set(v___x_1368_, 1, v___x_1348_);
lean_ctor_set(v___x_1368_, 2, v___x_1367_);
v___x_1369_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__15));
v___x_1370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1370_, 0, v_a_1334_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
lean_inc_ref_n(v___x_1368_, 4);
v___x_1371_ = l_Lean_Syntax_node5(v_a_1334_, v___x_1349_, v___x_1352_, v___x_1358_, v___x_1366_, v___x_1368_, v___x_1370_);
v___x_1372_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1348_, v___x_1371_);
v___x_1373_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__23));
v___x_1374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1374_, 0, v_a_1334_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
lean_inc_ref(v___x_1374_);
v___x_1375_ = l_Lean_Syntax_node5(v_a_1334_, v___x_1344_, v___x_1347_, v___x_1372_, v___x_1368_, v___x_1374_, v_elseAlt_1300_);
v___x_1376_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1343_, v___x_1375_);
v___x_1377_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__31));
v___x_1378_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1378_, 0, v_a_1334_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
v___x_1379_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__13));
v___x_1380_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__14));
v___x_1381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1381_, 0, v_a_1334_);
lean_ctor_set(v___x_1381_, 1, v___x_1379_);
v___x_1382_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop___closed__16));
v___x_1383_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1382_, v___x_1368_);
v___x_1384_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1384_, 0, v_a_1334_);
lean_ctor_set(v___x_1384_, 1, v___x_1322_);
lean_ctor_set(v___x_1384_, 2, v___x_1324_);
lean_ctor_set(v___x_1384_, 3, v___x_1303_);
v___x_1385_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1345_, v___x_1384_);
v___x_1386_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_MatchExpr_generate_loop_spec__0___redArg___closed__2));
v___x_1387_ = lean_obj_once(&l_Lean_Elab_Term_MatchExpr_generate___closed__4, &l_Lean_Elab_Term_MatchExpr_generate___closed__4_once, _init_l_Lean_Elab_Term_MatchExpr_generate___closed__4);
v___x_1388_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_generate___closed__6));
v___x_1389_ = l_Lean_addMacroScope(v_quotContext_1307_, v___x_1388_, v_currMacroScope_1308_);
v___x_1390_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_generate___closed__9));
v___x_1391_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1391_, 0, v_a_1334_);
lean_ctor_set(v___x_1391_, 1, v___x_1387_);
lean_ctor_set(v___x_1391_, 2, v___x_1389_);
lean_ctor_set(v___x_1391_, 3, v___x_1390_);
v___x_1392_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1348_, v_discr_1298_);
v___x_1393_ = l_Lean_Syntax_node2(v_a_1334_, v___x_1386_, v___x_1391_, v___x_1392_);
v___x_1394_ = l_Lean_Syntax_node5(v_a_1334_, v___x_1344_, v___x_1385_, v___x_1368_, v___x_1368_, v___x_1374_, v___x_1393_);
v___x_1395_ = l_Lean_Syntax_node1(v_a_1334_, v___x_1343_, v___x_1394_);
lean_inc_ref(v___x_1378_);
v___x_1396_ = l_Lean_Syntax_node5(v_a_1334_, v___x_1380_, v___x_1381_, v___x_1383_, v___x_1395_, v___x_1378_, v_a_1331_);
v___x_1397_ = l_Lean_Syntax_node4(v_a_1334_, v___x_1340_, v___x_1342_, v___x_1376_, v___x_1378_, v___x_1396_);
v___x_1398_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg(v_a_1305_, v___x_1397_, v_a_1301_, v_a_1335_);
lean_dec(v_a_1305_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1407_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
v_a_1400_ = lean_ctor_get(v___x_1398_, 1);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1402_ = v___x_1398_;
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_inc(v_a_1399_);
lean_dec(v___x_1398_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1405_; 
if (v_isShared_1403_ == 0)
{
v___x_1405_ = v___x_1402_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_a_1399_);
lean_ctor_set(v_reuseFailAlloc_1406_, 1, v_a_1400_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
else
{
lean_object* v_a_1408_; lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_a_1408_ = lean_ctor_get(v___x_1398_, 0);
v_a_1409_ = lean_ctor_get(v___x_1398_, 1);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1398_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_inc(v_a_1408_);
lean_dec(v___x_1398_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1408_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
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
lean_object* v_a_1421_; lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec(v___x_1328_);
lean_dec(v___x_1324_);
lean_del_object(v___x_1320_);
lean_del_object(v___x_1314_);
lean_dec(v_a_1305_);
lean_dec(v_elseAlt_1300_);
lean_dec(v_discr_1298_);
v_a_1421_ = lean_ctor_get(v___x_1330_, 0);
v_a_1422_ = lean_ctor_get(v___x_1330_, 1);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1330_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_inc(v_a_1421_);
lean_dec(v___x_1330_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1421_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec(v_elseAlt_1300_);
lean_dec(v_discr_1298_);
v_a_1432_ = lean_ctor_get(v___x_1304_, 0);
v_a_1433_ = lean_ctor_get(v___x_1304_, 1);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1304_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_inc(v_a_1432_);
lean_dec(v___x_1304_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1432_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_generate___boxed(lean_object* v_discr_1441_, lean_object* v_alts_1442_, lean_object* v_elseAlt_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_Elab_Term_MatchExpr_generate(v_discr_1441_, v_alts_1442_, v_elseAlt_1443_, v_a_1444_, v_a_1445_);
lean_dec_ref(v_a_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1(lean_object* v_as_1447_, lean_object* v_as_x27_1448_, lean_object* v_b_1449_, lean_object* v_a_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___redArg(v_as_x27_1448_, v_b_1449_, v___y_1451_, v___y_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1___boxed(lean_object* v_as_1454_, lean_object* v_as_x27_1455_, lean_object* v_b_1456_, lean_object* v_a_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_List_forIn_x27_loop___at___00Lean_Elab_Term_MatchExpr_generate_spec__1(v_as_1454_, v_as_x27_1455_, v_b_1456_, v_a_1457_, v___y_1458_, v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v_as_x27_1455_);
lean_dec(v_as_1454_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0(lean_object* v_x_1462_, lean_object* v_x_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
if (lean_obj_tag(v_x_1462_) == 0)
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = l_List_reverse___redArg(v_x_1463_);
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v___y_1465_);
return v___x_1467_;
}
else
{
lean_object* v_head_1468_; lean_object* v_tail_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1495_; 
v_head_1468_ = lean_ctor_get(v_x_1462_, 0);
v_tail_1469_ = lean_ctor_get(v_x_1462_, 1);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_x_1462_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1471_ = v_x_1462_;
v_isShared_1472_ = v_isSharedCheck_1495_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_tail_1469_);
lean_inc(v_head_1468_);
lean_dec(v_x_1462_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1495_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_a_1474_; lean_object* v_a_1475_; lean_object* v___x_1480_; 
lean_inc(v_head_1468_);
v___x_1480_ = l_Lean_Elab_Term_MatchExpr_toAlt_x3f(v_head_1468_);
if (lean_obj_tag(v___x_1480_) == 1)
{
lean_object* v_val_1481_; 
lean_dec(v_head_1468_);
v_val_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_val_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v_a_1474_ = v_val_1481_;
v_a_1475_ = v___y_1465_;
goto v___jp_1473_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
lean_dec(v___x_1480_);
v___x_1482_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0___closed__0));
v___x_1483_ = l_Lean_Macro_throwErrorAt___redArg(v_head_1468_, v___x_1482_, v___y_1464_, v___y_1465_);
lean_dec(v_head_1468_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; lean_object* v_a_1485_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
v_a_1485_ = lean_ctor_get(v___x_1483_, 1);
lean_inc(v_a_1485_);
lean_dec_ref_known(v___x_1483_, 2);
v_a_1474_ = v_a_1484_;
v_a_1475_ = v_a_1485_;
goto v___jp_1473_;
}
else
{
lean_object* v_a_1486_; lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_del_object(v___x_1471_);
lean_dec(v_tail_1469_);
lean_dec(v_x_1463_);
v_a_1486_ = lean_ctor_get(v___x_1483_, 0);
v_a_1487_ = lean_ctor_get(v___x_1483_, 1);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1483_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_inc(v_a_1486_);
lean_dec(v___x_1483_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1486_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
v___jp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 1, v_x_1463_);
lean_ctor_set(v___x_1471_, 0, v_a_1474_);
v___x_1477_ = v___x_1471_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1474_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_x_1463_);
v___x_1477_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
v_x_1462_ = v_tail_1469_;
v_x_1463_ = v___x_1477_;
v___y_1465_ = v_a_1475_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0___boxed(lean_object* v_x_1496_, lean_object* v_x_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0(v_x_1496_, v_x_1497_, v___y_1498_, v___y_1499_);
lean_dec_ref(v___y_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_main(lean_object* v_discr_1502_, lean_object* v_alts_1503_, lean_object* v_elseAlt_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1507_ = lean_array_to_list(v_alts_1503_);
v___x_1508_ = lean_box(0);
v___x_1509_ = l_List_mapM_loop___at___00Lean_Elab_Term_MatchExpr_main_spec__0(v___x_1507_, v___x_1508_, v_a_1505_, v_a_1506_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v_a_1511_; lean_object* v___x_1512_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
v_a_1511_ = lean_ctor_get(v___x_1509_, 1);
lean_inc(v_a_1511_);
lean_dec_ref_known(v___x_1509_, 2);
lean_inc(v_elseAlt_1504_);
v___x_1512_ = l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f(v_elseAlt_1504_);
if (lean_obj_tag(v___x_1512_) == 1)
{
lean_object* v_val_1513_; lean_object* v___x_1514_; 
lean_dec(v_elseAlt_1504_);
v_val_1513_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_val_1513_);
lean_dec_ref_known(v___x_1512_, 1);
v___x_1514_ = l_Lean_Elab_Term_MatchExpr_generate(v_discr_1502_, v_a_1510_, v_val_1513_, v_a_1505_, v_a_1511_);
return v___x_1514_;
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_dec(v___x_1512_);
lean_dec(v_a_1510_);
lean_dec(v_discr_1502_);
v___x_1515_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_main___closed__0));
v___x_1516_ = l_Lean_Macro_throwErrorAt___redArg(v_elseAlt_1504_, v___x_1515_, v_a_1505_, v_a_1511_);
lean_dec(v_elseAlt_1504_);
return v___x_1516_;
}
}
else
{
lean_object* v_a_1517_; lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec(v_elseAlt_1504_);
lean_dec(v_discr_1502_);
v_a_1517_ = lean_ctor_get(v___x_1509_, 0);
v_a_1518_ = lean_ctor_get(v___x_1509_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1509_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_inc(v_a_1517_);
lean_dec(v___x_1509_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1517_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_MatchExpr_main___boxed(lean_object* v_discr_1526_, lean_object* v_alts_1527_, lean_object* v_elseAlt_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_Elab_Term_MatchExpr_main(v_discr_1526_, v_alts_1527_, v_elseAlt_1528_, v_a_1529_, v_a_1530_);
lean_dec_ref(v_a_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchExpr(lean_object* v_stx_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_){
_start:
{
lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchExpr___closed__1));
lean_inc(v_stx_1538_);
v___x_1542_ = l_Lean_Syntax_isOfKind(v_stx_1538_, v___x_1541_);
if (v___x_1542_ == 0)
{
lean_object* v___x_1543_; 
lean_dec(v_stx_1538_);
v___x_1543_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1540_);
return v___x_1543_;
}
else
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v_discr_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1544_ = lean_unsigned_to_nat(0u);
v___x_1545_ = lean_unsigned_to_nat(1u);
v_discr_1546_ = l_Lean_Syntax_getArg(v_stx_1538_, v___x_1545_);
v___x_1547_ = lean_unsigned_to_nat(3u);
v___x_1548_ = l_Lean_Syntax_getArg(v_stx_1538_, v___x_1547_);
lean_dec(v_stx_1538_);
v___x_1549_ = l_Lean_Syntax_getArg(v___x_1548_, v___x_1544_);
v___x_1550_ = l_Lean_Syntax_getArgs(v___x_1549_);
lean_dec(v___x_1549_);
v___x_1551_ = l_Lean_Syntax_getArg(v___x_1548_, v___x_1545_);
lean_dec(v___x_1548_);
v___x_1552_ = l_Lean_Elab_Term_MatchExpr_main(v_discr_1546_, v___x_1550_, v___x_1551_, v_a_1539_, v_a_1540_);
return v___x_1552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchExpr___boxed(lean_object* v_stx_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_Elab_Term_expandMatchExpr(v_stx_1553_, v_a_1554_, v_a_1555_);
lean_dec_ref(v_a_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1(){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1564_ = l_Lean_Elab_macroAttribute;
v___x_1565_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchExpr___closed__1));
v___x_1566_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1));
v___x_1567_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandMatchExpr___boxed), 3, 0);
v___x_1568_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1564_, v___x_1565_, v___x_1566_, v___x_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___boxed(lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1();
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3(){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1597_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1___closed__1));
v___x_1598_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___closed__6));
v___x_1599_ = l_Lean_addBuiltinDeclarationRanges(v___x_1597_, v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3___boxed(lean_object* v_a_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3();
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetExpr(lean_object* v_stx_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_){
_start:
{
lean_object* v___x_1621_; uint8_t v___x_1622_; 
v___x_1621_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__1));
lean_inc(v_stx_1618_);
v___x_1622_ = l_Lean_Syntax_isOfKind(v_stx_1618_, v___x_1621_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; 
lean_dec(v_stx_1618_);
v___x_1623_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1620_);
return v___x_1623_;
}
else
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1624_ = lean_unsigned_to_nat(1u);
v___x_1625_ = l_Lean_Syntax_getArg(v_stx_1618_, v___x_1624_);
v___x_1626_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__5));
lean_inc(v___x_1625_);
v___x_1627_ = l_Lean_Syntax_isOfKind(v___x_1625_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; 
lean_dec(v___x_1625_);
lean_dec(v_stx_1618_);
v___x_1628_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1620_);
return v___x_1628_;
}
else
{
lean_object* v_ref_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v_ref_1629_ = lean_ctor_get(v_a_1619_, 5);
v___x_1630_ = lean_unsigned_to_nat(3u);
v___x_1631_ = l_Lean_Syntax_getArg(v_stx_1618_, v___x_1630_);
v___x_1632_ = lean_unsigned_to_nat(5u);
v___x_1633_ = l_Lean_Syntax_getArg(v_stx_1618_, v___x_1632_);
v___x_1634_ = lean_unsigned_to_nat(7u);
v___x_1635_ = l_Lean_Syntax_getArg(v_stx_1618_, v___x_1634_);
lean_dec(v_stx_1618_);
v___x_1636_ = 0;
v___x_1637_ = l_Lean_SourceInfo_fromRef(v_ref_1629_, v___x_1636_);
v___x_1638_ = ((lean_object*)(l_Lean_Elab_Term_expandMatchExpr___closed__1));
v___x_1639_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__2));
lean_inc_n(v___x_1637_, 10);
v___x_1640_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1637_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__3));
v___x_1642_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1637_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__5));
v___x_1644_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Term_MatchExpr_getParams_spec__0_spec__0___closed__4));
v___x_1645_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toAlt_x3f___closed__1));
v___x_1646_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__6));
v___x_1647_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1637_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
v___x_1648_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__7));
v___x_1649_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1637_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
lean_inc_ref(v___x_1649_);
lean_inc_ref(v___x_1647_);
v___x_1650_ = l_Lean_Syntax_node4(v___x_1637_, v___x_1645_, v___x_1647_, v___x_1625_, v___x_1649_, v___x_1635_);
v___x_1651_ = l_Lean_Syntax_node1(v___x_1637_, v___x_1644_, v___x_1650_);
v___x_1652_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_toElseAlt_x3f___closed__4));
v___x_1653_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Term_MatchExpr_toAlt_x3f_spec__0___closed__1));
v___x_1654_ = ((lean_object*)(l_Lean_Elab_Term_MatchExpr_getParams___closed__0));
v___x_1655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1637_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = l_Lean_Syntax_node1(v___x_1637_, v___x_1653_, v___x_1655_);
v___x_1657_ = l_Lean_Syntax_node4(v___x_1637_, v___x_1652_, v___x_1647_, v___x_1656_, v___x_1649_, v___x_1633_);
v___x_1658_ = l_Lean_Syntax_node2(v___x_1637_, v___x_1643_, v___x_1651_, v___x_1657_);
v___x_1659_ = l_Lean_Syntax_node4(v___x_1637_, v___x_1638_, v___x_1640_, v___x_1631_, v___x_1642_, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
lean_ctor_set(v___x_1660_, 1, v_a_1620_);
return v___x_1660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetExpr___boxed(lean_object* v_stx_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_Elab_Term_expandLetExpr(v_stx_1661_, v_a_1662_, v_a_1663_);
lean_dec_ref(v_a_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1(){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1672_ = l_Lean_Elab_macroAttribute;
v___x_1673_ = ((lean_object*)(l_Lean_Elab_Term_expandLetExpr___closed__1));
v___x_1674_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1));
v___x_1675_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLetExpr___boxed), 3, 0);
v___x_1676_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1672_, v___x_1673_, v___x_1674_, v___x_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___boxed(lean_object* v_a_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1();
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3(){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1705_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1___closed__1));
v___x_1706_ = ((lean_object*)(l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___closed__6));
v___x_1707_ = l_Lean_addBuiltinDeclarationRanges(v___x_1705_, v___x_1706_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3___boxed(lean_object* v_a_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3();
return v_res_1709_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_MatchExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandMatchExpr___regBuiltin_Lean_Elab_Term_expandMatchExpr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MatchExpr_0__Lean_Elab_Term_expandLetExpr___regBuiltin_Lean_Elab_Term_expandLetExpr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_MatchExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_MatchExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_MatchExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_MatchExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_MatchExpr(builtin);
}
#ifdef __cplusplus
}
#endif

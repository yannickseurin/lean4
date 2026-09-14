// Lean compiler output
// Module: Init.Data.Vector.Basic
// Imports: import Init.Data.Array.Nat public import Init.Data.Array.DecidableEq public import Init.Data.Range.Polymorphic.RangeIterator import Init.Data.Array.InsertIdx import Init.Data.Array.MapIdx import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Nat import Init.Omega
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
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_instDecidableEqImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_mark_linear(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_repr(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Array_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipWithMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_range_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* l_Array_range(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqVector_decEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqVector_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqVector_decEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqVector_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqVector___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqVector___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqVector(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqVector___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toVector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_toVector___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_toVector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toVector___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_size(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_size___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Vector"};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__0 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__0_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term#v[_,]"};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__1 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__1_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__2_value_aux_0),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(222, 133, 146, 175, 235, 143, 200, 186)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__2 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__2_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__3 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__3_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__4 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__4_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#v["};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__5 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__5_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__5_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__6 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__6_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__7 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__7_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__7_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__8 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__8_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__9 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__9_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__9_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__10 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__10_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__11 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__11_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__12 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__12_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__13 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__13_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__13_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__14 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__14_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__11_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__12_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__14_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__15 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__15_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__8_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__15_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__16 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__16_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__4_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__6_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__16_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__17 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__17_value;
static const lean_string_object l_Vector_term_x23v_x5b___x2c_x5d___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__18 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__18_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__18_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__19 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__19_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__4_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__17_value),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__19_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__20 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__20_value;
static const lean_ctor_object l_Vector_term_x23v_x5b___x2c_x5d___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__20_value)}};
static const lean_object* l_Vector_term_x23v_x5b___x2c_x5d___closed__21 = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__21_value;
LEAN_EXPORT const lean_object* l_Vector_term_x23v_x5b___x2c_x5d = (const lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__21_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__3 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__3_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value_aux_1),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value_aux_2),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Vector.mk"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__5 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__5_value;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__6;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__7 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__7_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(253, 158, 113, 206, 216, 2, 54, 152)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__9 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__9_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8_value)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__10 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__10_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__11 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__11_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__9_value),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__11_value)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__12 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__12_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__13 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__13_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__15 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__15_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value_aux_1),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value_aux_2),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__17 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__17_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__18 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__18_value;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__19;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__20 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__20_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__21 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__21_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__22 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__22_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__23 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__23_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__24 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__24_value;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__25 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__25_value;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26;
static const lean_string_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__27 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__27_value;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__28;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__29 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__29_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__30 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__30_value;
static const lean_ctor_object l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__31 = (const lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__31_value;
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_unexpandMk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_unexpandMk___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Vector_Vector_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__12_value)}};
static const lean_object* l_Vector_Vector_repr___redArg___closed__0 = (const lean_object*)&l_Vector_Vector_repr___redArg___closed__0_value;
static const lean_ctor_object l_Vector_Vector_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Vector_Vector_repr___redArg___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Vector_Vector_repr___redArg___closed__1 = (const lean_object*)&l_Vector_Vector_repr___redArg___closed__1_value;
static lean_once_cell_t l_Vector_Vector_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_Vector_repr___redArg___closed__2;
static lean_once_cell_t l_Vector_Vector_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_Vector_repr___redArg___closed__3;
static const lean_ctor_object l_Vector_Vector_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__5_value)}};
static const lean_object* l_Vector_Vector_repr___redArg___closed__4 = (const lean_object*)&l_Vector_Vector_repr___redArg___closed__4_value;
static const lean_ctor_object l_Vector_Vector_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Vector_term_x23v_x5b___x2c_x5d___closed__18_value)}};
static const lean_object* l_Vector_Vector_repr___redArg___closed__5 = (const lean_object*)&l_Vector_Vector_repr___redArg___closed__5_value;
static const lean_string_object l_Vector_Vector_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "#v[]"};
static const lean_object* l_Vector_Vector_repr___redArg___closed__6 = (const lean_object*)&l_Vector_Vector_repr___redArg___closed__6_value;
static const lean_ctor_object l_Vector_Vector_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Vector_Vector_repr___redArg___closed__6_value)}};
static const lean_object* l_Vector_Vector_repr___redArg___closed__7 = (const lean_object*)&l_Vector_Vector_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Vector_Vector_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_repr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_toList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_toList___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_elimAsArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_elimAsArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_elimAsArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_elimAsList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_elimAsList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_elimAsList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_replicate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_replicate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_singleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instInhabited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_uget___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Vector_uget___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_uget(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Vector_uget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Vector_instGetElemNatLt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Vector_instGetElemNatLt___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_instGetElemNatLt___redArg___closed__0 = (const lean_object*)&l_Vector_instGetElemNatLt___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg();
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instMembership___redArg();
LEAN_EXPORT lean_object* l_Vector_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_instMembership(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instMembership___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_getD___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_getD___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_getD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_getD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_back___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_head___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_head___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_head(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_head___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_push___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_pop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_markLinear___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_markLinear(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_markLinear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_propagateMark___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_propagateMark___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_propagateMark(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_propagateMark___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Vector_set___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Vector_set___auto__1___closed__0 = (const lean_object*)&l_Vector_set___auto__1___closed__0_value;
static const lean_string_object l_Vector_set___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Vector_set___auto__1___closed__1 = (const lean_object*)&l_Vector_set___auto__1___closed__1_value;
static const lean_ctor_object l_Vector_set___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector_set___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_set___auto__1___closed__2_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector_set___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_set___auto__1___closed__2_value_aux_1),((lean_object*)&l_Vector_set___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Vector_set___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_set___auto__1___closed__2_value_aux_2),((lean_object*)&l_Vector_set___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Vector_set___auto__1___closed__2 = (const lean_object*)&l_Vector_set___auto__1___closed__2_value;
static const lean_array_object l_Vector_set___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Vector_set___auto__1___closed__3 = (const lean_object*)&l_Vector_set___auto__1___closed__3_value;
static const lean_string_object l_Vector_set___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Vector_set___auto__1___closed__4 = (const lean_object*)&l_Vector_set___auto__1___closed__4_value;
static const lean_ctor_object l_Vector_set___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector_set___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_set___auto__1___closed__5_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector_set___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_set___auto__1___closed__5_value_aux_1),((lean_object*)&l_Vector_set___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Vector_set___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_set___auto__1___closed__5_value_aux_2),((lean_object*)&l_Vector_set___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Vector_set___auto__1___closed__5 = (const lean_object*)&l_Vector_set___auto__1___closed__5_value;
static const lean_string_object l_Vector_set___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticGet_elem_tactic"};
static const lean_object* l_Vector_set___auto__1___closed__6 = (const lean_object*)&l_Vector_set___auto__1___closed__6_value;
static const lean_ctor_object l_Vector_set___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_set___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 31, 109, 153, 11, 229, 201, 51)}};
static const lean_object* l_Vector_set___auto__1___closed__7 = (const lean_object*)&l_Vector_set___auto__1___closed__7_value;
static const lean_string_object l_Vector_set___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "get_elem_tactic"};
static const lean_object* l_Vector_set___auto__1___closed__8 = (const lean_object*)&l_Vector_set___auto__1___closed__8_value;
static lean_once_cell_t l_Vector_set___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__9;
static lean_once_cell_t l_Vector_set___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__10;
static lean_once_cell_t l_Vector_set___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__11;
static lean_once_cell_t l_Vector_set___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__12;
static lean_once_cell_t l_Vector_set___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__13;
static lean_once_cell_t l_Vector_set___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__14;
static lean_once_cell_t l_Vector_set___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__15;
static lean_once_cell_t l_Vector_set___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__16;
static lean_once_cell_t l_Vector_set___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_set___auto__1___closed__17;
LEAN_EXPORT lean_object* l_Vector_set___auto__1;
LEAN_EXPORT lean_object* l_Vector_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_setIfInBounds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_setIfInBounds___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_setIfInBounds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_setIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_set_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldrM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Vector_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__0 = (const lean_object*)&l_Vector_foldl___redArg___closed__0_value;
static const lean_closure_object l_Vector_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__1 = (const lean_object*)&l_Vector_foldl___redArg___closed__1_value;
static const lean_closure_object l_Vector_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__2 = (const lean_object*)&l_Vector_foldl___redArg___closed__2_value;
static const lean_closure_object l_Vector_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__3 = (const lean_object*)&l_Vector_foldl___redArg___closed__3_value;
static const lean_closure_object l_Vector_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__4 = (const lean_object*)&l_Vector_foldl___redArg___closed__4_value;
static const lean_closure_object l_Vector_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__5 = (const lean_object*)&l_Vector_foldl___redArg___closed__5_value;
static const lean_closure_object l_Vector_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_foldl___redArg___closed__6 = (const lean_object*)&l_Vector_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Vector_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_foldl___redArg___closed__0_value),((lean_object*)&l_Vector_foldl___redArg___closed__1_value)}};
static const lean_object* l_Vector_foldl___redArg___closed__7 = (const lean_object*)&l_Vector_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Vector_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_foldl___redArg___closed__7_value),((lean_object*)&l_Vector_foldl___redArg___closed__2_value),((lean_object*)&l_Vector_foldl___redArg___closed__3_value),((lean_object*)&l_Vector_foldl___redArg___closed__4_value),((lean_object*)&l_Vector_foldl___redArg___closed__5_value)}};
static const lean_object* l_Vector_foldl___redArg___closed__8 = (const lean_object*)&l_Vector_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Vector_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_foldl___redArg___closed__8_value),((lean_object*)&l_Vector_foldl___redArg___closed__6_value)}};
static const lean_object* l_Vector_foldl___redArg___closed__9 = (const lean_object*)&l_Vector_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Vector_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_foldr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_append___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_append(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instHAppendHAddNat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instHAppendHAddNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_cast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_cast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_cast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_cast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_extract___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_extract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_take___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_take___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_take(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_take___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_drop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_drop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_drop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_shrink___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_shrink___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_shrink(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_shrink___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_map___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Vector_mapM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Vector_mapM___redArg___closed__0 = (const lean_object*)&l_Vector_mapM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Vector_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdxM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdxM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdxM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mapIdxM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_firstM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_firstM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_firstM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatten___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatten___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Vector_flatten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Vector_flatten___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_flatten___redArg___closed__0 = (const lean_object*)&l_Vector_flatten___redArg___closed__0_value;
static const lean_array_object l_Vector_flatten___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Vector_flatten___redArg___closed__1 = (const lean_object*)&l_Vector_flatten___redArg___closed__1_value;
static const lean_closure_object l_Vector_flatten___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_flatten___redArg___closed__2 = (const lean_object*)&l_Vector_flatten___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Vector_flatten___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatten___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatten(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatten___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_flatMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zip___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zipWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_unzip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_unzip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_unzip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_unzip___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swap___auto__1;
LEAN_EXPORT lean_object* l_Vector_swap___auto__3;
LEAN_EXPORT lean_object* l_Vector_swap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swap___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapAt___auto__1;
LEAN_EXPORT lean_object* l_Vector_swapAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapAt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Vector_swapAt_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Init.Data.Array.Basic"};
static const lean_object* l_Vector_swapAt_x21___redArg___closed__0 = (const lean_object*)&l_Vector_swapAt_x21___redArg___closed__0_value;
static const lean_string_object l_Vector_swapAt_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array.swapAt!"};
static const lean_object* l_Vector_swapAt_x21___redArg___closed__1 = (const lean_object*)&l_Vector_swapAt_x21___redArg___closed__1_value;
static const lean_string_object l_Vector_swapAt_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Vector_swapAt_x21___redArg___closed__2 = (const lean_object*)&l_Vector_swapAt_x21___redArg___closed__2_value;
static const lean_string_object l_Vector_swapAt_x21___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " out of bounds"};
static const lean_object* l_Vector_swapAt_x21___redArg___closed__3 = (const lean_object*)&l_Vector_swapAt_x21___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Vector_swapAt_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapAt_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_swapAt_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_range(lean_object*);
LEAN_EXPORT lean_object* l_Vector_range_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_isEqv___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_isEqv___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_isEqv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_isEqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_instBEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instBEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_instBEq___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instBEq___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instBEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instBEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_reverse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_reverse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_eraseIdx___auto__1;
LEAN_EXPORT lean_object* l_Vector_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_eraseIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_eraseIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Vector_eraseIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.Vector.Basic"};
static const lean_object* l_Vector_eraseIdx_x21___redArg___closed__0 = (const lean_object*)&l_Vector_eraseIdx_x21___redArg___closed__0_value;
static const lean_string_object l_Vector_eraseIdx_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Vector.eraseIdx!"};
static const lean_object* l_Vector_eraseIdx_x21___redArg___closed__1 = (const lean_object*)&l_Vector_eraseIdx_x21___redArg___closed__1_value;
static const lean_string_object l_Vector_eraseIdx_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "index out of bounds"};
static const lean_object* l_Vector_eraseIdx_x21___redArg___closed__2 = (const lean_object*)&l_Vector_eraseIdx_x21___redArg___closed__2_value;
static lean_once_cell_t l_Vector_eraseIdx_x21___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_eraseIdx_x21___redArg___closed__3;
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx___auto__1;
LEAN_EXPORT lean_object* l_Vector_insertIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Vector_insertIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Vector.insertIdx!"};
static const lean_object* l_Vector_insertIdx_x21___redArg___closed__0 = (const lean_object*)&l_Vector_insertIdx_x21___redArg___closed__0_value;
static lean_once_cell_t l_Vector_insertIdx_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_insertIdx_x21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_tail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_tail___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_tail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_tail___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Vector_findM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector_findM_x3f___redArg___closed__0 = (const lean_object*)&l_Vector_findM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findM_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRevM_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_find_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_find_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findRev_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_isPrefixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_isPrefixOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_isPrefixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_anyM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_anyM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_anyM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__1(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_allM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_allM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_allM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_any___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_any___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_any___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_any(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_all___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Vector_all___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_all(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_all___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_countP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_countP___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_countP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_countP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_countP___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_count___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_count___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_count___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_count(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_count___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_prod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_leftpad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_leftpad___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_leftpad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_leftpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_rightpad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_rightpad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForMOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instForMOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instLT___redArg();
LEAN_EXPORT lean_object* l_Vector_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_instLT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instLT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instLE___redArg();
LEAN_EXPORT lean_object* l_Vector_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_instLE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instLE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Vector_lex___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Vector_lex___auto__1___closed__0 = (const lean_object*)&l_Vector_lex___auto__1___closed__0_value;
static const lean_ctor_object l_Vector_lex___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__1_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__1_value_aux_1),((lean_object*)&l_Vector_set___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__1_value_aux_2),((lean_object*)&l_Vector_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Vector_lex___auto__1___closed__1 = (const lean_object*)&l_Vector_lex___auto__1___closed__1_value;
static lean_once_cell_t l_Vector_lex___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__2;
static lean_once_cell_t l_Vector_lex___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__3;
static const lean_string_object l_Vector_lex___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Vector_lex___auto__1___closed__4 = (const lean_object*)&l_Vector_lex___auto__1___closed__4_value;
static const lean_ctor_object l_Vector_lex___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__5_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__5_value_aux_1),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__5_value_aux_2),((lean_object*)&l_Vector_lex___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Vector_lex___auto__1___closed__5 = (const lean_object*)&l_Vector_lex___auto__1___closed__5_value;
static const lean_string_object l_Vector_lex___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Vector_lex___auto__1___closed__6 = (const lean_object*)&l_Vector_lex___auto__1___closed__6_value;
static const lean_ctor_object l_Vector_lex___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__7_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__7_value_aux_1),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__7_value_aux_2),((lean_object*)&l_Vector_lex___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Vector_lex___auto__1___closed__7 = (const lean_object*)&l_Vector_lex___auto__1___closed__7_value;
static lean_once_cell_t l_Vector_lex___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__8;
static lean_once_cell_t l_Vector_lex___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__9;
static const lean_string_object l_Vector_lex___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Vector_lex___auto__1___closed__10 = (const lean_object*)&l_Vector_lex___auto__1___closed__10_value;
static const lean_ctor_object l_Vector_lex___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_lex___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Vector_lex___auto__1___closed__11 = (const lean_object*)&l_Vector_lex___auto__1___closed__11_value;
static const lean_string_object l_Vector_lex___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Vector_lex___auto__1___closed__12 = (const lean_object*)&l_Vector_lex___auto__1___closed__12_value;
static lean_once_cell_t l_Vector_lex___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__13;
static lean_once_cell_t l_Vector_lex___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__14;
static lean_once_cell_t l_Vector_lex___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__15;
static lean_once_cell_t l_Vector_lex___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__16;
static lean_once_cell_t l_Vector_lex___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__17;
static lean_once_cell_t l_Vector_lex___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__18;
static lean_once_cell_t l_Vector_lex___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__19;
static lean_once_cell_t l_Vector_lex___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__20;
static lean_once_cell_t l_Vector_lex___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__21;
static const lean_string_object l_Vector_lex___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_<_"};
static const lean_object* l_Vector_lex___auto__1___closed__22 = (const lean_object*)&l_Vector_lex___auto__1___closed__22_value;
static const lean_ctor_object l_Vector_lex___auto__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector_lex___auto__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(192, 242, 106, 74, 199, 131, 133, 95)}};
static const lean_object* l_Vector_lex___auto__1___closed__23 = (const lean_object*)&l_Vector_lex___auto__1___closed__23_value;
static const lean_string_object l_Vector_lex___auto__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l_Vector_lex___auto__1___closed__24 = (const lean_object*)&l_Vector_lex___auto__1___closed__24_value;
static const lean_ctor_object l_Vector_lex___auto__1___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__25_value_aux_0),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__25_value_aux_1),((lean_object*)&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Vector_lex___auto__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Vector_lex___auto__1___closed__25_value_aux_2),((lean_object*)&l_Vector_lex___auto__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l_Vector_lex___auto__1___closed__25 = (const lean_object*)&l_Vector_lex___auto__1___closed__25_value;
static const lean_string_object l_Vector_lex___auto__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l_Vector_lex___auto__1___closed__26 = (const lean_object*)&l_Vector_lex___auto__1___closed__26_value;
static lean_once_cell_t l_Vector_lex___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__27;
static lean_once_cell_t l_Vector_lex___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__28;
static lean_once_cell_t l_Vector_lex___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__29;
static lean_once_cell_t l_Vector_lex___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__30;
static lean_once_cell_t l_Vector_lex___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__31;
static const lean_string_object l_Vector_lex___auto__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_Vector_lex___auto__1___closed__32 = (const lean_object*)&l_Vector_lex___auto__1___closed__32_value;
static lean_once_cell_t l_Vector_lex___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__33;
static lean_once_cell_t l_Vector_lex___auto__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__34;
static lean_once_cell_t l_Vector_lex___auto__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__35;
static lean_once_cell_t l_Vector_lex___auto__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__36;
static lean_once_cell_t l_Vector_lex___auto__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__37;
static lean_once_cell_t l_Vector_lex___auto__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__38;
static lean_once_cell_t l_Vector_lex___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__39;
static lean_once_cell_t l_Vector_lex___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__40;
static lean_once_cell_t l_Vector_lex___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__41;
static lean_once_cell_t l_Vector_lex___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__42;
static lean_once_cell_t l_Vector_lex___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__43;
static lean_once_cell_t l_Vector_lex___auto__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__44;
static lean_once_cell_t l_Vector_lex___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__45;
static lean_once_cell_t l_Vector_lex___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__46;
static lean_once_cell_t l_Vector_lex___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__47;
static lean_once_cell_t l_Vector_lex___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_lex___auto__1___closed__48;
LEAN_EXPORT lean_object* l_Vector_lex___auto__1;
LEAN_EXPORT lean_object* l_Vector_lex___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_lex___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Vector_lex___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Vector_lex___redArg___closed__0 = (const lean_object*)&l_Vector_lex___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_Vector_lex___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_lex___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Vector_lex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_lex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqVector_decEq___redArg(lean_object* v_inst_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Array_instDecidableEqImpl___redArg(v_inst_1_, v_x_2_, v_x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqVector_decEq___redArg___boxed(lean_object* v_inst_5_, lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_instDecidableEqVector_decEq___redArg(v_inst_5_, v_x_6_, v_x_7_);
lean_dec_ref(v_x_7_);
lean_dec_ref(v_x_6_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqVector_decEq(lean_object* v_00_u03b1_10_, lean_object* v_n_11_, lean_object* v_inst_12_, lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = l_Array_instDecidableEqImpl___redArg(v_inst_12_, v_x_13_, v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqVector_decEq___boxed(lean_object* v_00_u03b1_16_, lean_object* v_n_17_, lean_object* v_inst_18_, lean_object* v_x_19_, lean_object* v_x_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = l_instDecidableEqVector_decEq(v_00_u03b1_16_, v_n_17_, v_inst_18_, v_x_19_, v_x_20_);
lean_dec_ref(v_x_20_);
lean_dec_ref(v_x_19_);
lean_dec(v_n_17_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqVector___redArg(lean_object* v_inst_23_, lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v___x_26_; 
v___x_26_ = l_Array_instDecidableEqImpl___redArg(v_inst_23_, v_x_24_, v_x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqVector___redArg___boxed(lean_object* v_inst_27_, lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_instDecidableEqVector___redArg(v_inst_27_, v_x_28_, v_x_29_);
lean_dec_ref(v_x_29_);
lean_dec_ref(v_x_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqVector(lean_object* v_00_u03b1_32_, lean_object* v_n_33_, lean_object* v_inst_34_, lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = l_Array_instDecidableEqImpl___redArg(v_inst_34_, v_x_35_, v_x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqVector___boxed(lean_object* v_00_u03b1_38_, lean_object* v_n_39_, lean_object* v_inst_40_, lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = l_instDecidableEqVector(v_00_u03b1_38_, v_n_39_, v_inst_40_, v_x_41_, v_x_42_);
lean_dec_ref(v_x_42_);
lean_dec_ref(v_x_41_);
lean_dec(v_n_39_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
LEAN_EXPORT lean_object* l_Array_toVector___redArg(lean_object* v_xs_45_){
_start:
{
lean_inc_ref(v_xs_45_);
return v_xs_45_;
}
}
LEAN_EXPORT lean_object* l_Array_toVector___redArg___boxed(lean_object* v_xs_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Array_toVector___redArg(v_xs_46_);
lean_dec_ref(v_xs_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Array_toVector(lean_object* v_00_u03b1_48_, lean_object* v_xs_49_){
_start:
{
lean_inc_ref(v_xs_49_);
return v_xs_49_;
}
}
LEAN_EXPORT lean_object* l_Array_toVector___boxed(lean_object* v_00_u03b1_50_, lean_object* v_xs_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Array_toVector(v_00_u03b1_50_, v_xs_51_);
lean_dec_ref(v_xs_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Vector_size___redArg(lean_object* v_n_53_){
_start:
{
lean_inc(v_n_53_);
return v_n_53_;
}
}
LEAN_EXPORT lean_object* l_Vector_size___redArg___boxed(lean_object* v_n_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Vector_size___redArg(v_n_54_);
lean_dec(v_n_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Vector_size(lean_object* v_00_u03b1_56_, lean_object* v_n_57_, lean_object* v_x_58_){
_start:
{
lean_inc(v_n_57_);
return v_n_57_;
}
}
LEAN_EXPORT lean_object* l_Vector_size___boxed(lean_object* v_00_u03b1_59_, lean_object* v_n_60_, lean_object* v_x_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Vector_size(v_00_u03b1_59_, v_n_60_, v_x_61_);
lean_dec_ref(v_x_61_);
lean_dec(v_n_60_);
return v_res_62_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__6(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__5));
v___x_122_ = l_String_toRawSubstring_x27(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__19(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__18));
v___x_150_ = l_String_toRawSubstring_x27(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Array_mkArray0___redArg();
return v___x_159_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__28(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__27));
v___x_162_ = l_String_toRawSubstring_x27(v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1(lean_object* v_x_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = ((lean_object*)(l_Vector_term_x23v_x5b___x2c_x5d___closed__2));
lean_inc(v_x_171_);
v___x_175_ = l_Lean_Syntax_isOfKind(v_x_171_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec(v_x_171_);
v___x_176_ = lean_box(1);
v___x_177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v_a_173_);
return v___x_177_;
}
else
{
lean_object* v_quotContext_178_; lean_object* v_currMacroScope_179_; lean_object* v_ref_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v_elems_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_quotContext_178_ = lean_ctor_get(v_a_172_, 1);
v_currMacroScope_179_ = lean_ctor_get(v_a_172_, 2);
v_ref_180_ = lean_ctor_get(v_a_172_, 5);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = l_Lean_Syntax_getArg(v_x_171_, v___x_181_);
lean_dec(v_x_171_);
v_elems_183_ = l_Lean_Syntax_getArgs(v___x_182_);
lean_dec(v___x_182_);
v___x_184_ = 0;
v___x_185_ = l_Lean_SourceInfo_fromRef(v_ref_180_, v___x_184_);
v___x_186_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4));
v___x_187_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__6, &l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__6_once, _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__6);
v___x_188_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__8));
lean_inc_n(v_currMacroScope_179_, 3);
lean_inc_n(v_quotContext_178_, 3);
v___x_189_ = l_Lean_addMacroScope(v_quotContext_178_, v___x_188_, v_currMacroScope_179_);
v___x_190_ = lean_box(0);
v___x_191_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__12));
lean_inc_n(v___x_185_, 12);
v___x_192_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_192_, 0, v___x_185_);
lean_ctor_set(v___x_192_, 1, v___x_187_);
lean_ctor_set(v___x_192_, 2, v___x_189_);
lean_ctor_set(v___x_192_, 3, v___x_191_);
v___x_193_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14));
v___x_194_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__16));
v___x_195_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__17));
v___x_196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_185_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__19, &l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__19_once, _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__19);
v___x_198_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__20));
v___x_199_ = l_Lean_addMacroScope(v_quotContext_178_, v___x_198_, v_currMacroScope_179_);
v___x_200_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_200_, 0, v___x_185_);
lean_ctor_set(v___x_200_, 1, v___x_197_);
lean_ctor_set(v___x_200_, 2, v___x_199_);
lean_ctor_set(v___x_200_, 3, v___x_190_);
v___x_201_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__21));
v___x_202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_185_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_elems_183_);
v___x_204_ = lean_array_get_size(v___x_203_);
lean_dec_ref(v___x_203_);
v___x_205_ = l_Nat_reprFast(v___x_204_);
v___x_206_ = lean_box(2);
v___x_207_ = l_Lean_Syntax_mkNumLit(v___x_205_, v___x_206_);
v___x_208_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__22));
v___x_209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_185_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = l_Lean_Syntax_node5(v___x_185_, v___x_194_, v___x_196_, v___x_200_, v___x_202_, v___x_207_, v___x_209_);
v___x_211_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__24));
v___x_212_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__25));
v___x_213_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_185_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26, &l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26_once, _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26);
v___x_215_ = l_Array_append___redArg(v___x_214_, v_elems_183_);
lean_dec_ref(v_elems_183_);
v___x_216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_216_, 0, v___x_185_);
lean_ctor_set(v___x_216_, 1, v___x_193_);
lean_ctor_set(v___x_216_, 2, v___x_215_);
v___x_217_ = ((lean_object*)(l_Vector_term_x23v_x5b___x2c_x5d___closed__18));
v___x_218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_185_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = l_Lean_Syntax_node3(v___x_185_, v___x_211_, v___x_213_, v___x_216_, v___x_218_);
v___x_220_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__28, &l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__28_once, _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__28);
v___x_221_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__29));
v___x_222_ = l_Lean_addMacroScope(v_quotContext_178_, v___x_221_, v_currMacroScope_179_);
v___x_223_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__31));
v___x_224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_224_, 0, v___x_185_);
lean_ctor_set(v___x_224_, 1, v___x_220_);
lean_ctor_set(v___x_224_, 2, v___x_222_);
lean_ctor_set(v___x_224_, 3, v___x_223_);
v___x_225_ = l_Lean_Syntax_node3(v___x_185_, v___x_193_, v___x_210_, v___x_219_, v___x_224_);
v___x_226_ = l_Lean_Syntax_node2(v___x_185_, v___x_186_, v___x_192_, v___x_225_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v_a_173_);
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___boxed(lean_object* v_x_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1(v_x_228_, v_a_229_, v_a_230_);
lean_dec_ref(v_a_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Vector_unexpandMk(lean_object* v_x_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__4));
lean_inc(v_x_232_);
v___x_236_ = l_Lean_Syntax_isOfKind(v_x_232_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec(v_x_232_);
v___x_237_ = lean_box(0);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_a_234_);
return v___x_238_;
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = l_Lean_Syntax_getArg(v_x_232_, v___x_239_);
lean_dec(v_x_232_);
v___x_241_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_240_);
v___x_242_ = l_Lean_Syntax_matchesNull(v___x_240_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec(v___x_240_);
v___x_243_ = lean_box(0);
v___x_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v_a_234_);
return v___x_244_;
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = l_Lean_Syntax_getArg(v___x_240_, v___x_245_);
lean_dec(v___x_240_);
v___x_247_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__24));
lean_inc(v___x_246_);
v___x_248_ = l_Lean_Syntax_isOfKind(v___x_246_, v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v___x_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v_a_234_);
return v___x_250_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_251_ = l_Lean_Syntax_getArg(v___x_246_, v___x_239_);
lean_dec(v___x_246_);
v___x_252_ = l_Lean_Syntax_getArgs(v___x_251_);
lean_dec(v___x_251_);
v___x_253_ = 0;
v___x_254_ = l_Lean_SourceInfo_fromRef(v_a_233_, v___x_253_);
v___x_255_ = ((lean_object*)(l_Vector_term_x23v_x5b___x2c_x5d___closed__2));
v___x_256_ = ((lean_object*)(l_Vector_term_x23v_x5b___x2c_x5d___closed__5));
lean_inc_n(v___x_254_, 3);
v___x_257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_254_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14));
v___x_259_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26, &l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26_once, _init_l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__26);
v___x_260_ = l_Array_append___redArg(v___x_259_, v___x_252_);
lean_dec_ref(v___x_252_);
v___x_261_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_261_, 0, v___x_254_);
lean_ctor_set(v___x_261_, 1, v___x_258_);
lean_ctor_set(v___x_261_, 2, v___x_260_);
v___x_262_ = ((lean_object*)(l_Vector_term_x23v_x5b___x2c_x5d___closed__18));
v___x_263_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_254_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = l_Lean_Syntax_node3(v___x_254_, v___x_255_, v___x_257_, v___x_261_, v___x_263_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v_a_234_);
return v___x_265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_unexpandMk___boxed(lean_object* v_x_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Vector_unexpandMk(v_x_266_, v_a_267_, v_a_268_);
lean_dec(v_a_267_);
return v_res_269_;
}
}
static lean_object* _init_l_Vector_Vector_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l_Vector_term_x23v_x5b___x2c_x5d___closed__5));
v___x_276_ = lean_string_length(v___x_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Vector_Vector_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_obj_once(&l_Vector_Vector_repr___redArg___closed__2, &l_Vector_Vector_repr___redArg___closed__2_once, _init_l_Vector_Vector_repr___redArg___closed__2);
v___x_278_ = lean_nat_to_int(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_repr___redArg(lean_object* v_inst_286_, lean_object* v_n_287_, lean_object* v_xs_288_){
_start:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_nat_dec_eq(v_n_287_, v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v_x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_x_291_ = lean_alloc_closure((void*)(l_repr), 3, 2);
lean_closure_set(v_x_291_, 0, lean_box(0));
lean_closure_set(v_x_291_, 1, v_inst_286_);
v___x_292_ = lean_array_to_list(v_xs_288_);
v___x_293_ = ((lean_object*)(l_Vector_Vector_repr___redArg___closed__1));
v___x_294_ = l_Std_Format_joinSep___redArg(v_x_291_, v___x_292_, v___x_293_);
v___x_295_ = lean_obj_once(&l_Vector_Vector_repr___redArg___closed__3, &l_Vector_Vector_repr___redArg___closed__3_once, _init_l_Vector_Vector_repr___redArg___closed__3);
v___x_296_ = ((lean_object*)(l_Vector_Vector_repr___redArg___closed__4));
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_294_);
v___x_298_ = ((lean_object*)(l_Vector_Vector_repr___redArg___closed__5));
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_295_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = l_Std_Format_fill(v___x_300_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; 
lean_dec_ref(v_xs_288_);
lean_dec_ref(v_inst_286_);
v___x_302_ = ((lean_object*)(l_Vector_Vector_repr___redArg___closed__7));
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_repr___redArg___boxed(lean_object* v_inst_303_, lean_object* v_n_304_, lean_object* v_xs_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Vector_Vector_repr___redArg(v_inst_303_, v_n_304_, v_xs_305_);
lean_dec(v_n_304_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_repr(lean_object* v_00_u03b1_307_, lean_object* v_inst_308_, lean_object* v_n_309_, lean_object* v_xs_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Vector_Vector_repr___redArg(v_inst_308_, v_n_309_, v_xs_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_repr___boxed(lean_object* v_00_u03b1_312_, lean_object* v_inst_313_, lean_object* v_n_314_, lean_object* v_xs_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Vector_Vector_repr(v_00_u03b1_312_, v_inst_313_, v_n_314_, v_xs_315_);
lean_dec(v_n_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr___redArg___lam__0(lean_object* v_inst_317_, lean_object* v_n_318_, lean_object* v_xs_319_, lean_object* v_x_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l_Vector_Vector_repr___redArg(v_inst_317_, v_n_318_, v_xs_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr___redArg___lam__0___boxed(lean_object* v_inst_322_, lean_object* v_n_323_, lean_object* v_xs_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Vector_Vector_instRepr___redArg___lam__0(v_inst_322_, v_n_323_, v_xs_324_, v_x_325_);
lean_dec(v_x_325_);
lean_dec(v_n_323_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr___redArg(lean_object* v_inst_327_, lean_object* v_n_328_){
_start:
{
lean_object* v___f_329_; 
v___f_329_ = lean_alloc_closure((void*)(l_Vector_Vector_instRepr___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_329_, 0, v_inst_327_);
lean_closure_set(v___f_329_, 1, v_n_328_);
return v___f_329_;
}
}
LEAN_EXPORT lean_object* l_Vector_Vector_instRepr(lean_object* v_00_u03b1_330_, lean_object* v_inst_331_, lean_object* v_n_332_){
_start:
{
lean_object* v___f_333_; 
v___f_333_ = lean_alloc_closure((void*)(l_Vector_Vector_instRepr___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_333_, 0, v_inst_331_);
lean_closure_set(v___f_333_, 1, v_n_332_);
return v___f_333_;
}
}
LEAN_EXPORT lean_object* l_Vector_toList___redArg(lean_object* v_xs_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_array_to_list(v_xs_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Vector_toList(lean_object* v_00_u03b1_336_, lean_object* v_n_337_, lean_object* v_xs_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_array_to_list(v_xs_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Vector_toList___boxed(lean_object* v_00_u03b1_340_, lean_object* v_n_341_, lean_object* v_xs_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Vector_toList(v_00_u03b1_340_, v_n_341_, v_xs_342_);
lean_dec(v_n_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Vector_elimAsArray___redArg(lean_object* v_mk_344_, lean_object* v_x_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lean_apply_2(v_mk_344_, v_x_345_, lean_box(0));
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Vector_elimAsArray(lean_object* v_00_u03b1_347_, lean_object* v_n_348_, lean_object* v_motive_349_, lean_object* v_mk_350_, lean_object* v_x_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_apply_2(v_mk_350_, v_x_351_, lean_box(0));
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Vector_elimAsArray___boxed(lean_object* v_00_u03b1_353_, lean_object* v_n_354_, lean_object* v_motive_355_, lean_object* v_mk_356_, lean_object* v_x_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Vector_elimAsArray(v_00_u03b1_353_, v_n_354_, v_motive_355_, v_mk_356_, v_x_357_);
lean_dec(v_n_354_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Vector_elimAsList___redArg(lean_object* v_mk_359_, lean_object* v_x_360_){
_start:
{
lean_object* v_toList_361_; lean_object* v___x_362_; 
v_toList_361_ = lean_array_to_list(v_x_360_);
v___x_362_ = lean_apply_2(v_mk_359_, v_toList_361_, lean_box(0));
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Vector_elimAsList(lean_object* v_00_u03b1_363_, lean_object* v_n_364_, lean_object* v_motive_365_, lean_object* v_mk_366_, lean_object* v_x_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Vector_elimAsList___redArg(v_mk_366_, v_x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Vector_elimAsList___boxed(lean_object* v_00_u03b1_369_, lean_object* v_n_370_, lean_object* v_motive_371_, lean_object* v_mk_372_, lean_object* v_x_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Vector_elimAsList(v_00_u03b1_369_, v_n_370_, v_motive_371_, v_mk_372_, v_x_373_);
lean_dec(v_n_370_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity___redArg(lean_object* v_capacity_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = lean_mk_empty_array_with_capacity(v_capacity_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity___redArg___boxed(lean_object* v_capacity_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Vector_emptyWithCapacity___redArg(v_capacity_377_);
lean_dec(v_capacity_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity(lean_object* v_00_u03b1_379_, lean_object* v_capacity_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lean_mk_empty_array_with_capacity(v_capacity_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Vector_emptyWithCapacity___boxed(lean_object* v_00_u03b1_382_, lean_object* v_capacity_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Vector_emptyWithCapacity(v_00_u03b1_382_, v_capacity_383_);
lean_dec(v_capacity_383_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Vector_replicate___redArg(lean_object* v_n_385_, lean_object* v_v_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_mk_array(v_n_385_, v_v_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Vector_replicate(lean_object* v_00_u03b1_388_, lean_object* v_n_389_, lean_object* v_v_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_mk_array(v_n_389_, v_v_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Vector_singleton___redArg(lean_object* v_v_392_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lean_unsigned_to_nat(1u);
v___x_394_ = lean_mk_empty_array_with_capacity(v___x_393_);
v___x_395_ = lean_array_push(v___x_394_, v_v_392_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Vector_singleton(lean_object* v_00_u03b1_396_, lean_object* v_v_397_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
v___x_400_ = lean_array_push(v___x_399_, v_v_397_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Vector_instInhabited___redArg(lean_object* v_n_401_, lean_object* v_inst_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_mk_array(v_n_401_, v_inst_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Vector_instInhabited(lean_object* v_00_u03b1_404_, lean_object* v_n_405_, lean_object* v_inst_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_mk_array(v_n_405_, v_inst_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Vector_get___redArg(lean_object* v_xs_408_, lean_object* v_i_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lean_array_fget_borrowed(v_xs_408_, v_i_409_);
lean_inc(v___x_410_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Vector_get___redArg___boxed(lean_object* v_xs_411_, lean_object* v_i_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Vector_get___redArg(v_xs_411_, v_i_412_);
lean_dec(v_i_412_);
lean_dec_ref(v_xs_411_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Vector_get(lean_object* v_00_u03b1_414_, lean_object* v_n_415_, lean_object* v_xs_416_, lean_object* v_i_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_array_fget_borrowed(v_xs_416_, v_i_417_);
lean_inc(v___x_418_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Vector_get___boxed(lean_object* v_00_u03b1_419_, lean_object* v_n_420_, lean_object* v_xs_421_, lean_object* v_i_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Vector_get(v_00_u03b1_419_, v_n_420_, v_xs_421_, v_i_422_);
lean_dec(v_i_422_);
lean_dec_ref(v_xs_421_);
lean_dec(v_n_420_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Vector_uget___redArg(lean_object* v_xs_424_, size_t v_i_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lean_array_uget_borrowed(v_xs_424_, v_i_425_);
lean_inc(v___x_426_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Vector_uget___redArg___boxed(lean_object* v_xs_427_, lean_object* v_i_428_){
_start:
{
size_t v_i_boxed_429_; lean_object* v_res_430_; 
v_i_boxed_429_ = lean_unbox_usize(v_i_428_);
lean_dec(v_i_428_);
v_res_430_ = l_Vector_uget___redArg(v_xs_427_, v_i_boxed_429_);
lean_dec_ref(v_xs_427_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Vector_uget(lean_object* v_00_u03b1_431_, lean_object* v_n_432_, lean_object* v_xs_433_, size_t v_i_434_, lean_object* v_h_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = lean_array_uget_borrowed(v_xs_433_, v_i_434_);
lean_inc(v___x_436_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Vector_uget___boxed(lean_object* v_00_u03b1_437_, lean_object* v_n_438_, lean_object* v_xs_439_, lean_object* v_i_440_, lean_object* v_h_441_){
_start:
{
size_t v_i_boxed_442_; lean_object* v_res_443_; 
v_i_boxed_442_ = lean_unbox_usize(v_i_440_);
lean_dec(v_i_440_);
v_res_443_ = l_Vector_uget(v_00_u03b1_437_, v_n_438_, v_xs_439_, v_i_boxed_442_, v_h_441_);
lean_dec_ref(v_xs_439_);
lean_dec(v_n_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg___lam__0(lean_object* v_xs_444_, lean_object* v_i_445_, lean_object* v_h_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = lean_array_fget_borrowed(v_xs_444_, v_i_445_);
lean_inc(v___x_447_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg___lam__0___boxed(lean_object* v_xs_448_, lean_object* v_i_449_, lean_object* v_h_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Vector_instGetElemNatLt___redArg___lam__0(v_xs_448_, v_i_449_, v_h_450_);
lean_dec(v_i_449_);
lean_dec_ref(v_xs_448_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg(){
_start:
{
lean_object* v___f_454_; 
v___f_454_ = ((lean_object*)(l_Vector_instGetElemNatLt___redArg___closed__0));
return v___f_454_;
}
}
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___redArg___boxed(lean_object* v___dummy_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Vector_instGetElemNatLt___redArg();
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt(lean_object* v_00_u03b1_457_, lean_object* v_n_458_){
_start:
{
lean_object* v___f_459_; 
v___f_459_ = ((lean_object*)(l_Vector_instGetElemNatLt___redArg___closed__0));
return v___f_459_;
}
}
LEAN_EXPORT lean_object* l_Vector_instGetElemNatLt___boxed(lean_object* v_00_u03b1_460_, lean_object* v_n_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Vector_instGetElemNatLt(v_00_u03b1_460_, v_n_461_);
lean_dec(v_n_461_);
return v_res_462_;
}
}
LEAN_EXPORT uint8_t l_Vector_contains___redArg(lean_object* v_inst_463_, lean_object* v_xs_464_, lean_object* v_a_465_){
_start:
{
uint8_t v___x_466_; 
v___x_466_ = l_Array_contains___redArg(v_inst_463_, v_xs_464_, v_a_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Vector_contains___redArg___boxed(lean_object* v_inst_467_, lean_object* v_xs_468_, lean_object* v_a_469_){
_start:
{
uint8_t v_res_470_; lean_object* v_r_471_; 
v_res_470_ = l_Vector_contains___redArg(v_inst_467_, v_xs_468_, v_a_469_);
v_r_471_ = lean_box(v_res_470_);
return v_r_471_;
}
}
LEAN_EXPORT uint8_t l_Vector_contains(lean_object* v_00_u03b1_472_, lean_object* v_n_473_, lean_object* v_inst_474_, lean_object* v_xs_475_, lean_object* v_a_476_){
_start:
{
uint8_t v___x_477_; 
v___x_477_ = l_Array_contains___redArg(v_inst_474_, v_xs_475_, v_a_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Vector_contains___boxed(lean_object* v_00_u03b1_478_, lean_object* v_n_479_, lean_object* v_inst_480_, lean_object* v_xs_481_, lean_object* v_a_482_){
_start:
{
uint8_t v_res_483_; lean_object* v_r_484_; 
v_res_483_ = l_Vector_contains(v_00_u03b1_478_, v_n_479_, v_inst_480_, v_xs_481_, v_a_482_);
lean_dec(v_n_479_);
v_r_484_ = lean_box(v_res_483_);
return v_r_484_;
}
}
LEAN_EXPORT lean_object* l_Vector_instMembership___redArg(){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = lean_box(0);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Vector_instMembership___redArg___boxed(lean_object* v___dummy_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Vector_instMembership___redArg();
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Vector_instMembership(lean_object* v_00_u03b1_489_, lean_object* v_n_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = lean_box(0);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Vector_instMembership___boxed(lean_object* v_00_u03b1_492_, lean_object* v_n_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Vector_instMembership(v_00_u03b1_492_, v_n_493_);
lean_dec(v_n_493_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Vector_getD___redArg(lean_object* v_xs_495_, lean_object* v_i_496_, lean_object* v_default_497_){
_start:
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = lean_array_get_size(v_xs_495_);
v___x_499_ = lean_nat_dec_lt(v_i_496_, v___x_498_);
if (v___x_499_ == 0)
{
lean_inc(v_default_497_);
return v_default_497_;
}
else
{
lean_object* v___x_500_; 
v___x_500_ = lean_array_fget_borrowed(v_xs_495_, v_i_496_);
lean_inc(v___x_500_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_getD___redArg___boxed(lean_object* v_xs_501_, lean_object* v_i_502_, lean_object* v_default_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Vector_getD___redArg(v_xs_501_, v_i_502_, v_default_503_);
lean_dec(v_default_503_);
lean_dec(v_i_502_);
lean_dec_ref(v_xs_501_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Vector_getD(lean_object* v_00_u03b1_505_, lean_object* v_n_506_, lean_object* v_xs_507_, lean_object* v_i_508_, lean_object* v_default_509_){
_start:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_array_get_size(v_xs_507_);
v___x_511_ = lean_nat_dec_lt(v_i_508_, v___x_510_);
if (v___x_511_ == 0)
{
lean_inc(v_default_509_);
return v_default_509_;
}
else
{
lean_object* v___x_512_; 
v___x_512_ = lean_array_fget_borrowed(v_xs_507_, v_i_508_);
lean_inc(v___x_512_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_getD___boxed(lean_object* v_00_u03b1_513_, lean_object* v_n_514_, lean_object* v_xs_515_, lean_object* v_i_516_, lean_object* v_default_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Vector_getD(v_00_u03b1_513_, v_n_514_, v_xs_515_, v_i_516_, v_default_517_);
lean_dec(v_default_517_);
lean_dec(v_i_516_);
lean_dec_ref(v_xs_515_);
lean_dec(v_n_514_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Vector_back_x21___redArg(lean_object* v_inst_519_, lean_object* v_xs_520_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_521_ = lean_array_get_size(v_xs_520_);
v___x_522_ = lean_unsigned_to_nat(1u);
v___x_523_ = lean_nat_sub(v___x_521_, v___x_522_);
v___x_524_ = lean_array_get_borrowed(v_inst_519_, v_xs_520_, v___x_523_);
lean_dec(v___x_523_);
lean_inc(v___x_524_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Vector_back_x21___redArg___boxed(lean_object* v_inst_525_, lean_object* v_xs_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Vector_back_x21___redArg(v_inst_525_, v_xs_526_);
lean_dec_ref(v_xs_526_);
lean_dec(v_inst_525_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Vector_back_x21(lean_object* v_00_u03b1_528_, lean_object* v_n_529_, lean_object* v_inst_530_, lean_object* v_xs_531_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_532_ = lean_array_get_size(v_xs_531_);
v___x_533_ = lean_unsigned_to_nat(1u);
v___x_534_ = lean_nat_sub(v___x_532_, v___x_533_);
v___x_535_ = lean_array_get_borrowed(v_inst_530_, v_xs_531_, v___x_534_);
lean_dec(v___x_534_);
lean_inc(v___x_535_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Vector_back_x21___boxed(lean_object* v_00_u03b1_536_, lean_object* v_n_537_, lean_object* v_inst_538_, lean_object* v_xs_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Vector_back_x21(v_00_u03b1_536_, v_n_537_, v_inst_538_, v_xs_539_);
lean_dec_ref(v_xs_539_);
lean_dec(v_inst_538_);
lean_dec(v_n_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Vector_back_x3f___redArg(lean_object* v_xs_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_542_ = lean_array_get_size(v_xs_541_);
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_sub(v___x_542_, v___x_543_);
v___x_545_ = lean_nat_dec_lt(v___x_544_, v___x_542_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
lean_dec(v___x_544_);
v___x_546_ = lean_box(0);
return v___x_546_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_array_fget_borrowed(v_xs_541_, v___x_544_);
lean_dec(v___x_544_);
lean_inc(v___x_547_);
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_back_x3f___redArg___boxed(lean_object* v_xs_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Vector_back_x3f___redArg(v_xs_549_);
lean_dec_ref(v_xs_549_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Vector_back_x3f(lean_object* v_00_u03b1_551_, lean_object* v_n_552_, lean_object* v_xs_553_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_554_ = lean_array_get_size(v_xs_553_);
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = lean_nat_sub(v___x_554_, v___x_555_);
v___x_557_ = lean_nat_dec_lt(v___x_556_, v___x_554_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; 
lean_dec(v___x_556_);
v___x_558_ = lean_box(0);
return v___x_558_;
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = lean_array_fget_borrowed(v_xs_553_, v___x_556_);
lean_dec(v___x_556_);
lean_inc(v___x_559_);
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_back_x3f___boxed(lean_object* v_00_u03b1_561_, lean_object* v_n_562_, lean_object* v_xs_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Vector_back_x3f(v_00_u03b1_561_, v_n_562_, v_xs_563_);
lean_dec_ref(v_xs_563_);
lean_dec(v_n_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Vector_back___redArg(lean_object* v_n_565_, lean_object* v_xs_566_){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = lean_unsigned_to_nat(1u);
v___x_568_ = lean_nat_sub(v_n_565_, v___x_567_);
v___x_569_ = lean_array_fget_borrowed(v_xs_566_, v___x_568_);
lean_dec(v___x_568_);
lean_inc(v___x_569_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Vector_back___redArg___boxed(lean_object* v_n_570_, lean_object* v_xs_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Vector_back___redArg(v_n_570_, v_xs_571_);
lean_dec_ref(v_xs_571_);
lean_dec(v_n_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Vector_back(lean_object* v_n_573_, lean_object* v_00_u03b1_574_, lean_object* v_inst_575_, lean_object* v_xs_576_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = lean_unsigned_to_nat(1u);
v___x_578_ = lean_nat_sub(v_n_573_, v___x_577_);
v___x_579_ = lean_array_fget_borrowed(v_xs_576_, v___x_578_);
lean_dec(v___x_578_);
lean_inc(v___x_579_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Vector_back___boxed(lean_object* v_n_580_, lean_object* v_00_u03b1_581_, lean_object* v_inst_582_, lean_object* v_xs_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Vector_back(v_n_580_, v_00_u03b1_581_, v_inst_582_, v_xs_583_);
lean_dec_ref(v_xs_583_);
lean_dec(v_n_580_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Vector_head___redArg(lean_object* v_xs_585_){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_unsigned_to_nat(0u);
v___x_587_ = lean_array_fget_borrowed(v_xs_585_, v___x_586_);
lean_inc(v___x_587_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Vector_head___redArg___boxed(lean_object* v_xs_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Vector_head___redArg(v_xs_588_);
lean_dec_ref(v_xs_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Vector_head(lean_object* v_n_590_, lean_object* v_00_u03b1_591_, lean_object* v_inst_592_, lean_object* v_xs_593_){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_fget_borrowed(v_xs_593_, v___x_594_);
lean_inc(v___x_595_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Vector_head___boxed(lean_object* v_n_596_, lean_object* v_00_u03b1_597_, lean_object* v_inst_598_, lean_object* v_xs_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Vector_head(v_n_596_, v_00_u03b1_597_, v_inst_598_, v_xs_599_);
lean_dec_ref(v_xs_599_);
lean_dec(v_n_596_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Vector_push___redArg(lean_object* v_xs_601_, lean_object* v_x_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = lean_array_push(v_xs_601_, v_x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Vector_push(lean_object* v_00_u03b1_604_, lean_object* v_n_605_, lean_object* v_xs_606_, lean_object* v_x_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = lean_array_push(v_xs_606_, v_x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Vector_push___boxed(lean_object* v_00_u03b1_609_, lean_object* v_n_610_, lean_object* v_xs_611_, lean_object* v_x_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Vector_push(v_00_u03b1_609_, v_n_610_, v_xs_611_, v_x_612_);
lean_dec(v_n_610_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Vector_pop___redArg(lean_object* v_xs_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = lean_array_pop(v_xs_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Vector_pop(lean_object* v_00_u03b1_616_, lean_object* v_n_617_, lean_object* v_xs_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_array_pop(v_xs_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Vector_pop___boxed(lean_object* v_00_u03b1_620_, lean_object* v_n_621_, lean_object* v_xs_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Vector_pop(v_00_u03b1_620_, v_n_621_, v_xs_622_);
lean_dec(v_n_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Vector_markLinear___redArg(lean_object* v_xs_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_array_mark_linear(v_xs_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Vector_markLinear(lean_object* v_00_u03b1_626_, lean_object* v_n_627_, lean_object* v_xs_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_array_mark_linear(v_xs_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Vector_markLinear___boxed(lean_object* v_00_u03b1_630_, lean_object* v_n_631_, lean_object* v_xs_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Vector_markLinear(v_00_u03b1_630_, v_n_631_, v_xs_632_);
lean_dec(v_n_631_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Vector_propagateMark___redArg(lean_object* v_xs_634_, lean_object* v_ys_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_array_propagate_mark(v_xs_634_, v_ys_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Vector_propagateMark___redArg___boxed(lean_object* v_xs_637_, lean_object* v_ys_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Vector_propagateMark___redArg(v_xs_637_, v_ys_638_);
lean_dec_ref(v_xs_637_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Vector_propagateMark(lean_object* v_n_640_, lean_object* v_m_641_, lean_object* v_00_u03b1_642_, lean_object* v_00_u03b2_643_, lean_object* v_xs_644_, lean_object* v_ys_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = lean_array_propagate_mark(v_xs_644_, v_ys_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Vector_propagateMark___boxed(lean_object* v_n_647_, lean_object* v_m_648_, lean_object* v_00_u03b1_649_, lean_object* v_00_u03b2_650_, lean_object* v_xs_651_, lean_object* v_ys_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Vector_propagateMark(v_n_647_, v_m_648_, v_00_u03b1_649_, v_00_u03b2_650_, v_xs_651_, v_ys_652_);
lean_dec_ref(v_xs_651_);
lean_dec(v_m_648_);
lean_dec(v_n_647_);
return v_res_653_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__9(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = ((lean_object*)(l_Vector_set___auto__1___closed__8));
v___x_674_ = l_Lean_mkAtom(v___x_673_);
return v___x_674_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__10(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l_Vector_set___auto__1___closed__9, &l_Vector_set___auto__1___closed__9_once, _init_l_Vector_set___auto__1___closed__9);
v___x_676_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_677_ = lean_array_push(v___x_676_, v___x_675_);
return v___x_677_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__11(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_678_ = lean_obj_once(&l_Vector_set___auto__1___closed__10, &l_Vector_set___auto__1___closed__10_once, _init_l_Vector_set___auto__1___closed__10);
v___x_679_ = ((lean_object*)(l_Vector_set___auto__1___closed__7));
v___x_680_ = lean_box(2);
v___x_681_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_679_);
lean_ctor_set(v___x_681_, 2, v___x_678_);
return v___x_681_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__12(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&l_Vector_set___auto__1___closed__11, &l_Vector_set___auto__1___closed__11_once, _init_l_Vector_set___auto__1___closed__11);
v___x_683_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_684_ = lean_array_push(v___x_683_, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__13(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_685_ = lean_obj_once(&l_Vector_set___auto__1___closed__12, &l_Vector_set___auto__1___closed__12_once, _init_l_Vector_set___auto__1___closed__12);
v___x_686_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14));
v___x_687_ = lean_box(2);
v___x_688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_686_);
lean_ctor_set(v___x_688_, 2, v___x_685_);
return v___x_688_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__14(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_obj_once(&l_Vector_set___auto__1___closed__13, &l_Vector_set___auto__1___closed__13_once, _init_l_Vector_set___auto__1___closed__13);
v___x_690_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_691_ = lean_array_push(v___x_690_, v___x_689_);
return v___x_691_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__15(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_692_ = lean_obj_once(&l_Vector_set___auto__1___closed__14, &l_Vector_set___auto__1___closed__14_once, _init_l_Vector_set___auto__1___closed__14);
v___x_693_ = ((lean_object*)(l_Vector_set___auto__1___closed__5));
v___x_694_ = lean_box(2);
v___x_695_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v___x_693_);
lean_ctor_set(v___x_695_, 2, v___x_692_);
return v___x_695_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__16(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_obj_once(&l_Vector_set___auto__1___closed__15, &l_Vector_set___auto__1___closed__15_once, _init_l_Vector_set___auto__1___closed__15);
v___x_697_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_698_ = lean_array_push(v___x_697_, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_l_Vector_set___auto__1___closed__17(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_699_ = lean_obj_once(&l_Vector_set___auto__1___closed__16, &l_Vector_set___auto__1___closed__16_once, _init_l_Vector_set___auto__1___closed__16);
v___x_700_ = ((lean_object*)(l_Vector_set___auto__1___closed__2));
v___x_701_ = lean_box(2);
v___x_702_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set(v___x_702_, 1, v___x_700_);
lean_ctor_set(v___x_702_, 2, v___x_699_);
return v___x_702_;
}
}
static lean_object* _init_l_Vector_set___auto__1(void){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_obj_once(&l_Vector_set___auto__1___closed__17, &l_Vector_set___auto__1___closed__17_once, _init_l_Vector_set___auto__1___closed__17);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Vector_set___redArg(lean_object* v_xs_704_, lean_object* v_i_705_, lean_object* v_x_706_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = lean_array_fset(v_xs_704_, v_i_705_, v_x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Vector_set___redArg___boxed(lean_object* v_xs_708_, lean_object* v_i_709_, lean_object* v_x_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Vector_set___redArg(v_xs_708_, v_i_709_, v_x_710_);
lean_dec(v_i_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Vector_set(lean_object* v_00_u03b1_712_, lean_object* v_n_713_, lean_object* v_xs_714_, lean_object* v_i_715_, lean_object* v_x_716_, lean_object* v_h_717_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_array_fset(v_xs_714_, v_i_715_, v_x_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Vector_set___boxed(lean_object* v_00_u03b1_719_, lean_object* v_n_720_, lean_object* v_xs_721_, lean_object* v_i_722_, lean_object* v_x_723_, lean_object* v_h_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Vector_set(v_00_u03b1_719_, v_n_720_, v_xs_721_, v_i_722_, v_x_723_, v_h_724_);
lean_dec(v_i_722_);
lean_dec(v_n_720_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Vector_setIfInBounds___redArg(lean_object* v_xs_726_, lean_object* v_i_727_, lean_object* v_x_728_){
_start:
{
lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_729_ = lean_array_get_size(v_xs_726_);
v___x_730_ = lean_nat_dec_lt(v_i_727_, v___x_729_);
if (v___x_730_ == 0)
{
lean_dec(v_x_728_);
return v_xs_726_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = lean_array_fset(v_xs_726_, v_i_727_, v_x_728_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_setIfInBounds___redArg___boxed(lean_object* v_xs_732_, lean_object* v_i_733_, lean_object* v_x_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Vector_setIfInBounds___redArg(v_xs_732_, v_i_733_, v_x_734_);
lean_dec(v_i_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Vector_setIfInBounds(lean_object* v_00_u03b1_736_, lean_object* v_n_737_, lean_object* v_xs_738_, lean_object* v_i_739_, lean_object* v_x_740_){
_start:
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = lean_array_get_size(v_xs_738_);
v___x_742_ = lean_nat_dec_lt(v_i_739_, v___x_741_);
if (v___x_742_ == 0)
{
lean_dec(v_x_740_);
return v_xs_738_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = lean_array_fset(v_xs_738_, v_i_739_, v_x_740_);
return v___x_743_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_setIfInBounds___boxed(lean_object* v_00_u03b1_744_, lean_object* v_n_745_, lean_object* v_xs_746_, lean_object* v_i_747_, lean_object* v_x_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Vector_setIfInBounds(v_00_u03b1_744_, v_n_745_, v_xs_746_, v_i_747_, v_x_748_);
lean_dec(v_i_747_);
lean_dec(v_n_745_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Vector_set_x21___redArg(lean_object* v_xs_750_, lean_object* v_i_751_, lean_object* v_x_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = lean_array_set(v_xs_750_, v_i_751_, v_x_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Vector_set_x21___redArg___boxed(lean_object* v_xs_754_, lean_object* v_i_755_, lean_object* v_x_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Vector_set_x21___redArg(v_xs_754_, v_i_755_, v_x_756_);
lean_dec(v_i_755_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Vector_set_x21(lean_object* v_00_u03b1_758_, lean_object* v_n_759_, lean_object* v_xs_760_, lean_object* v_i_761_, lean_object* v_x_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = lean_array_set(v_xs_760_, v_i_761_, v_x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Vector_set_x21___boxed(lean_object* v_00_u03b1_764_, lean_object* v_n_765_, lean_object* v_xs_766_, lean_object* v_i_767_, lean_object* v_x_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Vector_set_x21(v_00_u03b1_764_, v_n_765_, v_xs_766_, v_i_767_, v_x_768_);
lean_dec(v_i_767_);
lean_dec(v_n_765_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Vector_foldlM___redArg(lean_object* v_inst_770_, lean_object* v_f_771_, lean_object* v_b_772_, lean_object* v_xs_773_){
_start:
{
lean_object* v_toApplicative_774_; lean_object* v_toPure_775_; lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v_toApplicative_774_ = lean_ctor_get(v_inst_770_, 0);
v_toPure_775_ = lean_ctor_get(v_toApplicative_774_, 1);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_array_get_size(v_xs_773_);
v___x_778_ = lean_nat_dec_lt(v___x_776_, v___x_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; 
lean_inc(v_toPure_775_);
lean_dec_ref(v_xs_773_);
lean_dec(v_f_771_);
lean_dec_ref(v_inst_770_);
v___x_779_ = lean_apply_2(v_toPure_775_, lean_box(0), v_b_772_);
return v___x_779_;
}
else
{
uint8_t v___x_780_; 
v___x_780_ = lean_nat_dec_le(v___x_777_, v___x_777_);
if (v___x_780_ == 0)
{
if (v___x_778_ == 0)
{
lean_object* v___x_781_; 
lean_inc(v_toPure_775_);
lean_dec_ref(v_xs_773_);
lean_dec(v_f_771_);
lean_dec_ref(v_inst_770_);
v___x_781_ = lean_apply_2(v_toPure_775_, lean_box(0), v_b_772_);
return v___x_781_;
}
else
{
size_t v___x_782_; size_t v___x_783_; lean_object* v___x_784_; 
v___x_782_ = ((size_t)0ULL);
v___x_783_ = lean_usize_of_nat(v___x_777_);
v___x_784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_770_, v_f_771_, v_xs_773_, v___x_782_, v___x_783_, v_b_772_);
return v___x_784_;
}
}
else
{
size_t v___x_785_; size_t v___x_786_; lean_object* v___x_787_; 
v___x_785_ = ((size_t)0ULL);
v___x_786_ = lean_usize_of_nat(v___x_777_);
v___x_787_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_770_, v_f_771_, v_xs_773_, v___x_785_, v___x_786_, v_b_772_);
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldlM(lean_object* v_m_788_, lean_object* v_00_u03b2_789_, lean_object* v_00_u03b1_790_, lean_object* v_n_791_, lean_object* v_inst_792_, lean_object* v_f_793_, lean_object* v_b_794_, lean_object* v_xs_795_){
_start:
{
lean_object* v_toApplicative_796_; lean_object* v_toPure_797_; lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v_toApplicative_796_ = lean_ctor_get(v_inst_792_, 0);
v_toPure_797_ = lean_ctor_get(v_toApplicative_796_, 1);
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = lean_array_get_size(v_xs_795_);
v___x_800_ = lean_nat_dec_lt(v___x_798_, v___x_799_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; 
lean_inc(v_toPure_797_);
lean_dec_ref(v_xs_795_);
lean_dec(v_f_793_);
lean_dec_ref(v_inst_792_);
v___x_801_ = lean_apply_2(v_toPure_797_, lean_box(0), v_b_794_);
return v___x_801_;
}
else
{
uint8_t v___x_802_; 
v___x_802_ = lean_nat_dec_le(v___x_799_, v___x_799_);
if (v___x_802_ == 0)
{
if (v___x_800_ == 0)
{
lean_object* v___x_803_; 
lean_inc(v_toPure_797_);
lean_dec_ref(v_xs_795_);
lean_dec(v_f_793_);
lean_dec_ref(v_inst_792_);
v___x_803_ = lean_apply_2(v_toPure_797_, lean_box(0), v_b_794_);
return v___x_803_;
}
else
{
size_t v___x_804_; size_t v___x_805_; lean_object* v___x_806_; 
v___x_804_ = ((size_t)0ULL);
v___x_805_ = lean_usize_of_nat(v___x_799_);
v___x_806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_792_, v_f_793_, v_xs_795_, v___x_804_, v___x_805_, v_b_794_);
return v___x_806_;
}
}
else
{
size_t v___x_807_; size_t v___x_808_; lean_object* v___x_809_; 
v___x_807_ = ((size_t)0ULL);
v___x_808_ = lean_usize_of_nat(v___x_799_);
v___x_809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_792_, v_f_793_, v_xs_795_, v___x_807_, v___x_808_, v_b_794_);
return v___x_809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldlM___boxed(lean_object* v_m_810_, lean_object* v_00_u03b2_811_, lean_object* v_00_u03b1_812_, lean_object* v_n_813_, lean_object* v_inst_814_, lean_object* v_f_815_, lean_object* v_b_816_, lean_object* v_xs_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Vector_foldlM(v_m_810_, v_00_u03b2_811_, v_00_u03b1_812_, v_n_813_, v_inst_814_, v_f_815_, v_b_816_, v_xs_817_);
lean_dec(v_n_813_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Vector_foldrM___redArg(lean_object* v_inst_819_, lean_object* v_f_820_, lean_object* v_b_821_, lean_object* v_xs_822_){
_start:
{
lean_object* v_toApplicative_823_; lean_object* v_toPure_824_; lean_object* v___x_825_; lean_object* v___x_826_; uint8_t v___x_827_; 
v_toApplicative_823_ = lean_ctor_get(v_inst_819_, 0);
v_toPure_824_ = lean_ctor_get(v_toApplicative_823_, 1);
v___x_825_ = lean_array_get_size(v_xs_822_);
v___x_826_ = lean_unsigned_to_nat(0u);
v___x_827_ = lean_nat_dec_lt(v___x_826_, v___x_825_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; 
lean_inc(v_toPure_824_);
lean_dec_ref(v_xs_822_);
lean_dec(v_f_820_);
lean_dec_ref(v_inst_819_);
v___x_828_ = lean_apply_2(v_toPure_824_, lean_box(0), v_b_821_);
return v___x_828_;
}
else
{
size_t v___x_829_; size_t v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_usize_of_nat(v___x_825_);
v___x_830_ = ((size_t)0ULL);
v___x_831_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_819_, v_f_820_, v_xs_822_, v___x_829_, v___x_830_, v_b_821_);
return v___x_831_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldrM(lean_object* v_m_832_, lean_object* v_00_u03b1_833_, lean_object* v_00_u03b2_834_, lean_object* v_n_835_, lean_object* v_inst_836_, lean_object* v_f_837_, lean_object* v_b_838_, lean_object* v_xs_839_){
_start:
{
lean_object* v_toApplicative_840_; lean_object* v_toPure_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; 
v_toApplicative_840_ = lean_ctor_get(v_inst_836_, 0);
v_toPure_841_ = lean_ctor_get(v_toApplicative_840_, 1);
v___x_842_ = lean_array_get_size(v_xs_839_);
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = lean_nat_dec_lt(v___x_843_, v___x_842_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
lean_inc(v_toPure_841_);
lean_dec_ref(v_xs_839_);
lean_dec(v_f_837_);
lean_dec_ref(v_inst_836_);
v___x_845_ = lean_apply_2(v_toPure_841_, lean_box(0), v_b_838_);
return v___x_845_;
}
else
{
size_t v___x_846_; size_t v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_usize_of_nat(v___x_842_);
v___x_847_ = ((size_t)0ULL);
v___x_848_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_836_, v_f_837_, v_xs_839_, v___x_846_, v___x_847_, v_b_838_);
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldrM___boxed(lean_object* v_m_849_, lean_object* v_00_u03b1_850_, lean_object* v_00_u03b2_851_, lean_object* v_n_852_, lean_object* v_inst_853_, lean_object* v_f_854_, lean_object* v_b_855_, lean_object* v_xs_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Vector_foldrM(v_m_849_, v_00_u03b1_850_, v_00_u03b2_851_, v_n_852_, v_inst_853_, v_f_854_, v_b_855_, v_xs_856_);
lean_dec(v_n_852_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Vector_foldl___redArg___lam__0(lean_object* v_f_858_, lean_object* v_x1_859_, lean_object* v_x2_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = lean_apply_2(v_f_858_, v_x1_859_, v_x2_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Vector_foldl___redArg(lean_object* v_f_881_, lean_object* v_b_882_, lean_object* v_xs_883_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; 
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = lean_array_get_size(v_xs_883_);
v___x_886_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_887_ = lean_nat_dec_lt(v___x_884_, v___x_885_);
if (v___x_887_ == 0)
{
lean_dec_ref(v_xs_883_);
lean_dec(v_f_881_);
return v_b_882_;
}
else
{
lean_object* v___f_888_; uint8_t v___x_889_; 
v___f_888_ = lean_alloc_closure((void*)(l_Vector_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_888_, 0, v_f_881_);
v___x_889_ = lean_nat_dec_le(v___x_885_, v___x_885_);
if (v___x_889_ == 0)
{
if (v___x_887_ == 0)
{
lean_dec_ref(v___f_888_);
lean_dec_ref(v_xs_883_);
return v_b_882_;
}
else
{
size_t v___x_890_; size_t v___x_891_; lean_object* v___x_892_; 
v___x_890_ = ((size_t)0ULL);
v___x_891_ = lean_usize_of_nat(v___x_885_);
v___x_892_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_886_, v___f_888_, v_xs_883_, v___x_890_, v___x_891_, v_b_882_);
return v___x_892_;
}
}
else
{
size_t v___x_893_; size_t v___x_894_; lean_object* v___x_895_; 
v___x_893_ = ((size_t)0ULL);
v___x_894_ = lean_usize_of_nat(v___x_885_);
v___x_895_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_886_, v___f_888_, v_xs_883_, v___x_893_, v___x_894_, v_b_882_);
return v___x_895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldl(lean_object* v_00_u03b2_896_, lean_object* v_00_u03b1_897_, lean_object* v_n_898_, lean_object* v_f_899_, lean_object* v_b_900_, lean_object* v_xs_901_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = lean_array_get_size(v_xs_901_);
v___x_904_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_905_ = lean_nat_dec_lt(v___x_902_, v___x_903_);
if (v___x_905_ == 0)
{
lean_dec_ref(v_xs_901_);
lean_dec(v_f_899_);
return v_b_900_;
}
else
{
lean_object* v___f_906_; uint8_t v___x_907_; 
v___f_906_ = lean_alloc_closure((void*)(l_Vector_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_906_, 0, v_f_899_);
v___x_907_ = lean_nat_dec_le(v___x_903_, v___x_903_);
if (v___x_907_ == 0)
{
if (v___x_905_ == 0)
{
lean_dec_ref(v___f_906_);
lean_dec_ref(v_xs_901_);
return v_b_900_;
}
else
{
size_t v___x_908_; size_t v___x_909_; lean_object* v___x_910_; 
v___x_908_ = ((size_t)0ULL);
v___x_909_ = lean_usize_of_nat(v___x_903_);
v___x_910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_904_, v___f_906_, v_xs_901_, v___x_908_, v___x_909_, v_b_900_);
return v___x_910_;
}
}
else
{
size_t v___x_911_; size_t v___x_912_; lean_object* v___x_913_; 
v___x_911_ = ((size_t)0ULL);
v___x_912_ = lean_usize_of_nat(v___x_903_);
v___x_913_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_904_, v___f_906_, v_xs_901_, v___x_911_, v___x_912_, v_b_900_);
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldl___boxed(lean_object* v_00_u03b2_914_, lean_object* v_00_u03b1_915_, lean_object* v_n_916_, lean_object* v_f_917_, lean_object* v_b_918_, lean_object* v_xs_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Vector_foldl(v_00_u03b2_914_, v_00_u03b1_915_, v_n_916_, v_f_917_, v_b_918_, v_xs_919_);
lean_dec(v_n_916_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Vector_foldr___redArg(lean_object* v_f_921_, lean_object* v_b_922_, lean_object* v_xs_923_){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; uint8_t v___x_927_; 
v___x_924_ = lean_array_get_size(v_xs_923_);
v___x_925_ = lean_unsigned_to_nat(0u);
v___x_926_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_927_ = lean_nat_dec_lt(v___x_925_, v___x_924_);
if (v___x_927_ == 0)
{
lean_dec_ref(v_xs_923_);
lean_dec(v_f_921_);
return v_b_922_;
}
else
{
lean_object* v___f_928_; size_t v___x_929_; size_t v___x_930_; lean_object* v___x_931_; 
v___f_928_ = lean_alloc_closure((void*)(l_Vector_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_928_, 0, v_f_921_);
v___x_929_ = lean_usize_of_nat(v___x_924_);
v___x_930_ = ((size_t)0ULL);
v___x_931_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_926_, v___f_928_, v_xs_923_, v___x_929_, v___x_930_, v_b_922_);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldr(lean_object* v_00_u03b1_932_, lean_object* v_00_u03b2_933_, lean_object* v_n_934_, lean_object* v_f_935_, lean_object* v_b_936_, lean_object* v_xs_937_){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_938_ = lean_array_get_size(v_xs_937_);
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_941_ = lean_nat_dec_lt(v___x_939_, v___x_938_);
if (v___x_941_ == 0)
{
lean_dec_ref(v_xs_937_);
lean_dec(v_f_935_);
return v_b_936_;
}
else
{
lean_object* v___f_942_; size_t v___x_943_; size_t v___x_944_; lean_object* v___x_945_; 
v___f_942_ = lean_alloc_closure((void*)(l_Vector_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_942_, 0, v_f_935_);
v___x_943_ = lean_usize_of_nat(v___x_938_);
v___x_944_ = ((size_t)0ULL);
v___x_945_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_940_, v___f_942_, v_xs_937_, v___x_943_, v___x_944_, v_b_936_);
return v___x_945_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_foldr___boxed(lean_object* v_00_u03b1_946_, lean_object* v_00_u03b2_947_, lean_object* v_n_948_, lean_object* v_f_949_, lean_object* v_b_950_, lean_object* v_xs_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Vector_foldr(v_00_u03b1_946_, v_00_u03b2_947_, v_n_948_, v_f_949_, v_b_950_, v_xs_951_);
lean_dec(v_n_948_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Vector_append___redArg(lean_object* v_xs_953_, lean_object* v_ys_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Array_append___redArg(v_xs_953_, v_ys_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Vector_append___redArg___boxed(lean_object* v_xs_956_, lean_object* v_ys_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Vector_append___redArg(v_xs_956_, v_ys_957_);
lean_dec_ref(v_ys_957_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Vector_append(lean_object* v_00_u03b1_959_, lean_object* v_n_960_, lean_object* v_m_961_, lean_object* v_xs_962_, lean_object* v_ys_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Array_append___redArg(v_xs_962_, v_ys_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Vector_append___boxed(lean_object* v_00_u03b1_965_, lean_object* v_n_966_, lean_object* v_m_967_, lean_object* v_xs_968_, lean_object* v_ys_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Vector_append(v_00_u03b1_965_, v_n_966_, v_m_967_, v_xs_968_, v_ys_969_);
lean_dec_ref(v_ys_969_);
lean_dec(v_m_967_);
lean_dec(v_n_966_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Vector_instHAppendHAddNat___redArg(lean_object* v_n_971_, lean_object* v_m_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = lean_alloc_closure((void*)(l_Vector_append___boxed), 5, 3);
lean_closure_set(v___x_973_, 0, lean_box(0));
lean_closure_set(v___x_973_, 1, v_n_971_);
lean_closure_set(v___x_973_, 2, v_m_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Vector_instHAppendHAddNat(lean_object* v_00_u03b1_974_, lean_object* v_n_975_, lean_object* v_m_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = lean_alloc_closure((void*)(l_Vector_append___boxed), 5, 3);
lean_closure_set(v___x_977_, 0, lean_box(0));
lean_closure_set(v___x_977_, 1, v_n_975_);
lean_closure_set(v___x_977_, 2, v_m_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Vector_cast___redArg(lean_object* v_xs_978_){
_start:
{
lean_inc_ref(v_xs_978_);
return v_xs_978_;
}
}
LEAN_EXPORT lean_object* l_Vector_cast___redArg___boxed(lean_object* v_xs_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Vector_cast___redArg(v_xs_979_);
lean_dec_ref(v_xs_979_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Vector_cast(lean_object* v_n_981_, lean_object* v_m_982_, lean_object* v_00_u03b1_983_, lean_object* v_h_984_, lean_object* v_xs_985_){
_start:
{
lean_inc_ref(v_xs_985_);
return v_xs_985_;
}
}
LEAN_EXPORT lean_object* l_Vector_cast___boxed(lean_object* v_n_986_, lean_object* v_m_987_, lean_object* v_00_u03b1_988_, lean_object* v_h_989_, lean_object* v_xs_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Vector_cast(v_n_986_, v_m_987_, v_00_u03b1_988_, v_h_989_, v_xs_990_);
lean_dec_ref(v_xs_990_);
lean_dec(v_m_987_);
lean_dec(v_n_986_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Vector_extract___redArg(lean_object* v_xs_992_, lean_object* v_start_993_, lean_object* v_stop_994_){
_start:
{
lean_object* v___x_995_; 
v___x_995_ = l_Array_extract___redArg(v_xs_992_, v_start_993_, v_stop_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Vector_extract___redArg___boxed(lean_object* v_xs_996_, lean_object* v_start_997_, lean_object* v_stop_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Vector_extract___redArg(v_xs_996_, v_start_997_, v_stop_998_);
lean_dec_ref(v_xs_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Vector_extract(lean_object* v_00_u03b1_1000_, lean_object* v_n_1001_, lean_object* v_xs_1002_, lean_object* v_start_1003_, lean_object* v_stop_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Array_extract___redArg(v_xs_1002_, v_start_1003_, v_stop_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Vector_extract___boxed(lean_object* v_00_u03b1_1006_, lean_object* v_n_1007_, lean_object* v_xs_1008_, lean_object* v_start_1009_, lean_object* v_stop_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Vector_extract(v_00_u03b1_1006_, v_n_1007_, v_xs_1008_, v_start_1009_, v_stop_1010_);
lean_dec_ref(v_xs_1008_);
lean_dec(v_n_1007_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Vector_take___redArg(lean_object* v_n_1012_, lean_object* v_xs_1013_, lean_object* v_i_1014_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = l_Array_extract___redArg(v_xs_1013_, v___x_1015_, v_i_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Vector_take___redArg___boxed(lean_object* v_n_1017_, lean_object* v_xs_1018_, lean_object* v_i_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Vector_take___redArg(v_n_1017_, v_xs_1018_, v_i_1019_);
lean_dec_ref(v_xs_1018_);
lean_dec(v_n_1017_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Vector_take(lean_object* v_00_u03b1_1021_, lean_object* v_n_1022_, lean_object* v_xs_1023_, lean_object* v_i_1024_){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = l_Array_extract___redArg(v_xs_1023_, v___x_1025_, v_i_1024_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Vector_take___boxed(lean_object* v_00_u03b1_1027_, lean_object* v_n_1028_, lean_object* v_xs_1029_, lean_object* v_i_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Vector_take(v_00_u03b1_1027_, v_n_1028_, v_xs_1029_, v_i_1030_);
lean_dec_ref(v_xs_1029_);
lean_dec(v_n_1028_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Vector_drop___redArg(lean_object* v_xs_1032_, lean_object* v_i_1033_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = lean_array_get_size(v_xs_1032_);
v___x_1035_ = l_Array_extract___redArg(v_xs_1032_, v_i_1033_, v___x_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Vector_drop___redArg___boxed(lean_object* v_xs_1036_, lean_object* v_i_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Vector_drop___redArg(v_xs_1036_, v_i_1037_);
lean_dec_ref(v_xs_1036_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Vector_drop(lean_object* v_00_u03b1_1039_, lean_object* v_n_1040_, lean_object* v_xs_1041_, lean_object* v_i_1042_){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_array_get_size(v_xs_1041_);
v___x_1044_ = l_Array_extract___redArg(v_xs_1041_, v_i_1042_, v___x_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Vector_drop___boxed(lean_object* v_00_u03b1_1045_, lean_object* v_n_1046_, lean_object* v_xs_1047_, lean_object* v_i_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Vector_drop(v_00_u03b1_1045_, v_n_1046_, v_xs_1047_, v_i_1048_);
lean_dec_ref(v_xs_1047_);
lean_dec(v_n_1046_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Vector_shrink___redArg(lean_object* v_xs_1050_, lean_object* v_i_1051_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Array_shrink___redArg(v_xs_1050_, v_i_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Vector_shrink___redArg___boxed(lean_object* v_xs_1053_, lean_object* v_i_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Vector_shrink___redArg(v_xs_1053_, v_i_1054_);
lean_dec(v_i_1054_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Vector_shrink(lean_object* v_00_u03b1_1056_, lean_object* v_n_1057_, lean_object* v_xs_1058_, lean_object* v_i_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Array_shrink___redArg(v_xs_1058_, v_i_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Vector_shrink___boxed(lean_object* v_00_u03b1_1061_, lean_object* v_n_1062_, lean_object* v_xs_1063_, lean_object* v_i_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Vector_shrink(v_00_u03b1_1061_, v_n_1062_, v_xs_1063_, v_i_1064_);
lean_dec(v_i_1064_);
lean_dec(v_n_1062_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Vector_map___redArg___lam__0(lean_object* v_f_1066_, lean_object* v_x_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_apply_1(v_f_1066_, v_x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Vector_map___redArg(lean_object* v_f_1069_, lean_object* v_xs_1070_){
_start:
{
lean_object* v___f_1071_; lean_object* v___x_1072_; size_t v_sz_1073_; size_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___f_1071_ = lean_alloc_closure((void*)(l_Vector_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1071_, 0, v_f_1069_);
v___x_1072_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1073_ = lean_array_size(v_xs_1070_);
v___x_1074_ = ((size_t)0ULL);
v___x_1075_ = l_unsafeCast___redArg(v_xs_1070_);
v___x_1076_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1072_, v___f_1071_, v_sz_1073_, v___x_1074_, v___x_1075_);
v___x_1077_ = l_unsafeCast___redArg(v___x_1076_);
lean_dec(v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Vector_map___redArg___boxed(lean_object* v_f_1078_, lean_object* v_xs_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Vector_map___redArg(v_f_1078_, v_xs_1079_);
lean_dec_ref(v_xs_1079_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Vector_map(lean_object* v_00_u03b1_1081_, lean_object* v_00_u03b2_1082_, lean_object* v_n_1083_, lean_object* v_f_1084_, lean_object* v_xs_1085_){
_start:
{
lean_object* v___f_1086_; lean_object* v___x_1087_; size_t v_sz_1088_; size_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___f_1086_ = lean_alloc_closure((void*)(l_Vector_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1086_, 0, v_f_1084_);
v___x_1087_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1088_ = lean_array_size(v_xs_1085_);
v___x_1089_ = ((size_t)0ULL);
v___x_1090_ = l_unsafeCast___redArg(v_xs_1085_);
v___x_1091_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1087_, v___f_1086_, v_sz_1088_, v___x_1089_, v___x_1090_);
v___x_1092_ = l_unsafeCast___redArg(v___x_1091_);
lean_dec(v___x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Vector_map___boxed(lean_object* v_00_u03b1_1093_, lean_object* v_00_u03b2_1094_, lean_object* v_n_1095_, lean_object* v_f_1096_, lean_object* v_xs_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Vector_map(v_00_u03b1_1093_, v_00_u03b2_1094_, v_n_1095_, v_f_1096_, v_xs_1097_);
lean_dec_ref(v_xs_1097_);
lean_dec(v_n_1095_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdx___redArg___lam__0(lean_object* v_f_1099_, lean_object* v_i_1100_, lean_object* v_a_1101_, lean_object* v_x_1102_){
_start:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_apply_2(v_f_1099_, v_i_1100_, v_a_1101_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdx___redArg(lean_object* v_f_1104_, lean_object* v_xs_1105_){
_start:
{
lean_object* v___f_1106_; lean_object* v___x_1107_; size_t v_sz_1108_; size_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___f_1106_ = lean_alloc_closure((void*)(l_Vector_mapIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1106_, 0, v_f_1104_);
v___x_1107_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1108_ = lean_array_size(v_xs_1105_);
v___x_1109_ = ((size_t)0ULL);
v___x_1110_ = l_unsafeCast___redArg(v_xs_1105_);
v___x_1111_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1107_, v_xs_1105_, v___f_1106_, v_sz_1108_, v___x_1109_, v___x_1110_);
v___x_1112_ = l_unsafeCast___redArg(v___x_1111_);
lean_dec(v___x_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdx___redArg___boxed(lean_object* v_f_1113_, lean_object* v_xs_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Vector_mapIdx___redArg(v_f_1113_, v_xs_1114_);
lean_dec_ref(v_xs_1114_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdx(lean_object* v_00_u03b1_1116_, lean_object* v_00_u03b2_1117_, lean_object* v_n_1118_, lean_object* v_f_1119_, lean_object* v_xs_1120_){
_start:
{
lean_object* v___f_1121_; lean_object* v___x_1122_; size_t v_sz_1123_; size_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___f_1121_ = lean_alloc_closure((void*)(l_Vector_mapIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1121_, 0, v_f_1119_);
v___x_1122_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1123_ = lean_array_size(v_xs_1120_);
v___x_1124_ = ((size_t)0ULL);
v___x_1125_ = l_unsafeCast___redArg(v_xs_1120_);
v___x_1126_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1122_, v_xs_1120_, v___f_1121_, v_sz_1123_, v___x_1124_, v___x_1125_);
v___x_1127_ = l_unsafeCast___redArg(v___x_1126_);
lean_dec(v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdx___boxed(lean_object* v_00_u03b1_1128_, lean_object* v_00_u03b2_1129_, lean_object* v_n_1130_, lean_object* v_f_1131_, lean_object* v_xs_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Vector_mapIdx(v_00_u03b1_1128_, v_00_u03b2_1129_, v_n_1130_, v_f_1131_, v_xs_1132_);
lean_dec_ref(v_xs_1132_);
lean_dec(v_n_1130_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___redArg___lam__0(lean_object* v_f_1134_, lean_object* v_x1_1135_, lean_object* v_x2_1136_, lean_object* v_x3_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_apply_3(v_f_1134_, v_x1_1135_, v_x2_1136_, lean_box(0));
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___redArg(lean_object* v_xs_1139_, lean_object* v_f_1140_){
_start:
{
lean_object* v___f_1141_; lean_object* v___x_1142_; size_t v_sz_1143_; size_t v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___f_1141_ = lean_alloc_closure((void*)(l_Vector_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1141_, 0, v_f_1140_);
v___x_1142_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1143_ = lean_array_size(v_xs_1139_);
v___x_1144_ = ((size_t)0ULL);
v___x_1145_ = l_unsafeCast___redArg(v_xs_1139_);
v___x_1146_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1142_, v_xs_1139_, v___f_1141_, v_sz_1143_, v___x_1144_, v___x_1145_);
v___x_1147_ = l_unsafeCast___redArg(v___x_1146_);
lean_dec(v___x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___redArg___boxed(lean_object* v_xs_1148_, lean_object* v_f_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Vector_mapFinIdx___redArg(v_xs_1148_, v_f_1149_);
lean_dec_ref(v_xs_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdx(lean_object* v_00_u03b1_1151_, lean_object* v_n_1152_, lean_object* v_00_u03b2_1153_, lean_object* v_xs_1154_, lean_object* v_f_1155_){
_start:
{
lean_object* v___f_1156_; lean_object* v___x_1157_; size_t v_sz_1158_; size_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___f_1156_ = lean_alloc_closure((void*)(l_Vector_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1156_, 0, v_f_1155_);
v___x_1157_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1158_ = lean_array_size(v_xs_1154_);
v___x_1159_ = ((size_t)0ULL);
v___x_1160_ = l_unsafeCast___redArg(v_xs_1154_);
v___x_1161_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1157_, v_xs_1154_, v___f_1156_, v_sz_1158_, v___x_1159_, v___x_1160_);
v___x_1162_ = l_unsafeCast___redArg(v___x_1161_);
lean_dec(v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdx___boxed(lean_object* v_00_u03b1_1163_, lean_object* v_n_1164_, lean_object* v_00_u03b2_1165_, lean_object* v_xs_1166_, lean_object* v_f_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Vector_mapFinIdx(v_00_u03b1_1163_, v_n_1164_, v_00_u03b2_1165_, v_xs_1166_, v_f_1167_);
lean_dec_ref(v_xs_1166_);
lean_dec(v_n_1164_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg___lam__0___boxed(lean_object* v_k_1169_, lean_object* v_acc_1170_, lean_object* v_n_1171_, lean_object* v_inst_1172_, lean_object* v_f_1173_, lean_object* v_xs_1174_, lean_object* v_____do__lift_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg___lam__0(v_k_1169_, v_acc_1170_, v_n_1171_, v_inst_1172_, v_f_1173_, v_xs_1174_, v_____do__lift_1175_);
lean_dec(v_k_1169_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg(lean_object* v_n_1177_, lean_object* v_inst_1178_, lean_object* v_f_1179_, lean_object* v_xs_1180_, lean_object* v_k_1181_, lean_object* v_acc_1182_){
_start:
{
lean_object* v_toApplicative_1183_; lean_object* v_toBind_1184_; lean_object* v_toPure_1185_; uint8_t v___x_1186_; 
v_toApplicative_1183_ = lean_ctor_get(v_inst_1178_, 0);
v_toBind_1184_ = lean_ctor_get(v_inst_1178_, 1);
lean_inc(v_toBind_1184_);
v_toPure_1185_ = lean_ctor_get(v_toApplicative_1183_, 1);
v___x_1186_ = lean_nat_dec_lt(v_k_1181_, v_n_1177_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; 
lean_inc(v_toPure_1185_);
lean_dec(v_toBind_1184_);
lean_dec(v_k_1181_);
lean_dec_ref(v_xs_1180_);
lean_dec(v_f_1179_);
lean_dec_ref(v_inst_1178_);
lean_dec(v_n_1177_);
v___x_1187_ = lean_apply_2(v_toPure_1185_, lean_box(0), v_acc_1182_);
return v___x_1187_;
}
else
{
lean_object* v___f_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
lean_inc_ref(v_xs_1180_);
lean_inc(v_f_1179_);
lean_inc(v_k_1181_);
v___f_1188_ = lean_alloc_closure((void*)(l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1188_, 0, v_k_1181_);
lean_closure_set(v___f_1188_, 1, v_acc_1182_);
lean_closure_set(v___f_1188_, 2, v_n_1177_);
lean_closure_set(v___f_1188_, 3, v_inst_1178_);
lean_closure_set(v___f_1188_, 4, v_f_1179_);
lean_closure_set(v___f_1188_, 5, v_xs_1180_);
v___x_1189_ = lean_array_fget(v_xs_1180_, v_k_1181_);
lean_dec(v_k_1181_);
lean_dec_ref(v_xs_1180_);
v___x_1190_ = lean_apply_1(v_f_1179_, v___x_1189_);
v___x_1191_ = lean_apply_4(v_toBind_1184_, lean_box(0), lean_box(0), v___x_1190_, v___f_1188_);
return v___x_1191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg___lam__0(lean_object* v_k_1192_, lean_object* v_acc_1193_, lean_object* v_n_1194_, lean_object* v_inst_1195_, lean_object* v_f_1196_, lean_object* v_xs_1197_, lean_object* v_____do__lift_1198_){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1199_ = lean_unsigned_to_nat(1u);
v___x_1200_ = lean_nat_add(v_k_1192_, v___x_1199_);
v___x_1201_ = lean_array_push(v_acc_1193_, v_____do__lift_1198_);
v___x_1202_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg(v_n_1194_, v_inst_1195_, v_f_1196_, v_xs_1197_, v___x_1200_, v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go(lean_object* v_m_1203_, lean_object* v_00_u03b1_1204_, lean_object* v_00_u03b2_1205_, lean_object* v_n_1206_, lean_object* v_inst_1207_, lean_object* v_f_1208_, lean_object* v_xs_1209_, lean_object* v_k_1210_, lean_object* v_h_1211_, lean_object* v_acc_1212_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg(v_n_1206_, v_inst_1207_, v_f_1208_, v_xs_1209_, v_k_1210_, v_acc_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapM___redArg(lean_object* v_n_1216_, lean_object* v_inst_1217_, lean_object* v_f_1218_, lean_object* v_xs_1219_){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = lean_unsigned_to_nat(0u);
v___x_1221_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1222_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg(v_n_1216_, v_inst_1217_, v_f_1218_, v_xs_1219_, v___x_1220_, v___x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapM(lean_object* v_m_1223_, lean_object* v_00_u03b1_1224_, lean_object* v_00_u03b2_1225_, lean_object* v_n_1226_, lean_object* v_inst_1227_, lean_object* v_f_1228_, lean_object* v_xs_1229_){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1230_ = lean_unsigned_to_nat(0u);
v___x_1231_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1232_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___redArg(v_n_1226_, v_inst_1227_, v_f_1228_, v_xs_1229_, v___x_1230_, v___x_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Vector_forM___redArg___lam__0(lean_object* v_f_1233_, lean_object* v_x_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_apply_1(v_f_1233_, v___y_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Vector_forM___redArg(lean_object* v_inst_1237_, lean_object* v_xs_1238_, lean_object* v_f_1239_){
_start:
{
lean_object* v_toApplicative_1240_; lean_object* v_toPure_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
v_toApplicative_1240_ = lean_ctor_get(v_inst_1237_, 0);
v_toPure_1241_ = lean_ctor_get(v_toApplicative_1240_, 1);
v___x_1242_ = lean_unsigned_to_nat(0u);
v___x_1243_ = lean_array_get_size(v_xs_1238_);
v___x_1244_ = lean_box(0);
v___x_1245_ = lean_nat_dec_lt(v___x_1242_, v___x_1243_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; 
lean_inc(v_toPure_1241_);
lean_dec(v_f_1239_);
lean_dec_ref(v_xs_1238_);
lean_dec_ref(v_inst_1237_);
v___x_1246_ = lean_apply_2(v_toPure_1241_, lean_box(0), v___x_1244_);
return v___x_1246_;
}
else
{
lean_object* v___f_1247_; uint8_t v___x_1248_; 
v___f_1247_ = lean_alloc_closure((void*)(l_Vector_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1247_, 0, v_f_1239_);
v___x_1248_ = lean_nat_dec_le(v___x_1243_, v___x_1243_);
if (v___x_1248_ == 0)
{
if (v___x_1245_ == 0)
{
lean_object* v___x_1249_; 
lean_inc(v_toPure_1241_);
lean_dec_ref(v___f_1247_);
lean_dec_ref(v_xs_1238_);
lean_dec_ref(v_inst_1237_);
v___x_1249_ = lean_apply_2(v_toPure_1241_, lean_box(0), v___x_1244_);
return v___x_1249_;
}
else
{
size_t v___x_1250_; size_t v___x_1251_; lean_object* v___x_1252_; 
v___x_1250_ = ((size_t)0ULL);
v___x_1251_ = lean_usize_of_nat(v___x_1243_);
v___x_1252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1237_, v___f_1247_, v_xs_1238_, v___x_1250_, v___x_1251_, v___x_1244_);
return v___x_1252_;
}
}
else
{
size_t v___x_1253_; size_t v___x_1254_; lean_object* v___x_1255_; 
v___x_1253_ = ((size_t)0ULL);
v___x_1254_ = lean_usize_of_nat(v___x_1243_);
v___x_1255_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1237_, v___f_1247_, v_xs_1238_, v___x_1253_, v___x_1254_, v___x_1244_);
return v___x_1255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_forM(lean_object* v_m_1256_, lean_object* v_00_u03b1_1257_, lean_object* v_n_1258_, lean_object* v_inst_1259_, lean_object* v_xs_1260_, lean_object* v_f_1261_){
_start:
{
lean_object* v_toApplicative_1262_; lean_object* v_toPure_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v_toApplicative_1262_ = lean_ctor_get(v_inst_1259_, 0);
v_toPure_1263_ = lean_ctor_get(v_toApplicative_1262_, 1);
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = lean_array_get_size(v_xs_1260_);
v___x_1266_ = lean_box(0);
v___x_1267_ = lean_nat_dec_lt(v___x_1264_, v___x_1265_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; 
lean_inc(v_toPure_1263_);
lean_dec(v_f_1261_);
lean_dec_ref(v_xs_1260_);
lean_dec_ref(v_inst_1259_);
v___x_1268_ = lean_apply_2(v_toPure_1263_, lean_box(0), v___x_1266_);
return v___x_1268_;
}
else
{
lean_object* v___f_1269_; uint8_t v___x_1270_; 
v___f_1269_ = lean_alloc_closure((void*)(l_Vector_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1269_, 0, v_f_1261_);
v___x_1270_ = lean_nat_dec_le(v___x_1265_, v___x_1265_);
if (v___x_1270_ == 0)
{
if (v___x_1267_ == 0)
{
lean_object* v___x_1271_; 
lean_inc(v_toPure_1263_);
lean_dec_ref(v___f_1269_);
lean_dec_ref(v_xs_1260_);
lean_dec_ref(v_inst_1259_);
v___x_1271_ = lean_apply_2(v_toPure_1263_, lean_box(0), v___x_1266_);
return v___x_1271_;
}
else
{
size_t v___x_1272_; size_t v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = ((size_t)0ULL);
v___x_1273_ = lean_usize_of_nat(v___x_1265_);
v___x_1274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1259_, v___f_1269_, v_xs_1260_, v___x_1272_, v___x_1273_, v___x_1266_);
return v___x_1274_;
}
}
else
{
size_t v___x_1275_; size_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1275_ = ((size_t)0ULL);
v___x_1276_ = lean_usize_of_nat(v___x_1265_);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1259_, v___f_1269_, v_xs_1260_, v___x_1275_, v___x_1276_, v___x_1266_);
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_forM___boxed(lean_object* v_m_1278_, lean_object* v_00_u03b1_1279_, lean_object* v_n_1280_, lean_object* v_inst_1281_, lean_object* v_xs_1282_, lean_object* v_f_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Vector_forM(v_m_1278_, v_00_u03b1_1279_, v_n_1280_, v_inst_1281_, v_xs_1282_, v_f_1283_);
lean_dec(v_n_1280_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg___lam__0___boxed(lean_object* v_i_1285_, lean_object* v_acc_1286_, lean_object* v_n_1287_, lean_object* v_inst_1288_, lean_object* v_xs_1289_, lean_object* v_f_1290_, lean_object* v_____do__lift_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg___lam__0(v_i_1285_, v_acc_1286_, v_n_1287_, v_inst_1288_, v_xs_1289_, v_f_1290_, v_____do__lift_1291_);
lean_dec_ref(v_____do__lift_1291_);
lean_dec(v_i_1285_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg(lean_object* v_n_1293_, lean_object* v_inst_1294_, lean_object* v_xs_1295_, lean_object* v_f_1296_, lean_object* v_i_1297_, lean_object* v_acc_1298_){
_start:
{
lean_object* v_toApplicative_1299_; lean_object* v_toBind_1300_; lean_object* v_toPure_1301_; uint8_t v___x_1302_; 
v_toApplicative_1299_ = lean_ctor_get(v_inst_1294_, 0);
v_toBind_1300_ = lean_ctor_get(v_inst_1294_, 1);
lean_inc(v_toBind_1300_);
v_toPure_1301_ = lean_ctor_get(v_toApplicative_1299_, 1);
v___x_1302_ = lean_nat_dec_lt(v_i_1297_, v_n_1293_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; 
lean_inc(v_toPure_1301_);
lean_dec(v_toBind_1300_);
lean_dec(v_i_1297_);
lean_dec(v_f_1296_);
lean_dec_ref(v_xs_1295_);
lean_dec_ref(v_inst_1294_);
lean_dec(v_n_1293_);
v___x_1303_ = lean_apply_2(v_toPure_1301_, lean_box(0), v_acc_1298_);
return v___x_1303_;
}
else
{
lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_inc(v_f_1296_);
lean_inc_ref(v_xs_1295_);
lean_inc(v_i_1297_);
v___f_1304_ = lean_alloc_closure((void*)(l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1304_, 0, v_i_1297_);
lean_closure_set(v___f_1304_, 1, v_acc_1298_);
lean_closure_set(v___f_1304_, 2, v_n_1293_);
lean_closure_set(v___f_1304_, 3, v_inst_1294_);
lean_closure_set(v___f_1304_, 4, v_xs_1295_);
lean_closure_set(v___f_1304_, 5, v_f_1296_);
v___x_1305_ = lean_array_fget(v_xs_1295_, v_i_1297_);
lean_dec(v_i_1297_);
lean_dec_ref(v_xs_1295_);
v___x_1306_ = lean_apply_1(v_f_1296_, v___x_1305_);
v___x_1307_ = lean_apply_4(v_toBind_1300_, lean_box(0), lean_box(0), v___x_1306_, v___f_1304_);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg___lam__0(lean_object* v_i_1308_, lean_object* v_acc_1309_, lean_object* v_n_1310_, lean_object* v_inst_1311_, lean_object* v_xs_1312_, lean_object* v_f_1313_, lean_object* v_____do__lift_1314_){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1315_ = lean_unsigned_to_nat(1u);
v___x_1316_ = lean_nat_add(v_i_1308_, v___x_1315_);
v___x_1317_ = l_Array_append___redArg(v_acc_1309_, v_____do__lift_1314_);
v___x_1318_ = l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg(v_n_1310_, v_inst_1311_, v_xs_1312_, v_f_1313_, v___x_1316_, v___x_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go(lean_object* v_m_1319_, lean_object* v_00_u03b1_1320_, lean_object* v_n_1321_, lean_object* v_00_u03b2_1322_, lean_object* v_k_1323_, lean_object* v_inst_1324_, lean_object* v_xs_1325_, lean_object* v_f_1326_, lean_object* v_i_1327_, lean_object* v_h_1328_, lean_object* v_acc_1329_){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg(v_n_1321_, v_inst_1324_, v_xs_1325_, v_f_1326_, v_i_1327_, v_acc_1329_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___boxed(lean_object* v_m_1331_, lean_object* v_00_u03b1_1332_, lean_object* v_n_1333_, lean_object* v_00_u03b2_1334_, lean_object* v_k_1335_, lean_object* v_inst_1336_, lean_object* v_xs_1337_, lean_object* v_f_1338_, lean_object* v_i_1339_, lean_object* v_h_1340_, lean_object* v_acc_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go(v_m_1331_, v_00_u03b1_1332_, v_n_1333_, v_00_u03b2_1334_, v_k_1335_, v_inst_1336_, v_xs_1337_, v_f_1338_, v_i_1339_, v_h_1340_, v_acc_1341_);
lean_dec(v_k_1335_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatMapM___redArg(lean_object* v_n_1343_, lean_object* v_inst_1344_, lean_object* v_xs_1345_, lean_object* v_f_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = lean_unsigned_to_nat(0u);
v___x_1348_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1349_ = l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg(v_n_1343_, v_inst_1344_, v_xs_1345_, v_f_1346_, v___x_1347_, v___x_1348_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatMapM(lean_object* v_m_1350_, lean_object* v_00_u03b1_1351_, lean_object* v_n_1352_, lean_object* v_00_u03b2_1353_, lean_object* v_k_1354_, lean_object* v_inst_1355_, lean_object* v_xs_1356_, lean_object* v_f_1357_){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = lean_unsigned_to_nat(0u);
v___x_1359_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1360_ = l___private_Init_Data_Vector_Basic_0__Vector_flatMapM_go___redArg(v_n_1352_, v_inst_1355_, v_xs_1356_, v_f_1357_, v___x_1358_, v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatMapM___boxed(lean_object* v_m_1361_, lean_object* v_00_u03b1_1362_, lean_object* v_n_1363_, lean_object* v_00_u03b2_1364_, lean_object* v_k_1365_, lean_object* v_inst_1366_, lean_object* v_xs_1367_, lean_object* v_f_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Vector_flatMapM(v_m_1361_, v_00_u03b1_1362_, v_n_1363_, v_00_u03b2_1364_, v_k_1365_, v_inst_1366_, v_xs_1367_, v_f_1368_);
lean_dec(v_k_1365_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg___lam__0___boxed(lean_object* v_j_1370_, lean_object* v_ys_1371_, lean_object* v_inst_1372_, lean_object* v_xs_1373_, lean_object* v_f_1374_, lean_object* v_n_1375_, lean_object* v_____do__lift_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Vector_mapFinIdxM_map___redArg___lam__0(v_j_1370_, v_ys_1371_, v_inst_1372_, v_xs_1373_, v_f_1374_, v_n_1375_, v_____do__lift_1376_);
lean_dec(v_n_1375_);
lean_dec(v_j_1370_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg(lean_object* v_inst_1378_, lean_object* v_xs_1379_, lean_object* v_f_1380_, lean_object* v_i_1381_, lean_object* v_j_1382_, lean_object* v_ys_1383_){
_start:
{
lean_object* v_toApplicative_1384_; lean_object* v_toBind_1385_; lean_object* v_toPure_1386_; lean_object* v_zero_1387_; uint8_t v_isZero_1388_; 
v_toApplicative_1384_ = lean_ctor_get(v_inst_1378_, 0);
v_toBind_1385_ = lean_ctor_get(v_inst_1378_, 1);
lean_inc(v_toBind_1385_);
v_toPure_1386_ = lean_ctor_get(v_toApplicative_1384_, 1);
v_zero_1387_ = lean_unsigned_to_nat(0u);
v_isZero_1388_ = lean_nat_dec_eq(v_i_1381_, v_zero_1387_);
if (v_isZero_1388_ == 1)
{
lean_object* v___x_1389_; 
lean_inc(v_toPure_1386_);
lean_dec(v_toBind_1385_);
lean_dec(v_j_1382_);
lean_dec(v_f_1380_);
lean_dec_ref(v_xs_1379_);
lean_dec_ref(v_inst_1378_);
v___x_1389_ = lean_apply_2(v_toPure_1386_, lean_box(0), v_ys_1383_);
return v___x_1389_;
}
else
{
lean_object* v_one_1390_; lean_object* v_n_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v_one_1390_ = lean_unsigned_to_nat(1u);
v_n_1391_ = lean_nat_sub(v_i_1381_, v_one_1390_);
lean_inc(v_f_1380_);
lean_inc_ref(v_xs_1379_);
lean_inc(v_j_1382_);
v___f_1392_ = lean_alloc_closure((void*)(l_Vector_mapFinIdxM_map___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1392_, 0, v_j_1382_);
lean_closure_set(v___f_1392_, 1, v_ys_1383_);
lean_closure_set(v___f_1392_, 2, v_inst_1378_);
lean_closure_set(v___f_1392_, 3, v_xs_1379_);
lean_closure_set(v___f_1392_, 4, v_f_1380_);
lean_closure_set(v___f_1392_, 5, v_n_1391_);
v___x_1393_ = lean_array_fget(v_xs_1379_, v_j_1382_);
lean_dec_ref(v_xs_1379_);
v___x_1394_ = lean_apply_3(v_f_1380_, v_j_1382_, v___x_1393_, lean_box(0));
v___x_1395_ = lean_apply_4(v_toBind_1385_, lean_box(0), lean_box(0), v___x_1394_, v___f_1392_);
return v___x_1395_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg___lam__0(lean_object* v_j_1396_, lean_object* v_ys_1397_, lean_object* v_inst_1398_, lean_object* v_xs_1399_, lean_object* v_f_1400_, lean_object* v_n_1401_, lean_object* v_____do__lift_1402_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1403_ = lean_unsigned_to_nat(1u);
v___x_1404_ = lean_nat_add(v_j_1396_, v___x_1403_);
v___x_1405_ = lean_array_push(v_ys_1397_, v_____do__lift_1402_);
v___x_1406_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1398_, v_xs_1399_, v_f_1400_, v_n_1401_, v___x_1404_, v___x_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___redArg___boxed(lean_object* v_inst_1407_, lean_object* v_xs_1408_, lean_object* v_f_1409_, lean_object* v_i_1410_, lean_object* v_j_1411_, lean_object* v_ys_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1407_, v_xs_1408_, v_f_1409_, v_i_1410_, v_j_1411_, v_ys_1412_);
lean_dec(v_i_1410_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map(lean_object* v_n_1414_, lean_object* v_00_u03b1_1415_, lean_object* v_00_u03b2_1416_, lean_object* v_m_1417_, lean_object* v_inst_1418_, lean_object* v_xs_1419_, lean_object* v_f_1420_, lean_object* v_i_1421_, lean_object* v_j_1422_, lean_object* v_inv_1423_, lean_object* v_ys_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1418_, v_xs_1419_, v_f_1420_, v_i_1421_, v_j_1422_, v_ys_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM_map___boxed(lean_object* v_n_1426_, lean_object* v_00_u03b1_1427_, lean_object* v_00_u03b2_1428_, lean_object* v_m_1429_, lean_object* v_inst_1430_, lean_object* v_xs_1431_, lean_object* v_f_1432_, lean_object* v_i_1433_, lean_object* v_j_1434_, lean_object* v_inv_1435_, lean_object* v_ys_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Vector_mapFinIdxM_map(v_n_1426_, v_00_u03b1_1427_, v_00_u03b2_1428_, v_m_1429_, v_inst_1430_, v_xs_1431_, v_f_1432_, v_i_1433_, v_j_1434_, v_inv_1435_, v_ys_1436_);
lean_dec(v_i_1433_);
lean_dec(v_n_1426_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM___redArg(lean_object* v_n_1438_, lean_object* v_inst_1439_, lean_object* v_xs_1440_, lean_object* v_f_1441_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1442_ = lean_unsigned_to_nat(0u);
v___x_1443_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1444_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1439_, v_xs_1440_, v_f_1441_, v_n_1438_, v___x_1442_, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM___redArg___boxed(lean_object* v_n_1445_, lean_object* v_inst_1446_, lean_object* v_xs_1447_, lean_object* v_f_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Vector_mapFinIdxM___redArg(v_n_1445_, v_inst_1446_, v_xs_1447_, v_f_1448_);
lean_dec(v_n_1445_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM(lean_object* v_n_1450_, lean_object* v_00_u03b1_1451_, lean_object* v_00_u03b2_1452_, lean_object* v_m_1453_, lean_object* v_inst_1454_, lean_object* v_xs_1455_, lean_object* v_f_1456_){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1457_ = lean_unsigned_to_nat(0u);
v___x_1458_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1459_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1454_, v_xs_1455_, v_f_1456_, v_n_1450_, v___x_1457_, v___x_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapFinIdxM___boxed(lean_object* v_n_1460_, lean_object* v_00_u03b1_1461_, lean_object* v_00_u03b2_1462_, lean_object* v_m_1463_, lean_object* v_inst_1464_, lean_object* v_xs_1465_, lean_object* v_f_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_Vector_mapFinIdxM(v_n_1460_, v_00_u03b1_1461_, v_00_u03b2_1462_, v_m_1463_, v_inst_1464_, v_xs_1465_, v_f_1466_);
lean_dec(v_n_1460_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdxM___redArg(lean_object* v_n_1468_, lean_object* v_inst_1469_, lean_object* v_f_1470_, lean_object* v_xs_1471_){
_start:
{
lean_object* v___f_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___f_1472_ = lean_alloc_closure((void*)(l_Vector_mapIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1472_, 0, v_f_1470_);
v___x_1473_ = lean_unsigned_to_nat(0u);
v___x_1474_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1475_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1469_, v_xs_1471_, v___f_1472_, v_n_1468_, v___x_1473_, v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdxM___redArg___boxed(lean_object* v_n_1476_, lean_object* v_inst_1477_, lean_object* v_f_1478_, lean_object* v_xs_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Vector_mapIdxM___redArg(v_n_1476_, v_inst_1477_, v_f_1478_, v_xs_1479_);
lean_dec(v_n_1476_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdxM(lean_object* v_n_1481_, lean_object* v_00_u03b1_1482_, lean_object* v_00_u03b2_1483_, lean_object* v_m_1484_, lean_object* v_inst_1485_, lean_object* v_f_1486_, lean_object* v_xs_1487_){
_start:
{
lean_object* v___f_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___f_1488_ = lean_alloc_closure((void*)(l_Vector_mapIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1488_, 0, v_f_1486_);
v___x_1489_ = lean_unsigned_to_nat(0u);
v___x_1490_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1491_ = l_Vector_mapFinIdxM_map___redArg(v_inst_1485_, v_xs_1487_, v___f_1488_, v_n_1481_, v___x_1489_, v___x_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Vector_mapIdxM___boxed(lean_object* v_n_1492_, lean_object* v_00_u03b1_1493_, lean_object* v_00_u03b2_1494_, lean_object* v_m_1495_, lean_object* v_inst_1496_, lean_object* v_f_1497_, lean_object* v_xs_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Vector_mapIdxM(v_n_1492_, v_00_u03b1_1493_, v_00_u03b2_1494_, v_m_1495_, v_inst_1496_, v_f_1497_, v_xs_1498_);
lean_dec(v_n_1492_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Vector_firstM___redArg(lean_object* v_inst_1500_, lean_object* v_f_1501_, lean_object* v_xs_1502_){
_start:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1503_ = lean_unsigned_to_nat(0u);
v___x_1504_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v_inst_1500_, v_f_1501_, v_xs_1502_, v___x_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Vector_firstM(lean_object* v_00_u03b2_1505_, lean_object* v_n_1506_, lean_object* v_00_u03b1_1507_, lean_object* v_m_1508_, lean_object* v_inst_1509_, lean_object* v_f_1510_, lean_object* v_xs_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_unsigned_to_nat(0u);
v___x_1513_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v_inst_1509_, v_f_1510_, v_xs_1511_, v___x_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Vector_firstM___boxed(lean_object* v_00_u03b2_1514_, lean_object* v_n_1515_, lean_object* v_00_u03b1_1516_, lean_object* v_m_1517_, lean_object* v_inst_1518_, lean_object* v_f_1519_, lean_object* v_xs_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Vector_firstM(v_00_u03b2_1514_, v_n_1515_, v_00_u03b1_1516_, v_m_1517_, v_inst_1518_, v_f_1519_, v_xs_1520_);
lean_dec(v_n_1515_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatten___redArg___lam__0(lean_object* v_x_1522_){
_start:
{
lean_inc_ref(v_x_1522_);
return v_x_1522_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatten___redArg___lam__0___boxed(lean_object* v_x_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Vector_flatten___redArg___lam__0(v_x_1523_);
lean_dec_ref(v_x_1523_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatten___redArg(lean_object* v_xs_1529_){
_start:
{
lean_object* v___f_1530_; lean_object* v___x_1531_; size_t v_sz_1532_; size_t v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; uint8_t v___x_1540_; 
v___f_1530_ = ((lean_object*)(l_Vector_flatten___redArg___closed__0));
v___x_1531_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1532_ = lean_array_size(v_xs_1529_);
v___x_1533_ = ((size_t)0ULL);
v___x_1534_ = l_unsafeCast___redArg(v_xs_1529_);
v___x_1535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1531_, v___f_1530_, v_sz_1532_, v___x_1533_, v___x_1534_);
v___x_1536_ = l_unsafeCast___redArg(v___x_1535_);
lean_dec(v___x_1535_);
v___x_1537_ = lean_unsigned_to_nat(0u);
v___x_1538_ = ((lean_object*)(l_Vector_flatten___redArg___closed__1));
v___x_1539_ = lean_array_get_size(v___x_1536_);
v___x_1540_ = lean_nat_dec_lt(v___x_1537_, v___x_1539_);
if (v___x_1540_ == 0)
{
lean_dec(v___x_1536_);
return v___x_1538_;
}
else
{
lean_object* v___f_1541_; size_t v___x_1542_; lean_object* v___x_1543_; 
v___f_1541_ = ((lean_object*)(l_Vector_flatten___redArg___closed__2));
v___x_1542_ = lean_usize_of_nat(v___x_1539_);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1531_, v___f_1541_, v___x_1536_, v___x_1533_, v___x_1542_, v___x_1538_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_flatten___redArg___boxed(lean_object* v_xs_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Vector_flatten___redArg(v_xs_1544_);
lean_dec_ref(v_xs_1544_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatten(lean_object* v_00_u03b1_1546_, lean_object* v_n_1547_, lean_object* v_m_1548_, lean_object* v_xs_1549_){
_start:
{
lean_object* v___f_1550_; lean_object* v___x_1551_; size_t v_sz_1552_; size_t v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___f_1550_ = ((lean_object*)(l_Vector_flatten___redArg___closed__0));
v___x_1551_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v_sz_1552_ = lean_array_size(v_xs_1549_);
v___x_1553_ = ((size_t)0ULL);
v___x_1554_ = l_unsafeCast___redArg(v_xs_1549_);
v___x_1555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1551_, v___f_1550_, v_sz_1552_, v___x_1553_, v___x_1554_);
v___x_1556_ = l_unsafeCast___redArg(v___x_1555_);
lean_dec(v___x_1555_);
v___x_1557_ = lean_unsigned_to_nat(0u);
v___x_1558_ = ((lean_object*)(l_Vector_flatten___redArg___closed__1));
v___x_1559_ = lean_array_get_size(v___x_1556_);
v___x_1560_ = lean_nat_dec_lt(v___x_1557_, v___x_1559_);
if (v___x_1560_ == 0)
{
lean_dec(v___x_1556_);
return v___x_1558_;
}
else
{
lean_object* v___f_1561_; size_t v___x_1562_; lean_object* v___x_1563_; 
v___f_1561_ = ((lean_object*)(l_Vector_flatten___redArg___closed__2));
v___x_1562_ = lean_usize_of_nat(v___x_1559_);
v___x_1563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1551_, v___f_1561_, v___x_1556_, v___x_1553_, v___x_1562_, v___x_1558_);
return v___x_1563_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_flatten___boxed(lean_object* v_00_u03b1_1564_, lean_object* v_n_1565_, lean_object* v_m_1566_, lean_object* v_xs_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Vector_flatten(v_00_u03b1_1564_, v_n_1565_, v_m_1566_, v_xs_1567_);
lean_dec_ref(v_xs_1567_);
lean_dec(v_m_1566_);
lean_dec(v_n_1565_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatMap___redArg___lam__0(lean_object* v_f_1569_, lean_object* v_x1_1570_, lean_object* v_x2_1571_){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_apply_1(v_f_1569_, v_x2_1571_);
v___x_1573_ = l_Array_append___redArg(v_x1_1570_, v___x_1572_);
lean_dec_ref(v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Vector_flatMap___redArg(lean_object* v_xs_1574_, lean_object* v_f_1575_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = ((lean_object*)(l_Vector_flatten___redArg___closed__1));
v___x_1578_ = lean_array_get_size(v_xs_1574_);
v___x_1579_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_1580_ = lean_nat_dec_lt(v___x_1576_, v___x_1578_);
if (v___x_1580_ == 0)
{
lean_dec_ref(v_f_1575_);
lean_dec_ref(v_xs_1574_);
return v___x_1577_;
}
else
{
lean_object* v___f_1581_; size_t v___x_1582_; size_t v___x_1583_; lean_object* v___x_1584_; 
v___f_1581_ = lean_alloc_closure((void*)(l_Vector_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1581_, 0, v_f_1575_);
v___x_1582_ = ((size_t)0ULL);
v___x_1583_ = lean_usize_of_nat(v___x_1578_);
v___x_1584_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1579_, v___f_1581_, v_xs_1574_, v___x_1582_, v___x_1583_, v___x_1577_);
return v___x_1584_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_flatMap(lean_object* v_00_u03b1_1585_, lean_object* v_n_1586_, lean_object* v_00_u03b2_1587_, lean_object* v_m_1588_, lean_object* v_xs_1589_, lean_object* v_f_1590_){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1591_ = lean_unsigned_to_nat(0u);
v___x_1592_ = ((lean_object*)(l_Vector_flatten___redArg___closed__1));
v___x_1593_ = lean_array_get_size(v_xs_1589_);
v___x_1594_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_1595_ = lean_nat_dec_lt(v___x_1591_, v___x_1593_);
if (v___x_1595_ == 0)
{
lean_dec_ref(v_f_1590_);
lean_dec_ref(v_xs_1589_);
return v___x_1592_;
}
else
{
lean_object* v___f_1596_; size_t v___x_1597_; size_t v___x_1598_; lean_object* v___x_1599_; 
v___f_1596_ = lean_alloc_closure((void*)(l_Vector_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1596_, 0, v_f_1590_);
v___x_1597_ = ((size_t)0ULL);
v___x_1598_ = lean_usize_of_nat(v___x_1593_);
v___x_1599_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1594_, v___f_1596_, v_xs_1589_, v___x_1597_, v___x_1598_, v___x_1592_);
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_flatMap___boxed(lean_object* v_00_u03b1_1600_, lean_object* v_n_1601_, lean_object* v_00_u03b2_1602_, lean_object* v_m_1603_, lean_object* v_xs_1604_, lean_object* v_f_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Vector_flatMap(v_00_u03b1_1600_, v_n_1601_, v_00_u03b2_1602_, v_m_1603_, v_xs_1604_, v_f_1605_);
lean_dec(v_m_1603_);
lean_dec(v_n_1601_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipIdx___redArg(lean_object* v_xs_1607_, lean_object* v_k_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Array_zipIdx___redArg(v_xs_1607_, v_k_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipIdx___redArg___boxed(lean_object* v_xs_1610_, lean_object* v_k_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Vector_zipIdx___redArg(v_xs_1610_, v_k_1611_);
lean_dec(v_k_1611_);
lean_dec_ref(v_xs_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipIdx(lean_object* v_00_u03b1_1613_, lean_object* v_n_1614_, lean_object* v_xs_1615_, lean_object* v_k_1616_){
_start:
{
lean_object* v___x_1617_; 
v___x_1617_ = l_Array_zipIdx___redArg(v_xs_1615_, v_k_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipIdx___boxed(lean_object* v_00_u03b1_1618_, lean_object* v_n_1619_, lean_object* v_xs_1620_, lean_object* v_k_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Vector_zipIdx(v_00_u03b1_1618_, v_n_1619_, v_xs_1620_, v_k_1621_);
lean_dec(v_k_1621_);
lean_dec_ref(v_xs_1620_);
lean_dec(v_n_1619_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Vector_zip___redArg(lean_object* v_as_1623_, lean_object* v_bs_1624_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Array_zip___redArg(v_as_1623_, v_bs_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Vector_zip___redArg___boxed(lean_object* v_as_1626_, lean_object* v_bs_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Vector_zip___redArg(v_as_1626_, v_bs_1627_);
lean_dec_ref(v_bs_1627_);
lean_dec_ref(v_as_1626_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Vector_zip(lean_object* v_00_u03b1_1629_, lean_object* v_n_1630_, lean_object* v_00_u03b2_1631_, lean_object* v_as_1632_, lean_object* v_bs_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Array_zip___redArg(v_as_1632_, v_bs_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Vector_zip___boxed(lean_object* v_00_u03b1_1635_, lean_object* v_n_1636_, lean_object* v_00_u03b2_1637_, lean_object* v_as_1638_, lean_object* v_bs_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Vector_zip(v_00_u03b1_1635_, v_n_1636_, v_00_u03b2_1637_, v_as_1638_, v_bs_1639_);
lean_dec_ref(v_bs_1639_);
lean_dec_ref(v_as_1638_);
lean_dec(v_n_1636_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipWith___redArg(lean_object* v_f_1641_, lean_object* v_as_1642_, lean_object* v_bs_1643_){
_start:
{
lean_object* v___f_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___f_1644_ = lean_alloc_closure((void*)(l_Vector_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1644_, 0, v_f_1641_);
v___x_1645_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_1646_ = lean_unsigned_to_nat(0u);
v___x_1647_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1648_ = l_Array_zipWithMAux___redArg(v___x_1645_, v_as_1642_, v_bs_1643_, v___f_1644_, v___x_1646_, v___x_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipWith(lean_object* v_00_u03b1_1649_, lean_object* v_00_u03b2_1650_, lean_object* v_00_u03c6_1651_, lean_object* v_n_1652_, lean_object* v_f_1653_, lean_object* v_as_1654_, lean_object* v_bs_1655_){
_start:
{
lean_object* v___f_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___f_1656_ = lean_alloc_closure((void*)(l_Vector_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1656_, 0, v_f_1653_);
v___x_1657_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_1658_ = lean_unsigned_to_nat(0u);
v___x_1659_ = ((lean_object*)(l_Vector_mapM___redArg___closed__0));
v___x_1660_ = l_Array_zipWithMAux___redArg(v___x_1657_, v_as_1654_, v_bs_1655_, v___f_1656_, v___x_1658_, v___x_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Vector_zipWith___boxed(lean_object* v_00_u03b1_1661_, lean_object* v_00_u03b2_1662_, lean_object* v_00_u03c6_1663_, lean_object* v_n_1664_, lean_object* v_f_1665_, lean_object* v_as_1666_, lean_object* v_bs_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Vector_zipWith(v_00_u03b1_1661_, v_00_u03b2_1662_, v_00_u03c6_1663_, v_n_1664_, v_f_1665_, v_as_1666_, v_bs_1667_);
lean_dec(v_n_1664_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Vector_unzip___redArg(lean_object* v_xs_1669_){
_start:
{
lean_object* v___x_1670_; lean_object* v_fst_1671_; lean_object* v_snd_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
v___x_1670_ = l_Array_unzip___redArg(v_xs_1669_);
v_fst_1671_ = lean_ctor_get(v___x_1670_, 0);
v_snd_1672_ = lean_ctor_get(v___x_1670_, 1);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1670_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_snd_1672_);
lean_inc(v_fst_1671_);
lean_dec(v___x_1670_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_fst_1671_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_snd_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_unzip___redArg___boxed(lean_object* v_xs_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Vector_unzip___redArg(v_xs_1680_);
lean_dec_ref(v_xs_1680_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Vector_unzip(lean_object* v_00_u03b1_1682_, lean_object* v_00_u03b2_1683_, lean_object* v_n_1684_, lean_object* v_xs_1685_){
_start:
{
lean_object* v___x_1686_; lean_object* v_fst_1687_; lean_object* v_snd_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
v___x_1686_ = l_Array_unzip___redArg(v_xs_1685_);
v_fst_1687_ = lean_ctor_get(v___x_1686_, 0);
v_snd_1688_ = lean_ctor_get(v___x_1686_, 1);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1686_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_snd_1688_);
lean_inc(v_fst_1687_);
lean_dec(v___x_1686_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_fst_1687_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v_snd_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_unzip___boxed(lean_object* v_00_u03b1_1696_, lean_object* v_00_u03b2_1697_, lean_object* v_n_1698_, lean_object* v_xs_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Vector_unzip(v_00_u03b1_1696_, v_00_u03b2_1697_, v_n_1698_, v_xs_1699_);
lean_dec_ref(v_xs_1699_);
lean_dec(v_n_1698_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Vector_ofFn___redArg(lean_object* v_n_1701_, lean_object* v_f_1702_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Array_ofFn___redArg(v_n_1701_, v_f_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Vector_ofFn(lean_object* v_n_1704_, lean_object* v_00_u03b1_1705_, lean_object* v_f_1706_){
_start:
{
lean_object* v___x_1707_; 
v___x_1707_ = l_Array_ofFn___redArg(v_n_1704_, v_f_1706_);
return v___x_1707_;
}
}
static lean_object* _init_l_Vector_swap___auto__1(void){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_obj_once(&l_Vector_set___auto__1___closed__17, &l_Vector_set___auto__1___closed__17_once, _init_l_Vector_set___auto__1___closed__17);
return v___x_1708_;
}
}
static lean_object* _init_l_Vector_swap___auto__3(void){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = lean_obj_once(&l_Vector_set___auto__1___closed__17, &l_Vector_set___auto__1___closed__17_once, _init_l_Vector_set___auto__1___closed__17);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Vector_swap___redArg(lean_object* v_xs_1710_, lean_object* v_i_1711_, lean_object* v_j_1712_){
_start:
{
lean_object* v___x_1713_; 
v___x_1713_ = lean_array_fswap(v_xs_1710_, v_i_1711_, v_j_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Vector_swap___redArg___boxed(lean_object* v_xs_1714_, lean_object* v_i_1715_, lean_object* v_j_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Vector_swap___redArg(v_xs_1714_, v_i_1715_, v_j_1716_);
lean_dec(v_j_1716_);
lean_dec(v_i_1715_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Vector_swap(lean_object* v_00_u03b1_1718_, lean_object* v_n_1719_, lean_object* v_xs_1720_, lean_object* v_i_1721_, lean_object* v_j_1722_, lean_object* v_hi_1723_, lean_object* v_hj_1724_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_array_fswap(v_xs_1720_, v_i_1721_, v_j_1722_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Vector_swap___boxed(lean_object* v_00_u03b1_1726_, lean_object* v_n_1727_, lean_object* v_xs_1728_, lean_object* v_i_1729_, lean_object* v_j_1730_, lean_object* v_hi_1731_, lean_object* v_hj_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Vector_swap(v_00_u03b1_1726_, v_n_1727_, v_xs_1728_, v_i_1729_, v_j_1730_, v_hi_1731_, v_hj_1732_);
lean_dec(v_j_1730_);
lean_dec(v_i_1729_);
lean_dec(v_n_1727_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds___redArg(lean_object* v_xs_1734_, lean_object* v_i_1735_, lean_object* v_j_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_array_swap(v_xs_1734_, v_i_1735_, v_j_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds___redArg___boxed(lean_object* v_xs_1738_, lean_object* v_i_1739_, lean_object* v_j_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Vector_swapIfInBounds___redArg(v_xs_1738_, v_i_1739_, v_j_1740_);
lean_dec(v_j_1740_);
lean_dec(v_i_1739_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds(lean_object* v_00_u03b1_1742_, lean_object* v_n_1743_, lean_object* v_xs_1744_, lean_object* v_i_1745_, lean_object* v_j_1746_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_array_swap(v_xs_1744_, v_i_1745_, v_j_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapIfInBounds___boxed(lean_object* v_00_u03b1_1748_, lean_object* v_n_1749_, lean_object* v_xs_1750_, lean_object* v_i_1751_, lean_object* v_j_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Vector_swapIfInBounds(v_00_u03b1_1748_, v_n_1749_, v_xs_1750_, v_i_1751_, v_j_1752_);
lean_dec(v_j_1752_);
lean_dec(v_i_1751_);
lean_dec(v_n_1749_);
return v_res_1753_;
}
}
static lean_object* _init_l_Vector_swapAt___auto__1(void){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_obj_once(&l_Vector_set___auto__1___closed__17, &l_Vector_set___auto__1___closed__17_once, _init_l_Vector_set___auto__1___closed__17);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt___redArg(lean_object* v_xs_1755_, lean_object* v_i_1756_, lean_object* v_x_1757_){
_start:
{
lean_object* v_e_1758_; lean_object* v_xs_x27_1759_; lean_object* v___x_1760_; 
v_e_1758_ = lean_array_fget(v_xs_1755_, v_i_1756_);
v_xs_x27_1759_ = lean_array_fset(v_xs_1755_, v_i_1756_, v_x_1757_);
v___x_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1760_, 0, v_e_1758_);
lean_ctor_set(v___x_1760_, 1, v_xs_x27_1759_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt___redArg___boxed(lean_object* v_xs_1761_, lean_object* v_i_1762_, lean_object* v_x_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Vector_swapAt___redArg(v_xs_1761_, v_i_1762_, v_x_1763_);
lean_dec(v_i_1762_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt(lean_object* v_00_u03b1_1765_, lean_object* v_n_1766_, lean_object* v_xs_1767_, lean_object* v_i_1768_, lean_object* v_x_1769_, lean_object* v_hi_1770_){
_start:
{
lean_object* v_e_1771_; lean_object* v_xs_x27_1772_; lean_object* v___x_1773_; 
v_e_1771_ = lean_array_fget(v_xs_1767_, v_i_1768_);
v_xs_x27_1772_ = lean_array_fset(v_xs_1767_, v_i_1768_, v_x_1769_);
v___x_1773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1773_, 0, v_e_1771_);
lean_ctor_set(v___x_1773_, 1, v_xs_x27_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt___boxed(lean_object* v_00_u03b1_1774_, lean_object* v_n_1775_, lean_object* v_xs_1776_, lean_object* v_i_1777_, lean_object* v_x_1778_, lean_object* v_hi_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Vector_swapAt(v_00_u03b1_1774_, v_n_1775_, v_xs_1776_, v_i_1777_, v_x_1778_, v_hi_1779_);
lean_dec(v_i_1777_);
lean_dec(v_n_1775_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt_x21___redArg(lean_object* v_xs_1785_, lean_object* v_i_1786_, lean_object* v_x_1787_){
_start:
{
lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = lean_array_get_size(v_xs_1785_);
v___x_1789_ = lean_nat_dec_lt(v_i_1786_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_object* v_this_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v_fst_1802_; lean_object* v_snd_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1810_; 
v_this_1790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_1790_, 0, v_x_1787_);
lean_ctor_set(v_this_1790_, 1, v_xs_1785_);
v___x_1791_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__0));
v___x_1792_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__1));
v___x_1793_ = lean_unsigned_to_nat(463u);
v___x_1794_ = lean_unsigned_to_nat(4u);
v___x_1795_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__2));
v___x_1796_ = l_Nat_reprFast(v_i_1786_);
v___x_1797_ = lean_string_append(v___x_1795_, v___x_1796_);
lean_dec_ref(v___x_1796_);
v___x_1798_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__3));
v___x_1799_ = lean_string_append(v___x_1797_, v___x_1798_);
v___x_1800_ = l_mkPanicMessageWithDecl(v___x_1791_, v___x_1792_, v___x_1793_, v___x_1794_, v___x_1799_);
lean_dec_ref(v___x_1799_);
v___x_1801_ = l_panic___redArg(v_this_1790_, v___x_1800_);
lean_dec_ref_known(v_this_1790_, 2);
v_fst_1802_ = lean_ctor_get(v___x_1801_, 0);
v_snd_1803_ = lean_ctor_get(v___x_1801_, 1);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1805_ = v___x_1801_;
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_snd_1803_);
lean_inc(v_fst_1802_);
lean_dec(v___x_1801_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1806_ == 0)
{
v___x_1808_ = v___x_1805_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_fst_1802_);
lean_ctor_set(v_reuseFailAlloc_1809_, 1, v_snd_1803_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
else
{
lean_object* v_e_1811_; lean_object* v_xs_x27_1812_; lean_object* v___x_1813_; 
v_e_1811_ = lean_array_fget(v_xs_1785_, v_i_1786_);
v_xs_x27_1812_ = lean_array_fset(v_xs_1785_, v_i_1786_, v_x_1787_);
lean_dec(v_i_1786_);
v___x_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1813_, 0, v_e_1811_);
lean_ctor_set(v___x_1813_, 1, v_xs_x27_1812_);
return v___x_1813_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt_x21(lean_object* v_00_u03b1_1814_, lean_object* v_n_1815_, lean_object* v_xs_1816_, lean_object* v_i_1817_, lean_object* v_x_1818_){
_start:
{
lean_object* v___x_1819_; uint8_t v___x_1820_; 
v___x_1819_ = lean_array_get_size(v_xs_1816_);
v___x_1820_ = lean_nat_dec_lt(v_i_1817_, v___x_1819_);
if (v___x_1820_ == 0)
{
lean_object* v_this_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v_fst_1833_; lean_object* v_snd_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
v_this_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_1821_, 0, v_x_1818_);
lean_ctor_set(v_this_1821_, 1, v_xs_1816_);
v___x_1822_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__0));
v___x_1823_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__1));
v___x_1824_ = lean_unsigned_to_nat(463u);
v___x_1825_ = lean_unsigned_to_nat(4u);
v___x_1826_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__2));
v___x_1827_ = l_Nat_reprFast(v_i_1817_);
v___x_1828_ = lean_string_append(v___x_1826_, v___x_1827_);
lean_dec_ref(v___x_1827_);
v___x_1829_ = ((lean_object*)(l_Vector_swapAt_x21___redArg___closed__3));
v___x_1830_ = lean_string_append(v___x_1828_, v___x_1829_);
v___x_1831_ = l_mkPanicMessageWithDecl(v___x_1822_, v___x_1823_, v___x_1824_, v___x_1825_, v___x_1830_);
lean_dec_ref(v___x_1830_);
v___x_1832_ = l_panic___redArg(v_this_1821_, v___x_1831_);
lean_dec_ref_known(v_this_1821_, 2);
v_fst_1833_ = lean_ctor_get(v___x_1832_, 0);
v_snd_1834_ = lean_ctor_get(v___x_1832_, 1);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1832_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_snd_1834_);
lean_inc(v_fst_1833_);
lean_dec(v___x_1832_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_fst_1833_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v_snd_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
else
{
lean_object* v_e_1842_; lean_object* v_xs_x27_1843_; lean_object* v___x_1844_; 
v_e_1842_ = lean_array_fget(v_xs_1816_, v_i_1817_);
v_xs_x27_1843_ = lean_array_fset(v_xs_1816_, v_i_1817_, v_x_1818_);
lean_dec(v_i_1817_);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v_e_1842_);
lean_ctor_set(v___x_1844_, 1, v_xs_x27_1843_);
return v___x_1844_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_swapAt_x21___boxed(lean_object* v_00_u03b1_1845_, lean_object* v_n_1846_, lean_object* v_xs_1847_, lean_object* v_i_1848_, lean_object* v_x_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Vector_swapAt_x21(v_00_u03b1_1845_, v_n_1846_, v_xs_1847_, v_i_1848_, v_x_1849_);
lean_dec(v_n_1846_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Vector_range(lean_object* v_n_1851_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Array_range(v_n_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Vector_range_x27(lean_object* v_start_1853_, lean_object* v_size_1854_, lean_object* v_step_1855_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_Array_range_x27(v_start_1853_, v_size_1854_, v_step_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT uint8_t l_Vector_isEqv___redArg(lean_object* v_n_1857_, lean_object* v_xs_1858_, lean_object* v_ys_1859_, lean_object* v_r_1860_){
_start:
{
uint8_t v___x_1861_; 
v___x_1861_ = l_Array_isEqvAux___redArg(v_xs_1858_, v_ys_1859_, v_r_1860_, v_n_1857_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Vector_isEqv___redArg___boxed(lean_object* v_n_1862_, lean_object* v_xs_1863_, lean_object* v_ys_1864_, lean_object* v_r_1865_){
_start:
{
uint8_t v_res_1866_; lean_object* v_r_1867_; 
v_res_1866_ = l_Vector_isEqv___redArg(v_n_1862_, v_xs_1863_, v_ys_1864_, v_r_1865_);
lean_dec_ref(v_ys_1864_);
lean_dec_ref(v_xs_1863_);
v_r_1867_ = lean_box(v_res_1866_);
return v_r_1867_;
}
}
LEAN_EXPORT uint8_t l_Vector_isEqv(lean_object* v_00_u03b1_1868_, lean_object* v_n_1869_, lean_object* v_xs_1870_, lean_object* v_ys_1871_, lean_object* v_r_1872_){
_start:
{
uint8_t v___x_1873_; 
v___x_1873_ = l_Array_isEqvAux___redArg(v_xs_1870_, v_ys_1871_, v_r_1872_, v_n_1869_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Vector_isEqv___boxed(lean_object* v_00_u03b1_1874_, lean_object* v_n_1875_, lean_object* v_xs_1876_, lean_object* v_ys_1877_, lean_object* v_r_1878_){
_start:
{
uint8_t v_res_1879_; lean_object* v_r_1880_; 
v_res_1879_ = l_Vector_isEqv(v_00_u03b1_1874_, v_n_1875_, v_xs_1876_, v_ys_1877_, v_r_1878_);
lean_dec_ref(v_ys_1877_);
lean_dec_ref(v_xs_1876_);
v_r_1880_ = lean_box(v_res_1879_);
return v_r_1880_;
}
}
LEAN_EXPORT uint8_t l_Vector_instBEq___redArg___lam__0(lean_object* v_inst_1881_, lean_object* v_x1_1882_, lean_object* v_x2_1883_){
_start:
{
lean_object* v___x_1884_; uint8_t v___x_1885_; 
v___x_1884_ = lean_apply_2(v_inst_1881_, v_x1_1882_, v_x2_1883_);
v___x_1885_ = lean_unbox(v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Vector_instBEq___redArg___lam__0___boxed(lean_object* v_inst_1886_, lean_object* v_x1_1887_, lean_object* v_x2_1888_){
_start:
{
uint8_t v_res_1889_; lean_object* v_r_1890_; 
v_res_1889_ = l_Vector_instBEq___redArg___lam__0(v_inst_1886_, v_x1_1887_, v_x2_1888_);
v_r_1890_ = lean_box(v_res_1889_);
return v_r_1890_;
}
}
LEAN_EXPORT uint8_t l_Vector_instBEq___redArg___lam__1(lean_object* v___f_1891_, lean_object* v_n_1892_, lean_object* v_xs_1893_, lean_object* v_ys_1894_){
_start:
{
uint8_t v___x_1895_; 
v___x_1895_ = l_Array_isEqvAux___redArg(v_xs_1893_, v_ys_1894_, v___f_1891_, v_n_1892_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Vector_instBEq___redArg___lam__1___boxed(lean_object* v___f_1896_, lean_object* v_n_1897_, lean_object* v_xs_1898_, lean_object* v_ys_1899_){
_start:
{
uint8_t v_res_1900_; lean_object* v_r_1901_; 
v_res_1900_ = l_Vector_instBEq___redArg___lam__1(v___f_1896_, v_n_1897_, v_xs_1898_, v_ys_1899_);
lean_dec_ref(v_ys_1899_);
lean_dec_ref(v_xs_1898_);
v_r_1901_ = lean_box(v_res_1900_);
return v_r_1901_;
}
}
LEAN_EXPORT lean_object* l_Vector_instBEq___redArg(lean_object* v_n_1902_, lean_object* v_inst_1903_){
_start:
{
lean_object* v___f_1904_; lean_object* v___f_1905_; 
v___f_1904_ = lean_alloc_closure((void*)(l_Vector_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1904_, 0, v_inst_1903_);
v___f_1905_ = lean_alloc_closure((void*)(l_Vector_instBEq___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1905_, 0, v___f_1904_);
lean_closure_set(v___f_1905_, 1, v_n_1902_);
return v___f_1905_;
}
}
LEAN_EXPORT lean_object* l_Vector_instBEq(lean_object* v_00_u03b1_1906_, lean_object* v_n_1907_, lean_object* v_inst_1908_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Vector_instBEq___redArg(v_n_1907_, v_inst_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Vector_reverse___redArg(lean_object* v_xs_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Array_reverse___redArg(v_xs_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Vector_reverse(lean_object* v_00_u03b1_1912_, lean_object* v_n_1913_, lean_object* v_xs_1914_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Array_reverse___redArg(v_xs_1914_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l_Vector_reverse___boxed(lean_object* v_00_u03b1_1916_, lean_object* v_n_1917_, lean_object* v_xs_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Vector_reverse(v_00_u03b1_1916_, v_n_1917_, v_xs_1918_);
lean_dec(v_n_1917_);
return v_res_1919_;
}
}
static lean_object* _init_l_Vector_eraseIdx___auto__1(void){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_obj_once(&l_Vector_set___auto__1___closed__17, &l_Vector_set___auto__1___closed__17_once, _init_l_Vector_set___auto__1___closed__17);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx___redArg(lean_object* v_xs_1921_, lean_object* v_i_1922_){
_start:
{
lean_object* v___x_1923_; 
v___x_1923_ = l_Array_eraseIdx___redArg(v_xs_1921_, v_i_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx(lean_object* v_00_u03b1_1924_, lean_object* v_n_1925_, lean_object* v_xs_1926_, lean_object* v_i_1927_, lean_object* v_h_1928_){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Array_eraseIdx___redArg(v_xs_1926_, v_i_1927_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx___boxed(lean_object* v_00_u03b1_1930_, lean_object* v_n_1931_, lean_object* v_xs_1932_, lean_object* v_i_1933_, lean_object* v_h_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Vector_eraseIdx(v_00_u03b1_1930_, v_n_1931_, v_xs_1932_, v_i_1933_, v_h_1934_);
lean_dec(v_n_1931_);
return v_res_1935_;
}
}
static lean_object* _init_l_Vector_eraseIdx_x21___redArg___closed__3(void){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1939_ = ((lean_object*)(l_Vector_eraseIdx_x21___redArg___closed__2));
v___x_1940_ = lean_unsigned_to_nat(4u);
v___x_1941_ = lean_unsigned_to_nat(433u);
v___x_1942_ = ((lean_object*)(l_Vector_eraseIdx_x21___redArg___closed__1));
v___x_1943_ = ((lean_object*)(l_Vector_eraseIdx_x21___redArg___closed__0));
v___x_1944_ = l_mkPanicMessageWithDecl(v___x_1943_, v___x_1942_, v___x_1941_, v___x_1940_, v___x_1939_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21___redArg(lean_object* v_n_1945_, lean_object* v_xs_1946_, lean_object* v_i_1947_){
_start:
{
uint8_t v___x_1948_; 
v___x_1948_ = lean_nat_dec_lt(v_i_1947_, v_n_1945_);
if (v___x_1948_ == 0)
{
lean_object* v_this_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
lean_dec(v_i_1947_);
v_this_1949_ = lean_array_pop(v_xs_1946_);
v___x_1950_ = lean_obj_once(&l_Vector_eraseIdx_x21___redArg___closed__3, &l_Vector_eraseIdx_x21___redArg___closed__3_once, _init_l_Vector_eraseIdx_x21___redArg___closed__3);
v___x_1951_ = l_panic___redArg(v_this_1949_, v___x_1950_);
lean_dec_ref(v_this_1949_);
return v___x_1951_;
}
else
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Array_eraseIdx___redArg(v_xs_1946_, v_i_1947_);
return v___x_1952_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21___redArg___boxed(lean_object* v_n_1953_, lean_object* v_xs_1954_, lean_object* v_i_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Vector_eraseIdx_x21___redArg(v_n_1953_, v_xs_1954_, v_i_1955_);
lean_dec(v_n_1953_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21(lean_object* v_00_u03b1_1957_, lean_object* v_n_1958_, lean_object* v_xs_1959_, lean_object* v_i_1960_){
_start:
{
uint8_t v___x_1961_; 
v___x_1961_ = lean_nat_dec_lt(v_i_1960_, v_n_1958_);
if (v___x_1961_ == 0)
{
lean_object* v_this_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
lean_dec(v_i_1960_);
v_this_1962_ = lean_array_pop(v_xs_1959_);
v___x_1963_ = lean_obj_once(&l_Vector_eraseIdx_x21___redArg___closed__3, &l_Vector_eraseIdx_x21___redArg___closed__3_once, _init_l_Vector_eraseIdx_x21___redArg___closed__3);
v___x_1964_ = l_panic___redArg(v_this_1962_, v___x_1963_);
lean_dec_ref(v_this_1962_);
return v___x_1964_;
}
else
{
lean_object* v___x_1965_; 
v___x_1965_ = l_Array_eraseIdx___redArg(v_xs_1959_, v_i_1960_);
return v___x_1965_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_eraseIdx_x21___boxed(lean_object* v_00_u03b1_1966_, lean_object* v_n_1967_, lean_object* v_xs_1968_, lean_object* v_i_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Vector_eraseIdx_x21(v_00_u03b1_1966_, v_n_1967_, v_xs_1968_, v_i_1969_);
lean_dec(v_n_1967_);
return v_res_1970_;
}
}
static lean_object* _init_l_Vector_insertIdx___auto__1(void){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = lean_obj_once(&l_Vector_set___auto__1___closed__17, &l_Vector_set___auto__1___closed__17_once, _init_l_Vector_set___auto__1___closed__17);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx___redArg(lean_object* v_xs_1972_, lean_object* v_i_1973_, lean_object* v_x_1974_){
_start:
{
lean_object* v_j_1975_; lean_object* v_as_1976_; lean_object* v___x_1977_; 
v_j_1975_ = lean_array_get_size(v_xs_1972_);
v_as_1976_ = lean_array_push(v_xs_1972_, v_x_1974_);
v___x_1977_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v_i_1973_, v_as_1976_, v_j_1975_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx___redArg___boxed(lean_object* v_xs_1978_, lean_object* v_i_1979_, lean_object* v_x_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Vector_insertIdx___redArg(v_xs_1978_, v_i_1979_, v_x_1980_);
lean_dec(v_i_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx(lean_object* v_00_u03b1_1982_, lean_object* v_n_1983_, lean_object* v_xs_1984_, lean_object* v_i_1985_, lean_object* v_x_1986_, lean_object* v_h_1987_){
_start:
{
lean_object* v_j_1988_; lean_object* v_as_1989_; lean_object* v___x_1990_; 
v_j_1988_ = lean_array_get_size(v_xs_1984_);
v_as_1989_ = lean_array_push(v_xs_1984_, v_x_1986_);
v___x_1990_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v_i_1985_, v_as_1989_, v_j_1988_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx___boxed(lean_object* v_00_u03b1_1991_, lean_object* v_n_1992_, lean_object* v_xs_1993_, lean_object* v_i_1994_, lean_object* v_x_1995_, lean_object* v_h_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Vector_insertIdx(v_00_u03b1_1991_, v_n_1992_, v_xs_1993_, v_i_1994_, v_x_1995_, v_h_1996_);
lean_dec(v_i_1994_);
lean_dec(v_n_1992_);
return v_res_1997_;
}
}
static lean_object* _init_l_Vector_insertIdx_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_1999_ = ((lean_object*)(l_Vector_eraseIdx_x21___redArg___closed__2));
v___x_2000_ = lean_unsigned_to_nat(4u);
v___x_2001_ = lean_unsigned_to_nat(446u);
v___x_2002_ = ((lean_object*)(l_Vector_insertIdx_x21___redArg___closed__0));
v___x_2003_ = ((lean_object*)(l_Vector_eraseIdx_x21___redArg___closed__0));
v___x_2004_ = l_mkPanicMessageWithDecl(v___x_2003_, v___x_2002_, v___x_2001_, v___x_2000_, v___x_1999_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21___redArg(lean_object* v_n_2005_, lean_object* v_xs_2006_, lean_object* v_i_2007_, lean_object* v_x_2008_){
_start:
{
uint8_t v___x_2009_; 
v___x_2009_ = lean_nat_dec_le(v_i_2007_, v_n_2005_);
if (v___x_2009_ == 0)
{
lean_object* v_this_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v_this_2010_ = lean_array_push(v_xs_2006_, v_x_2008_);
v___x_2011_ = lean_obj_once(&l_Vector_insertIdx_x21___redArg___closed__1, &l_Vector_insertIdx_x21___redArg___closed__1_once, _init_l_Vector_insertIdx_x21___redArg___closed__1);
v___x_2012_ = l_panic___redArg(v_this_2010_, v___x_2011_);
lean_dec_ref(v_this_2010_);
return v___x_2012_;
}
else
{
lean_object* v_j_2013_; lean_object* v_as_2014_; lean_object* v___x_2015_; 
v_j_2013_ = lean_array_get_size(v_xs_2006_);
v_as_2014_ = lean_array_push(v_xs_2006_, v_x_2008_);
v___x_2015_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v_i_2007_, v_as_2014_, v_j_2013_);
return v___x_2015_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21___redArg___boxed(lean_object* v_n_2016_, lean_object* v_xs_2017_, lean_object* v_i_2018_, lean_object* v_x_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Vector_insertIdx_x21___redArg(v_n_2016_, v_xs_2017_, v_i_2018_, v_x_2019_);
lean_dec(v_i_2018_);
lean_dec(v_n_2016_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21(lean_object* v_00_u03b1_2021_, lean_object* v_n_2022_, lean_object* v_xs_2023_, lean_object* v_i_2024_, lean_object* v_x_2025_){
_start:
{
uint8_t v___x_2026_; 
v___x_2026_ = lean_nat_dec_le(v_i_2024_, v_n_2022_);
if (v___x_2026_ == 0)
{
lean_object* v_this_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v_this_2027_ = lean_array_push(v_xs_2023_, v_x_2025_);
v___x_2028_ = lean_obj_once(&l_Vector_insertIdx_x21___redArg___closed__1, &l_Vector_insertIdx_x21___redArg___closed__1_once, _init_l_Vector_insertIdx_x21___redArg___closed__1);
v___x_2029_ = l_panic___redArg(v_this_2027_, v___x_2028_);
lean_dec_ref(v_this_2027_);
return v___x_2029_;
}
else
{
lean_object* v_j_2030_; lean_object* v_as_2031_; lean_object* v___x_2032_; 
v_j_2030_ = lean_array_get_size(v_xs_2023_);
v_as_2031_ = lean_array_push(v_xs_2023_, v_x_2025_);
v___x_2032_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v_i_2024_, v_as_2031_, v_j_2030_);
return v___x_2032_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_insertIdx_x21___boxed(lean_object* v_00_u03b1_2033_, lean_object* v_n_2034_, lean_object* v_xs_2035_, lean_object* v_i_2036_, lean_object* v_x_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Vector_insertIdx_x21(v_00_u03b1_2033_, v_n_2034_, v_xs_2035_, v_i_2036_, v_x_2037_);
lean_dec(v_i_2036_);
lean_dec(v_n_2034_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Vector_tail___redArg(lean_object* v_n_2039_, lean_object* v_xs_2040_){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_unsigned_to_nat(1u);
v___x_2042_ = l_Array_extract___redArg(v_xs_2040_, v___x_2041_, v_n_2039_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_Vector_tail___redArg___boxed(lean_object* v_n_2043_, lean_object* v_xs_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Vector_tail___redArg(v_n_2043_, v_xs_2044_);
lean_dec_ref(v_xs_2044_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Vector_tail(lean_object* v_00_u03b1_2046_, lean_object* v_n_2047_, lean_object* v_xs_2048_){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = lean_unsigned_to_nat(1u);
v___x_2050_ = l_Array_extract___redArg(v_xs_2048_, v___x_2049_, v_n_2047_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Vector_tail___boxed(lean_object* v_00_u03b1_2051_, lean_object* v_n_2052_, lean_object* v_xs_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Vector_tail(v_00_u03b1_2051_, v_n_2052_, v_xs_2053_);
lean_dec_ref(v_xs_2053_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f___redArg(lean_object* v_inst_2055_, lean_object* v_xs_2056_, lean_object* v_x_2057_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Array_finIdxOf_x3f___redArg(v_inst_2055_, v_xs_2056_, v_x_2057_);
if (lean_obj_tag(v___x_2058_) == 0)
{
return v___x_2058_;
}
else
{
lean_object* v_val_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
v_val_2059_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2058_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_val_2059_);
lean_dec(v___x_2058_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_val_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f___redArg___boxed(lean_object* v_inst_2067_, lean_object* v_xs_2068_, lean_object* v_x_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Vector_finIdxOf_x3f___redArg(v_inst_2067_, v_xs_2068_, v_x_2069_);
lean_dec_ref(v_xs_2068_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f(lean_object* v_00_u03b1_2071_, lean_object* v_n_2072_, lean_object* v_inst_2073_, lean_object* v_xs_2074_, lean_object* v_x_2075_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Array_finIdxOf_x3f___redArg(v_inst_2073_, v_xs_2074_, v_x_2075_);
if (lean_obj_tag(v___x_2076_) == 0)
{
return v___x_2076_;
}
else
{
lean_object* v_val_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
v_val_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_val_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_val_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_finIdxOf_x3f___boxed(lean_object* v_00_u03b1_2085_, lean_object* v_n_2086_, lean_object* v_inst_2087_, lean_object* v_xs_2088_, lean_object* v_x_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Vector_finIdxOf_x3f(v_00_u03b1_2085_, v_n_2086_, v_inst_2087_, v_xs_2088_, v_x_2089_);
lean_dec_ref(v_xs_2088_);
lean_dec(v_n_2086_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f___redArg(lean_object* v_p_2091_, lean_object* v_xs_2092_){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2093_ = lean_unsigned_to_nat(0u);
v___x_2094_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v_p_2091_, v_xs_2092_, v___x_2093_);
if (lean_obj_tag(v___x_2094_) == 0)
{
return v___x_2094_;
}
else
{
lean_object* v_val_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
v_val_2095_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2094_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_val_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_val_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f___redArg___boxed(lean_object* v_p_2103_, lean_object* v_xs_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Vector_findFinIdx_x3f___redArg(v_p_2103_, v_xs_2104_);
lean_dec_ref(v_xs_2104_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f(lean_object* v_00_u03b1_2106_, lean_object* v_n_2107_, lean_object* v_p_2108_, lean_object* v_xs_2109_){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_unsigned_to_nat(0u);
v___x_2111_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v_p_2108_, v_xs_2109_, v___x_2110_);
if (lean_obj_tag(v___x_2111_) == 0)
{
return v___x_2111_;
}
else
{
lean_object* v_val_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2119_; 
v_val_2112_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2114_ = v___x_2111_;
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_val_2112_);
lean_dec(v___x_2111_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2115_ == 0)
{
v___x_2117_ = v___x_2114_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_val_2112_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_findFinIdx_x3f___boxed(lean_object* v_00_u03b1_2120_, lean_object* v_n_2121_, lean_object* v_p_2122_, lean_object* v_xs_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Vector_findFinIdx_x3f(v_00_u03b1_2120_, v_n_2121_, v_p_2122_, v_xs_2123_);
lean_dec_ref(v_xs_2123_);
lean_dec(v_n_2121_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__0(lean_object* v_toPure_2125_, lean_object* v_____s_2126_){
_start:
{
lean_object* v_fst_2127_; 
v_fst_2127_ = lean_ctor_get(v_____s_2126_, 0);
lean_inc(v_fst_2127_);
lean_dec_ref(v_____s_2126_);
if (lean_obj_tag(v_fst_2127_) == 0)
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2128_ = lean_box(0);
v___x_2129_ = lean_apply_2(v_toPure_2125_, lean_box(0), v___x_2128_);
return v___x_2129_;
}
else
{
lean_object* v_val_2130_; lean_object* v___x_2131_; 
v_val_2130_ = lean_ctor_get(v_fst_2127_, 0);
lean_inc(v_val_2130_);
lean_dec_ref_known(v_fst_2127_, 1);
v___x_2131_ = lean_apply_2(v_toPure_2125_, lean_box(0), v_val_2130_);
return v___x_2131_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__1(lean_object* v___x_2132_, lean_object* v_toPure_2133_, lean_object* v_a_2134_, lean_object* v___x_2135_, uint8_t v_____do__lift_2136_){
_start:
{
if (v_____do__lift_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_dec(v_a_2134_);
v___x_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2132_);
v___x_2138_ = lean_apply_2(v_toPure_2133_, lean_box(0), v___x_2137_);
return v___x_2138_;
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec_ref(v___x_2132_);
v___x_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_a_2134_);
v___x_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
v___x_2141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
lean_ctor_set(v___x_2141_, 1, v___x_2135_);
v___x_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
v___x_2143_ = lean_apply_2(v_toPure_2133_, lean_box(0), v___x_2142_);
return v___x_2143_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__1___boxed(lean_object* v___x_2144_, lean_object* v_toPure_2145_, lean_object* v_a_2146_, lean_object* v___x_2147_, lean_object* v_____do__lift_2148_){
_start:
{
uint8_t v_____do__lift_124__boxed_2149_; lean_object* v_res_2150_; 
v_____do__lift_124__boxed_2149_ = lean_unbox(v_____do__lift_2148_);
v_res_2150_ = l_Vector_findM_x3f___redArg___lam__1(v___x_2144_, v_toPure_2145_, v_a_2146_, v___x_2147_, v_____do__lift_124__boxed_2149_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__2(lean_object* v___x_2151_, lean_object* v_toPure_2152_, lean_object* v___x_2153_, lean_object* v_f_2154_, lean_object* v_toBind_2155_, lean_object* v_a_2156_, lean_object* v_x_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v___f_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_inc(v_a_2156_);
v___f_2159_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2159_, 0, v___x_2151_);
lean_closure_set(v___f_2159_, 1, v_toPure_2152_);
lean_closure_set(v___f_2159_, 2, v_a_2156_);
lean_closure_set(v___f_2159_, 3, v___x_2153_);
v___x_2160_ = lean_apply_1(v_f_2154_, v_a_2156_);
v___x_2161_ = lean_apply_4(v_toBind_2155_, lean_box(0), lean_box(0), v___x_2160_, v___f_2159_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg___lam__2___boxed(lean_object* v___x_2162_, lean_object* v_toPure_2163_, lean_object* v___x_2164_, lean_object* v_f_2165_, lean_object* v_toBind_2166_, lean_object* v_a_2167_, lean_object* v_x_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Vector_findM_x3f___redArg___lam__2(v___x_2162_, v_toPure_2163_, v___x_2164_, v_f_2165_, v_toBind_2166_, v_a_2167_, v_x_2168_, v___y_2169_);
lean_dec_ref(v___y_2169_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___redArg(lean_object* v_inst_2174_, lean_object* v_f_2175_, lean_object* v_as_2176_){
_start:
{
lean_object* v_toApplicative_2177_; lean_object* v_toBind_2178_; lean_object* v_toPure_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___f_2182_; lean_object* v___f_2183_; size_t v_sz_2184_; size_t v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v_toApplicative_2177_ = lean_ctor_get(v_inst_2174_, 0);
v_toBind_2178_ = lean_ctor_get(v_inst_2174_, 1);
lean_inc_n(v_toBind_2178_, 2);
v_toPure_2179_ = lean_ctor_get(v_toApplicative_2177_, 1);
v___x_2180_ = lean_box(0);
v___x_2181_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_2179_, 2);
v___f_2182_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2182_, 0, v_toPure_2179_);
v___f_2183_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_2183_, 0, v___x_2181_);
lean_closure_set(v___f_2183_, 1, v_toPure_2179_);
lean_closure_set(v___f_2183_, 2, v___x_2180_);
lean_closure_set(v___f_2183_, 3, v_f_2175_);
lean_closure_set(v___f_2183_, 4, v_toBind_2178_);
v_sz_2184_ = lean_array_size(v_as_2176_);
v___x_2185_ = ((size_t)0ULL);
v___x_2186_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2174_, v_as_2176_, v___f_2183_, v_sz_2184_, v___x_2185_, v___x_2181_);
v___x_2187_ = lean_apply_4(v_toBind_2178_, lean_box(0), lean_box(0), v___x_2186_, v___f_2182_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f(lean_object* v_n_2188_, lean_object* v_00_u03b1_2189_, lean_object* v_m_2190_, lean_object* v_inst_2191_, lean_object* v_f_2192_, lean_object* v_as_2193_){
_start:
{
lean_object* v_toApplicative_2194_; lean_object* v_toBind_2195_; lean_object* v_toPure_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___f_2199_; lean_object* v___f_2200_; size_t v_sz_2201_; size_t v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v_toApplicative_2194_ = lean_ctor_get(v_inst_2191_, 0);
v_toBind_2195_ = lean_ctor_get(v_inst_2191_, 1);
lean_inc_n(v_toBind_2195_, 2);
v_toPure_2196_ = lean_ctor_get(v_toApplicative_2194_, 1);
v___x_2197_ = lean_box(0);
v___x_2198_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_2196_, 2);
v___f_2199_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2199_, 0, v_toPure_2196_);
v___f_2200_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_2200_, 0, v___x_2198_);
lean_closure_set(v___f_2200_, 1, v_toPure_2196_);
lean_closure_set(v___f_2200_, 2, v___x_2197_);
lean_closure_set(v___f_2200_, 3, v_f_2192_);
lean_closure_set(v___f_2200_, 4, v_toBind_2195_);
v_sz_2201_ = lean_array_size(v_as_2193_);
v___x_2202_ = ((size_t)0ULL);
v___x_2203_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2191_, v_as_2193_, v___f_2200_, v_sz_2201_, v___x_2202_, v___x_2198_);
v___x_2204_ = lean_apply_4(v_toBind_2195_, lean_box(0), lean_box(0), v___x_2203_, v___f_2199_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Vector_findM_x3f___boxed(lean_object* v_n_2205_, lean_object* v_00_u03b1_2206_, lean_object* v_m_2207_, lean_object* v_inst_2208_, lean_object* v_f_2209_, lean_object* v_as_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Vector_findM_x3f(v_n_2205_, v_00_u03b1_2206_, v_m_2207_, v_inst_2208_, v_f_2209_, v_as_2210_);
lean_dec(v_n_2205_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg___lam__1(lean_object* v___x_2212_, lean_object* v_toPure_2213_, lean_object* v___x_2214_, lean_object* v_____do__lift_2215_){
_start:
{
if (lean_obj_tag(v_____do__lift_2215_) == 1)
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
lean_dec_ref(v___x_2214_);
v___x_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2216_, 0, v_____do__lift_2215_);
v___x_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
lean_ctor_set(v___x_2217_, 1, v___x_2212_);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
v___x_2219_ = lean_apply_2(v_toPure_2213_, lean_box(0), v___x_2218_);
return v___x_2219_;
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
lean_dec(v_____do__lift_2215_);
v___x_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2214_);
v___x_2221_ = lean_apply_2(v_toPure_2213_, lean_box(0), v___x_2220_);
return v___x_2221_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg___lam__0(lean_object* v_f_2222_, lean_object* v_toBind_2223_, lean_object* v___f_2224_, lean_object* v_a_2225_, lean_object* v_x_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = lean_apply_1(v_f_2222_, v_a_2225_);
v___x_2229_ = lean_apply_4(v_toBind_2223_, lean_box(0), lean_box(0), v___x_2228_, v___f_2224_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg___lam__0___boxed(lean_object* v_f_2230_, lean_object* v_toBind_2231_, lean_object* v___f_2232_, lean_object* v_a_2233_, lean_object* v_x_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Vector_findSomeM_x3f___redArg___lam__0(v_f_2230_, v_toBind_2231_, v___f_2232_, v_a_2233_, v_x_2234_, v___y_2235_);
lean_dec_ref(v___y_2235_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___redArg(lean_object* v_inst_2237_, lean_object* v_f_2238_, lean_object* v_as_2239_){
_start:
{
lean_object* v_toApplicative_2240_; lean_object* v_toBind_2241_; lean_object* v_toPure_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___f_2245_; lean_object* v___f_2246_; lean_object* v___f_2247_; size_t v_sz_2248_; size_t v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v_toApplicative_2240_ = lean_ctor_get(v_inst_2237_, 0);
v_toBind_2241_ = lean_ctor_get(v_inst_2237_, 1);
lean_inc_n(v_toBind_2241_, 2);
v_toPure_2242_ = lean_ctor_get(v_toApplicative_2240_, 1);
v___x_2243_ = lean_box(0);
v___x_2244_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_2242_, 2);
v___f_2245_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2245_, 0, v_toPure_2242_);
v___f_2246_ = lean_alloc_closure((void*)(l_Vector_findSomeM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2246_, 0, v___x_2243_);
lean_closure_set(v___f_2246_, 1, v_toPure_2242_);
lean_closure_set(v___f_2246_, 2, v___x_2244_);
v___f_2247_ = lean_alloc_closure((void*)(l_Vector_findSomeM_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2247_, 0, v_f_2238_);
lean_closure_set(v___f_2247_, 1, v_toBind_2241_);
lean_closure_set(v___f_2247_, 2, v___f_2246_);
v_sz_2248_ = lean_array_size(v_as_2239_);
v___x_2249_ = ((size_t)0ULL);
v___x_2250_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2237_, v_as_2239_, v___f_2247_, v_sz_2248_, v___x_2249_, v___x_2244_);
v___x_2251_ = lean_apply_4(v_toBind_2241_, lean_box(0), lean_box(0), v___x_2250_, v___f_2245_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f(lean_object* v_m_2252_, lean_object* v_00_u03b1_2253_, lean_object* v_00_u03b2_2254_, lean_object* v_n_2255_, lean_object* v_inst_2256_, lean_object* v_f_2257_, lean_object* v_as_2258_){
_start:
{
lean_object* v_toApplicative_2259_; lean_object* v_toBind_2260_; lean_object* v_toPure_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___f_2264_; lean_object* v___f_2265_; lean_object* v___f_2266_; size_t v_sz_2267_; size_t v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v_toApplicative_2259_ = lean_ctor_get(v_inst_2256_, 0);
v_toBind_2260_ = lean_ctor_get(v_inst_2256_, 1);
lean_inc_n(v_toBind_2260_, 2);
v_toPure_2261_ = lean_ctor_get(v_toApplicative_2259_, 1);
v___x_2262_ = lean_box(0);
v___x_2263_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_2261_, 2);
v___f_2264_ = lean_alloc_closure((void*)(l_Vector_findM_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2264_, 0, v_toPure_2261_);
v___f_2265_ = lean_alloc_closure((void*)(l_Vector_findSomeM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2265_, 0, v___x_2262_);
lean_closure_set(v___f_2265_, 1, v_toPure_2261_);
lean_closure_set(v___f_2265_, 2, v___x_2263_);
v___f_2266_ = lean_alloc_closure((void*)(l_Vector_findSomeM_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2266_, 0, v_f_2257_);
lean_closure_set(v___f_2266_, 1, v_toBind_2260_);
lean_closure_set(v___f_2266_, 2, v___f_2265_);
v_sz_2267_ = lean_array_size(v_as_2258_);
v___x_2268_ = ((size_t)0ULL);
v___x_2269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2256_, v_as_2258_, v___f_2266_, v_sz_2267_, v___x_2268_, v___x_2263_);
v___x_2270_ = lean_apply_4(v_toBind_2260_, lean_box(0), lean_box(0), v___x_2269_, v___f_2264_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeM_x3f___boxed(lean_object* v_m_2271_, lean_object* v_00_u03b1_2272_, lean_object* v_00_u03b2_2273_, lean_object* v_n_2274_, lean_object* v_inst_2275_, lean_object* v_f_2276_, lean_object* v_as_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Vector_findSomeM_x3f(v_m_2271_, v_00_u03b1_2272_, v_00_u03b2_2273_, v_n_2274_, v_inst_2275_, v_f_2276_, v_as_2277_);
lean_dec(v_n_2274_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg___lam__0(lean_object* v_toPure_2279_, lean_object* v_a_2280_, uint8_t v_____do__lift_2281_){
_start:
{
if (v_____do__lift_2281_ == 0)
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
lean_dec(v_a_2280_);
v___x_2282_ = lean_box(0);
v___x_2283_ = lean_apply_2(v_toPure_2279_, lean_box(0), v___x_2282_);
return v___x_2283_;
}
else
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2284_, 0, v_a_2280_);
v___x_2285_ = lean_apply_2(v_toPure_2279_, lean_box(0), v___x_2284_);
return v___x_2285_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg___lam__0___boxed(lean_object* v_toPure_2286_, lean_object* v_a_2287_, lean_object* v_____do__lift_2288_){
_start:
{
uint8_t v_____do__lift_50__boxed_2289_; lean_object* v_res_2290_; 
v_____do__lift_50__boxed_2289_ = lean_unbox(v_____do__lift_2288_);
v_res_2290_ = l_Vector_findRevM_x3f___redArg___lam__0(v_toPure_2286_, v_a_2287_, v_____do__lift_50__boxed_2289_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg___lam__1(lean_object* v_toPure_2291_, lean_object* v_f_2292_, lean_object* v_toBind_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v___f_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
lean_inc(v_a_2294_);
v___f_2295_ = lean_alloc_closure((void*)(l_Vector_findRevM_x3f___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2295_, 0, v_toPure_2291_);
lean_closure_set(v___f_2295_, 1, v_a_2294_);
v___x_2296_ = lean_apply_1(v_f_2292_, v_a_2294_);
v___x_2297_ = lean_apply_4(v_toBind_2293_, lean_box(0), lean_box(0), v___x_2296_, v___f_2295_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___redArg(lean_object* v_inst_2298_, lean_object* v_f_2299_, lean_object* v_as_2300_){
_start:
{
lean_object* v_toApplicative_2301_; lean_object* v_toBind_2302_; lean_object* v_toPure_2303_; lean_object* v___f_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v_toApplicative_2301_ = lean_ctor_get(v_inst_2298_, 0);
v_toBind_2302_ = lean_ctor_get(v_inst_2298_, 1);
v_toPure_2303_ = lean_ctor_get(v_toApplicative_2301_, 1);
lean_inc(v_toBind_2302_);
lean_inc(v_toPure_2303_);
v___f_2304_ = lean_alloc_closure((void*)(l_Vector_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2304_, 0, v_toPure_2303_);
lean_closure_set(v___f_2304_, 1, v_f_2299_);
lean_closure_set(v___f_2304_, 2, v_toBind_2302_);
v___x_2305_ = lean_array_get_size(v_as_2300_);
v___x_2306_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_2298_, v___f_2304_, v_as_2300_, v___x_2305_, lean_box(0));
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f(lean_object* v_n_2307_, lean_object* v_00_u03b1_2308_, lean_object* v_m_2309_, lean_object* v_inst_2310_, lean_object* v_f_2311_, lean_object* v_as_2312_){
_start:
{
lean_object* v_toApplicative_2313_; lean_object* v_toBind_2314_; lean_object* v_toPure_2315_; lean_object* v___f_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v_toApplicative_2313_ = lean_ctor_get(v_inst_2310_, 0);
v_toBind_2314_ = lean_ctor_get(v_inst_2310_, 1);
v_toPure_2315_ = lean_ctor_get(v_toApplicative_2313_, 1);
lean_inc(v_toBind_2314_);
lean_inc(v_toPure_2315_);
v___f_2316_ = lean_alloc_closure((void*)(l_Vector_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2316_, 0, v_toPure_2315_);
lean_closure_set(v___f_2316_, 1, v_f_2311_);
lean_closure_set(v___f_2316_, 2, v_toBind_2314_);
v___x_2317_ = lean_array_get_size(v_as_2312_);
v___x_2318_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_2310_, v___f_2316_, v_as_2312_, v___x_2317_, lean_box(0));
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRevM_x3f___boxed(lean_object* v_n_2319_, lean_object* v_00_u03b1_2320_, lean_object* v_m_2321_, lean_object* v_inst_2322_, lean_object* v_f_2323_, lean_object* v_as_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Vector_findRevM_x3f(v_n_2319_, v_00_u03b1_2320_, v_m_2321_, v_inst_2322_, v_f_2323_, v_as_2324_);
lean_dec(v_n_2319_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRevM_x3f___redArg(lean_object* v_inst_2326_, lean_object* v_f_2327_, lean_object* v_as_2328_){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2329_ = lean_array_get_size(v_as_2328_);
v___x_2330_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_2326_, v_f_2327_, v_as_2328_, v___x_2329_, lean_box(0));
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRevM_x3f(lean_object* v_m_2331_, lean_object* v_00_u03b1_2332_, lean_object* v_00_u03b2_2333_, lean_object* v_n_2334_, lean_object* v_inst_2335_, lean_object* v_f_2336_, lean_object* v_as_2337_){
_start:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2338_ = lean_array_get_size(v_as_2337_);
v___x_2339_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_2335_, v_f_2336_, v_as_2337_, v___x_2338_, lean_box(0));
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRevM_x3f___boxed(lean_object* v_m_2340_, lean_object* v_00_u03b1_2341_, lean_object* v_00_u03b2_2342_, lean_object* v_n_2343_, lean_object* v_inst_2344_, lean_object* v_f_2345_, lean_object* v_as_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l_Vector_findSomeRevM_x3f(v_m_2340_, v_00_u03b1_2341_, v_00_u03b2_2342_, v_n_2343_, v_inst_2344_, v_f_2345_, v_as_2346_);
lean_dec(v_n_2343_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Vector_find_x3f___redArg___lam__0(lean_object* v_f_2348_, lean_object* v___x_2349_, lean_object* v___x_2350_, lean_object* v_a_2351_, lean_object* v_x_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v___x_2354_; uint8_t v___x_2355_; 
lean_inc(v_a_2351_);
v___x_2354_ = lean_apply_1(v_f_2348_, v_a_2351_);
v___x_2355_ = lean_unbox(v___x_2354_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2356_; 
lean_dec(v_a_2351_);
v___x_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2349_);
return v___x_2356_;
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
lean_dec_ref(v___x_2349_);
v___x_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_a_2351_);
v___x_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
v___x_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
lean_ctor_set(v___x_2359_, 1, v___x_2350_);
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
return v___x_2360_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_find_x3f___redArg___lam__0___boxed(lean_object* v_f_2361_, lean_object* v___x_2362_, lean_object* v___x_2363_, lean_object* v_a_2364_, lean_object* v_x_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_Vector_find_x3f___redArg___lam__0(v_f_2361_, v___x_2362_, v___x_2363_, v_a_2364_, v_x_2365_, v___y_2366_);
lean_dec_ref(v___y_2366_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_Vector_find_x3f___redArg(lean_object* v_f_2368_, lean_object* v_as_2369_){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___f_2374_; size_t v_sz_2375_; size_t v___x_2376_; lean_object* v___x_2377_; lean_object* v_fst_2378_; 
v___x_2370_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2371_ = lean_box(0);
v___x_2372_ = lean_box(0);
v___x_2373_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
v___f_2374_ = lean_alloc_closure((void*)(l_Vector_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2374_, 0, v_f_2368_);
lean_closure_set(v___f_2374_, 1, v___x_2373_);
lean_closure_set(v___f_2374_, 2, v___x_2372_);
v_sz_2375_ = lean_array_size(v_as_2369_);
v___x_2376_ = ((size_t)0ULL);
v___x_2377_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2370_, v_as_2369_, v___f_2374_, v_sz_2375_, v___x_2376_, v___x_2373_);
v_fst_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_fst_2378_);
lean_dec(v___x_2377_);
if (lean_obj_tag(v_fst_2378_) == 0)
{
return v___x_2371_;
}
else
{
lean_object* v_val_2379_; 
v_val_2379_ = lean_ctor_get(v_fst_2378_, 0);
lean_inc(v_val_2379_);
lean_dec_ref_known(v_fst_2378_, 1);
return v_val_2379_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_find_x3f(lean_object* v_n_2380_, lean_object* v_00_u03b1_2381_, lean_object* v_f_2382_, lean_object* v_as_2383_){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___f_2388_; size_t v_sz_2389_; size_t v___x_2390_; lean_object* v___x_2391_; lean_object* v_fst_2392_; 
v___x_2384_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2385_ = lean_box(0);
v___x_2386_ = lean_box(0);
v___x_2387_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
v___f_2388_ = lean_alloc_closure((void*)(l_Vector_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2388_, 0, v_f_2382_);
lean_closure_set(v___f_2388_, 1, v___x_2387_);
lean_closure_set(v___f_2388_, 2, v___x_2386_);
v_sz_2389_ = lean_array_size(v_as_2383_);
v___x_2390_ = ((size_t)0ULL);
v___x_2391_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2384_, v_as_2383_, v___f_2388_, v_sz_2389_, v___x_2390_, v___x_2387_);
v_fst_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_fst_2392_);
lean_dec(v___x_2391_);
if (lean_obj_tag(v_fst_2392_) == 0)
{
return v___x_2385_;
}
else
{
lean_object* v_val_2393_; 
v_val_2393_ = lean_ctor_get(v_fst_2392_, 0);
lean_inc(v_val_2393_);
lean_dec_ref_known(v_fst_2392_, 1);
return v_val_2393_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_find_x3f___boxed(lean_object* v_n_2394_, lean_object* v_00_u03b1_2395_, lean_object* v_f_2396_, lean_object* v_as_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_Vector_find_x3f(v_n_2394_, v_00_u03b1_2395_, v_f_2396_, v_as_2397_);
lean_dec(v_n_2394_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRev_x3f___redArg___lam__0(lean_object* v_f_2399_, lean_object* v_a_2400_){
_start:
{
lean_object* v___x_2401_; uint8_t v___x_2402_; 
lean_inc(v_a_2400_);
v___x_2401_ = lean_apply_1(v_f_2399_, v_a_2400_);
v___x_2402_ = lean_unbox(v___x_2401_);
if (v___x_2402_ == 0)
{
lean_object* v___x_2403_; 
lean_dec(v_a_2400_);
v___x_2403_ = lean_box(0);
return v___x_2403_;
}
else
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_a_2400_);
return v___x_2404_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findRev_x3f___redArg(lean_object* v_f_2405_, lean_object* v_as_2406_){
_start:
{
lean_object* v___f_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___f_2407_ = lean_alloc_closure((void*)(l_Vector_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2407_, 0, v_f_2405_);
v___x_2408_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2409_ = lean_array_get_size(v_as_2406_);
v___x_2410_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v___x_2408_, v___f_2407_, v_as_2406_, v___x_2409_, lean_box(0));
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRev_x3f(lean_object* v_n_2411_, lean_object* v_00_u03b1_2412_, lean_object* v_f_2413_, lean_object* v_as_2414_){
_start:
{
lean_object* v___f_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___f_2415_ = lean_alloc_closure((void*)(l_Vector_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2415_, 0, v_f_2413_);
v___x_2416_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2417_ = lean_array_get_size(v_as_2414_);
v___x_2418_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v___x_2416_, v___f_2415_, v_as_2414_, v___x_2417_, lean_box(0));
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Vector_findRev_x3f___boxed(lean_object* v_n_2419_, lean_object* v_00_u03b1_2420_, lean_object* v_f_2421_, lean_object* v_as_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Vector_findRev_x3f(v_n_2419_, v_00_u03b1_2420_, v_f_2421_, v_as_2422_);
lean_dec(v_n_2419_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___redArg___lam__0(lean_object* v_f_2424_, lean_object* v___x_2425_, lean_object* v___x_2426_, lean_object* v_a_2427_, lean_object* v_x_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_apply_1(v_f_2424_, v_a_2427_);
if (lean_obj_tag(v___x_2430_) == 1)
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_dec_ref(v___x_2426_);
v___x_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v___x_2431_);
lean_ctor_set(v___x_2432_, 1, v___x_2425_);
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2432_);
return v___x_2433_;
}
else
{
lean_object* v___x_2434_; 
lean_dec(v___x_2430_);
v___x_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2426_);
return v___x_2434_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___redArg___lam__0___boxed(lean_object* v_f_2435_, lean_object* v___x_2436_, lean_object* v___x_2437_, lean_object* v_a_2438_, lean_object* v_x_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Vector_findSome_x3f___redArg___lam__0(v_f_2435_, v___x_2436_, v___x_2437_, v_a_2438_, v_x_2439_, v___y_2440_);
lean_dec_ref(v___y_2440_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___redArg(lean_object* v_f_2442_, lean_object* v_as_2443_){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___f_2448_; size_t v_sz_2449_; size_t v___x_2450_; lean_object* v___x_2451_; lean_object* v_fst_2452_; 
v___x_2444_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2445_ = lean_box(0);
v___x_2446_ = lean_box(0);
v___x_2447_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
v___f_2448_ = lean_alloc_closure((void*)(l_Vector_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2448_, 0, v_f_2442_);
lean_closure_set(v___f_2448_, 1, v___x_2446_);
lean_closure_set(v___f_2448_, 2, v___x_2447_);
v_sz_2449_ = lean_array_size(v_as_2443_);
v___x_2450_ = ((size_t)0ULL);
v___x_2451_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2444_, v_as_2443_, v___f_2448_, v_sz_2449_, v___x_2450_, v___x_2447_);
v_fst_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_fst_2452_);
lean_dec(v___x_2451_);
if (lean_obj_tag(v_fst_2452_) == 0)
{
return v___x_2445_;
}
else
{
lean_object* v_val_2453_; 
v_val_2453_ = lean_ctor_get(v_fst_2452_, 0);
lean_inc(v_val_2453_);
lean_dec_ref_known(v_fst_2452_, 1);
return v_val_2453_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findSome_x3f(lean_object* v_00_u03b1_2454_, lean_object* v_00_u03b2_2455_, lean_object* v_n_2456_, lean_object* v_f_2457_, lean_object* v_as_2458_){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___f_2463_; size_t v_sz_2464_; size_t v___x_2465_; lean_object* v___x_2466_; lean_object* v_fst_2467_; 
v___x_2459_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2460_ = lean_box(0);
v___x_2461_ = lean_box(0);
v___x_2462_ = ((lean_object*)(l_Vector_findM_x3f___redArg___closed__0));
v___f_2463_ = lean_alloc_closure((void*)(l_Vector_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2463_, 0, v_f_2457_);
lean_closure_set(v___f_2463_, 1, v___x_2461_);
lean_closure_set(v___f_2463_, 2, v___x_2462_);
v_sz_2464_ = lean_array_size(v_as_2458_);
v___x_2465_ = ((size_t)0ULL);
v___x_2466_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2459_, v_as_2458_, v___f_2463_, v_sz_2464_, v___x_2465_, v___x_2462_);
v_fst_2467_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_fst_2467_);
lean_dec(v___x_2466_);
if (lean_obj_tag(v_fst_2467_) == 0)
{
return v___x_2460_;
}
else
{
lean_object* v_val_2468_; 
v_val_2468_ = lean_ctor_get(v_fst_2467_, 0);
lean_inc(v_val_2468_);
lean_dec_ref_known(v_fst_2467_, 1);
return v_val_2468_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_findSome_x3f___boxed(lean_object* v_00_u03b1_2469_, lean_object* v_00_u03b2_2470_, lean_object* v_n_2471_, lean_object* v_f_2472_, lean_object* v_as_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Vector_findSome_x3f(v_00_u03b1_2469_, v_00_u03b2_2470_, v_n_2471_, v_f_2472_, v_as_2473_);
lean_dec(v_n_2471_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f___redArg___lam__0(lean_object* v_f_2475_, lean_object* v_x_2476_){
_start:
{
lean_object* v___x_2477_; 
v___x_2477_ = lean_apply_1(v_f_2475_, v_x_2476_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f___redArg(lean_object* v_f_2478_, lean_object* v_as_2479_){
_start:
{
lean_object* v___f_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___f_2480_ = lean_alloc_closure((void*)(l_Vector_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2480_, 0, v_f_2478_);
v___x_2481_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2482_ = lean_array_get_size(v_as_2479_);
v___x_2483_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v___x_2481_, v___f_2480_, v_as_2479_, v___x_2482_, lean_box(0));
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f(lean_object* v_00_u03b1_2484_, lean_object* v_00_u03b2_2485_, lean_object* v_n_2486_, lean_object* v_f_2487_, lean_object* v_as_2488_){
_start:
{
lean_object* v___f_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___f_2489_ = lean_alloc_closure((void*)(l_Vector_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2489_, 0, v_f_2487_);
v___x_2490_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2491_ = lean_array_get_size(v_as_2488_);
v___x_2492_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v___x_2490_, v___f_2489_, v_as_2488_, v___x_2491_, lean_box(0));
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Vector_findSomeRev_x3f___boxed(lean_object* v_00_u03b1_2493_, lean_object* v_00_u03b2_2494_, lean_object* v_n_2495_, lean_object* v_f_2496_, lean_object* v_as_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Vector_findSomeRev_x3f(v_00_u03b1_2493_, v_00_u03b2_2494_, v_n_2495_, v_f_2496_, v_as_2497_);
lean_dec(v_n_2495_);
return v_res_2498_;
}
}
LEAN_EXPORT uint8_t l_Vector_isPrefixOf___redArg(lean_object* v_inst_2499_, lean_object* v_xs_2500_, lean_object* v_ys_2501_){
_start:
{
uint8_t v___x_2502_; 
v___x_2502_ = l_Array_isPrefixOf___redArg(v_inst_2499_, v_xs_2500_, v_ys_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Vector_isPrefixOf___redArg___boxed(lean_object* v_inst_2503_, lean_object* v_xs_2504_, lean_object* v_ys_2505_){
_start:
{
uint8_t v_res_2506_; lean_object* v_r_2507_; 
v_res_2506_ = l_Vector_isPrefixOf___redArg(v_inst_2503_, v_xs_2504_, v_ys_2505_);
lean_dec_ref(v_ys_2505_);
lean_dec_ref(v_xs_2504_);
v_r_2507_ = lean_box(v_res_2506_);
return v_r_2507_;
}
}
LEAN_EXPORT uint8_t l_Vector_isPrefixOf(lean_object* v_00_u03b1_2508_, lean_object* v_m_2509_, lean_object* v_n_2510_, lean_object* v_inst_2511_, lean_object* v_xs_2512_, lean_object* v_ys_2513_){
_start:
{
uint8_t v___x_2514_; 
v___x_2514_ = l_Array_isPrefixOf___redArg(v_inst_2511_, v_xs_2512_, v_ys_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Vector_isPrefixOf___boxed(lean_object* v_00_u03b1_2515_, lean_object* v_m_2516_, lean_object* v_n_2517_, lean_object* v_inst_2518_, lean_object* v_xs_2519_, lean_object* v_ys_2520_){
_start:
{
uint8_t v_res_2521_; lean_object* v_r_2522_; 
v_res_2521_ = l_Vector_isPrefixOf(v_00_u03b1_2515_, v_m_2516_, v_n_2517_, v_inst_2518_, v_xs_2519_, v_ys_2520_);
lean_dec_ref(v_ys_2520_);
lean_dec_ref(v_xs_2519_);
lean_dec(v_n_2517_);
lean_dec(v_m_2516_);
v_r_2522_ = lean_box(v_res_2521_);
return v_r_2522_;
}
}
LEAN_EXPORT lean_object* l_Vector_anyM___redArg(lean_object* v_inst_2523_, lean_object* v_p_2524_, lean_object* v_xs_2525_){
_start:
{
lean_object* v_toApplicative_2526_; lean_object* v_toPure_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v_toApplicative_2526_ = lean_ctor_get(v_inst_2523_, 0);
v_toPure_2527_ = lean_ctor_get(v_toApplicative_2526_, 1);
v___x_2528_ = lean_unsigned_to_nat(0u);
v___x_2529_ = lean_array_get_size(v_xs_2525_);
v___x_2530_ = lean_nat_dec_lt(v___x_2528_, v___x_2529_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_inc(v_toPure_2527_);
lean_dec_ref(v_xs_2525_);
lean_dec(v_p_2524_);
lean_dec_ref(v_inst_2523_);
v___x_2531_ = lean_box(v___x_2530_);
v___x_2532_ = lean_apply_2(v_toPure_2527_, lean_box(0), v___x_2531_);
return v___x_2532_;
}
else
{
if (v___x_2530_ == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_inc(v_toPure_2527_);
lean_dec_ref(v_xs_2525_);
lean_dec(v_p_2524_);
lean_dec_ref(v_inst_2523_);
v___x_2533_ = lean_box(v___x_2530_);
v___x_2534_ = lean_apply_2(v_toPure_2527_, lean_box(0), v___x_2533_);
return v___x_2534_;
}
else
{
size_t v___x_2535_; size_t v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = ((size_t)0ULL);
v___x_2536_ = lean_usize_of_nat(v___x_2529_);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2523_, v_p_2524_, v_xs_2525_, v___x_2535_, v___x_2536_);
return v___x_2537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_anyM(lean_object* v_m_2538_, lean_object* v_00_u03b1_2539_, lean_object* v_n_2540_, lean_object* v_inst_2541_, lean_object* v_p_2542_, lean_object* v_xs_2543_){
_start:
{
lean_object* v_toApplicative_2544_; lean_object* v_toPure_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; 
v_toApplicative_2544_ = lean_ctor_get(v_inst_2541_, 0);
v_toPure_2545_ = lean_ctor_get(v_toApplicative_2544_, 1);
v___x_2546_ = lean_unsigned_to_nat(0u);
v___x_2547_ = lean_array_get_size(v_xs_2543_);
v___x_2548_ = lean_nat_dec_lt(v___x_2546_, v___x_2547_);
if (v___x_2548_ == 0)
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
lean_inc(v_toPure_2545_);
lean_dec_ref(v_xs_2543_);
lean_dec(v_p_2542_);
lean_dec_ref(v_inst_2541_);
v___x_2549_ = lean_box(v___x_2548_);
v___x_2550_ = lean_apply_2(v_toPure_2545_, lean_box(0), v___x_2549_);
return v___x_2550_;
}
else
{
if (v___x_2548_ == 0)
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
lean_inc(v_toPure_2545_);
lean_dec_ref(v_xs_2543_);
lean_dec(v_p_2542_);
lean_dec_ref(v_inst_2541_);
v___x_2551_ = lean_box(v___x_2548_);
v___x_2552_ = lean_apply_2(v_toPure_2545_, lean_box(0), v___x_2551_);
return v___x_2552_;
}
else
{
size_t v___x_2553_; size_t v___x_2554_; lean_object* v___x_2555_; 
v___x_2553_ = ((size_t)0ULL);
v___x_2554_ = lean_usize_of_nat(v___x_2547_);
v___x_2555_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2541_, v_p_2542_, v_xs_2543_, v___x_2553_, v___x_2554_);
return v___x_2555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_anyM___boxed(lean_object* v_m_2556_, lean_object* v_00_u03b1_2557_, lean_object* v_n_2558_, lean_object* v_inst_2559_, lean_object* v_p_2560_, lean_object* v_xs_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l_Vector_anyM(v_m_2556_, v_00_u03b1_2557_, v_n_2558_, v_inst_2559_, v_p_2560_, v_xs_2561_);
lean_dec(v_n_2558_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__0(lean_object* v_toPure_2563_, uint8_t v_____do__lift_2564_){
_start:
{
if (v_____do__lift_2564_ == 0)
{
uint8_t v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = 1;
v___x_2566_ = lean_box(v___x_2565_);
v___x_2567_ = lean_apply_2(v_toPure_2563_, lean_box(0), v___x_2566_);
return v___x_2567_;
}
else
{
uint8_t v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2568_ = 0;
v___x_2569_ = lean_box(v___x_2568_);
v___x_2570_ = lean_apply_2(v_toPure_2563_, lean_box(0), v___x_2569_);
return v___x_2570_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__0___boxed(lean_object* v_toPure_2571_, lean_object* v_____do__lift_2572_){
_start:
{
uint8_t v_____do__lift_112__boxed_2573_; lean_object* v_res_2574_; 
v_____do__lift_112__boxed_2573_ = lean_unbox(v_____do__lift_2572_);
v_res_2574_ = l_Vector_allM___redArg___lam__0(v_toPure_2571_, v_____do__lift_112__boxed_2573_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__1(lean_object* v_toPure_2575_, uint8_t v___x_2576_, uint8_t v_____do__lift_2577_){
_start:
{
if (v_____do__lift_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = lean_box(v___x_2576_);
v___x_2579_ = lean_apply_2(v_toPure_2575_, lean_box(0), v___x_2578_);
return v___x_2579_;
}
else
{
uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2580_ = 0;
v___x_2581_ = lean_box(v___x_2580_);
v___x_2582_ = lean_apply_2(v_toPure_2575_, lean_box(0), v___x_2581_);
return v___x_2582_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__1___boxed(lean_object* v_toPure_2583_, lean_object* v___x_2584_, lean_object* v_____do__lift_2585_){
_start:
{
uint8_t v___x_127__boxed_2586_; uint8_t v_____do__lift_128__boxed_2587_; lean_object* v_res_2588_; 
v___x_127__boxed_2586_ = lean_unbox(v___x_2584_);
v_____do__lift_128__boxed_2587_ = lean_unbox(v_____do__lift_2585_);
v_res_2588_ = l_Vector_allM___redArg___lam__1(v_toPure_2583_, v___x_127__boxed_2586_, v_____do__lift_128__boxed_2587_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Vector_allM___redArg___lam__2(lean_object* v_p_2589_, lean_object* v_toBind_2590_, lean_object* v___f_2591_, lean_object* v_v_2592_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_apply_1(v_p_2589_, v_v_2592_);
v___x_2594_ = lean_apply_4(v_toBind_2590_, lean_box(0), lean_box(0), v___x_2593_, v___f_2591_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Vector_allM___redArg(lean_object* v_inst_2595_, lean_object* v_p_2596_, lean_object* v_xs_2597_){
_start:
{
lean_object* v_toApplicative_2598_; lean_object* v_toBind_2599_; lean_object* v_toPure_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___f_2603_; uint8_t v___x_2604_; 
v_toApplicative_2598_ = lean_ctor_get(v_inst_2595_, 0);
v_toBind_2599_ = lean_ctor_get(v_inst_2595_, 1);
lean_inc(v_toBind_2599_);
v_toPure_2600_ = lean_ctor_get(v_toApplicative_2598_, 1);
v___x_2601_ = lean_unsigned_to_nat(0u);
v___x_2602_ = lean_array_get_size(v_xs_2597_);
lean_inc(v_toPure_2600_);
v___f_2603_ = lean_alloc_closure((void*)(l_Vector_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2603_, 0, v_toPure_2600_);
v___x_2604_ = lean_nat_dec_lt(v___x_2601_, v___x_2602_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
lean_inc(v_toPure_2600_);
lean_dec_ref(v_xs_2597_);
lean_dec(v_p_2596_);
lean_dec_ref(v_inst_2595_);
v___x_2605_ = lean_box(v___x_2604_);
v___x_2606_ = lean_apply_2(v_toPure_2600_, lean_box(0), v___x_2605_);
v___x_2607_ = lean_apply_4(v_toBind_2599_, lean_box(0), lean_box(0), v___x_2606_, v___f_2603_);
return v___x_2607_;
}
else
{
if (v___x_2604_ == 0)
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
lean_inc(v_toPure_2600_);
lean_dec_ref(v_xs_2597_);
lean_dec(v_p_2596_);
lean_dec_ref(v_inst_2595_);
v___x_2608_ = lean_box(v___x_2604_);
v___x_2609_ = lean_apply_2(v_toPure_2600_, lean_box(0), v___x_2608_);
v___x_2610_ = lean_apply_4(v_toBind_2599_, lean_box(0), lean_box(0), v___x_2609_, v___f_2603_);
return v___x_2610_;
}
else
{
lean_object* v___x_2611_; lean_object* v___f_2612_; lean_object* v___f_2613_; size_t v___x_2614_; size_t v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2611_ = lean_box(v___x_2604_);
lean_inc(v_toPure_2600_);
v___f_2612_ = lean_alloc_closure((void*)(l_Vector_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2612_, 0, v_toPure_2600_);
lean_closure_set(v___f_2612_, 1, v___x_2611_);
lean_inc(v_toBind_2599_);
v___f_2613_ = lean_alloc_closure((void*)(l_Vector_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2613_, 0, v_p_2596_);
lean_closure_set(v___f_2613_, 1, v_toBind_2599_);
lean_closure_set(v___f_2613_, 2, v___f_2612_);
v___x_2614_ = ((size_t)0ULL);
v___x_2615_ = lean_usize_of_nat(v___x_2602_);
v___x_2616_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2595_, v___f_2613_, v_xs_2597_, v___x_2614_, v___x_2615_);
v___x_2617_ = lean_apply_4(v_toBind_2599_, lean_box(0), lean_box(0), v___x_2616_, v___f_2603_);
return v___x_2617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_allM(lean_object* v_m_2618_, lean_object* v_00_u03b1_2619_, lean_object* v_n_2620_, lean_object* v_inst_2621_, lean_object* v_p_2622_, lean_object* v_xs_2623_){
_start:
{
lean_object* v_toApplicative_2624_; lean_object* v_toBind_2625_; lean_object* v_toPure_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___f_2629_; uint8_t v___x_2630_; 
v_toApplicative_2624_ = lean_ctor_get(v_inst_2621_, 0);
v_toBind_2625_ = lean_ctor_get(v_inst_2621_, 1);
lean_inc(v_toBind_2625_);
v_toPure_2626_ = lean_ctor_get(v_toApplicative_2624_, 1);
v___x_2627_ = lean_unsigned_to_nat(0u);
v___x_2628_ = lean_array_get_size(v_xs_2623_);
lean_inc(v_toPure_2626_);
v___f_2629_ = lean_alloc_closure((void*)(l_Vector_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2629_, 0, v_toPure_2626_);
v___x_2630_ = lean_nat_dec_lt(v___x_2627_, v___x_2628_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_inc(v_toPure_2626_);
lean_dec_ref(v_xs_2623_);
lean_dec(v_p_2622_);
lean_dec_ref(v_inst_2621_);
v___x_2631_ = lean_box(v___x_2630_);
v___x_2632_ = lean_apply_2(v_toPure_2626_, lean_box(0), v___x_2631_);
v___x_2633_ = lean_apply_4(v_toBind_2625_, lean_box(0), lean_box(0), v___x_2632_, v___f_2629_);
return v___x_2633_;
}
else
{
if (v___x_2630_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
lean_inc(v_toPure_2626_);
lean_dec_ref(v_xs_2623_);
lean_dec(v_p_2622_);
lean_dec_ref(v_inst_2621_);
v___x_2634_ = lean_box(v___x_2630_);
v___x_2635_ = lean_apply_2(v_toPure_2626_, lean_box(0), v___x_2634_);
v___x_2636_ = lean_apply_4(v_toBind_2625_, lean_box(0), lean_box(0), v___x_2635_, v___f_2629_);
return v___x_2636_;
}
else
{
lean_object* v___x_2637_; lean_object* v___f_2638_; lean_object* v___f_2639_; size_t v___x_2640_; size_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2637_ = lean_box(v___x_2630_);
lean_inc(v_toPure_2626_);
v___f_2638_ = lean_alloc_closure((void*)(l_Vector_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2638_, 0, v_toPure_2626_);
lean_closure_set(v___f_2638_, 1, v___x_2637_);
lean_inc(v_toBind_2625_);
v___f_2639_ = lean_alloc_closure((void*)(l_Vector_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2639_, 0, v_p_2622_);
lean_closure_set(v___f_2639_, 1, v_toBind_2625_);
lean_closure_set(v___f_2639_, 2, v___f_2638_);
v___x_2640_ = ((size_t)0ULL);
v___x_2641_ = lean_usize_of_nat(v___x_2628_);
v___x_2642_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2621_, v___f_2639_, v_xs_2623_, v___x_2640_, v___x_2641_);
v___x_2643_ = lean_apply_4(v_toBind_2625_, lean_box(0), lean_box(0), v___x_2642_, v___f_2629_);
return v___x_2643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_allM___boxed(lean_object* v_m_2644_, lean_object* v_00_u03b1_2645_, lean_object* v_n_2646_, lean_object* v_inst_2647_, lean_object* v_p_2648_, lean_object* v_xs_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Vector_allM(v_m_2644_, v_00_u03b1_2645_, v_n_2646_, v_inst_2647_, v_p_2648_, v_xs_2649_);
lean_dec(v_n_2646_);
return v_res_2650_;
}
}
LEAN_EXPORT uint8_t l_Vector_any___redArg___lam__0(lean_object* v_p_2651_, lean_object* v_x_2652_){
_start:
{
lean_object* v___x_2653_; uint8_t v___x_2654_; 
v___x_2653_ = lean_apply_1(v_p_2651_, v_x_2652_);
v___x_2654_ = lean_unbox(v___x_2653_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Vector_any___redArg___lam__0___boxed(lean_object* v_p_2655_, lean_object* v_x_2656_){
_start:
{
uint8_t v_res_2657_; lean_object* v_r_2658_; 
v_res_2657_ = l_Vector_any___redArg___lam__0(v_p_2655_, v_x_2656_);
v_r_2658_ = lean_box(v_res_2657_);
return v_r_2658_;
}
}
LEAN_EXPORT uint8_t l_Vector_any___redArg(lean_object* v_xs_2659_, lean_object* v_p_2660_){
_start:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; uint8_t v___x_2664_; 
v___x_2661_ = lean_unsigned_to_nat(0u);
v___x_2662_ = lean_array_get_size(v_xs_2659_);
v___x_2663_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2664_ = lean_nat_dec_lt(v___x_2661_, v___x_2662_);
if (v___x_2664_ == 0)
{
lean_dec_ref(v_p_2660_);
lean_dec_ref(v_xs_2659_);
return v___x_2664_;
}
else
{
if (v___x_2664_ == 0)
{
lean_dec_ref(v_p_2660_);
lean_dec_ref(v_xs_2659_);
return v___x_2664_;
}
else
{
lean_object* v___f_2665_; size_t v___x_2666_; size_t v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; 
v___f_2665_ = lean_alloc_closure((void*)(l_Vector_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2665_, 0, v_p_2660_);
v___x_2666_ = ((size_t)0ULL);
v___x_2667_ = lean_usize_of_nat(v___x_2662_);
v___x_2668_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2663_, v___f_2665_, v_xs_2659_, v___x_2666_, v___x_2667_);
v___x_2669_ = lean_unbox(v___x_2668_);
lean_dec(v___x_2668_);
return v___x_2669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_any___redArg___boxed(lean_object* v_xs_2670_, lean_object* v_p_2671_){
_start:
{
uint8_t v_res_2672_; lean_object* v_r_2673_; 
v_res_2672_ = l_Vector_any___redArg(v_xs_2670_, v_p_2671_);
v_r_2673_ = lean_box(v_res_2672_);
return v_r_2673_;
}
}
LEAN_EXPORT uint8_t l_Vector_any(lean_object* v_00_u03b1_2674_, lean_object* v_n_2675_, lean_object* v_xs_2676_, lean_object* v_p_2677_){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2678_ = lean_unsigned_to_nat(0u);
v___x_2679_ = lean_array_get_size(v_xs_2676_);
v___x_2680_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2681_ = lean_nat_dec_lt(v___x_2678_, v___x_2679_);
if (v___x_2681_ == 0)
{
lean_dec_ref(v_p_2677_);
lean_dec_ref(v_xs_2676_);
return v___x_2681_;
}
else
{
if (v___x_2681_ == 0)
{
lean_dec_ref(v_p_2677_);
lean_dec_ref(v_xs_2676_);
return v___x_2681_;
}
else
{
lean_object* v___f_2682_; size_t v___x_2683_; size_t v___x_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___f_2682_ = lean_alloc_closure((void*)(l_Vector_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2682_, 0, v_p_2677_);
v___x_2683_ = ((size_t)0ULL);
v___x_2684_ = lean_usize_of_nat(v___x_2679_);
v___x_2685_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2680_, v___f_2682_, v_xs_2676_, v___x_2683_, v___x_2684_);
v___x_2686_ = lean_unbox(v___x_2685_);
lean_dec(v___x_2685_);
return v___x_2686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_any___boxed(lean_object* v_00_u03b1_2687_, lean_object* v_n_2688_, lean_object* v_xs_2689_, lean_object* v_p_2690_){
_start:
{
uint8_t v_res_2691_; lean_object* v_r_2692_; 
v_res_2691_ = l_Vector_any(v_00_u03b1_2687_, v_n_2688_, v_xs_2689_, v_p_2690_);
lean_dec(v_n_2688_);
v_r_2692_ = lean_box(v_res_2691_);
return v_r_2692_;
}
}
LEAN_EXPORT uint8_t l_Vector_all___redArg___lam__0(lean_object* v_p_2693_, uint8_t v___x_2694_, lean_object* v_v_2695_){
_start:
{
lean_object* v___x_2696_; uint8_t v___x_2697_; 
v___x_2696_ = lean_apply_1(v_p_2693_, v_v_2695_);
v___x_2697_ = lean_unbox(v___x_2696_);
if (v___x_2697_ == 0)
{
return v___x_2694_;
}
else
{
uint8_t v___x_2698_; 
v___x_2698_ = 0;
return v___x_2698_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_all___redArg___lam__0___boxed(lean_object* v_p_2699_, lean_object* v___x_2700_, lean_object* v_v_2701_){
_start:
{
uint8_t v___x_75__boxed_2702_; uint8_t v_res_2703_; lean_object* v_r_2704_; 
v___x_75__boxed_2702_ = lean_unbox(v___x_2700_);
v_res_2703_ = l_Vector_all___redArg___lam__0(v_p_2699_, v___x_75__boxed_2702_, v_v_2701_);
v_r_2704_ = lean_box(v_res_2703_);
return v_r_2704_;
}
}
LEAN_EXPORT uint8_t l_Vector_all___redArg(lean_object* v_xs_2705_, lean_object* v_p_2706_){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; uint8_t v___x_2710_; 
v___x_2707_ = lean_unsigned_to_nat(0u);
v___x_2708_ = lean_array_get_size(v_xs_2705_);
v___x_2709_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2710_ = lean_nat_dec_lt(v___x_2707_, v___x_2708_);
if (v___x_2710_ == 0)
{
uint8_t v___x_2711_; 
lean_dec_ref(v_p_2706_);
lean_dec_ref(v_xs_2705_);
v___x_2711_ = 1;
return v___x_2711_;
}
else
{
if (v___x_2710_ == 0)
{
lean_dec_ref(v_p_2706_);
lean_dec_ref(v_xs_2705_);
return v___x_2710_;
}
else
{
lean_object* v___x_2712_; lean_object* v___f_2713_; size_t v___x_2714_; size_t v___x_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2712_ = lean_box(v___x_2710_);
v___f_2713_ = lean_alloc_closure((void*)(l_Vector_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2713_, 0, v_p_2706_);
lean_closure_set(v___f_2713_, 1, v___x_2712_);
v___x_2714_ = ((size_t)0ULL);
v___x_2715_ = lean_usize_of_nat(v___x_2708_);
v___x_2716_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2709_, v___f_2713_, v_xs_2705_, v___x_2714_, v___x_2715_);
v___x_2717_ = lean_unbox(v___x_2716_);
lean_dec(v___x_2716_);
if (v___x_2717_ == 0)
{
return v___x_2710_;
}
else
{
uint8_t v___x_2718_; 
v___x_2718_ = 0;
return v___x_2718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_all___redArg___boxed(lean_object* v_xs_2719_, lean_object* v_p_2720_){
_start:
{
uint8_t v_res_2721_; lean_object* v_r_2722_; 
v_res_2721_ = l_Vector_all___redArg(v_xs_2719_, v_p_2720_);
v_r_2722_ = lean_box(v_res_2721_);
return v_r_2722_;
}
}
LEAN_EXPORT uint8_t l_Vector_all(lean_object* v_00_u03b1_2723_, lean_object* v_n_2724_, lean_object* v_xs_2725_, lean_object* v_p_2726_){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; uint8_t v___x_2730_; 
v___x_2727_ = lean_unsigned_to_nat(0u);
v___x_2728_ = lean_array_get_size(v_xs_2725_);
v___x_2729_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2730_ = lean_nat_dec_lt(v___x_2727_, v___x_2728_);
if (v___x_2730_ == 0)
{
uint8_t v___x_2731_; 
lean_dec_ref(v_p_2726_);
lean_dec_ref(v_xs_2725_);
v___x_2731_ = 1;
return v___x_2731_;
}
else
{
if (v___x_2730_ == 0)
{
lean_dec_ref(v_p_2726_);
lean_dec_ref(v_xs_2725_);
return v___x_2730_;
}
else
{
lean_object* v___x_2732_; lean_object* v___f_2733_; size_t v___x_2734_; size_t v___x_2735_; lean_object* v___x_2736_; uint8_t v___x_2737_; 
v___x_2732_ = lean_box(v___x_2730_);
v___f_2733_ = lean_alloc_closure((void*)(l_Vector_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2733_, 0, v_p_2726_);
lean_closure_set(v___f_2733_, 1, v___x_2732_);
v___x_2734_ = ((size_t)0ULL);
v___x_2735_ = lean_usize_of_nat(v___x_2728_);
v___x_2736_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2729_, v___f_2733_, v_xs_2725_, v___x_2734_, v___x_2735_);
v___x_2737_ = lean_unbox(v___x_2736_);
lean_dec(v___x_2736_);
if (v___x_2737_ == 0)
{
return v___x_2730_;
}
else
{
uint8_t v___x_2738_; 
v___x_2738_ = 0;
return v___x_2738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_all___boxed(lean_object* v_00_u03b1_2739_, lean_object* v_n_2740_, lean_object* v_xs_2741_, lean_object* v_p_2742_){
_start:
{
uint8_t v_res_2743_; lean_object* v_r_2744_; 
v_res_2743_ = l_Vector_all(v_00_u03b1_2739_, v_n_2740_, v_xs_2741_, v_p_2742_);
lean_dec(v_n_2740_);
v_r_2744_ = lean_box(v_res_2743_);
return v_r_2744_;
}
}
LEAN_EXPORT lean_object* l_Vector_countP___redArg___lam__0(lean_object* v_p_2745_, lean_object* v_x1_2746_, lean_object* v_x2_2747_){
_start:
{
lean_object* v___x_2748_; uint8_t v___x_2749_; 
v___x_2748_ = lean_apply_1(v_p_2745_, v_x1_2746_);
v___x_2749_ = lean_unbox(v___x_2748_);
if (v___x_2749_ == 0)
{
lean_inc(v_x2_2747_);
return v_x2_2747_;
}
else
{
lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2750_ = lean_unsigned_to_nat(1u);
v___x_2751_ = lean_nat_add(v_x2_2747_, v___x_2750_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_countP___redArg___lam__0___boxed(lean_object* v_p_2752_, lean_object* v_x1_2753_, lean_object* v_x2_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Vector_countP___redArg___lam__0(v_p_2752_, v_x1_2753_, v_x2_2754_);
lean_dec(v_x2_2754_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Vector_countP___redArg(lean_object* v_p_2756_, lean_object* v_xs_2757_){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v___x_2758_ = lean_unsigned_to_nat(0u);
v___x_2759_ = lean_array_get_size(v_xs_2757_);
v___x_2760_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2761_ = lean_nat_dec_lt(v___x_2758_, v___x_2759_);
if (v___x_2761_ == 0)
{
lean_dec_ref(v_xs_2757_);
lean_dec_ref(v_p_2756_);
return v___x_2758_;
}
else
{
lean_object* v___f_2762_; size_t v___x_2763_; size_t v___x_2764_; lean_object* v___x_2765_; 
v___f_2762_ = lean_alloc_closure((void*)(l_Vector_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2762_, 0, v_p_2756_);
v___x_2763_ = lean_usize_of_nat(v___x_2759_);
v___x_2764_ = ((size_t)0ULL);
v___x_2765_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2760_, v___f_2762_, v_xs_2757_, v___x_2763_, v___x_2764_, v___x_2758_);
return v___x_2765_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_countP(lean_object* v_00_u03b1_2766_, lean_object* v_n_2767_, lean_object* v_p_2768_, lean_object* v_xs_2769_){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; uint8_t v___x_2773_; 
v___x_2770_ = lean_unsigned_to_nat(0u);
v___x_2771_ = lean_array_get_size(v_xs_2769_);
v___x_2772_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2773_ = lean_nat_dec_lt(v___x_2770_, v___x_2771_);
if (v___x_2773_ == 0)
{
lean_dec_ref(v_xs_2769_);
lean_dec_ref(v_p_2768_);
return v___x_2770_;
}
else
{
lean_object* v___f_2774_; size_t v___x_2775_; size_t v___x_2776_; lean_object* v___x_2777_; 
v___f_2774_ = lean_alloc_closure((void*)(l_Vector_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2774_, 0, v_p_2768_);
v___x_2775_ = lean_usize_of_nat(v___x_2771_);
v___x_2776_ = ((size_t)0ULL);
v___x_2777_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2772_, v___f_2774_, v_xs_2769_, v___x_2775_, v___x_2776_, v___x_2770_);
return v___x_2777_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_countP___boxed(lean_object* v_00_u03b1_2778_, lean_object* v_n_2779_, lean_object* v_p_2780_, lean_object* v_xs_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Vector_countP(v_00_u03b1_2778_, v_n_2779_, v_p_2780_, v_xs_2781_);
lean_dec(v_n_2779_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Vector_count___redArg___lam__0(lean_object* v_inst_2783_, lean_object* v_a_2784_, lean_object* v_x1_2785_, lean_object* v_x2_2786_){
_start:
{
lean_object* v___x_2787_; uint8_t v___x_2788_; 
v___x_2787_ = lean_apply_2(v_inst_2783_, v_x1_2785_, v_a_2784_);
v___x_2788_ = lean_unbox(v___x_2787_);
if (v___x_2788_ == 0)
{
lean_inc(v_x2_2786_);
return v_x2_2786_;
}
else
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = lean_unsigned_to_nat(1u);
v___x_2790_ = lean_nat_add(v_x2_2786_, v___x_2789_);
return v___x_2790_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_count___redArg___lam__0___boxed(lean_object* v_inst_2791_, lean_object* v_a_2792_, lean_object* v_x1_2793_, lean_object* v_x2_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Vector_count___redArg___lam__0(v_inst_2791_, v_a_2792_, v_x1_2793_, v_x2_2794_);
lean_dec(v_x2_2794_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Vector_count___redArg(lean_object* v_inst_2796_, lean_object* v_a_2797_, lean_object* v_xs_2798_){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; uint8_t v___x_2802_; 
v___x_2799_ = lean_unsigned_to_nat(0u);
v___x_2800_ = lean_array_get_size(v_xs_2798_);
v___x_2801_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2802_ = lean_nat_dec_lt(v___x_2799_, v___x_2800_);
if (v___x_2802_ == 0)
{
lean_dec_ref(v_xs_2798_);
lean_dec(v_a_2797_);
lean_dec_ref(v_inst_2796_);
return v___x_2799_;
}
else
{
lean_object* v___f_2803_; size_t v___x_2804_; size_t v___x_2805_; lean_object* v___x_2806_; 
v___f_2803_ = lean_alloc_closure((void*)(l_Vector_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2803_, 0, v_inst_2796_);
lean_closure_set(v___f_2803_, 1, v_a_2797_);
v___x_2804_ = lean_usize_of_nat(v___x_2800_);
v___x_2805_ = ((size_t)0ULL);
v___x_2806_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2801_, v___f_2803_, v_xs_2798_, v___x_2804_, v___x_2805_, v___x_2799_);
return v___x_2806_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_count(lean_object* v_00_u03b1_2807_, lean_object* v_n_2808_, lean_object* v_inst_2809_, lean_object* v_a_2810_, lean_object* v_xs_2811_){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; uint8_t v___x_2815_; 
v___x_2812_ = lean_unsigned_to_nat(0u);
v___x_2813_ = lean_array_get_size(v_xs_2811_);
v___x_2814_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2815_ = lean_nat_dec_lt(v___x_2812_, v___x_2813_);
if (v___x_2815_ == 0)
{
lean_dec_ref(v_xs_2811_);
lean_dec(v_a_2810_);
lean_dec_ref(v_inst_2809_);
return v___x_2812_;
}
else
{
lean_object* v___f_2816_; size_t v___x_2817_; size_t v___x_2818_; lean_object* v___x_2819_; 
v___f_2816_ = lean_alloc_closure((void*)(l_Vector_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2816_, 0, v_inst_2809_);
lean_closure_set(v___f_2816_, 1, v_a_2810_);
v___x_2817_ = lean_usize_of_nat(v___x_2813_);
v___x_2818_ = ((size_t)0ULL);
v___x_2819_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2814_, v___f_2816_, v_xs_2811_, v___x_2817_, v___x_2818_, v___x_2812_);
return v___x_2819_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_count___boxed(lean_object* v_00_u03b1_2820_, lean_object* v_n_2821_, lean_object* v_inst_2822_, lean_object* v_a_2823_, lean_object* v_xs_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Vector_count(v_00_u03b1_2820_, v_n_2821_, v_inst_2822_, v_a_2823_, v_xs_2824_);
lean_dec(v_n_2821_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Vector_replace___redArg(lean_object* v_inst_2826_, lean_object* v_xs_2827_, lean_object* v_a_2828_, lean_object* v_b_2829_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_Array_replace___redArg(v_inst_2826_, v_xs_2827_, v_a_2828_, v_b_2829_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_Vector_replace(lean_object* v_00_u03b1_2831_, lean_object* v_n_2832_, lean_object* v_inst_2833_, lean_object* v_xs_2834_, lean_object* v_a_2835_, lean_object* v_b_2836_){
_start:
{
lean_object* v___x_2837_; 
v___x_2837_ = l_Array_replace___redArg(v_inst_2833_, v_xs_2834_, v_a_2835_, v_b_2836_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l_Vector_replace___boxed(lean_object* v_00_u03b1_2838_, lean_object* v_n_2839_, lean_object* v_inst_2840_, lean_object* v_xs_2841_, lean_object* v_a_2842_, lean_object* v_b_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Vector_replace(v_00_u03b1_2838_, v_n_2839_, v_inst_2840_, v_xs_2841_, v_a_2842_, v_b_2843_);
lean_dec(v_n_2839_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Vector_sum___redArg___lam__0(lean_object* v_inst_2845_, lean_object* v_x1_2846_, lean_object* v_x2_2847_){
_start:
{
lean_object* v___x_2848_; 
v___x_2848_ = lean_apply_2(v_inst_2845_, v_x1_2846_, v_x2_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Vector_sum___redArg(lean_object* v_inst_2849_, lean_object* v_inst_2850_, lean_object* v_xs_2851_){
_start:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; uint8_t v___x_2855_; 
v___x_2852_ = lean_array_get_size(v_xs_2851_);
v___x_2853_ = lean_unsigned_to_nat(0u);
v___x_2854_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2855_ = lean_nat_dec_lt(v___x_2853_, v___x_2852_);
if (v___x_2855_ == 0)
{
lean_dec_ref(v_xs_2851_);
lean_dec(v_inst_2849_);
return v_inst_2850_;
}
else
{
lean_object* v___f_2856_; size_t v___x_2857_; size_t v___x_2858_; lean_object* v___x_2859_; 
v___f_2856_ = lean_alloc_closure((void*)(l_Vector_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2856_, 0, v_inst_2849_);
v___x_2857_ = lean_usize_of_nat(v___x_2852_);
v___x_2858_ = ((size_t)0ULL);
v___x_2859_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2854_, v___f_2856_, v_xs_2851_, v___x_2857_, v___x_2858_, v_inst_2850_);
return v___x_2859_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_sum(lean_object* v_00_u03b1_2860_, lean_object* v_n_2861_, lean_object* v_inst_2862_, lean_object* v_inst_2863_, lean_object* v_xs_2864_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; 
v___x_2865_ = lean_array_get_size(v_xs_2864_);
v___x_2866_ = lean_unsigned_to_nat(0u);
v___x_2867_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2868_ = lean_nat_dec_lt(v___x_2866_, v___x_2865_);
if (v___x_2868_ == 0)
{
lean_dec_ref(v_xs_2864_);
lean_dec(v_inst_2862_);
return v_inst_2863_;
}
else
{
lean_object* v___f_2869_; size_t v___x_2870_; size_t v___x_2871_; lean_object* v___x_2872_; 
v___f_2869_ = lean_alloc_closure((void*)(l_Vector_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2869_, 0, v_inst_2862_);
v___x_2870_ = lean_usize_of_nat(v___x_2865_);
v___x_2871_ = ((size_t)0ULL);
v___x_2872_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2867_, v___f_2869_, v_xs_2864_, v___x_2870_, v___x_2871_, v_inst_2863_);
return v___x_2872_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_sum___boxed(lean_object* v_00_u03b1_2873_, lean_object* v_n_2874_, lean_object* v_inst_2875_, lean_object* v_inst_2876_, lean_object* v_xs_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Vector_sum(v_00_u03b1_2873_, v_n_2874_, v_inst_2875_, v_inst_2876_, v_xs_2877_);
lean_dec(v_n_2874_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Vector_prod___redArg(lean_object* v_inst_2879_, lean_object* v_inst_2880_, lean_object* v_xs_2881_){
_start:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; uint8_t v___x_2885_; 
v___x_2882_ = lean_array_get_size(v_xs_2881_);
v___x_2883_ = lean_unsigned_to_nat(0u);
v___x_2884_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2885_ = lean_nat_dec_lt(v___x_2883_, v___x_2882_);
if (v___x_2885_ == 0)
{
lean_dec_ref(v_xs_2881_);
lean_dec(v_inst_2879_);
return v_inst_2880_;
}
else
{
lean_object* v___f_2886_; size_t v___x_2887_; size_t v___x_2888_; lean_object* v___x_2889_; 
v___f_2886_ = lean_alloc_closure((void*)(l_Vector_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2886_, 0, v_inst_2879_);
v___x_2887_ = lean_usize_of_nat(v___x_2882_);
v___x_2888_ = ((size_t)0ULL);
v___x_2889_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2884_, v___f_2886_, v_xs_2881_, v___x_2887_, v___x_2888_, v_inst_2880_);
return v___x_2889_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_prod(lean_object* v_00_u03b1_2890_, lean_object* v_n_2891_, lean_object* v_inst_2892_, lean_object* v_inst_2893_, lean_object* v_xs_2894_){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; uint8_t v___x_2898_; 
v___x_2895_ = lean_array_get_size(v_xs_2894_);
v___x_2896_ = lean_unsigned_to_nat(0u);
v___x_2897_ = ((lean_object*)(l_Vector_foldl___redArg___closed__9));
v___x_2898_ = lean_nat_dec_lt(v___x_2896_, v___x_2895_);
if (v___x_2898_ == 0)
{
lean_dec_ref(v_xs_2894_);
lean_dec(v_inst_2892_);
return v_inst_2893_;
}
else
{
lean_object* v___f_2899_; size_t v___x_2900_; size_t v___x_2901_; lean_object* v___x_2902_; 
v___f_2899_ = lean_alloc_closure((void*)(l_Vector_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2899_, 0, v_inst_2892_);
v___x_2900_ = lean_usize_of_nat(v___x_2895_);
v___x_2901_ = ((size_t)0ULL);
v___x_2902_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2897_, v___f_2899_, v_xs_2894_, v___x_2900_, v___x_2901_, v_inst_2893_);
return v___x_2902_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_prod___boxed(lean_object* v_00_u03b1_2903_, lean_object* v_n_2904_, lean_object* v_inst_2905_, lean_object* v_inst_2906_, lean_object* v_xs_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Vector_prod(v_00_u03b1_2903_, v_n_2904_, v_inst_2905_, v_inst_2906_, v_xs_2907_);
lean_dec(v_n_2904_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Vector_leftpad___redArg(lean_object* v_m_2909_, lean_object* v_n_2910_, lean_object* v_a_2911_, lean_object* v_xs_2912_){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2913_ = lean_nat_sub(v_n_2910_, v_m_2909_);
v___x_2914_ = lean_mk_array(v___x_2913_, v_a_2911_);
v___x_2915_ = l_Array_append___redArg(v___x_2914_, v_xs_2912_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Vector_leftpad___redArg___boxed(lean_object* v_m_2916_, lean_object* v_n_2917_, lean_object* v_a_2918_, lean_object* v_xs_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Vector_leftpad___redArg(v_m_2916_, v_n_2917_, v_a_2918_, v_xs_2919_);
lean_dec_ref(v_xs_2919_);
lean_dec(v_n_2917_);
lean_dec(v_m_2916_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Vector_leftpad(lean_object* v_00_u03b1_2921_, lean_object* v_m_2922_, lean_object* v_n_2923_, lean_object* v_a_2924_, lean_object* v_xs_2925_){
_start:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2926_ = lean_nat_sub(v_n_2923_, v_m_2922_);
v___x_2927_ = lean_mk_array(v___x_2926_, v_a_2924_);
v___x_2928_ = l_Array_append___redArg(v___x_2927_, v_xs_2925_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l_Vector_leftpad___boxed(lean_object* v_00_u03b1_2929_, lean_object* v_m_2930_, lean_object* v_n_2931_, lean_object* v_a_2932_, lean_object* v_xs_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l_Vector_leftpad(v_00_u03b1_2929_, v_m_2930_, v_n_2931_, v_a_2932_, v_xs_2933_);
lean_dec_ref(v_xs_2933_);
lean_dec(v_n_2931_);
lean_dec(v_m_2930_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Vector_rightpad___redArg(lean_object* v_m_2935_, lean_object* v_n_2936_, lean_object* v_a_2937_, lean_object* v_xs_2938_){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2939_ = lean_nat_sub(v_n_2936_, v_m_2935_);
v___x_2940_ = lean_mk_array(v___x_2939_, v_a_2937_);
v___x_2941_ = l_Array_append___redArg(v_xs_2938_, v___x_2940_);
lean_dec_ref(v___x_2940_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l_Vector_rightpad___redArg___boxed(lean_object* v_m_2942_, lean_object* v_n_2943_, lean_object* v_a_2944_, lean_object* v_xs_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Vector_rightpad___redArg(v_m_2942_, v_n_2943_, v_a_2944_, v_xs_2945_);
lean_dec(v_n_2943_);
lean_dec(v_m_2942_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Vector_rightpad(lean_object* v_00_u03b1_2947_, lean_object* v_m_2948_, lean_object* v_n_2949_, lean_object* v_a_2950_, lean_object* v_xs_2951_){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2952_ = lean_nat_sub(v_n_2949_, v_m_2948_);
v___x_2953_ = lean_mk_array(v___x_2952_, v_a_2950_);
v___x_2954_ = l_Array_append___redArg(v_xs_2951_, v___x_2953_);
lean_dec_ref(v___x_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Vector_rightpad___boxed(lean_object* v_00_u03b1_2955_, lean_object* v_m_2956_, lean_object* v_n_2957_, lean_object* v_a_2958_, lean_object* v_xs_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Vector_rightpad(v_00_u03b1_2955_, v_m_2956_, v_n_2957_, v_a_2958_, v_xs_2959_);
lean_dec(v_n_2957_);
lean_dec(v_m_2956_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object* v_f_2961_, lean_object* v_a_2962_, lean_object* v_h_2963_, lean_object* v_b_2964_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_apply_3(v_f_2961_, v_a_2962_, lean_box(0), v_b_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__1(lean_object* v_inst_2966_, lean_object* v_00_u03b2_2967_, lean_object* v_xs_2968_, lean_object* v_b_2969_, lean_object* v_f_2970_){
_start:
{
lean_object* v___f_2971_; size_t v_sz_2972_; size_t v___x_2973_; lean_object* v___x_2974_; 
v___f_2971_ = lean_alloc_closure((void*)(l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2971_, 0, v_f_2970_);
v_sz_2972_ = lean_array_size(v_xs_2968_);
v___x_2973_ = ((size_t)0ULL);
v___x_2974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2966_, v_xs_2968_, v___f_2971_, v_sz_2972_, v___x_2973_, v_b_2969_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object* v_inst_2975_){
_start:
{
lean_object* v___f_2976_; 
v___f_2976_ = lean_alloc_closure((void*)(l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_2976_, 0, v_inst_2975_);
return v___f_2976_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad(lean_object* v_m_2977_, lean_object* v_00_u03b1_2978_, lean_object* v_n_2979_, lean_object* v_inst_2980_){
_start:
{
lean_object* v___f_2981_; 
v___f_2981_ = lean_alloc_closure((void*)(l_Vector_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_2981_, 0, v_inst_2980_);
return v___f_2981_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForIn_x27InferInstanceMembershipOfMonad___boxed(lean_object* v_m_2982_, lean_object* v_00_u03b1_2983_, lean_object* v_n_2984_, lean_object* v_inst_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Vector_instForIn_x27InferInstanceMembershipOfMonad(v_m_2982_, v_00_u03b1_2983_, v_n_2984_, v_inst_2985_);
lean_dec(v_n_2984_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForMOfMonad___redArg(lean_object* v_n_2987_, lean_object* v_inst_2988_){
_start:
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_alloc_closure((void*)(l_Vector_forM___boxed), 6, 4);
lean_closure_set(v___x_2989_, 0, lean_box(0));
lean_closure_set(v___x_2989_, 1, lean_box(0));
lean_closure_set(v___x_2989_, 2, v_n_2987_);
lean_closure_set(v___x_2989_, 3, v_inst_2988_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Vector_instForMOfMonad(lean_object* v_m_2990_, lean_object* v_00_u03b1_2991_, lean_object* v_n_2992_, lean_object* v_inst_2993_){
_start:
{
lean_object* v___x_2994_; 
v___x_2994_ = lean_alloc_closure((void*)(l_Vector_forM___boxed), 6, 4);
lean_closure_set(v___x_2994_, 0, lean_box(0));
lean_closure_set(v___x_2994_, 1, lean_box(0));
lean_closure_set(v___x_2994_, 2, v_n_2992_);
lean_closure_set(v___x_2994_, 3, v_inst_2993_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLT___redArg(){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = lean_box(0);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLT___redArg___boxed(lean_object* v___dummy_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Vector_instLT___redArg();
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLT(lean_object* v_00_u03b1_2999_, lean_object* v_n_3000_, lean_object* v_inst_3001_){
_start:
{
lean_object* v___x_3002_; 
v___x_3002_ = lean_box(0);
return v___x_3002_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLT___boxed(lean_object* v_00_u03b1_3003_, lean_object* v_n_3004_, lean_object* v_inst_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l_Vector_instLT(v_00_u03b1_3003_, v_n_3004_, v_inst_3005_);
lean_dec(v_n_3004_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLE___redArg(){
_start:
{
lean_object* v___x_3008_; 
v___x_3008_ = lean_box(0);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLE___redArg___boxed(lean_object* v___dummy_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_Vector_instLE___redArg();
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLE(lean_object* v_00_u03b1_3011_, lean_object* v_n_3012_, lean_object* v_inst_3013_){
_start:
{
lean_object* v___x_3014_; 
v___x_3014_ = lean_box(0);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Vector_instLE___boxed(lean_object* v_00_u03b1_3015_, lean_object* v_n_3016_, lean_object* v_inst_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_Vector_instLE(v_00_u03b1_3015_, v_n_3016_, v_inst_3017_);
lean_dec(v_n_3016_);
return v_res_3018_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = ((lean_object*)(l_Vector_lex___auto__1___closed__0));
v___x_3026_ = l_Lean_mkAtom(v___x_3025_);
return v___x_3026_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__3(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
v___x_3027_ = lean_obj_once(&l_Vector_lex___auto__1___closed__2, &l_Vector_lex___auto__1___closed__2_once, _init_l_Vector_lex___auto__1___closed__2);
v___x_3028_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3029_ = lean_array_push(v___x_3028_, v___x_3027_);
return v___x_3029_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__8(void){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__17));
v___x_3043_ = l_Lean_mkAtom(v___x_3042_);
return v___x_3043_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__9(void){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3044_ = lean_obj_once(&l_Vector_lex___auto__1___closed__8, &l_Vector_lex___auto__1___closed__8_once, _init_l_Vector_lex___auto__1___closed__8);
v___x_3045_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3046_ = lean_array_push(v___x_3045_, v___x_3044_);
return v___x_3046_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__13(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = ((lean_object*)(l_Vector_lex___auto__1___closed__12));
v___x_3052_ = lean_string_utf8_byte_size(v___x_3051_);
return v___x_3052_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__14(void){
_start:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3053_ = lean_obj_once(&l_Vector_lex___auto__1___closed__13, &l_Vector_lex___auto__1___closed__13_once, _init_l_Vector_lex___auto__1___closed__13);
v___x_3054_ = lean_unsigned_to_nat(0u);
v___x_3055_ = ((lean_object*)(l_Vector_lex___auto__1___closed__12));
v___x_3056_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
lean_ctor_set(v___x_3056_, 1, v___x_3054_);
lean_ctor_set(v___x_3056_, 2, v___x_3053_);
return v___x_3056_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__15(void){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = lean_box(0);
v___x_3058_ = l_unsafeCast___redArg(v___x_3057_);
return v___x_3058_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__16(void){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3059_ = lean_box(0);
v___x_3060_ = lean_obj_once(&l_Vector_lex___auto__1___closed__15, &l_Vector_lex___auto__1___closed__15_once, _init_l_Vector_lex___auto__1___closed__15);
v___x_3061_ = lean_obj_once(&l_Vector_lex___auto__1___closed__14, &l_Vector_lex___auto__1___closed__14_once, _init_l_Vector_lex___auto__1___closed__14);
v___x_3062_ = lean_box(2);
v___x_3063_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
lean_ctor_set(v___x_3063_, 1, v___x_3061_);
lean_ctor_set(v___x_3063_, 2, v___x_3060_);
lean_ctor_set(v___x_3063_, 3, v___x_3059_);
return v___x_3063_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__17(void){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = lean_obj_once(&l_Vector_lex___auto__1___closed__16, &l_Vector_lex___auto__1___closed__16_once, _init_l_Vector_lex___auto__1___closed__16);
v___x_3065_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3066_ = lean_array_push(v___x_3065_, v___x_3064_);
return v___x_3066_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__18(void){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3067_ = lean_obj_once(&l_Vector_lex___auto__1___closed__17, &l_Vector_lex___auto__1___closed__17_once, _init_l_Vector_lex___auto__1___closed__17);
v___x_3068_ = ((lean_object*)(l_Vector_lex___auto__1___closed__11));
v___x_3069_ = lean_box(2);
v___x_3070_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
lean_ctor_set(v___x_3070_, 1, v___x_3068_);
lean_ctor_set(v___x_3070_, 2, v___x_3067_);
return v___x_3070_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__19(void){
_start:
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3071_ = lean_obj_once(&l_Vector_lex___auto__1___closed__18, &l_Vector_lex___auto__1___closed__18_once, _init_l_Vector_lex___auto__1___closed__18);
v___x_3072_ = lean_obj_once(&l_Vector_lex___auto__1___closed__9, &l_Vector_lex___auto__1___closed__9_once, _init_l_Vector_lex___auto__1___closed__9);
v___x_3073_ = lean_array_push(v___x_3072_, v___x_3071_);
return v___x_3073_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__20(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3074_ = lean_obj_once(&l_Vector_lex___auto__1___closed__19, &l_Vector_lex___auto__1___closed__19_once, _init_l_Vector_lex___auto__1___closed__19);
v___x_3075_ = ((lean_object*)(l_Vector_lex___auto__1___closed__7));
v___x_3076_ = lean_box(2);
v___x_3077_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
lean_ctor_set(v___x_3077_, 1, v___x_3075_);
lean_ctor_set(v___x_3077_, 2, v___x_3074_);
return v___x_3077_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__21(void){
_start:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3078_ = lean_obj_once(&l_Vector_lex___auto__1___closed__20, &l_Vector_lex___auto__1___closed__20_once, _init_l_Vector_lex___auto__1___closed__20);
v___x_3079_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3080_ = lean_array_push(v___x_3079_, v___x_3078_);
return v___x_3080_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__27(void){
_start:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3091_ = ((lean_object*)(l_Vector_lex___auto__1___closed__26));
v___x_3092_ = l_Lean_mkAtom(v___x_3091_);
return v___x_3092_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__28(void){
_start:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3093_ = lean_obj_once(&l_Vector_lex___auto__1___closed__27, &l_Vector_lex___auto__1___closed__27_once, _init_l_Vector_lex___auto__1___closed__27);
v___x_3094_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3095_ = lean_array_push(v___x_3094_, v___x_3093_);
return v___x_3095_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__29(void){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_obj_once(&l_Vector_lex___auto__1___closed__18, &l_Vector_lex___auto__1___closed__18_once, _init_l_Vector_lex___auto__1___closed__18);
v___x_3097_ = lean_obj_once(&l_Vector_lex___auto__1___closed__28, &l_Vector_lex___auto__1___closed__28_once, _init_l_Vector_lex___auto__1___closed__28);
v___x_3098_ = lean_array_push(v___x_3097_, v___x_3096_);
return v___x_3098_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__30(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3099_ = lean_obj_once(&l_Vector_lex___auto__1___closed__29, &l_Vector_lex___auto__1___closed__29_once, _init_l_Vector_lex___auto__1___closed__29);
v___x_3100_ = ((lean_object*)(l_Vector_lex___auto__1___closed__25));
v___x_3101_ = lean_box(2);
v___x_3102_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
lean_ctor_set(v___x_3102_, 1, v___x_3100_);
lean_ctor_set(v___x_3102_, 2, v___x_3099_);
return v___x_3102_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__31(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = lean_obj_once(&l_Vector_lex___auto__1___closed__30, &l_Vector_lex___auto__1___closed__30_once, _init_l_Vector_lex___auto__1___closed__30);
v___x_3104_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3105_ = lean_array_push(v___x_3104_, v___x_3103_);
return v___x_3105_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__33(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = ((lean_object*)(l_Vector_lex___auto__1___closed__32));
v___x_3108_ = l_Lean_mkAtom(v___x_3107_);
return v___x_3108_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__34(void){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3109_ = lean_obj_once(&l_Vector_lex___auto__1___closed__33, &l_Vector_lex___auto__1___closed__33_once, _init_l_Vector_lex___auto__1___closed__33);
v___x_3110_ = lean_obj_once(&l_Vector_lex___auto__1___closed__31, &l_Vector_lex___auto__1___closed__31_once, _init_l_Vector_lex___auto__1___closed__31);
v___x_3111_ = lean_array_push(v___x_3110_, v___x_3109_);
return v___x_3111_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__35(void){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = lean_obj_once(&l_Vector_lex___auto__1___closed__30, &l_Vector_lex___auto__1___closed__30_once, _init_l_Vector_lex___auto__1___closed__30);
v___x_3113_ = lean_obj_once(&l_Vector_lex___auto__1___closed__34, &l_Vector_lex___auto__1___closed__34_once, _init_l_Vector_lex___auto__1___closed__34);
v___x_3114_ = lean_array_push(v___x_3113_, v___x_3112_);
return v___x_3114_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__36(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3115_ = lean_obj_once(&l_Vector_lex___auto__1___closed__35, &l_Vector_lex___auto__1___closed__35_once, _init_l_Vector_lex___auto__1___closed__35);
v___x_3116_ = ((lean_object*)(l_Vector_lex___auto__1___closed__23));
v___x_3117_ = lean_box(2);
v___x_3118_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
lean_ctor_set(v___x_3118_, 1, v___x_3116_);
lean_ctor_set(v___x_3118_, 2, v___x_3115_);
return v___x_3118_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__37(void){
_start:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3119_ = lean_obj_once(&l_Vector_lex___auto__1___closed__36, &l_Vector_lex___auto__1___closed__36_once, _init_l_Vector_lex___auto__1___closed__36);
v___x_3120_ = lean_obj_once(&l_Vector_lex___auto__1___closed__21, &l_Vector_lex___auto__1___closed__21_once, _init_l_Vector_lex___auto__1___closed__21);
v___x_3121_ = lean_array_push(v___x_3120_, v___x_3119_);
return v___x_3121_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__38(void){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__22));
v___x_3123_ = l_Lean_mkAtom(v___x_3122_);
return v___x_3123_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__39(void){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3124_ = lean_obj_once(&l_Vector_lex___auto__1___closed__38, &l_Vector_lex___auto__1___closed__38_once, _init_l_Vector_lex___auto__1___closed__38);
v___x_3125_ = lean_obj_once(&l_Vector_lex___auto__1___closed__37, &l_Vector_lex___auto__1___closed__37_once, _init_l_Vector_lex___auto__1___closed__37);
v___x_3126_ = lean_array_push(v___x_3125_, v___x_3124_);
return v___x_3126_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__40(void){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3127_ = lean_obj_once(&l_Vector_lex___auto__1___closed__39, &l_Vector_lex___auto__1___closed__39_once, _init_l_Vector_lex___auto__1___closed__39);
v___x_3128_ = ((lean_object*)(l_Vector_lex___auto__1___closed__5));
v___x_3129_ = lean_box(2);
v___x_3130_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
lean_ctor_set(v___x_3130_, 1, v___x_3128_);
lean_ctor_set(v___x_3130_, 2, v___x_3127_);
return v___x_3130_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__41(void){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3131_ = lean_obj_once(&l_Vector_lex___auto__1___closed__40, &l_Vector_lex___auto__1___closed__40_once, _init_l_Vector_lex___auto__1___closed__40);
v___x_3132_ = lean_obj_once(&l_Vector_lex___auto__1___closed__3, &l_Vector_lex___auto__1___closed__3_once, _init_l_Vector_lex___auto__1___closed__3);
v___x_3133_ = lean_array_push(v___x_3132_, v___x_3131_);
return v___x_3133_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__42(void){
_start:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3134_ = lean_obj_once(&l_Vector_lex___auto__1___closed__41, &l_Vector_lex___auto__1___closed__41_once, _init_l_Vector_lex___auto__1___closed__41);
v___x_3135_ = ((lean_object*)(l_Vector_lex___auto__1___closed__1));
v___x_3136_ = lean_box(2);
v___x_3137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3135_);
lean_ctor_set(v___x_3137_, 2, v___x_3134_);
return v___x_3137_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__43(void){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3138_ = lean_obj_once(&l_Vector_lex___auto__1___closed__42, &l_Vector_lex___auto__1___closed__42_once, _init_l_Vector_lex___auto__1___closed__42);
v___x_3139_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3140_ = lean_array_push(v___x_3139_, v___x_3138_);
return v___x_3140_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__44(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3141_ = lean_obj_once(&l_Vector_lex___auto__1___closed__43, &l_Vector_lex___auto__1___closed__43_once, _init_l_Vector_lex___auto__1___closed__43);
v___x_3142_ = ((lean_object*)(l_Vector___aux__Init__Data__Vector__Basic______macroRules__Vector__term_x23v_x5b___x2c_x5d__1___closed__14));
v___x_3143_ = lean_box(2);
v___x_3144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set(v___x_3144_, 1, v___x_3142_);
lean_ctor_set(v___x_3144_, 2, v___x_3141_);
return v___x_3144_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__45(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3145_ = lean_obj_once(&l_Vector_lex___auto__1___closed__44, &l_Vector_lex___auto__1___closed__44_once, _init_l_Vector_lex___auto__1___closed__44);
v___x_3146_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3147_ = lean_array_push(v___x_3146_, v___x_3145_);
return v___x_3147_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__46(void){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3148_ = lean_obj_once(&l_Vector_lex___auto__1___closed__45, &l_Vector_lex___auto__1___closed__45_once, _init_l_Vector_lex___auto__1___closed__45);
v___x_3149_ = ((lean_object*)(l_Vector_set___auto__1___closed__5));
v___x_3150_ = lean_box(2);
v___x_3151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3150_);
lean_ctor_set(v___x_3151_, 1, v___x_3149_);
lean_ctor_set(v___x_3151_, 2, v___x_3148_);
return v___x_3151_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__47(void){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3152_ = lean_obj_once(&l_Vector_lex___auto__1___closed__46, &l_Vector_lex___auto__1___closed__46_once, _init_l_Vector_lex___auto__1___closed__46);
v___x_3153_ = ((lean_object*)(l_Vector_set___auto__1___closed__3));
v___x_3154_ = lean_array_push(v___x_3153_, v___x_3152_);
return v___x_3154_;
}
}
static lean_object* _init_l_Vector_lex___auto__1___closed__48(void){
_start:
{
lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3155_ = lean_obj_once(&l_Vector_lex___auto__1___closed__47, &l_Vector_lex___auto__1___closed__47_once, _init_l_Vector_lex___auto__1___closed__47);
v___x_3156_ = ((lean_object*)(l_Vector_set___auto__1___closed__2));
v___x_3157_ = lean_box(2);
v___x_3158_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
lean_ctor_set(v___x_3158_, 1, v___x_3156_);
lean_ctor_set(v___x_3158_, 2, v___x_3155_);
return v___x_3158_;
}
}
static lean_object* _init_l_Vector_lex___auto__1(void){
_start:
{
lean_object* v___x_3159_; 
v___x_3159_ = lean_obj_once(&l_Vector_lex___auto__1___closed__48, &l_Vector_lex___auto__1___closed__48_once, _init_l_Vector_lex___auto__1___closed__48);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Vector_lex___redArg___lam__0(lean_object* v_n_3160_, lean_object* v_xs_3161_, lean_object* v_ys_3162_, lean_object* v_lt_3163_, lean_object* v_inst_3164_, lean_object* v___x_3165_, lean_object* v___x_3166_, lean_object* v_next_3167_, lean_object* v_acc_3168_, lean_object* v_h_3169_, lean_object* v_G_3170_){
_start:
{
uint8_t v___x_3171_; 
v___x_3171_ = lean_nat_dec_lt(v_next_3167_, v_n_3160_);
if (v___x_3171_ == 0)
{
lean_dec_ref(v_G_3170_);
lean_dec_ref(v___x_3166_);
lean_dec_ref(v_inst_3164_);
lean_dec_ref(v_lt_3163_);
lean_inc_ref(v_acc_3168_);
return v_acc_3168_;
}
else
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v___x_3172_ = lean_array_fget_borrowed(v_xs_3161_, v_next_3167_);
v___x_3173_ = lean_array_fget_borrowed(v_ys_3162_, v_next_3167_);
lean_inc(v___x_3173_);
lean_inc(v___x_3172_);
v___x_3174_ = lean_apply_2(v_lt_3163_, v___x_3172_, v___x_3173_);
v___x_3175_ = lean_unbox(v___x_3174_);
if (v___x_3175_ == 0)
{
lean_object* v___x_3176_; uint8_t v___x_3177_; 
lean_inc(v___x_3173_);
lean_inc(v___x_3172_);
v___x_3176_ = lean_apply_2(v_inst_3164_, v___x_3172_, v___x_3173_);
v___x_3177_ = lean_unbox(v___x_3176_);
if (v___x_3177_ == 0)
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
lean_dec_ref(v_G_3170_);
lean_dec_ref(v___x_3166_);
v___x_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3174_);
v___x_3179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
lean_ctor_set(v___x_3179_, 1, v___x_3165_);
return v___x_3179_;
}
else
{
lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3180_ = lean_unsigned_to_nat(1u);
v___x_3181_ = lean_nat_add(v_next_3167_, v___x_3180_);
v___x_3182_ = lean_apply_4(v_G_3170_, v___x_3181_, v___x_3166_, lean_box(0), lean_box(0));
return v___x_3182_;
}
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
lean_dec_ref(v_G_3170_);
lean_dec_ref(v___x_3166_);
lean_dec_ref(v_inst_3164_);
v___x_3183_ = lean_box(v___x_3171_);
v___x_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
lean_ctor_set(v___x_3185_, 1, v___x_3165_);
return v___x_3185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_lex___redArg___lam__0___boxed(lean_object* v_n_3186_, lean_object* v_xs_3187_, lean_object* v_ys_3188_, lean_object* v_lt_3189_, lean_object* v_inst_3190_, lean_object* v___x_3191_, lean_object* v___x_3192_, lean_object* v_next_3193_, lean_object* v_acc_3194_, lean_object* v_h_3195_, lean_object* v_G_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_Vector_lex___redArg___lam__0(v_n_3186_, v_xs_3187_, v_ys_3188_, v_lt_3189_, v_inst_3190_, v___x_3191_, v___x_3192_, v_next_3193_, v_acc_3194_, v_h_3195_, v_G_3196_);
lean_dec_ref(v_acc_3194_);
lean_dec(v_next_3193_);
lean_dec_ref(v_ys_3188_);
lean_dec_ref(v_xs_3187_);
lean_dec(v_n_3186_);
return v_res_3197_;
}
}
LEAN_EXPORT uint8_t l_Vector_lex___redArg(lean_object* v_n_3201_, lean_object* v_inst_3202_, lean_object* v_xs_3203_, lean_object* v_ys_3204_, lean_object* v_lt_3205_){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___f_3209_; lean_object* v___x_3210_; lean_object* v_fst_3211_; 
v___x_3206_ = lean_unsigned_to_nat(0u);
v___x_3207_ = lean_box(0);
v___x_3208_ = ((lean_object*)(l_Vector_lex___redArg___closed__0));
v___f_3209_ = lean_alloc_closure((void*)(l_Vector_lex___redArg___lam__0___boxed), 11, 7);
lean_closure_set(v___f_3209_, 0, v_n_3201_);
lean_closure_set(v___f_3209_, 1, v_xs_3203_);
lean_closure_set(v___f_3209_, 2, v_ys_3204_);
lean_closure_set(v___f_3209_, 3, v_lt_3205_);
lean_closure_set(v___f_3209_, 4, v_inst_3202_);
lean_closure_set(v___f_3209_, 5, v___x_3207_);
lean_closure_set(v___f_3209_, 6, v___x_3208_);
v___x_3210_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3209_, v___x_3206_, v___x_3208_, lean_box(0));
v_fst_3211_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_fst_3211_);
lean_dec(v___x_3210_);
if (lean_obj_tag(v_fst_3211_) == 0)
{
uint8_t v___x_3212_; 
v___x_3212_ = 0;
return v___x_3212_;
}
else
{
lean_object* v_val_3213_; uint8_t v___x_3214_; 
v_val_3213_ = lean_ctor_get(v_fst_3211_, 0);
lean_inc(v_val_3213_);
lean_dec_ref_known(v_fst_3211_, 1);
v___x_3214_ = lean_unbox(v_val_3213_);
lean_dec(v_val_3213_);
return v___x_3214_;
}
}
}
LEAN_EXPORT lean_object* l_Vector_lex___redArg___boxed(lean_object* v_n_3215_, lean_object* v_inst_3216_, lean_object* v_xs_3217_, lean_object* v_ys_3218_, lean_object* v_lt_3219_){
_start:
{
uint8_t v_res_3220_; lean_object* v_r_3221_; 
v_res_3220_ = l_Vector_lex___redArg(v_n_3215_, v_inst_3216_, v_xs_3217_, v_ys_3218_, v_lt_3219_);
v_r_3221_ = lean_box(v_res_3220_);
return v_r_3221_;
}
}
LEAN_EXPORT uint8_t l_Vector_lex(lean_object* v_00_u03b1_3222_, lean_object* v_n_3223_, lean_object* v_inst_3224_, lean_object* v_xs_3225_, lean_object* v_ys_3226_, lean_object* v_lt_3227_){
_start:
{
uint8_t v___x_3228_; 
v___x_3228_ = l_Vector_lex___redArg(v_n_3223_, v_inst_3224_, v_xs_3225_, v_ys_3226_, v_lt_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Vector_lex___boxed(lean_object* v_00_u03b1_3229_, lean_object* v_n_3230_, lean_object* v_inst_3231_, lean_object* v_xs_3232_, lean_object* v_ys_3233_, lean_object* v_lt_3234_){
_start:
{
uint8_t v_res_3235_; lean_object* v_r_3236_; 
v_res_3235_ = l_Vector_lex(v_00_u03b1_3229_, v_n_3230_, v_inst_3231_, v_xs_3232_, v_ys_3233_, v_lt_3234_);
v_r_3236_ = lean_box(v_res_3235_);
return v_r_3236_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_RangeIterator(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_InsertIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_RangeIterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_InsertIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Vector_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Vector_set___auto__1 = _init_l_Vector_set___auto__1();
lean_mark_persistent(l_Vector_set___auto__1);
l_Vector_swap___auto__1 = _init_l_Vector_swap___auto__1();
lean_mark_persistent(l_Vector_swap___auto__1);
l_Vector_swap___auto__3 = _init_l_Vector_swap___auto__3();
lean_mark_persistent(l_Vector_swap___auto__3);
l_Vector_swapAt___auto__1 = _init_l_Vector_swapAt___auto__1();
lean_mark_persistent(l_Vector_swapAt___auto__1);
l_Vector_eraseIdx___auto__1 = _init_l_Vector_eraseIdx___auto__1();
lean_mark_persistent(l_Vector_eraseIdx___auto__1);
l_Vector_insertIdx___auto__1 = _init_l_Vector_insertIdx___auto__1();
lean_mark_persistent(l_Vector_insertIdx___auto__1);
l_Vector_lex___auto__1 = _init_l_Vector_lex___auto__1();
lean_mark_persistent(l_Vector_lex___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Nat(uint8_t builtin);
lean_object* initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_RangeIterator(uint8_t builtin);
lean_object* initialize_Init_Data_Array_InsertIdx(uint8_t builtin);
lean_object* initialize_Init_Data_Array_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_RangeIterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_InsertIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Vector_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

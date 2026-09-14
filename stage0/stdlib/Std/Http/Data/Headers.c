// Lean compiler output
// Module: Std.Http.Data.Headers
// Imports: public import Std.Http.Data.Headers.Basic public import Std.Http.Data.Headers.Name public import Std.Http.Data.Headers.Value
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Http_Header_instReprName_repr___redArg(lean_object*);
lean_object* l_Std_Http_Header_instReprValue_repr___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Std_Http_Header_instBEqValue_beq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_splitToSubslice___redArg(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Std_Http_Header_Name_ofString_x21(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* l_Std_Internal_IndexMultiMap_empty___redArg();
uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x3f(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x3f(lean_object*);
static const lean_array_object l_Std_Http_instInhabitedHeaders_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_instInhabitedHeaders_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedHeaders_default___closed__0_value;
static lean_once_cell_t l_Std_Http_instInhabitedHeaders_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instInhabitedHeaders_default___closed__1;
static lean_once_cell_t l_Std_Http_instInhabitedHeaders_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instInhabitedHeaders_default___closed__2;
static lean_once_cell_t l_Std_Http_instInhabitedHeaders_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instInhabitedHeaders_default___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedHeaders_default;
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedHeaders;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_instReprHeaders_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13_spec__15_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__0 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__0_value;
static const lean_string_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__1 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__2 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3_value;
static const lean_string_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__4 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__5;
static lean_once_cell_t l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6;
static const lean_ctor_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__7 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__8 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__8_value;
static const lean_string_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__9 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__10 = (const lean_object*)&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6_spec__10_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__3;
static lean_once_cell_t l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__4;
static const lean_ctor_object l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__2_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__7;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "indexes"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__8 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__8_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__8_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__9_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.HashMap.ofList "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__10_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__10_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__11 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__11_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "validity"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__12 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__12_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__12_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__13 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__13_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__14 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__14_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__14_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__15 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__15_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__16 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__16_value;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__17;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__19 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__19_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__16_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__20 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__20_value;
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Std_Http_instReprHeaders_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "map"};
static const lean_object* l_Std_Http_instReprHeaders_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprHeaders_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_instReprHeaders_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprHeaders_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_instReprHeaders_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprHeaders_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__2_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_instReprHeaders_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_instReprHeaders_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_instReprHeaders_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprHeaders_repr___redArg___closed__4;
LEAN_EXPORT lean_object* l_Std_Http_instReprHeaders_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprHeaders_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprHeaders_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprHeaders_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprHeaders___closed__0 = (const lean_object*)&l_Std_Http_instReprHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprHeaders = (const lean_object*)&l_Std_Http_instReprHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instMembershipNameHeaders;
static const lean_closure_object l_Std_Http_instDecidableMemNameHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instDecidableMemNameHeaders___closed__0 = (const lean_object*)&l_Std_Http_instDecidableMemNameHeaders___closed__0_value;
static const lean_closure_object l_Std_Http_instDecidableMemNameHeaders___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instDecidableMemNameHeaders___closed__1 = (const lean_object*)&l_Std_Http_instDecidableMemNameHeaders___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_instDecidableMemNameHeaders(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instDecidableMemNameHeaders___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__0 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__1 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__1_value;
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__2 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__2_value;
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__3 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__3_value;
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__4 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__4_value;
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__5 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__5_value;
static const lean_closure_object l_Std_Http_Headers_getAll___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__6 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__6_value;
static const lean_ctor_object l_Std_Http_Headers_getAll___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__0_value),((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__7 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_Headers_getAll___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__7_value),((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__2_value),((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__3_value),((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__4_value),((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__8 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_Headers_getAll___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__8_value),((lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__6_value)}};
static const lean_object* l_Std_Http_Headers_getAll___redArg___closed__9 = (const lean_object*)&l_Std_Http_Headers_getAll___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_hasEntry___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_hasEntry___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Headers_hasEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Headers_hasEntry___closed__0 = (const lean_object*)&l_Std_Http_Headers_hasEntry___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Headers_hasEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_hasEntry___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getLast_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_getD___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Headers_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_Headers_get_x21___closed__0 = (const lean_object*)&l_Std_Http_Headers_get_x21___closed__0_value;
static const lean_string_object l_Std_Http_Headers_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_Http_Headers_get_x21___closed__1 = (const lean_object*)&l_Std_Http_Headers_get_x21___closed__1_value;
static const lean_string_object l_Std_Http_Headers_get_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_Http_Headers_get_x21___closed__2 = (const lean_object*)&l_Std_Http_Headers_get_x21___closed__2_value;
static const lean_string_object l_Std_Http_Headers_get_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_Http_Headers_get_x21___closed__3 = (const lean_object*)&l_Std_Http_Headers_get_x21___closed__3_value;
static lean_once_cell_t l_Std_Http_Headers_get_x21___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Headers_get_x21___closed__4;
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_insertMany___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_insertMany(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_empty;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Headers_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_erase___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_erase___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Headers_erase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Headers_erase___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Headers_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_eraseMany___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_eraseMany(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Headers_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_merge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_merge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___at___00Std_Http_Headers_toList_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___at___00Std_Http_Headers_toList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_toList(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_Headers_mapValues_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_Headers_mapValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_mapValues(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_mapValues___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_filterMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_filterMap___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_filter___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_filter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_filter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_update_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_update_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_update(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_update___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_replaceLast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Headers_instToString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_Headers_instToString___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Headers_instToString___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_Headers_instToString___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_instToString___lam__1___closed__1 = (const lean_object*)&l_Std_Http_Headers_instToString___lam__1___closed__1_value;
static const lean_string_object l_Std_Http_Headers_instToString___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Http_Headers_instToString___lam__1___closed__2 = (const lean_object*)&l_Std_Http_Headers_instToString___lam__1___closed__2_value;
static lean_once_cell_t l_Std_Http_Headers_instToString___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Headers_instToString___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__1___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__1(lean_object*);
static const lean_string_object l_Std_Http_Headers_instToString___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_Headers_instToString___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Headers_instToString___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Headers_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_instToString___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_instToString___closed__0 = (const lean_object*)&l_Std_Http_Headers_instToString___closed__0_value;
static const lean_closure_object l_Std_Http_Headers_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_instToString___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Headers_instToString___closed__0_value)} };
static const lean_object* l_Std_Http_Headers_instToString___closed__1 = (const lean_object*)&l_Std_Http_Headers_instToString___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Headers_instToString = (const lean_object*)&l_Std_Http_Headers_instToString___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Headers_instEncodeV11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_instEncodeV11___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_instEncodeV11___closed__0 = (const lean_object*)&l_Std_Http_Headers_instEncodeV11___closed__0_value;
static const lean_closure_object l_Std_Http_Headers_instEncodeV11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_instEncodeV11___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Headers_instEncodeV11___closed__0_value)} };
static const lean_object* l_Std_Http_Headers_instEncodeV11___closed__1 = (const lean_object*)&l_Std_Http_Headers_instEncodeV11___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Headers_instEncodeV11 = (const lean_object*)&l_Std_Http_Headers_instEncodeV11___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEmptyCollection;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instSingletonProdNameValue___lam__1(lean_object*);
static const lean_closure_object l_Std_Http_Headers_instSingletonProdNameValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_instSingletonProdNameValue___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_instSingletonProdNameValue___closed__0 = (const lean_object*)&l_Std_Http_Headers_instSingletonProdNameValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Headers_instSingletonProdNameValue = (const lean_object*)&l_Std_Http_Headers_instSingletonProdNameValue___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instInsertProdNameValue___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Headers_instInsertProdNameValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_instInsertProdNameValue___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_instInsertProdNameValue___closed__0 = (const lean_object*)&l_Std_Http_Headers_instInsertProdNameValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Headers_instInsertProdNameValue = (const lean_object*)&l_Std_Http_Headers_instInsertProdNameValue___closed__0_value;
static const lean_closure_object l_Std_Http_Headers_instUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Headers_merge___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Headers_instUnion___closed__0 = (const lean_object*)&l_Std_Http_Headers_instUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Headers_instUnion = (const lean_object*)&l_Std_Http_Headers_instUnion___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad(lean_object*, lean_object*);
static lean_object* _init_l_Std_Http_instInhabitedHeaders_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_unsigned_to_nat(16u);
v___x_5_ = lean_mk_array(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Std_Http_instInhabitedHeaders_default___closed__2(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_obj_once(&l_Std_Http_instInhabitedHeaders_default___closed__1, &l_Std_Http_instInhabitedHeaders_default___closed__1_once, _init_l_Std_Http_instInhabitedHeaders_default___closed__1);
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Std_Http_instInhabitedHeaders_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l_Std_Http_instInhabitedHeaders_default___closed__2, &l_Std_Http_instInhabitedHeaders_default___closed__2_once, _init_l_Std_Http_instInhabitedHeaders_default___closed__2);
v___x_10_ = ((lean_object*)(l_Std_Http_instInhabitedHeaders_default___closed__0));
v___x_11_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l_Std_Http_instInhabitedHeaders_default(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Std_Http_instInhabitedHeaders_default___closed__3, &l_Std_Http_instInhabitedHeaders_default___closed__3_once, _init_l_Std_Http_instInhabitedHeaders_default___closed__3);
return v___x_12_;
}
}
static lean_object* _init_l_Std_Http_instInhabitedHeaders(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Std_Http_instInhabitedHeaders_default;
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_instReprHeaders_repr_spec__1(lean_object* v_a_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_nat_to_int(v_a_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13_spec__15_spec__17(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_18_) == 0)
{
lean_dec(v_x_16_);
return v_x_17_;
}
else
{
lean_object* v_head_19_; lean_object* v_tail_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_31_; 
v_head_19_ = lean_ctor_get(v_x_18_, 0);
v_tail_20_ = lean_ctor_get(v_x_18_, 1);
v_isSharedCheck_31_ = !lean_is_exclusive(v_x_18_);
if (v_isSharedCheck_31_ == 0)
{
v___x_22_ = v_x_18_;
v_isShared_23_ = v_isSharedCheck_31_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_tail_20_);
lean_inc(v_head_19_);
lean_dec(v_x_18_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_31_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
lean_inc(v_x_16_);
if (v_isShared_23_ == 0)
{
lean_ctor_set_tag(v___x_22_, 5);
lean_ctor_set(v___x_22_, 1, v_x_16_);
lean_ctor_set(v___x_22_, 0, v_x_17_);
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_x_17_);
lean_ctor_set(v_reuseFailAlloc_30_, 1, v_x_16_);
v___x_25_ = v_reuseFailAlloc_30_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = l_Nat_reprFast(v_head_19_);
v___x_27_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
v___x_28_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_28_, 0, v___x_25_);
lean_ctor_set(v___x_28_, 1, v___x_27_);
v_x_17_ = v___x_28_;
v_x_18_ = v_tail_20_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13_spec__15(lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v_x_34_){
_start:
{
if (lean_obj_tag(v_x_34_) == 0)
{
lean_dec(v_x_32_);
return v_x_33_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_47_; 
v_head_35_ = lean_ctor_get(v_x_34_, 0);
v_tail_36_ = lean_ctor_get(v_x_34_, 1);
v_isSharedCheck_47_ = !lean_is_exclusive(v_x_34_);
if (v_isSharedCheck_47_ == 0)
{
v___x_38_ = v_x_34_;
v_isShared_39_ = v_isSharedCheck_47_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_tail_36_);
lean_inc(v_head_35_);
lean_dec(v_x_34_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_47_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
lean_inc(v_x_32_);
if (v_isShared_39_ == 0)
{
lean_ctor_set_tag(v___x_38_, 5);
lean_ctor_set(v___x_38_, 1, v_x_32_);
lean_ctor_set(v___x_38_, 0, v_x_33_);
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_x_33_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v_x_32_);
v___x_41_ = v_reuseFailAlloc_46_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_42_ = l_Nat_reprFast(v_head_35_);
v___x_43_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
v___x_44_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_41_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13_spec__15_spec__17(v_x_32_, v___x_44_, v_tail_36_);
return v___x_45_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13___lam__0(lean_object* v___y_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = l_Nat_reprFast(v___y_48_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13(lean_object* v_x_51_, lean_object* v_x_52_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v___x_53_; 
lean_dec(v_x_52_);
v___x_53_ = lean_box(0);
return v___x_53_;
}
else
{
lean_object* v_tail_54_; 
v_tail_54_ = lean_ctor_get(v_x_51_, 1);
if (lean_obj_tag(v_tail_54_) == 0)
{
lean_object* v_head_55_; lean_object* v___x_56_; 
lean_dec(v_x_52_);
v_head_55_ = lean_ctor_get(v_x_51_, 0);
lean_inc(v_head_55_);
lean_dec_ref_known(v_x_51_, 2);
v___x_56_ = l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13___lam__0(v_head_55_);
return v___x_56_;
}
else
{
lean_object* v_head_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
lean_inc(v_tail_54_);
v_head_57_ = lean_ctor_get(v_x_51_, 0);
lean_inc(v_head_57_);
lean_dec_ref_known(v_x_51_, 2);
v___x_58_ = l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13___lam__0(v_head_57_);
v___x_59_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13_spec__15(v_x_52_, v___x_58_, v_tail_54_);
return v___x_59_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__5(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__0));
v___x_69_ = lean_string_length(v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_obj_once(&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__5, &l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__5_once, _init_l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__5);
v___x_71_ = lean_nat_to_int(v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8(lean_object* v_xs_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_array_get_size(v_xs_79_);
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = lean_nat_dec_eq(v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_83_ = lean_array_to_list(v_xs_79_);
v___x_84_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3));
v___x_85_ = l_Std_Format_joinSep___at___00Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8_spec__13(v___x_83_, v___x_84_);
v___x_86_ = lean_obj_once(&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6, &l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6_once, _init_l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6);
v___x_87_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__7));
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_85_);
v___x_89_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__8));
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_86_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = l_Std_Format_fill(v___x_91_);
return v___x_92_;
}
else
{
lean_object* v___x_93_; 
lean_dec_ref(v_xs_79_);
v___x_93_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__10));
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object* v_x_94_, lean_object* v_x_95_, lean_object* v_x_96_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_dec(v_x_94_);
return v_x_95_;
}
else
{
lean_object* v_head_97_; lean_object* v_tail_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_107_; 
v_head_97_ = lean_ctor_get(v_x_96_, 0);
v_tail_98_ = lean_ctor_get(v_x_96_, 1);
v_isSharedCheck_107_ = !lean_is_exclusive(v_x_96_);
if (v_isSharedCheck_107_ == 0)
{
v___x_100_ = v_x_96_;
v_isShared_101_ = v_isSharedCheck_107_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_tail_98_);
lean_inc(v_head_97_);
lean_dec(v_x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_107_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
lean_inc(v_x_94_);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 5);
lean_ctor_set(v___x_100_, 1, v_x_94_);
lean_ctor_set(v___x_100_, 0, v_x_95_);
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_x_95_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_x_94_);
v___x_103_ = v_reuseFailAlloc_106_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v_head_97_);
v_x_95_ = v___x_104_;
v_x_96_ = v_tail_98_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
if (lean_obj_tag(v_x_108_) == 0)
{
lean_object* v___x_110_; 
lean_dec(v_x_109_);
v___x_110_ = lean_box(0);
return v___x_110_;
}
else
{
lean_object* v_tail_111_; 
v_tail_111_ = lean_ctor_get(v_x_108_, 1);
if (lean_obj_tag(v_tail_111_) == 0)
{
lean_object* v_head_112_; 
lean_dec(v_x_109_);
v_head_112_ = lean_ctor_get(v_x_108_, 0);
lean_inc(v_head_112_);
lean_dec_ref_known(v_x_108_, 2);
return v_head_112_;
}
else
{
lean_object* v_head_113_; lean_object* v___x_114_; 
lean_inc(v_tail_111_);
v_head_113_ = lean_ctor_get(v_x_108_, 0);
lean_inc(v_head_113_);
lean_dec_ref_known(v_x_108_, 2);
v___x_114_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3_spec__7(v_x_109_, v_head_113_, v_tail_111_);
return v___x_114_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__0));
v___x_118_ = lean_string_length(v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__2, &l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__2_once, _init_l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__2);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(lean_object* v_x_125_){
_start:
{
lean_object* v_fst_126_; lean_object* v_snd_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_149_; 
v_fst_126_ = lean_ctor_get(v_x_125_, 0);
v_snd_127_ = lean_ctor_get(v_x_125_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_125_);
if (v_isSharedCheck_149_ == 0)
{
v___x_129_ = v_x_125_;
v_isShared_130_ = v_isSharedCheck_149_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_snd_127_);
lean_inc(v_fst_126_);
lean_dec(v_x_125_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_149_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_131_ = l_Std_Http_Header_instReprName_repr___redArg(v_fst_126_);
v___x_132_ = lean_box(0);
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 1);
lean_ctor_set(v___x_129_, 1, v___x_132_);
lean_ctor_set(v___x_129_, 0, v___x_131_);
v___x_134_ = v___x_129_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_131_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v___x_132_);
v___x_134_ = v_reuseFailAlloc_148_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; 
v___x_135_ = l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8(v_snd_127_);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
v___x_137_ = l_List_reverse___redArg(v___x_136_);
v___x_138_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3));
v___x_139_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3(v___x_137_, v___x_138_);
v___x_140_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3);
v___x_141_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__4));
v___x_142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_139_);
v___x_143_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__5));
v___x_144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
v___x_145_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_140_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = 0;
v___x_147_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___x_146_);
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6_spec__10_spec__16(lean_object* v_x_150_, lean_object* v_x_151_, lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_152_) == 0)
{
lean_dec(v_x_150_);
return v_x_151_;
}
else
{
lean_object* v_head_153_; lean_object* v_tail_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_164_; 
v_head_153_ = lean_ctor_get(v_x_152_, 0);
v_tail_154_ = lean_ctor_get(v_x_152_, 1);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_152_);
if (v_isSharedCheck_164_ == 0)
{
v___x_156_ = v_x_152_;
v_isShared_157_ = v_isSharedCheck_164_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_tail_154_);
lean_inc(v_head_153_);
lean_dec(v_x_152_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_164_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
lean_inc(v_x_150_);
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 5);
lean_ctor_set(v___x_156_, 1, v_x_150_);
lean_ctor_set(v___x_156_, 0, v_x_151_);
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_x_151_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_x_150_);
v___x_159_ = v_reuseFailAlloc_163_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(v_head_153_);
v___x_161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v_x_151_ = v___x_161_;
v_x_152_ = v_tail_154_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6_spec__10(lean_object* v_x_165_, lean_object* v_x_166_, lean_object* v_x_167_){
_start:
{
if (lean_obj_tag(v_x_167_) == 0)
{
lean_dec(v_x_165_);
return v_x_166_;
}
else
{
lean_object* v_head_168_; lean_object* v_tail_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_179_; 
v_head_168_ = lean_ctor_get(v_x_167_, 0);
v_tail_169_ = lean_ctor_get(v_x_167_, 1);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_167_);
if (v_isSharedCheck_179_ == 0)
{
v___x_171_ = v_x_167_;
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_tail_169_);
lean_inc(v_head_168_);
lean_dec(v_x_167_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
lean_inc(v_x_165_);
if (v_isShared_172_ == 0)
{
lean_ctor_set_tag(v___x_171_, 5);
lean_ctor_set(v___x_171_, 1, v_x_165_);
lean_ctor_set(v___x_171_, 0, v_x_166_);
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_x_166_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_x_165_);
v___x_174_ = v_reuseFailAlloc_178_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(v_head_168_);
v___x_176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6_spec__10_spec__16(v_x_165_, v___x_176_, v_tail_169_);
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6(lean_object* v_x_180_, lean_object* v_x_181_){
_start:
{
if (lean_obj_tag(v_x_180_) == 0)
{
lean_object* v___x_182_; 
lean_dec(v_x_181_);
v___x_182_ = lean_box(0);
return v___x_182_;
}
else
{
lean_object* v_tail_183_; 
v_tail_183_ = lean_ctor_get(v_x_180_, 1);
if (lean_obj_tag(v_tail_183_) == 0)
{
lean_object* v_head_184_; lean_object* v___x_185_; 
lean_dec(v_x_181_);
v_head_184_ = lean_ctor_get(v_x_180_, 0);
lean_inc(v_head_184_);
lean_dec_ref_known(v_x_180_, 2);
v___x_185_ = l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(v_head_184_);
return v___x_185_;
}
else
{
lean_object* v_head_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
lean_inc(v_tail_183_);
v_head_186_ = lean_ctor_get(v_x_180_, 0);
lean_inc(v_head_186_);
lean_dec_ref_known(v_x_180_, 2);
v___x_187_ = l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(v_head_186_);
v___x_188_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6_spec__10(v_x_181_, v___x_187_, v_tail_183_);
return v___x_188_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = ((lean_object*)(l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__2));
v___x_194_ = lean_string_length(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_obj_once(&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__3, &l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__3_once, _init_l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__3);
v___x_196_ = lean_nat_to_int(v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg(lean_object* v_a_199_){
_start:
{
if (lean_obj_tag(v_a_199_) == 0)
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__1));
return v___x_200_;
}
else
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; lean_object* v___x_210_; 
v___x_201_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3));
v___x_202_ = l_Std_Format_joinSep___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__6(v_a_199_, v___x_201_);
v___x_203_ = lean_obj_once(&l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__4, &l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__4_once, _init_l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__4);
v___x_204_ = ((lean_object*)(l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg___closed__5));
v___x_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___x_202_);
v___x_206_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__8));
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
v___x_208_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_203_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = 0;
v___x_210_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set_uint8(v___x_210_, sizeof(void*)*1, v___x_209_);
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(lean_object* v_x_211_){
_start:
{
lean_object* v_fst_212_; lean_object* v_snd_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_235_; 
v_fst_212_ = lean_ctor_get(v_x_211_, 0);
v_snd_213_ = lean_ctor_get(v_x_211_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_235_ == 0)
{
v___x_215_ = v_x_211_;
v_isShared_216_ = v_isSharedCheck_235_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_snd_213_);
lean_inc(v_fst_212_);
lean_dec(v_x_211_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_235_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_217_ = l_Std_Http_Header_instReprName_repr___redArg(v_fst_212_);
v___x_218_ = lean_box(0);
if (v_isShared_216_ == 0)
{
lean_ctor_set_tag(v___x_215_, 1);
lean_ctor_set(v___x_215_, 1, v___x_218_);
lean_ctor_set(v___x_215_, 0, v___x_217_);
v___x_220_ = v___x_215_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_218_);
v___x_220_ = v_reuseFailAlloc_234_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; 
v___x_221_ = l_Std_Http_Header_instReprValue_repr___redArg(v_snd_213_);
v___x_222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_220_);
v___x_223_ = l_List_reverse___redArg(v___x_222_);
v___x_224_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3));
v___x_225_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2_spec__3(v___x_223_, v___x_224_);
v___x_226_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__3);
v___x_227_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__4));
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set(v___x_228_, 1, v___x_225_);
v___x_229_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg___closed__5));
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_226_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3_spec__5_spec__10(lean_object* v_x_236_, lean_object* v_x_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
lean_dec(v_x_236_);
return v_x_237_;
}
else
{
lean_object* v_head_239_; lean_object* v_tail_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_250_; 
v_head_239_ = lean_ctor_get(v_x_238_, 0);
v_tail_240_ = lean_ctor_get(v_x_238_, 1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_250_ == 0)
{
v___x_242_ = v_x_238_;
v_isShared_243_ = v_isSharedCheck_250_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_tail_240_);
lean_inc(v_head_239_);
lean_dec(v_x_238_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_250_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
lean_inc(v_x_236_);
if (v_isShared_243_ == 0)
{
lean_ctor_set_tag(v___x_242_, 5);
lean_ctor_set(v___x_242_, 1, v_x_236_);
lean_ctor_set(v___x_242_, 0, v_x_237_);
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_x_237_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_x_236_);
v___x_245_ = v_reuseFailAlloc_249_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(v_head_239_);
v___x_247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v_x_237_ = v___x_247_;
v_x_238_ = v_tail_240_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3_spec__5(lean_object* v_x_251_, lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
if (lean_obj_tag(v_x_253_) == 0)
{
lean_dec(v_x_251_);
return v_x_252_;
}
else
{
lean_object* v_head_254_; lean_object* v_tail_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_265_; 
v_head_254_ = lean_ctor_get(v_x_253_, 0);
v_tail_255_ = lean_ctor_get(v_x_253_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_x_253_);
if (v_isSharedCheck_265_ == 0)
{
v___x_257_ = v_x_253_;
v_isShared_258_ = v_isSharedCheck_265_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_tail_255_);
lean_inc(v_head_254_);
lean_dec(v_x_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_265_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
lean_inc(v_x_251_);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 5);
lean_ctor_set(v___x_257_, 1, v_x_251_);
lean_ctor_set(v___x_257_, 0, v_x_252_);
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_x_252_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v_x_251_);
v___x_260_ = v_reuseFailAlloc_264_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(v_head_254_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3_spec__5_spec__10(v_x_251_, v___x_262_, v_tail_255_);
return v___x_263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
if (lean_obj_tag(v_x_266_) == 0)
{
lean_object* v___x_268_; 
lean_dec(v_x_267_);
v___x_268_ = lean_box(0);
return v___x_268_;
}
else
{
lean_object* v_tail_269_; 
v_tail_269_ = lean_ctor_get(v_x_266_, 1);
if (lean_obj_tag(v_tail_269_) == 0)
{
lean_object* v_head_270_; lean_object* v___x_271_; 
lean_dec(v_x_267_);
v_head_270_ = lean_ctor_get(v_x_266_, 0);
lean_inc(v_head_270_);
lean_dec_ref_known(v_x_266_, 2);
v___x_271_ = l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(v_head_270_);
return v___x_271_;
}
else
{
lean_object* v_head_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
lean_inc(v_tail_269_);
v_head_272_ = lean_ctor_get(v_x_266_, 0);
lean_inc(v_head_272_);
lean_dec_ref_known(v_x_266_, 2);
v___x_273_ = l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(v_head_272_);
v___x_274_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3_spec__5(v_x_267_, v___x_273_, v_tail_269_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0(lean_object* v_xs_275_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_276_ = lean_array_get_size(v_xs_275_);
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lean_nat_dec_eq(v___x_276_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_279_ = lean_array_to_list(v_xs_275_);
v___x_280_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__3));
v___x_281_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__3(v___x_279_, v___x_280_);
v___x_282_ = lean_obj_once(&l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6, &l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6_once, _init_l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__6);
v___x_283_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__7));
v___x_284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v___x_281_);
v___x_285_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__8));
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_282_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = l_Std_Format_fill(v___x_287_);
return v___x_288_;
}
else
{
lean_object* v___x_289_; 
lean_dec_ref(v_xs_275_);
v___x_289_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__10));
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2(lean_object* v_x_290_, lean_object* v_x_291_){
_start:
{
if (lean_obj_tag(v_x_291_) == 0)
{
lean_inc(v_x_290_);
return v_x_290_;
}
else
{
lean_object* v_key_292_; lean_object* v_value_293_; lean_object* v_tail_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_key_292_ = lean_ctor_get(v_x_291_, 0);
v_value_293_ = lean_ctor_get(v_x_291_, 1);
v_tail_294_ = lean_ctor_get(v_x_291_, 2);
v___x_295_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2(v_x_290_, v_tail_294_);
lean_inc(v_value_293_);
lean_inc(v_key_292_);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_key_292_);
lean_ctor_set(v___x_296_, 1, v_value_293_);
v___x_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2___boxed(lean_object* v_x_298_, lean_object* v_x_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2(v_x_298_, v_x_299_);
lean_dec(v_x_299_);
lean_dec(v_x_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__3(lean_object* v_as_301_, size_t v_i_302_, size_t v_stop_303_, lean_object* v_b_304_){
_start:
{
uint8_t v___x_305_; 
v___x_305_ = lean_usize_dec_eq(v_i_302_, v_stop_303_);
if (v___x_305_ == 0)
{
size_t v___x_306_; size_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_306_ = ((size_t)1ULL);
v___x_307_ = lean_usize_sub(v_i_302_, v___x_306_);
v___x_308_ = lean_array_uget_borrowed(v_as_301_, v___x_307_);
v___x_309_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__2(v_b_304_, v___x_308_);
lean_dec(v_b_304_);
v_i_302_ = v___x_307_;
v_b_304_ = v___x_309_;
goto _start;
}
else
{
return v_b_304_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__3___boxed(lean_object* v_as_311_, lean_object* v_i_312_, lean_object* v_stop_313_, lean_object* v_b_314_){
_start:
{
size_t v_i_boxed_315_; size_t v_stop_boxed_316_; lean_object* v_res_317_; 
v_i_boxed_315_ = lean_unbox_usize(v_i_312_);
lean_dec(v_i_312_);
v_stop_boxed_316_ = lean_unbox_usize(v_stop_313_);
lean_dec(v_stop_313_);
v_res_317_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__3(v_as_311_, v_i_boxed_315_, v_stop_boxed_316_, v_b_314_);
lean_dec_ref(v_as_311_);
return v_res_317_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_unsigned_to_nat(11u);
v___x_332_ = lean_nat_to_int(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__17(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__6));
v___x_347_ = lean_string_length(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__17, &l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__17_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__17);
v___x_349_ = lean_nat_to_int(v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg(lean_object* v_x_354_){
_start:
{
lean_object* v_indexes_355_; lean_object* v_entries_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_415_; 
v_indexes_355_ = lean_ctor_get(v_x_354_, 1);
v_entries_356_ = lean_ctor_get(v_x_354_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v_x_354_);
if (v_isSharedCheck_415_ == 0)
{
v___x_358_ = v_x_354_;
v_isShared_359_ = v_isSharedCheck_415_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_indexes_355_);
lean_inc(v_entries_356_);
lean_dec(v_x_354_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_415_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v_buckets_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_413_; 
v_buckets_360_ = lean_ctor_get(v_indexes_355_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v_indexes_355_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; 
v_unused_414_ = lean_ctor_get(v_indexes_355_, 0);
lean_dec(v_unused_414_);
v___x_362_ = v_indexes_355_;
v_isShared_363_ = v_isSharedCheck_413_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_buckets_360_);
lean_dec(v_indexes_355_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_413_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_364_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__4));
v___x_365_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__5));
v___x_366_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__7, &l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__7_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__7);
v___x_367_ = l_Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0(v_entries_356_);
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 4);
lean_ctor_set(v___x_362_, 1, v___x_367_);
lean_ctor_set(v___x_362_, 0, v___x_366_);
v___x_369_ = v___x_362_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v___x_367_);
v___x_369_ = v_reuseFailAlloc_412_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_370_ = 0;
v___x_371_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1, v___x_370_);
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 5);
lean_ctor_set(v___x_358_, 1, v___x_371_);
lean_ctor_set(v___x_358_, 0, v___x_365_);
v___x_373_ = v___x_358_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___x_371_);
v___x_373_ = v_reuseFailAlloc_411_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___y_384_; lean_object* v___x_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_374_ = ((lean_object*)(l_Array_repr___at___00Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5_spec__8___closed__2));
v___x_375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = lean_box(1);
v___x_377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__9));
v___x_379_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___x_364_);
v___x_381_ = lean_unsigned_to_nat(0u);
v___x_382_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__11));
v___x_405_ = lean_box(0);
v___x_406_ = lean_array_get_size(v_buckets_360_);
v___x_407_ = lean_nat_dec_lt(v___x_381_, v___x_406_);
if (v___x_407_ == 0)
{
lean_dec_ref(v_buckets_360_);
v___y_384_ = v___x_405_;
goto v___jp_383_;
}
else
{
size_t v___x_408_; size_t v___x_409_; lean_object* v___x_410_; 
v___x_408_ = lean_usize_of_nat(v___x_406_);
v___x_409_ = ((size_t)0ULL);
v___x_410_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__3(v_buckets_360_, v___x_408_, v___x_409_, v___x_405_);
lean_dec_ref(v_buckets_360_);
v___y_384_ = v___x_410_;
goto v___jp_383_;
}
v___jp_383_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_385_ = l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg(v___y_384_);
v___x_386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_382_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = l_Repr_addAppParen(v___x_386_, v___x_381_);
v___x_388_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_366_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*1, v___x_370_);
v___x_390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_380_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v___x_374_);
v___x_392_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_376_);
v___x_393_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__13));
v___x_394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_392_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_364_);
v___x_396_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__15));
v___x_397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18, &l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18);
v___x_399_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__19));
v___x_400_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___x_397_);
v___x_401_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__20));
v___x_402_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_400_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_398_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set_uint8(v___x_404_, sizeof(void*)*1, v___x_370_);
return v___x_404_;
}
}
}
}
}
}
}
static lean_object* _init_l_Std_Http_instReprHeaders_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_unsigned_to_nat(7u);
v___x_426_ = lean_nat_to_int(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprHeaders_repr___redArg(lean_object* v_x_427_){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_428_ = ((lean_object*)(l_Std_Http_instReprHeaders_repr___redArg___closed__3));
v___x_429_ = lean_obj_once(&l_Std_Http_instReprHeaders_repr___redArg___closed__4, &l_Std_Http_instReprHeaders_repr___redArg___closed__4_once, _init_l_Std_Http_instReprHeaders_repr___redArg___closed__4);
v___x_430_ = l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg(v_x_427_);
v___x_431_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = 0;
v___x_433_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*1, v___x_432_);
v___x_434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_428_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18, &l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__18);
v___x_436_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__19));
v___x_437_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_434_);
v___x_438_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg___closed__20));
v___x_439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_435_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set_uint8(v___x_441_, sizeof(void*)*1, v___x_432_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprHeaders_repr(lean_object* v_x_442_, lean_object* v_prec_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Std_Http_instReprHeaders_repr___redArg(v_x_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprHeaders_repr___boxed(lean_object* v_x_445_, lean_object* v_prec_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_Http_instReprHeaders_repr(v_x_445_, v_prec_446_);
lean_dec(v_prec_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0(lean_object* v_x_448_, lean_object* v_prec_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___redArg(v_x_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0___boxed(lean_object* v_x_451_, lean_object* v_prec_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0(v_x_451_, v_prec_452_);
lean_dec(v_prec_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1(lean_object* v_a_454_, lean_object* v_n_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___redArg(v_a_454_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1___boxed(lean_object* v_a_457_, lean_object* v_n_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1(v_a_457_, v_n_458_);
lean_dec(v_n_458_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2(lean_object* v_x_460_, lean_object* v_x_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___redArg(v_x_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2___boxed(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Prod_repr___at___00Array_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__0_spec__2(v_x_463_, v_x_464_);
lean_dec(v_x_464_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5(lean_object* v_x_466_, lean_object* v_x_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___redArg(v_x_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5___boxed(lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Prod_repr___at___00List_repr___at___00Std_Internal_instReprIndexMultiMap_repr___at___00Std_Http_instReprHeaders_repr_spec__0_spec__1_spec__5(v_x_469_, v_x_470_);
lean_dec(v_x_470_);
return v_res_471_;
}
}
static lean_object* _init_l_Std_Http_instMembershipNameHeaders(void){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_box(0);
return v___x_474_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_instDecidableMemNameHeaders(lean_object* v_name_477_, lean_object* v_h_478_){
_start:
{
lean_object* v___f_479_; lean_object* v___f_480_; uint8_t v___x_481_; 
v___f_479_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_480_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___x_481_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_479_, v___f_480_, v_name_477_, v_h_478_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instDecidableMemNameHeaders___boxed(lean_object* v_name_482_, lean_object* v_h_483_){
_start:
{
uint8_t v_res_484_; lean_object* v_r_485_; 
v_res_484_ = l_Std_Http_instDecidableMemNameHeaders(v_name_482_, v_h_483_);
lean_dec_ref(v_h_483_);
v_r_485_ = lean_box(v_res_484_);
return v_r_485_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get___redArg(lean_object* v_headers_486_, lean_object* v_name_487_){
_start:
{
lean_object* v_entries_488_; lean_object* v_indexes_489_; lean_object* v___f_490_; lean_object* v___f_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_entry_494_; lean_object* v___x_495_; lean_object* v_snd_496_; 
v_entries_488_ = lean_ctor_get(v_headers_486_, 0);
v_indexes_489_ = lean_ctor_get(v_headers_486_, 1);
v___f_490_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_491_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___x_492_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_490_, v___f_491_, v_indexes_489_, v_name_487_);
v___x_493_ = lean_unsigned_to_nat(0u);
v_entry_494_ = lean_array_fget(v___x_492_, v___x_493_);
lean_dec(v___x_492_);
v___x_495_ = lean_array_fget_borrowed(v_entries_488_, v_entry_494_);
lean_dec(v_entry_494_);
v_snd_496_ = lean_ctor_get(v___x_495_, 1);
lean_inc(v_snd_496_);
return v_snd_496_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get___redArg___boxed(lean_object* v_headers_497_, lean_object* v_name_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Std_Http_Headers_get___redArg(v_headers_497_, v_name_498_);
lean_dec_ref(v_headers_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get(lean_object* v_headers_500_, lean_object* v_name_501_, lean_object* v_h_502_){
_start:
{
lean_object* v_entries_503_; lean_object* v_indexes_504_; lean_object* v___f_505_; lean_object* v___f_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_entry_509_; lean_object* v___x_510_; lean_object* v_snd_511_; 
v_entries_503_ = lean_ctor_get(v_headers_500_, 0);
v_indexes_504_ = lean_ctor_get(v_headers_500_, 1);
v___f_505_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_506_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___x_507_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_505_, v___f_506_, v_indexes_504_, v_name_501_);
v___x_508_ = lean_unsigned_to_nat(0u);
v_entry_509_ = lean_array_fget(v___x_507_, v___x_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_array_fget_borrowed(v_entries_503_, v_entry_509_);
lean_dec(v_entry_509_);
v_snd_511_ = lean_ctor_get(v___x_510_, 1);
lean_inc(v_snd_511_);
return v_snd_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get___boxed(lean_object* v_headers_512_, lean_object* v_name_513_, lean_object* v_h_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Std_Http_Headers_get(v_headers_512_, v_name_513_, v_h_514_);
lean_dec_ref(v_headers_512_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll___redArg___lam__0(lean_object* v___x_516_, lean_object* v_entries_517_, lean_object* v_x1_518_, lean_object* v_x2_519_, lean_object* v_x3_520_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_snd_523_; 
v___x_521_ = lean_array_fget_borrowed(v___x_516_, v_x1_518_);
v___x_522_ = lean_array_fget_borrowed(v_entries_517_, v___x_521_);
v_snd_523_ = lean_ctor_get(v___x_522_, 1);
lean_inc(v_snd_523_);
return v_snd_523_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll___redArg___lam__0___boxed(lean_object* v___x_524_, lean_object* v_entries_525_, lean_object* v_x1_526_, lean_object* v_x2_527_, lean_object* v_x3_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_Http_Headers_getAll___redArg___lam__0(v___x_524_, v_entries_525_, v_x1_526_, v_x2_527_, v_x3_528_);
lean_dec(v_x2_527_);
lean_dec(v_x1_526_);
lean_dec_ref(v_entries_525_);
lean_dec(v___x_524_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll___redArg(lean_object* v_headers_549_, lean_object* v_name_550_){
_start:
{
lean_object* v_entries_551_; lean_object* v_indexes_552_; lean_object* v___f_553_; lean_object* v___f_554_; lean_object* v___x_555_; lean_object* v___f_556_; lean_object* v___x_557_; size_t v_sz_558_; size_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_entries_551_ = lean_ctor_get(v_headers_549_, 0);
lean_inc_ref(v_entries_551_);
v_indexes_552_ = lean_ctor_get(v_headers_549_, 1);
lean_inc_ref(v_indexes_552_);
lean_dec_ref(v_headers_549_);
v___f_553_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_554_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___x_555_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_553_, v___f_554_, v_indexes_552_, v_name_550_);
lean_dec_ref(v_indexes_552_);
lean_inc(v___x_555_);
v___f_556_ = lean_alloc_closure((void*)(l_Std_Http_Headers_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_556_, 0, v___x_555_);
lean_closure_set(v___f_556_, 1, v_entries_551_);
v___x_557_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v_sz_558_ = lean_array_size(v___x_555_);
v___x_559_ = ((size_t)0ULL);
v___x_560_ = l_unsafeCast___redArg(v___x_555_);
v___x_561_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_557_, v___x_555_, v___f_556_, v_sz_558_, v___x_559_, v___x_560_);
lean_dec(v___x_555_);
v___x_562_ = l_unsafeCast___redArg(v___x_561_);
lean_dec(v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll(lean_object* v_headers_563_, lean_object* v_name_564_, lean_object* v_h_565_){
_start:
{
lean_object* v_entries_566_; lean_object* v_indexes_567_; lean_object* v___f_568_; lean_object* v___f_569_; lean_object* v___x_570_; lean_object* v___f_571_; lean_object* v___x_572_; size_t v_sz_573_; size_t v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_entries_566_ = lean_ctor_get(v_headers_563_, 0);
lean_inc_ref(v_entries_566_);
v_indexes_567_ = lean_ctor_get(v_headers_563_, 1);
lean_inc_ref(v_indexes_567_);
lean_dec_ref(v_headers_563_);
v___f_568_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_569_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___x_570_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_568_, v___f_569_, v_indexes_567_, v_name_564_);
lean_dec_ref(v_indexes_567_);
lean_inc(v___x_570_);
v___f_571_ = lean_alloc_closure((void*)(l_Std_Http_Headers_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_571_, 0, v___x_570_);
lean_closure_set(v___f_571_, 1, v_entries_566_);
v___x_572_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v_sz_573_ = lean_array_size(v___x_570_);
v___x_574_ = ((size_t)0ULL);
v___x_575_ = l_unsafeCast___redArg(v___x_570_);
v___x_576_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_572_, v___x_570_, v___f_571_, v_sz_573_, v___x_574_, v___x_575_);
lean_dec(v___x_570_);
v___x_577_ = l_unsafeCast___redArg(v___x_576_);
lean_dec(v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getAll_x3f(lean_object* v_headers_578_, lean_object* v_name_579_){
_start:
{
lean_object* v_entries_580_; lean_object* v_indexes_581_; lean_object* v___f_582_; lean_object* v___f_583_; uint8_t v___x_584_; 
v_entries_580_ = lean_ctor_get(v_headers_578_, 0);
lean_inc_ref(v_entries_580_);
v_indexes_581_ = lean_ctor_get(v_headers_578_, 1);
lean_inc_ref(v_indexes_581_);
lean_dec_ref(v_headers_578_);
v___f_582_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_583_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_579_);
v___x_584_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_582_, v___f_583_, v_indexes_581_, v_name_579_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
lean_dec_ref(v_indexes_581_);
lean_dec_ref(v_entries_580_);
lean_dec_ref(v_name_579_);
v___x_585_ = lean_box(0);
return v___x_585_;
}
else
{
lean_object* v___x_586_; lean_object* v___f_587_; lean_object* v___x_588_; size_t v_sz_589_; size_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v_entries_593_; lean_object* v___x_594_; 
v___x_586_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_582_, v___f_583_, v_indexes_581_, v_name_579_);
lean_dec_ref(v_indexes_581_);
lean_inc(v___x_586_);
v___f_587_ = lean_alloc_closure((void*)(l_Std_Http_Headers_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_587_, 0, v___x_586_);
lean_closure_set(v___f_587_, 1, v_entries_580_);
v___x_588_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v_sz_589_ = lean_array_size(v___x_586_);
v___x_590_ = ((size_t)0ULL);
v___x_591_ = l_unsafeCast___redArg(v___x_586_);
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_588_, v___x_586_, v___f_587_, v_sz_589_, v___x_590_, v___x_591_);
lean_dec(v___x_586_);
v_entries_593_ = l_unsafeCast___redArg(v___x_592_);
lean_dec(v___x_592_);
v___x_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_594_, 0, v_entries_593_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x3f(lean_object* v_headers_595_, lean_object* v_name_596_){
_start:
{
lean_object* v_entries_597_; lean_object* v_indexes_598_; lean_object* v___f_599_; lean_object* v___f_600_; uint8_t v___x_601_; 
v_entries_597_ = lean_ctor_get(v_headers_595_, 0);
v_indexes_598_ = lean_ctor_get(v_headers_595_, 1);
v___f_599_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_600_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_596_);
v___x_601_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_599_, v___f_600_, v_indexes_598_, v_name_596_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
lean_dec_ref(v_name_596_);
v___x_602_ = lean_box(0);
return v___x_602_;
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v_entry_605_; lean_object* v___x_606_; lean_object* v_snd_607_; lean_object* v___x_608_; 
v___x_603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_599_, v___f_600_, v_indexes_598_, v_name_596_);
v___x_604_ = lean_unsigned_to_nat(0u);
v_entry_605_ = lean_array_fget(v___x_603_, v___x_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_array_fget_borrowed(v_entries_597_, v_entry_605_);
lean_dec(v_entry_605_);
v_snd_607_ = lean_ctor_get(v___x_606_, 1);
lean_inc(v_snd_607_);
v___x_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_608_, 0, v_snd_607_);
return v___x_608_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x3f___boxed(lean_object* v_headers_609_, lean_object* v_name_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Std_Http_Headers_get_x3f(v_headers_609_, v_name_610_);
lean_dec_ref(v_headers_609_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_hasEntry___lam__1(lean_object* v_value_612_, lean_object* v___x_613_, lean_object* v___x_614_, lean_object* v_a_615_, lean_object* v_x_616_, lean_object* v___y_617_){
_start:
{
uint8_t v___x_618_; 
v___x_618_ = l_Std_Http_Header_instBEqValue_beq(v_a_615_, v_value_612_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; 
lean_dec_ref(v_a_615_);
v___x_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_613_);
return v___x_619_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
lean_dec_ref(v___x_613_);
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v_a_615_);
v___x_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v___x_614_);
v___x_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_hasEntry___lam__1___boxed(lean_object* v_value_624_, lean_object* v___x_625_, lean_object* v___x_626_, lean_object* v_a_627_, lean_object* v_x_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Std_Http_Headers_hasEntry___lam__1(v_value_624_, v___x_625_, v___x_626_, v_a_627_, v_x_628_, v___y_629_);
lean_dec_ref(v___y_629_);
lean_dec_ref(v_value_624_);
return v_res_630_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Headers_hasEntry(lean_object* v_headers_634_, lean_object* v_name_635_, lean_object* v_value_636_){
_start:
{
lean_object* v_entries_637_; lean_object* v_indexes_638_; lean_object* v___f_639_; lean_object* v___f_640_; uint8_t v___x_641_; 
v_entries_637_ = lean_ctor_get(v_headers_634_, 0);
lean_inc_ref(v_entries_637_);
v_indexes_638_ = lean_ctor_get(v_headers_634_, 1);
lean_inc_ref(v_indexes_638_);
lean_dec_ref(v_headers_634_);
v___f_639_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_640_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_635_);
v___x_641_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_639_, v___f_640_, v_indexes_638_, v_name_635_);
if (v___x_641_ == 0)
{
lean_dec_ref(v_indexes_638_);
lean_dec_ref(v_entries_637_);
lean_dec_ref(v_value_636_);
lean_dec_ref(v_name_635_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; lean_object* v___f_643_; lean_object* v___x_644_; size_t v_sz_645_; size_t v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v_entries_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___f_652_; size_t v_sz_653_; lean_object* v___x_654_; lean_object* v_fst_655_; 
v___x_642_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_639_, v___f_640_, v_indexes_638_, v_name_635_);
lean_dec_ref(v_indexes_638_);
lean_inc(v___x_642_);
v___f_643_ = lean_alloc_closure((void*)(l_Std_Http_Headers_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_643_, 0, v___x_642_);
lean_closure_set(v___f_643_, 1, v_entries_637_);
v___x_644_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v_sz_645_ = lean_array_size(v___x_642_);
v___x_646_ = ((size_t)0ULL);
v___x_647_ = l_unsafeCast___redArg(v___x_642_);
v___x_648_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_644_, v___x_642_, v___f_643_, v_sz_645_, v___x_646_, v___x_647_);
lean_dec(v___x_642_);
v_entries_649_ = l_unsafeCast___redArg(v___x_648_);
lean_dec(v___x_648_);
v___x_650_ = lean_box(0);
v___x_651_ = ((lean_object*)(l_Std_Http_Headers_hasEntry___closed__0));
v___f_652_ = lean_alloc_closure((void*)(l_Std_Http_Headers_hasEntry___lam__1___boxed), 6, 3);
lean_closure_set(v___f_652_, 0, v_value_636_);
lean_closure_set(v___f_652_, 1, v___x_651_);
lean_closure_set(v___f_652_, 2, v___x_650_);
v_sz_653_ = lean_array_size(v_entries_649_);
v___x_654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_644_, v_entries_649_, v___f_652_, v_sz_653_, v___x_646_, v___x_651_);
v_fst_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_fst_655_);
lean_dec(v___x_654_);
if (lean_obj_tag(v_fst_655_) == 0)
{
uint8_t v___x_656_; 
v___x_656_ = 0;
return v___x_656_;
}
else
{
lean_object* v_val_657_; 
v_val_657_ = lean_ctor_get(v_fst_655_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v_fst_655_, 1);
if (lean_obj_tag(v_val_657_) == 0)
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
else
{
lean_dec_ref_known(v_val_657_, 1);
return v___x_641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_hasEntry___boxed(lean_object* v_headers_659_, lean_object* v_name_660_, lean_object* v_value_661_){
_start:
{
uint8_t v_res_662_; lean_object* v_r_663_; 
v_res_662_ = l_Std_Http_Headers_hasEntry(v_headers_659_, v_name_660_, v_value_661_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getLast_x3f(lean_object* v_headers_664_, lean_object* v_name_665_){
_start:
{
lean_object* v_entries_666_; lean_object* v_indexes_667_; lean_object* v___f_668_; lean_object* v___f_669_; uint8_t v___x_670_; 
v_entries_666_ = lean_ctor_get(v_headers_664_, 0);
lean_inc_ref(v_entries_666_);
v_indexes_667_ = lean_ctor_get(v_headers_664_, 1);
lean_inc_ref(v_indexes_667_);
lean_dec_ref(v_headers_664_);
v___f_668_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_669_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_665_);
v___x_670_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_668_, v___f_669_, v_indexes_667_, v_name_665_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec_ref(v_indexes_667_);
lean_dec_ref(v_entries_666_);
lean_dec_ref(v_name_665_);
v___x_671_ = lean_box(0);
return v___x_671_;
}
else
{
lean_object* v___x_672_; lean_object* v___f_673_; lean_object* v___x_674_; size_t v_sz_675_; size_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_entries_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_672_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_668_, v___f_669_, v_indexes_667_, v_name_665_);
lean_dec_ref(v_indexes_667_);
lean_inc(v___x_672_);
v___f_673_ = lean_alloc_closure((void*)(l_Std_Http_Headers_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_673_, 0, v___x_672_);
lean_closure_set(v___f_673_, 1, v_entries_666_);
v___x_674_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v_sz_675_ = lean_array_size(v___x_672_);
v___x_676_ = ((size_t)0ULL);
v___x_677_ = l_unsafeCast___redArg(v___x_672_);
v___x_678_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_674_, v___x_672_, v___f_673_, v_sz_675_, v___x_676_, v___x_677_);
lean_dec(v___x_672_);
v_entries_679_ = l_unsafeCast___redArg(v___x_678_);
lean_dec(v___x_678_);
v___x_680_ = lean_array_get_size(v_entries_679_);
v___x_681_ = lean_unsigned_to_nat(1u);
v___x_682_ = lean_nat_sub(v___x_680_, v___x_681_);
v___x_683_ = lean_nat_dec_lt(v___x_682_, v___x_680_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; 
lean_dec(v___x_682_);
lean_dec(v_entries_679_);
v___x_684_ = lean_box(0);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_array_fget(v_entries_679_, v___x_682_);
lean_dec(v___x_682_);
lean_dec(v_entries_679_);
v___x_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getD(lean_object* v_headers_687_, lean_object* v_name_688_, lean_object* v_d_689_){
_start:
{
lean_object* v_entries_690_; lean_object* v_indexes_691_; lean_object* v___f_692_; lean_object* v___f_693_; uint8_t v___x_694_; 
v_entries_690_ = lean_ctor_get(v_headers_687_, 0);
v_indexes_691_ = lean_ctor_get(v_headers_687_, 1);
v___f_692_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_693_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_688_);
v___x_694_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_692_, v___f_693_, v_indexes_691_, v_name_688_);
if (v___x_694_ == 0)
{
lean_dec_ref(v_name_688_);
lean_inc_ref(v_d_689_);
return v_d_689_;
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v_entry_697_; lean_object* v___x_698_; lean_object* v_snd_699_; 
v___x_695_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_692_, v___f_693_, v_indexes_691_, v_name_688_);
v___x_696_ = lean_unsigned_to_nat(0u);
v_entry_697_ = lean_array_fget(v___x_695_, v___x_696_);
lean_dec(v___x_695_);
v___x_698_ = lean_array_fget_borrowed(v_entries_690_, v_entry_697_);
lean_dec(v_entry_697_);
v_snd_699_ = lean_ctor_get(v___x_698_, 1);
lean_inc(v_snd_699_);
return v_snd_699_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_getD___boxed(lean_object* v_headers_700_, lean_object* v_name_701_, lean_object* v_d_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Std_Http_Headers_getD(v_headers_700_, v_name_701_, v_d_702_);
lean_dec_ref(v_d_702_);
lean_dec_ref(v_headers_700_);
return v_res_703_;
}
}
static lean_object* _init_l_Std_Http_Headers_get_x21___closed__4(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_708_ = ((lean_object*)(l_Std_Http_Headers_get_x21___closed__3));
v___x_709_ = lean_unsigned_to_nat(14u);
v___x_710_ = lean_unsigned_to_nat(22u);
v___x_711_ = ((lean_object*)(l_Std_Http_Headers_get_x21___closed__2));
v___x_712_ = ((lean_object*)(l_Std_Http_Headers_get_x21___closed__1));
v___x_713_ = l_mkPanicMessageWithDecl(v___x_712_, v___x_711_, v___x_710_, v___x_709_, v___x_708_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x21(lean_object* v_headers_714_, lean_object* v_name_715_){
_start:
{
lean_object* v_entries_716_; lean_object* v_indexes_717_; lean_object* v___f_718_; lean_object* v___f_719_; uint8_t v___x_720_; 
v_entries_716_ = lean_ctor_get(v_headers_714_, 0);
v_indexes_717_ = lean_ctor_get(v_headers_714_, 1);
v___f_718_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_719_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_715_);
v___x_720_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_718_, v___f_719_, v_indexes_717_, v_name_715_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec_ref(v_name_715_);
v___x_721_ = ((lean_object*)(l_Std_Http_Headers_get_x21___closed__0));
v___x_722_ = lean_obj_once(&l_Std_Http_Headers_get_x21___closed__4, &l_Std_Http_Headers_get_x21___closed__4_once, _init_l_Std_Http_Headers_get_x21___closed__4);
v___x_723_ = l_panic___redArg(v___x_721_, v___x_722_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v_entry_726_; lean_object* v___x_727_; lean_object* v_snd_728_; 
v___x_724_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_718_, v___f_719_, v_indexes_717_, v_name_715_);
v___x_725_ = lean_unsigned_to_nat(0u);
v_entry_726_ = lean_array_fget(v___x_724_, v___x_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_array_fget_borrowed(v_entries_716_, v_entry_726_);
lean_dec(v_entry_726_);
v_snd_728_ = lean_ctor_get(v___x_727_, 1);
lean_inc(v_snd_728_);
return v_snd_728_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_get_x21___boxed(lean_object* v_headers_729_, lean_object* v_name_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Std_Http_Headers_get_x21(v_headers_729_, v_name_730_);
lean_dec_ref(v_headers_729_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert___lam__0(lean_object* v_i_732_, lean_object* v_x_733_){
_start:
{
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_734_ = lean_unsigned_to_nat(1u);
v___x_735_ = lean_mk_empty_array_with_capacity(v___x_734_);
v___x_736_ = lean_array_push(v___x_735_, v_i_732_);
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
else
{
lean_object* v_val_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_746_; 
v_val_738_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_746_ == 0)
{
v___x_740_ = v_x_733_;
v_isShared_741_ = v_isSharedCheck_746_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_val_738_);
lean_dec(v_x_733_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_746_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_742_ = lean_array_push(v_val_738_, v_i_732_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v___x_742_);
v___x_744_ = v___x_740_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert(lean_object* v_headers_747_, lean_object* v_key_748_, lean_object* v_value_749_){
_start:
{
lean_object* v_entries_750_; lean_object* v_indexes_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_765_; 
v_entries_750_ = lean_ctor_get(v_headers_747_, 0);
v_indexes_751_ = lean_ctor_get(v_headers_747_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v_headers_747_);
if (v_isSharedCheck_765_ == 0)
{
v___x_753_ = v_headers_747_;
v_isShared_754_ = v_isSharedCheck_765_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_indexes_751_);
lean_inc(v_entries_750_);
lean_dec(v_headers_747_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_765_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___f_755_; lean_object* v___f_756_; lean_object* v_i_757_; lean_object* v_f_758_; lean_object* v___x_759_; lean_object* v_entries_760_; lean_object* v_indexes_761_; lean_object* v___x_763_; 
v___f_755_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_756_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v_i_757_ = lean_array_get_size(v_entries_750_);
v_f_758_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_758_, 0, v_i_757_);
lean_inc_ref(v_key_748_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v_key_748_);
lean_ctor_set(v___x_759_, 1, v_value_749_);
v_entries_760_ = lean_array_push(v_entries_750_, v___x_759_);
v_indexes_761_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_755_, v___f_756_, v_indexes_751_, v_key_748_, v_f_758_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v_indexes_761_);
lean_ctor_set(v___x_753_, 0, v_entries_760_);
v___x_763_ = v___x_753_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_entries_760_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_indexes_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert_x21(lean_object* v_headers_766_, lean_object* v_name_767_, lean_object* v_value_768_){
_start:
{
lean_object* v_entries_769_; lean_object* v_indexes_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_786_; 
v_entries_769_ = lean_ctor_get(v_headers_766_, 0);
v_indexes_770_ = lean_ctor_get(v_headers_766_, 1);
v_isSharedCheck_786_ = !lean_is_exclusive(v_headers_766_);
if (v_isSharedCheck_786_ == 0)
{
v___x_772_ = v_headers_766_;
v_isShared_773_ = v_isSharedCheck_786_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_indexes_770_);
lean_inc(v_entries_769_);
lean_dec(v_headers_766_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_786_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___f_776_; lean_object* v___f_777_; lean_object* v_i_778_; lean_object* v_f_779_; lean_object* v___x_780_; lean_object* v_entries_781_; lean_object* v_indexes_782_; lean_object* v___x_784_; 
v___x_774_ = l_Std_Http_Header_Name_ofString_x21(v_name_767_);
v___x_775_ = l_Std_Http_Header_Value_ofString_x21(v_value_768_);
v___f_776_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_777_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v_i_778_ = lean_array_get_size(v_entries_769_);
v_f_779_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_779_, 0, v_i_778_);
lean_inc_ref(v___x_774_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_774_);
lean_ctor_set(v___x_780_, 1, v___x_775_);
v_entries_781_ = lean_array_push(v_entries_769_, v___x_780_);
v_indexes_782_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_776_, v___f_777_, v_indexes_770_, v___x_774_, v_f_779_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 1, v_indexes_782_);
lean_ctor_set(v___x_772_, 0, v_entries_781_);
v___x_784_ = v___x_772_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_entries_781_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_indexes_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_insert_x3f(lean_object* v_headers_787_, lean_object* v_name_788_, lean_object* v_value_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Std_Http_Header_Name_ofString_x3f(v_name_788_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; 
lean_dec_ref(v_value_789_);
lean_dec_ref(v_headers_787_);
v___x_791_ = lean_box(0);
return v___x_791_;
}
else
{
lean_object* v_val_792_; lean_object* v___x_793_; 
v_val_792_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_val_792_);
lean_dec_ref_known(v___x_790_, 1);
v___x_793_ = l_Std_Http_Header_Value_ofString_x3f(v_value_789_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_794_; 
lean_dec(v_val_792_);
lean_dec_ref(v_headers_787_);
v___x_794_ = lean_box(0);
return v___x_794_;
}
else
{
lean_object* v_val_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_818_; 
v_val_795_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_818_ == 0)
{
v___x_797_ = v___x_793_;
v_isShared_798_ = v_isSharedCheck_818_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_val_795_);
lean_dec(v___x_793_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_818_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v_entries_799_; lean_object* v_indexes_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_817_; 
v_entries_799_ = lean_ctor_get(v_headers_787_, 0);
v_indexes_800_ = lean_ctor_get(v_headers_787_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_headers_787_);
if (v_isSharedCheck_817_ == 0)
{
v___x_802_ = v_headers_787_;
v_isShared_803_ = v_isSharedCheck_817_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_indexes_800_);
lean_inc(v_entries_799_);
lean_dec(v_headers_787_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_817_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___f_804_; lean_object* v___f_805_; lean_object* v_i_806_; lean_object* v_f_807_; lean_object* v___x_808_; lean_object* v_entries_809_; lean_object* v_indexes_810_; lean_object* v___x_812_; 
v___f_804_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_805_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v_i_806_ = lean_array_get_size(v_entries_799_);
v_f_807_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_807_, 0, v_i_806_);
lean_inc(v_val_792_);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v_val_792_);
lean_ctor_set(v___x_808_, 1, v_val_795_);
v_entries_809_ = lean_array_push(v_entries_799_, v___x_808_);
v_indexes_810_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_804_, v___f_805_, v_indexes_800_, v_val_792_, v_f_807_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 1, v_indexes_810_);
lean_ctor_set(v___x_802_, 0, v_entries_809_);
v___x_812_ = v___x_802_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_entries_809_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_indexes_810_);
v___x_812_ = v_reuseFailAlloc_816_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_814_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 0, v___x_812_);
v___x_814_ = v___x_797_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_insertMany___lam__1(lean_object* v_key_819_, lean_object* v___f_820_, lean_object* v___f_821_, lean_object* v_x1_822_, lean_object* v_x2_823_){
_start:
{
lean_object* v_entries_824_; lean_object* v_indexes_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_837_; 
v_entries_824_ = lean_ctor_get(v_x1_822_, 0);
v_indexes_825_ = lean_ctor_get(v_x1_822_, 1);
v_isSharedCheck_837_ = !lean_is_exclusive(v_x1_822_);
if (v_isSharedCheck_837_ == 0)
{
v___x_827_ = v_x1_822_;
v_isShared_828_ = v_isSharedCheck_837_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_indexes_825_);
lean_inc(v_entries_824_);
lean_dec(v_x1_822_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_837_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_i_829_; lean_object* v_f_830_; lean_object* v___x_831_; lean_object* v_entries_832_; lean_object* v_indexes_833_; lean_object* v___x_835_; 
v_i_829_ = lean_array_get_size(v_entries_824_);
v_f_830_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_830_, 0, v_i_829_);
lean_inc_ref(v_key_819_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v_key_819_);
lean_ctor_set(v___x_831_, 1, v_x2_823_);
v_entries_832_ = lean_array_push(v_entries_824_, v___x_831_);
v_indexes_833_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_820_, v___f_821_, v_indexes_825_, v_key_819_, v_f_830_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 1, v_indexes_833_);
lean_ctor_set(v___x_827_, 0, v_entries_832_);
v___x_835_ = v___x_827_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_entries_832_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_indexes_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_insertMany(lean_object* v_headers_838_, lean_object* v_key_839_, lean_object* v_values_840_){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_array_get_size(v_values_840_);
v___x_843_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v___x_844_ = lean_nat_dec_lt(v___x_841_, v___x_842_);
if (v___x_844_ == 0)
{
lean_dec_ref(v_values_840_);
lean_dec_ref(v_key_839_);
return v_headers_838_;
}
else
{
lean_object* v___f_845_; lean_object* v___f_846_; lean_object* v___f_847_; size_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; 
v___f_845_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_846_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___f_847_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insertMany___lam__1), 5, 3);
lean_closure_set(v___f_847_, 0, v_key_839_);
lean_closure_set(v___f_847_, 1, v___f_845_);
lean_closure_set(v___f_847_, 2, v___f_846_);
v___x_848_ = ((size_t)0ULL);
v___x_849_ = lean_usize_of_nat(v___x_842_);
v___x_850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_843_, v___f_847_, v_values_840_, v___x_848_, v___x_849_, v_headers_838_);
return v___x_850_;
}
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = lean_obj_once(&l_Std_Http_instInhabitedHeaders_default___closed__2, &l_Std_Http_instInhabitedHeaders_default___closed__2_once, _init_l_Std_Http_instInhabitedHeaders_default___closed__2);
v___x_854_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__0));
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
lean_ctor_set(v___x_855_, 1, v___x_853_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg(){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__1, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__1_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___closed__1);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg___boxed(lean_object* v___dummy_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg();
return v_res_859_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0(void){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___redArg();
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0(lean_object* v_00_u03b2_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
return v___x_862_;
}
}
static lean_object* _init_l_Std_Http_Headers_empty(void){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__3(lean_object* v_i_864_, lean_object* v_a_865_, lean_object* v_x_866_){
_start:
{
if (lean_obj_tag(v_x_866_) == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v_val_869_; lean_object* v___x_870_; 
v___x_867_ = lean_box(0);
v___x_868_ = l_Std_Http_Headers_insert___lam__0(v_i_864_, v___x_867_);
v_val_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_val_869_);
lean_dec(v___x_868_);
v___x_870_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_870_, 0, v_a_865_);
lean_ctor_set(v___x_870_, 1, v_val_869_);
lean_ctor_set(v___x_870_, 2, v_x_866_);
return v___x_870_;
}
else
{
lean_object* v_key_871_; lean_object* v_value_872_; lean_object* v_tail_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_888_; 
v_key_871_ = lean_ctor_get(v_x_866_, 0);
v_value_872_ = lean_ctor_get(v_x_866_, 1);
v_tail_873_ = lean_ctor_get(v_x_866_, 2);
v_isSharedCheck_888_ = !lean_is_exclusive(v_x_866_);
if (v_isSharedCheck_888_ == 0)
{
v___x_875_ = v_x_866_;
v_isShared_876_ = v_isSharedCheck_888_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_tail_873_);
lean_inc(v_value_872_);
lean_inc(v_key_871_);
lean_dec(v_x_866_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_888_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
uint8_t v___x_877_; 
v___x_877_ = lean_string_dec_eq(v_key_871_, v_a_865_);
if (v___x_877_ == 0)
{
lean_object* v_tail_878_; lean_object* v___x_880_; 
v_tail_878_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__3(v_i_864_, v_a_865_, v_tail_873_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 2, v_tail_878_);
v___x_880_ = v___x_875_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_key_871_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_value_872_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_tail_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
else
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v_val_884_; lean_object* v___x_886_; 
lean_dec(v_key_871_);
v___x_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_882_, 0, v_value_872_);
v___x_883_ = l_Std_Http_Headers_insert___lam__0(v_i_864_, v___x_882_);
v_val_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_val_884_);
lean_dec(v___x_883_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 1, v_val_884_);
lean_ctor_set(v___x_875_, 0, v_a_865_);
v___x_886_ = v___x_875_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_865_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_val_884_);
lean_ctor_set(v_reuseFailAlloc_887_, 2, v_tail_873_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_x_889_, lean_object* v_x_890_){
_start:
{
if (lean_obj_tag(v_x_890_) == 0)
{
return v_x_889_;
}
else
{
lean_object* v_key_891_; lean_object* v_value_892_; lean_object* v_tail_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_916_; 
v_key_891_ = lean_ctor_get(v_x_890_, 0);
v_value_892_ = lean_ctor_get(v_x_890_, 1);
v_tail_893_ = lean_ctor_get(v_x_890_, 2);
v_isSharedCheck_916_ = !lean_is_exclusive(v_x_890_);
if (v_isSharedCheck_916_ == 0)
{
v___x_895_ = v_x_890_;
v_isShared_896_ = v_isSharedCheck_916_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_tail_893_);
lean_inc(v_value_892_);
lean_inc(v_key_891_);
lean_dec(v_x_890_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_916_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; uint64_t v___x_898_; uint64_t v___x_899_; uint64_t v___x_900_; uint64_t v_fold_901_; uint64_t v___x_902_; uint64_t v___x_903_; uint64_t v___x_904_; size_t v___x_905_; size_t v___x_906_; size_t v___x_907_; size_t v___x_908_; size_t v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_897_ = lean_array_get_size(v_x_889_);
v___x_898_ = lean_string_hash(v_key_891_);
v___x_899_ = 32ULL;
v___x_900_ = lean_uint64_shift_right(v___x_898_, v___x_899_);
v_fold_901_ = lean_uint64_xor(v___x_898_, v___x_900_);
v___x_902_ = 16ULL;
v___x_903_ = lean_uint64_shift_right(v_fold_901_, v___x_902_);
v___x_904_ = lean_uint64_xor(v_fold_901_, v___x_903_);
v___x_905_ = lean_uint64_to_usize(v___x_904_);
v___x_906_ = lean_usize_of_nat(v___x_897_);
v___x_907_ = ((size_t)1ULL);
v___x_908_ = lean_usize_sub(v___x_906_, v___x_907_);
v___x_909_ = lean_usize_land(v___x_905_, v___x_908_);
v___x_910_ = lean_array_uget_borrowed(v_x_889_, v___x_909_);
lean_inc(v___x_910_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 2, v___x_910_);
v___x_912_ = v___x_895_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_key_891_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_value_892_);
lean_ctor_set(v_reuseFailAlloc_915_, 2, v___x_910_);
v___x_912_ = v_reuseFailAlloc_915_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = lean_array_uset(v_x_889_, v___x_909_, v___x_912_);
v_x_889_ = v___x_913_;
v_x_890_ = v_tail_893_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_i_917_, lean_object* v_source_918_, lean_object* v_target_919_){
_start:
{
lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_920_ = lean_array_get_size(v_source_918_);
v___x_921_ = lean_nat_dec_lt(v_i_917_, v___x_920_);
if (v___x_921_ == 0)
{
lean_dec_ref(v_source_918_);
lean_dec(v_i_917_);
return v_target_919_;
}
else
{
lean_object* v_es_922_; lean_object* v___x_923_; lean_object* v_source_924_; lean_object* v_target_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_es_922_ = lean_array_fget(v_source_918_, v_i_917_);
v___x_923_ = lean_box(0);
v_source_924_ = lean_array_fset(v_source_918_, v_i_917_, v___x_923_);
v_target_925_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_target_919_, v_es_922_);
v___x_926_ = lean_unsigned_to_nat(1u);
v___x_927_ = lean_nat_add(v_i_917_, v___x_926_);
lean_dec(v_i_917_);
v_i_917_ = v___x_927_;
v_source_918_ = v_source_924_;
v_target_919_ = v_target_925_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2___redArg(lean_object* v_data_929_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_nbuckets_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_930_ = lean_array_get_size(v_data_929_);
v___x_931_ = lean_unsigned_to_nat(2u);
v_nbuckets_932_ = lean_nat_mul(v___x_930_, v___x_931_);
v___x_933_ = lean_unsigned_to_nat(0u);
v___x_934_ = lean_box(0);
v___x_935_ = lean_mk_array(v_nbuckets_932_, v___x_934_);
v___x_936_ = lean_array_propagate_mark(v_data_929_, v___x_935_);
v___x_937_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3___redArg(v___x_933_, v_data_929_, v___x_936_);
return v___x_937_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg(lean_object* v_a_938_, lean_object* v_x_939_){
_start:
{
if (lean_obj_tag(v_x_939_) == 0)
{
uint8_t v___x_940_; 
v___x_940_ = 0;
return v___x_940_;
}
else
{
lean_object* v_key_941_; lean_object* v_tail_942_; uint8_t v___x_943_; 
v_key_941_ = lean_ctor_get(v_x_939_, 0);
v_tail_942_ = lean_ctor_get(v_x_939_, 2);
v___x_943_ = lean_string_dec_eq(v_key_941_, v_a_938_);
if (v___x_943_ == 0)
{
v_x_939_ = v_tail_942_;
goto _start;
}
else
{
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_a_945_, lean_object* v_x_946_){
_start:
{
uint8_t v_res_947_; lean_object* v_r_948_; 
v_res_947_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg(v_a_945_, v_x_946_);
lean_dec(v_x_946_);
lean_dec_ref(v_a_945_);
v_r_948_ = lean_box(v_res_947_);
return v_r_948_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0(lean_object* v_i_949_, lean_object* v_m_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_size_952_; lean_object* v_buckets_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_1003_; 
v_size_952_ = lean_ctor_get(v_m_950_, 0);
v_buckets_953_ = lean_ctor_get(v_m_950_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_m_950_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_955_ = v_m_950_;
v_isShared_956_ = v_isSharedCheck_1003_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_buckets_953_);
lean_inc(v_size_952_);
lean_dec(v_m_950_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_1003_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_957_; uint64_t v___x_958_; uint64_t v___x_959_; uint64_t v___x_960_; uint64_t v_fold_961_; uint64_t v___x_962_; uint64_t v___x_963_; uint64_t v___x_964_; size_t v___x_965_; size_t v___x_966_; size_t v___x_967_; size_t v___x_968_; size_t v___x_969_; lean_object* v_bkt_970_; uint8_t v___x_971_; 
v___x_957_ = lean_array_get_size(v_buckets_953_);
v___x_958_ = lean_string_hash(v_a_951_);
v___x_959_ = 32ULL;
v___x_960_ = lean_uint64_shift_right(v___x_958_, v___x_959_);
v_fold_961_ = lean_uint64_xor(v___x_958_, v___x_960_);
v___x_962_ = 16ULL;
v___x_963_ = lean_uint64_shift_right(v_fold_961_, v___x_962_);
v___x_964_ = lean_uint64_xor(v_fold_961_, v___x_963_);
v___x_965_ = lean_uint64_to_usize(v___x_964_);
v___x_966_ = lean_usize_of_nat(v___x_957_);
v___x_967_ = ((size_t)1ULL);
v___x_968_ = lean_usize_sub(v___x_966_, v___x_967_);
v___x_969_ = lean_usize_land(v___x_965_, v___x_968_);
v_bkt_970_ = lean_array_uget_borrowed(v_buckets_953_, v___x_969_);
v___x_971_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg(v_a_951_, v_bkt_970_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v_size_x27_975_; lean_object* v___x_976_; lean_object* v_buckets_x27_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_mk_empty_array_with_capacity(v___x_972_);
v___x_974_ = lean_array_push(v___x_973_, v_i_949_);
v_size_x27_975_ = lean_nat_add(v_size_952_, v___x_972_);
lean_dec(v_size_952_);
lean_inc(v_bkt_970_);
v___x_976_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_976_, 0, v_a_951_);
lean_ctor_set(v___x_976_, 1, v___x_974_);
lean_ctor_set(v___x_976_, 2, v_bkt_970_);
v_buckets_x27_977_ = lean_array_uset(v_buckets_953_, v___x_969_, v___x_976_);
v___x_978_ = lean_unsigned_to_nat(4u);
v___x_979_ = lean_nat_mul(v_size_x27_975_, v___x_978_);
v___x_980_ = lean_unsigned_to_nat(3u);
v___x_981_ = lean_nat_div(v___x_979_, v___x_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_array_get_size(v_buckets_x27_977_);
v___x_983_ = lean_nat_dec_le(v___x_981_, v___x_982_);
lean_dec(v___x_981_);
if (v___x_983_ == 0)
{
lean_object* v_val_984_; lean_object* v___x_986_; 
v_val_984_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2___redArg(v_buckets_x27_977_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 1, v_val_984_);
lean_ctor_set(v___x_955_, 0, v_size_x27_975_);
v___x_986_ = v___x_955_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_size_x27_975_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_val_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
else
{
lean_object* v___x_989_; 
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 1, v_buckets_x27_977_);
lean_ctor_set(v___x_955_, 0, v_size_x27_975_);
v___x_989_ = v___x_955_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_size_x27_975_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_buckets_x27_977_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v___x_991_; lean_object* v_buckets_x27_992_; lean_object* v_bkt_x27_993_; lean_object* v___y_995_; uint8_t v___x_1000_; 
lean_inc(v_bkt_970_);
v___x_991_ = lean_box(0);
v_buckets_x27_992_ = lean_array_uset(v_buckets_953_, v___x_969_, v___x_991_);
lean_inc_ref(v_a_951_);
v_bkt_x27_993_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__3(v_i_949_, v_a_951_, v_bkt_970_);
v___x_1000_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg(v_a_951_, v_bkt_x27_993_);
lean_dec_ref(v_a_951_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_nat_sub(v_size_952_, v___x_1001_);
lean_dec(v_size_952_);
v___y_995_ = v___x_1002_;
goto v___jp_994_;
}
else
{
v___y_995_ = v_size_952_;
goto v___jp_994_;
}
v___jp_994_:
{
lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_996_ = lean_array_uset(v_buckets_x27_992_, v___x_969_, v_bkt_x27_993_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 1, v___x_996_);
lean_ctor_set(v___x_955_, 0, v___y_995_);
v___x_998_ = v___x_955_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___y_995_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v___x_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__1___redArg(lean_object* v_x_1004_, lean_object* v_x_1005_){
_start:
{
if (lean_obj_tag(v_x_1005_) == 0)
{
return v_x_1004_;
}
else
{
lean_object* v_head_1006_; lean_object* v_tail_1007_; lean_object* v_fst_1008_; lean_object* v_entries_1009_; lean_object* v_indexes_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1021_; 
v_head_1006_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_head_1006_);
v_tail_1007_ = lean_ctor_get(v_x_1005_, 1);
lean_inc(v_tail_1007_);
lean_dec_ref_known(v_x_1005_, 2);
v_fst_1008_ = lean_ctor_get(v_head_1006_, 0);
lean_inc(v_fst_1008_);
v_entries_1009_ = lean_ctor_get(v_x_1004_, 0);
v_indexes_1010_ = lean_ctor_get(v_x_1004_, 1);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_x_1004_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1012_ = v_x_1004_;
v_isShared_1013_ = v_isSharedCheck_1021_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_indexes_1010_);
lean_inc(v_entries_1009_);
lean_dec(v_x_1004_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1021_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v_i_1014_; lean_object* v_entries_1015_; lean_object* v_indexes_1016_; lean_object* v___x_1018_; 
v_i_1014_ = lean_array_get_size(v_entries_1009_);
v_entries_1015_ = lean_array_push(v_entries_1009_, v_head_1006_);
v_indexes_1016_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0(v_i_1014_, v_indexes_1010_, v_fst_1008_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v_indexes_1016_);
lean_ctor_set(v___x_1012_, 0, v_entries_1015_);
v___x_1018_ = v___x_1012_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_entries_1015_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_indexes_1016_);
v___x_1018_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
v_x_1004_ = v___x_1018_;
v_x_1005_ = v_tail_1007_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0___redArg(lean_object* v_pairs_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
v___x_1024_ = l_List_foldl___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__1___redArg(v___x_1023_, v_pairs_1022_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_ofList(lean_object* v_pairs_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0___redArg(v_pairs_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0(lean_object* v_00_u03b2_1027_, lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_pairs_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0___redArg(v_pairs_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__1(lean_object* v_00_u03b2_1032_, lean_object* v_x_1033_, lean_object* v_x_1034_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_List_foldl___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__1___redArg(v_x_1033_, v_x_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1036_, lean_object* v_a_1037_, lean_object* v_x_1038_){
_start:
{
uint8_t v___x_1039_; 
v___x_1039_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___redArg(v_a_1037_, v_x_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1040_, lean_object* v_a_1041_, lean_object* v_x_1042_){
_start:
{
uint8_t v_res_1043_; lean_object* v_r_1044_; 
v_res_1043_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__1(v_00_u03b2_1040_, v_a_1041_, v_x_1042_);
lean_dec(v_x_1042_);
lean_dec_ref(v_a_1041_);
v_r_1044_ = lean_box(v_res_1043_);
return v_r_1044_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1045_, lean_object* v_data_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2___redArg(v_data_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_1048_, lean_object* v_i_1049_, lean_object* v_source_1050_, lean_object* v_target_1051_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3___redArg(v_i_1049_, v_source_1050_, v_target_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_1053_, lean_object* v_x_1054_, lean_object* v_x_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_x_1054_, v_x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Headers_contains(lean_object* v_headers_1057_, lean_object* v_name_1058_){
_start:
{
lean_object* v_indexes_1059_; lean_object* v___f_1060_; lean_object* v___f_1061_; uint8_t v___x_1062_; 
v_indexes_1059_ = lean_ctor_get(v_headers_1057_, 1);
v___f_1060_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1061_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___x_1062_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1060_, v___f_1061_, v_indexes_1059_, v_name_1058_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_contains___boxed(lean_object* v_headers_1063_, lean_object* v_name_1064_){
_start:
{
uint8_t v_res_1065_; lean_object* v_r_1066_; 
v_res_1065_ = l_Std_Http_Headers_contains(v_headers_1063_, v_name_1064_);
lean_dec_ref(v_headers_1063_);
v_r_1066_ = lean_box(v_res_1065_);
return v_r_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_erase___lam__1(lean_object* v_name_1067_, lean_object* v___f_1068_, lean_object* v___f_1069_, lean_object* v_x1_1070_, lean_object* v_x2_1071_){
_start:
{
lean_object* v_fst_1072_; uint8_t v___x_1073_; 
v_fst_1072_ = lean_ctor_get(v_x2_1071_, 0);
lean_inc(v_fst_1072_);
v___x_1073_ = lean_string_dec_eq(v_name_1067_, v_fst_1072_);
if (v___x_1073_ == 0)
{
lean_object* v_entries_1074_; lean_object* v_indexes_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1086_; 
v_entries_1074_ = lean_ctor_get(v_x1_1070_, 0);
v_indexes_1075_ = lean_ctor_get(v_x1_1070_, 1);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_x1_1070_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1077_ = v_x1_1070_;
v_isShared_1078_ = v_isSharedCheck_1086_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_indexes_1075_);
lean_inc(v_entries_1074_);
lean_dec(v_x1_1070_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1086_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v_i_1079_; lean_object* v_f_1080_; lean_object* v_entries_1081_; lean_object* v_indexes_1082_; lean_object* v___x_1084_; 
v_i_1079_ = lean_array_get_size(v_entries_1074_);
v_f_1080_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_1080_, 0, v_i_1079_);
v_entries_1081_ = lean_array_push(v_entries_1074_, v_x2_1071_);
v_indexes_1082_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1068_, v___f_1069_, v_indexes_1075_, v_fst_1072_, v_f_1080_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 1, v_indexes_1082_);
lean_ctor_set(v___x_1077_, 0, v_entries_1081_);
v___x_1084_ = v___x_1077_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_entries_1081_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_indexes_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_dec(v_fst_1072_);
lean_dec_ref(v_x2_1071_);
lean_dec_ref(v___f_1069_);
lean_dec_ref(v___f_1068_);
return v_x1_1070_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_erase___lam__1___boxed(lean_object* v_name_1087_, lean_object* v___f_1088_, lean_object* v___f_1089_, lean_object* v_x1_1090_, lean_object* v_x2_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Std_Http_Headers_erase___lam__1(v_name_1087_, v___f_1088_, v___f_1089_, v_x1_1090_, v_x2_1091_);
lean_dec_ref(v_name_1087_);
return v_res_1092_;
}
}
static lean_object* _init_l_Std_Http_Headers_erase___closed__0(void){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Std_Internal_IndexMultiMap_empty___redArg();
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_erase(lean_object* v_headers_1094_, lean_object* v_name_1095_){
_start:
{
lean_object* v___f_1096_; lean_object* v___f_1097_; uint8_t v___x_1098_; 
v___f_1096_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1097_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_1095_);
v___x_1098_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1096_, v___f_1097_, v_name_1095_, v_headers_1094_);
if (v___x_1098_ == 0)
{
lean_dec_ref(v_name_1095_);
return v_headers_1094_;
}
else
{
lean_object* v_entries_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_entries_1099_ = lean_ctor_get(v_headers_1094_, 0);
lean_inc_ref(v_entries_1099_);
lean_dec_ref(v_headers_1094_);
v___x_1100_ = lean_obj_once(&l_Std_Http_Headers_erase___closed__0, &l_Std_Http_Headers_erase___closed__0_once, _init_l_Std_Http_Headers_erase___closed__0);
v___x_1101_ = lean_unsigned_to_nat(0u);
v___x_1102_ = lean_array_get_size(v_entries_1099_);
v___x_1103_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v___x_1104_ = lean_nat_dec_lt(v___x_1101_, v___x_1102_);
if (v___x_1104_ == 0)
{
lean_dec_ref(v_entries_1099_);
lean_dec_ref(v_name_1095_);
return v___x_1100_;
}
else
{
lean_object* v___f_1105_; size_t v___x_1106_; size_t v___x_1107_; lean_object* v___x_1108_; 
v___f_1105_ = lean_alloc_closure((void*)(l_Std_Http_Headers_erase___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1105_, 0, v_name_1095_);
lean_closure_set(v___f_1105_, 1, v___f_1096_);
lean_closure_set(v___f_1105_, 2, v___f_1097_);
v___x_1106_ = ((size_t)0ULL);
v___x_1107_ = lean_usize_of_nat(v___x_1102_);
v___x_1108_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1103_, v___f_1105_, v_entries_1099_, v___x_1106_, v___x_1107_, v___x_1100_);
return v___x_1108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_eraseMany___lam__1(lean_object* v___f_1109_, lean_object* v_names_1110_, lean_object* v___f_1111_, lean_object* v_x1_1112_, lean_object* v_x2_1113_){
_start:
{
lean_object* v_fst_1114_; uint8_t v___x_1115_; 
v_fst_1114_ = lean_ctor_get(v_x2_1113_, 0);
lean_inc_n(v_fst_1114_, 2);
lean_inc_ref(v___f_1109_);
v___x_1115_ = l_Array_contains___redArg(v___f_1109_, v_names_1110_, v_fst_1114_);
if (v___x_1115_ == 0)
{
lean_object* v_entries_1116_; lean_object* v_indexes_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1128_; 
v_entries_1116_ = lean_ctor_get(v_x1_1112_, 0);
v_indexes_1117_ = lean_ctor_get(v_x1_1112_, 1);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_x1_1112_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1119_ = v_x1_1112_;
v_isShared_1120_ = v_isSharedCheck_1128_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_indexes_1117_);
lean_inc(v_entries_1116_);
lean_dec(v_x1_1112_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1128_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v_i_1121_; lean_object* v_f_1122_; lean_object* v_entries_1123_; lean_object* v_indexes_1124_; lean_object* v___x_1126_; 
v_i_1121_ = lean_array_get_size(v_entries_1116_);
v_f_1122_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_1122_, 0, v_i_1121_);
v_entries_1123_ = lean_array_push(v_entries_1116_, v_x2_1113_);
v_indexes_1124_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1109_, v___f_1111_, v_indexes_1117_, v_fst_1114_, v_f_1122_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v_indexes_1124_);
lean_ctor_set(v___x_1119_, 0, v_entries_1123_);
v___x_1126_ = v___x_1119_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_entries_1123_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_indexes_1124_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
else
{
lean_dec(v_fst_1114_);
lean_dec_ref(v_x2_1113_);
lean_dec_ref(v___f_1111_);
lean_dec_ref(v___f_1109_);
return v_x1_1112_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_eraseMany(lean_object* v_headers_1129_, lean_object* v_names_1130_){
_start:
{
lean_object* v_entries_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; uint8_t v___x_1136_; 
v_entries_1131_ = lean_ctor_get(v_headers_1129_, 0);
lean_inc_ref(v_entries_1131_);
lean_dec_ref(v_headers_1129_);
v___x_1132_ = lean_obj_once(&l_Std_Http_Headers_erase___closed__0, &l_Std_Http_Headers_erase___closed__0_once, _init_l_Std_Http_Headers_erase___closed__0);
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = lean_array_get_size(v_entries_1131_);
v___x_1135_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v___x_1136_ = lean_nat_dec_lt(v___x_1133_, v___x_1134_);
if (v___x_1136_ == 0)
{
lean_dec_ref(v_entries_1131_);
lean_dec_ref(v_names_1130_);
return v___x_1132_;
}
else
{
lean_object* v___f_1137_; lean_object* v___f_1138_; lean_object* v___f_1139_; size_t v___x_1140_; size_t v___x_1141_; lean_object* v___x_1142_; 
v___f_1137_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1138_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v___f_1139_ = lean_alloc_closure((void*)(l_Std_Http_Headers_eraseMany___lam__1), 5, 3);
lean_closure_set(v___f_1139_, 0, v___f_1137_);
lean_closure_set(v___f_1139_, 1, v_names_1130_);
lean_closure_set(v___f_1139_, 2, v___f_1138_);
v___x_1140_ = ((size_t)0ULL);
v___x_1141_ = lean_usize_of_nat(v___x_1134_);
v___x_1142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1135_, v___f_1139_, v_entries_1131_, v___x_1140_, v___x_1141_, v___x_1132_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_size(lean_object* v_headers_1143_){
_start:
{
lean_object* v_entries_1144_; lean_object* v___x_1145_; 
v_entries_1144_ = lean_ctor_get(v_headers_1143_, 0);
v___x_1145_ = lean_array_get_size(v_entries_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_size___boxed(lean_object* v_headers_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Std_Http_Headers_size(v_headers_1146_);
lean_dec_ref(v_headers_1146_);
return v_res_1147_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Headers_isEmpty(lean_object* v_headers_1148_){
_start:
{
lean_object* v_entries_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; 
v_entries_1149_ = lean_ctor_get(v_headers_1148_, 0);
v___x_1150_ = lean_array_get_size(v_entries_1149_);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = lean_nat_dec_eq(v___x_1150_, v___x_1151_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_isEmpty___boxed(lean_object* v_headers_1153_){
_start:
{
uint8_t v_res_1154_; lean_object* v_r_1155_; 
v_res_1154_ = l_Std_Http_Headers_isEmpty(v_headers_1153_);
lean_dec_ref(v_headers_1153_);
v_r_1155_ = lean_box(v_res_1154_);
return v_r_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg(lean_object* v_as_1156_, size_t v_i_1157_, size_t v_stop_1158_, lean_object* v_b_1159_){
_start:
{
uint8_t v___x_1160_; 
v___x_1160_ = lean_usize_dec_eq(v_i_1157_, v_stop_1158_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v_fst_1162_; lean_object* v_entries_1163_; lean_object* v_indexes_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1177_; 
v___x_1161_ = lean_array_uget_borrowed(v_as_1156_, v_i_1157_);
v_fst_1162_ = lean_ctor_get(v___x_1161_, 0);
v_entries_1163_ = lean_ctor_get(v_b_1159_, 0);
v_indexes_1164_ = lean_ctor_get(v_b_1159_, 1);
v_isSharedCheck_1177_ = !lean_is_exclusive(v_b_1159_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1166_ = v_b_1159_;
v_isShared_1167_ = v_isSharedCheck_1177_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_indexes_1164_);
lean_inc(v_entries_1163_);
lean_dec(v_b_1159_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1177_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v_i_1168_; lean_object* v_entries_1169_; lean_object* v_indexes_1170_; lean_object* v___x_1172_; 
v_i_1168_ = lean_array_get_size(v_entries_1163_);
lean_inc(v___x_1161_);
v_entries_1169_ = lean_array_push(v_entries_1163_, v___x_1161_);
lean_inc(v_fst_1162_);
v_indexes_1170_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0(v_i_1168_, v_indexes_1164_, v_fst_1162_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 1, v_indexes_1170_);
lean_ctor_set(v___x_1166_, 0, v_entries_1169_);
v___x_1172_ = v___x_1166_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_entries_1169_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_indexes_1170_);
v___x_1172_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
size_t v___x_1173_; size_t v___x_1174_; 
v___x_1173_ = ((size_t)1ULL);
v___x_1174_ = lean_usize_add(v_i_1157_, v___x_1173_);
v_i_1157_ = v___x_1174_;
v_b_1159_ = v___x_1172_;
goto _start;
}
}
}
else
{
return v_b_1159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg___boxed(lean_object* v_as_1178_, lean_object* v_i_1179_, lean_object* v_stop_1180_, lean_object* v_b_1181_){
_start:
{
size_t v_i_boxed_1182_; size_t v_stop_boxed_1183_; lean_object* v_res_1184_; 
v_i_boxed_1182_ = lean_unbox_usize(v_i_1179_);
lean_dec(v_i_1179_);
v_stop_boxed_1183_ = lean_unbox_usize(v_stop_1180_);
lean_dec(v_stop_1180_);
v_res_1184_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg(v_as_1178_, v_i_boxed_1182_, v_stop_boxed_1183_, v_b_1181_);
lean_dec_ref(v_as_1178_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg(lean_object* v_m1_1185_, lean_object* v_m2_1186_){
_start:
{
lean_object* v_entries_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; 
v_entries_1187_ = lean_ctor_get(v_m2_1186_, 0);
v___x_1188_ = lean_unsigned_to_nat(0u);
v___x_1189_ = lean_array_get_size(v_entries_1187_);
v___x_1190_ = lean_nat_dec_lt(v___x_1188_, v___x_1189_);
if (v___x_1190_ == 0)
{
return v_m1_1185_;
}
else
{
size_t v___x_1191_; size_t v___x_1192_; lean_object* v___x_1193_; 
v___x_1191_ = ((size_t)0ULL);
v___x_1192_ = lean_usize_of_nat(v___x_1189_);
v___x_1193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg(v_entries_1187_, v___x_1191_, v___x_1192_, v_m1_1185_);
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg___boxed(lean_object* v_m1_1194_, lean_object* v_m2_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg(v_m1_1194_, v_m2_1195_);
lean_dec_ref(v_m2_1195_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_merge(lean_object* v_headers1_1197_, lean_object* v_headers2_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg(v_headers1_1197_, v_headers2_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_merge___boxed(lean_object* v_headers1_1200_, lean_object* v_headers2_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Std_Http_Headers_merge(v_headers1_1200_, v_headers2_1201_);
lean_dec_ref(v_headers2_1201_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0(lean_object* v_00_u03b2_1203_, lean_object* v_inst_1204_, lean_object* v_inst_1205_, lean_object* v_m1_1206_, lean_object* v_m2_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___redArg(v_m1_1206_, v_m2_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0___boxed(lean_object* v_00_u03b2_1209_, lean_object* v_inst_1210_, lean_object* v_inst_1211_, lean_object* v_m1_1212_, lean_object* v_m2_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0(v_00_u03b2_1209_, v_inst_1210_, v_inst_1211_, v_m1_1212_, v_m2_1213_);
lean_dec_ref(v_m2_1213_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0(lean_object* v_00_u03b2_1215_, lean_object* v_as_1216_, size_t v_i_1217_, size_t v_stop_1218_, lean_object* v_b_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___redArg(v_as_1216_, v_i_1217_, v_stop_1218_, v_b_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1221_, lean_object* v_as_1222_, lean_object* v_i_1223_, lean_object* v_stop_1224_, lean_object* v_b_1225_){
_start:
{
size_t v_i_boxed_1226_; size_t v_stop_boxed_1227_; lean_object* v_res_1228_; 
v_i_boxed_1226_ = lean_unbox_usize(v_i_1223_);
lean_dec(v_i_1223_);
v_stop_boxed_1227_ = lean_unbox_usize(v_stop_1224_);
lean_dec(v_stop_1224_);
v_res_1228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_IndexMultiMap_merge___at___00Std_Http_Headers_merge_spec__0_spec__0(v_00_u03b2_1221_, v_as_1222_, v_i_boxed_1226_, v_stop_boxed_1227_, v_b_1225_);
lean_dec_ref(v_as_1222_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___at___00Std_Http_Headers_toList_spec__0___redArg(lean_object* v_map_1229_){
_start:
{
lean_object* v_entries_1230_; lean_object* v___x_1231_; 
v_entries_1230_ = lean_ctor_get(v_map_1229_, 0);
lean_inc_ref(v_entries_1230_);
lean_dec_ref(v_map_1229_);
v___x_1231_ = lean_array_to_list(v_entries_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___at___00Std_Http_Headers_toList_spec__0(lean_object* v_00_u03b2_1232_, lean_object* v_map_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Std_Internal_IndexMultiMap_toList___at___00Std_Http_Headers_toList_spec__0___redArg(v_map_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_toList(lean_object* v_headers_1235_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_Std_Internal_IndexMultiMap_toList___at___00Std_Http_Headers_toList_spec__0___redArg(v_headers_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_toArray(lean_object* v_headers_1237_){
_start:
{
lean_object* v_entries_1238_; 
v_entries_1238_ = lean_ctor_get(v_headers_1237_, 0);
lean_inc_ref(v_entries_1238_);
return v_entries_1238_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_toArray___boxed(lean_object* v_headers_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Std_Http_Headers_toArray(v_headers_1239_);
lean_dec_ref(v_headers_1239_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg(lean_object* v_f_1241_, lean_object* v_as_1242_, size_t v_i_1243_, size_t v_stop_1244_, lean_object* v_b_1245_){
_start:
{
uint8_t v___x_1246_; 
v___x_1246_ = lean_usize_dec_eq(v_i_1243_, v_stop_1244_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v_fst_1248_; lean_object* v_snd_1249_; lean_object* v___x_1250_; size_t v___x_1251_; size_t v___x_1252_; 
v___x_1247_ = lean_array_uget_borrowed(v_as_1242_, v_i_1243_);
v_fst_1248_ = lean_ctor_get(v___x_1247_, 0);
v_snd_1249_ = lean_ctor_get(v___x_1247_, 1);
lean_inc(v_f_1241_);
lean_inc(v_snd_1249_);
lean_inc(v_fst_1248_);
v___x_1250_ = lean_apply_3(v_f_1241_, v_b_1245_, v_fst_1248_, v_snd_1249_);
v___x_1251_ = ((size_t)1ULL);
v___x_1252_ = lean_usize_add(v_i_1243_, v___x_1251_);
v_i_1243_ = v___x_1252_;
v_b_1245_ = v___x_1250_;
goto _start;
}
else
{
lean_dec(v_f_1241_);
return v_b_1245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg___boxed(lean_object* v_f_1254_, lean_object* v_as_1255_, lean_object* v_i_1256_, lean_object* v_stop_1257_, lean_object* v_b_1258_){
_start:
{
size_t v_i_boxed_1259_; size_t v_stop_boxed_1260_; lean_object* v_res_1261_; 
v_i_boxed_1259_ = lean_unbox_usize(v_i_1256_);
lean_dec(v_i_1256_);
v_stop_boxed_1260_ = lean_unbox_usize(v_stop_1257_);
lean_dec(v_stop_1257_);
v_res_1261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg(v_f_1254_, v_as_1255_, v_i_boxed_1259_, v_stop_boxed_1260_, v_b_1258_);
lean_dec_ref(v_as_1255_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold___redArg(lean_object* v_headers_1262_, lean_object* v_init_1263_, lean_object* v_f_1264_){
_start:
{
lean_object* v_entries_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v_entries_1265_ = lean_ctor_get(v_headers_1262_, 0);
v___x_1266_ = lean_unsigned_to_nat(0u);
v___x_1267_ = lean_array_get_size(v_entries_1265_);
v___x_1268_ = lean_nat_dec_lt(v___x_1266_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_dec(v_f_1264_);
return v_init_1263_;
}
else
{
uint8_t v___x_1269_; 
v___x_1269_ = lean_nat_dec_le(v___x_1267_, v___x_1267_);
if (v___x_1269_ == 0)
{
if (v___x_1268_ == 0)
{
lean_dec(v_f_1264_);
return v_init_1263_;
}
else
{
size_t v___x_1270_; size_t v___x_1271_; lean_object* v___x_1272_; 
v___x_1270_ = ((size_t)0ULL);
v___x_1271_ = lean_usize_of_nat(v___x_1267_);
v___x_1272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg(v_f_1264_, v_entries_1265_, v___x_1270_, v___x_1271_, v_init_1263_);
return v___x_1272_;
}
}
else
{
size_t v___x_1273_; size_t v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = ((size_t)0ULL);
v___x_1274_ = lean_usize_of_nat(v___x_1267_);
v___x_1275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg(v_f_1264_, v_entries_1265_, v___x_1273_, v___x_1274_, v_init_1263_);
return v___x_1275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold___redArg___boxed(lean_object* v_headers_1276_, lean_object* v_init_1277_, lean_object* v_f_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Std_Http_Headers_fold___redArg(v_headers_1276_, v_init_1277_, v_f_1278_);
lean_dec_ref(v_headers_1276_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold(lean_object* v_00_u03b1_1280_, lean_object* v_headers_1281_, lean_object* v_init_1282_, lean_object* v_f_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Std_Http_Headers_fold___redArg(v_headers_1281_, v_init_1282_, v_f_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_fold___boxed(lean_object* v_00_u03b1_1285_, lean_object* v_headers_1286_, lean_object* v_init_1287_, lean_object* v_f_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Std_Http_Headers_fold(v_00_u03b1_1285_, v_headers_1286_, v_init_1287_, v_f_1288_);
lean_dec_ref(v_headers_1286_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0(lean_object* v_00_u03b1_1290_, lean_object* v_f_1291_, lean_object* v_as_1292_, size_t v_i_1293_, size_t v_stop_1294_, lean_object* v_b_1295_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___redArg(v_f_1291_, v_as_1292_, v_i_1293_, v_stop_1294_, v_b_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0___boxed(lean_object* v_00_u03b1_1297_, lean_object* v_f_1298_, lean_object* v_as_1299_, lean_object* v_i_1300_, lean_object* v_stop_1301_, lean_object* v_b_1302_){
_start:
{
size_t v_i_boxed_1303_; size_t v_stop_boxed_1304_; lean_object* v_res_1305_; 
v_i_boxed_1303_ = lean_unbox_usize(v_i_1300_);
lean_dec(v_i_1300_);
v_stop_boxed_1304_ = lean_unbox_usize(v_stop_1301_);
lean_dec(v_stop_1301_);
v_res_1305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_fold_spec__0(v_00_u03b1_1297_, v_f_1298_, v_as_1299_, v_i_boxed_1303_, v_stop_boxed_1304_, v_b_1302_);
lean_dec_ref(v_as_1299_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_Headers_mapValues_spec__0(lean_object* v_f_1306_, size_t v_sz_1307_, size_t v_i_1308_, lean_object* v_bs_1309_){
_start:
{
uint8_t v___x_1310_; 
v___x_1310_ = lean_usize_dec_lt(v_i_1308_, v_sz_1307_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; 
lean_dec_ref(v_f_1306_);
v___x_1311_ = l_unsafeCast___redArg(v_bs_1309_);
lean_dec_ref(v_bs_1309_);
return v___x_1311_;
}
else
{
lean_object* v_v_1312_; lean_object* v___x_1313_; lean_object* v_fst_1314_; lean_object* v_snd_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1330_; 
v_v_1312_ = lean_array_uget_borrowed(v_bs_1309_, v_i_1308_);
v___x_1313_ = l_unsafeCast___redArg(v_v_1312_);
v_fst_1314_ = lean_ctor_get(v___x_1313_, 0);
v_snd_1315_ = lean_ctor_get(v___x_1313_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1317_ = v___x_1313_;
v_isShared_1318_ = v_isSharedCheck_1330_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_snd_1315_);
lean_inc(v_fst_1314_);
lean_dec(v___x_1313_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1330_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1319_; lean_object* v_bs_x27_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1319_ = lean_unsigned_to_nat(0u);
v_bs_x27_1320_ = lean_array_uset(v_bs_1309_, v_i_1308_, v___x_1319_);
lean_inc_ref(v_f_1306_);
lean_inc(v_fst_1314_);
v___x_1321_ = lean_apply_2(v_f_1306_, v_fst_1314_, v_snd_1315_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 1, v___x_1321_);
v___x_1323_ = v___x_1317_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_fst_1314_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
size_t v___x_1324_; size_t v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1324_ = ((size_t)1ULL);
v___x_1325_ = lean_usize_add(v_i_1308_, v___x_1324_);
v___x_1326_ = l_unsafeCast___redArg(v___x_1323_);
lean_dec_ref(v___x_1323_);
v___x_1327_ = lean_array_uset(v_bs_x27_1320_, v_i_1308_, v___x_1326_);
v_i_1308_ = v___x_1325_;
v_bs_1309_ = v___x_1327_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_Headers_mapValues_spec__0___boxed(lean_object* v_f_1331_, lean_object* v_sz_1332_, lean_object* v_i_1333_, lean_object* v_bs_1334_){
_start:
{
size_t v_sz_boxed_1335_; size_t v_i_boxed_1336_; lean_object* v_res_1337_; 
v_sz_boxed_1335_ = lean_unbox_usize(v_sz_1332_);
lean_dec(v_sz_1332_);
v_i_boxed_1336_ = lean_unbox_usize(v_i_1333_);
lean_dec(v_i_1333_);
v_res_1337_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_Headers_mapValues_spec__0(v_f_1331_, v_sz_boxed_1335_, v_i_boxed_1336_, v_bs_1334_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(lean_object* v_as_1338_, size_t v_i_1339_, size_t v_stop_1340_, lean_object* v_b_1341_){
_start:
{
uint8_t v___x_1342_; 
v___x_1342_ = lean_usize_dec_eq(v_i_1339_, v_stop_1340_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v_fst_1344_; lean_object* v_entries_1345_; lean_object* v_indexes_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1359_; 
v___x_1343_ = lean_array_uget_borrowed(v_as_1338_, v_i_1339_);
v_fst_1344_ = lean_ctor_get(v___x_1343_, 0);
v_entries_1345_ = lean_ctor_get(v_b_1341_, 0);
v_indexes_1346_ = lean_ctor_get(v_b_1341_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_b_1341_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1348_ = v_b_1341_;
v_isShared_1349_ = v_isSharedCheck_1359_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_indexes_1346_);
lean_inc(v_entries_1345_);
lean_dec(v_b_1341_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1359_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v_i_1350_; lean_object* v_entries_1351_; lean_object* v_indexes_1352_; lean_object* v___x_1354_; 
v_i_1350_ = lean_array_get_size(v_entries_1345_);
lean_inc(v___x_1343_);
v_entries_1351_ = lean_array_push(v_entries_1345_, v___x_1343_);
lean_inc(v_fst_1344_);
v_indexes_1352_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0(v_i_1350_, v_indexes_1346_, v_fst_1344_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 1, v_indexes_1352_);
lean_ctor_set(v___x_1348_, 0, v_entries_1351_);
v___x_1354_ = v___x_1348_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_entries_1351_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_indexes_1352_);
v___x_1354_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
size_t v___x_1355_; size_t v___x_1356_; 
v___x_1355_ = ((size_t)1ULL);
v___x_1356_ = lean_usize_add(v_i_1339_, v___x_1355_);
v_i_1339_ = v___x_1356_;
v_b_1341_ = v___x_1354_;
goto _start;
}
}
}
else
{
return v_b_1341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1___boxed(lean_object* v_as_1360_, lean_object* v_i_1361_, lean_object* v_stop_1362_, lean_object* v_b_1363_){
_start:
{
size_t v_i_boxed_1364_; size_t v_stop_boxed_1365_; lean_object* v_res_1366_; 
v_i_boxed_1364_ = lean_unbox_usize(v_i_1361_);
lean_dec(v_i_1361_);
v_stop_boxed_1365_ = lean_unbox_usize(v_stop_1362_);
lean_dec(v_stop_1362_);
v_res_1366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(v_as_1360_, v_i_boxed_1364_, v_stop_boxed_1365_, v_b_1363_);
lean_dec_ref(v_as_1360_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_mapValues(lean_object* v_headers_1367_, lean_object* v_f_1368_){
_start:
{
lean_object* v_entries_1369_; size_t v_sz_1370_; size_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v_pairs_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; 
v_entries_1369_ = lean_ctor_get(v_headers_1367_, 0);
v_sz_1370_ = lean_array_size(v_entries_1369_);
v___x_1371_ = ((size_t)0ULL);
v___x_1372_ = l_unsafeCast___redArg(v_entries_1369_);
v___x_1373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_Headers_mapValues_spec__0(v_f_1368_, v_sz_1370_, v___x_1371_, v___x_1372_);
v_pairs_1374_ = l_unsafeCast___redArg(v___x_1373_);
lean_dec_ref(v___x_1373_);
v___x_1375_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
v___x_1376_ = lean_unsigned_to_nat(0u);
v___x_1377_ = lean_array_get_size(v_pairs_1374_);
v___x_1378_ = lean_nat_dec_lt(v___x_1376_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_dec(v_pairs_1374_);
return v___x_1375_;
}
else
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_nat_dec_le(v___x_1377_, v___x_1377_);
if (v___x_1379_ == 0)
{
if (v___x_1378_ == 0)
{
lean_dec(v_pairs_1374_);
return v___x_1375_;
}
else
{
size_t v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = lean_usize_of_nat(v___x_1377_);
v___x_1381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(v_pairs_1374_, v___x_1371_, v___x_1380_, v___x_1375_);
lean_dec(v_pairs_1374_);
return v___x_1381_;
}
}
else
{
size_t v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_usize_of_nat(v___x_1377_);
v___x_1383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(v_pairs_1374_, v___x_1371_, v___x_1382_, v___x_1375_);
lean_dec(v_pairs_1374_);
return v___x_1383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_mapValues___boxed(lean_object* v_headers_1384_, lean_object* v_f_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Std_Http_Headers_mapValues(v_headers_1384_, v_f_1385_);
lean_dec_ref(v_headers_1384_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0(lean_object* v_f_1387_, lean_object* v_as_1388_, size_t v_i_1389_, size_t v_stop_1390_, lean_object* v_b_1391_){
_start:
{
lean_object* v___y_1393_; uint8_t v___x_1397_; 
v___x_1397_ = lean_usize_dec_eq(v_i_1389_, v_stop_1390_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; lean_object* v_fst_1399_; lean_object* v_snd_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1410_; 
v___x_1398_ = lean_array_uget(v_as_1388_, v_i_1389_);
v_fst_1399_ = lean_ctor_get(v___x_1398_, 0);
v_snd_1400_ = lean_ctor_get(v___x_1398_, 1);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1402_ = v___x_1398_;
v_isShared_1403_ = v_isSharedCheck_1410_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_snd_1400_);
lean_inc(v_fst_1399_);
lean_dec(v___x_1398_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1410_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; 
lean_inc_ref(v_f_1387_);
lean_inc(v_fst_1399_);
v___x_1404_ = lean_apply_2(v_f_1387_, v_fst_1399_, v_snd_1400_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_del_object(v___x_1402_);
lean_dec(v_fst_1399_);
v___y_1393_ = v_b_1391_;
goto v___jp_1392_;
}
else
{
lean_object* v_val_1405_; lean_object* v___x_1407_; 
v_val_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_val_1405_);
lean_dec_ref_known(v___x_1404_, 1);
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 1, v_val_1405_);
v___x_1407_ = v___x_1402_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_fst_1399_);
lean_ctor_set(v_reuseFailAlloc_1409_, 1, v_val_1405_);
v___x_1407_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_array_push(v_b_1391_, v___x_1407_);
v___y_1393_ = v___x_1408_;
goto v___jp_1392_;
}
}
}
}
else
{
lean_dec_ref(v_f_1387_);
return v_b_1391_;
}
v___jp_1392_:
{
size_t v___x_1394_; size_t v___x_1395_; 
v___x_1394_ = ((size_t)1ULL);
v___x_1395_ = lean_usize_add(v_i_1389_, v___x_1394_);
v_i_1389_ = v___x_1395_;
v_b_1391_ = v___y_1393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0___boxed(lean_object* v_f_1411_, lean_object* v_as_1412_, lean_object* v_i_1413_, lean_object* v_stop_1414_, lean_object* v_b_1415_){
_start:
{
size_t v_i_boxed_1416_; size_t v_stop_boxed_1417_; lean_object* v_res_1418_; 
v_i_boxed_1416_ = lean_unbox_usize(v_i_1413_);
lean_dec(v_i_1413_);
v_stop_boxed_1417_ = lean_unbox_usize(v_stop_1414_);
lean_dec(v_stop_1414_);
v_res_1418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0(v_f_1411_, v_as_1412_, v_i_boxed_1416_, v_stop_boxed_1417_, v_b_1415_);
lean_dec_ref(v_as_1412_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0(lean_object* v_f_1419_, lean_object* v_as_1420_, lean_object* v_start_1421_, lean_object* v_stop_1422_){
_start:
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1423_ = ((lean_object*)(l_Std_Http_instInhabitedHeaders_default___closed__0));
v___x_1424_ = lean_nat_dec_lt(v_start_1421_, v_stop_1422_);
if (v___x_1424_ == 0)
{
lean_dec_ref(v_f_1419_);
return v___x_1423_;
}
else
{
lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1425_ = lean_array_get_size(v_as_1420_);
v___x_1426_ = lean_nat_dec_le(v_stop_1422_, v___x_1425_);
if (v___x_1426_ == 0)
{
uint8_t v___x_1427_; 
v___x_1427_ = lean_nat_dec_lt(v_start_1421_, v___x_1425_);
if (v___x_1427_ == 0)
{
lean_dec_ref(v_f_1419_);
return v___x_1423_;
}
else
{
size_t v___x_1428_; size_t v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = lean_usize_of_nat(v_start_1421_);
v___x_1429_ = lean_usize_of_nat(v___x_1425_);
v___x_1430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0(v_f_1419_, v_as_1420_, v___x_1428_, v___x_1429_, v___x_1423_);
return v___x_1430_;
}
}
else
{
size_t v___x_1431_; size_t v___x_1432_; lean_object* v___x_1433_; 
v___x_1431_ = lean_usize_of_nat(v_start_1421_);
v___x_1432_ = lean_usize_of_nat(v_stop_1422_);
v___x_1433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0_spec__0(v_f_1419_, v_as_1420_, v___x_1431_, v___x_1432_, v___x_1423_);
return v___x_1433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0___boxed(lean_object* v_f_1434_, lean_object* v_as_1435_, lean_object* v_start_1436_, lean_object* v_stop_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0(v_f_1434_, v_as_1435_, v_start_1436_, v_stop_1437_);
lean_dec(v_stop_1437_);
lean_dec(v_start_1436_);
lean_dec_ref(v_as_1435_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_filterMap(lean_object* v_headers_1439_, lean_object* v_f_1440_){
_start:
{
lean_object* v_entries_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v_pairs_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v_entries_1441_ = lean_ctor_get(v_headers_1439_, 0);
v___x_1442_ = lean_unsigned_to_nat(0u);
v___x_1443_ = lean_array_get_size(v_entries_1441_);
v_pairs_1444_ = l_Array_filterMapM___at___00Std_Http_Headers_filterMap_spec__0(v_f_1440_, v_entries_1441_, v___x_1442_, v___x_1443_);
v___x_1445_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
v___x_1446_ = lean_array_get_size(v_pairs_1444_);
v___x_1447_ = lean_nat_dec_lt(v___x_1442_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_dec_ref(v_pairs_1444_);
return v___x_1445_;
}
else
{
uint8_t v___x_1448_; 
v___x_1448_ = lean_nat_dec_le(v___x_1446_, v___x_1446_);
if (v___x_1448_ == 0)
{
if (v___x_1447_ == 0)
{
lean_dec_ref(v_pairs_1444_);
return v___x_1445_;
}
else
{
size_t v___x_1449_; size_t v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = ((size_t)0ULL);
v___x_1450_ = lean_usize_of_nat(v___x_1446_);
v___x_1451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(v_pairs_1444_, v___x_1449_, v___x_1450_, v___x_1445_);
lean_dec_ref(v_pairs_1444_);
return v___x_1451_;
}
}
else
{
size_t v___x_1452_; size_t v___x_1453_; lean_object* v___x_1454_; 
v___x_1452_ = ((size_t)0ULL);
v___x_1453_ = lean_usize_of_nat(v___x_1446_);
v___x_1454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_mapValues_spec__1(v_pairs_1444_, v___x_1452_, v___x_1453_, v___x_1445_);
lean_dec_ref(v_pairs_1444_);
return v___x_1454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_filterMap___boxed(lean_object* v_headers_1455_, lean_object* v_f_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Std_Http_Headers_filterMap(v_headers_1455_, v_f_1456_);
lean_dec_ref(v_headers_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_filter___lam__0(lean_object* v_f_1458_, lean_object* v_k_1459_, lean_object* v_v_1460_){
_start:
{
lean_object* v___x_1461_; uint8_t v___x_1462_; 
lean_inc_ref(v_v_1460_);
v___x_1461_ = lean_apply_2(v_f_1458_, v_k_1459_, v_v_1460_);
v___x_1462_ = lean_unbox(v___x_1461_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; 
lean_dec_ref(v_v_1460_);
v___x_1463_ = lean_box(0);
return v___x_1463_;
}
else
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1464_, 0, v_v_1460_);
return v___x_1464_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_filter(lean_object* v_headers_1465_, lean_object* v_f_1466_){
_start:
{
lean_object* v___f_1467_; lean_object* v___x_1468_; 
v___f_1467_ = lean_alloc_closure((void*)(l_Std_Http_Headers_filter___lam__0), 3, 1);
lean_closure_set(v___f_1467_, 0, v_f_1466_);
v___x_1468_ = l_Std_Http_Headers_filterMap(v_headers_1465_, v___f_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_filter___boxed(lean_object* v_headers_1469_, lean_object* v_f_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Std_Http_Headers_filter(v_headers_1469_, v_f_1470_);
lean_dec_ref(v_headers_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_update_spec__0(lean_object* v_name_1472_, lean_object* v_f_1473_, lean_object* v_as_1474_, size_t v_i_1475_, size_t v_stop_1476_, lean_object* v_b_1477_){
_start:
{
uint8_t v___x_1478_; 
v___x_1478_ = lean_usize_dec_eq(v_i_1475_, v_stop_1476_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; lean_object* v_fst_1480_; lean_object* v_snd_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1507_; 
v___x_1479_ = lean_array_uget(v_as_1474_, v_i_1475_);
v_fst_1480_ = lean_ctor_get(v___x_1479_, 0);
v_snd_1481_ = lean_ctor_get(v___x_1479_, 1);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1483_ = v___x_1479_;
v_isShared_1484_ = v_isSharedCheck_1507_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_snd_1481_);
lean_inc(v_fst_1480_);
lean_dec(v___x_1479_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1507_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___y_1486_; uint8_t v___x_1505_; 
v___x_1505_ = lean_string_dec_eq(v_fst_1480_, v_name_1472_);
if (v___x_1505_ == 0)
{
v___y_1486_ = v_snd_1481_;
goto v___jp_1485_;
}
else
{
lean_object* v___x_1506_; 
lean_inc_ref(v_f_1473_);
v___x_1506_ = lean_apply_1(v_f_1473_, v_snd_1481_);
v___y_1486_ = v___x_1506_;
goto v___jp_1485_;
}
v___jp_1485_:
{
lean_object* v_entries_1487_; lean_object* v_indexes_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1504_; 
v_entries_1487_ = lean_ctor_get(v_b_1477_, 0);
v_indexes_1488_ = lean_ctor_get(v_b_1477_, 1);
v_isSharedCheck_1504_ = !lean_is_exclusive(v_b_1477_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1490_ = v_b_1477_;
v_isShared_1491_ = v_isSharedCheck_1504_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_indexes_1488_);
lean_inc(v_entries_1487_);
lean_dec(v_b_1477_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1504_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v_i_1492_; lean_object* v___x_1494_; 
v_i_1492_ = lean_array_get_size(v_entries_1487_);
lean_inc(v_fst_1480_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 1, v___y_1486_);
v___x_1494_ = v___x_1483_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_fst_1480_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v___y_1486_);
v___x_1494_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
lean_object* v_entries_1495_; lean_object* v_indexes_1496_; lean_object* v___x_1498_; 
v_entries_1495_ = lean_array_push(v_entries_1487_, v___x_1494_);
v_indexes_1496_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Internal_IndexMultiMap_ofList___at___00Std_Http_Headers_ofList_spec__0_spec__0(v_i_1492_, v_indexes_1488_, v_fst_1480_);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 1, v_indexes_1496_);
lean_ctor_set(v___x_1490_, 0, v_entries_1495_);
v___x_1498_ = v___x_1490_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_entries_1495_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_indexes_1496_);
v___x_1498_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
size_t v___x_1499_; size_t v___x_1500_; 
v___x_1499_ = ((size_t)1ULL);
v___x_1500_ = lean_usize_add(v_i_1475_, v___x_1499_);
v_i_1475_ = v___x_1500_;
v_b_1477_ = v___x_1498_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec_ref(v_f_1473_);
return v_b_1477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_update_spec__0___boxed(lean_object* v_name_1508_, lean_object* v_f_1509_, lean_object* v_as_1510_, lean_object* v_i_1511_, lean_object* v_stop_1512_, lean_object* v_b_1513_){
_start:
{
size_t v_i_boxed_1514_; size_t v_stop_boxed_1515_; lean_object* v_res_1516_; 
v_i_boxed_1514_ = lean_unbox_usize(v_i_1511_);
lean_dec(v_i_1511_);
v_stop_boxed_1515_ = lean_unbox_usize(v_stop_1512_);
lean_dec(v_stop_1512_);
v_res_1516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_update_spec__0(v_name_1508_, v_f_1509_, v_as_1510_, v_i_boxed_1514_, v_stop_boxed_1515_, v_b_1513_);
lean_dec_ref(v_as_1510_);
lean_dec_ref(v_name_1508_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_update(lean_object* v_headers_1517_, lean_object* v_name_1518_, lean_object* v_f_1519_){
_start:
{
lean_object* v___f_1520_; lean_object* v___f_1521_; uint8_t v___x_1522_; 
v___f_1520_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1521_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_1518_);
v___x_1522_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1520_, v___f_1521_, v_name_1518_, v_headers_1517_);
if (v___x_1522_ == 0)
{
lean_dec_ref(v_f_1519_);
lean_dec_ref(v_name_1518_);
lean_inc_ref(v_headers_1517_);
return v_headers_1517_;
}
else
{
lean_object* v_entries_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_entries_1523_ = lean_ctor_get(v_headers_1517_, 0);
v___x_1524_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
v___x_1525_ = lean_unsigned_to_nat(0u);
v___x_1526_ = lean_array_get_size(v_entries_1523_);
v___x_1527_ = lean_nat_dec_lt(v___x_1525_, v___x_1526_);
if (v___x_1527_ == 0)
{
lean_dec_ref(v_f_1519_);
lean_dec_ref(v_name_1518_);
return v___x_1524_;
}
else
{
size_t v___x_1528_; size_t v___x_1529_; lean_object* v___x_1530_; 
v___x_1528_ = ((size_t)0ULL);
v___x_1529_ = lean_usize_of_nat(v___x_1526_);
v___x_1530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Headers_update_spec__0(v_name_1518_, v_f_1519_, v_entries_1523_, v___x_1528_, v___x_1529_, v___x_1524_);
lean_dec_ref(v_name_1518_);
return v___x_1530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_update___boxed(lean_object* v_headers_1531_, lean_object* v_name_1532_, lean_object* v_f_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Std_Http_Headers_update(v_headers_1531_, v_name_1532_, v_f_1533_);
lean_dec_ref(v_headers_1531_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_replaceLast(lean_object* v_headers_1535_, lean_object* v_name_1536_, lean_object* v_value_1537_){
_start:
{
lean_object* v_entries_1538_; lean_object* v_indexes_1539_; lean_object* v___f_1540_; lean_object* v___f_1541_; uint8_t v___x_1542_; 
v_entries_1538_ = lean_ctor_get(v_headers_1535_, 0);
v_indexes_1539_ = lean_ctor_get(v_headers_1535_, 1);
v___f_1540_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1541_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
lean_inc_ref(v_name_1536_);
v___x_1542_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1540_, v___f_1541_, v_indexes_1539_, v_name_1536_);
if (v___x_1542_ == 0)
{
lean_dec_ref(v_value_1537_);
lean_dec_ref(v_name_1536_);
return v_headers_1535_;
}
else
{
lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1556_; 
lean_inc_ref(v_indexes_1539_);
lean_inc_ref(v_entries_1538_);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_headers_1535_);
if (v_isSharedCheck_1556_ == 0)
{
lean_object* v_unused_1557_; lean_object* v_unused_1558_; 
v_unused_1557_ = lean_ctor_get(v_headers_1535_, 1);
lean_dec(v_unused_1557_);
v_unused_1558_ = lean_ctor_get(v_headers_1535_, 0);
lean_dec(v_unused_1558_);
v___x_1544_ = v_headers_1535_;
v_isShared_1545_ = v_isSharedCheck_1556_;
goto v_resetjp_1543_;
}
else
{
lean_dec(v_headers_1535_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1556_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_idxs_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v_lastIdx_1550_; lean_object* v___x_1551_; lean_object* v_entries_1552_; lean_object* v___x_1554_; 
lean_inc_ref(v_name_1536_);
v_idxs_1546_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v___f_1540_, v___f_1541_, v_indexes_1539_, v_name_1536_);
v___x_1547_ = lean_array_get_size(v_idxs_1546_);
v___x_1548_ = lean_unsigned_to_nat(1u);
v___x_1549_ = lean_nat_sub(v___x_1547_, v___x_1548_);
v_lastIdx_1550_ = lean_array_fget(v_idxs_1546_, v___x_1549_);
lean_dec(v___x_1549_);
lean_dec(v_idxs_1546_);
v___x_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1551_, 0, v_name_1536_);
lean_ctor_set(v___x_1551_, 1, v_value_1537_);
v_entries_1552_ = lean_array_fset(v_entries_1538_, v_lastIdx_1550_, v___x_1551_);
lean_dec(v_lastIdx_1550_);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v_entries_1552_);
v___x_1554_ = v___x_1544_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_entries_1552_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_indexes_1539_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__0(lean_object* v___x_1559_, lean_object* v___x_1560_, lean_object* v___x_1561_, lean_object* v_fst_1562_, lean_object* v___x_1563_, uint32_t v___x_1564_, lean_object* v___x_1565_, lean_object* v_it_1566_, lean_object* v_acc_1567_, lean_object* v_hP_1568_, lean_object* v_recur_1569_){
_start:
{
lean_object* v_it_1571_; lean_object* v_out_1572_; lean_object* v___y_1588_; uint32_t v___y_1589_; lean_object* v___y_1590_; uint8_t v___y_1591_; lean_object* v_it_1597_; lean_object* v_startInclusive_1598_; lean_object* v_endExclusive_1599_; 
if (lean_obj_tag(v_it_1566_) == 0)
{
lean_object* v_currPos_1606_; lean_object* v_searcher_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1629_; 
v_currPos_1606_ = lean_ctor_get(v_it_1566_, 0);
v_searcher_1607_ = lean_ctor_get(v_it_1566_, 1);
v_isSharedCheck_1629_ = !lean_is_exclusive(v_it_1566_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1609_ = v_it_1566_;
v_isShared_1610_ = v_isSharedCheck_1629_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_searcher_1607_);
lean_inc(v_currPos_1606_);
lean_dec(v_it_1566_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1629_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
uint8_t v_decide_1611_; 
v_decide_1611_ = lean_nat_dec_eq(v_searcher_1607_, v___x_1563_);
if (v_decide_1611_ == 0)
{
uint32_t v___x_1612_; uint8_t v___x_1613_; 
lean_dec(v___x_1563_);
v___x_1612_ = lean_string_utf8_get_fast(v_fst_1562_, v_searcher_1607_);
v___x_1613_ = lean_uint32_dec_eq(v___x_1612_, v___x_1564_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1616_; 
v___x_1614_ = lean_string_utf8_next_fast(v_fst_1562_, v_searcher_1607_);
lean_dec(v_searcher_1607_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 1, v___x_1614_);
v___x_1616_ = v___x_1609_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_currPos_1606_);
lean_ctor_set(v_reuseFailAlloc_1618_, 1, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
lean_object* v___x_1617_; 
v___x_1617_ = lean_apply_4(v_recur_1569_, v___x_1616_, v_acc_1567_, lean_box(0), lean_box(0));
return v___x_1617_;
}
}
else
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v_slice_1622_; lean_object* v_nextIt_1624_; 
v___x_1619_ = lean_string_utf8_next_fast(v_fst_1562_, v_searcher_1607_);
v___x_1620_ = lean_nat_sub(v___x_1619_, v_searcher_1607_);
v___x_1621_ = lean_nat_add(v_searcher_1607_, v___x_1620_);
lean_dec(v___x_1620_);
v_slice_1622_ = l_String_Slice_subslice_x21(v___x_1565_, v_currPos_1606_, v_searcher_1607_);
lean_inc(v___x_1621_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 1, v___x_1621_);
lean_ctor_set(v___x_1609_, 0, v___x_1621_);
v_nextIt_1624_ = v___x_1609_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v___x_1621_);
v_nextIt_1624_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
lean_object* v_startInclusive_1625_; lean_object* v_endExclusive_1626_; 
v_startInclusive_1625_ = lean_ctor_get(v_slice_1622_, 0);
lean_inc(v_startInclusive_1625_);
v_endExclusive_1626_ = lean_ctor_get(v_slice_1622_, 1);
lean_inc(v_endExclusive_1626_);
lean_dec_ref(v_slice_1622_);
v_it_1597_ = v_nextIt_1624_;
v_startInclusive_1598_ = v_startInclusive_1625_;
v_endExclusive_1599_ = v_endExclusive_1626_;
goto v___jp_1596_;
}
}
}
else
{
lean_object* v___x_1628_; 
lean_del_object(v___x_1609_);
lean_dec(v_searcher_1607_);
v___x_1628_ = lean_box(1);
v_it_1597_ = v___x_1628_;
v_startInclusive_1598_ = v_currPos_1606_;
v_endExclusive_1599_ = v___x_1563_;
goto v___jp_1596_;
}
}
}
else
{
lean_dec_ref(v_recur_1569_);
lean_dec(v___x_1563_);
return v_acc_1567_;
}
v___jp_1570_:
{
if (lean_obj_tag(v_acc_1567_) == 0)
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1573_, 0, v_out_1572_);
v___x_1574_ = lean_apply_4(v_recur_1569_, v_it_1571_, v___x_1573_, lean_box(0), lean_box(0));
return v___x_1574_;
}
else
{
lean_object* v_val_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1586_; 
v_val_1575_ = lean_ctor_get(v_acc_1567_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_acc_1567_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1577_ = v_acc_1567_;
v_isShared_1578_ = v_isSharedCheck_1586_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_val_1575_);
lean_dec(v_acc_1567_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1586_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1579_ = lean_string_utf8_extract_fast(v___x_1559_, v___x_1560_, v___x_1561_);
v___x_1580_ = lean_string_append(v_val_1575_, v___x_1579_);
lean_dec_ref(v___x_1579_);
v___x_1581_ = lean_string_append(v___x_1580_, v_out_1572_);
lean_dec_ref(v_out_1572_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1581_);
v___x_1583_ = v___x_1577_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_apply_4(v_recur_1569_, v_it_1571_, v___x_1583_, lean_box(0), lean_box(0));
return v___x_1584_;
}
}
}
}
v___jp_1587_:
{
if (v___y_1591_ == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_string_utf8_set(v___y_1588_, v___x_1560_, v___y_1589_);
v_it_1571_ = v___y_1590_;
v_out_1572_ = v___x_1592_;
goto v___jp_1570_;
}
else
{
uint32_t v___x_1593_; uint32_t v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = 4294967264;
v___x_1594_ = lean_uint32_add(v___y_1589_, v___x_1593_);
v___x_1595_ = lean_string_utf8_set(v___y_1588_, v___x_1560_, v___x_1594_);
v_it_1571_ = v___y_1590_;
v_out_1572_ = v___x_1595_;
goto v___jp_1570_;
}
}
v___jp_1596_:
{
lean_object* v___x_1600_; uint32_t v___x_1601_; uint32_t v___x_1602_; uint8_t v___x_1603_; 
v___x_1600_ = lean_string_utf8_extract_fast(v_fst_1562_, v_startInclusive_1598_, v_endExclusive_1599_);
lean_dec(v_endExclusive_1599_);
lean_dec(v_startInclusive_1598_);
v___x_1601_ = lean_string_utf8_get(v___x_1600_, v___x_1560_);
v___x_1602_ = 97;
v___x_1603_ = lean_uint32_dec_le(v___x_1602_, v___x_1601_);
if (v___x_1603_ == 0)
{
v___y_1588_ = v___x_1600_;
v___y_1589_ = v___x_1601_;
v___y_1590_ = v_it_1597_;
v___y_1591_ = v___x_1603_;
goto v___jp_1587_;
}
else
{
uint32_t v___x_1604_; uint8_t v___x_1605_; 
v___x_1604_ = 122;
v___x_1605_ = lean_uint32_dec_le(v___x_1601_, v___x_1604_);
v___y_1588_ = v___x_1600_;
v___y_1589_ = v___x_1601_;
v___y_1590_ = v_it_1597_;
v___y_1591_ = v___x_1605_;
goto v___jp_1587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__0___boxed(lean_object* v___x_1630_, lean_object* v___x_1631_, lean_object* v___x_1632_, lean_object* v_fst_1633_, lean_object* v___x_1634_, lean_object* v___x_1635_, lean_object* v___x_1636_, lean_object* v_it_1637_, lean_object* v_acc_1638_, lean_object* v_hP_1639_, lean_object* v_recur_1640_){
_start:
{
uint32_t v___x_1834__boxed_1641_; lean_object* v_res_1642_; 
v___x_1834__boxed_1641_ = lean_unbox_uint32(v___x_1635_);
lean_dec(v___x_1635_);
v_res_1642_ = l_Std_Http_Headers_instToString___lam__0(v___x_1630_, v___x_1631_, v___x_1632_, v_fst_1633_, v___x_1634_, v___x_1834__boxed_1641_, v___x_1636_, v_it_1637_, v_acc_1638_, v_hP_1639_, v_recur_1640_);
lean_dec_ref(v___x_1636_);
lean_dec_ref(v_fst_1633_);
lean_dec(v___x_1632_);
lean_dec(v___x_1631_);
lean_dec_ref(v___x_1630_);
return v_res_1642_;
}
}
static lean_object* _init_l_Std_Http_Headers_instToString___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__2));
v___x_1647_ = lean_string_utf8_byte_size(v___x_1646_);
return v___x_1647_;
}
}
static lean_object* _init_l_Std_Http_Headers_instToString___lam__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = 45;
v___x_1649_ = lean_box_uint32(v___x_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__1(lean_object* v_x_1650_){
_start:
{
lean_object* v_fst_1651_; lean_object* v_snd_1652_; lean_object* v___y_1654_; lean_object* v___f_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v_it_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___f_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v_fst_1651_ = lean_ctor_get(v_x_1650_, 0);
lean_inc_n(v_fst_1651_, 2);
v_snd_1652_ = lean_ctor_get(v_x_1650_, 1);
lean_inc(v_snd_1652_);
lean_dec_ref(v_x_1650_);
v___f_1658_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__1));
v___x_1659_ = lean_unsigned_to_nat(0u);
v___x_1660_ = lean_string_utf8_byte_size(v_fst_1651_);
v___x_1661_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1661_, 0, v_fst_1651_);
lean_ctor_set(v___x_1661_, 1, v___x_1659_);
lean_ctor_set(v___x_1661_, 2, v___x_1660_);
lean_inc_ref(v___x_1661_);
v_it_1662_ = l_String_Slice_splitToSubslice___redArg(v___x_1661_, v___f_1658_);
v___x_1663_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__2));
v___x_1664_ = lean_obj_once(&l_Std_Http_Headers_instToString___lam__1___closed__3, &l_Std_Http_Headers_instToString___lam__1___closed__3_once, _init_l_Std_Http_Headers_instToString___lam__1___closed__3);
v___x_1665_ = l_Std_Http_Headers_instToString___lam__1___boxed__const__1;
v___f_1666_ = lean_alloc_closure((void*)(l_Std_Http_Headers_instToString___lam__0___boxed), 11, 7);
lean_closure_set(v___f_1666_, 0, v___x_1663_);
lean_closure_set(v___f_1666_, 1, v___x_1659_);
lean_closure_set(v___f_1666_, 2, v___x_1664_);
lean_closure_set(v___f_1666_, 3, v_fst_1651_);
lean_closure_set(v___f_1666_, 4, v___x_1660_);
lean_closure_set(v___f_1666_, 5, v___x_1665_);
lean_closure_set(v___f_1666_, 6, v___x_1661_);
v___x_1667_ = lean_box(0);
v___x_1668_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1666_, v_it_1662_, v___x_1667_, lean_box(0));
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = ((lean_object*)(l_Std_Http_Headers_get_x21___closed__0));
v___y_1654_ = v___x_1669_;
goto v___jp_1653_;
}
else
{
lean_object* v_val_1670_; 
v_val_1670_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_val_1670_);
lean_dec_ref_known(v___x_1668_, 1);
v___y_1654_ = v_val_1670_;
goto v___jp_1653_;
}
v___jp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__0));
v___x_1656_ = lean_string_append(v___y_1654_, v___x_1655_);
v___x_1657_ = lean_string_append(v___x_1656_, v_snd_1652_);
lean_dec(v_snd_1652_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__2(lean_object* v___f_1672_, lean_object* v_headers_1673_){
_start:
{
lean_object* v_entries_1674_; lean_object* v___x_1675_; size_t v_sz_1676_; size_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v_pairs_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_entries_1674_ = lean_ctor_get(v_headers_1673_, 0);
v___x_1675_ = ((lean_object*)(l_Std_Http_Headers_getAll___redArg___closed__9));
v_sz_1676_ = lean_array_size(v_entries_1674_);
v___x_1677_ = ((size_t)0ULL);
v___x_1678_ = l_unsafeCast___redArg(v_entries_1674_);
v___x_1679_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1675_, v___f_1672_, v_sz_1676_, v___x_1677_, v___x_1678_);
v_pairs_1680_ = l_unsafeCast___redArg(v___x_1679_);
lean_dec(v___x_1679_);
v___x_1681_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__2___closed__0));
v___x_1682_ = lean_array_to_list(v_pairs_1680_);
v___x_1683_ = l_String_intercalate(v___x_1681_, v___x_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instToString___lam__2___boxed(lean_object* v___f_1684_, lean_object* v_headers_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Std_Http_Headers_instToString___lam__2(v___f_1684_, v_headers_1685_);
lean_dec_ref(v_headers_1685_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__0(lean_object* v___x_1691_, lean_object* v___x_1692_, lean_object* v___x_1693_, lean_object* v_name_1694_, lean_object* v___x_1695_, uint32_t v___x_1696_, lean_object* v___x_1697_, lean_object* v_it_1698_, lean_object* v_acc_1699_, lean_object* v_hP_1700_, lean_object* v_recur_1701_){
_start:
{
lean_object* v_it_1703_; lean_object* v_out_1704_; uint32_t v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; uint8_t v___y_1723_; lean_object* v_it_1729_; lean_object* v_startInclusive_1730_; lean_object* v_endExclusive_1731_; 
if (lean_obj_tag(v_it_1698_) == 0)
{
lean_object* v_currPos_1738_; lean_object* v_searcher_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1761_; 
v_currPos_1738_ = lean_ctor_get(v_it_1698_, 0);
v_searcher_1739_ = lean_ctor_get(v_it_1698_, 1);
v_isSharedCheck_1761_ = !lean_is_exclusive(v_it_1698_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1741_ = v_it_1698_;
v_isShared_1742_ = v_isSharedCheck_1761_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_searcher_1739_);
lean_inc(v_currPos_1738_);
lean_dec(v_it_1698_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1761_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
uint8_t v_decide_1743_; 
v_decide_1743_ = lean_nat_dec_eq(v_searcher_1739_, v___x_1695_);
if (v_decide_1743_ == 0)
{
uint32_t v___x_1744_; uint8_t v___x_1745_; 
lean_dec(v___x_1695_);
v___x_1744_ = lean_string_utf8_get_fast(v_name_1694_, v_searcher_1739_);
v___x_1745_ = lean_uint32_dec_eq(v___x_1744_, v___x_1696_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1748_; 
v___x_1746_ = lean_string_utf8_next_fast(v_name_1694_, v_searcher_1739_);
lean_dec(v_searcher_1739_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1746_);
v___x_1748_ = v___x_1741_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_currPos_1738_);
lean_ctor_set(v_reuseFailAlloc_1750_, 1, v___x_1746_);
v___x_1748_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_apply_4(v_recur_1701_, v___x_1748_, v_acc_1699_, lean_box(0), lean_box(0));
return v___x_1749_;
}
}
else
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v_slice_1754_; lean_object* v_nextIt_1756_; 
v___x_1751_ = lean_string_utf8_next_fast(v_name_1694_, v_searcher_1739_);
v___x_1752_ = lean_nat_sub(v___x_1751_, v_searcher_1739_);
v___x_1753_ = lean_nat_add(v_searcher_1739_, v___x_1752_);
lean_dec(v___x_1752_);
v_slice_1754_ = l_String_Slice_subslice_x21(v___x_1697_, v_currPos_1738_, v_searcher_1739_);
lean_inc(v___x_1753_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1753_);
lean_ctor_set(v___x_1741_, 0, v___x_1753_);
v_nextIt_1756_ = v___x_1741_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1753_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v___x_1753_);
v_nextIt_1756_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v_startInclusive_1757_; lean_object* v_endExclusive_1758_; 
v_startInclusive_1757_ = lean_ctor_get(v_slice_1754_, 0);
lean_inc(v_startInclusive_1757_);
v_endExclusive_1758_ = lean_ctor_get(v_slice_1754_, 1);
lean_inc(v_endExclusive_1758_);
lean_dec_ref(v_slice_1754_);
v_it_1729_ = v_nextIt_1756_;
v_startInclusive_1730_ = v_startInclusive_1757_;
v_endExclusive_1731_ = v_endExclusive_1758_;
goto v___jp_1728_;
}
}
}
else
{
lean_object* v___x_1760_; 
lean_del_object(v___x_1741_);
lean_dec(v_searcher_1739_);
v___x_1760_ = lean_box(1);
v_it_1729_ = v___x_1760_;
v_startInclusive_1730_ = v_currPos_1738_;
v_endExclusive_1731_ = v___x_1695_;
goto v___jp_1728_;
}
}
}
else
{
lean_dec_ref(v_recur_1701_);
lean_dec(v___x_1695_);
return v_acc_1699_;
}
v___jp_1702_:
{
if (lean_obj_tag(v_acc_1699_) == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1705_, 0, v_out_1704_);
v___x_1706_ = lean_apply_4(v_recur_1701_, v_it_1703_, v___x_1705_, lean_box(0), lean_box(0));
return v___x_1706_;
}
else
{
lean_object* v_val_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1718_; 
v_val_1707_ = lean_ctor_get(v_acc_1699_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_acc_1699_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1709_ = v_acc_1699_;
v_isShared_1710_ = v_isSharedCheck_1718_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_val_1707_);
lean_dec(v_acc_1699_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1718_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1715_; 
v___x_1711_ = lean_string_utf8_extract_fast(v___x_1691_, v___x_1692_, v___x_1693_);
v___x_1712_ = lean_string_append(v_val_1707_, v___x_1711_);
lean_dec_ref(v___x_1711_);
v___x_1713_ = lean_string_append(v___x_1712_, v_out_1704_);
lean_dec_ref(v_out_1704_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1713_);
v___x_1715_ = v___x_1709_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_apply_4(v_recur_1701_, v_it_1703_, v___x_1715_, lean_box(0), lean_box(0));
return v___x_1716_;
}
}
}
}
v___jp_1719_:
{
if (v___y_1723_ == 0)
{
lean_object* v___x_1724_; 
v___x_1724_ = lean_string_utf8_set(v___y_1721_, v___x_1692_, v___y_1720_);
v_it_1703_ = v___y_1722_;
v_out_1704_ = v___x_1724_;
goto v___jp_1702_;
}
else
{
uint32_t v___x_1725_; uint32_t v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = 4294967264;
v___x_1726_ = lean_uint32_add(v___y_1720_, v___x_1725_);
v___x_1727_ = lean_string_utf8_set(v___y_1721_, v___x_1692_, v___x_1726_);
v_it_1703_ = v___y_1722_;
v_out_1704_ = v___x_1727_;
goto v___jp_1702_;
}
}
v___jp_1728_:
{
lean_object* v___x_1732_; uint32_t v___x_1733_; uint32_t v___x_1734_; uint8_t v___x_1735_; 
v___x_1732_ = lean_string_utf8_extract_fast(v_name_1694_, v_startInclusive_1730_, v_endExclusive_1731_);
lean_dec(v_endExclusive_1731_);
lean_dec(v_startInclusive_1730_);
v___x_1733_ = lean_string_utf8_get(v___x_1732_, v___x_1692_);
v___x_1734_ = 97;
v___x_1735_ = lean_uint32_dec_le(v___x_1734_, v___x_1733_);
if (v___x_1735_ == 0)
{
v___y_1720_ = v___x_1733_;
v___y_1721_ = v___x_1732_;
v___y_1722_ = v_it_1729_;
v___y_1723_ = v___x_1735_;
goto v___jp_1719_;
}
else
{
uint32_t v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = 122;
v___x_1737_ = lean_uint32_dec_le(v___x_1733_, v___x_1736_);
v___y_1720_ = v___x_1733_;
v___y_1721_ = v___x_1732_;
v___y_1722_ = v_it_1729_;
v___y_1723_ = v___x_1737_;
goto v___jp_1719_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__0___boxed(lean_object* v___x_1762_, lean_object* v___x_1763_, lean_object* v___x_1764_, lean_object* v_name_1765_, lean_object* v___x_1766_, lean_object* v___x_1767_, lean_object* v___x_1768_, lean_object* v_it_1769_, lean_object* v_acc_1770_, lean_object* v_hP_1771_, lean_object* v_recur_1772_){
_start:
{
uint32_t v___x_1007__boxed_1773_; lean_object* v_res_1774_; 
v___x_1007__boxed_1773_ = lean_unbox_uint32(v___x_1767_);
lean_dec(v___x_1767_);
v_res_1774_ = l_Std_Http_Headers_instEncodeV11___lam__0(v___x_1762_, v___x_1763_, v___x_1764_, v_name_1765_, v___x_1766_, v___x_1007__boxed_1773_, v___x_1768_, v_it_1769_, v_acc_1770_, v_hP_1771_, v_recur_1772_);
lean_dec_ref(v___x_1768_);
lean_dec_ref(v_name_1765_);
lean_dec(v___x_1764_);
lean_dec(v___x_1763_);
lean_dec_ref(v___x_1762_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__1(lean_object* v_buf_1775_, lean_object* v_name_1776_, lean_object* v_value_1777_){
_start:
{
lean_object* v___y_1779_; lean_object* v___f_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v_it_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___f_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___f_1798_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__1));
v___x_1799_ = lean_unsigned_to_nat(0u);
v___x_1800_ = lean_string_utf8_byte_size(v_name_1776_);
lean_inc_ref(v_name_1776_);
v___x_1801_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1801_, 0, v_name_1776_);
lean_ctor_set(v___x_1801_, 1, v___x_1799_);
lean_ctor_set(v___x_1801_, 2, v___x_1800_);
lean_inc_ref(v___x_1801_);
v_it_1802_ = l_String_Slice_splitToSubslice___redArg(v___x_1801_, v___f_1798_);
v___x_1803_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__2));
v___x_1804_ = lean_obj_once(&l_Std_Http_Headers_instToString___lam__1___closed__3, &l_Std_Http_Headers_instToString___lam__1___closed__3_once, _init_l_Std_Http_Headers_instToString___lam__1___closed__3);
v___x_1805_ = l_Std_Http_Headers_instToString___lam__1___boxed__const__1;
v___f_1806_ = lean_alloc_closure((void*)(l_Std_Http_Headers_instEncodeV11___lam__0___boxed), 11, 7);
lean_closure_set(v___f_1806_, 0, v___x_1803_);
lean_closure_set(v___f_1806_, 1, v___x_1799_);
lean_closure_set(v___f_1806_, 2, v___x_1804_);
lean_closure_set(v___f_1806_, 3, v_name_1776_);
lean_closure_set(v___f_1806_, 4, v___x_1800_);
lean_closure_set(v___f_1806_, 5, v___x_1805_);
lean_closure_set(v___f_1806_, 6, v___x_1801_);
v___x_1807_ = lean_box(0);
v___x_1808_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1806_, v_it_1802_, v___x_1807_, lean_box(0));
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v___x_1809_; 
v___x_1809_ = ((lean_object*)(l_Std_Http_Headers_get_x21___closed__0));
v___y_1779_ = v___x_1809_;
goto v___jp_1778_;
}
else
{
lean_object* v_val_1810_; 
v_val_1810_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_val_1810_);
lean_dec_ref_known(v___x_1808_, 1);
v___y_1779_ = v_val_1810_;
goto v___jp_1778_;
}
v___jp_1778_:
{
lean_object* v_data_1780_; lean_object* v_size_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1797_; 
v_data_1780_ = lean_ctor_get(v_buf_1775_, 0);
v_size_1781_ = lean_ctor_get(v_buf_1775_, 1);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_buf_1775_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1783_ = v_buf_1775_;
v_isShared_1784_ = v_isSharedCheck_1797_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_size_1781_);
lean_inc(v_data_1780_);
lean_dec(v_buf_1775_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1797_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1785_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__1___closed__0));
v___x_1786_ = lean_string_append(v___y_1779_, v___x_1785_);
v___x_1787_ = lean_string_append(v___x_1786_, v_value_1777_);
v___x_1788_ = ((lean_object*)(l_Std_Http_Headers_instToString___lam__2___closed__0));
v___x_1789_ = lean_string_append(v___x_1787_, v___x_1788_);
v___x_1790_ = lean_string_to_utf8(v___x_1789_);
lean_dec_ref(v___x_1789_);
lean_inc_ref(v___x_1790_);
v___x_1791_ = lean_array_push(v_data_1780_, v___x_1790_);
v___x_1792_ = lean_byte_array_size(v___x_1790_);
lean_dec_ref(v___x_1790_);
v___x_1793_ = lean_nat_add(v_size_1781_, v___x_1792_);
lean_dec(v_size_1781_);
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 1, v___x_1793_);
lean_ctor_set(v___x_1783_, 0, v___x_1791_);
v___x_1795_ = v___x_1783_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1791_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__1___boxed(lean_object* v_buf_1811_, lean_object* v_name_1812_, lean_object* v_value_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Std_Http_Headers_instEncodeV11___lam__1(v_buf_1811_, v_name_1812_, v_value_1813_);
lean_dec_ref(v_value_1813_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__2(lean_object* v___f_1815_, lean_object* v_buffer_1816_, lean_object* v_headers_1817_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_Std_Http_Headers_fold___redArg(v_headers_1817_, v_buffer_1816_, v___f_1815_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instEncodeV11___lam__2___boxed(lean_object* v___f_1819_, lean_object* v_buffer_1820_, lean_object* v_headers_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Std_Http_Headers_instEncodeV11___lam__2(v___f_1819_, v_buffer_1820_, v_headers_1821_);
lean_dec_ref(v_headers_1821_);
return v_res_1822_;
}
}
static lean_object* _init_l_Std_Http_Headers_instEmptyCollection(void){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instSingletonProdNameValue___lam__1(lean_object* v_x_1828_){
_start:
{
lean_object* v_fst_1829_; lean_object* v___x_1830_; lean_object* v_entries_1831_; lean_object* v_indexes_1832_; lean_object* v___f_1833_; lean_object* v___f_1834_; lean_object* v_i_1835_; lean_object* v_f_1836_; lean_object* v_entries_1837_; lean_object* v_indexes_1838_; lean_object* v___x_1839_; 
v_fst_1829_ = lean_ctor_get(v_x_1828_, 0);
lean_inc(v_fst_1829_);
v___x_1830_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00Std_Http_Headers_empty_spec__0___closed__0);
v_entries_1831_ = lean_ctor_get(v___x_1830_, 0);
v_indexes_1832_ = lean_ctor_get(v___x_1830_, 1);
v___f_1833_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1834_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v_i_1835_ = lean_array_get_size(v_entries_1831_);
v_f_1836_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_1836_, 0, v_i_1835_);
lean_inc_ref(v_entries_1831_);
v_entries_1837_ = lean_array_push(v_entries_1831_, v_x_1828_);
lean_inc_ref(v_indexes_1832_);
v_indexes_1838_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1833_, v___f_1834_, v_indexes_1832_, v_fst_1829_, v_f_1836_);
v___x_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1839_, 0, v_entries_1837_);
lean_ctor_set(v___x_1839_, 1, v_indexes_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instInsertProdNameValue___lam__1(lean_object* v_x_1842_, lean_object* v_s_1843_){
_start:
{
lean_object* v_fst_1844_; lean_object* v_entries_1845_; lean_object* v_indexes_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1859_; 
v_fst_1844_ = lean_ctor_get(v_x_1842_, 0);
lean_inc(v_fst_1844_);
v_entries_1845_ = lean_ctor_get(v_s_1843_, 0);
v_indexes_1846_ = lean_ctor_get(v_s_1843_, 1);
v_isSharedCheck_1859_ = !lean_is_exclusive(v_s_1843_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1848_ = v_s_1843_;
v_isShared_1849_ = v_isSharedCheck_1859_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_indexes_1846_);
lean_inc(v_entries_1845_);
lean_dec(v_s_1843_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1859_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___f_1850_; lean_object* v___f_1851_; lean_object* v_i_1852_; lean_object* v_f_1853_; lean_object* v_entries_1854_; lean_object* v_indexes_1855_; lean_object* v___x_1857_; 
v___f_1850_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__0));
v___f_1851_ = ((lean_object*)(l_Std_Http_instDecidableMemNameHeaders___closed__1));
v_i_1852_ = lean_array_get_size(v_entries_1845_);
v_f_1853_ = lean_alloc_closure((void*)(l_Std_Http_Headers_insert___lam__0), 2, 1);
lean_closure_set(v_f_1853_, 0, v_i_1852_);
v_entries_1854_ = lean_array_push(v_entries_1845_, v_x_1842_);
v_indexes_1855_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1850_, v___f_1851_, v_indexes_1846_, v_fst_1844_, v_f_1853_);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 1, v_indexes_1855_);
lean_ctor_set(v___x_1848_, 0, v_entries_1854_);
v___x_1857_ = v___x_1848_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_entries_1854_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v_indexes_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__0(lean_object* v_f_1864_, lean_object* v_a_1865_, lean_object* v_x_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_apply_2(v_f_1864_, v_a_1865_, v___y_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__1(lean_object* v_inst_1869_, lean_object* v_00_u03b2_1870_, lean_object* v_headers_1871_, lean_object* v_b_1872_, lean_object* v_f_1873_){
_start:
{
lean_object* v_entries_1874_; lean_object* v___f_1875_; size_t v_sz_1876_; size_t v___x_1877_; lean_object* v___x_1878_; 
v_entries_1874_ = lean_ctor_get(v_headers_1871_, 0);
lean_inc_ref(v_entries_1874_);
lean_dec_ref(v_headers_1871_);
v___f_1875_ = lean_alloc_closure((void*)(l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1875_, 0, v_f_1873_);
v_sz_1876_ = lean_array_size(v_entries_1874_);
v___x_1877_ = ((size_t)0ULL);
v___x_1878_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1869_, v_entries_1874_, v___f_1875_, v_sz_1876_, v___x_1877_, v_b_1872_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg(lean_object* v_inst_1879_){
_start:
{
lean_object* v___f_1880_; 
v___f_1880_ = lean_alloc_closure((void*)(l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1880_, 0, v_inst_1879_);
return v___f_1880_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Headers_instForInProdNameValueOfMonad(lean_object* v_m_1881_, lean_object* v_inst_1882_){
_start:
{
lean_object* v___f_1883_; 
v___f_1883_ = lean_alloc_closure((void*)(l_Std_Http_Headers_instForInProdNameValueOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1883_, 0, v_inst_1882_);
return v___f_1883_;
}
}
lean_object* runtime_initialize_Std_Http_Data_Headers_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers_Name(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers_Value(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Headers(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_Headers_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_instInhabitedHeaders_default = _init_l_Std_Http_instInhabitedHeaders_default();
lean_mark_persistent(l_Std_Http_instInhabitedHeaders_default);
l_Std_Http_instInhabitedHeaders = _init_l_Std_Http_instInhabitedHeaders();
lean_mark_persistent(l_Std_Http_instInhabitedHeaders);
l_Std_Http_instMembershipNameHeaders = _init_l_Std_Http_instMembershipNameHeaders();
lean_mark_persistent(l_Std_Http_instMembershipNameHeaders);
l_Std_Http_Headers_empty = _init_l_Std_Http_Headers_empty();
lean_mark_persistent(l_Std_Http_Headers_empty);
l_Std_Http_Headers_instToString___lam__1___boxed__const__1 = _init_l_Std_Http_Headers_instToString___lam__1___boxed__const__1();
lean_mark_persistent(l_Std_Http_Headers_instToString___lam__1___boxed__const__1);
l_Std_Http_Headers_instEmptyCollection = _init_l_Std_Http_Headers_instEmptyCollection();
lean_mark_persistent(l_Std_Http_Headers_instEmptyCollection);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Headers(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_Headers_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers_Name(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers_Value(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Headers(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_Headers_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Headers(builtin);
}
#ifdef __cplusplus
}
#endif

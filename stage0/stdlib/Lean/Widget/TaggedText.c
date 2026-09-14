// Lean compiler output
// Module: Lean.Widget.TaggedText
// Imports: public import Lean.Server.Rpc.Basic import Init.Data.Array.GetLit import Init.Data.String.Length
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
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_string_pushn(lean_object*, uint32_t, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Std_Format_FlattenAllowability_shouldFlatten(lean_object*);
uint8_t l_Std_Format_instBEqFlattenBehavior_beq(uint8_t, uint8_t);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_posof(lean_object*, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t l_Std_Format_instBEqFlattenAllowability_beq(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedTaggedText_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg();
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Widget.TaggedText.text"};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3;
static lean_once_cell_t l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4;
static const lean_string_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Widget.TaggedText.append"};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7_value;
static const lean_string_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Widget.TaggedText.tag"};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5_value)}};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32_value;
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0 = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1 = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_TaggedText_instInhabitedTaggedState_default = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instInhabitedTaggedState = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__5(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__5, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4_value)} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_get, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2_value)} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7_value;
static const lean_ctor_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5_value)}};
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unreachable"};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___redArg(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___redArg___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Widget_TaggedText_ctorIdx___redArg(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx(lean_object* v_00_u03b1_7_, lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Widget_TaggedText_ctorIdx___redArg(v_x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___boxed(lean_object* v_00_u03b1_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Widget_TaggedText_ctorIdx(v_00_u03b1_10_, v_x_11_);
lean_dec_ref(v_x_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___redArg(lean_object* v_t_13_, lean_object* v_k_14_){
_start:
{
if (lean_obj_tag(v_t_13_) == 2)
{
lean_object* v_a_15_; lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_15_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_15_);
v_a_16_ = lean_ctor_get(v_t_13_, 1);
lean_inc_ref(v_a_16_);
lean_dec_ref_known(v_t_13_, 2);
v___x_17_ = lean_apply_2(v_k_14_, v_a_15_, v_a_16_);
return v___x_17_;
}
else
{
lean_object* v_a_18_; lean_object* v___x_19_; 
v_a_18_ = lean_ctor_get(v_t_13_, 0);
lean_inc_ref(v_a_18_);
lean_dec_ref(v_t_13_);
v___x_19_ = lean_apply_1(v_k_14_, v_a_18_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim(lean_object* v_00_u03b1_20_, lean_object* v_motive__1_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_23_, v_k_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___boxed(lean_object* v_00_u03b1_27_, lean_object* v_motive__1_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Widget_TaggedText_ctorElim(v_00_u03b1_27_, v_motive__1_28_, v_ctorIdx_29_, v_t_30_, v_h_31_, v_k_32_);
lean_dec(v_ctorIdx_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim___redArg(lean_object* v_t_34_, lean_object* v_text_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_34_, v_text_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim(lean_object* v_00_u03b1_37_, lean_object* v_motive__1_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_text_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_39_, v_text_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim___redArg(lean_object* v_t_43_, lean_object* v_append_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_43_, v_append_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim(lean_object* v_00_u03b1_46_, lean_object* v_motive__1_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_append_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_48_, v_append_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim___redArg(lean_object* v_t_52_, lean_object* v_tag_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_52_, v_tag_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim(lean_object* v_00_u03b1_55_, lean_object* v_motive__1_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_tag_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_57_, v_tag_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg(){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1));
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___boxed(lean_object* v___dummy_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Widget_instInhabitedTaggedText_default___redArg();
return v_res_67_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Widget_instInhabitedTaggedText_default___redArg();
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default(lean_object* v_00_u03b1_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg(){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg___boxed(lean_object* v___dummy_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Widget_instInhabitedTaggedText___redArg();
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText(lean_object* v_a_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___redArg___boxed(lean_object* v_inst_77_, lean_object* v_x_78_, lean_object* v_x_79_){
_start:
{
uint8_t v_res_80_; lean_object* v_r_81_; 
v_res_80_ = l_Lean_Widget_instBEqTaggedText_beq___redArg(v_inst_77_, v_x_78_, v_x_79_);
v_r_81_ = lean_box(v_res_80_);
return v_r_81_;
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq___redArg(lean_object* v_inst_82_, lean_object* v_x_83_, lean_object* v_x_84_){
_start:
{
switch(lean_obj_tag(v_x_83_))
{
case 0:
{
lean_dec_ref(v_inst_82_);
if (lean_obj_tag(v_x_84_) == 0)
{
lean_object* v_a_85_; lean_object* v_a_86_; uint8_t v___x_87_; 
v_a_85_ = lean_ctor_get(v_x_83_, 0);
lean_inc_ref(v_a_85_);
lean_dec_ref_known(v_x_83_, 1);
v_a_86_ = lean_ctor_get(v_x_84_, 0);
lean_inc_ref(v_a_86_);
lean_dec_ref_known(v_x_84_, 1);
v___x_87_ = lean_string_dec_eq(v_a_85_, v_a_86_);
lean_dec_ref(v_a_86_);
lean_dec_ref(v_a_85_);
return v___x_87_;
}
else
{
uint8_t v___x_88_; 
lean_dec_ref_known(v_x_83_, 1);
lean_dec_ref(v_x_84_);
v___x_88_ = 0;
return v___x_88_;
}
}
case 1:
{
if (lean_obj_tag(v_x_84_) == 1)
{
lean_object* v_a_89_; lean_object* v_a_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v_a_89_ = lean_ctor_get(v_x_83_, 0);
lean_inc_ref(v_a_89_);
lean_dec_ref_known(v_x_83_, 1);
v_a_90_ = lean_ctor_get(v_x_84_, 0);
lean_inc_ref(v_a_90_);
lean_dec_ref_known(v_x_84_, 1);
v___x_91_ = lean_array_get_size(v_a_89_);
v___x_92_ = lean_array_get_size(v_a_90_);
v___x_93_ = lean_nat_dec_eq(v___x_91_, v___x_92_);
if (v___x_93_ == 0)
{
lean_dec_ref(v_a_90_);
lean_dec_ref(v_a_89_);
lean_dec_ref(v_inst_82_);
return v___x_93_;
}
else
{
lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = lean_alloc_closure((void*)(l_Lean_Widget_instBEqTaggedText_beq___redArg___boxed), 3, 1);
lean_closure_set(v___x_94_, 0, v_inst_82_);
v___x_95_ = l_Array_isEqvAux___redArg(v_a_89_, v_a_90_, v___x_94_, v___x_91_);
lean_dec_ref(v_a_90_);
lean_dec_ref(v_a_89_);
return v___x_95_;
}
}
else
{
uint8_t v___x_96_; 
lean_dec_ref_known(v_x_83_, 1);
lean_dec_ref(v_x_84_);
lean_dec_ref(v_inst_82_);
v___x_96_ = 0;
return v___x_96_;
}
}
default: 
{
if (lean_obj_tag(v_x_84_) == 2)
{
lean_object* v_a_97_; lean_object* v_a_98_; lean_object* v_a_99_; lean_object* v_a_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v_a_97_ = lean_ctor_get(v_x_83_, 0);
lean_inc(v_a_97_);
v_a_98_ = lean_ctor_get(v_x_83_, 1);
lean_inc_ref(v_a_98_);
lean_dec_ref_known(v_x_83_, 2);
v_a_99_ = lean_ctor_get(v_x_84_, 0);
lean_inc(v_a_99_);
v_a_100_ = lean_ctor_get(v_x_84_, 1);
lean_inc_ref(v_a_100_);
lean_dec_ref_known(v_x_84_, 2);
lean_inc_ref(v_inst_82_);
v___x_101_ = lean_apply_2(v_inst_82_, v_a_97_, v_a_99_);
v___x_102_ = lean_unbox(v___x_101_);
if (v___x_102_ == 0)
{
uint8_t v___x_103_; 
lean_dec_ref(v_a_100_);
lean_dec_ref(v_a_98_);
lean_dec_ref(v_inst_82_);
v___x_103_ = lean_unbox(v___x_101_);
return v___x_103_;
}
else
{
v_x_83_ = v_a_98_;
v_x_84_ = v_a_100_;
goto _start;
}
}
else
{
uint8_t v___x_105_; 
lean_dec_ref_known(v_x_83_, 2);
lean_dec_ref(v_x_84_);
lean_dec_ref(v_inst_82_);
v___x_105_ = 0;
return v___x_105_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq(lean_object* v_00_u03b1_106_, lean_object* v_inst_107_, lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
uint8_t v___x_110_; 
v___x_110_ = l_Lean_Widget_instBEqTaggedText_beq___redArg(v_inst_107_, v_x_108_, v_x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___boxed(lean_object* v_00_u03b1_111_, lean_object* v_inst_112_, lean_object* v_x_113_, lean_object* v_x_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Lean_Widget_instBEqTaggedText_beq(v_00_u03b1_111_, v_inst_112_, v_x_113_, v_x_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText___redArg(lean_object* v_inst_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_alloc_closure((void*)(l_Lean_Widget_instBEqTaggedText_beq___boxed), 4, 2);
lean_closure_set(v___x_118_, 0, lean_box(0));
lean_closure_set(v___x_118_, 1, v_inst_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText(lean_object* v_00_u03b1_119_, lean_object* v_inst_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_alloc_closure((void*)(l_Lean_Widget_instBEqTaggedText_beq___boxed), 4, 2);
lean_closure_set(v___x_121_, 0, lean_box(0));
lean_closure_set(v___x_121_, 1, v_inst_120_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(2u);
v___x_129_ = lean_nat_to_int(v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(1u);
v___x_131_ = lean_nat_to_int(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___boxed(lean_object* v_inst_144_, lean_object* v_x_145_, lean_object* v_prec_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Widget_instReprTaggedText_repr___redArg(v_inst_144_, v_x_145_, v_prec_146_);
lean_dec(v_prec_146_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg(lean_object* v_inst_148_, lean_object* v_x_149_, lean_object* v_prec_150_){
_start:
{
switch(lean_obj_tag(v_x_149_))
{
case 0:
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_inst_148_);
v_a_151_ = lean_ctor_get(v_x_149_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v_x_149_);
if (v_isSharedCheck_171_ == 0)
{
v___x_153_ = v_x_149_;
v_isShared_154_ = v_isSharedCheck_171_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v_x_149_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_171_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___y_156_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(1024u);
v___x_168_ = lean_nat_dec_le(v___x_167_, v_prec_150_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3);
v___y_156_ = v___x_169_;
goto v___jp_155_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4);
v___y_156_ = v___x_170_;
goto v___jp_155_;
}
v___jp_155_:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_157_ = ((lean_object*)(l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2));
v___x_158_ = l_String_quote(v_a_151_);
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 3);
lean_ctor_set(v___x_153_, 0, v___x_158_);
v___x_160_ = v___x_153_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_166_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_157_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
lean_inc(v___y_156_);
v___x_162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_162_, 0, v___y_156_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = 0;
v___x_164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_163_);
v___x_165_ = l_Repr_addAppParen(v___x_164_, v_prec_150_);
return v___x_165_;
}
}
}
}
case 1:
{
lean_object* v_a_172_; lean_object* v_localinst_173_; lean_object* v___y_175_; lean_object* v___x_183_; uint8_t v___x_184_; 
v_a_172_ = lean_ctor_get(v_x_149_, 0);
lean_inc_ref(v_a_172_);
lean_dec_ref_known(v_x_149_, 1);
v_localinst_173_ = lean_alloc_closure((void*)(l_Lean_Widget_instReprTaggedText_repr___redArg___boxed), 3, 1);
lean_closure_set(v_localinst_173_, 0, v_inst_148_);
v___x_183_ = lean_unsigned_to_nat(1024u);
v___x_184_ = lean_nat_dec_le(v___x_183_, v_prec_150_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3);
v___y_175_ = v___x_185_;
goto v___jp_174_;
}
else
{
lean_object* v___x_186_; 
v___x_186_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4);
v___y_175_ = v___x_186_;
goto v___jp_174_;
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_176_ = ((lean_object*)(l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7));
v___x_177_ = l_Array_repr___redArg(v_localinst_173_, v_a_172_);
v___x_178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
lean_inc(v___y_175_);
v___x_179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_179_, 0, v___y_175_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = 0;
v___x_181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*1, v___x_180_);
v___x_182_ = l_Repr_addAppParen(v___x_181_, v_prec_150_);
return v___x_182_;
}
}
default: 
{
lean_object* v_a_187_; lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_211_; 
v_a_187_ = lean_ctor_get(v_x_149_, 0);
v_a_188_ = lean_ctor_get(v_x_149_, 1);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_149_);
if (v_isSharedCheck_211_ == 0)
{
v___x_190_ = v_x_149_;
v_isShared_191_ = v_isSharedCheck_211_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_inc(v_a_187_);
lean_dec(v_x_149_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_211_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___y_194_; uint8_t v___x_208_; 
v___x_192_ = lean_unsigned_to_nat(1024u);
v___x_208_ = lean_nat_dec_le(v___x_192_, v_prec_150_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3);
v___y_194_ = v___x_209_;
goto v___jp_193_;
}
else
{
lean_object* v___x_210_; 
v___x_210_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4);
v___y_194_ = v___x_210_;
goto v___jp_193_;
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_195_ = lean_box(1);
v___x_196_ = ((lean_object*)(l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10));
lean_inc_ref(v_inst_148_);
v___x_197_ = lean_apply_2(v_inst_148_, v_a_187_, v___x_192_);
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 5);
lean_ctor_set(v___x_190_, 1, v___x_197_);
lean_ctor_set(v___x_190_, 0, v___x_196_);
v___x_199_ = v___x_190_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_196_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v___x_197_);
v___x_199_ = v_reuseFailAlloc_207_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_195_);
v___x_201_ = l_Lean_Widget_instReprTaggedText_repr___redArg(v_inst_148_, v_a_188_, v___x_192_);
v___x_202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
lean_inc(v___y_194_);
v___x_203_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_203_, 0, v___y_194_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = 0;
v___x_205_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set_uint8(v___x_205_, sizeof(void*)*1, v___x_204_);
v___x_206_ = l_Repr_addAppParen(v___x_205_, v_prec_150_);
return v___x_206_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr(lean_object* v_00_u03b1_212_, lean_object* v_inst_213_, lean_object* v_x_214_, lean_object* v_prec_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lean_Widget_instReprTaggedText_repr___redArg(v_inst_213_, v_x_214_, v_prec_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___boxed(lean_object* v_00_u03b1_217_, lean_object* v_inst_218_, lean_object* v_x_219_, lean_object* v_prec_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Widget_instReprTaggedText_repr(v_00_u03b1_217_, v_inst_218_, v_x_219_, v_prec_220_);
lean_dec(v_prec_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText___redArg(lean_object* v_inst_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_alloc_closure((void*)(l_Lean_Widget_instReprTaggedText_repr___boxed), 4, 2);
lean_closure_set(v___x_223_, 0, lean_box(0));
lean_closure_set(v___x_223_, 1, v_inst_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText(lean_object* v_00_u03b1_224_, lean_object* v_inst_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_alloc_closure((void*)(l_Lean_Widget_instReprTaggedText_repr___boxed), 4, 2);
lean_closure_set(v___x_226_, 0, lean_box(0));
lean_closure_set(v___x_226_, 1, v_inst_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(lean_object* v_inst_236_, lean_object* v_json_237_){
_start:
{
lean_object* v___x_238_; 
lean_inc(v_json_237_);
v___x_238_ = l_Lean_Json_getTag_x3f(v_json_237_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v___x_239_; 
lean_dec(v_json_237_);
lean_dec_ref(v_inst_236_);
v___x_239_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1));
return v___x_239_;
}
else
{
lean_object* v_val_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_357_; 
v_val_240_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_357_ == 0)
{
v___x_242_ = v___x_238_;
v_isShared_243_ = v_isSharedCheck_357_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_val_240_);
lean_dec(v___x_238_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_357_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_244_ = lean_box(0);
v___x_245_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2));
v___x_246_ = lean_string_dec_eq(v_val_240_, v___x_245_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3));
v___x_248_ = lean_string_dec_eq(v_val_240_, v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; uint8_t v___x_250_; 
lean_del_object(v___x_242_);
v___x_249_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4));
v___x_250_ = lean_string_dec_eq(v_val_240_, v___x_249_);
lean_dec(v_val_240_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
lean_dec(v_json_237_);
lean_dec_ref(v_inst_236_);
v___x_251_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6));
return v___x_251_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_unsigned_to_nat(2u);
v___x_253_ = lean_box(0);
v___x_254_ = l_Lean_Json_parseCtorFields(v_json_237_, v___x_249_, v___x_252_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v_inst_236_);
v_a_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_a_263_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_263_);
lean_dec_ref_known(v___x_254_, 1);
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_array_get_borrowed(v___x_244_, v_a_263_, v___x_264_);
lean_inc_ref(v_inst_236_);
lean_inc(v___x_265_);
v___x_266_ = lean_apply_1(v_inst_236_, v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec(v_a_263_);
lean_dec_ref(v_inst_236_);
v_a_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_a_275_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_266_, 1);
v___x_276_ = lean_unsigned_to_nat(1u);
v___x_277_ = lean_array_get(v___x_244_, v_a_263_, v___x_276_);
lean_dec(v_a_263_);
v___x_278_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(v_inst_236_, v___x_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_dec(v_a_275_);
return v___x_278_;
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_287_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_287_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_287_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_287_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_283_, 0, v_a_275_);
lean_ctor_set(v___x_283_, 1, v_a_279_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_283_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v_val_240_);
lean_dec_ref(v_inst_236_);
v___x_288_ = lean_unsigned_to_nat(1u);
v___x_289_ = lean_box(0);
v___x_290_ = l_Lean_Json_parseCtorFields(v_json_237_, v___x_247_, v___x_288_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_del_object(v___x_242_);
v_a_291_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_298_ == 0)
{
v___x_293_ = v___x_290_;
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_290_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_296_; 
if (v_isShared_294_ == 0)
{
v___x_296_ = v___x_293_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_291_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_a_299_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_299_);
lean_dec_ref_known(v___x_290_, 1);
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lean_array_get(v___x_244_, v_a_299_, v___x_300_);
lean_dec(v_a_299_);
v___x_302_ = l_Lean_Json_getStr_x3f(v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_del_object(v___x_242_);
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_321_; 
v_a_311_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_321_ == 0)
{
v___x_313_ = v___x_302_;
v_isShared_314_ = v_isSharedCheck_321_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_302_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_321_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_243_ == 0)
{
lean_ctor_set_tag(v___x_242_, 0);
lean_ctor_set(v___x_242_, 0, v_a_311_);
v___x_316_ = v___x_242_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_320_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_318_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v___x_316_);
v___x_318_ = v___x_313_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec(v_val_240_);
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_box(0);
v___x_324_ = l_Lean_Json_parseCtorFields(v_json_237_, v___x_245_, v___x_322_, v___x_323_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_del_object(v___x_242_);
lean_dec_ref(v_inst_236_);
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
else
{
lean_object* v_a_333_; lean_object* v_localinst_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_a_333_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_324_, 1);
v_localinst_334_ = lean_alloc_closure((void*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg), 2, 1);
lean_closure_set(v_localinst_334_, 0, v_inst_236_);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_array_get(v___x_244_, v_a_333_, v___x_335_);
lean_dec(v_a_333_);
v___x_337_ = l_Lean_Array_fromJson_x3f___redArg(v_localinst_334_, v___x_336_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_del_object(v___x_242_);
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_356_; 
v_a_346_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_356_ == 0)
{
v___x_348_ = v___x_337_;
v_isShared_349_ = v_isSharedCheck_356_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_337_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_356_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v_a_346_);
v___x_351_ = v___x_242_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_355_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_353_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_351_);
v___x_353_ = v___x_348_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson(lean_object* v_00_u03b1_358_, lean_object* v_inst_359_, lean_object* v_json_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(v_inst_359_, v_json_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText___redArg(lean_object* v_inst_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_alloc_closure((void*)(l_Lean_Widget_instFromJsonTaggedText_fromJson), 3, 2);
lean_closure_set(v___x_363_, 0, lean_box(0));
lean_closure_set(v___x_363_, 1, v_inst_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText(lean_object* v_00_u03b1_364_, lean_object* v_inst_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_alloc_closure((void*)(l_Lean_Widget_instFromJsonTaggedText_fromJson), 3, 2);
lean_closure_set(v___x_366_, 0, lean_box(0));
lean_closure_set(v___x_366_, 1, v_inst_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___redArg(lean_object* v_inst_367_, lean_object* v_x_368_){
_start:
{
switch(lean_obj_tag(v_x_368_))
{
case 0:
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_381_; 
lean_dec_ref(v_inst_367_);
v_a_369_ = lean_ctor_get(v_x_368_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v_x_368_);
if (v_isSharedCheck_381_ == 0)
{
v___x_371_ = v_x_368_;
v_isShared_372_ = v_isSharedCheck_381_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v_x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_381_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3));
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 3);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_369_);
v___x_375_ = v_reuseFailAlloc_380_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_373_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = lean_box(0);
v___x_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_376_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = l_Lean_Json_mkObj(v___x_378_);
lean_dec_ref_known(v___x_378_, 2);
return v___x_379_;
}
}
}
case 1:
{
lean_object* v_a_382_; lean_object* v_localinst_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_a_382_ = lean_ctor_get(v_x_368_, 0);
lean_inc_ref(v_a_382_);
lean_dec_ref_known(v_x_368_, 1);
v_localinst_383_ = lean_alloc_closure((void*)(l_Lean_Widget_instToJsonTaggedText_toJson___redArg), 2, 1);
lean_closure_set(v_localinst_383_, 0, v_inst_367_);
v___x_384_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2));
v___x_385_ = l_Lean_Array_toJson___redArg(v_localinst_383_, v_a_382_);
lean_dec_ref(v_a_382_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_box(0);
v___x_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = l_Lean_Json_mkObj(v___x_388_);
lean_dec_ref_known(v___x_388_, 2);
return v___x_389_;
}
default: 
{
lean_object* v_a_390_; lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_409_; 
v_a_390_ = lean_ctor_get(v_x_368_, 0);
v_a_391_ = lean_ctor_get(v_x_368_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_368_);
if (v_isSharedCheck_409_ == 0)
{
v___x_393_ = v_x_368_;
v_isShared_394_ = v_isSharedCheck_409_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_inc(v_a_390_);
lean_dec(v_x_368_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_409_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_395_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4));
lean_inc_ref(v_inst_367_);
v___x_396_ = lean_apply_1(v_inst_367_, v_a_390_);
v___x_397_ = l_Lean_Widget_instToJsonTaggedText_toJson___redArg(v_inst_367_, v_a_391_);
v___x_398_ = lean_unsigned_to_nat(2u);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
v___x_400_ = lean_array_push(v___x_399_, v___x_396_);
v___x_401_ = lean_array_push(v___x_400_, v___x_397_);
v___x_402_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
if (v_isShared_394_ == 0)
{
lean_ctor_set_tag(v___x_393_, 0);
lean_ctor_set(v___x_393_, 1, v___x_402_);
lean_ctor_set(v___x_393_, 0, v___x_395_);
v___x_404_ = v___x_393_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v___x_402_);
v___x_404_ = v_reuseFailAlloc_408_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = lean_box(0);
v___x_406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Lean_Json_mkObj(v___x_406_);
lean_dec_ref_known(v___x_406_, 2);
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson(lean_object* v_00_u03b1_410_, lean_object* v_inst_411_, lean_object* v_x_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Widget_instToJsonTaggedText_toJson___redArg(v_inst_411_, v_x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText___redArg(lean_object* v_inst_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = lean_alloc_closure((void*)(l_Lean_Widget_instToJsonTaggedText_toJson), 3, 2);
lean_closure_set(v___x_415_, 0, lean_box(0));
lean_closure_set(v___x_415_, 1, v_inst_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText(lean_object* v_00_u03b1_416_, lean_object* v_inst_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_alloc_closure((void*)(l_Lean_Widget_instToJsonTaggedText_toJson), 3, 2);
lean_closure_set(v___x_418_, 0, lean_box(0));
lean_closure_set(v___x_418_, 1, v_inst_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText___redArg(lean_object* v_s_u2080_419_, lean_object* v_x_420_){
_start:
{
switch(lean_obj_tag(v_x_420_))
{
case 0:
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_429_; 
v_a_421_ = lean_ctor_get(v_x_420_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v_x_420_);
if (v_isSharedCheck_429_ == 0)
{
v___x_423_ = v_x_420_;
v_isShared_424_ = v_isSharedCheck_429_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v_x_420_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_429_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_425_ = lean_string_append(v_a_421_, v_s_u2080_419_);
lean_dec_ref(v_s_u2080_419_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 0, v___x_425_);
v___x_427_ = v___x_423_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
case 1:
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_457_; 
v_a_430_ = lean_ctor_get(v_x_420_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v_x_420_);
if (v_isSharedCheck_457_ == 0)
{
v___x_432_ = v_x_420_;
v_isShared_433_ = v_isSharedCheck_457_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v_x_420_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_457_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_434_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
v___x_435_ = lean_array_get_size(v_a_430_);
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = lean_nat_sub(v___x_435_, v___x_436_);
v___x_438_ = lean_array_get(v___x_434_, v_a_430_, v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_451_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_451_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_451_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_451_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = lean_string_append(v_a_439_, v_s_u2080_419_);
lean_dec_ref(v_s_u2080_419_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_443_);
v___x_445_ = v___x_441_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_443_);
v___x_445_ = v_reuseFailAlloc_450_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_array_set(v_a_430_, v___x_437_, v___x_445_);
lean_dec(v___x_437_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_446_);
v___x_448_ = v___x_432_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
else
{
lean_object* v___x_453_; 
lean_dec(v___x_438_);
lean_dec(v___x_437_);
if (v_isShared_433_ == 0)
{
lean_ctor_set_tag(v___x_432_, 0);
lean_ctor_set(v___x_432_, 0, v_s_u2080_419_);
v___x_453_ = v___x_432_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_s_u2080_419_);
v___x_453_ = v_reuseFailAlloc_456_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_array_push(v_a_430_, v___x_453_);
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
}
}
default: 
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v_s_u2080_419_);
v___x_459_ = lean_unsigned_to_nat(2u);
v___x_460_ = lean_mk_empty_array_with_capacity(v___x_459_);
v___x_461_ = lean_array_push(v___x_460_, v_x_420_);
v___x_462_ = lean_array_push(v___x_461_, v___x_458_);
v___x_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText(lean_object* v_00_u03b1_464_, lean_object* v_s_u2080_465_, lean_object* v_x_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_Widget_TaggedText_appendText___redArg(v_s_u2080_465_, v_x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag___redArg(lean_object* v_acc_468_, lean_object* v_t_u2080_469_, lean_object* v_a_u2080_470_){
_start:
{
lean_object* v_a_472_; 
switch(lean_obj_tag(v_acc_468_))
{
case 1:
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_488_; 
v_a_479_ = lean_ctor_get(v_acc_468_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v_acc_468_);
if (v_isSharedCheck_488_ == 0)
{
v___x_481_ = v_acc_468_;
v_isShared_482_ = v_isSharedCheck_488_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v_acc_468_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_488_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_483_, 0, v_t_u2080_469_);
lean_ctor_set(v___x_483_, 1, v_a_u2080_470_);
v___x_484_ = lean_array_push(v_a_479_, v___x_483_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v___x_484_);
v___x_486_ = v___x_481_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
case 0:
{
lean_object* v_a_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v_a_489_ = lean_ctor_get(v_acc_468_, 0);
v___x_490_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0));
v___x_491_ = lean_string_dec_eq(v_a_489_, v___x_490_);
if (v___x_491_ == 0)
{
v_a_472_ = v_acc_468_;
goto v___jp_471_;
}
else
{
lean_object* v___x_492_; 
lean_dec_ref_known(v_acc_468_, 1);
v___x_492_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_492_, 0, v_t_u2080_469_);
lean_ctor_set(v___x_492_, 1, v_a_u2080_470_);
return v___x_492_;
}
}
default: 
{
v_a_472_ = v_acc_468_;
goto v___jp_471_;
}
}
v___jp_471_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_473_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_473_, 0, v_t_u2080_469_);
lean_ctor_set(v___x_473_, 1, v_a_u2080_470_);
v___x_474_ = lean_unsigned_to_nat(2u);
v___x_475_ = lean_mk_empty_array_with_capacity(v___x_474_);
v___x_476_ = lean_array_push(v___x_475_, v_a_472_);
v___x_477_ = lean_array_push(v___x_476_, v___x_473_);
v___x_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag(lean_object* v_00_u03b1_493_, lean_object* v_acc_494_, lean_object* v_t_u2080_495_, lean_object* v_a_u2080_496_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = l_Lean_Widget_TaggedText_appendTag___redArg(v_acc_494_, v_t_u2080_495_, v_a_u2080_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(lean_object* v_f_498_, size_t v_sz_499_, size_t v_i_500_, lean_object* v_bs_501_){
_start:
{
uint8_t v___x_502_; 
v___x_502_ = lean_usize_dec_lt(v_i_500_, v_sz_499_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
lean_dec(v_f_498_);
v___x_503_ = l_unsafeCast___redArg(v_bs_501_);
lean_dec_ref(v_bs_501_);
return v___x_503_;
}
else
{
lean_object* v_v_504_; lean_object* v___x_505_; lean_object* v_bs_x27_506_; lean_object* v___x_507_; lean_object* v___x_508_; size_t v___x_509_; size_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_v_504_ = lean_array_uget(v_bs_501_, v_i_500_);
v___x_505_ = lean_unsigned_to_nat(0u);
v_bs_x27_506_ = lean_array_uset(v_bs_501_, v_i_500_, v___x_505_);
v___x_507_ = l_unsafeCast___redArg(v_v_504_);
lean_dec(v_v_504_);
lean_inc(v_f_498_);
v___x_508_ = l_Lean_Widget_TaggedText_map___redArg(v_f_498_, v___x_507_);
v___x_509_ = ((size_t)1ULL);
v___x_510_ = lean_usize_add(v_i_500_, v___x_509_);
v___x_511_ = l_unsafeCast___redArg(v___x_508_);
lean_dec_ref(v___x_508_);
v___x_512_ = lean_array_uset(v_bs_x27_506_, v_i_500_, v___x_511_);
v_i_500_ = v___x_510_;
v_bs_501_ = v___x_512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map___redArg(lean_object* v_f_514_, lean_object* v_x_515_){
_start:
{
switch(lean_obj_tag(v_x_515_))
{
case 0:
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec(v_f_514_);
v_a_516_ = lean_ctor_get(v_x_515_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_515_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v_x_515_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v_x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
case 1:
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_536_; 
v_a_524_ = lean_ctor_get(v_x_515_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_515_);
if (v_isSharedCheck_536_ == 0)
{
v___x_526_ = v_x_515_;
v_isShared_527_ = v_isSharedCheck_536_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v_x_515_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_536_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
size_t v_sz_528_; size_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v_sz_528_ = lean_array_size(v_a_524_);
v___x_529_ = ((size_t)0ULL);
v___x_530_ = l_unsafeCast___redArg(v_a_524_);
lean_dec_ref(v_a_524_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(v_f_514_, v_sz_528_, v___x_529_, v___x_530_);
v___x_532_ = l_unsafeCast___redArg(v___x_531_);
lean_dec_ref(v___x_531_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_532_);
v___x_534_ = v___x_526_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
default: 
{
lean_object* v_a_537_; lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_547_; 
v_a_537_ = lean_ctor_get(v_x_515_, 0);
v_a_538_ = lean_ctor_get(v_x_515_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_x_515_);
if (v_isSharedCheck_547_ == 0)
{
v___x_540_ = v_x_515_;
v_isShared_541_ = v_isSharedCheck_547_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_inc(v_a_537_);
lean_dec(v_x_515_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_547_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
lean_inc(v_f_514_);
v___x_542_ = lean_apply_1(v_f_514_, v_a_537_);
v___x_543_ = l_Lean_Widget_TaggedText_map___redArg(v_f_514_, v_a_538_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_543_);
lean_ctor_set(v___x_540_, 0, v___x_542_);
v___x_545_ = v___x_540_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_542_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg___boxed(lean_object* v_f_548_, lean_object* v_sz_549_, lean_object* v_i_550_, lean_object* v_bs_551_){
_start:
{
size_t v_sz_boxed_552_; size_t v_i_boxed_553_; lean_object* v_res_554_; 
v_sz_boxed_552_ = lean_unbox_usize(v_sz_549_);
lean_dec(v_sz_549_);
v_i_boxed_553_ = lean_unbox_usize(v_i_550_);
lean_dec(v_i_550_);
v_res_554_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(v_f_548_, v_sz_boxed_552_, v_i_boxed_553_, v_bs_551_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map(lean_object* v_00_u03b1_555_, lean_object* v_00_u03b2_556_, lean_object* v_f_557_, lean_object* v_x_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Lean_Widget_TaggedText_map___redArg(v_f_557_, v_x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0(lean_object* v_00_u03b1_560_, lean_object* v_00_u03b2_561_, lean_object* v_f_562_, size_t v_sz_563_, size_t v_i_564_, lean_object* v_bs_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(v_f_562_, v_sz_563_, v_i_564_, v_bs_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___boxed(lean_object* v_00_u03b1_567_, lean_object* v_00_u03b2_568_, lean_object* v_f_569_, lean_object* v_sz_570_, lean_object* v_i_571_, lean_object* v_bs_572_){
_start:
{
size_t v_sz_boxed_573_; size_t v_i_boxed_574_; lean_object* v_res_575_; 
v_sz_boxed_573_ = lean_unbox_usize(v_sz_570_);
lean_dec(v_sz_570_);
v_i_boxed_574_ = lean_unbox_usize(v_i_571_);
lean_dec(v_i_571_);
v_res_575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0(v_00_u03b1_567_, v_00_u03b2_568_, v_f_569_, v_sz_boxed_573_, v_i_boxed_574_, v_bs_572_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__0(lean_object* v_toPure_576_, lean_object* v_____do__lift_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_578_, 0, v_____do__lift_577_);
v___x_579_ = lean_apply_2(v_toPure_576_, lean_box(0), v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__1(lean_object* v_____do__lift_580_, lean_object* v_toPure_581_, lean_object* v_____do__lift_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_583_, 0, v_____do__lift_580_);
lean_ctor_set(v___x_583_, 1, v_____do__lift_582_);
v___x_584_ = lean_apply_2(v_toPure_581_, lean_box(0), v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg(lean_object* v_inst_585_, lean_object* v_f_586_, lean_object* v_x_587_){
_start:
{
switch(lean_obj_tag(v_x_587_))
{
case 0:
{
lean_object* v_toApplicative_588_; lean_object* v_toPure_589_; lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_598_; 
v_toApplicative_588_ = lean_ctor_get(v_inst_585_, 0);
lean_inc_ref(v_toApplicative_588_);
lean_dec(v_f_586_);
lean_dec_ref(v_inst_585_);
v_toPure_589_ = lean_ctor_get(v_toApplicative_588_, 1);
lean_inc(v_toPure_589_);
lean_dec_ref(v_toApplicative_588_);
v_a_590_ = lean_ctor_get(v_x_587_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_598_ == 0)
{
v___x_592_ = v_x_587_;
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v_x_587_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_apply_2(v_toPure_589_, lean_box(0), v___x_595_);
return v___x_596_;
}
}
}
case 1:
{
lean_object* v_toApplicative_599_; lean_object* v_toBind_600_; lean_object* v_toPure_601_; lean_object* v_a_602_; lean_object* v___f_603_; lean_object* v___x_604_; size_t v_sz_605_; size_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v_toApplicative_599_ = lean_ctor_get(v_inst_585_, 0);
v_toBind_600_ = lean_ctor_get(v_inst_585_, 1);
lean_inc(v_toBind_600_);
v_toPure_601_ = lean_ctor_get(v_toApplicative_599_, 1);
v_a_602_ = lean_ctor_get(v_x_587_, 0);
lean_inc_ref(v_a_602_);
lean_dec_ref_known(v_x_587_, 1);
lean_inc(v_toPure_601_);
v___f_603_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_603_, 0, v_toPure_601_);
lean_inc_ref(v_inst_585_);
v___x_604_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg), 3, 2);
lean_closure_set(v___x_604_, 0, v_inst_585_);
lean_closure_set(v___x_604_, 1, v_f_586_);
v_sz_605_ = lean_array_size(v_a_602_);
v___x_606_ = ((size_t)0ULL);
v___x_607_ = l_unsafeCast___redArg(v_a_602_);
lean_dec_ref(v_a_602_);
v___x_608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_585_, v___x_604_, v_sz_605_, v___x_606_, v___x_607_);
v___x_609_ = l_unsafeCast___redArg(v___x_608_);
lean_dec(v___x_608_);
v___x_610_ = lean_apply_4(v_toBind_600_, lean_box(0), lean_box(0), v___x_609_, v___f_603_);
return v___x_610_;
}
default: 
{
lean_object* v_toApplicative_611_; lean_object* v_toBind_612_; lean_object* v_toPure_613_; lean_object* v_a_614_; lean_object* v_a_615_; lean_object* v___f_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_toApplicative_611_ = lean_ctor_get(v_inst_585_, 0);
v_toBind_612_ = lean_ctor_get(v_inst_585_, 1);
lean_inc_n(v_toBind_612_, 2);
v_toPure_613_ = lean_ctor_get(v_toApplicative_611_, 1);
lean_inc(v_toPure_613_);
v_a_614_ = lean_ctor_get(v_x_587_, 0);
lean_inc(v_a_614_);
v_a_615_ = lean_ctor_get(v_x_587_, 1);
lean_inc_ref(v_a_615_);
lean_dec_ref_known(v_x_587_, 2);
lean_inc(v_f_586_);
v___f_616_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__2), 6, 5);
lean_closure_set(v___f_616_, 0, v_toPure_613_);
lean_closure_set(v___f_616_, 1, v_inst_585_);
lean_closure_set(v___f_616_, 2, v_f_586_);
lean_closure_set(v___f_616_, 3, v_a_615_);
lean_closure_set(v___f_616_, 4, v_toBind_612_);
v___x_617_ = lean_apply_1(v_f_586_, v_a_614_);
v___x_618_ = lean_apply_4(v_toBind_612_, lean_box(0), lean_box(0), v___x_617_, v___f_616_);
return v___x_618_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__2(lean_object* v_toPure_619_, lean_object* v_inst_620_, lean_object* v_f_621_, lean_object* v_a_622_, lean_object* v_toBind_623_, lean_object* v_____do__lift_624_){
_start:
{
lean_object* v___f_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___f_625_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__1), 3, 2);
lean_closure_set(v___f_625_, 0, v_____do__lift_624_);
lean_closure_set(v___f_625_, 1, v_toPure_619_);
v___x_626_ = l_Lean_Widget_TaggedText_mapM___redArg(v_inst_620_, v_f_621_, v_a_622_);
v___x_627_ = lean_apply_4(v_toBind_623_, lean_box(0), lean_box(0), v___x_626_, v___f_625_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM(lean_object* v_m_628_, lean_object* v_00_u03b1_629_, lean_object* v_00_u03b2_630_, lean_object* v_inst_631_, lean_object* v_f_632_, lean_object* v_x_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_Widget_TaggedText_mapM___redArg(v_inst_631_, v_f_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__1(lean_object* v_inst_635_, lean_object* v_f_636_, lean_object* v_a_637_, lean_object* v_____r_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Lean_Widget_TaggedText_forM___redArg(v_inst_635_, v_f_636_, v_a_637_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg(lean_object* v_inst_640_, lean_object* v_f_641_, lean_object* v_x_642_){
_start:
{
switch(lean_obj_tag(v_x_642_))
{
case 0:
{
lean_object* v_toApplicative_643_; lean_object* v_toPure_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_toApplicative_643_ = lean_ctor_get(v_inst_640_, 0);
lean_inc_ref(v_toApplicative_643_);
lean_dec_ref_known(v_x_642_, 1);
lean_dec(v_f_641_);
lean_dec_ref(v_inst_640_);
v_toPure_644_ = lean_ctor_get(v_toApplicative_643_, 1);
lean_inc(v_toPure_644_);
lean_dec_ref(v_toApplicative_643_);
v___x_645_ = lean_box(0);
v___x_646_ = lean_apply_2(v_toPure_644_, lean_box(0), v___x_645_);
return v___x_646_;
}
case 1:
{
lean_object* v_toApplicative_647_; lean_object* v_toPure_648_; lean_object* v_a_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; uint8_t v___x_653_; 
v_toApplicative_647_ = lean_ctor_get(v_inst_640_, 0);
v_toPure_648_ = lean_ctor_get(v_toApplicative_647_, 1);
v_a_649_ = lean_ctor_get(v_x_642_, 0);
lean_inc_ref(v_a_649_);
lean_dec_ref_known(v_x_642_, 1);
v___x_650_ = lean_unsigned_to_nat(0u);
v___x_651_ = lean_array_get_size(v_a_649_);
v___x_652_ = lean_box(0);
v___x_653_ = lean_nat_dec_lt(v___x_650_, v___x_651_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; 
lean_inc(v_toPure_648_);
lean_dec_ref(v_a_649_);
lean_dec(v_f_641_);
lean_dec_ref(v_inst_640_);
v___x_654_ = lean_apply_2(v_toPure_648_, lean_box(0), v___x_652_);
return v___x_654_;
}
else
{
lean_object* v___f_655_; uint8_t v___x_656_; 
lean_inc_ref(v_inst_640_);
v___f_655_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_forM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_655_, 0, v_inst_640_);
lean_closure_set(v___f_655_, 1, v_f_641_);
v___x_656_ = lean_nat_dec_le(v___x_651_, v___x_651_);
if (v___x_656_ == 0)
{
if (v___x_653_ == 0)
{
lean_object* v___x_657_; 
lean_inc(v_toPure_648_);
lean_dec_ref(v___f_655_);
lean_dec_ref(v_a_649_);
lean_dec_ref(v_inst_640_);
v___x_657_ = lean_apply_2(v_toPure_648_, lean_box(0), v___x_652_);
return v___x_657_;
}
else
{
size_t v___x_658_; size_t v___x_659_; lean_object* v___x_660_; 
v___x_658_ = ((size_t)0ULL);
v___x_659_ = lean_usize_of_nat(v___x_651_);
v___x_660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_640_, v___f_655_, v_a_649_, v___x_658_, v___x_659_, v___x_652_);
return v___x_660_;
}
}
else
{
size_t v___x_661_; size_t v___x_662_; lean_object* v___x_663_; 
v___x_661_ = ((size_t)0ULL);
v___x_662_ = lean_usize_of_nat(v___x_651_);
v___x_663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_640_, v___f_655_, v_a_649_, v___x_661_, v___x_662_, v___x_652_);
return v___x_663_;
}
}
}
default: 
{
lean_object* v_toBind_664_; lean_object* v_a_665_; lean_object* v_a_666_; lean_object* v___f_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_toBind_664_ = lean_ctor_get(v_inst_640_, 1);
lean_inc(v_toBind_664_);
v_a_665_ = lean_ctor_get(v_x_642_, 0);
lean_inc(v_a_665_);
v_a_666_ = lean_ctor_get(v_x_642_, 1);
lean_inc_ref_n(v_a_666_, 2);
lean_dec_ref_known(v_x_642_, 2);
lean_inc(v_f_641_);
v___f_667_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_forM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_667_, 0, v_inst_640_);
lean_closure_set(v___f_667_, 1, v_f_641_);
lean_closure_set(v___f_667_, 2, v_a_666_);
v___x_668_ = lean_apply_2(v_f_641_, v_a_665_, v_a_666_);
v___x_669_ = lean_apply_4(v_toBind_664_, lean_box(0), lean_box(0), v___x_668_, v___f_667_);
return v___x_669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__0(lean_object* v_inst_670_, lean_object* v_f_671_, lean_object* v_x_672_, lean_object* v___y_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Widget_TaggedText_forM___redArg(v_inst_670_, v_f_671_, v___y_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM(lean_object* v_m_675_, lean_object* v_00_u03b1_676_, lean_object* v_inst_677_, lean_object* v_f_678_, lean_object* v_x_679_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Widget_TaggedText_forM___redArg(v_inst_677_, v_f_678_, v_x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(lean_object* v_f_681_, size_t v_sz_682_, size_t v_i_683_, lean_object* v_bs_684_){
_start:
{
uint8_t v___x_685_; 
v___x_685_ = lean_usize_dec_lt(v_i_683_, v_sz_682_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
lean_dec_ref(v_f_681_);
v___x_686_ = l_unsafeCast___redArg(v_bs_684_);
lean_dec_ref(v_bs_684_);
return v___x_686_;
}
else
{
lean_object* v_v_687_; lean_object* v___x_688_; lean_object* v_bs_x27_689_; lean_object* v___x_690_; lean_object* v___x_691_; size_t v___x_692_; size_t v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v_v_687_ = lean_array_uget(v_bs_684_, v_i_683_);
v___x_688_ = lean_unsigned_to_nat(0u);
v_bs_x27_689_ = lean_array_uset(v_bs_684_, v_i_683_, v___x_688_);
v___x_690_ = l_unsafeCast___redArg(v_v_687_);
lean_dec(v_v_687_);
lean_inc_ref(v_f_681_);
v___x_691_ = l_Lean_Widget_TaggedText_rewrite___redArg(v_f_681_, v___x_690_);
v___x_692_ = ((size_t)1ULL);
v___x_693_ = lean_usize_add(v_i_683_, v___x_692_);
v___x_694_ = l_unsafeCast___redArg(v___x_691_);
lean_dec_ref(v___x_691_);
v___x_695_ = lean_array_uset(v_bs_x27_689_, v_i_683_, v___x_694_);
v_i_683_ = v___x_693_;
v_bs_684_ = v___x_695_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite___redArg(lean_object* v_f_697_, lean_object* v_x_698_){
_start:
{
switch(lean_obj_tag(v_x_698_))
{
case 0:
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_dec_ref(v_f_697_);
v_a_699_ = lean_ctor_get(v_x_698_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_x_698_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v_x_698_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v_x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
case 1:
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_719_; 
v_a_707_ = lean_ctor_get(v_x_698_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v_x_698_);
if (v_isSharedCheck_719_ == 0)
{
v___x_709_ = v_x_698_;
v_isShared_710_ = v_isSharedCheck_719_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v_x_698_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_719_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
size_t v_sz_711_; size_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_717_; 
v_sz_711_ = lean_array_size(v_a_707_);
v___x_712_ = ((size_t)0ULL);
v___x_713_ = l_unsafeCast___redArg(v_a_707_);
lean_dec_ref(v_a_707_);
v___x_714_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(v_f_697_, v_sz_711_, v___x_712_, v___x_713_);
v___x_715_ = l_unsafeCast___redArg(v___x_714_);
lean_dec_ref(v___x_714_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_715_);
v___x_717_ = v___x_709_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
default: 
{
lean_object* v_a_720_; lean_object* v_a_721_; lean_object* v___x_722_; 
v_a_720_ = lean_ctor_get(v_x_698_, 0);
lean_inc(v_a_720_);
v_a_721_ = lean_ctor_get(v_x_698_, 1);
lean_inc_ref(v_a_721_);
lean_dec_ref_known(v_x_698_, 2);
v___x_722_ = lean_apply_2(v_f_697_, v_a_720_, v_a_721_);
return v___x_722_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg___boxed(lean_object* v_f_723_, lean_object* v_sz_724_, lean_object* v_i_725_, lean_object* v_bs_726_){
_start:
{
size_t v_sz_boxed_727_; size_t v_i_boxed_728_; lean_object* v_res_729_; 
v_sz_boxed_727_ = lean_unbox_usize(v_sz_724_);
lean_dec(v_sz_724_);
v_i_boxed_728_ = lean_unbox_usize(v_i_725_);
lean_dec(v_i_725_);
v_res_729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(v_f_723_, v_sz_boxed_727_, v_i_boxed_728_, v_bs_726_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite(lean_object* v_00_u03b1_730_, lean_object* v_00_u03b2_731_, lean_object* v_f_732_, lean_object* v_x_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_Widget_TaggedText_rewrite___redArg(v_f_732_, v_x_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0(lean_object* v_00_u03b1_735_, lean_object* v_00_u03b2_736_, lean_object* v_f_737_, size_t v_sz_738_, size_t v_i_739_, lean_object* v_bs_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(v_f_737_, v_sz_738_, v_i_739_, v_bs_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___boxed(lean_object* v_00_u03b1_742_, lean_object* v_00_u03b2_743_, lean_object* v_f_744_, lean_object* v_sz_745_, lean_object* v_i_746_, lean_object* v_bs_747_){
_start:
{
size_t v_sz_boxed_748_; size_t v_i_boxed_749_; lean_object* v_res_750_; 
v_sz_boxed_748_ = lean_unbox_usize(v_sz_745_);
lean_dec(v_sz_745_);
v_i_boxed_749_ = lean_unbox_usize(v_i_746_);
lean_dec(v_i_746_);
v_res_750_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0(v_00_u03b1_742_, v_00_u03b2_743_, v_f_744_, v_sz_boxed_748_, v_i_boxed_749_, v_bs_747_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___redArg(lean_object* v_inst_751_, lean_object* v_f_752_, lean_object* v_x_753_){
_start:
{
switch(lean_obj_tag(v_x_753_))
{
case 0:
{
lean_object* v_toApplicative_754_; lean_object* v_toPure_755_; lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_764_; 
v_toApplicative_754_ = lean_ctor_get(v_inst_751_, 0);
lean_inc_ref(v_toApplicative_754_);
lean_dec(v_f_752_);
lean_dec_ref(v_inst_751_);
v_toPure_755_ = lean_ctor_get(v_toApplicative_754_, 1);
lean_inc(v_toPure_755_);
lean_dec_ref(v_toApplicative_754_);
v_a_756_ = lean_ctor_get(v_x_753_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_753_);
if (v_isSharedCheck_764_ == 0)
{
v___x_758_ = v_x_753_;
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v_x_753_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_763_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; 
v___x_762_ = lean_apply_2(v_toPure_755_, lean_box(0), v___x_761_);
return v___x_762_;
}
}
}
case 1:
{
lean_object* v_toApplicative_765_; lean_object* v_toBind_766_; lean_object* v_toPure_767_; lean_object* v_a_768_; lean_object* v___f_769_; lean_object* v___x_770_; size_t v_sz_771_; size_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v_toApplicative_765_ = lean_ctor_get(v_inst_751_, 0);
v_toBind_766_ = lean_ctor_get(v_inst_751_, 1);
lean_inc(v_toBind_766_);
v_toPure_767_ = lean_ctor_get(v_toApplicative_765_, 1);
v_a_768_ = lean_ctor_get(v_x_753_, 0);
lean_inc_ref(v_a_768_);
lean_dec_ref_known(v_x_753_, 1);
lean_inc(v_toPure_767_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_769_, 0, v_toPure_767_);
lean_inc_ref(v_inst_751_);
v___x_770_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_rewriteM___redArg), 3, 2);
lean_closure_set(v___x_770_, 0, v_inst_751_);
lean_closure_set(v___x_770_, 1, v_f_752_);
v_sz_771_ = lean_array_size(v_a_768_);
v___x_772_ = ((size_t)0ULL);
v___x_773_ = l_unsafeCast___redArg(v_a_768_);
lean_dec_ref(v_a_768_);
v___x_774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_751_, v___x_770_, v_sz_771_, v___x_772_, v___x_773_);
v___x_775_ = l_unsafeCast___redArg(v___x_774_);
lean_dec(v___x_774_);
v___x_776_ = lean_apply_4(v_toBind_766_, lean_box(0), lean_box(0), v___x_775_, v___f_769_);
return v___x_776_;
}
default: 
{
lean_object* v_a_777_; lean_object* v_a_778_; lean_object* v___x_779_; 
lean_dec_ref(v_inst_751_);
v_a_777_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_a_777_);
v_a_778_ = lean_ctor_get(v_x_753_, 1);
lean_inc_ref(v_a_778_);
lean_dec_ref_known(v_x_753_, 2);
v___x_779_ = lean_apply_2(v_f_752_, v_a_777_, v_a_778_);
return v___x_779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM(lean_object* v_m_780_, lean_object* v_00_u03b1_781_, lean_object* v_00_u03b2_782_, lean_object* v_inst_783_, lean_object* v_f_784_, lean_object* v_x_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lean_Widget_TaggedText_rewriteM___redArg(v_inst_783_, v_f_784_, v_x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__0(lean_object* v_inst_787_, lean_object* v___x_788_, lean_object* v___x_789_, lean_object* v_a_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_rpcEncode_792_; lean_object* v___x_648__overap_793_; lean_object* v___x_794_; lean_object* v_fst_795_; lean_object* v_snd_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_804_; 
v_rpcEncode_792_ = lean_ctor_get(v_inst_787_, 0);
lean_inc_ref(v_rpcEncode_792_);
lean_dec_ref(v_inst_787_);
v___x_648__overap_793_ = l_Lean_Widget_TaggedText_mapM___redArg(v___x_788_, v_rpcEncode_792_, v_a_790_);
v___x_794_ = lean_apply_1(v___x_648__overap_793_, v___y_791_);
v_fst_795_ = lean_ctor_get(v___x_794_, 0);
v_snd_796_ = lean_ctor_get(v___x_794_, 1);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_804_ == 0)
{
v___x_798_ = v___x_794_;
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_snd_796_);
lean_inc(v_fst_795_);
lean_dec(v___x_794_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_800_ = l_Lean_Widget_instToJsonTaggedText_toJson___redArg(v___x_789_, v_fst_795_);
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v___x_800_);
v___x_802_ = v___x_798_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v_snd_796_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1(lean_object* v___f_805_, lean_object* v_inst_806_, lean_object* v___x_807_, lean_object* v_a_808_, lean_object* v___y_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(v___f_805_, v_a_808_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v___x_807_);
lean_dec_ref(v_inst_806_);
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
else
{
lean_object* v_a_819_; lean_object* v_rpcDecode_820_; lean_object* v___x_661__overap_821_; lean_object* v___x_822_; 
v_a_819_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_810_, 1);
v_rpcDecode_820_ = lean_ctor_get(v_inst_806_, 1);
lean_inc_ref(v_rpcDecode_820_);
lean_dec_ref(v_inst_806_);
v___x_661__overap_821_ = l_Lean_Widget_TaggedText_mapM___redArg(v___x_807_, v_rpcDecode_820_, v_a_819_);
lean_inc_ref(v___y_809_);
v___x_822_ = lean_apply_1(v___x_661__overap_821_, v___y_809_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1___boxed(lean_object* v___f_823_, lean_object* v_inst_824_, lean_object* v___x_825_, lean_object* v_a_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1(v___f_823_, v_inst_824_, v___x_825_, v_a_826_, v___y_827_);
lean_dec_ref(v___y_827_);
return v_res_828_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9));
v___x_876_ = l_ReaderT_instMonad___redArg(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22(void){
_start:
{
lean_object* v___x_877_; lean_object* v___f_878_; 
v___x_877_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_878_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_878_, 0, v___x_877_);
return v___f_878_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23(void){
_start:
{
lean_object* v___x_879_; lean_object* v___f_880_; 
v___x_879_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_880_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_880_, 0, v___x_879_);
return v___f_880_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24(void){
_start:
{
lean_object* v___x_881_; lean_object* v___f_882_; 
v___x_881_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_882_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_882_, 0, v___x_881_);
return v___f_882_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25(void){
_start:
{
lean_object* v___x_883_; lean_object* v___f_884_; 
v___x_883_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_884_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_884_, 0, v___x_883_);
return v___f_884_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___x_886_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_886_, 0, lean_box(0));
lean_closure_set(v___x_886_, 1, lean_box(0));
lean_closure_set(v___x_886_, 2, v___x_885_);
return v___x_886_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27(void){
_start:
{
lean_object* v___f_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___f_887_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22);
v___x_888_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26);
v___x_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
lean_ctor_set(v___x_889_, 1, v___f_887_);
return v___x_889_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___x_891_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_891_, 0, lean_box(0));
lean_closure_set(v___x_891_, 1, lean_box(0));
lean_closure_set(v___x_891_, 2, v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29(void){
_start:
{
lean_object* v___f_892_; lean_object* v___f_893_; lean_object* v___f_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___f_892_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25);
v___f_893_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24);
v___f_894_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23);
v___x_895_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28);
v___x_896_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27);
v___x_897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
lean_ctor_set(v___x_897_, 1, v___x_895_);
lean_ctor_set(v___x_897_, 2, v___f_894_);
lean_ctor_set(v___x_897_, 3, v___f_893_);
lean_ctor_set(v___x_897_, 4, v___f_892_);
return v___x_897_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___x_899_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_899_, 0, lean_box(0));
lean_closure_set(v___x_899_, 1, lean_box(0));
lean_closure_set(v___x_899_, 2, v___x_898_);
return v___x_899_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30);
v___x_901_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v___x_900_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg(lean_object* v_inst_904_){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___f_907_; lean_object* v___x_908_; lean_object* v___f_909_; lean_object* v___f_910_; lean_object* v___x_911_; 
v___x_905_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19));
v___x_906_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20));
lean_inc_ref(v_inst_904_);
v___f_907_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__0), 5, 3);
lean_closure_set(v___f_907_, 0, v_inst_904_);
lean_closure_set(v___f_907_, 1, v___x_905_);
lean_closure_set(v___f_907_, 2, v___x_906_);
v___x_908_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31);
v___f_909_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32));
v___f_910_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_910_, 0, v___f_909_);
lean_closure_set(v___f_910_, 1, v_inst_904_);
lean_closure_set(v___f_910_, 2, v___x_908_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v___f_907_);
lean_ctor_set(v___x_911_, 1, v___f_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable(lean_object* v_00_u03b1_912_, lean_object* v_inst_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Widget_TaggedText_instRpcEncodable___redArg(v_inst_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__0(lean_object* v_s_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_out_925_; lean_object* v_tagStack_926_; lean_object* v_column_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_939_; 
v_out_925_ = lean_ctor_get(v___y_924_, 0);
v_tagStack_926_ = lean_ctor_get(v___y_924_, 1);
v_column_927_ = lean_ctor_get(v___y_924_, 2);
v_isSharedCheck_939_ = !lean_is_exclusive(v___y_924_);
if (v_isSharedCheck_939_ == 0)
{
v___x_929_ = v___y_924_;
v_isShared_930_ = v_isSharedCheck_939_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_column_927_);
lean_inc(v_tagStack_926_);
lean_inc(v_out_925_);
lean_dec(v___y_924_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_939_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_931_ = lean_box(0);
lean_inc_ref(v_s_923_);
v___x_932_ = l_Lean_Widget_TaggedText_appendText___redArg(v_s_923_, v_out_925_);
v___x_933_ = lean_string_length(v_s_923_);
lean_dec_ref(v_s_923_);
v___x_934_ = lean_nat_add(v_column_927_, v___x_933_);
lean_dec(v_column_927_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 2, v___x_934_);
lean_ctor_set(v___x_929_, 0, v___x_932_);
v___x_936_ = v___x_929_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_tagStack_926_);
lean_ctor_set(v_reuseFailAlloc_938_, 2, v___x_934_);
v___x_936_ = v_reuseFailAlloc_938_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
lean_object* v___x_937_; 
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_931_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
return v___x_937_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1(uint32_t v___x_940_, lean_object* v_s_941_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = lean_string_push(v_s_941_, v___x_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1___boxed(lean_object* v___x_943_, lean_object* v_s_944_){
_start:
{
uint32_t v___x_832__boxed_945_; lean_object* v_res_946_; 
v___x_832__boxed_945_ = lean_unbox_uint32(v___x_943_);
lean_dec(v___x_943_);
v_res_946_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1(v___x_832__boxed_945_, v_s_944_);
return v_res_946_;
}
}
static lean_object* _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_948_; lean_object* v___x_949_; 
v___x_948_ = 32;
v___x_949_ = lean_box_uint32(v___x_948_);
return v___x_949_;
}
}
static lean_object* _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1(void){
_start:
{
lean_object* v___x_950_; lean_object* v___f_951_; 
v___x_950_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1;
v___f_951_ = lean_alloc_closure((void*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1___boxed), 2, 1);
lean_closure_set(v___f_951_, 0, v___x_950_);
return v___f_951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2(lean_object* v_indent_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_out_954_; lean_object* v_tagStack_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_968_; 
v_out_954_ = lean_ctor_get(v___y_953_, 0);
v_tagStack_955_ = lean_ctor_get(v___y_953_, 1);
v_isSharedCheck_968_ = !lean_is_exclusive(v___y_953_);
if (v_isSharedCheck_968_ == 0)
{
lean_object* v_unused_969_; 
v_unused_969_ = lean_ctor_get(v___y_953_, 2);
lean_dec(v_unused_969_);
v___x_957_ = v___y_953_;
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_tagStack_955_);
lean_inc(v_out_954_);
lean_dec(v___y_953_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___f_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_959_ = lean_box(0);
v___x_960_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
v___f_961_ = lean_obj_once(&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1, &l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1_once, _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1);
lean_inc(v_indent_952_);
v___x_962_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_961_, v_indent_952_, v___x_960_);
v___x_963_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_962_, v_out_954_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 2, v_indent_952_);
lean_ctor_set(v___x_957_, 0, v___x_963_);
v___x_965_ = v___x_957_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_963_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_tagStack_955_);
lean_ctor_set(v_reuseFailAlloc_967_, 2, v_indent_952_);
v___x_965_ = v_reuseFailAlloc_967_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_959_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
return v___x_966_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3(lean_object* v_____do__lift_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_column_972_; lean_object* v___x_973_; 
v_column_972_ = lean_ctor_get(v_____do__lift_970_, 2);
lean_inc(v_column_972_);
v___x_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_973_, 0, v_column_972_);
lean_ctor_set(v___x_973_, 1, v___y_971_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3___boxed(lean_object* v_____do__lift_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3(v_____do__lift_974_, v___y_975_);
lean_dec_ref(v_____do__lift_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__4(lean_object* v_n_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_out_979_; lean_object* v_tagStack_980_; lean_object* v_column_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_994_; 
v_out_979_ = lean_ctor_get(v___y_978_, 0);
v_tagStack_980_ = lean_ctor_get(v___y_978_, 1);
v_column_981_ = lean_ctor_get(v___y_978_, 2);
v_isSharedCheck_994_ = !lean_is_exclusive(v___y_978_);
if (v_isSharedCheck_994_ == 0)
{
v___x_983_ = v___y_978_;
v_isShared_984_ = v_isSharedCheck_994_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_column_981_);
lean_inc(v_tagStack_980_);
lean_inc(v_out_979_);
lean_dec(v___y_978_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_994_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_985_ = lean_box(0);
v___x_986_ = ((lean_object*)(l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0));
lean_inc(v_column_981_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_column_981_);
lean_ctor_set(v___x_987_, 1, v_out_979_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v_n_977_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
lean_ctor_set(v___x_989_, 1, v_tagStack_980_);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 1, v___x_989_);
lean_ctor_set(v___x_983_, 0, v___x_986_);
v___x_991_ = v___x_983_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_993_, 2, v_column_981_);
v___x_991_ = v_reuseFailAlloc_993_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_992_; 
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_985_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
return v___x_992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__5(lean_object* v_acc_995_, lean_object* v_x_996_){
_start:
{
lean_object* v_snd_997_; lean_object* v_fst_998_; lean_object* v_fst_999_; lean_object* v_snd_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1008_; 
v_snd_997_ = lean_ctor_get(v_x_996_, 1);
lean_inc(v_snd_997_);
v_fst_998_ = lean_ctor_get(v_x_996_, 0);
lean_inc(v_fst_998_);
lean_dec_ref(v_x_996_);
v_fst_999_ = lean_ctor_get(v_snd_997_, 0);
v_snd_1000_ = lean_ctor_get(v_snd_997_, 1);
v_isSharedCheck_1008_ = !lean_is_exclusive(v_snd_997_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1002_ = v_snd_997_;
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_snd_1000_);
lean_inc(v_fst_999_);
lean_dec(v_snd_997_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v_fst_999_);
lean_ctor_set(v___x_1002_, 0, v_fst_998_);
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_fst_998_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_fst_999_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_Widget_TaggedText_appendTag___redArg(v_snd_1000_, v___x_1005_, v_acc_995_);
return v___x_1006_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6(lean_object* v___f_1011_, lean_object* v_n_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_out_1014_; lean_object* v_tagStack_1015_; lean_object* v_column_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1029_; 
v_out_1014_ = lean_ctor_get(v___y_1013_, 0);
v_tagStack_1015_ = lean_ctor_get(v___y_1013_, 1);
v_column_1016_ = lean_ctor_get(v___y_1013_, 2);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___y_1013_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1018_ = v___y_1013_;
v_isShared_1019_ = v_isSharedCheck_1029_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_column_1016_);
lean_inc(v_tagStack_1015_);
lean_inc(v_out_1014_);
lean_dec(v___y_1013_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1029_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v_out_x27_1024_; lean_object* v___x_1026_; 
v___x_1020_ = lean_box(0);
v___x_1021_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_n_1012_);
lean_inc(v_tagStack_1015_);
v___x_1022_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1015_, v_tagStack_1015_, v_n_1012_, v___x_1021_);
v___x_1023_ = l_List_drop___redArg(v_n_1012_, v_tagStack_1015_);
lean_dec(v_tagStack_1015_);
v_out_x27_1024_ = l_List_foldl___redArg(v___f_1011_, v_out_1014_, v___x_1022_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 1, v___x_1023_);
lean_ctor_set(v___x_1018_, 0, v_out_x27_1024_);
v___x_1026_ = v___x_1018_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_out_x27_1024_);
lean_ctor_set(v_reuseFailAlloc_1028_, 1, v___x_1023_);
lean_ctor_set(v_reuseFailAlloc_1028_, 2, v_column_1016_);
v___x_1026_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1020_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
return v___x_1027_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
lean_object* v_zero_1052_; uint8_t v_isZero_1053_; 
v_zero_1052_ = lean_unsigned_to_nat(0u);
v_isZero_1053_ = lean_nat_dec_eq(v_x_1050_, v_zero_1052_);
if (v_isZero_1053_ == 1)
{
lean_dec(v_x_1050_);
return v_x_1051_;
}
else
{
uint32_t v___x_1054_; lean_object* v_one_1055_; lean_object* v_n_1056_; lean_object* v___x_1057_; 
v___x_1054_ = 32;
v_one_1055_ = lean_unsigned_to_nat(1u);
v_n_1056_ = lean_nat_sub(v_x_1050_, v_one_1055_);
lean_dec(v_x_1050_);
v___x_1057_ = lean_string_push(v_x_1051_, v___x_1054_);
v_x_1050_ = v_n_1056_;
v_x_1051_ = v___x_1057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(lean_object* v_fla_1059_, uint8_t v_flb_1060_, lean_object* v_tail_1061_, lean_object* v_is_x27_1062_){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1063_, 0, v_fla_1059_);
lean_ctor_set(v___x_1063_, 1, v_is_x27_1062_);
lean_ctor_set_uint8(v___x_1063_, sizeof(void*)*2, v_flb_1060_);
v___x_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set(v___x_1064_, 1, v_tail_1061_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0___boxed(lean_object* v_fla_1065_, lean_object* v_flb_1066_, lean_object* v_tail_1067_, lean_object* v_is_x27_1068_){
_start:
{
uint8_t v_flb_6239__boxed_1069_; lean_object* v_res_1070_; 
v_flb_6239__boxed_1069_ = lean_unbox(v_flb_1066_);
v_res_1070_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1065_, v_flb_6239__boxed_1069_, v_tail_1067_, v_is_x27_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(uint8_t v_flb_1071_, lean_object* v_items_1072_, lean_object* v_gs_1073_, lean_object* v_w_1074_, lean_object* v___y_1075_){
_start:
{
uint8_t v___y_1077_; lean_object* v_column_1082_; uint8_t v___x_1083_; uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v_g_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v_r_1090_; lean_object* v___y_1092_; uint8_t v_foundLine_1097_; lean_object* v_space_1098_; uint8_t v___x_1099_; 
v_column_1082_ = lean_ctor_get(v___y_1075_, 2);
v___x_1083_ = 0;
v___x_1084_ = l_Std_Format_instBEqFlattenBehavior_beq(v_flb_1071_, v___x_1083_);
v___x_1085_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1085_, 0, v___x_1084_);
lean_inc(v_items_1072_);
v_g_1086_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_g_1086_, 0, v___x_1085_);
lean_ctor_set(v_g_1086_, 1, v_items_1072_);
lean_ctor_set_uint8(v_g_1086_, sizeof(void*)*2, v_flb_1071_);
v___x_1087_ = lean_box(0);
v___x_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1088_, 0, v_g_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_nat_sub(v_w_1074_, v_column_1082_);
lean_inc(v___x_1089_);
lean_inc(v_column_1082_);
v_r_1090_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v___x_1088_, v_column_1082_, v___x_1089_);
v_foundLine_1097_ = lean_ctor_get_uint8(v_r_1090_, sizeof(void*)*1);
v_space_1098_ = lean_ctor_get(v_r_1090_, 0);
lean_inc(v_space_1098_);
v___x_1099_ = lean_nat_dec_lt(v___x_1089_, v_space_1098_);
if (v___x_1099_ == 0)
{
if (v_foundLine_1097_ == 0)
{
lean_object* v___x_1100_; lean_object* v_r_u2082_1101_; uint8_t v_foundLine_1102_; uint8_t v_foundFlattenedHardLine_1103_; lean_object* v_space_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1112_; 
v___x_1100_ = lean_nat_sub(v___x_1089_, v_space_1098_);
lean_inc(v_column_1082_);
lean_inc(v_gs_1073_);
v_r_u2082_1101_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v_gs_1073_, v_column_1082_, v___x_1100_);
v_foundLine_1102_ = lean_ctor_get_uint8(v_r_u2082_1101_, sizeof(void*)*1);
v_foundFlattenedHardLine_1103_ = lean_ctor_get_uint8(v_r_u2082_1101_, sizeof(void*)*1 + 1);
v_space_1104_ = lean_ctor_get(v_r_u2082_1101_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_r_u2082_1101_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1106_ = v_r_u2082_1101_;
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_space_1104_);
lean_dec(v_r_u2082_1101_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1108_ = lean_nat_add(v_space_1098_, v_space_1104_);
lean_dec(v_space_1104_);
lean_dec(v_space_1098_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v___x_1108_);
v___x_1110_ = v___x_1106_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*1, v_foundLine_1102_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_1103_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
v___y_1092_ = v___x_1110_;
goto v___jp_1091_;
}
}
}
else
{
lean_dec(v_space_1098_);
lean_inc_ref(v_r_1090_);
v___y_1092_ = v_r_1090_;
goto v___jp_1091_;
}
}
else
{
lean_dec(v_space_1098_);
lean_inc_ref(v_r_1090_);
v___y_1092_ = v_r_1090_;
goto v___jp_1091_;
}
v___jp_1076_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1078_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1078_, 0, v___y_1077_);
v___x_1079_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v_items_1072_);
lean_ctor_set_uint8(v___x_1079_, sizeof(void*)*2, v_flb_1071_);
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set(v___x_1080_, 1, v_gs_1073_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___y_1075_);
return v___x_1081_;
}
v___jp_1091_:
{
uint8_t v_foundFlattenedHardLine_1093_; 
v_foundFlattenedHardLine_1093_ = lean_ctor_get_uint8(v_r_1090_, sizeof(void*)*1 + 1);
lean_dec_ref(v_r_1090_);
if (v_foundFlattenedHardLine_1093_ == 0)
{
lean_object* v_space_1094_; uint8_t v___x_1095_; 
v_space_1094_ = lean_ctor_get(v___y_1092_, 0);
lean_inc(v_space_1094_);
lean_dec_ref(v___y_1092_);
v___x_1095_ = lean_nat_dec_le(v_space_1094_, v___x_1089_);
lean_dec(v___x_1089_);
lean_dec(v_space_1094_);
v___y_1077_ = v___x_1095_;
goto v___jp_1076_;
}
else
{
uint8_t v___x_1096_; 
lean_dec_ref(v___y_1092_);
lean_dec(v___x_1089_);
v___x_1096_ = 0;
v___y_1077_ = v___x_1096_;
goto v___jp_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4___boxed(lean_object* v_flb_1113_, lean_object* v_items_1114_, lean_object* v_gs_1115_, lean_object* v_w_1116_, lean_object* v___y_1117_){
_start:
{
uint8_t v_flb_boxed_1118_; lean_object* v_res_1119_; 
v_flb_boxed_1118_ = lean_unbox(v_flb_1113_);
v_res_1119_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_boxed_1118_, v_items_1114_, v_gs_1115_, v_w_1116_, v___y_1117_);
lean_dec(v_w_1116_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(lean_object* v_x_1120_, lean_object* v_x_1121_){
_start:
{
if (lean_obj_tag(v_x_1121_) == 0)
{
return v_x_1120_;
}
else
{
lean_object* v_head_1122_; lean_object* v_snd_1123_; lean_object* v_tail_1124_; lean_object* v_fst_1125_; lean_object* v_fst_1126_; lean_object* v_snd_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1136_; 
v_head_1122_ = lean_ctor_get(v_x_1121_, 0);
lean_inc(v_head_1122_);
v_snd_1123_ = lean_ctor_get(v_head_1122_, 1);
lean_inc(v_snd_1123_);
v_tail_1124_ = lean_ctor_get(v_x_1121_, 1);
lean_inc(v_tail_1124_);
lean_dec_ref_known(v_x_1121_, 2);
v_fst_1125_ = lean_ctor_get(v_head_1122_, 0);
lean_inc(v_fst_1125_);
lean_dec(v_head_1122_);
v_fst_1126_ = lean_ctor_get(v_snd_1123_, 0);
v_snd_1127_ = lean_ctor_get(v_snd_1123_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_snd_1123_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1129_ = v_snd_1123_;
v_isShared_1130_ = v_isSharedCheck_1136_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_snd_1127_);
lean_inc(v_fst_1126_);
lean_dec(v_snd_1123_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1136_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 1, v_fst_1126_);
lean_ctor_set(v___x_1129_, 0, v_fst_1125_);
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_fst_1125_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_fst_1126_);
v___x_1132_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lean_Widget_TaggedText_appendTag___redArg(v_snd_1127_, v___x_1132_, v_x_1120_);
v_x_1120_ = v___x_1133_;
v_x_1121_ = v_tail_1124_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = lean_box(0);
v___x_1138_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19));
v___x_1139_ = l_instInhabitedOfMonad___redArg(v___x_1138_, v___x_1137_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5(lean_object* v_msg_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_6144__overap_1143_; lean_object* v___x_1144_; 
v___x_1142_ = lean_obj_once(&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0, &l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0_once, _init_l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0);
v___x_6144__overap_1143_ = lean_panic_fn_borrowed(v___x_1142_, v_msg_1140_);
v___x_1144_ = lean_apply_1(v___x_6144__overap_1143_, v___y_1141_);
return v___x_1144_;
}
}
static lean_object* _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0));
v___x_1147_ = lean_string_length(v___x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(lean_object* v_w_1149_, lean_object* v_x_1150_, lean_object* v___y_1151_){
_start:
{
if (lean_obj_tag(v_x_1150_) == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set(v___x_1153_, 1, v___y_1151_);
return v___x_1153_;
}
else
{
lean_object* v_head_1154_; lean_object* v_items_1155_; 
v_head_1154_ = lean_ctor_get(v_x_1150_, 0);
v_items_1155_ = lean_ctor_get(v_head_1154_, 1);
lean_inc(v_items_1155_);
if (lean_obj_tag(v_items_1155_) == 0)
{
lean_object* v_tail_1156_; 
v_tail_1156_ = lean_ctor_get(v_x_1150_, 1);
lean_inc(v_tail_1156_);
lean_dec_ref_known(v_x_1150_, 2);
v_x_1150_ = v_tail_1156_;
goto _start;
}
else
{
lean_object* v_head_1158_; lean_object* v_tail_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1510_; 
lean_inc(v_head_1154_);
v_head_1158_ = lean_ctor_get(v_items_1155_, 0);
lean_inc(v_head_1158_);
v_tail_1159_ = lean_ctor_get(v_x_1150_, 1);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_x_1150_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; 
v_unused_1511_ = lean_ctor_get(v_x_1150_, 0);
lean_dec(v_unused_1511_);
v___x_1161_ = v_x_1150_;
v_isShared_1162_ = v_isSharedCheck_1510_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_tail_1159_);
lean_dec(v_x_1150_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1510_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v_fla_1163_; uint8_t v_flb_1164_; lean_object* v_tail_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1508_; 
v_fla_1163_ = lean_ctor_get(v_head_1154_, 0);
lean_inc(v_fla_1163_);
v_flb_1164_ = lean_ctor_get_uint8(v_head_1154_, sizeof(void*)*2);
lean_dec(v_head_1154_);
v_tail_1165_ = lean_ctor_get(v_items_1155_, 1);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_items_1155_);
if (v_isSharedCheck_1508_ == 0)
{
lean_object* v_unused_1509_; 
v_unused_1509_ = lean_ctor_get(v_items_1155_, 0);
lean_dec(v_unused_1509_);
v___x_1167_ = v_items_1155_;
v_isShared_1168_ = v_isSharedCheck_1508_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_tail_1165_);
lean_dec(v_items_1155_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1508_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v_f_1169_; lean_object* v_indent_1170_; lean_object* v_activeTags_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1507_; 
v_f_1169_ = lean_ctor_get(v_head_1158_, 0);
v_indent_1170_ = lean_ctor_get(v_head_1158_, 1);
v_activeTags_1171_ = lean_ctor_get(v_head_1158_, 2);
v_isSharedCheck_1507_ = !lean_is_exclusive(v_head_1158_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1173_ = v_head_1158_;
v_isShared_1174_ = v_isSharedCheck_1507_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_activeTags_1171_);
lean_inc(v_indent_1170_);
lean_inc(v_f_1169_);
lean_dec(v_head_1158_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1507_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
uint8_t v___y_1216_; 
switch(lean_obj_tag(v_f_1169_))
{
case 0:
{
lean_object* v_out_1233_; lean_object* v_tagStack_1234_; lean_object* v_column_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1248_; 
lean_del_object(v___x_1173_);
lean_dec(v_indent_1170_);
lean_del_object(v___x_1167_);
lean_del_object(v___x_1161_);
v_out_1233_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1234_ = lean_ctor_get(v___y_1151_, 1);
v_column_1235_ = lean_ctor_get(v___y_1151_, 2);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1237_ = v___y_1151_;
v_isShared_1238_ = v_isSharedCheck_1248_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_column_1235_);
lean_inc(v_tagStack_1234_);
lean_inc(v_out_1233_);
lean_dec(v___y_1151_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1248_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v_out_x27_1242_; lean_object* v___x_1244_; 
v___x_1239_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1234_);
v___x_1240_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1234_, v_tagStack_1234_, v_activeTags_1171_, v___x_1239_);
v___x_1241_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1234_);
lean_dec(v_tagStack_1234_);
v_out_x27_1242_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v_out_1233_, v___x_1240_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 1, v___x_1241_);
lean_ctor_set(v___x_1237_, 0, v_out_x27_1242_);
v___x_1244_ = v___x_1237_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_out_x27_1242_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1247_, 2, v_column_1235_);
v___x_1244_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; 
v___x_1245_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1245_;
v___y_1151_ = v___x_1244_;
goto _start;
}
}
}
case 1:
{
lean_del_object(v___x_1173_);
lean_del_object(v___x_1167_);
lean_del_object(v___x_1161_);
if (v_flb_1164_ == 0)
{
uint8_t v___x_1249_; 
v___x_1249_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1163_);
if (v___x_1249_ == 0)
{
lean_object* v_out_1250_; lean_object* v_tagStack_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1268_; 
v_out_1250_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1251_ = lean_ctor_get(v___y_1151_, 1);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1268_ == 0)
{
lean_object* v_unused_1269_; 
v_unused_1269_ = lean_ctor_get(v___y_1151_, 2);
lean_dec(v_unused_1269_);
v___x_1253_ = v___y_1151_;
v_isShared_1254_ = v_isSharedCheck_1268_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_tagStack_1251_);
lean_inc(v_out_1250_);
lean_dec(v___y_1151_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1268_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v_out_x27_1262_; lean_object* v___x_1264_; 
v___x_1255_ = l_Int_toNat(v_indent_1170_);
lean_dec(v_indent_1170_);
v___x_1256_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1255_);
v___x_1257_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1255_, v___x_1256_);
v___x_1258_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1257_, v_out_1250_);
v___x_1259_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1251_);
v___x_1260_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1251_, v_tagStack_1251_, v_activeTags_1171_, v___x_1259_);
v___x_1261_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1251_);
lean_dec(v_tagStack_1251_);
v_out_x27_1262_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1258_, v___x_1260_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 2, v___x_1255_);
lean_ctor_set(v___x_1253_, 1, v___x_1261_);
lean_ctor_set(v___x_1253_, 0, v_out_x27_1262_);
v___x_1264_ = v___x_1253_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_out_x27_1262_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v___x_1261_);
lean_ctor_set(v_reuseFailAlloc_1267_, 2, v___x_1255_);
v___x_1264_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; 
v___x_1265_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1265_;
v___y_1151_ = v___x_1264_;
goto _start;
}
}
}
else
{
lean_object* v_out_1270_; lean_object* v_tagStack_1271_; lean_object* v_column_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1289_; 
lean_dec(v_indent_1170_);
v_out_1270_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1271_ = lean_ctor_get(v___y_1151_, 1);
v_column_1272_ = lean_ctor_get(v___y_1151_, 2);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1274_ = v___y_1151_;
v_isShared_1275_ = v_isSharedCheck_1289_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_column_1272_);
lean_inc(v_tagStack_1271_);
lean_inc(v_out_1270_);
lean_dec(v___y_1151_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1289_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v_out_x27_1283_; lean_object* v___x_1285_; 
v___x_1276_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0));
v___x_1277_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1276_, v_out_1270_);
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = lean_nat_add(v_column_1272_, v___x_1278_);
lean_dec(v_column_1272_);
v___x_1280_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1271_);
v___x_1281_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1271_, v_tagStack_1271_, v_activeTags_1171_, v___x_1280_);
v___x_1282_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1271_);
lean_dec(v_tagStack_1271_);
v_out_x27_1283_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1277_, v___x_1281_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 2, v___x_1279_);
lean_ctor_set(v___x_1274_, 1, v___x_1282_);
lean_ctor_set(v___x_1274_, 0, v_out_x27_1283_);
v___x_1285_ = v___x_1274_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_out_x27_1283_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v___x_1282_);
lean_ctor_set(v_reuseFailAlloc_1288_, 2, v___x_1279_);
v___x_1285_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v___x_1286_; 
v___x_1286_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1286_;
v___y_1151_ = v___x_1285_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = l_Int_toNat(v_indent_1170_);
lean_dec(v_indent_1170_);
v___x_1291_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1163_);
lean_dec(v_fla_1163_);
if (v___x_1291_ == 0)
{
lean_object* v_out_1292_; lean_object* v_tagStack_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1311_; 
v_out_1292_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1293_ = lean_ctor_get(v___y_1151_, 1);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1311_ == 0)
{
lean_object* v_unused_1312_; 
v_unused_1312_ = lean_ctor_get(v___y_1151_, 2);
lean_dec(v_unused_1312_);
v___x_1295_ = v___y_1151_;
v_isShared_1296_ = v_isSharedCheck_1311_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_tagStack_1293_);
lean_inc(v_out_1292_);
lean_dec(v___y_1151_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1311_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v_out_x27_1303_; lean_object* v___x_1305_; 
v___x_1297_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1290_);
v___x_1298_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1290_, v___x_1297_);
v___x_1299_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1298_, v_out_1292_);
v___x_1300_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1293_);
v___x_1301_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1293_, v_tagStack_1293_, v_activeTags_1171_, v___x_1300_);
v___x_1302_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1293_);
lean_dec(v_tagStack_1293_);
v_out_x27_1303_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1299_, v___x_1301_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 2, v___x_1290_);
lean_ctor_set(v___x_1295_, 1, v___x_1302_);
lean_ctor_set(v___x_1295_, 0, v_out_x27_1303_);
v___x_1305_ = v___x_1295_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_out_x27_1303_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1310_, 2, v___x_1290_);
v___x_1305_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1306_; lean_object* v_fst_1307_; lean_object* v_snd_1308_; 
v___x_1306_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1164_, v_tail_1165_, v_tail_1159_, v_w_1149_, v___x_1305_);
v_fst_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_fst_1307_);
v_snd_1308_ = lean_ctor_get(v___x_1306_, 1);
lean_inc(v_snd_1308_);
lean_dec_ref(v___x_1306_);
v_x_1150_ = v_fst_1307_;
v___y_1151_ = v_snd_1308_;
goto _start;
}
}
}
else
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v_fst_1317_; 
v___x_1313_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0));
v___x_1314_ = lean_obj_once(&l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1, &l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1_once, _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1);
v___x_1315_ = lean_nat_sub(v_w_1149_, v___x_1314_);
lean_inc(v_tail_1159_);
lean_inc(v_tail_1165_);
v___x_1316_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1164_, v_tail_1165_, v_tail_1159_, v___x_1315_, v___y_1151_);
lean_dec(v___x_1315_);
v_fst_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_fst_1317_);
if (lean_obj_tag(v_fst_1317_) == 1)
{
lean_object* v_head_1318_; lean_object* v_snd_1319_; lean_object* v_fla_1320_; uint8_t v___x_1321_; 
v_head_1318_ = lean_ctor_get(v_fst_1317_, 0);
v_snd_1319_ = lean_ctor_get(v___x_1316_, 1);
lean_inc(v_snd_1319_);
lean_dec_ref(v___x_1316_);
v_fla_1320_ = lean_ctor_get(v_head_1318_, 0);
v___x_1321_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1320_);
if (v___x_1321_ == 0)
{
lean_object* v_out_1322_; lean_object* v_tagStack_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1341_; 
lean_dec_ref_known(v_fst_1317_, 2);
v_out_1322_ = lean_ctor_get(v_snd_1319_, 0);
v_tagStack_1323_ = lean_ctor_get(v_snd_1319_, 1);
v_isSharedCheck_1341_ = !lean_is_exclusive(v_snd_1319_);
if (v_isSharedCheck_1341_ == 0)
{
lean_object* v_unused_1342_; 
v_unused_1342_ = lean_ctor_get(v_snd_1319_, 2);
lean_dec(v_unused_1342_);
v___x_1325_ = v_snd_1319_;
v_isShared_1326_ = v_isSharedCheck_1341_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_tagStack_1323_);
lean_inc(v_out_1322_);
lean_dec(v_snd_1319_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1341_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v_out_x27_1333_; lean_object* v___x_1335_; 
v___x_1327_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1290_);
v___x_1328_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1290_, v___x_1327_);
v___x_1329_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1328_, v_out_1322_);
v___x_1330_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1323_);
v___x_1331_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1323_, v_tagStack_1323_, v_activeTags_1171_, v___x_1330_);
v___x_1332_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1323_);
lean_dec(v_tagStack_1323_);
v_out_x27_1333_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1329_, v___x_1331_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 2, v___x_1290_);
lean_ctor_set(v___x_1325_, 1, v___x_1332_);
lean_ctor_set(v___x_1325_, 0, v_out_x27_1333_);
v___x_1335_ = v___x_1325_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_out_x27_1333_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1332_);
lean_ctor_set(v_reuseFailAlloc_1340_, 2, v___x_1290_);
v___x_1335_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
lean_object* v___x_1336_; lean_object* v_fst_1337_; lean_object* v_snd_1338_; 
v___x_1336_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1164_, v_tail_1165_, v_tail_1159_, v_w_1149_, v___x_1335_);
v_fst_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_fst_1337_);
v_snd_1338_ = lean_ctor_get(v___x_1336_, 1);
lean_inc(v_snd_1338_);
lean_dec_ref(v___x_1336_);
v_x_1150_ = v_fst_1337_;
v___y_1151_ = v_snd_1338_;
goto _start;
}
}
}
else
{
lean_object* v_out_1343_; lean_object* v_tagStack_1344_; lean_object* v_column_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v___x_1290_);
lean_dec(v_tail_1165_);
lean_dec(v_tail_1159_);
v_out_1343_ = lean_ctor_get(v_snd_1319_, 0);
v_tagStack_1344_ = lean_ctor_get(v_snd_1319_, 1);
v_column_1345_ = lean_ctor_get(v_snd_1319_, 2);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_snd_1319_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1347_ = v_snd_1319_;
v_isShared_1348_ = v_isSharedCheck_1360_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_column_1345_);
lean_inc(v_tagStack_1344_);
lean_inc(v_out_1343_);
lean_dec(v_snd_1319_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1360_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v_out_x27_1355_; lean_object* v___x_1357_; 
v___x_1349_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1313_, v_out_1343_);
v___x_1350_ = lean_unsigned_to_nat(1u);
v___x_1351_ = lean_nat_add(v_column_1345_, v___x_1350_);
lean_dec(v_column_1345_);
v___x_1352_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1344_);
v___x_1353_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1344_, v_tagStack_1344_, v_activeTags_1171_, v___x_1352_);
v___x_1354_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1344_);
lean_dec(v_tagStack_1344_);
v_out_x27_1355_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1349_, v___x_1353_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 2, v___x_1351_);
lean_ctor_set(v___x_1347_, 1, v___x_1354_);
lean_ctor_set(v___x_1347_, 0, v_out_x27_1355_);
v___x_1357_ = v___x_1347_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_out_x27_1355_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1359_, 2, v___x_1351_);
v___x_1357_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
v_x_1150_ = v_fst_1317_;
v___y_1151_ = v___x_1357_;
goto _start;
}
}
}
}
else
{
lean_object* v_snd_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_dec(v_fst_1317_);
lean_dec(v___x_1290_);
lean_dec(v_activeTags_1171_);
lean_dec(v_tail_1165_);
lean_dec(v_tail_1159_);
v_snd_1361_ = lean_ctor_get(v___x_1316_, 1);
lean_inc(v_snd_1361_);
lean_dec_ref(v___x_1316_);
v___x_1362_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2));
v___x_1363_ = l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5(v___x_1362_, v_snd_1361_);
return v___x_1363_;
}
}
}
}
case 2:
{
uint8_t v_force_1364_; uint8_t v___x_1365_; 
lean_del_object(v___x_1173_);
lean_del_object(v___x_1167_);
lean_del_object(v___x_1161_);
v_force_1364_ = lean_ctor_get_uint8(v_f_1169_, 0);
lean_dec_ref_known(v_f_1169_, 0);
v___x_1365_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1163_);
if (v___x_1365_ == 0)
{
v___y_1216_ = v___x_1365_;
goto v___jp_1215_;
}
else
{
if (v_force_1364_ == 0)
{
v___y_1216_ = v___x_1365_;
goto v___jp_1215_;
}
else
{
goto v___jp_1175_;
}
}
}
case 3:
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1429_; 
lean_del_object(v___x_1161_);
v_a_1366_ = lean_ctor_get(v_f_1169_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v_f_1169_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1368_ = v_f_1169_;
v_isShared_1369_ = v_isSharedCheck_1429_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v_f_1169_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1429_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
uint32_t v___x_1370_; lean_object* v_p_1371_; lean_object* v___x_1372_; uint8_t v_decide_1373_; 
v___x_1370_ = 10;
lean_inc_ref(v_a_1366_);
v_p_1371_ = lean_string_posof(v_a_1366_, v___x_1370_);
v___x_1372_ = lean_string_utf8_byte_size(v_a_1366_);
v_decide_1373_ = lean_nat_dec_eq(v_p_1371_, v___x_1372_);
if (v_decide_1373_ == 0)
{
lean_object* v_out_1374_; lean_object* v_tagStack_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1408_; 
v_out_1374_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1375_ = lean_ctor_get(v___y_1151_, 1);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1408_ == 0)
{
lean_object* v_unused_1409_; 
v_unused_1409_ = lean_ctor_get(v___y_1151_, 2);
lean_dec(v_unused_1409_);
v___x_1377_ = v___y_1151_;
v_isShared_1378_ = v_isSharedCheck_1408_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_tagStack_1375_);
lean_inc(v_out_1374_);
lean_dec(v___y_1151_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1408_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = lean_string_utf8_extract(v_a_1366_, v___x_1379_, v_p_1371_);
v___x_1381_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1380_, v_out_1374_);
v___x_1382_ = l_Int_toNat(v_indent_1170_);
v___x_1383_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1382_);
v___x_1384_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1382_, v___x_1383_);
v___x_1385_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1384_, v___x_1381_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 2, v___x_1382_);
lean_ctor_set(v___x_1377_, 0, v___x_1385_);
v___x_1387_ = v___x_1377_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v_tagStack_1375_);
lean_ctor_set(v_reuseFailAlloc_1407_, 2, v___x_1382_);
v___x_1387_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1388_ = lean_string_utf8_next(v_a_1366_, v_p_1371_);
lean_dec(v_p_1371_);
v___x_1389_ = lean_string_utf8_extract(v_a_1366_, v___x_1388_, v___x_1372_);
lean_dec(v___x_1388_);
lean_dec_ref(v_a_1366_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 0, v___x_1389_);
v___x_1391_ = v___x_1368_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1393_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v___x_1391_);
v___x_1393_ = v___x_1173_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v_indent_1170_);
lean_ctor_set(v_reuseFailAlloc_1405_, 2, v_activeTags_1171_);
v___x_1393_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v_is_1395_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1393_);
v_is_1395_ = v___x_1167_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1393_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_tail_1165_);
v_is_1395_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1396_ = lean_box(1);
v___x_1397_ = l_Std_Format_instBEqFlattenAllowability_beq(v_fla_1163_, v___x_1396_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; lean_object* v_fst_1399_; lean_object* v_snd_1400_; 
lean_dec(v_fla_1163_);
v___x_1398_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1164_, v_is_1395_, v_tail_1159_, v_w_1149_, v___x_1387_);
v_fst_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_fst_1399_);
v_snd_1400_ = lean_ctor_get(v___x_1398_, 1);
lean_inc(v_snd_1400_);
lean_dec_ref(v___x_1398_);
v_x_1150_ = v_fst_1399_;
v___y_1151_ = v_snd_1400_;
goto _start;
}
else
{
lean_object* v___x_1402_; 
v___x_1402_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_is_1395_);
v_x_1150_ = v___x_1402_;
v___y_1151_ = v___x_1387_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_out_1410_; lean_object* v_tagStack_1411_; lean_object* v_column_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1428_; 
lean_dec(v_p_1371_);
lean_del_object(v___x_1368_);
lean_del_object(v___x_1173_);
lean_dec(v_indent_1170_);
lean_del_object(v___x_1167_);
v_out_1410_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1411_ = lean_ctor_get(v___y_1151_, 1);
v_column_1412_ = lean_ctor_get(v___y_1151_, 2);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1414_ = v___y_1151_;
v_isShared_1415_ = v_isSharedCheck_1428_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_column_1412_);
lean_inc(v_tagStack_1411_);
lean_inc(v_out_1410_);
lean_dec(v___y_1151_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1428_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v_out_x27_1422_; lean_object* v___x_1424_; 
lean_inc_ref(v_a_1366_);
v___x_1416_ = l_Lean_Widget_TaggedText_appendText___redArg(v_a_1366_, v_out_1410_);
v___x_1417_ = lean_string_length(v_a_1366_);
lean_dec_ref(v_a_1366_);
v___x_1418_ = lean_nat_add(v_column_1412_, v___x_1417_);
lean_dec(v_column_1412_);
v___x_1419_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1411_);
v___x_1420_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1411_, v_tagStack_1411_, v_activeTags_1171_, v___x_1419_);
v___x_1421_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1411_);
lean_dec(v_tagStack_1411_);
v_out_x27_1422_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1416_, v___x_1420_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 2, v___x_1418_);
lean_ctor_set(v___x_1414_, 1, v___x_1421_);
lean_ctor_set(v___x_1414_, 0, v_out_x27_1422_);
v___x_1424_ = v___x_1414_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_out_x27_1422_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v___x_1421_);
lean_ctor_set(v_reuseFailAlloc_1427_, 2, v___x_1418_);
v___x_1424_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1425_; 
v___x_1425_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1425_;
v___y_1151_ = v___x_1424_;
goto _start;
}
}
}
}
}
case 4:
{
lean_object* v_indent_1430_; lean_object* v_f_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
lean_del_object(v___x_1161_);
v_indent_1430_ = lean_ctor_get(v_f_1169_, 0);
lean_inc(v_indent_1430_);
v_f_1431_ = lean_ctor_get(v_f_1169_, 1);
lean_inc(v_f_1431_);
lean_dec_ref_known(v_f_1169_, 2);
v___x_1432_ = lean_int_add(v_indent_1170_, v_indent_1430_);
lean_dec(v_indent_1430_);
lean_dec(v_indent_1170_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1432_);
lean_ctor_set(v___x_1173_, 0, v_f_1431_);
v___x_1434_ = v___x_1173_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_f_1431_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_activeTags_1171_);
v___x_1434_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1436_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1434_);
v___x_1436_ = v___x_1167_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_tail_1165_);
v___x_1436_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1437_; 
v___x_1437_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v___x_1436_);
v_x_1150_ = v___x_1437_;
goto _start;
}
}
}
case 5:
{
lean_object* v_a_1441_; lean_object* v_a_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v_a_1441_ = lean_ctor_get(v_f_1169_, 0);
lean_inc(v_a_1441_);
v_a_1442_ = lean_ctor_get(v_f_1169_, 1);
lean_inc(v_a_1442_);
lean_dec_ref_known(v_f_1169_, 2);
v___x_1443_ = lean_unsigned_to_nat(0u);
lean_inc(v_indent_1170_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 2, v___x_1443_);
lean_ctor_set(v___x_1173_, 0, v_a_1441_);
v___x_1445_ = v___x_1173_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1441_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_indent_1170_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1446_; lean_object* v___x_1448_; 
v___x_1446_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1446_, 0, v_a_1442_);
lean_ctor_set(v___x_1446_, 1, v_indent_1170_);
lean_ctor_set(v___x_1446_, 2, v_activeTags_1171_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1446_);
v___x_1448_ = v___x_1167_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1446_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_tail_1165_);
v___x_1448_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
lean_object* v___x_1450_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v___x_1448_);
lean_ctor_set(v___x_1161_, 0, v___x_1445_);
v___x_1450_ = v___x_1161_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1445_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
lean_object* v___x_1451_; 
v___x_1451_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v___x_1450_);
v_x_1150_ = v___x_1451_;
goto _start;
}
}
}
}
case 6:
{
lean_object* v_a_1456_; uint8_t v_behavior_1457_; uint8_t v___x_1458_; 
lean_del_object(v___x_1161_);
v_a_1456_ = lean_ctor_get(v_f_1169_, 0);
lean_inc(v_a_1456_);
v_behavior_1457_ = lean_ctor_get_uint8(v_f_1169_, sizeof(void*)*1);
lean_dec_ref_known(v_f_1169_, 1);
v___x_1458_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1163_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1460_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v_a_1456_);
v___x_1460_ = v___x_1173_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1456_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_indent_1170_);
lean_ctor_set(v_reuseFailAlloc_1470_, 2, v_activeTags_1171_);
v___x_1460_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1461_ = lean_box(0);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 1, v___x_1461_);
lean_ctor_set(v___x_1167_, 0, v___x_1460_);
v___x_1463_ = v___x_1167_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v___x_1461_);
v___x_1463_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v_fst_1466_; lean_object* v_snd_1467_; 
v___x_1464_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v___x_1465_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_behavior_1457_, v___x_1463_, v___x_1464_, v_w_1149_, v___y_1151_);
v_fst_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_fst_1466_);
v_snd_1467_ = lean_ctor_get(v___x_1465_, 1);
lean_inc(v_snd_1467_);
lean_dec_ref(v___x_1465_);
v_x_1150_ = v_fst_1466_;
v___y_1151_ = v_snd_1467_;
goto _start;
}
}
}
else
{
lean_object* v___x_1472_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v_a_1456_);
v___x_1472_ = v___x_1173_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1456_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_indent_1170_);
lean_ctor_set(v_reuseFailAlloc_1478_, 2, v_activeTags_1171_);
v___x_1472_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___x_1474_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1472_);
v___x_1474_ = v___x_1167_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1472_);
lean_ctor_set(v_reuseFailAlloc_1477_, 1, v_tail_1165_);
v___x_1474_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
lean_object* v___x_1475_; 
v___x_1475_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v___x_1474_);
v_x_1150_ = v___x_1475_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_a_1479_; lean_object* v_a_1480_; lean_object* v_out_1481_; lean_object* v_tagStack_1482_; lean_object* v_column_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1506_; 
v_a_1479_ = lean_ctor_get(v_f_1169_, 0);
lean_inc(v_a_1479_);
v_a_1480_ = lean_ctor_get(v_f_1169_, 1);
lean_inc(v_a_1480_);
lean_dec_ref_known(v_f_1169_, 2);
v_out_1481_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1482_ = lean_ctor_get(v___y_1151_, 1);
v_column_1483_ = lean_ctor_get(v___y_1151_, 2);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1485_ = v___y_1151_;
v_isShared_1486_ = v_isSharedCheck_1506_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_column_1483_);
lean_inc(v_tagStack_1482_);
lean_inc(v_out_1481_);
lean_dec(v___y_1151_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1506_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1487_ = ((lean_object*)(l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0));
lean_inc(v_column_1483_);
v___x_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1488_, 0, v_column_1483_);
lean_ctor_set(v___x_1488_, 1, v_out_1481_);
v___x_1489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1489_, 0, v_a_1479_);
lean_ctor_set(v___x_1489_, 1, v___x_1488_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 1, v_tagStack_1482_);
lean_ctor_set(v___x_1167_, 0, v___x_1489_);
v___x_1491_ = v___x_1167_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1489_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_tagStack_1482_);
v___x_1491_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1493_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 1, v___x_1491_);
lean_ctor_set(v___x_1485_, 0, v___x_1487_);
v___x_1493_ = v___x_1485_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1487_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1504_, 2, v_column_1483_);
v___x_1493_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1497_; 
v___x_1494_ = lean_unsigned_to_nat(1u);
v___x_1495_ = lean_nat_add(v_activeTags_1171_, v___x_1494_);
lean_dec(v_activeTags_1171_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 2, v___x_1495_);
lean_ctor_set(v___x_1173_, 0, v_a_1480_);
v___x_1497_ = v___x_1173_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1480_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v_indent_1170_);
lean_ctor_set(v_reuseFailAlloc_1503_, 2, v___x_1495_);
v___x_1497_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
lean_object* v___x_1499_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v_tail_1165_);
lean_ctor_set(v___x_1161_, 0, v___x_1497_);
v___x_1499_ = v___x_1161_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1497_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_tail_1165_);
v___x_1499_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; 
v___x_1500_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v___x_1499_);
v_x_1150_ = v___x_1500_;
v___y_1151_ = v___x_1493_;
goto _start;
}
}
}
}
}
}
}
v___jp_1175_:
{
lean_object* v_out_1176_; lean_object* v_tagStack_1177_; lean_object* v_column_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1214_; 
v_out_1176_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1177_ = lean_ctor_get(v___y_1151_, 1);
v_column_1178_ = lean_ctor_get(v___y_1151_, 2);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1180_ = v___y_1151_;
v_isShared_1181_ = v_isSharedCheck_1214_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_column_1178_);
lean_inc(v_tagStack_1177_);
lean_inc(v_out_1176_);
lean_dec(v___y_1151_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1214_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; uint8_t v___x_1183_; 
lean_inc(v_column_1178_);
v___x_1182_ = lean_nat_to_int(v_column_1178_);
v___x_1183_ = lean_int_dec_lt(v___x_1182_, v_indent_1170_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v_out_x27_1191_; lean_object* v___x_1193_; 
lean_dec(v___x_1182_);
lean_dec(v_column_1178_);
v___x_1184_ = l_Int_toNat(v_indent_1170_);
lean_dec(v_indent_1170_);
v___x_1185_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1184_);
v___x_1186_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1184_, v___x_1185_);
v___x_1187_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1186_, v_out_1176_);
v___x_1188_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1177_);
v___x_1189_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1177_, v_tagStack_1177_, v_activeTags_1171_, v___x_1188_);
v___x_1190_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1177_);
lean_dec(v_tagStack_1177_);
v_out_x27_1191_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1187_, v___x_1189_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 2, v___x_1184_);
lean_ctor_set(v___x_1180_, 1, v___x_1190_);
lean_ctor_set(v___x_1180_, 0, v_out_x27_1191_);
v___x_1193_ = v___x_1180_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_out_x27_1191_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1190_);
lean_ctor_set(v_reuseFailAlloc_1196_, 2, v___x_1184_);
v___x_1193_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
lean_object* v___x_1194_; 
v___x_1194_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1194_;
v___y_1151_ = v___x_1193_;
goto _start;
}
}
else
{
lean_object* v___x_1197_; uint32_t v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v_out_x27_1208_; lean_object* v___x_1210_; 
v___x_1197_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0));
v___x_1198_ = 32;
v___x_1199_ = lean_int_sub(v_indent_1170_, v___x_1182_);
lean_dec(v___x_1182_);
lean_dec(v_indent_1170_);
v___x_1200_ = l_Int_toNat(v___x_1199_);
lean_dec(v___x_1199_);
v___x_1201_ = lean_string_pushn(v___x_1197_, v___x_1198_, v___x_1200_);
lean_inc_ref(v___x_1201_);
v___x_1202_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1201_, v_out_1176_);
v___x_1203_ = lean_string_length(v___x_1201_);
lean_dec_ref(v___x_1201_);
v___x_1204_ = lean_nat_add(v_column_1178_, v___x_1203_);
lean_dec(v_column_1178_);
v___x_1205_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1177_);
v___x_1206_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1177_, v_tagStack_1177_, v_activeTags_1171_, v___x_1205_);
v___x_1207_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1177_);
lean_dec(v_tagStack_1177_);
v_out_x27_1208_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1202_, v___x_1206_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 2, v___x_1204_);
lean_ctor_set(v___x_1180_, 1, v___x_1207_);
lean_ctor_set(v___x_1180_, 0, v_out_x27_1208_);
v___x_1210_ = v___x_1180_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_out_x27_1208_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1213_, 2, v___x_1204_);
v___x_1210_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1211_; 
v___x_1211_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1211_;
v___y_1151_ = v___x_1210_;
goto _start;
}
}
}
}
v___jp_1215_:
{
if (v___y_1216_ == 0)
{
goto v___jp_1175_;
}
else
{
lean_object* v_out_1217_; lean_object* v_tagStack_1218_; lean_object* v_column_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_indent_1170_);
v_out_1217_ = lean_ctor_get(v___y_1151_, 0);
v_tagStack_1218_ = lean_ctor_get(v___y_1151_, 1);
v_column_1219_ = lean_ctor_get(v___y_1151_, 2);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___y_1151_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1221_ = v___y_1151_;
v_isShared_1222_ = v_isSharedCheck_1232_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_column_1219_);
lean_inc(v_tagStack_1218_);
lean_inc(v_out_1217_);
lean_dec(v___y_1151_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1232_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v_out_x27_1226_; lean_object* v___x_1228_; 
v___x_1223_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1171_);
lean_inc(v_tagStack_1218_);
v___x_1224_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1218_, v_tagStack_1218_, v_activeTags_1171_, v___x_1223_);
v___x_1225_ = l_List_drop___redArg(v_activeTags_1171_, v_tagStack_1218_);
lean_dec(v_tagStack_1218_);
v_out_x27_1226_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v_out_1217_, v___x_1224_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 1, v___x_1225_);
lean_ctor_set(v___x_1221_, 0, v_out_x27_1226_);
v___x_1228_ = v___x_1221_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_out_x27_1226_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1225_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_column_1219_);
v___x_1228_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
lean_object* v___x_1229_; 
v___x_1229_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1163_, v_flb_1164_, v_tail_1159_, v_tail_1165_);
v_x_1150_ = v___x_1229_;
v___y_1151_ = v___x_1228_;
goto _start;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___boxed(lean_object* v_w_1512_, lean_object* v_x_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(v_w_1512_, v_x_1513_, v___y_1514_);
lean_dec(v_w_1512_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(lean_object* v_f_1516_, lean_object* v_w_1517_, lean_object* v_indent_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___x_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1520_ = lean_box(1);
v___x_1521_ = 0;
v___x_1522_ = lean_nat_to_int(v_indent_1518_);
v___x_1523_ = lean_unsigned_to_nat(0u);
v___x_1524_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1524_, 0, v_f_1516_);
lean_ctor_set(v___x_1524_, 1, v___x_1522_);
lean_ctor_set(v___x_1524_, 2, v___x_1523_);
v___x_1525_ = lean_box(0);
v___x_1526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1524_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1527_, 0, v___x_1520_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*2, v___x_1521_);
v___x_1528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
lean_ctor_set(v___x_1528_, 1, v___x_1525_);
v___x_1529_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(v_w_1517_, v___x_1528_, v___y_1519_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0___boxed(lean_object* v_f_1530_, lean_object* v_w_1531_, lean_object* v_indent_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(v_f_1530_, v_w_1531_, v_indent_1532_, v___y_1533_);
lean_dec(v_w_1531_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged(lean_object* v_f_1535_, lean_object* v_indent_1536_, lean_object* v_w_1537_){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v_snd_1540_; lean_object* v_out_1541_; 
v___x_1538_ = ((lean_object*)(l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1));
v___x_1539_ = l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(v_f_1535_, v_w_1537_, v_indent_1536_, v___x_1538_);
v_snd_1540_ = lean_ctor_get(v___x_1539_, 1);
lean_inc(v_snd_1540_);
lean_dec_ref(v___x_1539_);
v_out_1541_ = lean_ctor_get(v_snd_1540_, 0);
lean_inc_ref(v_out_1541_);
lean_dec(v_snd_1540_);
return v_out_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged___boxed(lean_object* v_f_1542_, lean_object* v_indent_1543_, lean_object* v_w_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_Widget_TaggedText_prettyTagged(v_f_1542_, v_indent_1543_, v_w_1544_);
lean_dec(v_w_1544_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__0(lean_object* v_a_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_nat_to_int(v_a_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(lean_object* v_acc_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; 
v___x_1550_ = lean_array_get_size(v_a_1549_);
v___x_1551_ = lean_unsigned_to_nat(0u);
v___x_1552_ = lean_nat_dec_eq(v___x_1550_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1553_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_sub(v___x_1550_, v___x_1554_);
v___x_1556_ = lean_array_get_borrowed(v___x_1553_, v_a_1549_, v___x_1555_);
switch(lean_obj_tag(v___x_1556_))
{
case 0:
{
lean_object* v_a_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
lean_dec(v___x_1555_);
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
v___x_1558_ = lean_string_append(v_acc_1548_, v_a_1557_);
v___x_1559_ = lean_array_pop(v_a_1549_);
v_acc_1548_ = v___x_1558_;
v_a_1549_ = v___x_1559_;
goto _start;
}
case 1:
{
lean_object* v_a_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_dec(v___x_1555_);
v_a_1561_ = lean_ctor_get(v___x_1556_, 0);
lean_inc_ref(v_a_1561_);
v___x_1562_ = lean_array_pop(v_a_1549_);
v___x_1563_ = l_Array_reverse___redArg(v_a_1561_);
v___x_1564_ = l_Array_append___redArg(v___x_1562_, v___x_1563_);
lean_dec_ref(v___x_1563_);
v_a_1549_ = v___x_1564_;
goto _start;
}
default: 
{
lean_object* v_a_1566_; lean_object* v___x_1567_; 
v_a_1566_ = lean_ctor_get(v___x_1556_, 1);
lean_inc_ref(v_a_1566_);
v___x_1567_ = lean_array_set(v_a_1549_, v___x_1555_, v_a_1566_);
lean_dec(v___x_1555_);
v_a_1549_ = v___x_1567_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_a_1549_);
return v_acc_1548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go(lean_object* v_00_u03b1_1569_, lean_object* v_acc_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(v_acc_1570_, v_a_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags___redArg(lean_object* v_tt_1573_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1574_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0));
v___x_1575_ = lean_unsigned_to_nat(1u);
v___x_1576_ = lean_mk_empty_array_with_capacity(v___x_1575_);
v___x_1577_ = lean_array_push(v___x_1576_, v_tt_1573_);
v___x_1578_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(v___x_1574_, v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags(lean_object* v_00_u03b1_1579_, lean_object* v_tt_1580_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Widget_TaggedText_stripTags___redArg(v_tt_1580_);
return v___x_1581_;
}
}
lean_object* runtime_initialize_Lean_Server_Rpc_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_TaggedText(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1 = _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_TaggedText(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Rpc_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_TaggedText(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_TaggedText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_TaggedText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_TaggedText(builtin);
}
#ifdef __cplusplus
}
#endif

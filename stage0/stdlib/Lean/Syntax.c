// Lean compiler output
// Module: Lean.Syntax
// Imports: public import Init.Data.Slice public import Init.Data.Hashable public import Lean.Data.Format public import Init.Data.Option.Coe public import Init.Data.String.Hashable import Init.Data.Range.Polymorphic.Iterators import Init.Data.ToString.Macro import Init.Omega import Init.Syntax
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Substring_Raw_beq(lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_getNumParts(lean_object*);
lean_object* l_Lean_Syntax_splitNameLit(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_instInhabitedRange_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instInhabitedRange_default___closed__0 = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instInhabitedRange_default = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instInhabitedRange = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Syntax_instReprRange_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__7;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "{ byteIdx := "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__18;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instReprRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instReprRange_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instReprRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instReprRange = (const lean_object*)&l_Lean_Syntax_instReprRange___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEqRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqRange_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEqRange = (const lean_object*)&l_Lean_Syntax_instBEqRange___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instHashableRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instHashableRange_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instHashableRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instHashableRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instHashableRange = (const lean_object*)&l_Lean_Syntax_instHashableRange___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_includes___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_overlaps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_updateTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_nonCanonicalSynthetic(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqSourceInfo__lean_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqSourceInfo__lean_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqSourceInfo__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqSourceInfo__lean_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqSourceInfo__lean___closed__0 = (const lean_object*)&l_Lean_instBEqSourceInfo__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqSourceInfo__lean = (const lean_object*)&l_Lean_instBEqSourceInfo__lean___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_isLitKind___closed__0 = (const lean_object*)&l_Lean_isLitKind___closed__0_value;
static const lean_ctor_object l_Lean_isLitKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_isLitKind___closed__1 = (const lean_object*)&l_Lean_isLitKind___closed__1_value;
static const lean_string_object l_Lean_isLitKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_isLitKind___closed__2 = (const lean_object*)&l_Lean_isLitKind___closed__2_value;
static const lean_ctor_object l_Lean_isLitKind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_isLitKind___closed__3 = (const lean_object*)&l_Lean_isLitKind___closed__3_value;
static const lean_string_object l_Lean_isLitKind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_isLitKind___closed__4 = (const lean_object*)&l_Lean_isLitKind___closed__4_value;
static const lean_ctor_object l_Lean_isLitKind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__4_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_isLitKind___closed__5 = (const lean_object*)&l_Lean_isLitKind___closed__5_value;
static const lean_string_object l_Lean_isLitKind___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_isLitKind___closed__6 = (const lean_object*)&l_Lean_isLitKind___closed__6_value;
static const lean_ctor_object l_Lean_isLitKind___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_isLitKind___closed__7 = (const lean_object*)&l_Lean_isLitKind___closed__7_value;
static const lean_string_object l_Lean_isLitKind___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_isLitKind___closed__8 = (const lean_object*)&l_Lean_isLitKind___closed__8_value;
static const lean_ctor_object l_Lean_isLitKind___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__8_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_isLitKind___closed__9 = (const lean_object*)&l_Lean_isLitKind___closed__9_value;
LEAN_EXPORT uint8_t l_Lean_isLitKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLitKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_modifyArgs(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reuse stopped:\n"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " !=\n"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value_aux_0),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value_aux_1),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfoAndTraceReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfoAndTraceReuse___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_getAtomVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Syntax_getAtomVal___closed__0 = (const lean_object*)&l_Lean_Syntax_getAtomVal___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setAtomVal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_asNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_asNode___closed__0 = (const lean_object*)&l_Lean_Syntax_asNode___closed__0_value;
static const lean_string_object l_Lean_Syntax_asNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Syntax_asNode___closed__1 = (const lean_object*)&l_Lean_Syntax_asNode___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_asNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_asNode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Syntax_asNode___closed__2 = (const lean_object*)&l_Lean_Syntax_asNode___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_asNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Syntax_asNode___closed__2_value),((lean_object*)&l_Lean_Syntax_asNode___closed__0_value)}};
static const lean_object* l_Lean_Syntax_asNode___closed__3 = (const lean_object*)&l_Lean_Syntax_asNode___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasIdent(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasIdent___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArgs(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Syntax_modifyArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_modifyArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__0 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__0_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__1 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__1_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__2 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__2_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__3 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__3_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__4 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__4_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__5 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__5_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__6 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__0_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__1_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__7 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__7_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__7_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__2_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__3_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__4_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__5_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__8 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__8_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__6_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__9 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateLeadingAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___boxed__const__1 = (const lean_object*)&l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_updateLeading(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_updateTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0;
static const lean_array_object l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__1 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_identComponents_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_identComponents_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_getAtomVal___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__1_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Syntax"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__2 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__2_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Syntax.identComponents\?"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__3 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__3_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__4 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__4_value;
static lean_once_cell_t l_Lean_Syntax_identComponents_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_identComponents_x3f___closed__5;
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_identComponents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Syntax.identComponents"};
static const lean_object* l_Lean_Syntax_identComponents___closed__0 = (const lean_object*)&l_Lean_Syntax_identComponents___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_identComponents___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_identComponents___closed__1;
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_reprint(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasMissing(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasMissing___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_Traverser_fromSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_Traverser_fromSyntax___closed__0 = (const lean_object*)&l_Lean_Syntax_Traverser_fromSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_setCur(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_down(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_up(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_right(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkListNode(lean_object*);
static const lean_string_object l_Lean_Syntax_isQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Syntax_isQuot___closed__0 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__0_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dynamicQuot"};
static const lean_object* l_Lean_Syntax_isQuot___closed__1 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__1_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Syntax_isQuot___closed__2 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__2_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Syntax_isQuot___closed__3 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__3_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Syntax_isQuot___closed__4 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isQuot___boxed(lean_object*);
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_0),((lean_object*)&l_Lean_Syntax_isQuot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_1),((lean_object*)&l_Lean_Syntax_isQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_2),((lean_object*)&l_Lean_Syntax_isQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 123, 139, 164, 173, 191, 116, 242)}};
static const lean_object* l_Lean_Syntax_getQuotContent___closed__0 = (const lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getQuotContent(lean_object*);
static const lean_string_object l_Lean_Syntax_isAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Syntax_isAntiquot___closed__0 = (const lean_object*)&l_Lean_Syntax_isAntiquot___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquots(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquots___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object*);
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__1;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 12, 45, 178, 67, 53, 106)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__2 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__3;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pseudo"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__4 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 255, 48, 87, 29, 98, 48, 237)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__5 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__5_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__6 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__7 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__7_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__8 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__8_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__9;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__10;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__11 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__11_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_0),((lean_object*)&l_Lean_Syntax_isQuot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_1),((lean_object*)&l_Lean_Syntax_isQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_2),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__11_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__12 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "antiquotNestedExpr"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__13 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__13_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__13_value),LEAN_SCALAR_PTR_LITERAL(4, 217, 111, 200, 191, 162, 168, 125)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__14 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__14_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__15 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__15_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__16;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__17 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__17_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__18;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__19;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isEscapedAntiquot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_unescapeAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKinds(lean_object*);
static const lean_string_object l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "antiquot_scope"};
static const lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSplice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "antiquot_splice"};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 54, 194, 194, 68, 126, 190, 193)}};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__1 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__1_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__2 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__3;
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__4 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__4_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__5;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSpliceNode(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "antiquot_suffix_splice"};
static const lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSuffixSplice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner___boxed(lean_object*);
static const lean_ctor_object l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 22, 214, 220, 194, 127, 23, 217)}};
static const lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_isTokenAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "token_antiquot"};
static const lean_object* l_Lean_Syntax_isTokenAntiquot___closed__0 = (const lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isTokenAntiquot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 159, 231, 44, 235, 156, 55, 135)}};
static const lean_object* l_Lean_Syntax_isTokenAntiquot___closed__1 = (const lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isTokenAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAnyAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAnyAntiquot___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_findStack_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Syntax_Stack_matches_spec__0___boxed(lean_object*);
static const lean_array_object l_Lean_Syntax_Stack_matches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_Stack_matches___closed__0 = (const lean_object*)&l_Lean_Syntax_Stack_matches___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Syntax_instReprRange_repr_spec__0(lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_nat_to_int(v_a_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(9u);
v___x_21_ = lean_nat_to_int(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(8u);
v___x_35_ = lean_nat_to_int(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__0));
v___x_37_ = lean_string_length(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__17, &l_Lean_Syntax_instReprRange_repr___redArg___closed__17_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__17);
v___x_39_ = lean_nat_to_int(v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___redArg(lean_object* v_x_42_){
_start:
{
lean_object* v_start_43_; lean_object* v_stop_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_84_; 
v_start_43_ = lean_ctor_get(v_x_42_, 0);
v_stop_44_ = lean_ctor_get(v_x_42_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_42_);
if (v_isSharedCheck_84_ == 0)
{
v___x_46_ = v_x_42_;
v_isShared_47_ = v_isSharedCheck_84_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_stop_44_);
lean_inc(v_start_43_);
lean_dec(v_x_42_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_84_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_48_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__5));
v___x_49_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__7, &l_Lean_Syntax_instReprRange_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__7);
v___x_51_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__9));
v___x_52_ = l_Nat_reprFast(v_start_43_);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 5);
lean_ctor_set(v___x_46_, 1, v___x_53_);
lean_ctor_set(v___x_46_, 0, v___x_51_);
v___x_55_ = v___x_46_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_51_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_53_);
v___x_55_ = v_reuseFailAlloc_83_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_56_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__11));
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_50_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = 0;
v___x_60_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*1, v___x_59_);
v___x_61_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_49_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__13));
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = lean_box(1);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__15));
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___x_48_);
v___x_69_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__16, &l_Lean_Syntax_instReprRange_repr___redArg___closed__16_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__16);
v___x_70_ = l_Nat_reprFast(v_stop_44_);
v___x_71_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_51_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_56_);
v___x_74_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_69_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set_uint8(v___x_75_, sizeof(void*)*1, v___x_59_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_68_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__18, &l_Lean_Syntax_instReprRange_repr___redArg___closed__18_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__18);
v___x_78_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__19));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_76_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_56_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_77_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_59_);
return v___x_82_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Syntax_instReprRange_repr___redArg(v_x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___boxed(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Syntax_instReprRange_repr(v_x_88_, v_prec_89_);
lean_dec(v_prec_89_);
return v_res_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_start_95_; lean_object* v_stop_96_; lean_object* v_start_97_; lean_object* v_stop_98_; uint8_t v_decide_99_; 
v_start_95_ = lean_ctor_get(v_x_93_, 0);
v_stop_96_ = lean_ctor_get(v_x_93_, 1);
v_start_97_ = lean_ctor_get(v_x_94_, 0);
v_stop_98_ = lean_ctor_get(v_x_94_, 1);
v_decide_99_ = lean_nat_dec_eq(v_start_95_, v_start_97_);
if (v_decide_99_ == 0)
{
return v_decide_99_;
}
else
{
uint8_t v_decide_100_; 
v_decide_100_ = lean_nat_dec_eq(v_stop_96_, v_stop_98_);
return v_decide_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object* v_x_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Lean_Syntax_instBEqRange_beq(v_x_101_, v_x_102_);
lean_dec_ref(v_x_102_);
lean_dec_ref(v_x_101_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object* v_x_107_){
_start:
{
lean_object* v_start_108_; lean_object* v_stop_109_; uint64_t v___x_110_; uint64_t v___x_111_; uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v___x_114_; 
v_start_108_ = lean_ctor_get(v_x_107_, 0);
v_stop_109_ = lean_ctor_get(v_x_107_, 1);
v___x_110_ = 0ULL;
v___x_111_ = l_String_instHashableRaw_hash(v_start_108_);
v___x_112_ = lean_uint64_mix_hash(v___x_110_, v___x_111_);
v___x_113_ = l_String_instHashableRaw_hash(v_stop_109_);
v___x_114_ = lean_uint64_mix_hash(v___x_112_, v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object* v_x_115_){
_start:
{
uint64_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_Syntax_instHashableRange_hash(v_x_115_);
lean_dec_ref(v_x_115_);
v_r_117_ = lean_box_uint64(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_contains(lean_object* v_r_120_, lean_object* v_pos_121_, uint8_t v_includeStop_122_){
_start:
{
lean_object* v_start_123_; lean_object* v_stop_124_; uint8_t v___x_125_; 
v_start_123_ = lean_ctor_get(v_r_120_, 0);
v_stop_124_ = lean_ctor_get(v_r_120_, 1);
v___x_125_ = lean_nat_dec_le(v_start_123_, v_pos_121_);
if (v___x_125_ == 0)
{
return v___x_125_;
}
else
{
if (v_includeStop_122_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_add(v_pos_121_, v___x_126_);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_stop_124_);
lean_dec(v___x_127_);
return v___x_128_;
}
else
{
uint8_t v___x_129_; 
v___x_129_ = lean_nat_dec_le(v_pos_121_, v_stop_124_);
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_contains___boxed(lean_object* v_r_130_, lean_object* v_pos_131_, lean_object* v_includeStop_132_){
_start:
{
uint8_t v_includeStop_boxed_133_; uint8_t v_res_134_; lean_object* v_r_135_; 
v_includeStop_boxed_133_ = lean_unbox(v_includeStop_132_);
v_res_134_ = l_Lean_Syntax_Range_contains(v_r_130_, v_pos_131_, v_includeStop_boxed_133_);
lean_dec(v_pos_131_);
lean_dec_ref(v_r_130_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_includes(lean_object* v_super_136_, lean_object* v_sub_137_, uint8_t v_includeSuperStop_138_, uint8_t v_includeSubStop_139_){
_start:
{
lean_object* v_start_140_; lean_object* v_stop_141_; lean_object* v_start_142_; lean_object* v_stop_143_; uint8_t v___y_145_; uint8_t v___x_151_; uint8_t v___y_153_; 
v_start_140_ = lean_ctor_get(v_super_136_, 0);
v_stop_141_ = lean_ctor_get(v_super_136_, 1);
v_start_142_ = lean_ctor_get(v_sub_137_, 0);
v_stop_143_ = lean_ctor_get(v_sub_137_, 1);
v___x_151_ = lean_nat_dec_le(v_start_140_, v_start_142_);
if (v___x_151_ == 0)
{
return v___x_151_;
}
else
{
if (v_includeSuperStop_138_ == 0)
{
v___y_153_ = v_includeSuperStop_138_;
goto v___jp_152_;
}
else
{
if (v_includeSubStop_139_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = lean_nat_add(v_stop_141_, v___x_154_);
v___x_156_ = lean_nat_dec_le(v_stop_143_, v___x_155_);
lean_dec(v___x_155_);
return v___x_156_;
}
else
{
uint8_t v___x_157_; 
v___x_157_ = 0;
v___y_153_ = v___x_157_;
goto v___jp_152_;
}
}
}
v___jp_144_:
{
if (v___y_145_ == 0)
{
uint8_t v___x_146_; 
v___x_146_ = lean_nat_dec_le(v_stop_143_, v_stop_141_);
return v___x_146_;
}
else
{
if (v_includeSubStop_139_ == 0)
{
uint8_t v___x_147_; 
v___x_147_ = lean_nat_dec_le(v_stop_143_, v_stop_141_);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = lean_nat_add(v_stop_143_, v___x_148_);
v___x_150_ = lean_nat_dec_le(v___x_149_, v_stop_141_);
lean_dec(v___x_149_);
return v___x_150_;
}
}
}
v___jp_152_:
{
if (v_includeSuperStop_138_ == 0)
{
v___y_145_ = v___x_151_;
goto v___jp_144_;
}
else
{
v___y_145_ = v___y_153_;
goto v___jp_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_includes___boxed(lean_object* v_super_158_, lean_object* v_sub_159_, lean_object* v_includeSuperStop_160_, lean_object* v_includeSubStop_161_){
_start:
{
uint8_t v_includeSuperStop_boxed_162_; uint8_t v_includeSubStop_boxed_163_; uint8_t v_res_164_; lean_object* v_r_165_; 
v_includeSuperStop_boxed_162_ = lean_unbox(v_includeSuperStop_160_);
v_includeSubStop_boxed_163_ = lean_unbox(v_includeSubStop_161_);
v_res_164_ = l_Lean_Syntax_Range_includes(v_super_158_, v_sub_159_, v_includeSuperStop_boxed_162_, v_includeSubStop_boxed_163_);
lean_dec_ref(v_sub_159_);
lean_dec_ref(v_super_158_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_overlaps(lean_object* v_first_166_, lean_object* v_second_167_, uint8_t v_includeFirstStop_168_, uint8_t v_includeSecondStop_169_){
_start:
{
uint8_t v___y_171_; 
if (v_includeFirstStop_168_ == 0)
{
lean_object* v_start_180_; lean_object* v_stop_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v_start_180_ = lean_ctor_get(v_second_167_, 0);
v_stop_181_ = lean_ctor_get(v_first_166_, 1);
v___x_182_ = lean_unsigned_to_nat(1u);
v___x_183_ = lean_nat_add(v_start_180_, v___x_182_);
v___x_184_ = lean_nat_dec_le(v___x_183_, v_stop_181_);
lean_dec(v___x_183_);
v___y_171_ = v___x_184_;
goto v___jp_170_;
}
else
{
lean_object* v_start_185_; lean_object* v_stop_186_; uint8_t v___x_187_; 
v_start_185_ = lean_ctor_get(v_second_167_, 0);
v_stop_186_ = lean_ctor_get(v_first_166_, 1);
v___x_187_ = lean_nat_dec_le(v_start_185_, v_stop_186_);
v___y_171_ = v___x_187_;
goto v___jp_170_;
}
v___jp_170_:
{
if (v___y_171_ == 0)
{
return v___y_171_;
}
else
{
if (v_includeSecondStop_169_ == 0)
{
lean_object* v_start_172_; lean_object* v_stop_173_; lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_start_172_ = lean_ctor_get(v_first_166_, 0);
v_stop_173_ = lean_ctor_get(v_second_167_, 1);
v___x_174_ = lean_unsigned_to_nat(1u);
v___x_175_ = lean_nat_add(v_start_172_, v___x_174_);
v___x_176_ = lean_nat_dec_le(v___x_175_, v_stop_173_);
lean_dec(v___x_175_);
return v___x_176_;
}
else
{
lean_object* v_start_177_; lean_object* v_stop_178_; uint8_t v___x_179_; 
v_start_177_ = lean_ctor_get(v_first_166_, 0);
v_stop_178_ = lean_ctor_get(v_second_167_, 1);
v___x_179_ = lean_nat_dec_le(v_start_177_, v_stop_178_);
return v___x_179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_overlaps___boxed(lean_object* v_first_188_, lean_object* v_second_189_, lean_object* v_includeFirstStop_190_, lean_object* v_includeSecondStop_191_){
_start:
{
uint8_t v_includeFirstStop_boxed_192_; uint8_t v_includeSecondStop_boxed_193_; uint8_t v_res_194_; lean_object* v_r_195_; 
v_includeFirstStop_boxed_192_ = lean_unbox(v_includeFirstStop_190_);
v_includeSecondStop_boxed_193_ = lean_unbox(v_includeSecondStop_191_);
v_res_194_ = l_Lean_Syntax_Range_overlaps(v_first_188_, v_second_189_, v_includeFirstStop_boxed_192_, v_includeSecondStop_boxed_193_);
lean_dec_ref(v_second_189_);
lean_dec_ref(v_first_188_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize(lean_object* v_r_196_){
_start:
{
lean_object* v_start_197_; lean_object* v_stop_198_; lean_object* v___x_199_; 
v_start_197_ = lean_ctor_get(v_r_196_, 0);
v_stop_198_ = lean_ctor_get(v_r_196_, 1);
v___x_199_ = lean_nat_sub(v_stop_198_, v_start_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize___boxed(lean_object* v_r_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Syntax_Range_bsize(v_r_200_);
lean_dec_ref(v_r_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_updateTrailing(lean_object* v_trailing_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
lean_object* v_leading_204_; lean_object* v_pos_205_; lean_object* v_endPos_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_213_; 
v_leading_204_ = lean_ctor_get(v_x_203_, 0);
v_pos_205_ = lean_ctor_get(v_x_203_, 1);
v_endPos_206_ = lean_ctor_get(v_x_203_, 3);
v_isSharedCheck_213_ = !lean_is_exclusive(v_x_203_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; 
v_unused_214_ = lean_ctor_get(v_x_203_, 2);
lean_dec(v_unused_214_);
v___x_208_ = v_x_203_;
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_endPos_206_);
lean_inc(v_pos_205_);
lean_inc(v_leading_204_);
lean_dec(v_x_203_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 2, v_trailing_202_);
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_leading_204_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_pos_205_);
lean_ctor_set(v_reuseFailAlloc_212_, 2, v_trailing_202_);
lean_ctor_set(v_reuseFailAlloc_212_, 3, v_endPos_206_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
else
{
lean_dec_ref(v_trailing_202_);
return v_x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f(uint8_t v_canonicalOnly_215_, lean_object* v_info_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_SourceInfo_getPos_x3f(v_info_216_, v_canonicalOnly_215_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_box(0);
return v___x_218_;
}
else
{
lean_object* v_val_219_; lean_object* v___x_220_; 
v_val_219_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_val_219_);
lean_dec_ref_known(v___x_217_, 1);
v___x_220_ = l_Lean_SourceInfo_getTailPos_x3f(v_info_216_, v_canonicalOnly_215_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v___x_221_; 
lean_dec(v_val_219_);
v___x_221_ = lean_box(0);
return v___x_221_;
}
else
{
lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_230_; 
v_val_222_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_230_ == 0)
{
v___x_224_ = v___x_220_;
v_isShared_225_ = v_isSharedCheck_230_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_dec(v___x_220_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_230_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v_val_219_);
lean_ctor_set(v___x_226_, 1, v_val_222_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_226_);
v___x_228_ = v___x_224_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_226_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f___boxed(lean_object* v_canonicalOnly_231_, lean_object* v_info_232_){
_start:
{
uint8_t v_canonicalOnly_boxed_233_; lean_object* v_res_234_; 
v_canonicalOnly_boxed_233_ = lean_unbox(v_canonicalOnly_231_);
v_res_234_ = l_Lean_SourceInfo_getRange_x3f(v_canonicalOnly_boxed_233_, v_info_232_);
lean_dec(v_info_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f(uint8_t v_canonicalOnly_235_, lean_object* v_info_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_SourceInfo_getPos_x3f(v_info_236_, v_canonicalOnly_235_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
else
{
lean_object* v_val_239_; lean_object* v___x_240_; 
v_val_239_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_val_239_);
lean_dec_ref_known(v___x_237_, 1);
v___x_240_ = l_Lean_SourceInfo_getTrailingTailPos_x3f(v_info_236_, v_canonicalOnly_235_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v___x_241_; 
lean_dec(v_val_239_);
v___x_241_ = lean_box(0);
return v___x_241_;
}
else
{
lean_object* v_val_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_250_; 
v_val_242_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_250_ == 0)
{
v___x_244_ = v___x_240_;
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_val_242_);
lean_dec(v___x_240_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v_val_239_);
lean_ctor_set(v___x_246_, 1, v_val_242_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 0, v___x_246_);
v___x_248_ = v___x_244_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f___boxed(lean_object* v_canonicalOnly_251_, lean_object* v_info_252_){
_start:
{
uint8_t v_canonicalOnly_boxed_253_; lean_object* v_res_254_; 
v_canonicalOnly_boxed_253_ = lean_unbox(v_canonicalOnly_251_);
v_res_254_ = l_Lean_SourceInfo_getRangeWithTrailing_x3f(v_canonicalOnly_boxed_253_, v_info_252_);
lean_dec(v_info_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_nonCanonicalSynthetic(lean_object* v_x_255_){
_start:
{
switch(lean_obj_tag(v_x_255_))
{
case 0:
{
lean_object* v_pos_256_; lean_object* v_endPos_257_; uint8_t v___x_258_; lean_object* v___x_259_; 
v_pos_256_ = lean_ctor_get(v_x_255_, 1);
lean_inc(v_pos_256_);
v_endPos_257_ = lean_ctor_get(v_x_255_, 3);
lean_inc(v_endPos_257_);
lean_dec_ref_known(v_x_255_, 4);
v___x_258_ = 0;
v___x_259_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_259_, 0, v_pos_256_);
lean_ctor_set(v___x_259_, 1, v_endPos_257_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*2, v___x_258_);
return v___x_259_;
}
case 1:
{
lean_object* v_pos_260_; lean_object* v_endPos_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
v_pos_260_ = lean_ctor_get(v_x_255_, 0);
v_endPos_261_ = lean_ctor_get(v_x_255_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v_x_255_);
if (v_isSharedCheck_269_ == 0)
{
v___x_263_ = v_x_255_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_endPos_261_);
lean_inc(v_pos_260_);
lean_dec(v_x_255_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
uint8_t v___x_265_; lean_object* v___x_267_; 
v___x_265_ = 0;
if (v_isShared_264_ == 0)
{
v___x_267_ = v___x_263_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_pos_260_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_endPos_261_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_ctor_set_uint8(v___x_267_, sizeof(void*)*2, v___x_265_);
return v___x_267_;
}
}
}
default: 
{
return v_x_255_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqSourceInfo__lean_beq(lean_object* v_x_270_, lean_object* v_x_271_){
_start:
{
switch(lean_obj_tag(v_x_270_))
{
case 0:
{
if (lean_obj_tag(v_x_271_) == 0)
{
lean_object* v_leading_272_; lean_object* v_pos_273_; lean_object* v_trailing_274_; lean_object* v_endPos_275_; lean_object* v_leading_276_; lean_object* v_pos_277_; lean_object* v_trailing_278_; lean_object* v_endPos_279_; uint8_t v___x_280_; 
v_leading_272_ = lean_ctor_get(v_x_270_, 0);
lean_inc_ref(v_leading_272_);
v_pos_273_ = lean_ctor_get(v_x_270_, 1);
lean_inc(v_pos_273_);
v_trailing_274_ = lean_ctor_get(v_x_270_, 2);
lean_inc_ref(v_trailing_274_);
v_endPos_275_ = lean_ctor_get(v_x_270_, 3);
lean_inc(v_endPos_275_);
lean_dec_ref_known(v_x_270_, 4);
v_leading_276_ = lean_ctor_get(v_x_271_, 0);
lean_inc_ref(v_leading_276_);
v_pos_277_ = lean_ctor_get(v_x_271_, 1);
lean_inc(v_pos_277_);
v_trailing_278_ = lean_ctor_get(v_x_271_, 2);
lean_inc_ref(v_trailing_278_);
v_endPos_279_ = lean_ctor_get(v_x_271_, 3);
lean_inc(v_endPos_279_);
lean_dec_ref_known(v_x_271_, 4);
v___x_280_ = l_Substring_Raw_beq(v_leading_272_, v_leading_276_);
if (v___x_280_ == 0)
{
lean_dec(v_endPos_279_);
lean_dec_ref(v_trailing_278_);
lean_dec(v_pos_277_);
lean_dec(v_endPos_275_);
lean_dec_ref(v_trailing_274_);
lean_dec(v_pos_273_);
return v___x_280_;
}
else
{
uint8_t v_decide_281_; 
v_decide_281_ = lean_nat_dec_eq(v_pos_273_, v_pos_277_);
lean_dec(v_pos_277_);
lean_dec(v_pos_273_);
if (v_decide_281_ == 0)
{
lean_dec(v_endPos_279_);
lean_dec_ref(v_trailing_278_);
lean_dec(v_endPos_275_);
lean_dec_ref(v_trailing_274_);
return v_decide_281_;
}
else
{
uint8_t v___x_282_; 
v___x_282_ = l_Substring_Raw_beq(v_trailing_274_, v_trailing_278_);
if (v___x_282_ == 0)
{
lean_dec(v_endPos_279_);
lean_dec(v_endPos_275_);
return v___x_282_;
}
else
{
uint8_t v_decide_283_; 
v_decide_283_ = lean_nat_dec_eq(v_endPos_275_, v_endPos_279_);
lean_dec(v_endPos_279_);
lean_dec(v_endPos_275_);
return v_decide_283_;
}
}
}
}
else
{
uint8_t v___x_284_; 
lean_dec_ref_known(v_x_270_, 4);
lean_dec(v_x_271_);
v___x_284_ = 0;
return v___x_284_;
}
}
case 1:
{
if (lean_obj_tag(v_x_271_) == 1)
{
lean_object* v_pos_285_; lean_object* v_endPos_286_; uint8_t v_canonical_287_; lean_object* v_pos_288_; lean_object* v_endPos_289_; uint8_t v_canonical_290_; uint8_t v_decide_291_; 
v_pos_285_ = lean_ctor_get(v_x_270_, 0);
lean_inc(v_pos_285_);
v_endPos_286_ = lean_ctor_get(v_x_270_, 1);
lean_inc(v_endPos_286_);
v_canonical_287_ = lean_ctor_get_uint8(v_x_270_, sizeof(void*)*2);
lean_dec_ref_known(v_x_270_, 2);
v_pos_288_ = lean_ctor_get(v_x_271_, 0);
lean_inc(v_pos_288_);
v_endPos_289_ = lean_ctor_get(v_x_271_, 1);
lean_inc(v_endPos_289_);
v_canonical_290_ = lean_ctor_get_uint8(v_x_271_, sizeof(void*)*2);
lean_dec_ref_known(v_x_271_, 2);
v_decide_291_ = lean_nat_dec_eq(v_pos_285_, v_pos_288_);
lean_dec(v_pos_288_);
lean_dec(v_pos_285_);
if (v_decide_291_ == 0)
{
lean_dec(v_endPos_289_);
lean_dec(v_endPos_286_);
return v_decide_291_;
}
else
{
uint8_t v_decide_292_; 
v_decide_292_ = lean_nat_dec_eq(v_endPos_286_, v_endPos_289_);
lean_dec(v_endPos_289_);
lean_dec(v_endPos_286_);
if (v_decide_292_ == 0)
{
return v_decide_292_;
}
else
{
if (v_canonical_290_ == 0)
{
if (v_canonical_287_ == 0)
{
return v_decide_292_;
}
else
{
return v_canonical_290_;
}
}
else
{
return v_canonical_287_;
}
}
}
}
else
{
uint8_t v___x_293_; 
lean_dec_ref_known(v_x_270_, 2);
lean_dec(v_x_271_);
v___x_293_ = 0;
return v___x_293_;
}
}
default: 
{
if (lean_obj_tag(v_x_271_) == 2)
{
uint8_t v___x_294_; 
v___x_294_ = 1;
return v___x_294_;
}
else
{
uint8_t v___x_295_; 
lean_dec(v_x_271_);
v___x_295_ = 0;
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqSourceInfo__lean_beq___boxed(lean_object* v_x_296_, lean_object* v_x_297_){
_start:
{
uint8_t v_res_298_; lean_object* v_r_299_; 
v_res_298_ = l_Lean_instBEqSourceInfo__lean_beq(v_x_296_, v_x_297_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg___boxed(lean_object* v___dummy_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_unreachIsNodeMissing___redArg();
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing(lean_object* v_00_u03b2_305_, lean_object* v_a_306_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg___boxed(lean_object* v___dummy_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_unreachIsNodeAtom___redArg();
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom(lean_object* v_00_u03b2_310_, lean_object* v_info_311_, lean_object* v_val_312_, lean_object* v_a_313_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___boxed(lean_object* v_00_u03b2_314_, lean_object* v_info_315_, lean_object* v_val_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_unreachIsNodeAtom(v_00_u03b2_314_, v_info_315_, v_val_316_, v_a_317_);
lean_dec_ref(v_val_316_);
lean_dec(v_info_315_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg___boxed(lean_object* v___dummy_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_unreachIsNodeIdent___redArg();
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent(lean_object* v_00_u03b2_322_, lean_object* v_info_323_, lean_object* v_rawVal_324_, lean_object* v_val_325_, lean_object* v_preresolved_326_, lean_object* v_a_327_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___boxed(lean_object* v_00_u03b2_328_, lean_object* v_info_329_, lean_object* v_rawVal_330_, lean_object* v_val_331_, lean_object* v_preresolved_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_unreachIsNodeIdent(v_00_u03b2_328_, v_info_329_, v_rawVal_330_, v_val_331_, v_preresolved_332_, v_a_333_);
lean_dec(v_preresolved_332_);
lean_dec(v_val_331_);
lean_dec_ref(v_rawVal_330_);
lean_dec(v_info_329_);
return v_res_334_;
}
}
LEAN_EXPORT uint8_t l_Lean_isLitKind(lean_object* v_k_350_){
_start:
{
uint8_t v___y_352_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = ((lean_object*)(l_Lean_isLitKind___closed__7));
v___x_360_ = lean_name_eq(v_k_350_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_isLitKind___closed__9));
v___x_362_ = lean_name_eq(v_k_350_, v___x_361_);
v___y_352_ = v___x_362_;
goto v___jp_351_;
}
else
{
v___y_352_ = v___x_360_;
goto v___jp_351_;
}
v___jp_351_:
{
if (v___y_352_ == 0)
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l_Lean_isLitKind___closed__1));
v___x_354_ = lean_name_eq(v_k_350_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = ((lean_object*)(l_Lean_isLitKind___closed__3));
v___x_356_ = lean_name_eq(v_k_350_, v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = ((lean_object*)(l_Lean_isLitKind___closed__5));
v___x_358_ = lean_name_eq(v_k_350_, v___x_357_);
return v___x_358_;
}
else
{
return v___x_356_;
}
}
else
{
return v___x_354_;
}
}
else
{
return v___y_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLitKind___boxed(lean_object* v_k_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = l_Lean_isLitKind(v_k_363_);
lean_dec(v_k_363_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind(lean_object* v_n_366_){
_start:
{
lean_object* v_kind_367_; 
v_kind_367_ = lean_ctor_get(v_n_366_, 1);
lean_inc(v_kind_367_);
return v_kind_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind___boxed(lean_object* v_n_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_SyntaxNode_getKind(v_n_368_);
lean_dec(v_n_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs___redArg(lean_object* v_n_370_, lean_object* v_fn_371_){
_start:
{
lean_object* v_args_372_; lean_object* v___x_373_; 
v_args_372_ = lean_ctor_get(v_n_370_, 2);
lean_inc_ref(v_args_372_);
lean_dec(v_n_370_);
v___x_373_ = lean_apply_1(v_fn_371_, v_args_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs(lean_object* v_00_u03b2_374_, lean_object* v_n_375_, lean_object* v_fn_376_){
_start:
{
lean_object* v_args_377_; lean_object* v___x_378_; 
v_args_377_ = lean_ctor_get(v_n_375_, 2);
lean_inc_ref(v_args_377_);
lean_dec(v_n_375_);
v___x_378_ = lean_apply_1(v_fn_376_, v_args_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs(lean_object* v_n_379_){
_start:
{
lean_object* v_args_380_; lean_object* v___x_381_; 
v_args_380_ = lean_ctor_get(v_n_379_, 2);
v___x_381_ = lean_array_get_size(v_args_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs___boxed(lean_object* v_n_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_SyntaxNode_getNumArgs(v_n_382_);
lean_dec(v_n_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg(lean_object* v_n_384_, lean_object* v_i_385_){
_start:
{
lean_object* v_args_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_args_386_ = lean_ctor_get(v_n_384_, 2);
v___x_387_ = lean_box(0);
v___x_388_ = lean_array_get_borrowed(v___x_387_, v_args_386_, v_i_385_);
lean_inc(v___x_388_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg___boxed(lean_object* v_n_389_, lean_object* v_i_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_SyntaxNode_getArg(v_n_389_, v_i_390_);
lean_dec(v_i_390_);
lean_dec(v_n_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs(lean_object* v_n_392_){
_start:
{
lean_object* v_args_393_; 
v_args_393_ = lean_ctor_get(v_n_392_, 2);
lean_inc_ref(v_args_393_);
return v_args_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs___boxed(lean_object* v_n_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_SyntaxNode_getArgs(v_n_394_);
lean_dec(v_n_394_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_modifyArgs(lean_object* v_n_396_, lean_object* v_fn_397_){
_start:
{
lean_object* v_info_398_; lean_object* v_kind_399_; lean_object* v_args_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_408_; 
v_info_398_ = lean_ctor_get(v_n_396_, 0);
v_kind_399_ = lean_ctor_get(v_n_396_, 1);
v_args_400_ = lean_ctor_get(v_n_396_, 2);
v_isSharedCheck_408_ = !lean_is_exclusive(v_n_396_);
if (v_isSharedCheck_408_ == 0)
{
v___x_402_ = v_n_396_;
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_args_400_);
lean_inc(v_kind_399_);
lean_inc(v_info_398_);
lean_dec(v_n_396_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_404_ = lean_apply_1(v_fn_397_, v_args_400_);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 2, v___x_404_);
v___x_406_ = v___x_402_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_info_398_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_kind_399_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1(lean_object* v_x_409_, lean_object* v_x_410_){
_start:
{
if (lean_obj_tag(v_x_409_) == 0)
{
if (lean_obj_tag(v_x_410_) == 0)
{
uint8_t v___x_411_; 
v___x_411_ = 1;
return v___x_411_;
}
else
{
uint8_t v___x_412_; 
v___x_412_ = 0;
return v___x_412_;
}
}
else
{
if (lean_obj_tag(v_x_410_) == 0)
{
uint8_t v___x_413_; 
v___x_413_ = 0;
return v___x_413_;
}
else
{
lean_object* v_val_414_; lean_object* v_val_415_; uint8_t v___x_416_; 
v_val_414_ = lean_ctor_get(v_x_409_, 0);
v_val_415_ = lean_ctor_get(v_x_410_, 0);
v___x_416_ = l_Lean_Syntax_instBEqRange_beq(v_val_414_, v_val_415_);
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1___boxed(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
uint8_t v_res_419_; lean_object* v_r_420_; 
v_res_419_ = l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1(v_x_417_, v_x_418_);
lean_dec(v_x_418_);
lean_dec(v_x_417_);
v_r_420_ = lean_box(v_res_419_);
return v_r_420_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
if (lean_obj_tag(v_x_421_) == 0)
{
if (lean_obj_tag(v_x_422_) == 0)
{
uint8_t v___x_423_; 
v___x_423_ = 1;
return v___x_423_;
}
else
{
uint8_t v___x_424_; 
v___x_424_ = 0;
return v___x_424_;
}
}
else
{
if (lean_obj_tag(v_x_422_) == 0)
{
uint8_t v___x_425_; 
v___x_425_ = 0;
return v___x_425_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; lean_object* v_head_428_; lean_object* v_tail_429_; uint8_t v___x_430_; 
v_head_426_ = lean_ctor_get(v_x_421_, 0);
v_tail_427_ = lean_ctor_get(v_x_421_, 1);
v_head_428_ = lean_ctor_get(v_x_422_, 0);
v_tail_429_ = lean_ctor_get(v_x_422_, 1);
v___x_430_ = l_Lean_Syntax_instBEqPreresolved_beq(v_head_426_, v_head_428_);
if (v___x_430_ == 0)
{
return v___x_430_;
}
else
{
v_x_421_ = v_tail_427_;
v_x_422_ = v_tail_429_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2___boxed(lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
uint8_t v_res_434_; lean_object* v_r_435_; 
v_res_434_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_x_432_, v_x_433_);
lean_dec(v_x_433_);
lean_dec(v_x_432_);
v_r_435_ = lean_box(v_res_434_);
return v_r_435_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEq(lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
switch(lean_obj_tag(v_x_436_))
{
case 0:
{
if (lean_obj_tag(v_x_437_) == 0)
{
uint8_t v___x_438_; 
v___x_438_ = 1;
return v___x_438_;
}
else
{
uint8_t v___x_439_; 
lean_dec(v_x_437_);
v___x_439_ = 0;
return v___x_439_;
}
}
case 1:
{
if (lean_obj_tag(v_x_437_) == 1)
{
lean_object* v_info_440_; lean_object* v_kind_441_; lean_object* v_args_442_; lean_object* v_info_443_; lean_object* v_kind_444_; lean_object* v_args_445_; uint8_t v___y_447_; uint8_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v_info_440_ = lean_ctor_get(v_x_436_, 0);
lean_inc(v_info_440_);
v_kind_441_ = lean_ctor_get(v_x_436_, 1);
lean_inc(v_kind_441_);
v_args_442_ = lean_ctor_get(v_x_436_, 2);
lean_inc_ref(v_args_442_);
lean_dec_ref_known(v_x_436_, 3);
v_info_443_ = lean_ctor_get(v_x_437_, 0);
lean_inc(v_info_443_);
v_kind_444_ = lean_ctor_get(v_x_437_, 1);
lean_inc(v_kind_444_);
v_args_445_ = lean_ctor_get(v_x_437_, 2);
lean_inc_ref(v_args_445_);
lean_dec_ref_known(v_x_437_, 3);
v___x_452_ = 0;
v___x_453_ = l_Lean_SourceInfo_getRange_x3f(v___x_452_, v_info_440_);
lean_dec(v_info_440_);
v___x_454_ = l_Lean_SourceInfo_getRange_x3f(v___x_452_, v_info_443_);
lean_dec(v_info_443_);
v___x_455_ = l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1(v___x_453_, v___x_454_);
lean_dec(v___x_454_);
lean_dec(v___x_453_);
if (v___x_455_ == 0)
{
lean_dec(v_kind_444_);
lean_dec(v_kind_441_);
v___y_447_ = v___x_455_;
goto v___jp_446_;
}
else
{
uint8_t v___x_456_; 
v___x_456_ = lean_name_eq(v_kind_441_, v_kind_444_);
lean_dec(v_kind_444_);
lean_dec(v_kind_441_);
v___y_447_ = v___x_456_;
goto v___jp_446_;
}
v___jp_446_:
{
if (v___y_447_ == 0)
{
lean_dec_ref(v_args_445_);
lean_dec_ref(v_args_442_);
return v___y_447_;
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_448_ = lean_array_get_size(v_args_442_);
v___x_449_ = lean_array_get_size(v_args_445_);
v___x_450_ = lean_nat_dec_eq(v___x_448_, v___x_449_);
if (v___x_450_ == 0)
{
lean_dec_ref(v_args_445_);
lean_dec_ref(v_args_442_);
return v___x_450_;
}
else
{
uint8_t v___x_451_; 
v___x_451_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg(v_args_442_, v_args_445_, v___x_448_);
lean_dec_ref(v_args_445_);
lean_dec_ref(v_args_442_);
return v___x_451_;
}
}
}
}
else
{
uint8_t v___x_457_; 
lean_dec_ref_known(v_x_436_, 3);
lean_dec(v_x_437_);
v___x_457_ = 0;
return v___x_457_;
}
}
case 2:
{
if (lean_obj_tag(v_x_437_) == 2)
{
lean_object* v_info_458_; lean_object* v_val_459_; lean_object* v_info_460_; lean_object* v_val_461_; uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_info_458_ = lean_ctor_get(v_x_436_, 0);
lean_inc(v_info_458_);
v_val_459_ = lean_ctor_get(v_x_436_, 1);
lean_inc_ref(v_val_459_);
lean_dec_ref_known(v_x_436_, 2);
v_info_460_ = lean_ctor_get(v_x_437_, 0);
lean_inc(v_info_460_);
v_val_461_ = lean_ctor_get(v_x_437_, 1);
lean_inc_ref(v_val_461_);
lean_dec_ref_known(v_x_437_, 2);
v___x_462_ = 0;
v___x_463_ = l_Lean_SourceInfo_getRange_x3f(v___x_462_, v_info_458_);
lean_dec(v_info_458_);
v___x_464_ = l_Lean_SourceInfo_getRange_x3f(v___x_462_, v_info_460_);
lean_dec(v_info_460_);
v___x_465_ = l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1(v___x_463_, v___x_464_);
lean_dec(v___x_464_);
lean_dec(v___x_463_);
if (v___x_465_ == 0)
{
lean_dec_ref(v_val_461_);
lean_dec_ref(v_val_459_);
return v___x_465_;
}
else
{
uint8_t v___x_466_; 
v___x_466_ = lean_string_dec_eq(v_val_459_, v_val_461_);
lean_dec_ref(v_val_461_);
lean_dec_ref(v_val_459_);
return v___x_466_;
}
}
else
{
uint8_t v___x_467_; 
lean_dec_ref_known(v_x_436_, 2);
lean_dec(v_x_437_);
v___x_467_ = 0;
return v___x_467_;
}
}
default: 
{
if (lean_obj_tag(v_x_437_) == 3)
{
lean_object* v_info_468_; lean_object* v_rawVal_469_; lean_object* v_val_470_; lean_object* v_preresolved_471_; lean_object* v_info_472_; lean_object* v_rawVal_473_; lean_object* v_val_474_; lean_object* v_preresolved_475_; uint8_t v___y_477_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_info_468_ = lean_ctor_get(v_x_436_, 0);
lean_inc(v_info_468_);
v_rawVal_469_ = lean_ctor_get(v_x_436_, 1);
lean_inc_ref(v_rawVal_469_);
v_val_470_ = lean_ctor_get(v_x_436_, 2);
lean_inc(v_val_470_);
v_preresolved_471_ = lean_ctor_get(v_x_436_, 3);
lean_inc(v_preresolved_471_);
lean_dec_ref_known(v_x_436_, 4);
v_info_472_ = lean_ctor_get(v_x_437_, 0);
lean_inc(v_info_472_);
v_rawVal_473_ = lean_ctor_get(v_x_437_, 1);
lean_inc_ref(v_rawVal_473_);
v_val_474_ = lean_ctor_get(v_x_437_, 2);
lean_inc(v_val_474_);
v_preresolved_475_ = lean_ctor_get(v_x_437_, 3);
lean_inc(v_preresolved_475_);
lean_dec_ref_known(v_x_437_, 4);
v___x_480_ = 0;
v___x_481_ = l_Lean_SourceInfo_getRange_x3f(v___x_480_, v_info_468_);
lean_dec(v_info_468_);
v___x_482_ = l_Lean_SourceInfo_getRange_x3f(v___x_480_, v_info_472_);
lean_dec(v_info_472_);
v___x_483_ = l_Option_instBEq_beq___at___00Lean_Syntax_structRangeEq_spec__1(v___x_481_, v___x_482_);
lean_dec(v___x_482_);
lean_dec(v___x_481_);
if (v___x_483_ == 0)
{
lean_dec_ref(v_rawVal_473_);
lean_dec_ref(v_rawVal_469_);
v___y_477_ = v___x_483_;
goto v___jp_476_;
}
else
{
uint8_t v___x_484_; 
v___x_484_ = l_Substring_Raw_beq(v_rawVal_469_, v_rawVal_473_);
v___y_477_ = v___x_484_;
goto v___jp_476_;
}
v___jp_476_:
{
if (v___y_477_ == 0)
{
lean_dec(v_preresolved_475_);
lean_dec(v_val_474_);
lean_dec(v_preresolved_471_);
lean_dec(v_val_470_);
return v___y_477_;
}
else
{
uint8_t v___x_478_; 
v___x_478_ = lean_name_eq(v_val_470_, v_val_474_);
lean_dec(v_val_474_);
lean_dec(v_val_470_);
if (v___x_478_ == 0)
{
lean_dec(v_preresolved_475_);
lean_dec(v_preresolved_471_);
return v___x_478_;
}
else
{
uint8_t v___x_479_; 
v___x_479_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_preresolved_471_, v_preresolved_475_);
lean_dec(v_preresolved_475_);
lean_dec(v_preresolved_471_);
return v___x_479_;
}
}
}
}
else
{
uint8_t v___x_485_; 
lean_dec_ref_known(v_x_436_, 4);
lean_dec(v_x_437_);
v___x_485_ = 0;
return v___x_485_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg(lean_object* v_xs_486_, lean_object* v_ys_487_, lean_object* v_x_488_){
_start:
{
lean_object* v_zero_489_; uint8_t v_isZero_490_; 
v_zero_489_ = lean_unsigned_to_nat(0u);
v_isZero_490_ = lean_nat_dec_eq(v_x_488_, v_zero_489_);
if (v_isZero_490_ == 1)
{
lean_dec(v_x_488_);
return v_isZero_490_;
}
else
{
lean_object* v_one_491_; lean_object* v_n_492_; lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v_one_491_ = lean_unsigned_to_nat(1u);
v_n_492_ = lean_nat_sub(v_x_488_, v_one_491_);
lean_dec(v_x_488_);
v___x_493_ = lean_array_fget_borrowed(v_xs_486_, v_n_492_);
v___x_494_ = lean_array_fget_borrowed(v_ys_487_, v_n_492_);
lean_inc(v___x_494_);
lean_inc(v___x_493_);
v___x_495_ = l_Lean_Syntax_structRangeEq(v___x_493_, v___x_494_);
if (v___x_495_ == 0)
{
lean_dec(v_n_492_);
return v___x_495_;
}
else
{
v_x_488_ = v_n_492_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg___boxed(lean_object* v_xs_497_, lean_object* v_ys_498_, lean_object* v_x_499_){
_start:
{
uint8_t v_res_500_; lean_object* v_r_501_; 
v_res_500_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg(v_xs_497_, v_ys_498_, v_x_499_);
lean_dec_ref(v_ys_498_);
lean_dec_ref(v_xs_497_);
v_r_501_ = lean_box(v_res_500_);
return v_r_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEq___boxed(lean_object* v_x_502_, lean_object* v_x_503_){
_start:
{
uint8_t v_res_504_; lean_object* v_r_505_; 
v_res_504_ = l_Lean_Syntax_structRangeEq(v_x_502_, v_x_503_);
v_r_505_ = lean_box(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0(lean_object* v_xs_506_, lean_object* v_ys_507_, lean_object* v_hsz_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___redArg(v_xs_506_, v_ys_507_, v_x_509_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0___boxed(lean_object* v_xs_512_, lean_object* v_ys_513_, lean_object* v_hsz_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__0(v_xs_512_, v_ys_513_, v_hsz_514_, v_x_515_, v_x_516_);
lean_dec_ref(v_ys_513_);
lean_dec_ref(v_xs_512_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(uint8_t v___x_519_, lean_object* v_x_520_){
_start:
{
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed(lean_object* v___x_521_, lean_object* v_x_522_){
_start:
{
uint8_t v___x_92__boxed_523_; uint8_t v_res_524_; lean_object* v_r_525_; 
v___x_92__boxed_523_ = lean_unbox(v___x_521_);
v_res_524_ = l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(v___x_92__boxed_523_, v_x_522_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse(lean_object* v_opts_535_, lean_object* v_stx1_536_, lean_object* v_stx2_537_){
_start:
{
uint8_t v___x_538_; uint8_t v___x_539_; 
lean_inc(v_stx2_537_);
lean_inc(v_stx1_536_);
v___x_538_ = l_Lean_Syntax_structRangeEq(v_stx1_536_, v_stx2_537_);
v___x_539_ = 1;
if (v___x_538_ == 0)
{
lean_object* v_map_540_; lean_object* v___x_541_; lean_object* v___f_542_; uint8_t v___y_544_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_map_540_ = lean_ctor_get(v_opts_535_, 0);
v___x_541_ = lean_box(v___x_538_);
v___f_542_ = lean_alloc_closure((void*)(l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_542_, 0, v___x_541_);
v___x_559_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5));
v___x_560_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_540_, v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
v___y_544_ = v___x_538_;
goto v___jp_543_;
}
else
{
lean_object* v_val_561_; 
v_val_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v___x_560_, 1);
if (lean_obj_tag(v_val_561_) == 1)
{
uint8_t v_v_562_; 
v_v_562_ = lean_ctor_get_uint8(v_val_561_, 0);
lean_dec_ref_known(v_val_561_, 0);
v___y_544_ = v_v_562_;
goto v___jp_543_;
}
else
{
lean_dec(v_val_561_);
v___y_544_ = v___x_538_;
goto v___jp_543_;
}
}
v___jp_543_:
{
if (v___y_544_ == 0)
{
lean_dec_ref(v___f_542_);
lean_dec(v_stx2_537_);
lean_dec(v_stx1_536_);
return v___x_538_;
}
else
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_545_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0));
v___x_546_ = lean_box(0);
v___x_547_ = l_Lean_Syntax_formatStx(v_stx1_536_, v___x_546_, v___x_539_);
v___x_548_ = l_Std_Format_defWidth;
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = l_Std_Format_pretty(v___x_547_, v___x_548_, v___x_549_, v___x_549_);
v___x_551_ = lean_string_append(v___x_545_, v___x_550_);
lean_dec_ref(v___x_550_);
v___x_552_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1));
v___x_553_ = lean_string_append(v___x_551_, v___x_552_);
v___x_554_ = l_Lean_Syntax_formatStx(v_stx2_537_, v___x_546_, v___x_539_);
v___x_555_ = l_Std_Format_pretty(v___x_554_, v___x_548_, v___x_549_, v___x_549_);
v___x_556_ = lean_string_append(v___x_553_, v___x_555_);
lean_dec_ref(v___x_555_);
v___x_557_ = lean_dbg_trace(v___x_556_, v___f_542_);
v___x_558_ = lean_unbox(v___x_557_);
lean_dec(v___x_557_);
return v___x_558_;
}
}
}
else
{
lean_dec(v_stx2_537_);
lean_dec(v_stx1_536_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___boxed(lean_object* v_opts_563_, lean_object* v_stx1_564_, lean_object* v_stx2_565_){
_start:
{
uint8_t v_res_566_; lean_object* v_r_567_; 
v_res_566_ = l_Lean_Syntax_structRangeEqWithTraceReuse(v_opts_563_, v_stx1_564_, v_stx2_565_);
lean_dec_ref(v_opts_563_);
v_r_567_ = lean_box(v_res_566_);
return v_r_567_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfo(lean_object* v_x_568_, lean_object* v_x_569_){
_start:
{
switch(lean_obj_tag(v_x_568_))
{
case 0:
{
if (lean_obj_tag(v_x_569_) == 0)
{
uint8_t v___x_570_; 
v___x_570_ = 1;
return v___x_570_;
}
else
{
uint8_t v___x_571_; 
lean_dec(v_x_569_);
v___x_571_ = 0;
return v___x_571_;
}
}
case 1:
{
if (lean_obj_tag(v_x_569_) == 1)
{
lean_object* v_info_572_; lean_object* v_kind_573_; lean_object* v_args_574_; lean_object* v_info_575_; lean_object* v_kind_576_; lean_object* v_args_577_; uint8_t v___y_579_; uint8_t v___x_584_; 
v_info_572_ = lean_ctor_get(v_x_568_, 0);
lean_inc(v_info_572_);
v_kind_573_ = lean_ctor_get(v_x_568_, 1);
lean_inc(v_kind_573_);
v_args_574_ = lean_ctor_get(v_x_568_, 2);
lean_inc_ref(v_args_574_);
lean_dec_ref_known(v_x_568_, 3);
v_info_575_ = lean_ctor_get(v_x_569_, 0);
lean_inc(v_info_575_);
v_kind_576_ = lean_ctor_get(v_x_569_, 1);
lean_inc(v_kind_576_);
v_args_577_ = lean_ctor_get(v_x_569_, 2);
lean_inc_ref(v_args_577_);
lean_dec_ref_known(v_x_569_, 3);
v___x_584_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_572_, v_info_575_);
if (v___x_584_ == 0)
{
lean_dec(v_kind_576_);
lean_dec(v_kind_573_);
v___y_579_ = v___x_584_;
goto v___jp_578_;
}
else
{
uint8_t v___x_585_; 
v___x_585_ = lean_name_eq(v_kind_573_, v_kind_576_);
lean_dec(v_kind_576_);
lean_dec(v_kind_573_);
v___y_579_ = v___x_585_;
goto v___jp_578_;
}
v___jp_578_:
{
if (v___y_579_ == 0)
{
lean_dec_ref(v_args_577_);
lean_dec_ref(v_args_574_);
return v___y_579_;
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_580_ = lean_array_get_size(v_args_574_);
v___x_581_ = lean_array_get_size(v_args_577_);
v___x_582_ = lean_nat_dec_eq(v___x_580_, v___x_581_);
if (v___x_582_ == 0)
{
lean_dec_ref(v_args_577_);
lean_dec_ref(v_args_574_);
return v___x_582_;
}
else
{
uint8_t v___x_583_; 
v___x_583_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_args_574_, v_args_577_, v___x_580_);
lean_dec_ref(v_args_577_);
lean_dec_ref(v_args_574_);
return v___x_583_;
}
}
}
}
else
{
uint8_t v___x_586_; 
lean_dec_ref_known(v_x_568_, 3);
lean_dec(v_x_569_);
v___x_586_ = 0;
return v___x_586_;
}
}
case 2:
{
if (lean_obj_tag(v_x_569_) == 2)
{
lean_object* v_info_587_; lean_object* v_val_588_; lean_object* v_info_589_; lean_object* v_val_590_; uint8_t v___x_591_; 
v_info_587_ = lean_ctor_get(v_x_568_, 0);
lean_inc(v_info_587_);
v_val_588_ = lean_ctor_get(v_x_568_, 1);
lean_inc_ref(v_val_588_);
lean_dec_ref_known(v_x_568_, 2);
v_info_589_ = lean_ctor_get(v_x_569_, 0);
lean_inc(v_info_589_);
v_val_590_ = lean_ctor_get(v_x_569_, 1);
lean_inc_ref(v_val_590_);
lean_dec_ref_known(v_x_569_, 2);
v___x_591_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_587_, v_info_589_);
if (v___x_591_ == 0)
{
lean_dec_ref(v_val_590_);
lean_dec_ref(v_val_588_);
return v___x_591_;
}
else
{
uint8_t v___x_592_; 
v___x_592_ = lean_string_dec_eq(v_val_588_, v_val_590_);
lean_dec_ref(v_val_590_);
lean_dec_ref(v_val_588_);
return v___x_592_;
}
}
else
{
uint8_t v___x_593_; 
lean_dec_ref_known(v_x_568_, 2);
lean_dec(v_x_569_);
v___x_593_ = 0;
return v___x_593_;
}
}
default: 
{
if (lean_obj_tag(v_x_569_) == 3)
{
lean_object* v_info_594_; lean_object* v_rawVal_595_; lean_object* v_val_596_; lean_object* v_preresolved_597_; lean_object* v_info_598_; lean_object* v_rawVal_599_; lean_object* v_val_600_; lean_object* v_preresolved_601_; uint8_t v___y_603_; uint8_t v___x_606_; 
v_info_594_ = lean_ctor_get(v_x_568_, 0);
lean_inc(v_info_594_);
v_rawVal_595_ = lean_ctor_get(v_x_568_, 1);
lean_inc_ref(v_rawVal_595_);
v_val_596_ = lean_ctor_get(v_x_568_, 2);
lean_inc(v_val_596_);
v_preresolved_597_ = lean_ctor_get(v_x_568_, 3);
lean_inc(v_preresolved_597_);
lean_dec_ref_known(v_x_568_, 4);
v_info_598_ = lean_ctor_get(v_x_569_, 0);
lean_inc(v_info_598_);
v_rawVal_599_ = lean_ctor_get(v_x_569_, 1);
lean_inc_ref(v_rawVal_599_);
v_val_600_ = lean_ctor_get(v_x_569_, 2);
lean_inc(v_val_600_);
v_preresolved_601_ = lean_ctor_get(v_x_569_, 3);
lean_inc(v_preresolved_601_);
lean_dec_ref_known(v_x_569_, 4);
v___x_606_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_594_, v_info_598_);
if (v___x_606_ == 0)
{
lean_dec_ref(v_rawVal_599_);
lean_dec_ref(v_rawVal_595_);
v___y_603_ = v___x_606_;
goto v___jp_602_;
}
else
{
uint8_t v___x_607_; 
v___x_607_ = l_Substring_Raw_beq(v_rawVal_595_, v_rawVal_599_);
v___y_603_ = v___x_607_;
goto v___jp_602_;
}
v___jp_602_:
{
if (v___y_603_ == 0)
{
lean_dec(v_preresolved_601_);
lean_dec(v_val_600_);
lean_dec(v_preresolved_597_);
lean_dec(v_val_596_);
return v___y_603_;
}
else
{
uint8_t v___x_604_; 
v___x_604_ = lean_name_eq(v_val_596_, v_val_600_);
lean_dec(v_val_600_);
lean_dec(v_val_596_);
if (v___x_604_ == 0)
{
lean_dec(v_preresolved_601_);
lean_dec(v_preresolved_597_);
return v___x_604_;
}
else
{
uint8_t v___x_605_; 
v___x_605_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_preresolved_597_, v_preresolved_601_);
lean_dec(v_preresolved_601_);
lean_dec(v_preresolved_597_);
return v___x_605_;
}
}
}
}
else
{
uint8_t v___x_608_; 
lean_dec_ref_known(v_x_568_, 4);
lean_dec(v_x_569_);
v___x_608_ = 0;
return v___x_608_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(lean_object* v_xs_609_, lean_object* v_ys_610_, lean_object* v_x_611_){
_start:
{
lean_object* v_zero_612_; uint8_t v_isZero_613_; 
v_zero_612_ = lean_unsigned_to_nat(0u);
v_isZero_613_ = lean_nat_dec_eq(v_x_611_, v_zero_612_);
if (v_isZero_613_ == 1)
{
lean_dec(v_x_611_);
return v_isZero_613_;
}
else
{
lean_object* v_one_614_; lean_object* v_n_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_one_614_ = lean_unsigned_to_nat(1u);
v_n_615_ = lean_nat_sub(v_x_611_, v_one_614_);
lean_dec(v_x_611_);
v___x_616_ = lean_array_fget_borrowed(v_xs_609_, v_n_615_);
v___x_617_ = lean_array_fget_borrowed(v_ys_610_, v_n_615_);
lean_inc(v___x_617_);
lean_inc(v___x_616_);
v___x_618_ = l_Lean_Syntax_eqWithInfo(v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec(v_n_615_);
return v___x_618_;
}
else
{
v_x_611_ = v_n_615_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg___boxed(lean_object* v_xs_620_, lean_object* v_ys_621_, lean_object* v_x_622_){
_start:
{
uint8_t v_res_623_; lean_object* v_r_624_; 
v_res_623_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_xs_620_, v_ys_621_, v_x_622_);
lean_dec_ref(v_ys_621_);
lean_dec_ref(v_xs_620_);
v_r_624_ = lean_box(v_res_623_);
return v_r_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfo___boxed(lean_object* v_x_625_, lean_object* v_x_626_){
_start:
{
uint8_t v_res_627_; lean_object* v_r_628_; 
v_res_627_ = l_Lean_Syntax_eqWithInfo(v_x_625_, v_x_626_);
v_r_628_ = lean_box(v_res_627_);
return v_r_628_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(lean_object* v_xs_629_, lean_object* v_ys_630_, lean_object* v_hsz_631_, lean_object* v_x_632_, lean_object* v_x_633_){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_xs_629_, v_ys_630_, v_x_632_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___boxed(lean_object* v_xs_635_, lean_object* v_ys_636_, lean_object* v_hsz_637_, lean_object* v_x_638_, lean_object* v_x_639_){
_start:
{
uint8_t v_res_640_; lean_object* v_r_641_; 
v_res_640_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(v_xs_635_, v_ys_636_, v_hsz_637_, v_x_638_, v_x_639_);
lean_dec_ref(v_ys_636_);
lean_dec_ref(v_xs_635_);
v_r_641_ = lean_box(v_res_640_);
return v_r_641_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfoAndTraceReuse(lean_object* v_opts_642_, lean_object* v_stx1_643_, lean_object* v_stx2_644_){
_start:
{
uint8_t v___x_645_; uint8_t v___x_646_; 
lean_inc(v_stx2_644_);
lean_inc(v_stx1_643_);
v___x_645_ = l_Lean_Syntax_eqWithInfo(v_stx1_643_, v_stx2_644_);
v___x_646_ = 1;
if (v___x_645_ == 0)
{
lean_object* v_map_647_; lean_object* v___x_648_; lean_object* v___f_649_; uint8_t v___y_651_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_map_647_ = lean_ctor_get(v_opts_642_, 0);
v___x_648_ = lean_box(v___x_645_);
v___f_649_ = lean_alloc_closure((void*)(l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_649_, 0, v___x_648_);
v___x_666_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5));
v___x_667_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_647_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
v___y_651_ = v___x_645_;
goto v___jp_650_;
}
else
{
lean_object* v_val_668_; 
v_val_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v___x_667_, 1);
if (lean_obj_tag(v_val_668_) == 1)
{
uint8_t v_v_669_; 
v_v_669_ = lean_ctor_get_uint8(v_val_668_, 0);
lean_dec_ref_known(v_val_668_, 0);
v___y_651_ = v_v_669_;
goto v___jp_650_;
}
else
{
lean_dec(v_val_668_);
v___y_651_ = v___x_645_;
goto v___jp_650_;
}
}
v___jp_650_:
{
if (v___y_651_ == 0)
{
lean_dec_ref(v___f_649_);
lean_dec(v_stx2_644_);
lean_dec(v_stx1_643_);
return v___x_645_;
}
else
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_652_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0));
v___x_653_ = lean_box(0);
v___x_654_ = l_Lean_Syntax_formatStx(v_stx1_643_, v___x_653_, v___x_646_);
v___x_655_ = l_Std_Format_defWidth;
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = l_Std_Format_pretty(v___x_654_, v___x_655_, v___x_656_, v___x_656_);
v___x_658_ = lean_string_append(v___x_652_, v___x_657_);
lean_dec_ref(v___x_657_);
v___x_659_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1));
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
v___x_661_ = l_Lean_Syntax_formatStx(v_stx2_644_, v___x_653_, v___x_646_);
v___x_662_ = l_Std_Format_pretty(v___x_661_, v___x_655_, v___x_656_, v___x_656_);
v___x_663_ = lean_string_append(v___x_660_, v___x_662_);
lean_dec_ref(v___x_662_);
v___x_664_ = lean_dbg_trace(v___x_663_, v___f_649_);
v___x_665_ = lean_unbox(v___x_664_);
lean_dec(v___x_664_);
return v___x_665_;
}
}
}
else
{
lean_dec(v_stx2_644_);
lean_dec(v_stx1_643_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfoAndTraceReuse___boxed(lean_object* v_opts_670_, lean_object* v_stx1_671_, lean_object* v_stx2_672_){
_start:
{
uint8_t v_res_673_; lean_object* v_r_674_; 
v_res_673_ = l_Lean_Syntax_eqWithInfoAndTraceReuse(v_opts_670_, v_stx1_671_, v_stx2_672_);
lean_dec_ref(v_opts_670_);
v_r_674_ = lean_box(v_res_673_);
return v_r_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal(lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 2)
{
lean_object* v_val_677_; 
v_val_677_ = lean_ctor_get(v_x_676_, 1);
lean_inc_ref(v_val_677_);
return v_val_677_;
}
else
{
lean_object* v___x_678_; 
v___x_678_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal___boxed(lean_object* v_x_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Syntax_getAtomVal(v_x_679_);
lean_dec(v_x_679_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setAtomVal(lean_object* v_x_681_, lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_681_) == 2)
{
lean_object* v_info_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
v_info_683_ = lean_ctor_get(v_x_681_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_690_ == 0)
{
lean_object* v_unused_691_; 
v_unused_691_ = lean_ctor_get(v_x_681_, 1);
lean_dec(v_unused_691_);
v___x_685_ = v_x_681_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_info_683_);
lean_dec(v_x_681_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 1, v_x_682_);
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_info_683_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_x_682_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
else
{
lean_dec_ref(v_x_682_);
return v_x_681_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode___redArg(lean_object* v_stx_692_, lean_object* v_hyes_693_, lean_object* v_hno_694_){
_start:
{
if (lean_obj_tag(v_stx_692_) == 1)
{
lean_object* v___x_695_; 
lean_dec(v_hno_694_);
v___x_695_ = lean_apply_1(v_hyes_693_, v_stx_692_);
return v___x_695_;
}
else
{
lean_object* v___x_696_; lean_object* v___x_697_; 
lean_dec(v_hyes_693_);
lean_dec(v_stx_692_);
v___x_696_ = lean_box(0);
v___x_697_ = lean_apply_1(v_hno_694_, v___x_696_);
return v___x_697_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode(lean_object* v_00_u03b2_698_, lean_object* v_stx_699_, lean_object* v_hyes_700_, lean_object* v_hno_701_){
_start:
{
if (lean_obj_tag(v_stx_699_) == 1)
{
lean_object* v___x_702_; 
lean_dec(v_hno_701_);
v___x_702_ = lean_apply_1(v_hyes_700_, v_stx_699_);
return v___x_702_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; 
lean_dec(v_hyes_700_);
lean_dec(v_stx_699_);
v___x_703_ = lean_box(0);
v___x_704_ = lean_apply_1(v_hno_701_, v___x_703_);
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg(lean_object* v_stx_705_, lean_object* v_kind_706_, lean_object* v_hyes_707_, lean_object* v_hno_708_){
_start:
{
if (lean_obj_tag(v_stx_705_) == 1)
{
lean_object* v_kind_709_; uint8_t v___x_710_; 
v_kind_709_ = lean_ctor_get(v_stx_705_, 1);
v___x_710_ = lean_name_eq(v_kind_709_, v_kind_706_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec_ref_known(v_stx_705_, 3);
lean_dec(v_hyes_707_);
v___x_711_ = lean_box(0);
v___x_712_ = lean_apply_1(v_hno_708_, v___x_711_);
return v___x_712_;
}
else
{
lean_object* v___x_713_; 
lean_dec(v_hno_708_);
v___x_713_ = lean_apply_1(v_hyes_707_, v_stx_705_);
return v___x_713_;
}
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec(v_hyes_707_);
lean_dec(v_stx_705_);
v___x_714_ = lean_box(0);
v___x_715_ = lean_apply_1(v_hno_708_, v___x_714_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg___boxed(lean_object* v_stx_716_, lean_object* v_kind_717_, lean_object* v_hyes_718_, lean_object* v_hno_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Syntax_ifNodeKind___redArg(v_stx_716_, v_kind_717_, v_hyes_718_, v_hno_719_);
lean_dec(v_kind_717_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind(lean_object* v_00_u03b2_721_, lean_object* v_stx_722_, lean_object* v_kind_723_, lean_object* v_hyes_724_, lean_object* v_hno_725_){
_start:
{
if (lean_obj_tag(v_stx_722_) == 1)
{
lean_object* v_kind_726_; uint8_t v___x_727_; 
v_kind_726_ = lean_ctor_get(v_stx_722_, 1);
v___x_727_ = lean_name_eq(v_kind_726_, v_kind_723_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref_known(v_stx_722_, 3);
lean_dec(v_hyes_724_);
v___x_728_ = lean_box(0);
v___x_729_ = lean_apply_1(v_hno_725_, v___x_728_);
return v___x_729_;
}
else
{
lean_object* v___x_730_; 
lean_dec(v_hno_725_);
v___x_730_ = lean_apply_1(v_hyes_724_, v_stx_722_);
return v___x_730_;
}
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v_hyes_724_);
lean_dec(v_stx_722_);
v___x_731_ = lean_box(0);
v___x_732_ = lean_apply_1(v_hno_725_, v___x_731_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___boxed(lean_object* v_00_u03b2_733_, lean_object* v_stx_734_, lean_object* v_kind_735_, lean_object* v_hyes_736_, lean_object* v_hno_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Syntax_ifNodeKind(v_00_u03b2_733_, v_stx_734_, v_kind_735_, v_hyes_736_, v_hno_737_);
lean_dec(v_kind_735_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode(lean_object* v_x_748_){
_start:
{
if (lean_obj_tag(v_x_748_) == 1)
{
lean_inc_ref(v_x_748_);
return v_x_748_;
}
else
{
lean_object* v___x_749_; 
v___x_749_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__3));
return v___x_749_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode___boxed(lean_object* v_x_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_Syntax_asNode(v_x_750_);
lean_dec(v_x_750_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt(lean_object* v_stx_752_, lean_object* v_i_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = l_Lean_Syntax_getArg(v_stx_752_, v_i_753_);
v___x_755_ = l_Lean_Syntax_getId(v___x_754_);
lean_dec(v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt___boxed(lean_object* v_stx_756_, lean_object* v_i_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_Syntax_getIdAt(v_stx_756_, v_i_757_);
lean_dec(v_i_757_);
lean_dec(v_stx_756_);
return v_res_758_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasIdent(lean_object* v_id_759_, lean_object* v_x_760_){
_start:
{
switch(lean_obj_tag(v_x_760_))
{
case 3:
{
lean_object* v_val_761_; uint8_t v___x_762_; 
v_val_761_ = lean_ctor_get(v_x_760_, 2);
v___x_762_ = lean_name_eq(v_id_759_, v_val_761_);
return v___x_762_;
}
case 1:
{
lean_object* v_args_763_; lean_object* v___x_764_; lean_object* v___x_765_; uint8_t v___x_766_; 
v_args_763_ = lean_ctor_get(v_x_760_, 2);
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = lean_array_get_size(v_args_763_);
v___x_766_ = lean_nat_dec_lt(v___x_764_, v___x_765_);
if (v___x_766_ == 0)
{
return v___x_766_;
}
else
{
if (v___x_766_ == 0)
{
return v___x_766_;
}
else
{
size_t v___x_767_; size_t v___x_768_; uint8_t v___x_769_; 
v___x_767_ = ((size_t)0ULL);
v___x_768_ = lean_usize_of_nat(v___x_765_);
v___x_769_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(v_id_759_, v_args_763_, v___x_767_, v___x_768_);
return v___x_769_;
}
}
}
default: 
{
uint8_t v___x_770_; 
v___x_770_ = 0;
return v___x_770_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(lean_object* v_id_771_, lean_object* v_as_772_, size_t v_i_773_, size_t v_stop_774_){
_start:
{
uint8_t v___x_775_; 
v___x_775_ = lean_usize_dec_eq(v_i_773_, v_stop_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_776_ = lean_array_uget_borrowed(v_as_772_, v_i_773_);
v___x_777_ = l_Lean_Syntax_hasIdent(v_id_771_, v___x_776_);
if (v___x_777_ == 0)
{
size_t v___x_778_; size_t v___x_779_; 
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_i_773_, v___x_778_);
v_i_773_ = v___x_779_;
goto _start;
}
else
{
return v___x_777_;
}
}
else
{
uint8_t v___x_781_; 
v___x_781_ = 0;
return v___x_781_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0___boxed(lean_object* v_id_782_, lean_object* v_as_783_, lean_object* v_i_784_, lean_object* v_stop_785_){
_start:
{
size_t v_i_boxed_786_; size_t v_stop_boxed_787_; uint8_t v_res_788_; lean_object* v_r_789_; 
v_i_boxed_786_ = lean_unbox_usize(v_i_784_);
lean_dec(v_i_784_);
v_stop_boxed_787_ = lean_unbox_usize(v_stop_785_);
lean_dec(v_stop_785_);
v_res_788_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(v_id_782_, v_as_783_, v_i_boxed_786_, v_stop_boxed_787_);
lean_dec_ref(v_as_783_);
lean_dec(v_id_782_);
v_r_789_ = lean_box(v_res_788_);
return v_r_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasIdent___boxed(lean_object* v_id_790_, lean_object* v_x_791_){
_start:
{
uint8_t v_res_792_; lean_object* v_r_793_; 
v_res_792_ = l_Lean_Syntax_hasIdent(v_id_790_, v_x_791_);
lean_dec(v_x_791_);
lean_dec(v_id_790_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArgs(lean_object* v_stx_794_, lean_object* v_fn_795_){
_start:
{
if (lean_obj_tag(v_stx_794_) == 1)
{
lean_object* v_info_796_; lean_object* v_kind_797_; lean_object* v_args_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_info_796_ = lean_ctor_get(v_stx_794_, 0);
v_kind_797_ = lean_ctor_get(v_stx_794_, 1);
v_args_798_ = lean_ctor_get(v_stx_794_, 2);
v_isSharedCheck_806_ = !lean_is_exclusive(v_stx_794_);
if (v_isSharedCheck_806_ == 0)
{
v___x_800_ = v_stx_794_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_args_798_);
lean_inc(v_kind_797_);
lean_inc(v_info_796_);
lean_dec(v_stx_794_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = lean_apply_1(v_fn_795_, v_args_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 2, v___x_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_info_796_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_kind_797_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
else
{
lean_dec_ref(v_fn_795_);
return v_stx_794_;
}
}
}
static lean_object* _init_l_Lean_Syntax_modifyArg___closed__0(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_box(0);
v___x_808_ = l_unsafeCast___redArg(v___x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg(lean_object* v_stx_809_, lean_object* v_i_810_, lean_object* v_fn_811_){
_start:
{
if (lean_obj_tag(v_stx_809_) == 1)
{
lean_object* v_info_812_; lean_object* v_kind_813_; lean_object* v_args_814_; lean_object* v___x_815_; uint8_t v___x_816_; 
v_info_812_ = lean_ctor_get(v_stx_809_, 0);
v_kind_813_ = lean_ctor_get(v_stx_809_, 1);
v_args_814_ = lean_ctor_get(v_stx_809_, 2);
v___x_815_ = lean_array_get_size(v_args_814_);
v___x_816_ = lean_nat_dec_lt(v_i_810_, v___x_815_);
if (v___x_816_ == 0)
{
lean_dec_ref(v_fn_811_);
return v_stx_809_;
}
else
{
lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_828_; 
lean_inc_ref(v_args_814_);
lean_inc(v_kind_813_);
lean_inc(v_info_812_);
v_isSharedCheck_828_ = !lean_is_exclusive(v_stx_809_);
if (v_isSharedCheck_828_ == 0)
{
lean_object* v_unused_829_; lean_object* v_unused_830_; lean_object* v_unused_831_; 
v_unused_829_ = lean_ctor_get(v_stx_809_, 2);
lean_dec(v_unused_829_);
v_unused_830_ = lean_ctor_get(v_stx_809_, 1);
lean_dec(v_unused_830_);
v_unused_831_ = lean_ctor_get(v_stx_809_, 0);
lean_dec(v_unused_831_);
v___x_818_ = v_stx_809_;
v_isShared_819_ = v_isSharedCheck_828_;
goto v_resetjp_817_;
}
else
{
lean_dec(v_stx_809_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_828_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v_v_820_; lean_object* v___x_821_; lean_object* v_xs_x27_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v_v_820_ = lean_array_fget(v_args_814_, v_i_810_);
v___x_821_ = lean_obj_once(&l_Lean_Syntax_modifyArg___closed__0, &l_Lean_Syntax_modifyArg___closed__0_once, _init_l_Lean_Syntax_modifyArg___closed__0);
v_xs_x27_822_ = lean_array_fset(v_args_814_, v_i_810_, v___x_821_);
v___x_823_ = lean_apply_1(v_fn_811_, v_v_820_);
v___x_824_ = lean_array_fset(v_xs_x27_822_, v_i_810_, v___x_823_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 2, v___x_824_);
v___x_826_ = v___x_818_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_info_812_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v_kind_813_);
lean_ctor_set(v_reuseFailAlloc_827_, 2, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
else
{
lean_dec_ref(v_fn_811_);
return v_stx_809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg___boxed(lean_object* v_stx_832_, lean_object* v_i_833_, lean_object* v_fn_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Syntax_modifyArg(v_stx_832_, v_i_833_, v_fn_834_);
lean_dec(v_i_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__0(lean_object* v_info_836_, lean_object* v_kind_837_, lean_object* v_toPure_838_, lean_object* v_____do__lift_839_){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_840_, 0, v_info_836_);
lean_ctor_set(v___x_840_, 1, v_kind_837_);
lean_ctor_set(v___x_840_, 2, v_____do__lift_839_);
v___x_841_ = lean_apply_2(v_toPure_838_, lean_box(0), v___x_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__2(lean_object* v_toPure_842_, lean_object* v_x_843_, lean_object* v_o_844_){
_start:
{
if (lean_obj_tag(v_o_844_) == 0)
{
lean_object* v___x_845_; 
v___x_845_ = lean_apply_2(v_toPure_842_, lean_box(0), v_x_843_);
return v___x_845_;
}
else
{
lean_object* v_val_846_; lean_object* v___x_847_; 
lean_dec(v_x_843_);
v_val_846_ = lean_ctor_get(v_o_844_, 0);
lean_inc(v_val_846_);
lean_dec_ref_known(v_o_844_, 1);
v___x_847_ = lean_apply_2(v_toPure_842_, lean_box(0), v_val_846_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1___boxed(lean_object* v_inst_848_, lean_object* v_fn_849_, lean_object* v_args_850_, lean_object* v_toBind_851_, lean_object* v___f_852_, lean_object* v_toPure_853_, lean_object* v_____do__lift_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_Syntax_replaceM___redArg___lam__1(v_inst_848_, v_fn_849_, v_args_850_, v_toBind_851_, v___f_852_, v_toPure_853_, v_____do__lift_854_);
lean_dec_ref(v_args_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg(lean_object* v_inst_856_, lean_object* v_fn_857_, lean_object* v_x_858_){
_start:
{
if (lean_obj_tag(v_x_858_) == 1)
{
lean_object* v_toApplicative_859_; lean_object* v_toBind_860_; lean_object* v_toPure_861_; lean_object* v_info_862_; lean_object* v_kind_863_; lean_object* v_args_864_; lean_object* v___f_865_; lean_object* v___f_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_toApplicative_859_ = lean_ctor_get(v_inst_856_, 0);
v_toBind_860_ = lean_ctor_get(v_inst_856_, 1);
lean_inc_n(v_toBind_860_, 2);
v_toPure_861_ = lean_ctor_get(v_toApplicative_859_, 1);
lean_inc_n(v_toPure_861_, 2);
v_info_862_ = lean_ctor_get(v_x_858_, 0);
v_kind_863_ = lean_ctor_get(v_x_858_, 1);
v_args_864_ = lean_ctor_get(v_x_858_, 2);
lean_inc(v_kind_863_);
lean_inc(v_info_862_);
v___f_865_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_865_, 0, v_info_862_);
lean_closure_set(v___f_865_, 1, v_kind_863_);
lean_closure_set(v___f_865_, 2, v_toPure_861_);
lean_inc_ref(v_args_864_);
lean_inc(v_fn_857_);
v___f_866_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_866_, 0, v_inst_856_);
lean_closure_set(v___f_866_, 1, v_fn_857_);
lean_closure_set(v___f_866_, 2, v_args_864_);
lean_closure_set(v___f_866_, 3, v_toBind_860_);
lean_closure_set(v___f_866_, 4, v___f_865_);
lean_closure_set(v___f_866_, 5, v_toPure_861_);
v___x_867_ = lean_apply_1(v_fn_857_, v_x_858_);
v___x_868_ = lean_apply_4(v_toBind_860_, lean_box(0), lean_box(0), v___x_867_, v___f_866_);
return v___x_868_;
}
else
{
lean_object* v_toApplicative_869_; lean_object* v_toBind_870_; lean_object* v_toPure_871_; lean_object* v___f_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v_toApplicative_869_ = lean_ctor_get(v_inst_856_, 0);
lean_inc_ref(v_toApplicative_869_);
v_toBind_870_ = lean_ctor_get(v_inst_856_, 1);
lean_inc(v_toBind_870_);
lean_dec_ref(v_inst_856_);
v_toPure_871_ = lean_ctor_get(v_toApplicative_869_, 1);
lean_inc(v_toPure_871_);
lean_dec_ref(v_toApplicative_869_);
lean_inc(v_x_858_);
v___f_872_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__2), 3, 2);
lean_closure_set(v___f_872_, 0, v_toPure_871_);
lean_closure_set(v___f_872_, 1, v_x_858_);
v___x_873_ = lean_apply_1(v_fn_857_, v_x_858_);
v___x_874_ = lean_apply_4(v_toBind_870_, lean_box(0), lean_box(0), v___x_873_, v___f_872_);
return v___x_874_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1(lean_object* v_inst_875_, lean_object* v_fn_876_, lean_object* v_args_877_, lean_object* v_toBind_878_, lean_object* v___f_879_, lean_object* v_toPure_880_, lean_object* v_____do__lift_881_){
_start:
{
if (lean_obj_tag(v_____do__lift_881_) == 0)
{
lean_object* v___x_882_; size_t v_sz_883_; size_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
lean_dec(v_toPure_880_);
lean_inc_ref(v_inst_875_);
v___x_882_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg), 3, 2);
lean_closure_set(v___x_882_, 0, v_inst_875_);
lean_closure_set(v___x_882_, 1, v_fn_876_);
v_sz_883_ = lean_array_size(v_args_877_);
v___x_884_ = ((size_t)0ULL);
v___x_885_ = l_unsafeCast___redArg(v_args_877_);
v___x_886_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_875_, v___x_882_, v_sz_883_, v___x_884_, v___x_885_);
v___x_887_ = l_unsafeCast___redArg(v___x_886_);
lean_dec(v___x_886_);
v___x_888_ = lean_apply_4(v_toBind_878_, lean_box(0), lean_box(0), v___x_887_, v___f_879_);
return v___x_888_;
}
else
{
lean_object* v_val_889_; lean_object* v___x_890_; 
lean_dec(v___f_879_);
lean_dec(v_toBind_878_);
lean_dec(v_fn_876_);
lean_dec_ref(v_inst_875_);
v_val_889_ = lean_ctor_get(v_____do__lift_881_, 0);
lean_inc(v_val_889_);
lean_dec_ref_known(v_____do__lift_881_, 1);
v___x_890_ = lean_apply_2(v_toPure_880_, lean_box(0), v_val_889_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM(lean_object* v_m_891_, lean_object* v_inst_892_, lean_object* v_fn_893_, lean_object* v_x_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Lean_Syntax_replaceM___redArg(v_inst_892_, v_fn_893_, v_x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0(lean_object* v_info_896_, lean_object* v_kind_897_, lean_object* v_fn_898_, lean_object* v_args_899_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_900_, 0, v_info_896_);
lean_ctor_set(v___x_900_, 1, v_kind_897_);
lean_ctor_set(v___x_900_, 2, v_args_899_);
v___x_901_ = lean_apply_1(v_fn_898_, v___x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg(lean_object* v_inst_902_, lean_object* v_fn_903_, lean_object* v_x_904_){
_start:
{
if (lean_obj_tag(v_x_904_) == 1)
{
lean_object* v_toBind_905_; lean_object* v_info_906_; lean_object* v_kind_907_; lean_object* v_args_908_; lean_object* v___f_909_; lean_object* v___x_910_; size_t v_sz_911_; size_t v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_toBind_905_ = lean_ctor_get(v_inst_902_, 1);
lean_inc(v_toBind_905_);
v_info_906_ = lean_ctor_get(v_x_904_, 0);
lean_inc(v_info_906_);
v_kind_907_ = lean_ctor_get(v_x_904_, 1);
lean_inc(v_kind_907_);
v_args_908_ = lean_ctor_get(v_x_904_, 2);
lean_inc_ref(v_args_908_);
lean_dec_ref_known(v_x_904_, 3);
lean_inc(v_fn_903_);
v___f_909_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_909_, 0, v_info_906_);
lean_closure_set(v___f_909_, 1, v_kind_907_);
lean_closure_set(v___f_909_, 2, v_fn_903_);
lean_inc_ref(v_inst_902_);
v___x_910_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUpM___redArg), 3, 2);
lean_closure_set(v___x_910_, 0, v_inst_902_);
lean_closure_set(v___x_910_, 1, v_fn_903_);
v_sz_911_ = lean_array_size(v_args_908_);
v___x_912_ = ((size_t)0ULL);
v___x_913_ = l_unsafeCast___redArg(v_args_908_);
lean_dec_ref(v_args_908_);
v___x_914_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_902_, v___x_910_, v_sz_911_, v___x_912_, v___x_913_);
v___x_915_ = l_unsafeCast___redArg(v___x_914_);
lean_dec(v___x_914_);
v___x_916_ = lean_apply_4(v_toBind_905_, lean_box(0), lean_box(0), v___x_915_, v___f_909_);
return v___x_916_;
}
else
{
lean_object* v___x_917_; 
lean_dec_ref(v_inst_902_);
v___x_917_ = lean_apply_1(v_fn_903_, v_x_904_);
return v___x_917_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM(lean_object* v_m_918_, lean_object* v_inst_919_, lean_object* v_fn_920_, lean_object* v_x_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_Lean_Syntax_rewriteBottomUpM___redArg(v_inst_919_, v_fn_920_, v_x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp___lam__0(lean_object* v_fn_923_, lean_object* v_x_924_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = lean_apply_1(v_fn_923_, v_x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp(lean_object* v_fn_945_, lean_object* v_stx_946_){
_start:
{
lean_object* v___f_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___f_947_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUp___lam__0), 2, 1);
lean_closure_set(v___f_947_, 0, v_fn_945_);
v___x_948_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUp___closed__9));
v___x_949_ = l_Lean_Syntax_rewriteBottomUpM___redArg(v___x_948_, v___f_947_, v_stx_946_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(lean_object* v_x_950_, lean_object* v_x_951_, lean_object* v_x_952_){
_start:
{
if (lean_obj_tag(v_x_950_) == 0)
{
lean_object* v_leading_953_; lean_object* v_trailing_954_; lean_object* v_pos_955_; lean_object* v_endPos_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_983_; 
v_leading_953_ = lean_ctor_get(v_x_950_, 0);
v_trailing_954_ = lean_ctor_get(v_x_950_, 2);
v_pos_955_ = lean_ctor_get(v_x_950_, 1);
v_endPos_956_ = lean_ctor_get(v_x_950_, 3);
v_isSharedCheck_983_ = !lean_is_exclusive(v_x_950_);
if (v_isSharedCheck_983_ == 0)
{
v___x_958_ = v_x_950_;
v_isShared_959_ = v_isSharedCheck_983_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_endPos_956_);
lean_inc(v_trailing_954_);
lean_inc(v_pos_955_);
lean_inc(v_leading_953_);
lean_dec(v_x_950_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_983_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v_str_960_; lean_object* v_stopPos_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_981_; 
v_str_960_ = lean_ctor_get(v_leading_953_, 0);
v_stopPos_961_ = lean_ctor_get(v_leading_953_, 2);
v_isSharedCheck_981_ = !lean_is_exclusive(v_leading_953_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; 
v_unused_982_ = lean_ctor_get(v_leading_953_, 1);
lean_dec(v_unused_982_);
v___x_963_ = v_leading_953_;
v_isShared_964_ = v_isSharedCheck_981_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_stopPos_961_);
lean_inc(v_str_960_);
lean_dec(v_leading_953_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_981_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v_str_965_; lean_object* v_startPos_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_979_; 
v_str_965_ = lean_ctor_get(v_trailing_954_, 0);
v_startPos_966_ = lean_ctor_get(v_trailing_954_, 1);
v_isSharedCheck_979_ = !lean_is_exclusive(v_trailing_954_);
if (v_isSharedCheck_979_ == 0)
{
lean_object* v_unused_980_; 
v_unused_980_ = lean_ctor_get(v_trailing_954_, 2);
lean_dec(v_unused_980_);
v___x_968_ = v_trailing_954_;
v_isShared_969_ = v_isSharedCheck_979_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_startPos_966_);
lean_inc(v_str_965_);
lean_dec(v_trailing_954_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_979_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 2, v_stopPos_961_);
lean_ctor_set(v___x_968_, 1, v_x_951_);
lean_ctor_set(v___x_968_, 0, v_str_960_);
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_str_960_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_x_951_);
lean_ctor_set(v_reuseFailAlloc_978_, 2, v_stopPos_961_);
v___x_971_ = v_reuseFailAlloc_978_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_973_; 
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 2, v_x_952_);
lean_ctor_set(v___x_963_, 1, v_startPos_966_);
lean_ctor_set(v___x_963_, 0, v_str_965_);
v___x_973_ = v___x_963_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_str_965_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_startPos_966_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v_x_952_);
v___x_973_ = v_reuseFailAlloc_977_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_975_; 
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 2, v___x_973_);
lean_ctor_set(v___x_958_, 0, v___x_971_);
v___x_975_ = v___x_958_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_971_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_pos_955_);
lean_ctor_set(v_reuseFailAlloc_976_, 2, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_976_, 3, v_endPos_956_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
}
}
else
{
lean_dec(v_x_952_);
lean_dec(v_x_951_);
return v_x_950_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(lean_object* v___x_984_, lean_object* v___x_985_, lean_object* v___x_986_, lean_object* v_a_987_, lean_object* v_b_988_){
_start:
{
lean_object* v___x_989_; uint8_t v_decide_990_; 
v___x_989_ = lean_nat_sub(v___x_984_, v___x_985_);
v_decide_990_ = lean_nat_dec_eq(v_a_987_, v___x_989_);
lean_dec(v___x_989_);
if (v_decide_990_ == 0)
{
uint32_t v___x_991_; lean_object* v___x_992_; uint32_t v___x_993_; uint8_t v___x_994_; 
v___x_991_ = 10;
v___x_992_ = lean_nat_add(v___x_985_, v_a_987_);
v___x_993_ = lean_string_utf8_get_fast(v___x_986_, v___x_992_);
v___x_994_ = lean_uint32_dec_eq(v___x_993_, v___x_991_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
lean_dec(v_a_987_);
v___x_995_ = lean_box(0);
v___x_996_ = lean_string_utf8_next_fast(v___x_986_, v___x_992_);
lean_dec(v___x_992_);
v___x_997_ = lean_nat_sub(v___x_996_, v___x_985_);
v_a_987_ = v___x_997_;
v_b_988_ = v___x_995_;
goto _start;
}
else
{
lean_object* v___x_999_; 
lean_dec(v___x_992_);
v___x_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_999_, 0, v_a_987_);
return v___x_999_;
}
}
else
{
lean_dec(v_a_987_);
lean_inc(v_b_988_);
return v_b_988_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg___boxed(lean_object* v___x_1000_, lean_object* v___x_1001_, lean_object* v___x_1002_, lean_object* v_a_1003_, lean_object* v_b_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v___x_1000_, v___x_1001_, v___x_1002_, v_a_1003_, v_b_1004_);
lean_dec(v_b_1004_);
lean_dec_ref(v___x_1002_);
lean_dec(v___x_1001_);
lean_dec(v___x_1000_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(lean_object* v_trail_1006_){
_start:
{
lean_object* v_str_1007_; lean_object* v_startPos_1008_; lean_object* v_stopPos_1009_; uint8_t v___y_1011_; uint8_t v___x_1021_; uint8_t v___y_1023_; uint8_t v___x_1024_; 
v_str_1007_ = lean_ctor_get(v_trail_1006_, 0);
v_startPos_1008_ = lean_ctor_get(v_trail_1006_, 1);
v_stopPos_1009_ = lean_ctor_get(v_trail_1006_, 2);
v___x_1021_ = lean_string_is_valid_pos(v_str_1007_, v_startPos_1008_);
v___x_1024_ = lean_string_is_valid_pos(v_str_1007_, v_stopPos_1009_);
if (v___x_1024_ == 0)
{
v___y_1023_ = v___x_1024_;
goto v___jp_1022_;
}
else
{
uint8_t v___x_1025_; 
v___x_1025_ = lean_nat_dec_le(v_startPos_1008_, v_stopPos_1009_);
v___y_1023_ = v___x_1025_;
goto v___jp_1022_;
}
v___jp_1010_:
{
if (v___y_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = lean_nat_sub(v_stopPos_1009_, v_startPos_1008_);
v___x_1013_ = lean_nat_add(v_startPos_1008_, v___x_1012_);
lean_dec(v___x_1012_);
return v___x_1013_;
}
else
{
lean_object* v_searcher_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_searcher_1014_ = lean_unsigned_to_nat(0u);
v___x_1015_ = lean_box(0);
v___x_1016_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v_stopPos_1009_, v_startPos_1008_, v_str_1007_, v_searcher_1014_, v___x_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_nat_sub(v_stopPos_1009_, v_startPos_1008_);
v___x_1018_ = lean_nat_add(v_startPos_1008_, v___x_1017_);
lean_dec(v___x_1017_);
return v___x_1018_;
}
else
{
lean_object* v_val_1019_; lean_object* v___x_1020_; 
v_val_1019_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_val_1019_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1020_ = lean_nat_add(v_startPos_1008_, v_val_1019_);
lean_dec(v_val_1019_);
return v___x_1020_;
}
}
}
v___jp_1022_:
{
if (v___x_1021_ == 0)
{
v___y_1011_ = v___x_1021_;
goto v___jp_1010_;
}
else
{
v___y_1011_ = v___y_1023_;
goto v___jp_1010_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop___boxed(lean_object* v_trail_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trail_1026_);
lean_dec_ref(v_trail_1026_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(lean_object* v___x_1028_, lean_object* v___x_1029_, lean_object* v___x_1030_, lean_object* v___x_1031_, lean_object* v_inst_1032_, lean_object* v_R_1033_, lean_object* v_a_1034_, lean_object* v_b_1035_, lean_object* v_c_1036_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v___x_1028_, v___x_1029_, v___x_1031_, v_a_1034_, v_b_1035_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___boxed(lean_object* v___x_1038_, lean_object* v___x_1039_, lean_object* v___x_1040_, lean_object* v___x_1041_, lean_object* v_inst_1042_, lean_object* v_R_1043_, lean_object* v_a_1044_, lean_object* v_b_1045_, lean_object* v_c_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(v___x_1038_, v___x_1039_, v___x_1040_, v___x_1041_, v_inst_1042_, v_R_1043_, v_a_1044_, v_b_1045_, v_c_1046_);
lean_dec(v_b_1045_);
lean_dec_ref(v___x_1041_);
lean_dec_ref(v___x_1040_);
lean_dec(v___x_1039_);
lean_dec(v___x_1038_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateLeadingAux(lean_object* v_x_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v___y_1051_; 
switch(lean_obj_tag(v_x_1048_))
{
case 2:
{
lean_object* v_info_1054_; 
v_info_1054_ = lean_ctor_get(v_x_1048_, 0);
lean_inc(v_info_1054_);
if (lean_obj_tag(v_info_1054_) == 0)
{
lean_object* v_val_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1067_; 
v_val_1055_ = lean_ctor_get(v_x_1048_, 1);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1048_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v_x_1048_, 0);
lean_dec(v_unused_1068_);
v___x_1057_ = v_x_1048_;
v_isShared_1058_ = v_isSharedCheck_1067_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_val_1055_);
lean_dec(v_x_1048_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1067_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v_trailing_1059_; lean_object* v_trailStop_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v_trailing_1059_ = lean_ctor_get(v_info_1054_, 2);
v_trailStop_1060_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1059_);
lean_inc(v_trailStop_1060_);
v___x_1061_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1054_, v_a_1049_, v_trailStop_1060_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1061_);
v___x_1063_ = v___x_1057_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1061_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_val_1055_);
v___x_1063_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v_trailStop_1060_);
return v___x_1065_;
}
}
}
else
{
lean_dec_ref_known(v_x_1048_, 2);
lean_dec(v_info_1054_);
v___y_1051_ = v_a_1049_;
goto v___jp_1050_;
}
}
case 3:
{
lean_object* v_info_1069_; 
v_info_1069_ = lean_ctor_get(v_x_1048_, 0);
lean_inc(v_info_1069_);
if (lean_obj_tag(v_info_1069_) == 0)
{
lean_object* v_rawVal_1070_; lean_object* v_val_1071_; lean_object* v_preresolved_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1084_; 
v_rawVal_1070_ = lean_ctor_get(v_x_1048_, 1);
v_val_1071_ = lean_ctor_get(v_x_1048_, 2);
v_preresolved_1072_ = lean_ctor_get(v_x_1048_, 3);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_x_1048_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; 
v_unused_1085_ = lean_ctor_get(v_x_1048_, 0);
lean_dec(v_unused_1085_);
v___x_1074_ = v_x_1048_;
v_isShared_1075_ = v_isSharedCheck_1084_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_preresolved_1072_);
lean_inc(v_val_1071_);
lean_inc(v_rawVal_1070_);
lean_dec(v_x_1048_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1084_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v_trailing_1076_; lean_object* v_trailStop_1077_; lean_object* v___x_1078_; lean_object* v___x_1080_; 
v_trailing_1076_ = lean_ctor_get(v_info_1069_, 2);
v_trailStop_1077_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1076_);
lean_inc(v_trailStop_1077_);
v___x_1078_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1069_, v_a_1049_, v_trailStop_1077_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1078_);
v___x_1080_ = v___x_1074_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_rawVal_1070_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v_val_1071_);
lean_ctor_set(v_reuseFailAlloc_1083_, 3, v_preresolved_1072_);
v___x_1080_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v_trailStop_1077_);
return v___x_1082_;
}
}
}
else
{
lean_dec_ref_known(v_x_1048_, 4);
lean_dec(v_info_1069_);
v___y_1051_ = v_a_1049_;
goto v___jp_1050_;
}
}
default: 
{
lean_dec(v_x_1048_);
v___y_1051_ = v_a_1049_;
goto v___jp_1050_;
}
}
v___jp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = lean_box(0);
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___y_1051_);
return v___x_1053_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
switch(lean_obj_tag(v___y_1086_))
{
case 2:
{
lean_object* v_info_1091_; 
v_info_1091_ = lean_ctor_get(v___y_1086_, 0);
lean_inc(v_info_1091_);
if (lean_obj_tag(v_info_1091_) == 0)
{
lean_object* v_val_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1104_; 
v_val_1092_ = lean_ctor_get(v___y_1086_, 1);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___y_1086_);
if (v_isSharedCheck_1104_ == 0)
{
lean_object* v_unused_1105_; 
v_unused_1105_ = lean_ctor_get(v___y_1086_, 0);
lean_dec(v_unused_1105_);
v___x_1094_ = v___y_1086_;
v_isShared_1095_ = v_isSharedCheck_1104_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_val_1092_);
lean_dec(v___y_1086_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1104_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v_trailing_1096_; lean_object* v_trailStop_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v_trailing_1096_ = lean_ctor_get(v_info_1091_, 2);
v_trailStop_1097_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1096_);
lean_inc(v_trailStop_1097_);
v___x_1098_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1091_, v___y_1087_, v_trailStop_1097_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1098_);
v___x_1100_ = v___x_1094_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1098_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_val_1092_);
v___x_1100_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v_trailStop_1097_);
return v___x_1102_;
}
}
}
else
{
lean_dec_ref_known(v___y_1086_, 2);
lean_dec(v_info_1091_);
goto v___jp_1088_;
}
}
case 3:
{
lean_object* v_info_1106_; 
v_info_1106_ = lean_ctor_get(v___y_1086_, 0);
lean_inc(v_info_1106_);
if (lean_obj_tag(v_info_1106_) == 0)
{
lean_object* v_rawVal_1107_; lean_object* v_val_1108_; lean_object* v_preresolved_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1121_; 
v_rawVal_1107_ = lean_ctor_get(v___y_1086_, 1);
v_val_1108_ = lean_ctor_get(v___y_1086_, 2);
v_preresolved_1109_ = lean_ctor_get(v___y_1086_, 3);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___y_1086_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; 
v_unused_1122_ = lean_ctor_get(v___y_1086_, 0);
lean_dec(v_unused_1122_);
v___x_1111_ = v___y_1086_;
v_isShared_1112_ = v_isSharedCheck_1121_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_preresolved_1109_);
lean_inc(v_val_1108_);
lean_inc(v_rawVal_1107_);
lean_dec(v___y_1086_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1121_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v_trailing_1113_; lean_object* v_trailStop_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v_trailing_1113_ = lean_ctor_get(v_info_1106_, 2);
v_trailStop_1114_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1113_);
lean_inc(v_trailStop_1114_);
v___x_1115_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1106_, v___y_1087_, v_trailStop_1114_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1115_);
v___x_1117_ = v___x_1111_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1115_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_rawVal_1107_);
lean_ctor_set(v_reuseFailAlloc_1120_, 2, v_val_1108_);
lean_ctor_set(v_reuseFailAlloc_1120_, 3, v_preresolved_1109_);
v___x_1117_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
lean_ctor_set(v___x_1119_, 1, v_trailStop_1114_);
return v___x_1119_;
}
}
}
else
{
lean_dec(v_info_1106_);
lean_dec_ref_known(v___y_1086_, 4);
goto v___jp_1088_;
}
}
default: 
{
lean_dec(v___y_1086_);
goto v___jp_1088_;
}
}
v___jp_1088_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_box(0);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v___y_1087_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed(lean_object* v_sz_1125_, lean_object* v_i_1126_, lean_object* v_bs_1127_, lean_object* v___y_1128_){
_start:
{
size_t v_sz_boxed_1129_; size_t v_i_boxed_1130_; lean_object* v_res_1131_; 
v_sz_boxed_1129_ = lean_unbox_usize(v_sz_1125_);
lean_dec(v_sz_1125_);
v_i_boxed_1130_ = lean_unbox_usize(v_i_1126_);
lean_dec(v_i_1126_);
v_res_1131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(v_sz_boxed_1129_, v_i_boxed_1130_, v_bs_1127_, v___y_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(lean_object* v_x_1132_, lean_object* v___y_1133_){
_start:
{
if (lean_obj_tag(v_x_1132_) == 1)
{
lean_object* v_info_1134_; lean_object* v_kind_1135_; lean_object* v_args_1136_; lean_object* v___x_1137_; lean_object* v_fst_1138_; 
v_info_1134_ = lean_ctor_get(v_x_1132_, 0);
lean_inc(v_info_1134_);
v_kind_1135_ = lean_ctor_get(v_x_1132_, 1);
lean_inc(v_kind_1135_);
v_args_1136_ = lean_ctor_get(v_x_1132_, 2);
lean_inc_ref(v_args_1136_);
v___x_1137_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(v_x_1132_, v___y_1133_);
v_fst_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_fst_1138_);
if (lean_obj_tag(v_fst_1138_) == 0)
{
lean_object* v_snd_1139_; size_t v_sz_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1386__overap_1145_; lean_object* v___x_1146_; lean_object* v_fst_1147_; lean_object* v_snd_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1156_; 
v_snd_1139_ = lean_ctor_get(v___x_1137_, 1);
lean_inc(v_snd_1139_);
lean_dec_ref(v___x_1137_);
v_sz_1140_ = lean_array_size(v_args_1136_);
v___x_1141_ = l_unsafeCast___redArg(v_args_1136_);
lean_dec_ref(v_args_1136_);
v___x_1142_ = lean_box_usize(v_sz_1140_);
v___x_1143_ = ((lean_object*)(l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___boxed__const__1));
v___x_1144_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed), 4, 3);
lean_closure_set(v___x_1144_, 0, v___x_1142_);
lean_closure_set(v___x_1144_, 1, v___x_1143_);
lean_closure_set(v___x_1144_, 2, v___x_1141_);
v___x_1386__overap_1145_ = l_unsafeCast___redArg(v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1146_ = lean_apply_1(v___x_1386__overap_1145_, v_snd_1139_);
v_fst_1147_ = lean_ctor_get(v___x_1146_, 0);
v_snd_1148_ = lean_ctor_get(v___x_1146_, 1);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1150_ = v___x_1146_;
v_isShared_1151_ = v_isSharedCheck_1156_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_snd_1148_);
lean_inc(v_fst_1147_);
lean_dec(v___x_1146_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1156_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1152_; lean_object* v___x_1154_; 
v___x_1152_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1152_, 0, v_info_1134_);
lean_ctor_set(v___x_1152_, 1, v_kind_1135_);
lean_ctor_set(v___x_1152_, 2, v_fst_1147_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1152_);
v___x_1154_ = v___x_1150_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1152_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_snd_1148_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
else
{
lean_object* v_snd_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1165_; 
lean_dec_ref(v_args_1136_);
lean_dec(v_kind_1135_);
lean_dec(v_info_1134_);
v_snd_1157_ = lean_ctor_get(v___x_1137_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1165_ == 0)
{
lean_object* v_unused_1166_; 
v_unused_1166_ = lean_ctor_get(v___x_1137_, 0);
lean_dec(v_unused_1166_);
v___x_1159_ = v___x_1137_;
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_snd_1157_);
lean_dec(v___x_1137_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v_val_1161_; lean_object* v___x_1163_; 
v_val_1161_ = lean_ctor_get(v_fst_1138_, 0);
lean_inc(v_val_1161_);
lean_dec_ref_known(v_fst_1138_, 1);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v_val_1161_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_val_1161_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_snd_1157_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
else
{
lean_object* v___x_1167_; lean_object* v_fst_1168_; 
lean_inc(v_x_1132_);
v___x_1167_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(v_x_1132_, v___y_1133_);
v_fst_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_fst_1168_);
if (lean_obj_tag(v_fst_1168_) == 0)
{
lean_object* v_snd_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
v_snd_1169_ = lean_ctor_get(v___x_1167_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1176_ == 0)
{
lean_object* v_unused_1177_; 
v_unused_1177_ = lean_ctor_get(v___x_1167_, 0);
lean_dec(v_unused_1177_);
v___x_1171_ = v___x_1167_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_snd_1169_);
lean_dec(v___x_1167_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v_x_1132_);
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_x_1132_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_snd_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
else
{
lean_object* v_snd_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1186_; 
lean_dec(v_x_1132_);
v_snd_1178_ = lean_ctor_get(v___x_1167_, 1);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; 
v_unused_1187_ = lean_ctor_get(v___x_1167_, 0);
lean_dec(v_unused_1187_);
v___x_1180_ = v___x_1167_;
v_isShared_1181_ = v_isSharedCheck_1186_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_snd_1178_);
lean_dec(v___x_1167_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1186_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v_val_1182_; lean_object* v___x_1184_; 
v_val_1182_ = lean_ctor_get(v_fst_1168_, 0);
lean_inc(v_val_1182_);
lean_dec_ref_known(v_fst_1168_, 1);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 0, v_val_1182_);
v___x_1184_ = v___x_1180_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_val_1182_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_snd_1178_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(size_t v_sz_1188_, size_t v_i_1189_, lean_object* v_bs_1190_, lean_object* v___y_1191_){
_start:
{
uint8_t v___x_1192_; 
v___x_1192_ = lean_usize_dec_lt(v_i_1189_, v_sz_1188_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = l_unsafeCast___redArg(v_bs_1190_);
lean_dec_ref(v_bs_1190_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
lean_ctor_set(v___x_1194_, 1, v___y_1191_);
return v___x_1194_;
}
else
{
lean_object* v_v_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v_fst_1198_; lean_object* v_snd_1199_; lean_object* v___x_1200_; lean_object* v_bs_x27_1201_; size_t v___x_1202_; size_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v_v_1195_ = lean_array_uget_borrowed(v_bs_1190_, v_i_1189_);
v___x_1196_ = l_unsafeCast___redArg(v_v_1195_);
v___x_1197_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(v___x_1196_, v___y_1191_);
v_fst_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_fst_1198_);
v_snd_1199_ = lean_ctor_get(v___x_1197_, 1);
lean_inc(v_snd_1199_);
lean_dec_ref(v___x_1197_);
v___x_1200_ = lean_unsigned_to_nat(0u);
v_bs_x27_1201_ = lean_array_uset(v_bs_1190_, v_i_1189_, v___x_1200_);
v___x_1202_ = ((size_t)1ULL);
v___x_1203_ = lean_usize_add(v_i_1189_, v___x_1202_);
v___x_1204_ = l_unsafeCast___redArg(v_fst_1198_);
lean_dec(v_fst_1198_);
v___x_1205_ = lean_array_uset(v_bs_x27_1201_, v_i_1189_, v___x_1204_);
v_i_1189_ = v___x_1203_;
v_bs_1190_ = v___x_1205_;
v___y_1191_ = v_snd_1199_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_updateLeading(lean_object* v_stx_1207_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v_fst_1210_; 
v___x_1208_ = lean_unsigned_to_nat(0u);
v___x_1209_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(v_stx_1207_, v___x_1208_);
v_fst_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_fst_1210_);
lean_dec_ref(v___x_1209_);
return v_fst_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_updateTrailing(lean_object* v_trailing_1211_, lean_object* v_x_1212_){
_start:
{
switch(lean_obj_tag(v_x_1212_))
{
case 2:
{
lean_object* v_info_1213_; lean_object* v_val_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1222_; 
v_info_1213_ = lean_ctor_get(v_x_1212_, 0);
v_val_1214_ = lean_ctor_get(v_x_1212_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1216_ = v_x_1212_;
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_val_1214_);
lean_inc(v_info_1213_);
lean_dec(v_x_1212_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1218_ = l_Lean_SourceInfo_updateTrailing(v_trailing_1211_, v_info_1213_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1218_);
v___x_1220_ = v___x_1216_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_val_1214_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
case 3:
{
lean_object* v_info_1223_; lean_object* v_rawVal_1224_; lean_object* v_val_1225_; lean_object* v_preresolved_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1234_; 
v_info_1223_ = lean_ctor_get(v_x_1212_, 0);
v_rawVal_1224_ = lean_ctor_get(v_x_1212_, 1);
v_val_1225_ = lean_ctor_get(v_x_1212_, 2);
v_preresolved_1226_ = lean_ctor_get(v_x_1212_, 3);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1228_ = v_x_1212_;
v_isShared_1229_ = v_isSharedCheck_1234_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_preresolved_1226_);
lean_inc(v_val_1225_);
lean_inc(v_rawVal_1224_);
lean_inc(v_info_1223_);
lean_dec(v_x_1212_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1234_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; lean_object* v___x_1232_; 
v___x_1230_ = l_Lean_SourceInfo_updateTrailing(v_trailing_1211_, v_info_1223_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1230_);
v___x_1232_ = v___x_1228_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_rawVal_1224_);
lean_ctor_set(v_reuseFailAlloc_1233_, 2, v_val_1225_);
lean_ctor_set(v_reuseFailAlloc_1233_, 3, v_preresolved_1226_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
case 1:
{
lean_object* v_info_1235_; lean_object* v_kind_1236_; lean_object* v_args_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_info_1235_ = lean_ctor_get(v_x_1212_, 0);
v_kind_1236_ = lean_ctor_get(v_x_1212_, 1);
v_args_1237_ = lean_ctor_get(v_x_1212_, 2);
v___x_1238_ = lean_array_get_size(v_args_1237_);
v___x_1239_ = lean_unsigned_to_nat(0u);
v___x_1240_ = lean_nat_dec_eq(v___x_1238_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1252_; 
lean_inc_ref(v_args_1237_);
lean_inc(v_kind_1236_);
lean_inc(v_info_1235_);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1252_ == 0)
{
lean_object* v_unused_1253_; lean_object* v_unused_1254_; lean_object* v_unused_1255_; 
v_unused_1253_ = lean_ctor_get(v_x_1212_, 2);
lean_dec(v_unused_1253_);
v_unused_1254_ = lean_ctor_get(v_x_1212_, 1);
lean_dec(v_unused_1254_);
v_unused_1255_ = lean_ctor_get(v_x_1212_, 0);
lean_dec(v_unused_1255_);
v___x_1242_ = v_x_1212_;
v_isShared_1243_ = v_isSharedCheck_1252_;
goto v_resetjp_1241_;
}
else
{
lean_dec(v_x_1212_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1252_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; lean_object* v_i_1245_; lean_object* v___x_1246_; lean_object* v_last_1247_; lean_object* v_args_1248_; lean_object* v___x_1250_; 
v___x_1244_ = lean_unsigned_to_nat(1u);
v_i_1245_ = lean_nat_sub(v___x_1238_, v___x_1244_);
v___x_1246_ = lean_array_fget_borrowed(v_args_1237_, v_i_1245_);
lean_inc(v___x_1246_);
v_last_1247_ = l_Lean_Syntax_updateTrailing(v_trailing_1211_, v___x_1246_);
v_args_1248_ = lean_array_fset(v_args_1237_, v_i_1245_, v_last_1247_);
lean_dec(v_i_1245_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 2, v_args_1248_);
v___x_1250_ = v___x_1242_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_info_1235_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_kind_1236_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v_args_1248_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
else
{
lean_dec_ref(v_trailing_1211_);
return v_x_1212_;
}
}
default: 
{
lean_dec_ref(v_trailing_1211_);
return v_x_1212_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(lean_object* v_x_1256_, lean_object* v_x_1257_){
_start:
{
if (lean_obj_tag(v_x_1257_) == 0)
{
return v_x_1256_;
}
else
{
lean_object* v_head_1258_; lean_object* v_tail_1259_; lean_object* v___x_1260_; 
v_head_1258_ = lean_ctor_get(v_x_1257_, 0);
lean_inc(v_head_1258_);
v_tail_1259_ = lean_ctor_get(v_x_1257_, 1);
lean_inc(v_tail_1259_);
lean_dec_ref_known(v_x_1257_, 2);
v___x_1260_ = l_Lean_Name_append(v_x_1256_, v_head_1258_);
v_x_1256_ = v___x_1260_;
v_x_1257_ = v_tail_1259_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = lean_box(0);
v___x_1263_ = l_unsafeCast___redArg(v___x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(lean_object* v_n_1266_, lean_object* v_nFields_x3f_1267_){
_start:
{
if (lean_obj_tag(v_nFields_x3f_1267_) == 1)
{
lean_object* v_val_1268_; lean_object* v_nameComps_1269_; lean_object* v___x_1270_; lean_object* v_nPrefix_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v_namePrefix_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v_val_1268_ = lean_ctor_get(v_nFields_x3f_1267_, 0);
v_nameComps_1269_ = l_Lean_Name_components(v_n_1266_);
v___x_1270_ = l_List_lengthTR___redArg(v_nameComps_1269_);
v_nPrefix_1271_ = lean_nat_sub(v___x_1270_, v_val_1268_);
lean_dec(v___x_1270_);
v___x_1272_ = lean_obj_once(&l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0, &l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_once, _init_l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0);
v___x_1273_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__1));
lean_inc(v_nPrefix_1271_);
lean_inc(v_nameComps_1269_);
v___x_1274_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_nameComps_1269_, v_nameComps_1269_, v_nPrefix_1271_, v___x_1273_);
v_namePrefix_1275_ = l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(v___x_1272_, v___x_1274_);
v___x_1276_ = l_List_drop___redArg(v_nPrefix_1271_, v_nameComps_1269_);
lean_dec(v_nameComps_1269_);
v___x_1277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1277_, 0, v_namePrefix_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
return v___x_1277_;
}
else
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lean_Name_components(v_n_1266_);
return v___x_1278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___boxed(lean_object* v_n_1279_, lean_object* v_nFields_x3f_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(v_n_1279_, v_nFields_x3f_1280_);
lean_dec(v_nFields_x3f_1280_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(lean_object* v_msg_1282_){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = lean_box(0);
v___x_1284_ = lean_panic_fn_borrowed(v___x_1283_, v_msg_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(lean_object* v_x_1285_, lean_object* v_x_1286_){
_start:
{
if (lean_obj_tag(v_x_1286_) == 0)
{
return v_x_1285_;
}
else
{
lean_object* v_head_1287_; lean_object* v_tail_1288_; lean_object* v_startPos_1289_; lean_object* v_stopPos_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_head_1287_ = lean_ctor_get(v_x_1286_, 0);
v_tail_1288_ = lean_ctor_get(v_x_1286_, 1);
v_startPos_1289_ = lean_ctor_get(v_head_1287_, 1);
v_stopPos_1290_ = lean_ctor_get(v_head_1287_, 2);
v___x_1291_ = lean_nat_sub(v_stopPos_1290_, v_startPos_1289_);
v___x_1292_ = lean_nat_add(v_x_1285_, v___x_1291_);
lean_dec(v___x_1291_);
lean_dec(v_x_1285_);
v___x_1293_ = lean_unsigned_to_nat(1u);
v___x_1294_ = lean_nat_add(v___x_1292_, v___x_1293_);
lean_dec(v___x_1292_);
v_x_1285_ = v___x_1294_;
v_x_1286_ = v_tail_1288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2___boxed(lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(v_x_1296_, v_x_1297_);
lean_dec(v_x_1297_);
return v_res_1298_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
v___x_1300_ = lean_string_utf8_byte_size(v___x_1299_);
return v___x_1300_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1301_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0);
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
v___x_1304_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___x_1302_);
lean_ctor_set(v___x_1304_, 2, v___x_1301_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(lean_object* v_rawVal_1306_, lean_object* v_pos_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_){
_start:
{
if (lean_obj_tag(v_a_1308_) == 0)
{
lean_object* v___x_1310_; 
v___x_1310_ = l_List_reverse___redArg(v_a_1309_);
return v___x_1310_;
}
else
{
lean_object* v_head_1311_; lean_object* v_tail_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1330_; 
v_head_1311_ = lean_ctor_get(v_a_1308_, 0);
v_tail_1312_ = lean_ctor_get(v_a_1308_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_a_1308_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1314_ = v_a_1308_;
v_isShared_1315_ = v_isSharedCheck_1330_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_tail_1312_);
lean_inc(v_head_1311_);
lean_dec(v_a_1308_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1330_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v_stopPos_1316_; lean_object* v_startPos_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v_info_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1327_; 
v_stopPos_1316_ = lean_ctor_get(v_head_1311_, 2);
lean_inc(v_stopPos_1316_);
lean_dec(v_head_1311_);
v_startPos_1317_ = lean_ctor_get(v_rawVal_1306_, 1);
v___x_1318_ = lean_nat_sub(v_stopPos_1316_, v_startPos_1317_);
lean_dec(v_stopPos_1316_);
v___x_1319_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1, &l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1);
v___x_1320_ = lean_nat_add(v___x_1318_, v_pos_1307_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_unsigned_to_nat(1u);
v___x_1322_ = lean_nat_add(v___x_1321_, v___x_1320_);
v_info_1323_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_1323_, 0, v___x_1319_);
lean_ctor_set(v_info_1323_, 1, v___x_1320_);
lean_ctor_set(v_info_1323_, 2, v___x_1319_);
lean_ctor_set(v_info_1323_, 3, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__2));
v___x_1325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1325_, 0, v_info_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 1, v_a_1309_);
lean_ctor_set(v___x_1314_, 0, v___x_1325_);
v___x_1327_ = v___x_1314_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1325_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_a_1309_);
v___x_1327_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
v_a_1308_ = v_tail_1312_;
v_a_1309_ = v___x_1327_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___boxed(lean_object* v_rawVal_1331_, lean_object* v_pos_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(v_rawVal_1331_, v_pos_1332_, v_a_1333_, v_a_1334_);
lean_dec(v_pos_1332_);
lean_dec_ref(v_rawVal_1331_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(lean_object* v_rawVal_1336_, lean_object* v_pos_1337_, lean_object* v_trailing_1338_, lean_object* v_leading_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_){
_start:
{
if (lean_obj_tag(v_a_1340_) == 0)
{
lean_object* v___x_1342_; 
lean_dec_ref(v_leading_1339_);
lean_dec_ref(v_trailing_1338_);
v___x_1342_ = l_List_reverse___redArg(v_a_1341_);
return v___x_1342_;
}
else
{
lean_object* v_head_1343_; lean_object* v_snd_1344_; lean_object* v_tail_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1375_; 
v_head_1343_ = lean_ctor_get(v_a_1340_, 0);
lean_inc(v_head_1343_);
v_snd_1344_ = lean_ctor_get(v_head_1343_, 1);
lean_inc(v_snd_1344_);
v_tail_1345_ = lean_ctor_get(v_a_1340_, 1);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_a_1340_);
if (v_isSharedCheck_1375_ == 0)
{
lean_object* v_unused_1376_; 
v_unused_1376_ = lean_ctor_get(v_a_1340_, 0);
lean_dec(v_unused_1376_);
v___x_1347_ = v_a_1340_;
v_isShared_1348_ = v_isSharedCheck_1375_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_tail_1345_);
lean_dec(v_a_1340_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1375_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v_fst_1349_; lean_object* v_startPos_1350_; lean_object* v_stopPos_1351_; lean_object* v_startPos_1352_; lean_object* v_stopPos_1353_; lean_object* v_off_1354_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1369_; lean_object* v___x_1372_; uint8_t v_decide_1373_; 
v_fst_1349_ = lean_ctor_get(v_head_1343_, 0);
lean_inc(v_fst_1349_);
lean_dec(v_head_1343_);
v_startPos_1350_ = lean_ctor_get(v_snd_1344_, 1);
v_stopPos_1351_ = lean_ctor_get(v_snd_1344_, 2);
v_startPos_1352_ = lean_ctor_get(v_rawVal_1336_, 1);
v_stopPos_1353_ = lean_ctor_get(v_rawVal_1336_, 2);
v_off_1354_ = lean_nat_sub(v_startPos_1350_, v_startPos_1352_);
v___x_1372_ = lean_unsigned_to_nat(0u);
v_decide_1373_ = lean_nat_dec_eq(v_off_1354_, v___x_1372_);
if (v_decide_1373_ == 0)
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1, &l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1);
v___y_1369_ = v___x_1374_;
goto v___jp_1368_;
}
else
{
lean_inc_ref(v_leading_1339_);
v___y_1369_ = v_leading_1339_;
goto v___jp_1368_;
}
v___jp_1355_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v_info_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1365_; 
v___x_1358_ = lean_nat_add(v_off_1354_, v_pos_1337_);
lean_dec(v_off_1354_);
v___x_1359_ = lean_nat_sub(v_stopPos_1351_, v_startPos_1350_);
v___x_1360_ = lean_nat_add(v___x_1359_, v___x_1358_);
lean_dec(v___x_1359_);
v_info_1361_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_1361_, 0, v___y_1356_);
lean_ctor_set(v_info_1361_, 1, v___x_1358_);
lean_ctor_set(v_info_1361_, 2, v___y_1357_);
lean_ctor_set(v_info_1361_, 3, v___x_1360_);
v___x_1362_ = lean_box(0);
v___x_1363_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1363_, 0, v_info_1361_);
lean_ctor_set(v___x_1363_, 1, v_snd_1344_);
lean_ctor_set(v___x_1363_, 2, v_fst_1349_);
lean_ctor_set(v___x_1363_, 3, v___x_1362_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 1, v_a_1341_);
lean_ctor_set(v___x_1347_, 0, v___x_1363_);
v___x_1365_ = v___x_1347_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1363_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_a_1341_);
v___x_1365_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
v_a_1340_ = v_tail_1345_;
v_a_1341_ = v___x_1365_;
goto _start;
}
}
v___jp_1368_:
{
uint8_t v_decide_1370_; 
v_decide_1370_ = lean_nat_dec_eq(v_stopPos_1351_, v_stopPos_1353_);
if (v_decide_1370_ == 0)
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1, &l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1);
v___y_1356_ = v___y_1369_;
v___y_1357_ = v___x_1371_;
goto v___jp_1355_;
}
else
{
lean_inc_ref(v_trailing_1338_);
v___y_1356_ = v___y_1369_;
v___y_1357_ = v_trailing_1338_;
goto v___jp_1355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___boxed(lean_object* v_rawVal_1377_, lean_object* v_pos_1378_, lean_object* v_trailing_1379_, lean_object* v_leading_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(v_rawVal_1377_, v_pos_1378_, v_trailing_1379_, v_leading_1380_, v_a_1381_, v_a_1382_);
lean_dec(v_pos_1378_);
lean_dec_ref(v_rawVal_1377_);
return v_res_1383_;
}
}
static lean_object* _init_l_Lean_Syntax_identComponents_x3f___closed__5(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1392_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__4));
v___x_1393_ = lean_unsigned_to_nat(9u);
v___x_1394_ = lean_unsigned_to_nat(342u);
v___x_1395_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__3));
v___x_1396_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__2));
v___x_1397_ = l_mkPanicMessageWithDecl(v___x_1396_, v___x_1395_, v___x_1394_, v___x_1393_, v___x_1392_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f(lean_object* v_stx_1398_, lean_object* v_nFields_x3f_1399_){
_start:
{
if (lean_obj_tag(v_stx_1398_) == 3)
{
lean_object* v_info_1400_; 
v_info_1400_ = lean_ctor_get(v_stx_1398_, 0);
lean_inc(v_info_1400_);
if (lean_obj_tag(v_info_1400_) == 0)
{
lean_object* v_rawVal_1401_; lean_object* v_val_1402_; lean_object* v_leading_1403_; lean_object* v_pos_1404_; lean_object* v_trailing_1405_; lean_object* v_rawComps_1406_; uint8_t v___x_1407_; 
v_rawVal_1401_ = lean_ctor_get(v_stx_1398_, 1);
lean_inc_ref_n(v_rawVal_1401_, 2);
v_val_1402_ = lean_ctor_get(v_stx_1398_, 2);
lean_inc(v_val_1402_);
lean_dec_ref_known(v_stx_1398_, 4);
v_leading_1403_ = lean_ctor_get(v_info_1400_, 0);
lean_inc_ref(v_leading_1403_);
v_pos_1404_ = lean_ctor_get(v_info_1400_, 1);
lean_inc(v_pos_1404_);
v_trailing_1405_ = lean_ctor_get(v_info_1400_, 2);
lean_inc_ref(v_trailing_1405_);
lean_dec_ref_known(v_info_1400_, 4);
v_rawComps_1406_ = l_Lean_Syntax_splitNameLit(v_rawVal_1401_);
v___x_1407_ = l_List_isEmpty___redArg(v_rawComps_1406_);
if (v___x_1407_ == 0)
{
lean_object* v_val_1408_; lean_object* v_nameComps_1409_; lean_object* v___y_1411_; 
v_val_1408_ = l_Lean_Name_eraseMacroScopes(v_val_1402_);
lean_dec(v_val_1402_);
v_nameComps_1409_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(v_val_1408_, v_nFields_x3f_1399_);
if (lean_obj_tag(v_nFields_x3f_1399_) == 1)
{
lean_object* v_val_1425_; lean_object* v_str_1426_; lean_object* v_startPos_1427_; lean_object* v_stopPos_1428_; lean_object* v___x_1429_; lean_object* v_nPrefix_1430_; lean_object* v___y_1432_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v_prefixSz_1438_; lean_object* v___x_1439_; lean_object* v_prefixSz_1440_; lean_object* v___y_1442_; uint8_t v___x_1447_; 
v_val_1425_ = lean_ctor_get(v_nFields_x3f_1399_, 0);
v_str_1426_ = lean_ctor_get(v_rawVal_1401_, 0);
v_startPos_1427_ = lean_ctor_get(v_rawVal_1401_, 1);
v_stopPos_1428_ = lean_ctor_get(v_rawVal_1401_, 2);
v___x_1429_ = l_List_lengthTR___redArg(v_rawComps_1406_);
v_nPrefix_1430_ = lean_nat_sub(v___x_1429_, v_val_1425_);
lean_dec(v___x_1429_);
v___x_1435_ = lean_unsigned_to_nat(0u);
v___x_1436_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__0));
lean_inc(v_nPrefix_1430_);
lean_inc(v_rawComps_1406_);
v___x_1437_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_rawComps_1406_, v_rawComps_1406_, v_nPrefix_1430_, v___x_1436_);
v_prefixSz_1438_ = l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(v___x_1435_, v___x_1437_);
lean_dec(v___x_1437_);
v___x_1439_ = lean_unsigned_to_nat(1u);
v_prefixSz_1440_ = lean_nat_sub(v_prefixSz_1438_, v___x_1439_);
lean_dec(v_prefixSz_1438_);
v___x_1447_ = lean_nat_dec_le(v_prefixSz_1440_, v___x_1435_);
if (v___x_1447_ == 0)
{
uint8_t v___x_1448_; 
v___x_1448_ = lean_nat_dec_le(v_stopPos_1428_, v_startPos_1427_);
if (v___x_1448_ == 0)
{
lean_inc(v_startPos_1427_);
v___y_1442_ = v_startPos_1427_;
goto v___jp_1441_;
}
else
{
lean_inc(v_stopPos_1428_);
v___y_1442_ = v_stopPos_1428_;
goto v___jp_1441_;
}
}
else
{
lean_object* v___x_1449_; 
lean_dec(v_prefixSz_1440_);
v___x_1449_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__1));
v___y_1432_ = v___x_1449_;
goto v___jp_1431_;
}
v___jp_1431_:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1433_ = l_List_drop___redArg(v_nPrefix_1430_, v_rawComps_1406_);
lean_dec(v_rawComps_1406_);
v___x_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___y_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___y_1411_ = v___x_1434_;
goto v___jp_1410_;
}
v___jp_1441_:
{
lean_object* v___x_1443_; uint8_t v___x_1444_; 
v___x_1443_ = lean_nat_add(v_startPos_1427_, v_prefixSz_1440_);
lean_dec(v_prefixSz_1440_);
v___x_1444_ = lean_nat_dec_le(v_stopPos_1428_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; 
lean_inc_ref(v_str_1426_);
v___x_1445_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1445_, 0, v_str_1426_);
lean_ctor_set(v___x_1445_, 1, v___y_1442_);
lean_ctor_set(v___x_1445_, 2, v___x_1443_);
v___y_1432_ = v___x_1445_;
goto v___jp_1431_;
}
else
{
lean_object* v___x_1446_; 
lean_dec(v___x_1443_);
lean_inc(v_stopPos_1428_);
lean_inc_ref(v_str_1426_);
v___x_1446_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1446_, 0, v_str_1426_);
lean_ctor_set(v___x_1446_, 1, v___y_1442_);
lean_ctor_set(v___x_1446_, 2, v_stopPos_1428_);
v___y_1432_ = v___x_1446_;
goto v___jp_1431_;
}
}
}
else
{
v___y_1411_ = v_rawComps_1406_;
goto v___jp_1410_;
}
v___jp_1410_:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; uint8_t v___x_1414_; 
v___x_1412_ = l_List_lengthTR___redArg(v_nameComps_1409_);
v___x_1413_ = l_List_lengthTR___redArg(v___y_1411_);
v___x_1414_ = lean_nat_dec_eq(v___x_1412_, v___x_1413_);
lean_dec(v___x_1413_);
lean_dec(v___x_1412_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; 
lean_dec(v___y_1411_);
lean_dec(v_nameComps_1409_);
lean_dec_ref(v_trailing_1405_);
lean_dec(v_pos_1404_);
lean_dec_ref(v_leading_1403_);
lean_dec_ref(v_rawVal_1401_);
v___x_1415_ = lean_box(0);
return v___x_1415_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v_comps_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v_seps_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_inc(v___y_1411_);
v___x_1416_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v_nameComps_1409_, v___y_1411_);
v___x_1417_ = lean_box(0);
v_comps_1418_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(v_rawVal_1401_, v_pos_1404_, v_trailing_1405_, v_leading_1403_, v___x_1416_, v___x_1417_);
v___x_1419_ = lean_array_mk(v___y_1411_);
v___x_1420_ = lean_array_pop(v___x_1419_);
v___x_1421_ = lean_array_to_list(v___x_1420_);
v_seps_1422_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(v_rawVal_1401_, v_pos_1404_, v___x_1421_, v___x_1417_);
lean_dec(v_pos_1404_);
lean_dec_ref(v_rawVal_1401_);
v___x_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1423_, 0, v_comps_1418_);
lean_ctor_set(v___x_1423_, 1, v_seps_1422_);
v___x_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
return v___x_1424_;
}
}
}
else
{
lean_object* v___x_1450_; 
lean_dec(v_rawComps_1406_);
lean_dec_ref(v_trailing_1405_);
lean_dec(v_pos_1404_);
lean_dec_ref(v_leading_1403_);
lean_dec(v_val_1402_);
lean_dec_ref(v_rawVal_1401_);
v___x_1450_ = lean_box(0);
return v___x_1450_;
}
}
else
{
lean_object* v___x_1451_; 
lean_dec(v_info_1400_);
lean_dec_ref_known(v_stx_1398_, 4);
v___x_1451_ = lean_box(0);
return v___x_1451_;
}
}
else
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
lean_dec(v_stx_1398_);
v___x_1452_ = lean_obj_once(&l_Lean_Syntax_identComponents_x3f___closed__5, &l_Lean_Syntax_identComponents_x3f___closed__5_once, _init_l_Lean_Syntax_identComponents_x3f___closed__5);
v___x_1453_ = l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(v___x_1452_);
return v___x_1453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f___boxed(lean_object* v_stx_1454_, lean_object* v_nFields_x3f_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lean_Syntax_identComponents_x3f(v_stx_1454_, v_nFields_x3f_1455_);
lean_dec(v_nFields_x3f_1455_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(lean_object* v_n_1457_, lean_object* v_nFields_x3f_1458_){
_start:
{
if (lean_obj_tag(v_nFields_x3f_1458_) == 1)
{
lean_object* v_val_1459_; lean_object* v_nameComps_1460_; lean_object* v___x_1461_; lean_object* v_nPrefix_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v_namePrefix_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v_val_1459_ = lean_ctor_get(v_nFields_x3f_1458_, 0);
v_nameComps_1460_ = l_Lean_Name_components(v_n_1457_);
v___x_1461_ = l_List_lengthTR___redArg(v_nameComps_1460_);
v_nPrefix_1462_ = lean_nat_sub(v___x_1461_, v_val_1459_);
lean_dec(v___x_1461_);
v___x_1463_ = lean_obj_once(&l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0, &l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_once, _init_l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0);
v___x_1464_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__1));
lean_inc(v_nPrefix_1462_);
lean_inc(v_nameComps_1460_);
v___x_1465_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_nameComps_1460_, v_nameComps_1460_, v_nPrefix_1462_, v___x_1464_);
v_namePrefix_1466_ = l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(v___x_1463_, v___x_1465_);
v___x_1467_ = l_List_drop___redArg(v_nPrefix_1462_, v_nameComps_1460_);
lean_dec(v_nameComps_1460_);
v___x_1468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1468_, 0, v_namePrefix_1466_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lean_Name_components(v_n_1457_);
return v___x_1469_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps___boxed(lean_object* v_n_1470_, lean_object* v_nFields_x3f_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_n_1470_, v_nFields_x3f_1471_);
lean_dec(v_nFields_x3f_1471_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_spec__1(lean_object* v_msg_1473_){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_box(0);
v___x_1475_ = lean_panic_fn_borrowed(v___x_1474_, v_msg_1473_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(lean_object* v_info_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
if (lean_obj_tag(v_a_1477_) == 0)
{
lean_object* v___x_1479_; 
lean_dec(v_info_1476_);
v___x_1479_ = l_List_reverse___redArg(v_a_1478_);
return v___x_1479_;
}
else
{
lean_object* v_head_1480_; lean_object* v_tail_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1496_; 
v_head_1480_ = lean_ctor_get(v_a_1477_, 0);
v_tail_1481_ = lean_ctor_get(v_a_1477_, 1);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_a_1477_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1483_ = v_a_1477_;
v_isShared_1484_ = v_isSharedCheck_1496_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_tail_1481_);
lean_inc(v_head_1480_);
lean_dec(v_a_1477_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1496_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1485_ = 1;
lean_inc(v_head_1480_);
v___x_1486_ = l_Lean_Name_toString(v_head_1480_, v___x_1485_);
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = lean_string_utf8_byte_size(v___x_1486_);
v___x_1489_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1486_);
lean_ctor_set(v___x_1489_, 1, v___x_1487_);
lean_ctor_set(v___x_1489_, 2, v___x_1488_);
v___x_1490_ = lean_box(0);
lean_inc(v_info_1476_);
v___x_1491_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1491_, 0, v_info_1476_);
lean_ctor_set(v___x_1491_, 1, v___x_1489_);
lean_ctor_set(v___x_1491_, 2, v_head_1480_);
lean_ctor_set(v___x_1491_, 3, v___x_1490_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 1, v_a_1478_);
lean_ctor_set(v___x_1483_, 0, v___x_1491_);
v___x_1493_ = v___x_1483_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_a_1478_);
v___x_1493_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
v_a_1477_ = v_tail_1481_;
v_a_1478_ = v___x_1493_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Syntax_identComponents___closed__1(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1498_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__4));
v___x_1499_ = lean_unsigned_to_nat(9u);
v___x_1500_ = lean_unsigned_to_nat(377u);
v___x_1501_ = ((lean_object*)(l_Lean_Syntax_identComponents___closed__0));
v___x_1502_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__2));
v___x_1503_ = l_mkPanicMessageWithDecl(v___x_1502_, v___x_1501_, v___x_1500_, v___x_1499_, v___x_1498_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents(lean_object* v_stx_1504_, lean_object* v_nFields_x3f_1505_){
_start:
{
if (lean_obj_tag(v_stx_1504_) == 3)
{
lean_object* v_info_1506_; lean_object* v_rawVal_1507_; lean_object* v_val_1508_; lean_object* v_val_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; uint8_t v___x_1512_; 
v_info_1506_ = lean_ctor_get(v_stx_1504_, 0);
lean_inc(v_info_1506_);
v_rawVal_1507_ = lean_ctor_get(v_stx_1504_, 1);
v_val_1508_ = lean_ctor_get(v_stx_1504_, 2);
v_val_1509_ = l_Lean_Name_eraseMacroScopes(v_val_1508_);
v___x_1510_ = l_Lean_Name_getNumParts(v_val_1509_);
v___x_1511_ = lean_unsigned_to_nat(1u);
v___x_1512_ = lean_nat_dec_le(v___x_1510_, v___x_1511_);
lean_dec(v___x_1510_);
if (v___x_1512_ == 0)
{
if (lean_obj_tag(v_info_1506_) == 0)
{
lean_object* v___x_1513_; 
v___x_1513_ = l_Lean_Syntax_identComponents_x3f(v_stx_1504_, v_nFields_x3f_1505_);
if (lean_obj_tag(v___x_1513_) == 1)
{
lean_object* v_val_1514_; lean_object* v_fst_1515_; 
lean_dec_ref_known(v_info_1506_, 4);
lean_dec(v_val_1509_);
v_val_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_val_1514_);
lean_dec_ref_known(v___x_1513_, 1);
v_fst_1515_ = lean_ctor_get(v_val_1514_, 0);
lean_inc(v_fst_1515_);
lean_dec(v_val_1514_);
return v_fst_1515_;
}
else
{
lean_object* v_nameComps_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
lean_dec(v___x_1513_);
v_nameComps_1516_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_val_1509_, v_nFields_x3f_1505_);
v___x_1517_ = lean_box(0);
v___x_1518_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(v_info_1506_, v_nameComps_1516_, v___x_1517_);
return v___x_1518_;
}
}
else
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_dec_ref_known(v_stx_1504_, 4);
v___x_1519_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_val_1509_, v_nFields_x3f_1505_);
v___x_1520_ = lean_box(0);
v___x_1521_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(v_info_1506_, v___x_1519_, v___x_1520_);
return v___x_1521_;
}
}
else
{
lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1530_; 
lean_inc_ref(v_rawVal_1507_);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_stx_1504_);
if (v_isSharedCheck_1530_ == 0)
{
lean_object* v_unused_1531_; lean_object* v_unused_1532_; lean_object* v_unused_1533_; lean_object* v_unused_1534_; 
v_unused_1531_ = lean_ctor_get(v_stx_1504_, 3);
lean_dec(v_unused_1531_);
v_unused_1532_ = lean_ctor_get(v_stx_1504_, 2);
lean_dec(v_unused_1532_);
v_unused_1533_ = lean_ctor_get(v_stx_1504_, 1);
lean_dec(v_unused_1533_);
v_unused_1534_ = lean_ctor_get(v_stx_1504_, 0);
lean_dec(v_unused_1534_);
v___x_1523_ = v_stx_1504_;
v_isShared_1524_ = v_isSharedCheck_1530_;
goto v_resetjp_1522_;
}
else
{
lean_dec(v_stx_1504_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1530_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; lean_object* v___x_1527_; 
v___x_1525_ = lean_box(0);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 3, v___x_1525_);
lean_ctor_set(v___x_1523_, 2, v_val_1509_);
v___x_1527_ = v___x_1523_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_info_1506_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v_rawVal_1507_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v_val_1509_);
lean_ctor_set(v_reuseFailAlloc_1529_, 3, v___x_1525_);
v___x_1527_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
lean_ctor_set(v___x_1528_, 1, v___x_1525_);
return v___x_1528_;
}
}
}
}
else
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
lean_dec(v_stx_1504_);
v___x_1535_ = lean_obj_once(&l_Lean_Syntax_identComponents___closed__1, &l_Lean_Syntax_identComponents___closed__1_once, _init_l_Lean_Syntax_identComponents___closed__1);
v___x_1536_ = l_panic___at___00Lean_Syntax_identComponents_spec__1(v___x_1535_);
return v___x_1536_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents___boxed(lean_object* v_stx_1537_, lean_object* v_nFields_x3f_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lean_Syntax_identComponents(v_stx_1537_, v_nFields_x3f_1538_);
lean_dec(v_nFields_x3f_1538_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown(lean_object* v_stx_1540_, uint8_t v_firstChoiceOnly_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1542_, 0, v_stx_1540_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*1, v_firstChoiceOnly_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown___boxed(lean_object* v_stx_1543_, lean_object* v_firstChoiceOnly_1544_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1545_; lean_object* v_res_1546_; 
v_firstChoiceOnly_boxed_1545_ = lean_unbox(v_firstChoiceOnly_1544_);
v_res_1546_ = l_Lean_Syntax_topDown(v_stx_1543_, v_firstChoiceOnly_boxed_1545_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0(lean_object* v_toPure_1547_, lean_object* v_____r_1548_, lean_object* v_b_1549_){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1550_, 0, v_b_1549_);
v___x_1551_ = lean_apply_2(v_toPure_1547_, lean_box(0), v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1(lean_object* v___f_1552_, lean_object* v_toPure_1553_, lean_object* v_____s_1554_){
_start:
{
lean_object* v_fst_1555_; 
v_fst_1555_ = lean_ctor_get(v_____s_1554_, 0);
if (lean_obj_tag(v_fst_1555_) == 0)
{
lean_object* v_snd_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec(v_toPure_1553_);
v_snd_1556_ = lean_ctor_get(v_____s_1554_, 1);
lean_inc(v_snd_1556_);
lean_dec_ref(v_____s_1554_);
v___x_1557_ = lean_box(0);
v___x_1558_ = lean_apply_2(v___f_1552_, v___x_1557_, v_snd_1556_);
return v___x_1558_;
}
else
{
lean_object* v_val_1559_; lean_object* v___x_1560_; 
lean_inc_ref(v_fst_1555_);
lean_dec_ref(v_____s_1554_);
lean_dec(v___f_1552_);
v_val_1559_ = lean_ctor_get(v_fst_1555_, 0);
lean_inc(v_val_1559_);
lean_dec_ref_known(v_fst_1555_, 1);
v___x_1560_ = lean_apply_2(v_toPure_1553_, lean_box(0), v_val_1559_);
return v___x_1560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2(lean_object* v_snd_1561_, lean_object* v_toPure_1562_, lean_object* v___x_1563_, lean_object* v_____do__lift_1564_){
_start:
{
if (lean_obj_tag(v_____do__lift_1564_) == 0)
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
lean_dec(v___x_1563_);
v___x_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1565_, 0, v_____do__lift_1564_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
lean_ctor_set(v___x_1566_, 1, v_snd_1561_);
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
v___x_1568_ = lean_apply_2(v_toPure_1562_, lean_box(0), v___x_1567_);
return v___x_1568_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1578_; 
lean_dec(v_snd_1561_);
v_a_1569_ = lean_ctor_get(v_____do__lift_1564_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v_____do__lift_1564_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1571_ = v_____do__lift_1564_;
v_isShared_1572_ = v_isSharedCheck_1578_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v_____do__lift_1564_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1578_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1563_);
lean_ctor_set(v___x_1573_, 1, v_a_1569_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v___x_1573_);
v___x_1575_ = v___x_1571_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1573_);
v___x_1575_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_apply_2(v_toPure_1562_, lean_box(0), v___x_1575_);
return v___x_1576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed(lean_object* v_toPure_1579_, lean_object* v___x_1580_, lean_object* v_inst_1581_, lean_object* v_f_1582_, lean_object* v_firstChoiceOnly_1583_, lean_object* v_toBind_1584_, lean_object* v_a_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1588_; lean_object* v_res_1589_; 
v_firstChoiceOnly_boxed_1588_ = lean_unbox(v_firstChoiceOnly_1583_);
v_res_1589_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(v_toPure_1579_, v___x_1580_, v_inst_1581_, v_f_1582_, v_firstChoiceOnly_boxed_1588_, v_toBind_1584_, v_a_1585_, v_x_1586_, v___y_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(lean_object* v_toPure_1593_, lean_object* v_stx_1594_, lean_object* v_inst_1595_, lean_object* v_f_1596_, uint8_t v_firstChoiceOnly_1597_, lean_object* v_toBind_1598_, lean_object* v___f_1599_, lean_object* v___x_1600_, lean_object* v___f_1601_, lean_object* v_____do__lift_1602_){
_start:
{
if (lean_obj_tag(v_____do__lift_1602_) == 0)
{
lean_object* v___x_1603_; 
lean_dec(v___f_1601_);
lean_dec(v___f_1599_);
lean_dec(v_toBind_1598_);
lean_dec(v_f_1596_);
lean_dec_ref(v_inst_1595_);
lean_dec(v_stx_1594_);
v___x_1603_ = lean_apply_2(v_toPure_1593_, lean_box(0), v_____do__lift_1602_);
return v___x_1603_;
}
else
{
if (lean_obj_tag(v_stx_1594_) == 1)
{
lean_object* v_a_1604_; lean_object* v_kind_1605_; lean_object* v_args_1606_; 
lean_dec(v___f_1601_);
v_a_1604_ = lean_ctor_get(v_____do__lift_1602_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v_____do__lift_1602_, 1);
v_kind_1605_ = lean_ctor_get(v_stx_1594_, 1);
lean_inc(v_kind_1605_);
v_args_1606_ = lean_ctor_get(v_stx_1594_, 2);
lean_inc_ref(v_args_1606_);
lean_dec_ref_known(v_stx_1594_, 3);
if (v_firstChoiceOnly_1597_ == 0)
{
lean_dec(v_kind_1605_);
goto v___jp_1607_;
}
else
{
lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1616_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1617_ = lean_name_eq(v_kind_1605_, v___x_1616_);
lean_dec(v_kind_1605_);
if (v___x_1617_ == 0)
{
goto v___jp_1607_;
}
else
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_dec(v___f_1599_);
lean_dec(v_toBind_1598_);
lean_dec(v_toPure_1593_);
v___x_1618_ = lean_unsigned_to_nat(0u);
v___x_1619_ = lean_array_get(v___x_1600_, v_args_1606_, v___x_1618_);
lean_dec_ref(v_args_1606_);
v___x_1620_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1595_, v_f_1596_, v_firstChoiceOnly_1597_, v___x_1619_, v_a_1604_);
return v___x_1620_;
}
}
v___jp_1607_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___f_1610_; lean_object* v___x_1611_; size_t v_sz_1612_; size_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1608_ = lean_box(0);
v___x_1609_ = lean_box(v_firstChoiceOnly_1597_);
lean_inc(v_toBind_1598_);
lean_inc_ref(v_inst_1595_);
v___f_1610_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed), 9, 6);
lean_closure_set(v___f_1610_, 0, v_toPure_1593_);
lean_closure_set(v___f_1610_, 1, v___x_1608_);
lean_closure_set(v___f_1610_, 2, v_inst_1595_);
lean_closure_set(v___f_1610_, 3, v_f_1596_);
lean_closure_set(v___f_1610_, 4, v___x_1609_);
lean_closure_set(v___f_1610_, 5, v_toBind_1598_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1608_);
lean_ctor_set(v___x_1611_, 1, v_a_1604_);
v_sz_1612_ = lean_array_size(v_args_1606_);
v___x_1613_ = ((size_t)0ULL);
v___x_1614_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1595_, v_args_1606_, v___f_1610_, v_sz_1612_, v___x_1613_, v___x_1611_);
v___x_1615_ = lean_apply_4(v_toBind_1598_, lean_box(0), lean_box(0), v___x_1614_, v___f_1599_);
return v___x_1615_;
}
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec(v___f_1599_);
lean_dec(v_toBind_1598_);
lean_dec(v_f_1596_);
lean_dec_ref(v_inst_1595_);
lean_dec(v_stx_1594_);
lean_dec(v_toPure_1593_);
v_a_1621_ = lean_ctor_get(v_____do__lift_1602_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v_____do__lift_1602_, 1);
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_apply_2(v___f_1601_, v___x_1622_, v_a_1621_);
return v___x_1623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed(lean_object* v_toPure_1624_, lean_object* v_stx_1625_, lean_object* v_inst_1626_, lean_object* v_f_1627_, lean_object* v_firstChoiceOnly_1628_, lean_object* v_toBind_1629_, lean_object* v___f_1630_, lean_object* v___x_1631_, lean_object* v___f_1632_, lean_object* v_____do__lift_1633_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1634_; lean_object* v_res_1635_; 
v_firstChoiceOnly_boxed_1634_ = lean_unbox(v_firstChoiceOnly_1628_);
v_res_1635_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(v_toPure_1624_, v_stx_1625_, v_inst_1626_, v_f_1627_, v_firstChoiceOnly_boxed_1634_, v_toBind_1629_, v___f_1630_, v___x_1631_, v___f_1632_, v_____do__lift_1633_);
lean_dec(v___x_1631_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(lean_object* v_inst_1636_, lean_object* v_f_1637_, uint8_t v_firstChoiceOnly_1638_, lean_object* v_stx_1639_, lean_object* v_b_1640_){
_start:
{
lean_object* v_toApplicative_1641_; lean_object* v_toBind_1642_; lean_object* v_toPure_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___f_1646_; lean_object* v___f_1647_; lean_object* v___x_1648_; lean_object* v___f_1649_; lean_object* v___x_1650_; 
v_toApplicative_1641_ = lean_ctor_get(v_inst_1636_, 0);
v_toBind_1642_ = lean_ctor_get(v_inst_1636_, 1);
lean_inc_n(v_toBind_1642_, 2);
v_toPure_1643_ = lean_ctor_get(v_toApplicative_1641_, 1);
lean_inc_n(v_toPure_1643_, 3);
v___x_1644_ = lean_box(0);
lean_inc(v_f_1637_);
lean_inc(v_stx_1639_);
v___x_1645_ = lean_apply_2(v_f_1637_, v_stx_1639_, v_b_1640_);
v___f_1646_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1646_, 0, v_toPure_1643_);
lean_inc_ref(v___f_1646_);
v___f_1647_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1647_, 0, v___f_1646_);
lean_closure_set(v___f_1647_, 1, v_toPure_1643_);
v___x_1648_ = lean_box(v_firstChoiceOnly_1638_);
v___f_1649_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_1649_, 0, v_toPure_1643_);
lean_closure_set(v___f_1649_, 1, v_stx_1639_);
lean_closure_set(v___f_1649_, 2, v_inst_1636_);
lean_closure_set(v___f_1649_, 3, v_f_1637_);
lean_closure_set(v___f_1649_, 4, v___x_1648_);
lean_closure_set(v___f_1649_, 5, v_toBind_1642_);
lean_closure_set(v___f_1649_, 6, v___f_1647_);
lean_closure_set(v___f_1649_, 7, v___x_1644_);
lean_closure_set(v___f_1649_, 8, v___f_1646_);
v___x_1650_ = lean_apply_4(v_toBind_1642_, lean_box(0), lean_box(0), v___x_1645_, v___f_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(lean_object* v_toPure_1651_, lean_object* v___x_1652_, lean_object* v_inst_1653_, lean_object* v_f_1654_, uint8_t v_firstChoiceOnly_1655_, lean_object* v_toBind_1656_, lean_object* v_a_1657_, lean_object* v_x_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v_snd_1660_; lean_object* v___f_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v_snd_1660_ = lean_ctor_get(v___y_1659_, 1);
lean_inc_n(v_snd_1660_, 2);
lean_dec_ref(v___y_1659_);
v___f_1661_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1661_, 0, v_snd_1660_);
lean_closure_set(v___f_1661_, 1, v_toPure_1651_);
lean_closure_set(v___f_1661_, 2, v___x_1652_);
v___x_1662_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1653_, v_f_1654_, v_firstChoiceOnly_1655_, v_a_1657_, v_snd_1660_);
v___x_1663_ = lean_apply_4(v_toBind_1656_, lean_box(0), lean_box(0), v___x_1662_, v___f_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___boxed(lean_object* v_inst_1664_, lean_object* v_f_1665_, lean_object* v_firstChoiceOnly_1666_, lean_object* v_stx_1667_, lean_object* v_b_1668_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1669_; lean_object* v_res_1670_; 
v_firstChoiceOnly_boxed_1669_ = lean_unbox(v_firstChoiceOnly_1666_);
v_res_1670_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1664_, v_f_1665_, v_firstChoiceOnly_boxed_1669_, v_stx_1667_, v_b_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop(lean_object* v_m_1671_, lean_object* v_inst_1672_, lean_object* v_00_u03b2_1673_, lean_object* v_f_1674_, uint8_t v_firstChoiceOnly_1675_, lean_object* v_stx_1676_, lean_object* v_b_1677_, lean_object* v_inst_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1672_, v_f_1674_, v_firstChoiceOnly_1675_, v_stx_1676_, v_b_1677_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___boxed(lean_object* v_m_1680_, lean_object* v_inst_1681_, lean_object* v_00_u03b2_1682_, lean_object* v_f_1683_, lean_object* v_firstChoiceOnly_1684_, lean_object* v_stx_1685_, lean_object* v_b_1686_, lean_object* v_inst_1687_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1688_; lean_object* v_res_1689_; 
v_firstChoiceOnly_boxed_1688_ = lean_unbox(v_firstChoiceOnly_1684_);
v_res_1689_ = l_Lean_Syntax_instForInTopDownOfMonad_loop(v_m_1680_, v_inst_1681_, v_00_u03b2_1682_, v_f_1683_, v_firstChoiceOnly_boxed_1688_, v_stx_1685_, v_b_1686_, v_inst_1687_);
lean_dec(v_inst_1687_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0(lean_object* v_toPure_1690_, lean_object* v_____do__lift_1691_){
_start:
{
lean_object* v_a_1692_; lean_object* v___x_1693_; 
v_a_1692_ = lean_ctor_get(v_____do__lift_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref(v_____do__lift_1691_);
v___x_1693_ = lean_apply_2(v_toPure_1690_, lean_box(0), v_a_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1(lean_object* v_inst_1694_, lean_object* v_toBind_1695_, lean_object* v___f_1696_, lean_object* v_00_u03b2_1697_, lean_object* v_x_1698_, lean_object* v_init_1699_, lean_object* v_f_1700_){
_start:
{
uint8_t v_firstChoiceOnly_1701_; lean_object* v_stx_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v_firstChoiceOnly_1701_ = lean_ctor_get_uint8(v_x_1698_, sizeof(void*)*1);
v_stx_1702_ = lean_ctor_get(v_x_1698_, 0);
lean_inc(v_stx_1702_);
lean_dec_ref(v_x_1698_);
v___x_1703_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1694_, v_f_1700_, v_firstChoiceOnly_1701_, v_stx_1702_, v_init_1699_);
v___x_1704_ = lean_apply_4(v_toBind_1695_, lean_box(0), lean_box(0), v___x_1703_, v___f_1696_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg(lean_object* v_inst_1705_){
_start:
{
lean_object* v_toApplicative_1706_; lean_object* v_toBind_1707_; lean_object* v_toPure_1708_; lean_object* v___f_1709_; lean_object* v___f_1710_; 
v_toApplicative_1706_ = lean_ctor_get(v_inst_1705_, 0);
v_toBind_1707_ = lean_ctor_get(v_inst_1705_, 1);
lean_inc(v_toBind_1707_);
v_toPure_1708_ = lean_ctor_get(v_toApplicative_1706_, 1);
lean_inc(v_toPure_1708_);
v___f_1709_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1709_, 0, v_toPure_1708_);
v___f_1710_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1), 7, 3);
lean_closure_set(v___f_1710_, 0, v_inst_1705_);
lean_closure_set(v___f_1710_, 1, v_toBind_1707_);
lean_closure_set(v___f_1710_, 2, v___f_1709_);
return v___f_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad(lean_object* v_m_1711_, lean_object* v_inst_1712_){
_start:
{
lean_object* v___x_1713_; 
v___x_1713_ = l_Lean_Syntax_instForInTopDownOfMonad___redArg(v_inst_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(lean_object* v_info_1715_, lean_object* v_val_1716_){
_start:
{
if (lean_obj_tag(v_info_1715_) == 0)
{
lean_object* v_leading_1717_; lean_object* v_trailing_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v_leading_1717_ = lean_ctor_get(v_info_1715_, 0);
lean_inc_ref(v_leading_1717_);
v_trailing_1718_ = lean_ctor_get(v_info_1715_, 2);
lean_inc_ref(v_trailing_1718_);
lean_dec_ref_known(v_info_1715_, 4);
v___x_1719_ = lean_substring_tostring(v_leading_1717_);
v___x_1720_ = lean_string_append(v___x_1719_, v_val_1716_);
v___x_1721_ = lean_substring_tostring(v_trailing_1718_);
v___x_1722_ = lean_string_append(v___x_1720_, v___x_1721_);
lean_dec_ref(v___x_1721_);
return v___x_1722_;
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_dec(v_info_1715_);
v___x_1723_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0));
v___x_1724_ = lean_string_append(v___x_1723_, v_val_1716_);
v___x_1725_ = lean_string_append(v___x_1724_, v___x_1723_);
return v___x_1725_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___boxed(lean_object* v_info_1726_, lean_object* v_val_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1726_, v_val_1727_);
lean_dec_ref(v_val_1727_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(uint8_t v_firstChoiceOnly_1729_, lean_object* v_as_1730_, size_t v_sz_1731_, size_t v_i_1732_, lean_object* v_b_1733_){
_start:
{
uint8_t v___x_1734_; 
v___x_1734_ = lean_usize_dec_lt(v_i_1732_, v_sz_1731_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_b_1733_);
return v___x_1735_;
}
else
{
lean_object* v_snd_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1763_; 
v_snd_1736_ = lean_ctor_get(v_b_1733_, 1);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_b_1733_);
if (v_isSharedCheck_1763_ == 0)
{
lean_object* v_unused_1764_; 
v_unused_1764_ = lean_ctor_get(v_b_1733_, 0);
lean_dec(v_unused_1764_);
v___x_1738_ = v_b_1733_;
v_isShared_1739_ = v_isSharedCheck_1763_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_snd_1736_);
lean_dec(v_b_1733_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1763_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v_a_1740_; lean_object* v___x_1741_; 
v_a_1740_ = lean_array_uget_borrowed(v_as_1730_, v_i_1732_);
lean_inc(v_snd_1736_);
lean_inc(v_a_1740_);
v___x_1741_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v_firstChoiceOnly_1729_, v_a_1740_, v_snd_1736_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v___x_1742_; 
lean_del_object(v___x_1738_);
lean_dec(v_snd_1736_);
v___x_1742_ = lean_box(0);
return v___x_1742_;
}
else
{
lean_object* v_val_1743_; 
v_val_1743_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_val_1743_);
if (lean_obj_tag(v_val_1743_) == 0)
{
lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1753_; 
v_isSharedCheck_1753_ = !lean_is_exclusive(v_val_1743_);
if (v_isSharedCheck_1753_ == 0)
{
lean_object* v_unused_1754_; 
v_unused_1754_ = lean_ctor_get(v_val_1743_, 0);
lean_dec(v_unused_1754_);
v___x_1745_ = v_val_1743_;
v_isShared_1746_ = v_isSharedCheck_1753_;
goto v_resetjp_1744_;
}
else
{
lean_dec(v_val_1743_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1753_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v___x_1741_);
v___x_1748_ = v___x_1738_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1741_);
lean_ctor_set(v_reuseFailAlloc_1752_, 1, v_snd_1736_);
v___x_1748_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1750_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set_tag(v___x_1745_, 1);
lean_ctor_set(v___x_1745_, 0, v___x_1748_);
v___x_1750_ = v___x_1745_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; 
lean_dec_ref_known(v___x_1741_, 1);
lean_dec(v_snd_1736_);
v_a_1755_ = lean_ctor_get(v_val_1743_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v_val_1743_, 1);
v___x_1756_ = lean_box(0);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 1, v_a_1755_);
lean_ctor_set(v___x_1738_, 0, v___x_1756_);
v___x_1758_ = v___x_1738_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1756_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_a_1755_);
v___x_1758_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
size_t v___x_1759_; size_t v___x_1760_; 
v___x_1759_ = ((size_t)1ULL);
v___x_1760_ = lean_usize_add(v_i_1732_, v___x_1759_);
v_i_1732_ = v___x_1760_;
v_b_1733_ = v___x_1758_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(lean_object* v_val_1765_, lean_object* v_a_1766_, lean_object* v_b_1767_){
_start:
{
lean_object* v_array_1768_; lean_object* v_start_1769_; lean_object* v_stop_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1789_; 
v_array_1768_ = lean_ctor_get(v_a_1766_, 0);
v_start_1769_ = lean_ctor_get(v_a_1766_, 1);
v_stop_1770_ = lean_ctor_get(v_a_1766_, 2);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_a_1766_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1772_ = v_a_1766_;
v_isShared_1773_ = v_isSharedCheck_1789_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_stop_1770_);
lean_inc(v_start_1769_);
lean_inc(v_array_1768_);
lean_dec(v_a_1766_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1789_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
uint8_t v___x_1774_; 
v___x_1774_ = lean_nat_dec_lt(v_start_1769_, v_stop_1770_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1775_; 
lean_del_object(v___x_1772_);
lean_dec(v_stop_1770_);
lean_dec(v_start_1769_);
lean_dec_ref(v_array_1768_);
v___x_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1775_, 0, v_b_1767_);
return v___x_1775_;
}
else
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = lean_array_fget_borrowed(v_array_1768_, v_start_1769_);
lean_inc(v___x_1776_);
v___x_1777_ = l_Lean_Syntax_reprint(v___x_1776_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v___x_1778_; 
lean_del_object(v___x_1772_);
lean_dec(v_stop_1770_);
lean_dec(v_start_1769_);
lean_dec_ref(v_array_1768_);
v___x_1778_ = lean_box(0);
return v___x_1778_;
}
else
{
lean_object* v_val_1779_; uint8_t v___x_1780_; 
v_val_1779_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_val_1779_);
lean_dec_ref_known(v___x_1777_, 1);
v___x_1780_ = lean_string_dec_eq(v_val_1765_, v_val_1779_);
lean_dec(v_val_1779_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
lean_del_object(v___x_1772_);
lean_dec(v_stop_1770_);
lean_dec(v_start_1769_);
lean_dec_ref(v_array_1768_);
v___x_1781_ = lean_box(0);
return v___x_1781_;
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1786_; 
v___x_1782_ = lean_box(0);
v___x_1783_ = lean_unsigned_to_nat(1u);
v___x_1784_ = lean_nat_add(v_start_1769_, v___x_1783_);
lean_dec(v_start_1769_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 1, v___x_1784_);
v___x_1786_ = v___x_1772_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_array_1768_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1788_, 2, v_stop_1770_);
v___x_1786_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
v_a_1766_ = v___x_1786_;
v_b_1767_ = v___x_1782_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(uint8_t v_firstChoiceOnly_1790_, lean_object* v_stx_1791_, lean_object* v_b_1792_){
_start:
{
lean_object* v_b_1794_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___x_1808_; lean_object* v_a_1810_; 
v___x_1808_ = lean_box(0);
switch(lean_obj_tag(v_stx_1791_))
{
case 2:
{
lean_object* v_info_1819_; lean_object* v_val_1820_; lean_object* v___x_1821_; lean_object* v_s_1822_; 
v_info_1819_ = lean_ctor_get(v_stx_1791_, 0);
v_val_1820_ = lean_ctor_get(v_stx_1791_, 1);
lean_inc(v_info_1819_);
v___x_1821_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1819_, v_val_1820_);
v_s_1822_ = lean_string_append(v_b_1792_, v___x_1821_);
lean_dec_ref(v___x_1821_);
v_a_1810_ = v_s_1822_;
goto v___jp_1809_;
}
case 3:
{
lean_object* v_rawVal_1823_; lean_object* v_info_1824_; lean_object* v_str_1825_; lean_object* v_startPos_1826_; lean_object* v_stopPos_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v_s_1830_; 
v_rawVal_1823_ = lean_ctor_get(v_stx_1791_, 1);
v_info_1824_ = lean_ctor_get(v_stx_1791_, 0);
v_str_1825_ = lean_ctor_get(v_rawVal_1823_, 0);
v_startPos_1826_ = lean_ctor_get(v_rawVal_1823_, 1);
v_stopPos_1827_ = lean_ctor_get(v_rawVal_1823_, 2);
v___x_1828_ = lean_string_utf8_extract(v_str_1825_, v_startPos_1826_, v_stopPos_1827_);
lean_inc(v_info_1824_);
v___x_1829_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1824_, v___x_1828_);
lean_dec_ref(v___x_1828_);
v_s_1830_ = lean_string_append(v_b_1792_, v___x_1829_);
lean_dec_ref(v___x_1829_);
v_a_1810_ = v_s_1830_;
goto v___jp_1809_;
}
case 1:
{
lean_object* v_kind_1831_; lean_object* v_args_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v_kind_1831_ = lean_ctor_get(v_stx_1791_, 1);
v_args_1832_ = lean_ctor_get(v_stx_1791_, 2);
v___x_1833_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1834_ = lean_name_eq(v_kind_1831_, v___x_1833_);
if (v___x_1834_ == 0)
{
v_a_1810_ = v_b_1792_;
goto v___jp_1809_;
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1835_ = lean_unsigned_to_nat(0u);
v___x_1836_ = lean_array_get_borrowed(v___x_1808_, v_args_1832_, v___x_1835_);
lean_inc(v___x_1836_);
v___x_1837_ = l_Lean_Syntax_reprint(v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v___x_1838_; 
lean_dec_ref_known(v_stx_1791_, 3);
lean_dec_ref(v_b_1792_);
v___x_1838_ = lean_box(0);
return v___x_1838_;
}
else
{
lean_object* v_val_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v_val_1839_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_val_1839_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1840_ = lean_unsigned_to_nat(1u);
v___x_1841_ = lean_array_get_size(v_args_1832_);
lean_inc_ref(v_args_1832_);
v___x_1842_ = l_Array_toSubarray___redArg(v_args_1832_, v___x_1840_, v___x_1841_);
v___x_1843_ = lean_box(0);
v___x_1844_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1839_, v___x_1842_, v___x_1843_);
lean_dec(v_val_1839_);
if (lean_obj_tag(v___x_1844_) == 0)
{
lean_object* v___x_1845_; 
lean_dec_ref_known(v_stx_1791_, 3);
lean_dec_ref(v_b_1792_);
v___x_1845_ = lean_box(0);
return v___x_1845_;
}
else
{
lean_dec_ref_known(v___x_1844_, 1);
v_a_1810_ = v_b_1792_;
goto v___jp_1809_;
}
}
}
}
default: 
{
v_a_1810_ = v_b_1792_;
goto v___jp_1809_;
}
}
v___jp_1793_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_b_1794_);
v___x_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
return v___x_1796_;
}
v___jp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; size_t v_sz_1802_; size_t v___x_1803_; lean_object* v___x_1804_; 
v___x_1800_ = lean_box(0);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
lean_ctor_set(v___x_1801_, 1, v___y_1798_);
v_sz_1802_ = lean_array_size(v___y_1799_);
v___x_1803_ = ((size_t)0ULL);
v___x_1804_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(v_firstChoiceOnly_1790_, v___y_1799_, v_sz_1802_, v___x_1803_, v___x_1801_);
lean_dec_ref(v___y_1799_);
if (lean_obj_tag(v___x_1804_) == 0)
{
return v___x_1800_;
}
else
{
lean_object* v_val_1805_; lean_object* v_fst_1806_; 
v_val_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_val_1805_);
lean_dec_ref_known(v___x_1804_, 1);
v_fst_1806_ = lean_ctor_get(v_val_1805_, 0);
if (lean_obj_tag(v_fst_1806_) == 0)
{
lean_object* v_snd_1807_; 
v_snd_1807_ = lean_ctor_get(v_val_1805_, 1);
lean_inc(v_snd_1807_);
lean_dec(v_val_1805_);
v_b_1794_ = v_snd_1807_;
goto v___jp_1793_;
}
else
{
lean_inc_ref(v_fst_1806_);
lean_dec(v_val_1805_);
return v_fst_1806_;
}
}
}
v___jp_1809_:
{
if (lean_obj_tag(v_stx_1791_) == 1)
{
if (v_firstChoiceOnly_1790_ == 0)
{
lean_object* v_args_1811_; 
v_args_1811_ = lean_ctor_get(v_stx_1791_, 2);
lean_inc_ref(v_args_1811_);
lean_dec_ref_known(v_stx_1791_, 3);
v___y_1798_ = v_a_1810_;
v___y_1799_ = v_args_1811_;
goto v___jp_1797_;
}
else
{
lean_object* v_kind_1812_; lean_object* v_args_1813_; lean_object* v___x_1814_; uint8_t v___x_1815_; 
v_kind_1812_ = lean_ctor_get(v_stx_1791_, 1);
lean_inc(v_kind_1812_);
v_args_1813_ = lean_ctor_get(v_stx_1791_, 2);
lean_inc_ref(v_args_1813_);
lean_dec_ref_known(v_stx_1791_, 3);
v___x_1814_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1815_ = lean_name_eq(v_kind_1812_, v___x_1814_);
lean_dec(v_kind_1812_);
if (v___x_1815_ == 0)
{
v___y_1798_ = v_a_1810_;
v___y_1799_ = v_args_1813_;
goto v___jp_1797_;
}
else
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = lean_unsigned_to_nat(0u);
v___x_1817_ = lean_array_get(v___x_1808_, v_args_1813_, v___x_1816_);
lean_dec_ref(v_args_1813_);
v_stx_1791_ = v___x_1817_;
v_b_1792_ = v_a_1810_;
goto _start;
}
}
}
else
{
lean_dec(v_stx_1791_);
v_b_1794_ = v_a_1810_;
goto v___jp_1793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_reprint(lean_object* v_stx_1846_){
_start:
{
lean_object* v_s_1847_; uint8_t v___x_1848_; lean_object* v___x_1849_; 
v_s_1847_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
v___x_1848_ = 1;
v___x_1849_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v___x_1848_, v_stx_1846_, v_s_1847_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_box(0);
return v___x_1850_;
}
else
{
lean_object* v_val_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1859_; 
v_val_1851_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1853_ = v___x_1849_;
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_val_1851_);
lean_dec(v___x_1849_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_a_1855_; lean_object* v___x_1857_; 
v_a_1855_ = lean_ctor_get(v_val_1851_, 0);
lean_inc(v_a_1855_);
lean_dec(v_val_1851_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v_a_1855_);
v___x_1857_ = v___x_1853_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1855_);
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
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg___boxed(lean_object* v_val_1860_, lean_object* v_a_1861_, lean_object* v_b_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1860_, v_a_1861_, v_b_1862_);
lean_dec_ref(v_val_1860_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1___boxed(lean_object* v_firstChoiceOnly_1864_, lean_object* v_as_1865_, lean_object* v_sz_1866_, lean_object* v_i_1867_, lean_object* v_b_1868_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1869_; size_t v_sz_boxed_1870_; size_t v_i_boxed_1871_; lean_object* v_res_1872_; 
v_firstChoiceOnly_boxed_1869_ = lean_unbox(v_firstChoiceOnly_1864_);
v_sz_boxed_1870_ = lean_unbox_usize(v_sz_1866_);
lean_dec(v_sz_1866_);
v_i_boxed_1871_ = lean_unbox_usize(v_i_1867_);
lean_dec(v_i_1867_);
v_res_1872_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(v_firstChoiceOnly_boxed_1869_, v_as_1865_, v_sz_boxed_1870_, v_i_boxed_1871_, v_b_1868_);
lean_dec_ref(v_as_1865_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1___boxed(lean_object* v_firstChoiceOnly_1873_, lean_object* v_stx_1874_, lean_object* v_b_1875_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1876_; lean_object* v_res_1877_; 
v_firstChoiceOnly_boxed_1876_ = lean_unbox(v_firstChoiceOnly_1873_);
v_res_1877_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v_firstChoiceOnly_boxed_1876_, v_stx_1874_, v_b_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(lean_object* v_val_1878_, lean_object* v_inst_1879_, lean_object* v_R_1880_, lean_object* v_a_1881_, lean_object* v_b_1882_, lean_object* v_c_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1878_, v_a_1881_, v_b_1882_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___boxed(lean_object* v_val_1885_, lean_object* v_inst_1886_, lean_object* v_R_1887_, lean_object* v_a_1888_, lean_object* v_b_1889_, lean_object* v_c_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(v_val_1885_, v_inst_1886_, v_R_1887_, v_a_1888_, v_b_1889_, v_c_1890_);
lean_dec_ref(v_val_1885_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(uint8_t v_firstChoiceOnly_1900_, lean_object* v_stx_1901_){
_start:
{
lean_object* v___x_1902_; uint8_t v___x_1903_; 
v___x_1902_ = lean_box(0);
v___x_1903_ = l_Lean_Syntax_isMissing(v_stx_1901_);
if (v___x_1903_ == 0)
{
if (lean_obj_tag(v_stx_1901_) == 1)
{
lean_object* v_kind_1904_; lean_object* v_args_1905_; 
v_kind_1904_ = lean_ctor_get(v_stx_1901_, 1);
v_args_1905_ = lean_ctor_get(v_stx_1901_, 2);
if (v_firstChoiceOnly_1900_ == 0)
{
goto v___jp_1906_;
}
else
{
lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1916_ = lean_name_eq(v_kind_1904_, v___x_1915_);
if (v___x_1916_ == 0)
{
goto v___jp_1906_;
}
else
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_box(0);
v___x_1918_ = lean_unsigned_to_nat(0u);
v___x_1919_ = lean_array_get_borrowed(v___x_1917_, v_args_1905_, v___x_1918_);
v_stx_1901_ = v___x_1919_;
goto _start;
}
}
v___jp_1906_:
{
lean_object* v___x_1907_; size_t v_sz_1908_; size_t v___x_1909_; lean_object* v___x_1910_; lean_object* v_fst_1911_; 
v___x_1907_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1));
v_sz_1908_ = lean_array_size(v_args_1905_);
v___x_1909_ = ((size_t)0ULL);
v___x_1910_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(v_firstChoiceOnly_1900_, v_args_1905_, v_sz_1908_, v___x_1909_, v___x_1907_);
v_fst_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_fst_1911_);
if (lean_obj_tag(v_fst_1911_) == 0)
{
lean_object* v_snd_1912_; lean_object* v___x_1913_; 
v_snd_1912_ = lean_ctor_get(v___x_1910_, 1);
lean_inc(v_snd_1912_);
lean_dec_ref(v___x_1910_);
v___x_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_snd_1912_);
return v___x_1913_;
}
else
{
lean_object* v_val_1914_; 
lean_dec_ref(v___x_1910_);
v_val_1914_ = lean_ctor_get(v_fst_1911_, 0);
lean_inc(v_val_1914_);
lean_dec_ref_known(v_fst_1911_, 1);
return v_val_1914_;
}
}
}
else
{
lean_object* v___x_1921_; 
v___x_1921_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2));
return v___x_1921_;
}
}
else
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1922_ = lean_box(v___x_1903_);
v___x_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1922_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1923_);
lean_ctor_set(v___x_1924_, 1, v___x_1902_);
v___x_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
return v___x_1925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(uint8_t v_firstChoiceOnly_1926_, lean_object* v_as_1927_, size_t v_sz_1928_, size_t v_i_1929_, lean_object* v_b_1930_){
_start:
{
uint8_t v___x_1931_; 
v___x_1931_ = lean_usize_dec_lt(v_i_1929_, v_sz_1928_);
if (v___x_1931_ == 0)
{
return v_b_1930_;
}
else
{
lean_object* v_snd_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1950_; 
v_snd_1932_ = lean_ctor_get(v_b_1930_, 1);
v_isSharedCheck_1950_ = !lean_is_exclusive(v_b_1930_);
if (v_isSharedCheck_1950_ == 0)
{
lean_object* v_unused_1951_; 
v_unused_1951_ = lean_ctor_get(v_b_1930_, 0);
lean_dec(v_unused_1951_);
v___x_1934_ = v_b_1930_;
v_isShared_1935_ = v_isSharedCheck_1950_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_snd_1932_);
lean_dec(v_b_1930_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1950_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v_a_1936_; lean_object* v___x_1937_; 
v_a_1936_ = lean_array_uget_borrowed(v_as_1927_, v_i_1929_);
v___x_1937_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_1926_, v_a_1936_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1938_);
v___x_1940_ = v___x_1934_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1938_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v_snd_1932_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
lean_dec(v_snd_1932_);
v_a_1942_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1937_, 1);
v___x_1943_ = lean_box(0);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 1, v_a_1942_);
lean_ctor_set(v___x_1934_, 0, v___x_1943_);
v___x_1945_ = v___x_1934_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1943_);
lean_ctor_set(v_reuseFailAlloc_1949_, 1, v_a_1942_);
v___x_1945_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
size_t v___x_1946_; size_t v___x_1947_; 
v___x_1946_ = ((size_t)1ULL);
v___x_1947_ = lean_usize_add(v_i_1929_, v___x_1946_);
v_i_1929_ = v___x_1947_;
v_b_1930_ = v___x_1945_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0___boxed(lean_object* v_firstChoiceOnly_1952_, lean_object* v_as_1953_, lean_object* v_sz_1954_, lean_object* v_i_1955_, lean_object* v_b_1956_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1957_; size_t v_sz_boxed_1958_; size_t v_i_boxed_1959_; lean_object* v_res_1960_; 
v_firstChoiceOnly_boxed_1957_ = lean_unbox(v_firstChoiceOnly_1952_);
v_sz_boxed_1958_ = lean_unbox_usize(v_sz_1954_);
lean_dec(v_sz_1954_);
v_i_boxed_1959_ = lean_unbox_usize(v_i_1955_);
lean_dec(v_i_1955_);
v_res_1960_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(v_firstChoiceOnly_boxed_1957_, v_as_1953_, v_sz_boxed_1958_, v_i_boxed_1959_, v_b_1956_);
lean_dec_ref(v_as_1953_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___boxed(lean_object* v_firstChoiceOnly_1961_, lean_object* v_stx_1962_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1963_; lean_object* v_res_1964_; 
v_firstChoiceOnly_boxed_1963_ = lean_unbox(v_firstChoiceOnly_1961_);
v_res_1964_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_boxed_1963_, v_stx_1962_);
lean_dec(v_stx_1962_);
return v_res_1964_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasMissing(lean_object* v_stx_1965_){
_start:
{
uint8_t v___x_1966_; lean_object* v___y_1968_; lean_object* v___x_1972_; lean_object* v_a_1973_; 
v___x_1966_ = 0;
v___x_1972_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v___x_1966_, v_stx_1965_);
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref(v___x_1972_);
v___y_1968_ = v_a_1973_;
goto v___jp_1967_;
v___jp_1967_:
{
lean_object* v_fst_1969_; 
v_fst_1969_ = lean_ctor_get(v___y_1968_, 0);
lean_inc(v_fst_1969_);
lean_dec_ref(v___y_1968_);
if (lean_obj_tag(v_fst_1969_) == 0)
{
return v___x_1966_;
}
else
{
lean_object* v_val_1970_; uint8_t v___x_1971_; 
v_val_1970_ = lean_ctor_get(v_fst_1969_, 0);
lean_inc(v_val_1970_);
lean_dec_ref_known(v_fst_1969_, 1);
v___x_1971_ = lean_unbox(v_val_1970_);
lean_dec(v_val_1970_);
return v___x_1971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasMissing___boxed(lean_object* v_stx_1974_){
_start:
{
uint8_t v_res_1975_; lean_object* v_r_1976_; 
v_res_1975_ = l_Lean_Syntax_hasMissing(v_stx_1974_);
lean_dec(v_stx_1974_);
v_r_1976_ = lean_box(v_res_1975_);
return v_r_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(uint8_t v_firstChoiceOnly_1977_, lean_object* v_stx_1978_, lean_object* v_b_1979_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_1977_, v_stx_1978_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___boxed(lean_object* v_firstChoiceOnly_1981_, lean_object* v_stx_1982_, lean_object* v_b_1983_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1984_; lean_object* v_res_1985_; 
v_firstChoiceOnly_boxed_1984_ = lean_unbox(v_firstChoiceOnly_1981_);
v_res_1985_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(v_firstChoiceOnly_boxed_1984_, v_stx_1982_, v_b_1983_);
lean_dec_ref(v_b_1983_);
lean_dec(v_stx_1982_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f(lean_object* v_stx_1986_, uint8_t v_canonicalOnly_1987_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lean_Syntax_getPos_x3f(v_stx_1986_, v_canonicalOnly_1987_);
if (lean_obj_tag(v___x_1988_) == 1)
{
lean_object* v_val_1989_; lean_object* v___x_1990_; 
v_val_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_val_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = l_Lean_Syntax_getTailPos_x3f(v_stx_1986_, v_canonicalOnly_1987_);
if (lean_obj_tag(v___x_1990_) == 1)
{
lean_object* v_val_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1999_; 
v_val_1991_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1993_ = v___x_1990_;
v_isShared_1994_ = v_isSharedCheck_1999_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_val_1991_);
lean_dec(v___x_1990_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1999_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1995_; lean_object* v___x_1997_; 
v___x_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1995_, 0, v_val_1989_);
lean_ctor_set(v___x_1995_, 1, v_val_1991_);
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 0, v___x_1995_);
v___x_1997_ = v___x_1993_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1995_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
else
{
lean_object* v___x_2000_; 
lean_dec(v___x_1990_);
lean_dec(v_val_1989_);
v___x_2000_ = lean_box(0);
return v___x_2000_;
}
}
else
{
lean_object* v___x_2001_; 
lean_dec(v___x_1988_);
v___x_2001_ = lean_box(0);
return v___x_2001_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f___boxed(lean_object* v_stx_2002_, lean_object* v_canonicalOnly_2003_){
_start:
{
uint8_t v_canonicalOnly_boxed_2004_; lean_object* v_res_2005_; 
v_canonicalOnly_boxed_2004_ = lean_unbox(v_canonicalOnly_2003_);
v_res_2005_ = l_Lean_Syntax_getRange_x3f(v_stx_2002_, v_canonicalOnly_boxed_2004_);
lean_dec(v_stx_2002_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object* v_stx_2006_, uint8_t v_canonicalOnly_2007_){
_start:
{
lean_object* v___x_2008_; 
v___x_2008_ = l_Lean_Syntax_getPos_x3f(v_stx_2006_, v_canonicalOnly_2007_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_box(0);
return v___x_2009_;
}
else
{
lean_object* v_val_2010_; lean_object* v___x_2011_; 
v_val_2010_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_val_2010_);
lean_dec_ref_known(v___x_2008_, 1);
v___x_2011_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_2006_, v_canonicalOnly_2007_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v___x_2012_; 
lean_dec(v_val_2010_);
v___x_2012_ = lean_box(0);
return v___x_2012_;
}
else
{
lean_object* v_val_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2021_; 
v_val_2013_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2015_ = v___x_2011_;
v_isShared_2016_ = v_isSharedCheck_2021_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_val_2013_);
lean_dec(v___x_2011_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2021_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2017_; lean_object* v___x_2019_; 
v___x_2017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2017_, 0, v_val_2010_);
lean_ctor_set(v___x_2017_, 1, v_val_2013_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 0, v___x_2017_);
v___x_2019_ = v___x_2015_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f___boxed(lean_object* v_stx_2022_, lean_object* v_canonicalOnly_2023_){
_start:
{
uint8_t v_canonicalOnly_boxed_2024_; lean_object* v_res_2025_; 
v_canonicalOnly_boxed_2024_ = lean_unbox(v_canonicalOnly_2023_);
v_res_2025_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_2022_, v_canonicalOnly_boxed_2024_);
lean_dec(v_stx_2022_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange(lean_object* v_range_2026_, uint8_t v_canonical_2027_){
_start:
{
lean_object* v_start_2028_; lean_object* v_stop_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2038_; 
v_start_2028_ = lean_ctor_get(v_range_2026_, 0);
v_stop_2029_ = lean_ctor_get(v_range_2026_, 1);
v_isSharedCheck_2038_ = !lean_is_exclusive(v_range_2026_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2031_ = v_range_2026_;
v_isShared_2032_ = v_isSharedCheck_2038_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_stop_2029_);
lean_inc(v_start_2028_);
lean_dec(v_range_2026_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2038_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2033_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2033_, 0, v_start_2028_);
lean_ctor_set(v___x_2033_, 1, v_stop_2029_);
lean_ctor_set_uint8(v___x_2033_, sizeof(void*)*2, v_canonical_2027_);
v___x_2034_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 2);
lean_ctor_set(v___x_2031_, 1, v___x_2034_);
lean_ctor_set(v___x_2031_, 0, v___x_2033_);
v___x_2036_ = v___x_2031_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2033_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v___x_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange___boxed(lean_object* v_range_2039_, lean_object* v_canonical_2040_){
_start:
{
uint8_t v_canonical_boxed_2041_; lean_object* v_res_2042_; 
v_canonical_boxed_2041_ = lean_unbox(v_canonical_2040_);
v_res_2042_ = l_Lean_Syntax_ofRange(v_range_2039_, v_canonical_boxed_2041_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object* v_stx_2045_){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2046_ = ((lean_object*)(l_Lean_Syntax_Traverser_fromSyntax___closed__0));
v___x_2047_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2047_, 0, v_stx_2045_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
lean_ctor_set(v___x_2047_, 2, v___x_2046_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_setCur(lean_object* v_t_2048_, lean_object* v_stx_2049_){
_start:
{
lean_object* v_parents_2050_; lean_object* v_idxs_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_parents_2050_ = lean_ctor_get(v_t_2048_, 1);
v_idxs_2051_ = lean_ctor_get(v_t_2048_, 2);
v_isSharedCheck_2058_ = !lean_is_exclusive(v_t_2048_);
if (v_isSharedCheck_2058_ == 0)
{
lean_object* v_unused_2059_; 
v_unused_2059_ = lean_ctor_get(v_t_2048_, 0);
lean_dec(v_unused_2059_);
v___x_2053_ = v_t_2048_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_idxs_2051_);
lean_inc(v_parents_2050_);
lean_dec(v_t_2048_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v_stx_2049_);
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_stx_2049_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v_parents_2050_);
lean_ctor_set(v_reuseFailAlloc_2057_, 2, v_idxs_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_down(lean_object* v_t_2060_, lean_object* v_idx_2061_){
_start:
{
lean_object* v_cur_2062_; lean_object* v_parents_2063_; lean_object* v_idxs_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2084_; 
v_cur_2062_ = lean_ctor_get(v_t_2060_, 0);
v_parents_2063_ = lean_ctor_get(v_t_2060_, 1);
v_idxs_2064_ = lean_ctor_get(v_t_2060_, 2);
v_isSharedCheck_2084_ = !lean_is_exclusive(v_t_2060_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2066_ = v_t_2060_;
v_isShared_2067_ = v_isSharedCheck_2084_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_idxs_2064_);
lean_inc(v_parents_2063_);
lean_inc(v_cur_2062_);
lean_dec(v_t_2060_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2084_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; uint8_t v___x_2069_; 
v___x_2068_ = l_Lean_Syntax_getNumArgs(v_cur_2062_);
v___x_2069_ = lean_nat_dec_lt(v_idx_2061_, v___x_2068_);
lean_dec(v___x_2068_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2074_; 
v___x_2070_ = lean_box(0);
v___x_2071_ = lean_array_push(v_parents_2063_, v_cur_2062_);
v___x_2072_ = lean_array_push(v_idxs_2064_, v_idx_2061_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 2, v___x_2072_);
lean_ctor_set(v___x_2066_, 1, v___x_2071_);
lean_ctor_set(v___x_2066_, 0, v___x_2070_);
v___x_2074_ = v___x_2066_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2070_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2075_, 2, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
v___x_2076_ = l_Lean_Syntax_getArg(v_cur_2062_, v_idx_2061_);
v___x_2077_ = lean_box(0);
v___x_2078_ = l_Lean_Syntax_setArg(v_cur_2062_, v_idx_2061_, v___x_2077_);
v___x_2079_ = lean_array_push(v_parents_2063_, v___x_2078_);
v___x_2080_ = lean_array_push(v_idxs_2064_, v_idx_2061_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 2, v___x_2080_);
lean_ctor_set(v___x_2066_, 1, v___x_2079_);
lean_ctor_set(v___x_2066_, 0, v___x_2076_);
v___x_2082_ = v___x_2066_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2076_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v___x_2080_);
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
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_up(lean_object* v_t_2085_){
_start:
{
lean_object* v_cur_2086_; lean_object* v_parents_2087_; lean_object* v_idxs_2088_; lean_object* v___y_2090_; lean_object* v___x_2094_; lean_object* v___x_2095_; uint8_t v___x_2096_; 
v_cur_2086_ = lean_ctor_get(v_t_2085_, 0);
v_parents_2087_ = lean_ctor_get(v_t_2085_, 1);
v_idxs_2088_ = lean_ctor_get(v_t_2085_, 2);
v___x_2094_ = lean_unsigned_to_nat(0u);
v___x_2095_ = lean_array_get_size(v_parents_2087_);
v___x_2096_ = lean_nat_dec_lt(v___x_2094_, v___x_2095_);
if (v___x_2096_ == 0)
{
return v_t_2085_;
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; uint8_t v___x_2105_; 
lean_inc_ref(v_idxs_2088_);
lean_inc_ref(v_parents_2087_);
lean_inc(v_cur_2086_);
lean_dec_ref(v_t_2085_);
v___x_2097_ = lean_box(0);
v___x_2098_ = lean_array_get_size(v_idxs_2088_);
v___x_2099_ = lean_unsigned_to_nat(1u);
v___x_2100_ = lean_nat_sub(v___x_2098_, v___x_2099_);
v___x_2101_ = lean_array_get_borrowed(v___x_2094_, v_idxs_2088_, v___x_2100_);
lean_dec(v___x_2100_);
v___x_2102_ = lean_nat_sub(v___x_2095_, v___x_2099_);
v___x_2103_ = lean_array_get_borrowed(v___x_2097_, v_parents_2087_, v___x_2102_);
lean_dec(v___x_2102_);
v___x_2104_ = l_Lean_Syntax_getNumArgs(v___x_2103_);
v___x_2105_ = lean_nat_dec_lt(v___x_2101_, v___x_2104_);
lean_dec(v___x_2104_);
if (v___x_2105_ == 0)
{
lean_dec(v_cur_2086_);
lean_inc(v___x_2103_);
v___y_2090_ = v___x_2103_;
goto v___jp_2089_;
}
else
{
lean_object* v___x_2106_; 
lean_inc(v___x_2103_);
v___x_2106_ = l_Lean_Syntax_setArg(v___x_2103_, v___x_2101_, v_cur_2086_);
v___y_2090_ = v___x_2106_;
goto v___jp_2089_;
}
}
v___jp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2091_ = lean_array_pop(v_parents_2087_);
v___x_2092_ = lean_array_pop(v_idxs_2088_);
v___x_2093_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2093_, 0, v___y_2090_);
lean_ctor_set(v___x_2093_, 1, v___x_2091_);
lean_ctor_set(v___x_2093_, 2, v___x_2092_);
return v___x_2093_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_left(lean_object* v_t_2107_){
_start:
{
lean_object* v_parents_2108_; lean_object* v_idxs_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v_parents_2108_ = lean_ctor_get(v_t_2107_, 1);
v_idxs_2109_ = lean_ctor_get(v_t_2107_, 2);
v___x_2110_ = lean_unsigned_to_nat(0u);
v___x_2111_ = lean_array_get_size(v_parents_2108_);
v___x_2112_ = lean_nat_dec_lt(v___x_2110_, v___x_2111_);
if (v___x_2112_ == 0)
{
return v_t_2107_;
}
else
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
lean_inc_ref(v_idxs_2109_);
v___x_2113_ = l_Lean_Syntax_Traverser_up(v_t_2107_);
v___x_2114_ = lean_array_get_size(v_idxs_2109_);
v___x_2115_ = lean_unsigned_to_nat(1u);
v___x_2116_ = lean_nat_sub(v___x_2114_, v___x_2115_);
v___x_2117_ = lean_array_get(v___x_2110_, v_idxs_2109_, v___x_2116_);
lean_dec(v___x_2116_);
lean_dec_ref(v_idxs_2109_);
v___x_2118_ = lean_nat_sub(v___x_2117_, v___x_2115_);
lean_dec(v___x_2117_);
v___x_2119_ = l_Lean_Syntax_Traverser_down(v___x_2113_, v___x_2118_);
return v___x_2119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_right(lean_object* v_t_2120_){
_start:
{
lean_object* v_parents_2121_; lean_object* v_idxs_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; 
v_parents_2121_ = lean_ctor_get(v_t_2120_, 1);
v_idxs_2122_ = lean_ctor_get(v_t_2120_, 2);
v___x_2123_ = lean_unsigned_to_nat(0u);
v___x_2124_ = lean_array_get_size(v_parents_2121_);
v___x_2125_ = lean_nat_dec_lt(v___x_2123_, v___x_2124_);
if (v___x_2125_ == 0)
{
return v_t_2120_;
}
else
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
lean_inc_ref(v_idxs_2122_);
v___x_2126_ = l_Lean_Syntax_Traverser_up(v_t_2120_);
v___x_2127_ = lean_array_get_size(v_idxs_2122_);
v___x_2128_ = lean_unsigned_to_nat(1u);
v___x_2129_ = lean_nat_sub(v___x_2127_, v___x_2128_);
v___x_2130_ = lean_array_get(v___x_2123_, v_idxs_2122_, v___x_2129_);
lean_dec(v___x_2129_);
lean_dec_ref(v_idxs_2122_);
v___x_2131_ = lean_nat_add(v___x_2130_, v___x_2128_);
lean_dec(v___x_2130_);
v___x_2132_ = l_Lean_Syntax_Traverser_down(v___x_2126_, v___x_2131_);
return v___x_2132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(lean_object* v_self_2133_){
_start:
{
lean_object* v_cur_2134_; 
v_cur_2134_ = lean_ctor_get(v_self_2133_, 0);
lean_inc(v_cur_2134_);
return v_cur_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed(lean_object* v_self_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(v_self_2135_);
lean_dec_ref(v_self_2135_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg(lean_object* v_inst_2138_, lean_object* v_t_2139_){
_start:
{
lean_object* v_toApplicative_2140_; lean_object* v_toFunctor_2141_; lean_object* v_map_2142_; lean_object* v_get_2143_; lean_object* v___f_2144_; lean_object* v___x_2145_; 
v_toApplicative_2140_ = lean_ctor_get(v_inst_2138_, 0);
lean_inc_ref(v_toApplicative_2140_);
lean_dec_ref(v_inst_2138_);
v_toFunctor_2141_ = lean_ctor_get(v_toApplicative_2140_, 0);
lean_inc_ref(v_toFunctor_2141_);
lean_dec_ref(v_toApplicative_2140_);
v_map_2142_ = lean_ctor_get(v_toFunctor_2141_, 0);
lean_inc(v_map_2142_);
lean_dec_ref(v_toFunctor_2141_);
v_get_2143_ = lean_ctor_get(v_t_2139_, 0);
lean_inc(v_get_2143_);
lean_dec_ref(v_t_2139_);
v___f_2144_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0));
v___x_2145_ = lean_apply_4(v_map_2142_, lean_box(0), lean_box(0), v___f_2144_, v_get_2143_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur(lean_object* v_m_2146_, lean_object* v_inst_2147_, lean_object* v_t_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Lean_Syntax_MonadTraverser_getCur___redArg(v_inst_2147_, v_t_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0(lean_object* v_stx_2150_, lean_object* v_s_2151_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2152_ = lean_box(0);
v___x_2153_ = l_Lean_Syntax_Traverser_setCur(v_s_2151_, v_stx_2150_);
v___x_2154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2152_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg(lean_object* v_t_2155_, lean_object* v_stx_2156_){
_start:
{
lean_object* v_modifyGet_2157_; lean_object* v___f_2158_; lean_object* v___x_2159_; 
v_modifyGet_2157_ = lean_ctor_get(v_t_2155_, 2);
lean_inc(v_modifyGet_2157_);
lean_dec_ref(v_t_2155_);
v___f_2158_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2158_, 0, v_stx_2156_);
v___x_2159_ = lean_apply_2(v_modifyGet_2157_, lean_box(0), v___f_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur(lean_object* v_m_2160_, lean_object* v_t_2161_, lean_object* v_stx_2162_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lean_Syntax_MonadTraverser_setCur___redArg(v_t_2161_, v_stx_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0(lean_object* v_idx_2164_, lean_object* v_s_2165_){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = lean_box(0);
v___x_2167_ = l_Lean_Syntax_Traverser_down(v_s_2165_, v_idx_2164_);
v___x_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2166_);
lean_ctor_set(v___x_2168_, 1, v___x_2167_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg(lean_object* v_t_2169_, lean_object* v_idx_2170_){
_start:
{
lean_object* v_modifyGet_2171_; lean_object* v___f_2172_; lean_object* v___x_2173_; 
v_modifyGet_2171_ = lean_ctor_get(v_t_2169_, 2);
lean_inc(v_modifyGet_2171_);
lean_dec_ref(v_t_2169_);
v___f_2172_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2172_, 0, v_idx_2170_);
v___x_2173_ = lean_apply_2(v_modifyGet_2171_, lean_box(0), v___f_2172_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown(lean_object* v_m_2174_, lean_object* v_t_2175_, lean_object* v_idx_2176_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_Syntax_MonadTraverser_goDown___redArg(v_t_2175_, v_idx_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0(lean_object* v_s_2178_){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2179_ = lean_box(0);
v___x_2180_ = l_Lean_Syntax_Traverser_up(v_s_2178_);
v___x_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg(lean_object* v_t_2183_){
_start:
{
lean_object* v_modifyGet_2184_; lean_object* v___f_2185_; lean_object* v___x_2186_; 
v_modifyGet_2184_ = lean_ctor_get(v_t_2183_, 2);
lean_inc(v_modifyGet_2184_);
lean_dec_ref(v_t_2183_);
v___f_2185_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0));
v___x_2186_ = lean_apply_2(v_modifyGet_2184_, lean_box(0), v___f_2185_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp(lean_object* v_m_2187_, lean_object* v_t_2188_){
_start:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lean_Syntax_MonadTraverser_goUp___redArg(v_t_2188_);
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0(lean_object* v_s_2190_){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2191_ = lean_box(0);
v___x_2192_ = l_Lean_Syntax_Traverser_left(v_s_2190_);
v___x_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2191_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg(lean_object* v_t_2195_){
_start:
{
lean_object* v_modifyGet_2196_; lean_object* v___f_2197_; lean_object* v___x_2198_; 
v_modifyGet_2196_ = lean_ctor_get(v_t_2195_, 2);
lean_inc(v_modifyGet_2196_);
lean_dec_ref(v_t_2195_);
v___f_2197_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0));
v___x_2198_ = lean_apply_2(v_modifyGet_2196_, lean_box(0), v___f_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft(lean_object* v_m_2199_, lean_object* v_t_2200_){
_start:
{
lean_object* v___x_2201_; 
v___x_2201_ = l_Lean_Syntax_MonadTraverser_goLeft___redArg(v_t_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0(lean_object* v_s_2202_){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = lean_box(0);
v___x_2204_ = l_Lean_Syntax_Traverser_right(v_s_2202_);
v___x_2205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2203_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg(lean_object* v_t_2207_){
_start:
{
lean_object* v_modifyGet_2208_; lean_object* v___f_2209_; lean_object* v___x_2210_; 
v_modifyGet_2208_ = lean_ctor_get(v_t_2207_, 2);
lean_inc(v_modifyGet_2208_);
lean_dec_ref(v_t_2207_);
v___f_2209_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0));
v___x_2210_ = lean_apply_2(v_modifyGet_2208_, lean_box(0), v___f_2209_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight(lean_object* v_m_2211_, lean_object* v_t_2212_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_Syntax_MonadTraverser_goRight___redArg(v_t_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(lean_object* v_toPure_2214_, lean_object* v_st_2215_){
_start:
{
lean_object* v_idxs_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; uint8_t v___x_2220_; 
v_idxs_2216_ = lean_ctor_get(v_st_2215_, 2);
v___x_2217_ = lean_array_get_size(v_idxs_2216_);
v___x_2218_ = lean_unsigned_to_nat(1u);
v___x_2219_ = lean_nat_sub(v___x_2217_, v___x_2218_);
v___x_2220_ = lean_nat_dec_lt(v___x_2219_, v___x_2217_);
if (v___x_2220_ == 0)
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
lean_dec(v___x_2219_);
v___x_2221_ = lean_unsigned_to_nat(0u);
v___x_2222_ = lean_apply_2(v_toPure_2214_, lean_box(0), v___x_2221_);
return v___x_2222_;
}
else
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_array_fget_borrowed(v_idxs_2216_, v___x_2219_);
lean_dec(v___x_2219_);
lean_inc(v___x_2223_);
v___x_2224_ = lean_apply_2(v_toPure_2214_, lean_box(0), v___x_2223_);
return v___x_2224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed(lean_object* v_toPure_2225_, lean_object* v_st_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(v_toPure_2225_, v_st_2226_);
lean_dec_ref(v_st_2226_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg(lean_object* v_inst_2228_, lean_object* v_t_2229_){
_start:
{
lean_object* v_toApplicative_2230_; lean_object* v_toBind_2231_; lean_object* v_get_2232_; lean_object* v_toPure_2233_; lean_object* v___f_2234_; lean_object* v___x_2235_; 
v_toApplicative_2230_ = lean_ctor_get(v_inst_2228_, 0);
lean_inc_ref(v_toApplicative_2230_);
v_toBind_2231_ = lean_ctor_get(v_inst_2228_, 1);
lean_inc(v_toBind_2231_);
lean_dec_ref(v_inst_2228_);
v_get_2232_ = lean_ctor_get(v_t_2229_, 0);
lean_inc(v_get_2232_);
lean_dec_ref(v_t_2229_);
v_toPure_2233_ = lean_ctor_get(v_toApplicative_2230_, 1);
lean_inc(v_toPure_2233_);
lean_dec_ref(v_toApplicative_2230_);
v___f_2234_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2234_, 0, v_toPure_2233_);
v___x_2235_ = lean_apply_4(v_toBind_2231_, lean_box(0), lean_box(0), v_get_2232_, v___f_2234_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx(lean_object* v_m_2236_, lean_object* v_inst_2237_, lean_object* v_t_2238_){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = l_Lean_Syntax_MonadTraverser_getIdx___redArg(v_inst_2237_, v_t_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt(lean_object* v_n_2240_, lean_object* v_i_2241_){
_start:
{
lean_object* v_args_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_args_2242_ = lean_ctor_get(v_n_2240_, 2);
v___x_2243_ = lean_box(0);
v___x_2244_ = lean_array_get_borrowed(v___x_2243_, v_args_2242_, v_i_2241_);
v___x_2245_ = l_Lean_Syntax_getId(v___x_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt___boxed(lean_object* v_n_2246_, lean_object* v_i_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Lean_SyntaxNode_getIdAt(v_n_2246_, v_i_2247_);
lean_dec(v_i_2247_);
lean_dec(v_n_2246_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkListNode(lean_object* v_args_2249_){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2251_ = lean_box(2);
v___x_2252_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
lean_ctor_set(v___x_2252_, 1, v___x_2250_);
lean_ctor_set(v___x_2252_, 2, v_args_2249_);
return v___x_2252_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isQuot(lean_object* v_x_2258_){
_start:
{
if (lean_obj_tag(v_x_2258_) == 1)
{
lean_object* v_kind_2259_; 
v_kind_2259_ = lean_ctor_get(v_x_2258_, 1);
if (lean_obj_tag(v_kind_2259_) == 1)
{
lean_object* v_pre_2260_; lean_object* v_str_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; 
v_pre_2260_ = lean_ctor_get(v_kind_2259_, 0);
v_str_2261_ = lean_ctor_get(v_kind_2259_, 1);
v___x_2262_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__0));
v___x_2263_ = lean_string_dec_eq(v_str_2261_, v___x_2262_);
if (v___x_2263_ == 0)
{
lean_object* v___x_2264_; uint8_t v___x_2265_; 
v___x_2264_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__1));
v___x_2265_ = lean_string_dec_eq(v_str_2261_, v___x_2264_);
if (v___x_2265_ == 0)
{
return v___x_2265_;
}
else
{
if (lean_obj_tag(v_pre_2260_) == 1)
{
lean_object* v_pre_2266_; 
v_pre_2266_ = lean_ctor_get(v_pre_2260_, 0);
if (lean_obj_tag(v_pre_2266_) == 1)
{
lean_object* v_pre_2267_; 
v_pre_2267_ = lean_ctor_get(v_pre_2266_, 0);
if (lean_obj_tag(v_pre_2267_) == 1)
{
lean_object* v_pre_2268_; 
v_pre_2268_ = lean_ctor_get(v_pre_2267_, 0);
if (lean_obj_tag(v_pre_2268_) == 0)
{
lean_object* v_str_2269_; lean_object* v_str_2270_; lean_object* v_str_2271_; lean_object* v___x_2272_; uint8_t v___x_2273_; 
v_str_2269_ = lean_ctor_get(v_pre_2260_, 1);
v_str_2270_ = lean_ctor_get(v_pre_2266_, 1);
v_str_2271_ = lean_ctor_get(v_pre_2267_, 1);
v___x_2272_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__2));
v___x_2273_ = lean_string_dec_eq(v_str_2271_, v___x_2272_);
if (v___x_2273_ == 0)
{
return v___x_2263_;
}
else
{
lean_object* v___x_2274_; uint8_t v___x_2275_; 
v___x_2274_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__3));
v___x_2275_ = lean_string_dec_eq(v_str_2270_, v___x_2274_);
if (v___x_2275_ == 0)
{
return v___x_2275_;
}
else
{
lean_object* v___x_2276_; uint8_t v___x_2277_; 
v___x_2276_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__4));
v___x_2277_ = lean_string_dec_eq(v_str_2269_, v___x_2276_);
return v___x_2277_;
}
}
}
else
{
return v___x_2263_;
}
}
else
{
return v___x_2263_;
}
}
else
{
return v___x_2263_;
}
}
else
{
return v___x_2263_;
}
}
}
else
{
return v___x_2263_;
}
}
else
{
uint8_t v___x_2278_; 
v___x_2278_ = 0;
return v___x_2278_;
}
}
else
{
uint8_t v___x_2279_; 
v___x_2279_ = 0;
return v___x_2279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isQuot___boxed(lean_object* v_x_2280_){
_start:
{
uint8_t v_res_2281_; lean_object* v_r_2282_; 
v_res_2281_ = l_Lean_Syntax_isQuot(v_x_2280_);
lean_dec(v_x_2280_);
v_r_2282_ = lean_box(v_res_2281_);
return v_r_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getQuotContent(lean_object* v_stx_2288_){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___y_2292_; uint8_t v___x_2298_; 
v___x_2289_ = l_Lean_Syntax_getNumArgs(v_stx_2288_);
v___x_2290_ = lean_unsigned_to_nat(1u);
v___x_2298_ = lean_nat_dec_eq(v___x_2289_, v___x_2290_);
lean_dec(v___x_2289_);
if (v___x_2298_ == 0)
{
v___y_2292_ = v_stx_2288_;
goto v___jp_2291_;
}
else
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = lean_unsigned_to_nat(0u);
v___x_2300_ = l_Lean_Syntax_getArg(v_stx_2288_, v___x_2299_);
lean_dec(v_stx_2288_);
v___y_2292_ = v___x_2300_;
goto v___jp_2291_;
}
v___jp_2291_:
{
lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = ((lean_object*)(l_Lean_Syntax_getQuotContent___closed__0));
lean_inc(v___y_2292_);
v___x_2294_ = l_Lean_Syntax_isOfKind(v___y_2292_, v___x_2293_);
if (v___x_2294_ == 0)
{
lean_object* v___x_2295_; 
v___x_2295_ = l_Lean_Syntax_getArg(v___y_2292_, v___x_2290_);
lean_dec(v___y_2292_);
return v___x_2295_;
}
else
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = lean_unsigned_to_nat(3u);
v___x_2297_ = l_Lean_Syntax_getArg(v___y_2292_, v___x_2296_);
lean_dec(v___y_2292_);
return v___x_2297_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquot(lean_object* v_x_2302_){
_start:
{
if (lean_obj_tag(v_x_2302_) == 1)
{
lean_object* v_kind_2303_; 
v_kind_2303_ = lean_ctor_get(v_x_2302_, 1);
if (lean_obj_tag(v_kind_2303_) == 1)
{
lean_object* v_str_2304_; lean_object* v___x_2305_; uint8_t v___x_2306_; 
v_str_2304_ = lean_ctor_get(v_kind_2303_, 1);
v___x_2305_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2306_ = lean_string_dec_eq(v_str_2304_, v___x_2305_);
return v___x_2306_;
}
else
{
uint8_t v___x_2307_; 
v___x_2307_ = 0;
return v___x_2307_;
}
}
else
{
uint8_t v___x_2308_; 
v___x_2308_ = 0;
return v___x_2308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquot___boxed(lean_object* v_x_2309_){
_start:
{
uint8_t v_res_2310_; lean_object* v_r_2311_; 
v_res_2310_ = l_Lean_Syntax_isAntiquot(v_x_2309_);
lean_dec(v_x_2309_);
v_r_2311_ = lean_box(v_res_2310_);
return v_r_2311_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(uint8_t v___y_2312_, uint8_t v___x_2313_, lean_object* v_as_2314_, size_t v_i_2315_, size_t v_stop_2316_){
_start:
{
uint8_t v___x_2317_; 
v___x_2317_ = lean_usize_dec_eq(v_i_2315_, v_stop_2316_);
if (v___x_2317_ == 0)
{
uint8_t v___x_2318_; uint8_t v___y_2320_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2318_ = 1;
v___x_2324_ = lean_array_uget_borrowed(v_as_2314_, v_i_2315_);
v___x_2325_ = l_Lean_Syntax_isAntiquot(v___x_2324_);
if (v___x_2325_ == 0)
{
v___y_2320_ = v___y_2312_;
goto v___jp_2319_;
}
else
{
v___y_2320_ = v___x_2313_;
goto v___jp_2319_;
}
v___jp_2319_:
{
if (v___y_2320_ == 0)
{
size_t v___x_2321_; size_t v___x_2322_; 
v___x_2321_ = ((size_t)1ULL);
v___x_2322_ = lean_usize_add(v_i_2315_, v___x_2321_);
v_i_2315_ = v___x_2322_;
goto _start;
}
else
{
return v___x_2318_;
}
}
}
else
{
uint8_t v___x_2326_; 
v___x_2326_ = 0;
return v___x_2326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0___boxed(lean_object* v___y_2327_, lean_object* v___x_2328_, lean_object* v_as_2329_, lean_object* v_i_2330_, lean_object* v_stop_2331_){
_start:
{
uint8_t v___y_330__boxed_2332_; uint8_t v___x_331__boxed_2333_; size_t v_i_boxed_2334_; size_t v_stop_boxed_2335_; uint8_t v_res_2336_; lean_object* v_r_2337_; 
v___y_330__boxed_2332_ = lean_unbox(v___y_2327_);
v___x_331__boxed_2333_ = lean_unbox(v___x_2328_);
v_i_boxed_2334_ = lean_unbox_usize(v_i_2330_);
lean_dec(v_i_2330_);
v_stop_boxed_2335_ = lean_unbox_usize(v_stop_2331_);
lean_dec(v_stop_2331_);
v_res_2336_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(v___y_330__boxed_2332_, v___x_331__boxed_2333_, v_as_2329_, v_i_boxed_2334_, v_stop_boxed_2335_);
lean_dec_ref(v_as_2329_);
v_r_2337_ = lean_box(v_res_2336_);
return v_r_2337_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquots(lean_object* v_stx_2338_){
_start:
{
uint8_t v___x_2339_; uint8_t v___y_2341_; 
v___x_2339_ = l_Lean_Syntax_isAntiquot(v_stx_2338_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2349_; uint8_t v___x_2350_; 
v___x_2349_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2338_);
v___x_2350_ = l_Lean_Syntax_isOfKind(v_stx_2338_, v___x_2349_);
if (v___x_2350_ == 0)
{
v___y_2341_ = v___x_2350_;
goto v___jp_2340_;
}
else
{
lean_object* v___x_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; 
v___x_2351_ = lean_unsigned_to_nat(0u);
v___x_2352_ = l_Lean_Syntax_getNumArgs(v_stx_2338_);
v___x_2353_ = lean_nat_dec_lt(v___x_2351_, v___x_2352_);
lean_dec(v___x_2352_);
v___y_2341_ = v___x_2353_;
goto v___jp_2340_;
}
}
else
{
lean_dec(v_stx_2338_);
return v___x_2339_;
}
v___jp_2340_:
{
if (v___y_2341_ == 0)
{
lean_dec(v_stx_2338_);
return v___y_2341_;
}
else
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; 
v___x_2342_ = l_Lean_Syntax_getArgs(v_stx_2338_);
lean_dec(v_stx_2338_);
v___x_2343_ = lean_unsigned_to_nat(0u);
v___x_2344_ = lean_array_get_size(v___x_2342_);
v___x_2345_ = lean_nat_dec_lt(v___x_2343_, v___x_2344_);
if (v___x_2345_ == 0)
{
lean_dec_ref(v___x_2342_);
return v___y_2341_;
}
else
{
if (v___x_2345_ == 0)
{
lean_dec_ref(v___x_2342_);
return v___y_2341_;
}
else
{
size_t v___x_2346_; size_t v___x_2347_; uint8_t v___x_2348_; 
v___x_2346_ = ((size_t)0ULL);
v___x_2347_ = lean_usize_of_nat(v___x_2344_);
v___x_2348_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(v___y_2341_, v___x_2339_, v___x_2342_, v___x_2346_, v___x_2347_);
lean_dec_ref(v___x_2342_);
if (v___x_2348_ == 0)
{
return v___x_2345_;
}
else
{
return v___x_2339_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquots___boxed(lean_object* v_stx_2354_){
_start:
{
uint8_t v_res_2355_; lean_object* v_r_2356_; 
v_res_2355_ = l_Lean_Syntax_isAntiquots(v_stx_2354_);
v_r_2356_ = lean_box(v_res_2355_);
return v_r_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object* v_stx_2357_){
_start:
{
lean_object* v___x_2358_; uint8_t v___x_2359_; 
v___x_2358_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2357_);
v___x_2359_ = l_Lean_Syntax_isOfKind(v_stx_2357_, v___x_2358_);
if (v___x_2359_ == 0)
{
return v_stx_2357_;
}
else
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2360_ = lean_unsigned_to_nat(0u);
v___x_2361_ = l_Lean_Syntax_getArg(v_stx_2357_, v___x_2360_);
lean_dec(v_stx_2357_);
return v___x_2361_;
}
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__1(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__0));
v___x_2364_ = l_Lean_mkAtom(v___x_2363_);
return v___x_2364_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__3(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2367_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2368_ = lean_unsigned_to_nat(4u);
v___x_2369_ = lean_mk_empty_array_with_capacity(v___x_2368_);
v___x_2370_ = lean_array_push(v___x_2369_, v___x_2367_);
return v___x_2370_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__9(void){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2378_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__8));
v___x_2379_ = l_Lean_mkAtom(v___x_2378_);
return v___x_2379_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__10(void){
_start:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2380_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__9, &l_Lean_Syntax_mkAntiquotNode___closed__9_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__9);
v___x_2381_ = lean_unsigned_to_nat(2u);
v___x_2382_ = lean_mk_empty_array_with_capacity(v___x_2381_);
v___x_2383_ = lean_array_push(v___x_2382_, v___x_2380_);
return v___x_2383_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__16(void){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__15));
v___x_2395_ = l_Lean_mkAtom(v___x_2394_);
return v___x_2395_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__18(void){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__17));
v___x_2398_ = l_Lean_mkAtom(v___x_2397_);
return v___x_2398_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__19(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2399_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__16, &l_Lean_Syntax_mkAntiquotNode___closed__16_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__16);
v___x_2400_ = lean_unsigned_to_nat(3u);
v___x_2401_ = lean_mk_empty_array_with_capacity(v___x_2400_);
v___x_2402_ = lean_array_push(v___x_2401_, v___x_2399_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object* v_kind_2403_, lean_object* v_term_2404_, lean_object* v_nesting_2405_, lean_object* v_name_2406_, uint8_t v_isPseudoKind_2407_){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v_nesting_2412_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2431_; uint8_t v___x_2439_; 
v___x_2408_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2409_ = lean_mk_array(v_nesting_2405_, v___x_2408_);
v___x_2410_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2411_ = lean_box(2);
v_nesting_2412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_nesting_2412_, 0, v___x_2411_);
lean_ctor_set(v_nesting_2412_, 1, v___x_2410_);
lean_ctor_set(v_nesting_2412_, 2, v___x_2409_);
v___x_2439_ = l_Lean_Syntax_isIdent(v_term_2404_);
if (v___x_2439_ == 0)
{
lean_object* v___x_2440_; uint8_t v___x_2441_; 
v___x_2440_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__12));
lean_inc(v_term_2404_);
v___x_2441_ = l_Lean_Syntax_isOfKind(v_term_2404_, v___x_2440_);
if (v___x_2441_ == 0)
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2442_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__14));
v___x_2443_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__18, &l_Lean_Syntax_mkAntiquotNode___closed__18_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__18);
v___x_2444_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__19, &l_Lean_Syntax_mkAntiquotNode___closed__19_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__19);
v___x_2445_ = lean_array_push(v___x_2444_, v_term_2404_);
v___x_2446_ = lean_array_push(v___x_2445_, v___x_2443_);
v___x_2447_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2411_);
lean_ctor_set(v___x_2447_, 1, v___x_2442_);
lean_ctor_set(v___x_2447_, 2, v___x_2446_);
v___y_2431_ = v___x_2447_;
goto v___jp_2430_;
}
else
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = lean_unsigned_to_nat(0u);
v___x_2449_ = l_Lean_Syntax_getArg(v_term_2404_, v___x_2448_);
lean_dec(v_term_2404_);
v___y_2431_ = v___x_2449_;
goto v___jp_2430_;
}
}
else
{
v___y_2431_ = v_term_2404_;
goto v___jp_2430_;
}
v___jp_2413_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
lean_inc(v___y_2416_);
v___x_2417_ = l_Lean_Name_append(v_kind_2403_, v___y_2416_);
v___x_2418_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__2));
v___x_2419_ = l_Lean_Name_append(v___x_2417_, v___x_2418_);
v___x_2420_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__3, &l_Lean_Syntax_mkAntiquotNode___closed__3_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__3);
v___x_2421_ = lean_array_push(v___x_2420_, v_nesting_2412_);
v___x_2422_ = lean_array_push(v___x_2421_, v___y_2415_);
v___x_2423_ = lean_array_push(v___x_2422_, v___y_2414_);
v___x_2424_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2411_);
lean_ctor_set(v___x_2424_, 1, v___x_2419_);
lean_ctor_set(v___x_2424_, 2, v___x_2423_);
return v___x_2424_;
}
v___jp_2425_:
{
if (v_isPseudoKind_2407_ == 0)
{
lean_object* v___x_2428_; 
v___x_2428_ = lean_obj_once(&l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0, &l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_once, _init_l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0);
v___y_2414_ = v___y_2427_;
v___y_2415_ = v___y_2426_;
v___y_2416_ = v___x_2428_;
goto v___jp_2413_;
}
else
{
lean_object* v___x_2429_; 
v___x_2429_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__5));
v___y_2414_ = v___y_2427_;
v___y_2415_ = v___y_2426_;
v___y_2416_ = v___x_2429_;
goto v___jp_2413_;
}
}
v___jp_2430_:
{
if (lean_obj_tag(v_name_2406_) == 0)
{
lean_object* v___x_2432_; 
v___x_2432_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__3));
v___y_2426_ = v___y_2431_;
v___y_2427_ = v___x_2432_;
goto v___jp_2425_;
}
else
{
lean_object* v_val_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v_val_2433_ = lean_ctor_get(v_name_2406_, 0);
lean_inc(v_val_2433_);
lean_dec_ref_known(v_name_2406_, 1);
v___x_2434_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__7));
v___x_2435_ = l_Lean_mkAtom(v_val_2433_);
v___x_2436_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__10, &l_Lean_Syntax_mkAntiquotNode___closed__10_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__10);
v___x_2437_ = lean_array_push(v___x_2436_, v___x_2435_);
v___x_2438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2411_);
lean_ctor_set(v___x_2438_, 1, v___x_2434_);
lean_ctor_set(v___x_2438_, 2, v___x_2437_);
v___y_2426_ = v___y_2431_;
v___y_2427_ = v___x_2438_;
goto v___jp_2425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode___boxed(lean_object* v_kind_2450_, lean_object* v_term_2451_, lean_object* v_nesting_2452_, lean_object* v_name_2453_, lean_object* v_isPseudoKind_2454_){
_start:
{
uint8_t v_isPseudoKind_boxed_2455_; lean_object* v_res_2456_; 
v_isPseudoKind_boxed_2455_ = lean_unbox(v_isPseudoKind_2454_);
v_res_2456_ = l_Lean_Syntax_mkAntiquotNode(v_kind_2450_, v_term_2451_, v_nesting_2452_, v_name_2453_, v_isPseudoKind_boxed_2455_);
return v_res_2456_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object* v_stx_2457_){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; uint8_t v___x_2463_; 
v___x_2458_ = lean_unsigned_to_nat(1u);
v___x_2459_ = l_Lean_Syntax_getArg(v_stx_2457_, v___x_2458_);
v___x_2460_ = l_Lean_Syntax_getArgs(v___x_2459_);
lean_dec(v___x_2459_);
v___x_2461_ = lean_array_get_size(v___x_2460_);
lean_dec_ref(v___x_2460_);
v___x_2462_ = lean_unsigned_to_nat(0u);
v___x_2463_ = lean_nat_dec_eq(v___x_2461_, v___x_2462_);
if (v___x_2463_ == 0)
{
uint8_t v___x_2464_; 
v___x_2464_ = 1;
return v___x_2464_;
}
else
{
uint8_t v___x_2465_; 
v___x_2465_ = 0;
return v___x_2465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isEscapedAntiquot___boxed(lean_object* v_stx_2466_){
_start:
{
uint8_t v_res_2467_; lean_object* v_r_2468_; 
v_res_2467_ = l_Lean_Syntax_isEscapedAntiquot(v_stx_2466_);
lean_dec(v_stx_2466_);
v_r_2468_ = lean_box(v_res_2467_);
return v_r_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_unescapeAntiquot(lean_object* v_stx_2469_){
_start:
{
uint8_t v___x_2470_; 
v___x_2470_ = l_Lean_Syntax_isAntiquot(v_stx_2469_);
if (v___x_2470_ == 0)
{
return v_stx_2469_;
}
else
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2471_ = lean_unsigned_to_nat(1u);
v___x_2472_ = l_Lean_Syntax_getArg(v_stx_2469_, v___x_2471_);
v___x_2473_ = l_Lean_Syntax_getArgs(v___x_2472_);
lean_dec(v___x_2472_);
v___x_2474_ = lean_array_pop(v___x_2473_);
v___x_2475_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2476_ = lean_box(2);
v___x_2477_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
lean_ctor_set(v___x_2477_, 1, v___x_2475_);
lean_ctor_set(v___x_2477_, 2, v___x_2474_);
v___x_2478_ = l_Lean_Syntax_setArg(v_stx_2469_, v___x_2471_, v___x_2477_);
return v___x_2478_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object* v_stx_2479_){
_start:
{
lean_object* v___y_2481_; uint8_t v___x_2492_; 
v___x_2492_ = l_Lean_Syntax_isAntiquot(v_stx_2479_);
if (v___x_2492_ == 0)
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = lean_unsigned_to_nat(3u);
v___x_2494_ = l_Lean_Syntax_getArg(v_stx_2479_, v___x_2493_);
v___y_2481_ = v___x_2494_;
goto v___jp_2480_;
}
else
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = lean_unsigned_to_nat(2u);
v___x_2496_ = l_Lean_Syntax_getArg(v_stx_2479_, v___x_2495_);
v___y_2481_ = v___x_2496_;
goto v___jp_2480_;
}
v___jp_2480_:
{
uint8_t v___x_2482_; 
v___x_2482_ = l_Lean_Syntax_isIdent(v___y_2481_);
if (v___x_2482_ == 0)
{
uint8_t v___x_2483_; 
v___x_2483_ = l_Lean_Syntax_isAtom(v___y_2481_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = lean_unsigned_to_nat(1u);
v___x_2485_ = l_Lean_Syntax_getArg(v___y_2481_, v___x_2484_);
lean_dec(v___y_2481_);
return v___x_2485_;
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2486_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__12));
v___x_2487_ = lean_unsigned_to_nat(1u);
v___x_2488_ = lean_mk_empty_array_with_capacity(v___x_2487_);
v___x_2489_ = lean_array_push(v___x_2488_, v___y_2481_);
v___x_2490_ = lean_box(2);
v___x_2491_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
lean_ctor_set(v___x_2491_, 1, v___x_2486_);
lean_ctor_set(v___x_2491_, 2, v___x_2489_);
return v___x_2491_;
}
}
else
{
return v___y_2481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm___boxed(lean_object* v_stx_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lean_Syntax_getAntiquotTerm(v_stx_2497_);
lean_dec(v_stx_2497_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f(lean_object* v_x_2499_){
_start:
{
if (lean_obj_tag(v_x_2499_) == 1)
{
lean_object* v_kind_2500_; 
v_kind_2500_ = lean_ctor_get(v_x_2499_, 1);
if (lean_obj_tag(v_kind_2500_) == 1)
{
lean_object* v_pre_2501_; lean_object* v_str_2502_; 
v_pre_2501_ = lean_ctor_get(v_kind_2500_, 0);
v_str_2502_ = lean_ctor_get(v_kind_2500_, 1);
if (lean_obj_tag(v_pre_2501_) == 1)
{
lean_object* v_pre_2508_; lean_object* v_str_2509_; lean_object* v___x_2510_; uint8_t v___x_2511_; 
v_pre_2508_ = lean_ctor_get(v_pre_2501_, 0);
v_str_2509_ = lean_ctor_get(v_pre_2501_, 1);
v___x_2510_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__4));
v___x_2511_ = lean_string_dec_eq(v_str_2509_, v___x_2510_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; uint8_t v___x_2513_; 
v___x_2512_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2513_ = lean_string_dec_eq(v_str_2502_, v___x_2512_);
if (v___x_2513_ == 0)
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_box(0);
return v___x_2514_;
}
else
{
goto v___jp_2503_;
}
}
else
{
lean_object* v___x_2515_; uint8_t v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2516_ = lean_string_dec_eq(v_str_2502_, v___x_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; 
v___x_2517_ = lean_box(0);
return v___x_2517_;
}
else
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2518_ = lean_box(v___x_2516_);
lean_inc(v_pre_2508_);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v_pre_2508_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
return v___x_2520_;
}
}
}
else
{
lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2521_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2522_ = lean_string_dec_eq(v_str_2502_, v___x_2521_);
if (v___x_2522_ == 0)
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_box(0);
return v___x_2523_;
}
else
{
goto v___jp_2503_;
}
}
v___jp_2503_:
{
uint8_t v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2504_ = 0;
v___x_2505_ = lean_box(v___x_2504_);
lean_inc(v_pre_2501_);
v___x_2506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2506_, 0, v_pre_2501_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
}
else
{
lean_object* v___x_2524_; 
v___x_2524_ = lean_box(0);
return v___x_2524_;
}
}
else
{
lean_object* v___x_2525_; 
v___x_2525_ = lean_box(0);
return v___x_2525_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f___boxed(lean_object* v_x_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lean_Syntax_antiquotKind_x3f(v_x_2526_);
lean_dec(v_x_2526_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(lean_object* v_as_2528_, size_t v_i_2529_, size_t v_stop_2530_, lean_object* v_b_2531_){
_start:
{
lean_object* v___y_2533_; uint8_t v___x_2537_; 
v___x_2537_ = lean_usize_dec_eq(v_i_2529_, v_stop_2530_);
if (v___x_2537_ == 0)
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = lean_array_uget_borrowed(v_as_2528_, v_i_2529_);
v___x_2539_ = l_Lean_Syntax_antiquotKind_x3f(v___x_2538_);
if (lean_obj_tag(v___x_2539_) == 0)
{
v___y_2533_ = v_b_2531_;
goto v___jp_2532_;
}
else
{
lean_object* v_val_2540_; lean_object* v___x_2541_; 
v_val_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_val_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v___x_2541_ = lean_array_push(v_b_2531_, v_val_2540_);
v___y_2533_ = v___x_2541_;
goto v___jp_2532_;
}
}
else
{
return v_b_2531_;
}
v___jp_2532_:
{
size_t v___x_2534_; size_t v___x_2535_; 
v___x_2534_ = ((size_t)1ULL);
v___x_2535_ = lean_usize_add(v_i_2529_, v___x_2534_);
v_i_2529_ = v___x_2535_;
v_b_2531_ = v___y_2533_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0___boxed(lean_object* v_as_2542_, lean_object* v_i_2543_, lean_object* v_stop_2544_, lean_object* v_b_2545_){
_start:
{
size_t v_i_boxed_2546_; size_t v_stop_boxed_2547_; lean_object* v_res_2548_; 
v_i_boxed_2546_ = lean_unbox_usize(v_i_2543_);
lean_dec(v_i_2543_);
v_stop_boxed_2547_ = lean_unbox_usize(v_stop_2544_);
lean_dec(v_stop_2544_);
v_res_2548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2542_, v_i_boxed_2546_, v_stop_boxed_2547_, v_b_2545_);
lean_dec_ref(v_as_2542_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(lean_object* v_as_2551_, lean_object* v_start_2552_, lean_object* v_stop_2553_){
_start:
{
lean_object* v___x_2554_; uint8_t v___x_2555_; 
v___x_2554_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0));
v___x_2555_ = lean_nat_dec_lt(v_start_2552_, v_stop_2553_);
if (v___x_2555_ == 0)
{
return v___x_2554_;
}
else
{
lean_object* v___x_2556_; uint8_t v___x_2557_; 
v___x_2556_ = lean_array_get_size(v_as_2551_);
v___x_2557_ = lean_nat_dec_le(v_stop_2553_, v___x_2556_);
if (v___x_2557_ == 0)
{
uint8_t v___x_2558_; 
v___x_2558_ = lean_nat_dec_lt(v_start_2552_, v___x_2556_);
if (v___x_2558_ == 0)
{
return v___x_2554_;
}
else
{
size_t v___x_2559_; size_t v___x_2560_; lean_object* v___x_2561_; 
v___x_2559_ = lean_usize_of_nat(v_start_2552_);
v___x_2560_ = lean_usize_of_nat(v___x_2556_);
v___x_2561_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2551_, v___x_2559_, v___x_2560_, v___x_2554_);
return v___x_2561_;
}
}
else
{
size_t v___x_2562_; size_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = lean_usize_of_nat(v_start_2552_);
v___x_2563_ = lean_usize_of_nat(v_stop_2553_);
v___x_2564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2551_, v___x_2562_, v___x_2563_, v___x_2554_);
return v___x_2564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___boxed(lean_object* v_as_2565_, lean_object* v_start_2566_, lean_object* v_stop_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(v_as_2565_, v_start_2566_, v_stop_2567_);
lean_dec(v_stop_2567_);
lean_dec(v_start_2566_);
lean_dec_ref(v_as_2565_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKinds(lean_object* v_stx_2569_){
_start:
{
lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2570_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2569_);
v___x_2571_ = l_Lean_Syntax_isOfKind(v_stx_2569_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_Syntax_antiquotKind_x3f(v_stx_2569_);
lean_dec(v_stx_2569_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v___x_2573_; 
v___x_2573_ = lean_box(0);
return v___x_2573_;
}
else
{
lean_object* v_val_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v_val_2574_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_val_2574_);
lean_dec_ref_known(v___x_2572_, 1);
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2576_, 0, v_val_2574_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
return v___x_2576_;
}
}
else
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2577_ = l_Lean_Syntax_getArgs(v_stx_2569_);
lean_dec(v_stx_2569_);
v___x_2578_ = lean_unsigned_to_nat(0u);
v___x_2579_ = lean_array_get_size(v___x_2577_);
v___x_2580_ = l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(v___x_2577_, v___x_2578_, v___x_2579_);
lean_dec_ref(v___x_2577_);
v___x_2581_ = lean_array_to_list(v___x_2580_);
return v___x_2581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f(lean_object* v_x_2583_){
_start:
{
if (lean_obj_tag(v_x_2583_) == 1)
{
lean_object* v_kind_2584_; 
v_kind_2584_ = lean_ctor_get(v_x_2583_, 1);
if (lean_obj_tag(v_kind_2584_) == 1)
{
lean_object* v_pre_2585_; lean_object* v_str_2586_; lean_object* v___x_2587_; uint8_t v___x_2588_; 
v_pre_2585_ = lean_ctor_get(v_kind_2584_, 0);
v_str_2586_ = lean_ctor_get(v_kind_2584_, 1);
v___x_2587_ = ((lean_object*)(l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0));
v___x_2588_ = lean_string_dec_eq(v_str_2586_, v___x_2587_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; 
v___x_2589_ = lean_box(0);
return v___x_2589_;
}
else
{
lean_object* v___x_2590_; 
lean_inc(v_pre_2585_);
v___x_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2590_, 0, v_pre_2585_);
return v___x_2590_;
}
}
else
{
lean_object* v___x_2591_; 
v___x_2591_ = lean_box(0);
return v___x_2591_;
}
}
else
{
lean_object* v___x_2592_; 
v___x_2592_ = lean_box(0);
return v___x_2592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___boxed(lean_object* v_x_2593_){
_start:
{
lean_object* v_res_2594_; 
v_res_2594_ = l_Lean_Syntax_antiquotSpliceKind_x3f(v_x_2593_);
lean_dec(v_x_2593_);
return v_res_2594_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object* v_stx_2595_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l_Lean_Syntax_antiquotSpliceKind_x3f(v_stx_2595_);
if (lean_obj_tag(v___x_2596_) == 0)
{
uint8_t v___x_2597_; 
v___x_2597_ = 0;
return v___x_2597_;
}
else
{
uint8_t v___x_2598_; 
lean_dec_ref_known(v___x_2596_, 1);
v___x_2598_ = 1;
return v___x_2598_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSplice___boxed(lean_object* v_stx_2599_){
_start:
{
uint8_t v_res_2600_; lean_object* v_r_2601_; 
v_res_2600_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2599_);
lean_dec(v_stx_2599_);
v_r_2601_ = lean_box(v_res_2600_);
return v_r_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents(lean_object* v_stx_2602_){
_start:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2603_ = lean_unsigned_to_nat(3u);
v___x_2604_ = l_Lean_Syntax_getArg(v_stx_2602_, v___x_2603_);
v___x_2605_ = l_Lean_Syntax_getArgs(v___x_2604_);
lean_dec(v___x_2604_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents___boxed(lean_object* v_stx_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lean_Syntax_getAntiquotSpliceContents(v_stx_2606_);
lean_dec(v_stx_2606_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix(lean_object* v_stx_2608_){
_start:
{
uint8_t v___x_2609_; 
v___x_2609_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2608_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = lean_unsigned_to_nat(1u);
v___x_2611_ = l_Lean_Syntax_getArg(v_stx_2608_, v___x_2610_);
return v___x_2611_;
}
else
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2612_ = lean_unsigned_to_nat(5u);
v___x_2613_ = l_Lean_Syntax_getArg(v_stx_2608_, v___x_2612_);
return v___x_2613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix___boxed(lean_object* v_stx_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_Syntax_getAntiquotSpliceSuffix(v_stx_2614_);
lean_dec(v_stx_2614_);
return v_res_2615_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__3(void){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2620_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__2));
v___x_2621_ = l_Lean_mkAtom(v___x_2620_);
return v___x_2621_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__5(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2623_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__4));
v___x_2624_ = l_Lean_mkAtom(v___x_2623_);
return v___x_2624_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__6(void){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2625_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2626_ = lean_unsigned_to_nat(6u);
v___x_2627_ = lean_mk_empty_array_with_capacity(v___x_2626_);
v___x_2628_ = lean_array_push(v___x_2627_, v___x_2625_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSpliceNode(lean_object* v_kind_2629_, lean_object* v_contents_2630_, lean_object* v_suffix_2631_, lean_object* v_nesting_2632_){
_start:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v_nesting_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2633_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2634_ = lean_mk_array(v_nesting_2632_, v___x_2633_);
v___x_2635_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2636_ = lean_box(2);
v_nesting_2637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_nesting_2637_, 0, v___x_2636_);
lean_ctor_set(v_nesting_2637_, 1, v___x_2635_);
lean_ctor_set(v_nesting_2637_, 2, v___x_2634_);
v___x_2638_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__1));
v___x_2639_ = l_Lean_Name_append(v_kind_2629_, v___x_2638_);
v___x_2640_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__3, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__3_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__3);
v___x_2641_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2636_);
lean_ctor_set(v___x_2641_, 1, v___x_2635_);
lean_ctor_set(v___x_2641_, 2, v_contents_2630_);
v___x_2642_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__5, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__5_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__5);
v___x_2643_ = l_Lean_mkAtom(v_suffix_2631_);
v___x_2644_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__6, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__6_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__6);
v___x_2645_ = lean_array_push(v___x_2644_, v_nesting_2637_);
v___x_2646_ = lean_array_push(v___x_2645_, v___x_2640_);
v___x_2647_ = lean_array_push(v___x_2646_, v___x_2641_);
v___x_2648_ = lean_array_push(v___x_2647_, v___x_2642_);
v___x_2649_ = lean_array_push(v___x_2648_, v___x_2643_);
v___x_2650_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2636_);
lean_ctor_set(v___x_2650_, 1, v___x_2639_);
lean_ctor_set(v___x_2650_, 2, v___x_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f(lean_object* v_x_2652_){
_start:
{
if (lean_obj_tag(v_x_2652_) == 1)
{
lean_object* v_kind_2653_; 
v_kind_2653_ = lean_ctor_get(v_x_2652_, 1);
if (lean_obj_tag(v_kind_2653_) == 1)
{
lean_object* v_pre_2654_; lean_object* v_str_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; 
v_pre_2654_ = lean_ctor_get(v_kind_2653_, 0);
v_str_2655_ = lean_ctor_get(v_kind_2653_, 1);
v___x_2656_ = ((lean_object*)(l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0));
v___x_2657_ = lean_string_dec_eq(v_str_2655_, v___x_2656_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; 
v___x_2658_ = lean_box(0);
return v___x_2658_;
}
else
{
lean_object* v___x_2659_; 
lean_inc(v_pre_2654_);
v___x_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2659_, 0, v_pre_2654_);
return v___x_2659_;
}
}
else
{
lean_object* v___x_2660_; 
v___x_2660_ = lean_box(0);
return v___x_2660_;
}
}
else
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_box(0);
return v___x_2661_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___boxed(lean_object* v_x_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lean_Syntax_antiquotSuffixSplice_x3f(v_x_2662_);
lean_dec(v_x_2662_);
return v_res_2663_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object* v_stx_2664_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Lean_Syntax_antiquotSuffixSplice_x3f(v_stx_2664_);
if (lean_obj_tag(v___x_2665_) == 0)
{
uint8_t v___x_2666_; 
v___x_2666_ = 0;
return v___x_2666_;
}
else
{
uint8_t v___x_2667_; 
lean_dec_ref_known(v___x_2665_, 1);
v___x_2667_ = 1;
return v___x_2667_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSuffixSplice___boxed(lean_object* v_stx_2668_){
_start:
{
uint8_t v_res_2669_; lean_object* v_r_2670_; 
v_res_2669_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_2668_);
lean_dec(v_stx_2668_);
v_r_2670_ = lean_box(v_res_2669_);
return v_r_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner(lean_object* v_stx_2671_){
_start:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = lean_unsigned_to_nat(0u);
v___x_2673_ = l_Lean_Syntax_getArg(v_stx_2671_, v___x_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner___boxed(lean_object* v_stx_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = l_Lean_Syntax_getAntiquotSuffixSpliceInner(v_stx_2674_);
lean_dec(v_stx_2674_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object* v_kind_2678_, lean_object* v_inner_2679_, lean_object* v_suffix_2680_){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v___x_2681_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0));
v___x_2682_ = l_Lean_Name_append(v_kind_2678_, v___x_2681_);
v___x_2683_ = l_Lean_mkAtom(v_suffix_2680_);
v___x_2684_ = lean_unsigned_to_nat(2u);
v___x_2685_ = lean_mk_empty_array_with_capacity(v___x_2684_);
v___x_2686_ = lean_array_push(v___x_2685_, v_inner_2679_);
v___x_2687_ = lean_array_push(v___x_2686_, v___x_2683_);
v___x_2688_ = lean_box(2);
v___x_2689_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2688_);
lean_ctor_set(v___x_2689_, 1, v___x_2682_);
lean_ctor_set(v___x_2689_, 2, v___x_2687_);
return v___x_2689_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object* v_stx_2693_){
_start:
{
lean_object* v___x_2694_; uint8_t v___x_2695_; 
v___x_2694_ = ((lean_object*)(l_Lean_Syntax_isTokenAntiquot___closed__1));
v___x_2695_ = l_Lean_Syntax_isOfKind(v_stx_2693_, v___x_2694_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isTokenAntiquot___boxed(lean_object* v_stx_2696_){
_start:
{
uint8_t v_res_2697_; lean_object* v_r_2698_; 
v_res_2697_ = l_Lean_Syntax_isTokenAntiquot(v_stx_2696_);
v_r_2698_ = lean_box(v_res_2697_);
return v_r_2698_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAnyAntiquot(lean_object* v_stx_2699_){
_start:
{
uint8_t v___y_2701_; uint8_t v___x_2704_; 
v___x_2704_ = l_Lean_Syntax_isAntiquot(v_stx_2699_);
if (v___x_2704_ == 0)
{
uint8_t v___x_2705_; 
v___x_2705_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2699_);
v___y_2701_ = v___x_2705_;
goto v___jp_2700_;
}
else
{
v___y_2701_ = v___x_2704_;
goto v___jp_2700_;
}
v___jp_2700_:
{
if (v___y_2701_ == 0)
{
uint8_t v___x_2702_; 
v___x_2702_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_2699_);
if (v___x_2702_ == 0)
{
uint8_t v___x_2703_; 
v___x_2703_ = l_Lean_Syntax_isTokenAntiquot(v_stx_2699_);
return v___x_2703_;
}
else
{
lean_dec(v_stx_2699_);
return v___x_2702_;
}
}
else
{
lean_dec(v_stx_2699_);
return v___y_2701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAnyAntiquot___boxed(lean_object* v_stx_2706_){
_start:
{
uint8_t v_res_2707_; lean_object* v_r_2708_; 
v_res_2707_ = l_Lean_Syntax_isAnyAntiquot(v_stx_2706_);
v_r_2708_ = lean_box(v_res_2707_);
return v_r_2708_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(lean_object* v_upperBound_2712_, lean_object* v_stx_2713_, lean_object* v_visit_2714_, lean_object* v_stack_2715_, lean_object* v_accept_2716_, lean_object* v_a_2717_, lean_object* v_b_2718_){
_start:
{
lean_object* v_a_2720_; uint8_t v___x_2724_; 
v___x_2724_ = lean_nat_dec_lt(v_a_2717_, v_upperBound_2712_);
if (v___x_2724_ == 0)
{
lean_dec(v_a_2717_);
lean_dec_ref(v_accept_2716_);
lean_dec(v_stack_2715_);
lean_dec_ref(v_visit_2714_);
lean_dec(v_stx_2713_);
lean_inc_ref(v_b_2718_);
return v_b_2718_;
}
else
{
lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; uint8_t v___x_2729_; 
v___x_2725_ = lean_box(0);
v___x_2726_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0));
v___x_2727_ = l_Lean_Syntax_getArg(v_stx_2713_, v_a_2717_);
lean_inc_ref(v_visit_2714_);
lean_inc(v___x_2727_);
v___x_2728_ = lean_apply_1(v_visit_2714_, v___x_2727_);
v___x_2729_ = lean_unbox(v___x_2728_);
if (v___x_2729_ == 0)
{
lean_dec(v___x_2727_);
v_a_2720_ = v___x_2726_;
goto v___jp_2719_;
}
else
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
lean_inc(v_a_2717_);
lean_inc(v_stx_2713_);
v___x_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2730_, 0, v_stx_2713_);
lean_ctor_set(v___x_2730_, 1, v_a_2717_);
lean_inc(v_stack_2715_);
v___x_2731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
lean_ctor_set(v___x_2731_, 1, v_stack_2715_);
lean_inc_ref(v_accept_2716_);
lean_inc_ref(v_visit_2714_);
v___x_2732_ = l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(v_visit_2714_, v_accept_2716_, v___x_2731_, v___x_2727_);
if (lean_obj_tag(v___x_2732_) == 1)
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_dec(v_a_2717_);
lean_dec_ref(v_accept_2716_);
lean_dec(v_stack_2715_);
lean_dec_ref(v_visit_2714_);
lean_dec(v_stx_2713_);
v___x_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2732_);
v___x_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2733_);
lean_ctor_set(v___x_2734_, 1, v___x_2725_);
return v___x_2734_;
}
else
{
lean_dec(v___x_2732_);
v_a_2720_ = v___x_2726_;
goto v___jp_2719_;
}
}
}
v___jp_2719_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2721_ = lean_unsigned_to_nat(1u);
v___x_2722_ = lean_nat_add(v_a_2717_, v___x_2721_);
lean_dec(v_a_2717_);
v_a_2717_ = v___x_2722_;
v_b_2718_ = v_a_2720_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(lean_object* v_visit_2735_, lean_object* v_accept_2736_, lean_object* v_stack_2737_, lean_object* v_stx_2738_){
_start:
{
lean_object* v___x_2739_; uint8_t v___x_2740_; 
lean_inc_ref(v_accept_2736_);
lean_inc(v_stx_2738_);
v___x_2739_ = lean_apply_1(v_accept_2736_, v_stx_2738_);
v___x_2740_ = lean_unbox(v___x_2739_);
if (v___x_2740_ == 0)
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v_fst_2746_; 
v___x_2741_ = l_Lean_Syntax_getNumArgs(v_stx_2738_);
v___x_2742_ = lean_unsigned_to_nat(0u);
v___x_2743_ = lean_box(0);
v___x_2744_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0));
v___x_2745_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v___x_2741_, v_stx_2738_, v_visit_2735_, v_stack_2737_, v_accept_2736_, v___x_2742_, v___x_2744_);
lean_dec(v___x_2741_);
v_fst_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_fst_2746_);
lean_dec_ref(v___x_2745_);
if (lean_obj_tag(v_fst_2746_) == 0)
{
return v___x_2743_;
}
else
{
lean_object* v_val_2747_; 
v_val_2747_ = lean_ctor_get(v_fst_2746_, 0);
lean_inc(v_val_2747_);
lean_dec_ref_known(v_fst_2746_, 1);
return v_val_2747_;
}
}
else
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
lean_dec_ref(v_accept_2736_);
lean_dec_ref(v_visit_2735_);
v___x_2748_ = lean_unsigned_to_nat(0u);
v___x_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2749_, 0, v_stx_2738_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
v___x_2750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
lean_ctor_set(v___x_2750_, 1, v_stack_2737_);
v___x_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg___boxed(lean_object* v_upperBound_2752_, lean_object* v_stx_2753_, lean_object* v_visit_2754_, lean_object* v_stack_2755_, lean_object* v_accept_2756_, lean_object* v_a_2757_, lean_object* v_b_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v_upperBound_2752_, v_stx_2753_, v_visit_2754_, v_stack_2755_, v_accept_2756_, v_a_2757_, v_b_2758_);
lean_dec_ref(v_b_2758_);
lean_dec(v_upperBound_2752_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(lean_object* v_upperBound_2760_, lean_object* v_stx_2761_, lean_object* v_visit_2762_, lean_object* v_stack_2763_, lean_object* v_accept_2764_, lean_object* v_inst_2765_, lean_object* v_R_2766_, lean_object* v_a_2767_, lean_object* v_b_2768_, lean_object* v_c_2769_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v_upperBound_2760_, v_stx_2761_, v_visit_2762_, v_stack_2763_, v_accept_2764_, v_a_2767_, v_b_2768_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___boxed(lean_object* v_upperBound_2771_, lean_object* v_stx_2772_, lean_object* v_visit_2773_, lean_object* v_stack_2774_, lean_object* v_accept_2775_, lean_object* v_inst_2776_, lean_object* v_R_2777_, lean_object* v_a_2778_, lean_object* v_b_2779_, lean_object* v_c_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(v_upperBound_2771_, v_stx_2772_, v_visit_2773_, v_stack_2774_, v_accept_2775_, v_inst_2776_, v_R_2777_, v_a_2778_, v_b_2779_, v_c_2780_);
lean_dec_ref(v_b_2779_);
lean_dec(v_upperBound_2771_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_findStack_x3f(lean_object* v_root_2782_, lean_object* v_visit_2783_, lean_object* v_accept_2784_){
_start:
{
lean_object* v___x_2785_; uint8_t v___x_2786_; 
lean_inc_ref(v_visit_2783_);
lean_inc(v_root_2782_);
v___x_2785_ = lean_apply_1(v_visit_2783_, v_root_2782_);
v___x_2786_ = lean_unbox(v___x_2785_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; 
lean_dec_ref(v_accept_2784_);
lean_dec_ref(v_visit_2783_);
lean_dec(v_root_2782_);
v___x_2787_ = lean_box(0);
return v___x_2787_;
}
else
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = lean_box(0);
v___x_2789_ = l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(v_visit_2783_, v_accept_2784_, v___x_2788_, v_root_2782_);
return v___x_2789_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches___lam__0(uint8_t v___x_2790_, lean_object* v_x_2791_, lean_object* v_p_2792_){
_start:
{
if (lean_obj_tag(v_p_2792_) == 0)
{
lean_dec_ref(v_x_2791_);
return v___x_2790_;
}
else
{
lean_object* v_fst_2793_; lean_object* v_val_2794_; uint8_t v___x_2795_; 
v_fst_2793_ = lean_ctor_get(v_x_2791_, 0);
lean_inc(v_fst_2793_);
lean_dec_ref(v_x_2791_);
v_val_2794_ = lean_ctor_get(v_p_2792_, 0);
v___x_2795_ = l_Lean_Syntax_isOfKind(v_fst_2793_, v_val_2794_);
return v___x_2795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___lam__0___boxed(lean_object* v___x_2796_, lean_object* v_x_2797_, lean_object* v_p_2798_){
_start:
{
uint8_t v___x_123__boxed_2799_; uint8_t v_res_2800_; lean_object* v_r_2801_; 
v___x_123__boxed_2799_ = lean_unbox(v___x_2796_);
v_res_2800_ = l_Lean_Syntax_Stack_matches___lam__0(v___x_123__boxed_2799_, v_x_2797_, v_p_2798_);
lean_dec(v_p_2798_);
v_r_2801_ = lean_box(v_res_2800_);
return v_r_2801_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(lean_object* v_x_2802_){
_start:
{
if (lean_obj_tag(v_x_2802_) == 0)
{
uint8_t v___x_2803_; 
v___x_2803_ = 1;
return v___x_2803_;
}
else
{
lean_object* v_head_2804_; uint8_t v___x_2805_; 
v_head_2804_ = lean_ctor_get(v_x_2802_, 0);
v___x_2805_ = lean_unbox(v_head_2804_);
if (v___x_2805_ == 0)
{
uint8_t v___x_2806_; 
v___x_2806_ = lean_unbox(v_head_2804_);
return v___x_2806_;
}
else
{
lean_object* v_tail_2807_; 
v_tail_2807_ = lean_ctor_get(v_x_2802_, 1);
v_x_2802_ = v_tail_2807_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Syntax_Stack_matches_spec__0___boxed(lean_object* v_x_2809_){
_start:
{
uint8_t v_res_2810_; lean_object* v_r_2811_; 
v_res_2810_ = l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(v_x_2809_);
lean_dec(v_x_2809_);
v_r_2811_ = lean_box(v_res_2810_);
return v_r_2811_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches(lean_object* v_stack_2814_, lean_object* v_pattern_2815_){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; 
v___x_2816_ = l_List_lengthTR___redArg(v_pattern_2815_);
v___x_2817_ = l_List_lengthTR___redArg(v_stack_2814_);
v___x_2818_ = lean_nat_dec_le(v___x_2816_, v___x_2817_);
lean_dec(v___x_2817_);
lean_dec(v___x_2816_);
if (v___x_2818_ == 0)
{
lean_dec(v_pattern_2815_);
lean_dec(v_stack_2814_);
return v___x_2818_;
}
else
{
lean_object* v___x_2819_; lean_object* v___f_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2819_ = lean_box(v___x_2818_);
v___f_2820_ = lean_alloc_closure((void*)(l_Lean_Syntax_Stack_matches___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2820_, 0, v___x_2819_);
v___x_2821_ = ((lean_object*)(l_Lean_Syntax_Stack_matches___closed__0));
v___x_2822_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_box(0), lean_box(0), lean_box(0), v___f_2820_, v_stack_2814_, v_pattern_2815_, v___x_2821_);
v___x_2823_ = l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(v___x_2822_);
lean_dec(v___x_2822_);
return v___x_2823_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___boxed(lean_object* v_stack_2824_, lean_object* v_pattern_2825_){
_start:
{
uint8_t v_res_2826_; lean_object* v_r_2827_; 
v_res_2826_ = l_Lean_Syntax_Stack_matches(v_stack_2824_, v_pattern_2825_);
v_r_2827_ = lean_box(v_res_2826_);
return v_r_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing_x3f(lean_object* v_stx_2828_, lean_object* v_trailing_2829_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_2828_);
if (lean_obj_tag(v___x_2830_) == 1)
{
lean_object* v_val_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2866_; 
v_val_2831_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2833_ = v___x_2830_;
v_isShared_2834_ = v_isSharedCheck_2866_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_val_2831_);
lean_dec(v___x_2830_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2866_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
if (lean_obj_tag(v_val_2831_) == 0)
{
lean_object* v_trailing_2835_; lean_object* v_leading_2836_; lean_object* v_pos_2837_; lean_object* v_endPos_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2864_; 
v_trailing_2835_ = lean_ctor_get(v_val_2831_, 2);
v_leading_2836_ = lean_ctor_get(v_val_2831_, 0);
v_pos_2837_ = lean_ctor_get(v_val_2831_, 1);
v_endPos_2838_ = lean_ctor_get(v_val_2831_, 3);
v_isSharedCheck_2864_ = !lean_is_exclusive(v_val_2831_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2840_ = v_val_2831_;
v_isShared_2841_ = v_isSharedCheck_2864_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_endPos_2838_);
lean_inc(v_trailing_2835_);
lean_inc(v_pos_2837_);
lean_inc(v_leading_2836_);
lean_dec(v_val_2831_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2864_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v_str_2842_; lean_object* v_startPos_2843_; lean_object* v_stopPos_2844_; lean_object* v_startPos_2845_; lean_object* v_stopPos_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2862_; 
v_str_2842_ = lean_ctor_get(v_trailing_2835_, 0);
lean_inc_ref(v_str_2842_);
v_startPos_2843_ = lean_ctor_get(v_trailing_2835_, 1);
lean_inc(v_startPos_2843_);
v_stopPos_2844_ = lean_ctor_get(v_trailing_2835_, 2);
lean_inc(v_stopPos_2844_);
lean_dec_ref(v_trailing_2835_);
v_startPos_2845_ = lean_ctor_get(v_trailing_2829_, 1);
v_stopPos_2846_ = lean_ctor_get(v_trailing_2829_, 2);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_trailing_2829_);
if (v_isSharedCheck_2862_ == 0)
{
lean_object* v_unused_2863_; 
v_unused_2863_ = lean_ctor_get(v_trailing_2829_, 0);
lean_dec(v_unused_2863_);
v___x_2848_ = v_trailing_2829_;
v_isShared_2849_ = v_isSharedCheck_2862_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_stopPos_2846_);
lean_inc(v_startPos_2845_);
lean_dec(v_trailing_2829_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2862_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
uint8_t v_decide_2850_; 
v_decide_2850_ = lean_nat_dec_eq(v_stopPos_2844_, v_startPos_2845_);
lean_dec(v_startPos_2845_);
lean_dec(v_stopPos_2844_);
if (v_decide_2850_ == 0)
{
lean_object* v___x_2851_; 
lean_del_object(v___x_2848_);
lean_dec(v_stopPos_2846_);
lean_dec(v_startPos_2843_);
lean_dec_ref(v_str_2842_);
lean_del_object(v___x_2840_);
lean_dec(v_endPos_2838_);
lean_dec(v_pos_2837_);
lean_dec_ref(v_leading_2836_);
lean_del_object(v___x_2833_);
lean_dec(v_stx_2828_);
v___x_2851_ = lean_box(0);
return v___x_2851_;
}
else
{
lean_object* v_trailing_2853_; 
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 1, v_startPos_2843_);
lean_ctor_set(v___x_2848_, 0, v_str_2842_);
v_trailing_2853_ = v___x_2848_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_str_2842_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_startPos_2843_);
lean_ctor_set(v_reuseFailAlloc_2861_, 2, v_stopPos_2846_);
v_trailing_2853_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2855_; 
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 2, v_trailing_2853_);
v___x_2855_ = v___x_2840_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_leading_2836_);
lean_ctor_set(v_reuseFailAlloc_2860_, 1, v_pos_2837_);
lean_ctor_set(v_reuseFailAlloc_2860_, 2, v_trailing_2853_);
lean_ctor_set(v_reuseFailAlloc_2860_, 3, v_endPos_2838_);
v___x_2855_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; lean_object* v___x_2858_; 
v___x_2856_ = l_Lean_Syntax_setTailInfo(v_stx_2828_, v___x_2855_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 0, v___x_2856_);
v___x_2858_ = v___x_2833_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v___x_2856_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2865_; 
lean_del_object(v___x_2833_);
lean_dec(v_val_2831_);
lean_dec_ref(v_trailing_2829_);
lean_dec(v_stx_2828_);
v___x_2865_ = lean_box(0);
return v___x_2865_;
}
}
}
else
{
lean_object* v___x_2867_; 
lean_dec(v___x_2830_);
lean_dec_ref(v_trailing_2829_);
lean_dec(v_stx_2828_);
v___x_2867_ = lean_box(0);
return v___x_2867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing(lean_object* v_stx_2868_, lean_object* v_trailing_2869_){
_start:
{
lean_object* v___x_2870_; 
lean_inc(v_stx_2868_);
v___x_2870_ = l_Lean_Syntax_addTrailing_x3f(v_stx_2868_, v_trailing_2869_);
if (lean_obj_tag(v___x_2870_) == 0)
{
return v_stx_2868_;
}
else
{
lean_object* v_val_2871_; 
lean_dec(v_stx_2868_);
v_val_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_val_2871_);
lean_dec_ref_known(v___x_2870_, 1);
return v_val_2871_;
}
}
}
lean_object* runtime_initialize_Init_Data_Slice(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Format(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Slice(uint8_t builtin);
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Lean_Data_Format(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Data_String_Hashable(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Syntax(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lake.Build.Key
// Imports: public import Init.Data.Order import Lake.Util.Name import Init.Data.String.Search import Init.Data.Iterators.Consumers
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
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lake_Name_eraseHead(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedBuildKey_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedBuildKey_default___closed__0;
static lean_once_cell_t l_Lake_instInhabitedBuildKey_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedBuildKey_default___closed__1;
LEAN_EXPORT lean_object* l_Lake_instInhabitedBuildKey_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedBuildKey;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.BuildKey.module"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__0 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__1 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__1_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__2 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__2_value;
static lean_once_cell_t l_Lake_instReprBuildKey_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildKey_repr___closed__3;
static lean_once_cell_t l_Lake_instReprBuildKey_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildKey_repr___closed__4;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lake.BuildKey.package"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__5 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__5_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__5_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__6 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__7 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__7_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lake.BuildKey.packageModule"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__8 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__9 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__9_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__10 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__10_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lake.BuildKey.packageTarget"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__11 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__11_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__11_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__12 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__12_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__13 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__13_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lake.BuildKey.facet"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__14 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__14_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__14_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__15 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__15_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__16 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__16_value;
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprBuildKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprBuildKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprBuildKey___closed__0 = (const lean_object*)&l_Lake_instReprBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprBuildKey = (const lean_object*)&l_Lake_instReprBuildKey___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instHashableBuildKey_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_instHashableBuildKey_hash___closed__0;
static lean_once_cell_t l_Lake_instHashableBuildKey_hash___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_instHashableBuildKey_hash___closed__1;
LEAN_EXPORT uint64_t l_Lake_instHashableBuildKey_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instHashableBuildKey_hash___boxed(lean_object*);
static const lean_closure_object l_Lake_instHashableBuildKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instHashableBuildKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instHashableBuildKey___closed__0 = (const lean_object*)&l_Lake_instHashableBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instHashableBuildKey = (const lean_object*)&l_Lake_instHashableBuildKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_mk___boxed(lean_object*);
static const lean_closure_object l_Lake_PartialBuildKey_instCoeBuildKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PartialBuildKey_mk___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PartialBuildKey_instCoeBuildKey___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_instCoeBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instCoeBuildKey = (const lean_object*)&l_Lake_PartialBuildKey_instCoeBuildKey___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_instRepr___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_instRepr___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_PartialBuildKey_instRepr___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Key_0__Lake_PartialBuildKey_instRepr___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PartialBuildKey_instRepr___private__1___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_instRepr___private__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instRepr___private__1 = (const lean_object*)&l_Lake_PartialBuildKey_instRepr___private__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instRepr = (const lean_object*)&l_Lake_PartialBuildKey_instRepr___private__1___closed__0_value;
static lean_once_cell_t l_Lake_PartialBuildKey_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PartialBuildKey_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_instInhabited;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "ill-formed target: default package targets are not supported in partial build keys"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2_value;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ill-formed target: too many '/'"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1_value;
static const lean_array_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "ill-formed target: expected module name after '+'"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6;
static lean_once_cell_t l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7;
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___boxed(lean_object*);
static const lean_string_object l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lake_PartialBuildKey_parse_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ill-formed target: empty facet"};
static const lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0 = (const lean_object*)&l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0_value;
static const lean_ctor_object l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0_value)}};
static const lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1 = (const lean_object*)&l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3(lean_object*, lean_object*);
static const lean_array_object l_Lake_PartialBuildKey_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__0_value;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.Build.Key"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__1 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__1_value;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lake.PartialBuildKey.parse"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__2 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__2_value;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__3 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__3_value;
static lean_once_cell_t l_Lake_PartialBuildKey_parse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PartialBuildKey_parse___closed__4;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ill-formed target: empty string"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__5 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__5_value;
static const lean_ctor_object l_Lake_PartialBuildKey_parse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PartialBuildKey_parse___closed__5_value)}};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__6 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_parse(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName___boxed(lean_object*);
static const lean_string_object l_Lake_PartialBuildKey_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/+"};
static const lean_object* l_Lake_PartialBuildKey_toString___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_toString___closed__0_value;
static const lean_string_object l_Lake_PartialBuildKey_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lake_PartialBuildKey_toString___closed__1 = (const lean_object*)&l_Lake_PartialBuildKey_toString___closed__1_value;
static const lean_string_object l_Lake_PartialBuildKey_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake_PartialBuildKey_toString___closed__2 = (const lean_object*)&l_Lake_PartialBuildKey_toString___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
static const lean_closure_object l_Lake_PartialBuildKey_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PartialBuildKey_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PartialBuildKey_instToString___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instToString = (const lean_object*)&l_Lake_PartialBuildKey_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildKey_moduleFacet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageFacet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModuleFacet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_targetFacet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_customTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_toSimpleString(lean_object*);
static const lean_closure_object l_Lake_BuildKey_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildKey_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildKey_instToString___closed__0 = (const lean_object*)&l_Lake_BuildKey_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildKey_instToString = (const lean_object*)&l_Lake_BuildKey_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_BuildKey_quickCmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_quickCmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx(lean_object* v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
default: 
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx___boxed(lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lake_BuildKey_ctorIdx(v_x_7_);
lean_dec_ref(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___redArg(lean_object* v_t_9_, lean_object* v_k_10_){
_start:
{
switch(lean_obj_tag(v_t_9_))
{
case 2:
{
lean_object* v_package_11_; lean_object* v_module_12_; lean_object* v___x_13_; 
v_package_11_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_package_11_);
v_module_12_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_module_12_);
lean_dec_ref_known(v_t_9_, 2);
v___x_13_ = lean_apply_2(v_k_10_, v_package_11_, v_module_12_);
return v___x_13_;
}
case 3:
{
lean_object* v_package_14_; lean_object* v_target_15_; lean_object* v___x_16_; 
v_package_14_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_package_14_);
v_target_15_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_target_15_);
lean_dec_ref_known(v_t_9_, 2);
v___x_16_ = lean_apply_2(v_k_10_, v_package_14_, v_target_15_);
return v___x_16_;
}
case 4:
{
lean_object* v_target_17_; lean_object* v_facet_18_; lean_object* v___x_19_; 
v_target_17_ = lean_ctor_get(v_t_9_, 0);
lean_inc_ref(v_target_17_);
v_facet_18_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_facet_18_);
lean_dec_ref_known(v_t_9_, 2);
v___x_19_ = lean_apply_2(v_k_10_, v_target_17_, v_facet_18_);
return v___x_19_;
}
default: 
{
lean_object* v_module_20_; lean_object* v___x_21_; 
v_module_20_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_module_20_);
lean_dec_ref(v_t_9_);
v___x_21_ = lean_apply_1(v_k_10_, v_module_20_);
return v___x_21_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, lean_object* v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lake_BuildKey_ctorElim___redArg(v_t_24_, v_k_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___boxed(lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lake_BuildKey_ctorElim(v_motive_28_, v_ctorIdx_29_, v_t_30_, v_h_31_, v_k_32_);
lean_dec(v_ctorIdx_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim___redArg(lean_object* v_t_34_, lean_object* v_module_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lake_BuildKey_ctorElim___redArg(v_t_34_, v_module_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_module_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_BuildKey_ctorElim___redArg(v_t_38_, v_module_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim___redArg(lean_object* v_t_42_, lean_object* v_package_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lake_BuildKey_ctorElim___redArg(v_t_42_, v_package_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_package_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lake_BuildKey_ctorElim___redArg(v_t_46_, v_package_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim___redArg(lean_object* v_t_50_, lean_object* v_packageModule_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lake_BuildKey_ctorElim___redArg(v_t_50_, v_packageModule_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim(lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_packageModule_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lake_BuildKey_ctorElim___redArg(v_t_54_, v_packageModule_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim___redArg(lean_object* v_t_58_, lean_object* v_packageTarget_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lake_BuildKey_ctorElim___redArg(v_t_58_, v_packageTarget_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_packageTarget_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lake_BuildKey_ctorElim___redArg(v_t_62_, v_packageTarget_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim___redArg(lean_object* v_t_66_, lean_object* v_facet_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lake_BuildKey_ctorElim___redArg(v_t_66_, v_facet_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_facet_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lake_BuildKey_ctorElim___redArg(v_t_70_, v_facet_72_);
return v___x_73_;
}
}
static lean_object* _init_l_Lake_instInhabitedBuildKey_default___closed__0(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_box(0);
v___x_75_ = l_unsafeCast___redArg(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_Lake_instInhabitedBuildKey_default___closed__1(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_obj_once(&l_Lake_instInhabitedBuildKey_default___closed__0, &l_Lake_instInhabitedBuildKey_default___closed__0_once, _init_l_Lake_instInhabitedBuildKey_default___closed__0);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lake_instInhabitedBuildKey_default(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_obj_once(&l_Lake_instInhabitedBuildKey_default___closed__1, &l_Lake_instInhabitedBuildKey_default___closed__1_once, _init_l_Lake_instInhabitedBuildKey_default___closed__1);
return v___x_78_;
}
}
static lean_object* _init_l_Lake_instInhabitedBuildKey(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lake_instInhabitedBuildKey_default;
return v___x_79_;
}
}
static lean_object* _init_l_Lake_instReprBuildKey_repr___closed__3(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(2u);
v___x_87_ = lean_nat_to_int(v___x_86_);
return v___x_87_;
}
}
static lean_object* _init_l_Lake_instReprBuildKey_repr___closed__4(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_to_int(v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr(lean_object* v_x_114_, lean_object* v_prec_115_){
_start:
{
switch(lean_obj_tag(v_x_114_))
{
case 0:
{
lean_object* v_module_116_; lean_object* v___y_118_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_module_116_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_module_116_);
lean_dec_ref_known(v_x_114_, 1);
v___x_127_ = lean_unsigned_to_nat(1024u);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_prec_115_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_118_ = v___x_129_;
goto v___jp_117_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_118_ = v___x_130_;
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_119_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__2));
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = l_Lean_Name_reprPrec(v_module_116_, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
lean_inc(v___y_118_);
v___x_123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_123_, 0, v___y_118_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = 0;
v___x_125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_125_, sizeof(void*)*1, v___x_124_);
v___x_126_ = l_Repr_addAppParen(v___x_125_, v_prec_115_);
return v___x_126_;
}
}
case 1:
{
lean_object* v_package_131_; lean_object* v___y_133_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_package_131_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_package_131_);
lean_dec_ref_known(v_x_114_, 1);
v___x_142_ = lean_unsigned_to_nat(1024u);
v___x_143_ = lean_nat_dec_le(v___x_142_, v_prec_115_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_133_ = v___x_144_;
goto v___jp_132_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_134_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__7));
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Lean_Name_reprPrec(v_package_131_, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
lean_inc(v___y_133_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_133_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_115_);
return v___x_141_;
}
}
case 2:
{
lean_object* v_package_146_; lean_object* v_module_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_171_; 
v_package_146_ = lean_ctor_get(v_x_114_, 0);
v_module_147_ = lean_ctor_get(v_x_114_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_x_114_);
if (v_isSharedCheck_171_ == 0)
{
v___x_149_ = v_x_114_;
v_isShared_150_ = v_isSharedCheck_171_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_module_147_);
lean_inc(v_package_146_);
lean_dec(v_x_114_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_171_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___y_152_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(1024u);
v___x_168_ = lean_nat_dec_le(v___x_167_, v_prec_115_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_152_ = v___x_169_;
goto v___jp_151_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_152_ = v___x_170_;
goto v___jp_151_;
}
v___jp_151_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_153_ = lean_box(1);
v___x_154_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__10));
v___x_155_ = lean_unsigned_to_nat(1024u);
v___x_156_ = l_Lean_Name_reprPrec(v_package_146_, v___x_155_);
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 5);
lean_ctor_set(v___x_149_, 1, v___x_156_);
lean_ctor_set(v___x_149_, 0, v___x_154_);
v___x_158_ = v___x_149_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_156_);
v___x_158_ = v_reuseFailAlloc_166_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
lean_ctor_set(v___x_159_, 1, v___x_153_);
v___x_160_ = l_Lean_Name_reprPrec(v_module_147_, v___x_155_);
v___x_161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
lean_inc(v___y_152_);
v___x_162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_162_, 0, v___y_152_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = 0;
v___x_164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_163_);
v___x_165_ = l_Repr_addAppParen(v___x_164_, v_prec_115_);
return v___x_165_;
}
}
}
}
case 3:
{
lean_object* v_package_172_; lean_object* v_target_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_197_; 
v_package_172_ = lean_ctor_get(v_x_114_, 0);
v_target_173_ = lean_ctor_get(v_x_114_, 1);
v_isSharedCheck_197_ = !lean_is_exclusive(v_x_114_);
if (v_isSharedCheck_197_ == 0)
{
v___x_175_ = v_x_114_;
v_isShared_176_ = v_isSharedCheck_197_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_target_173_);
lean_inc(v_package_172_);
lean_dec(v_x_114_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_197_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___y_178_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(1024u);
v___x_194_ = lean_nat_dec_le(v___x_193_, v_prec_115_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_178_ = v___x_195_;
goto v___jp_177_;
}
else
{
lean_object* v___x_196_; 
v___x_196_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_178_ = v___x_196_;
goto v___jp_177_;
}
v___jp_177_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_179_ = lean_box(1);
v___x_180_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__13));
v___x_181_ = lean_unsigned_to_nat(1024u);
v___x_182_ = l_Lean_Name_reprPrec(v_package_172_, v___x_181_);
if (v_isShared_176_ == 0)
{
lean_ctor_set_tag(v___x_175_, 5);
lean_ctor_set(v___x_175_, 1, v___x_182_);
lean_ctor_set(v___x_175_, 0, v___x_180_);
v___x_184_ = v___x_175_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_180_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___x_182_);
v___x_184_ = v_reuseFailAlloc_192_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_179_);
v___x_186_ = l_Lean_Name_reprPrec(v_target_173_, v___x_181_);
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
lean_inc(v___y_178_);
v___x_188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_188_, 0, v___y_178_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = 0;
v___x_190_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set_uint8(v___x_190_, sizeof(void*)*1, v___x_189_);
v___x_191_ = l_Repr_addAppParen(v___x_190_, v_prec_115_);
return v___x_191_;
}
}
}
}
default: 
{
lean_object* v_target_198_; lean_object* v_facet_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_222_; 
v_target_198_ = lean_ctor_get(v_x_114_, 0);
v_facet_199_ = lean_ctor_get(v_x_114_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_x_114_);
if (v_isSharedCheck_222_ == 0)
{
v___x_201_ = v_x_114_;
v_isShared_202_ = v_isSharedCheck_222_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_facet_199_);
lean_inc(v_target_198_);
lean_dec(v_x_114_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_222_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___y_205_; uint8_t v___x_219_; 
v___x_203_ = lean_unsigned_to_nat(1024u);
v___x_219_ = lean_nat_dec_le(v___x_203_, v_prec_115_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_205_ = v___x_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_205_ = v___x_221_;
goto v___jp_204_;
}
v___jp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_206_ = lean_box(1);
v___x_207_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__16));
v___x_208_ = l_Lake_instReprBuildKey_repr(v_target_198_, v___x_203_);
if (v_isShared_202_ == 0)
{
lean_ctor_set_tag(v___x_201_, 5);
lean_ctor_set(v___x_201_, 1, v___x_208_);
lean_ctor_set(v___x_201_, 0, v___x_207_);
v___x_210_ = v___x_201_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v___x_208_);
v___x_210_ = v_reuseFailAlloc_218_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_206_);
v___x_212_ = l_Lean_Name_reprPrec(v_facet_199_, v___x_203_);
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
lean_inc(v___y_205_);
v___x_214_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_214_, 0, v___y_205_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = 0;
v___x_216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___x_215_);
v___x_217_ = l_Repr_addAppParen(v___x_216_, v_prec_115_);
return v___x_217_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr___boxed(lean_object* v_x_223_, lean_object* v_prec_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lake_instReprBuildKey_repr(v_x_223_, v_prec_224_);
lean_dec(v_prec_224_);
return v_res_225_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey_decEq(lean_object* v_x_228_, lean_object* v_x_229_){
_start:
{
switch(lean_obj_tag(v_x_228_))
{
case 0:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_object* v_module_230_; lean_object* v_module_231_; uint8_t v___x_232_; 
v_module_230_ = lean_ctor_get(v_x_228_, 0);
v_module_231_ = lean_ctor_get(v_x_229_, 0);
v___x_232_ = lean_name_eq(v_module_230_, v_module_231_);
return v___x_232_;
}
else
{
uint8_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
}
case 1:
{
if (lean_obj_tag(v_x_229_) == 1)
{
lean_object* v_package_234_; lean_object* v_package_235_; uint8_t v___x_236_; 
v_package_234_ = lean_ctor_get(v_x_228_, 0);
v_package_235_ = lean_ctor_get(v_x_229_, 0);
v___x_236_ = lean_name_eq(v_package_234_, v_package_235_);
return v___x_236_;
}
else
{
uint8_t v___x_237_; 
v___x_237_ = 0;
return v___x_237_;
}
}
case 2:
{
if (lean_obj_tag(v_x_229_) == 2)
{
lean_object* v_package_238_; lean_object* v_module_239_; lean_object* v_package_240_; lean_object* v_module_241_; uint8_t v___x_242_; 
v_package_238_ = lean_ctor_get(v_x_228_, 0);
v_module_239_ = lean_ctor_get(v_x_228_, 1);
v_package_240_ = lean_ctor_get(v_x_229_, 0);
v_module_241_ = lean_ctor_get(v_x_229_, 1);
v___x_242_ = lean_name_eq(v_package_238_, v_package_240_);
if (v___x_242_ == 0)
{
return v___x_242_;
}
else
{
uint8_t v___x_243_; 
v___x_243_ = lean_name_eq(v_module_239_, v_module_241_);
return v___x_243_;
}
}
else
{
uint8_t v___x_244_; 
v___x_244_ = 0;
return v___x_244_;
}
}
case 3:
{
if (lean_obj_tag(v_x_229_) == 3)
{
lean_object* v_package_245_; lean_object* v_target_246_; lean_object* v_package_247_; lean_object* v_target_248_; uint8_t v___x_249_; 
v_package_245_ = lean_ctor_get(v_x_228_, 0);
v_target_246_ = lean_ctor_get(v_x_228_, 1);
v_package_247_ = lean_ctor_get(v_x_229_, 0);
v_target_248_ = lean_ctor_get(v_x_229_, 1);
v___x_249_ = lean_name_eq(v_package_245_, v_package_247_);
if (v___x_249_ == 0)
{
return v___x_249_;
}
else
{
uint8_t v___x_250_; 
v___x_250_ = lean_name_eq(v_target_246_, v_target_248_);
return v___x_250_;
}
}
else
{
uint8_t v___x_251_; 
v___x_251_ = 0;
return v___x_251_;
}
}
default: 
{
if (lean_obj_tag(v_x_229_) == 4)
{
lean_object* v_target_252_; lean_object* v_facet_253_; lean_object* v_target_254_; lean_object* v_facet_255_; uint8_t v_inst_256_; 
v_target_252_ = lean_ctor_get(v_x_228_, 0);
v_facet_253_ = lean_ctor_get(v_x_228_, 1);
v_target_254_ = lean_ctor_get(v_x_229_, 0);
v_facet_255_ = lean_ctor_get(v_x_229_, 1);
v_inst_256_ = l_Lake_instDecidableEqBuildKey_decEq(v_target_252_, v_target_254_);
if (v_inst_256_ == 0)
{
return v_inst_256_;
}
else
{
uint8_t v___x_257_; 
v___x_257_ = lean_name_eq(v_facet_253_, v_facet_255_);
return v___x_257_;
}
}
else
{
uint8_t v___x_258_; 
v___x_258_ = 0;
return v___x_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey_decEq___boxed(lean_object* v_x_259_, lean_object* v_x_260_){
_start:
{
uint8_t v_res_261_; lean_object* v_r_262_; 
v_res_261_ = l_Lake_instDecidableEqBuildKey_decEq(v_x_259_, v_x_260_);
lean_dec_ref(v_x_260_);
lean_dec_ref(v_x_259_);
v_r_262_ = lean_box(v_res_261_);
return v_r_262_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey(lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
uint8_t v___x_265_; 
v___x_265_ = l_Lake_instDecidableEqBuildKey_decEq(v_x_263_, v_x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey___boxed(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
uint8_t v_res_268_; lean_object* v_r_269_; 
v_res_268_ = l_Lake_instDecidableEqBuildKey(v_x_266_, v_x_267_);
lean_dec_ref(v_x_267_);
lean_dec_ref(v_x_266_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
static uint64_t _init_l_Lake_instHashableBuildKey_hash___closed__0(void){
_start:
{
uint64_t v___x_270_; uint64_t v___x_271_; uint64_t v___x_272_; 
v___x_270_ = 1723ULL;
v___x_271_ = 0ULL;
v___x_272_ = lean_uint64_mix_hash(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static uint64_t _init_l_Lake_instHashableBuildKey_hash___closed__1(void){
_start:
{
uint64_t v___x_273_; uint64_t v___x_274_; uint64_t v___x_275_; 
v___x_273_ = 1723ULL;
v___x_274_ = 1ULL;
v___x_275_ = lean_uint64_mix_hash(v___x_274_, v___x_273_);
return v___x_275_;
}
}
LEAN_EXPORT uint64_t l_Lake_instHashableBuildKey_hash(lean_object* v_x_276_){
_start:
{
switch(lean_obj_tag(v_x_276_))
{
case 0:
{
lean_object* v_module_277_; uint64_t v___x_278_; lean_object* v___x_279_; 
v_module_277_ = lean_ctor_get(v_x_276_, 0);
v___x_278_ = 0ULL;
v___x_279_ = l_unsafeCast___redArg(v_module_277_);
if (lean_obj_tag(v___x_279_) == 0)
{
uint64_t v___x_280_; 
v___x_280_ = lean_uint64_once(&l_Lake_instHashableBuildKey_hash___closed__0, &l_Lake_instHashableBuildKey_hash___closed__0_once, _init_l_Lake_instHashableBuildKey_hash___closed__0);
return v___x_280_;
}
else
{
uint64_t v_hash_281_; uint64_t v___x_282_; 
v_hash_281_ = lean_ctor_get_uint64(v___x_279_, sizeof(void*)*2);
lean_dec(v___x_279_);
v___x_282_ = lean_uint64_mix_hash(v___x_278_, v_hash_281_);
return v___x_282_;
}
}
case 1:
{
lean_object* v_package_283_; uint64_t v___x_284_; lean_object* v___x_285_; 
v_package_283_ = lean_ctor_get(v_x_276_, 0);
v___x_284_ = 1ULL;
v___x_285_ = l_unsafeCast___redArg(v_package_283_);
if (lean_obj_tag(v___x_285_) == 0)
{
uint64_t v___x_286_; 
v___x_286_ = lean_uint64_once(&l_Lake_instHashableBuildKey_hash___closed__1, &l_Lake_instHashableBuildKey_hash___closed__1_once, _init_l_Lake_instHashableBuildKey_hash___closed__1);
return v___x_286_;
}
else
{
uint64_t v_hash_287_; uint64_t v___x_288_; 
v_hash_287_ = lean_ctor_get_uint64(v___x_285_, sizeof(void*)*2);
lean_dec(v___x_285_);
v___x_288_ = lean_uint64_mix_hash(v___x_284_, v_hash_287_);
return v___x_288_;
}
}
case 2:
{
lean_object* v_package_289_; lean_object* v_module_290_; uint64_t v___x_291_; uint64_t v___y_293_; lean_object* v___x_300_; 
v_package_289_ = lean_ctor_get(v_x_276_, 0);
v_module_290_ = lean_ctor_get(v_x_276_, 1);
v___x_291_ = 2ULL;
v___x_300_ = l_unsafeCast___redArg(v_package_289_);
if (lean_obj_tag(v___x_300_) == 0)
{
uint64_t v___x_301_; 
v___x_301_ = 1723ULL;
v___y_293_ = v___x_301_;
goto v___jp_292_;
}
else
{
uint64_t v_hash_302_; 
v_hash_302_ = lean_ctor_get_uint64(v___x_300_, sizeof(void*)*2);
lean_dec(v___x_300_);
v___y_293_ = v_hash_302_;
goto v___jp_292_;
}
v___jp_292_:
{
uint64_t v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_uint64_mix_hash(v___x_291_, v___y_293_);
v___x_295_ = l_unsafeCast___redArg(v_module_290_);
if (lean_obj_tag(v___x_295_) == 0)
{
uint64_t v___x_296_; uint64_t v___x_297_; 
v___x_296_ = 1723ULL;
v___x_297_ = lean_uint64_mix_hash(v___x_294_, v___x_296_);
return v___x_297_;
}
else
{
uint64_t v_hash_298_; uint64_t v___x_299_; 
v_hash_298_ = lean_ctor_get_uint64(v___x_295_, sizeof(void*)*2);
lean_dec(v___x_295_);
v___x_299_ = lean_uint64_mix_hash(v___x_294_, v_hash_298_);
return v___x_299_;
}
}
}
case 3:
{
lean_object* v_package_303_; lean_object* v_target_304_; uint64_t v___x_305_; uint64_t v___y_307_; lean_object* v___x_314_; 
v_package_303_ = lean_ctor_get(v_x_276_, 0);
v_target_304_ = lean_ctor_get(v_x_276_, 1);
v___x_305_ = 3ULL;
v___x_314_ = l_unsafeCast___redArg(v_package_303_);
if (lean_obj_tag(v___x_314_) == 0)
{
uint64_t v___x_315_; 
v___x_315_ = 1723ULL;
v___y_307_ = v___x_315_;
goto v___jp_306_;
}
else
{
uint64_t v_hash_316_; 
v_hash_316_ = lean_ctor_get_uint64(v___x_314_, sizeof(void*)*2);
lean_dec(v___x_314_);
v___y_307_ = v_hash_316_;
goto v___jp_306_;
}
v___jp_306_:
{
uint64_t v___x_308_; lean_object* v___x_309_; 
v___x_308_ = lean_uint64_mix_hash(v___x_305_, v___y_307_);
v___x_309_ = l_unsafeCast___redArg(v_target_304_);
if (lean_obj_tag(v___x_309_) == 0)
{
uint64_t v___x_310_; uint64_t v___x_311_; 
v___x_310_ = 1723ULL;
v___x_311_ = lean_uint64_mix_hash(v___x_308_, v___x_310_);
return v___x_311_;
}
else
{
uint64_t v_hash_312_; uint64_t v___x_313_; 
v_hash_312_ = lean_ctor_get_uint64(v___x_309_, sizeof(void*)*2);
lean_dec(v___x_309_);
v___x_313_ = lean_uint64_mix_hash(v___x_308_, v_hash_312_);
return v___x_313_;
}
}
}
default: 
{
lean_object* v_target_317_; lean_object* v_facet_318_; uint64_t v___x_319_; uint64_t v___x_320_; uint64_t v___x_321_; lean_object* v___x_322_; 
v_target_317_ = lean_ctor_get(v_x_276_, 0);
v_facet_318_ = lean_ctor_get(v_x_276_, 1);
v___x_319_ = 4ULL;
v___x_320_ = l_Lake_instHashableBuildKey_hash(v_target_317_);
v___x_321_ = lean_uint64_mix_hash(v___x_319_, v___x_320_);
v___x_322_ = l_unsafeCast___redArg(v_facet_318_);
if (lean_obj_tag(v___x_322_) == 0)
{
uint64_t v___x_323_; uint64_t v___x_324_; 
v___x_323_ = 1723ULL;
v___x_324_ = lean_uint64_mix_hash(v___x_321_, v___x_323_);
return v___x_324_;
}
else
{
uint64_t v_hash_325_; uint64_t v___x_326_; 
v_hash_325_ = lean_ctor_get_uint64(v___x_322_, sizeof(void*)*2);
lean_dec(v___x_322_);
v___x_326_ = lean_uint64_mix_hash(v___x_321_, v_hash_325_);
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instHashableBuildKey_hash___boxed(lean_object* v_x_327_){
_start:
{
uint64_t v_res_328_; lean_object* v_r_329_; 
v_res_328_ = l_Lake_instHashableBuildKey_hash(v_x_327_);
lean_dec_ref(v_x_327_);
v_r_329_ = lean_box_uint64(v_res_328_);
return v_r_329_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_mk(lean_object* v_key_332_){
_start:
{
lean_inc_ref(v_key_332_);
return v_key_332_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_mk___boxed(lean_object* v_key_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lake_PartialBuildKey_mk(v_key_333_);
lean_dec_ref(v_key_333_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_instRepr___aux__1(lean_object* v_x_337_, lean_object* v_prec_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lake_instReprBuildKey_repr(v_x_337_, v_prec_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_instRepr___aux__1___boxed(lean_object* v_x_340_, lean_object* v_prec_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_instRepr___aux__1(v_x_340_, v_prec_341_);
lean_dec(v_prec_341_);
return v_res_342_;
}
}
static lean_object* _init_l_Lake_PartialBuildKey_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_obj_once(&l_Lake_instInhabitedBuildKey_default___closed__0, &l_Lake_instInhabitedBuildKey_default___closed__0_once, _init_l_Lake_instInhabitedBuildKey_default___closed__0);
v___x_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l_Lake_PartialBuildKey_instInhabited(void){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lean_obj_once(&l_Lake_PartialBuildKey_instInhabited___closed__0, &l_Lake_PartialBuildKey_instInhabited___closed__0_once, _init_l_Lake_PartialBuildKey_instInhabited___closed__0);
return v___x_348_;
}
}
static lean_object* _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_351_ = lean_string_utf8_byte_size(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(lean_object* v_pkg_355_, lean_object* v_target_356_){
_start:
{
lean_object* v_str_357_; lean_object* v_startInclusive_358_; lean_object* v_endExclusive_359_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_str_357_ = lean_ctor_get(v_target_356_, 0);
v_startInclusive_358_ = lean_ctor_get(v_target_356_, 1);
v_endExclusive_359_ = lean_ctor_get(v_target_356_, 2);
v___x_365_ = lean_nat_sub(v_endExclusive_359_, v_startInclusive_358_);
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = lean_nat_dec_eq(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_368_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_369_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1);
v___x_370_ = lean_nat_dec_le(v___x_369_, v___x_365_);
lean_dec(v___x_365_);
if (v___x_370_ == 0)
{
goto v___jp_360_;
}
else
{
uint8_t v___x_371_; 
v___x_371_ = lean_string_memcmp(v_str_357_, v___x_368_, v_startInclusive_358_, v___x_366_, v___x_369_);
if (v___x_371_ == 0)
{
goto v___jp_360_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_target_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_372_ = lean_unsigned_to_nat(1u);
v___x_373_ = l_String_Slice_Pos_nextn(v_target_356_, v___x_366_, v___x_372_);
v___x_374_ = lean_nat_add(v_startInclusive_358_, v___x_373_);
lean_dec(v___x_373_);
v___x_375_ = lean_string_utf8_extract_fast(v_str_357_, v___x_374_, v_endExclusive_359_);
lean_dec(v___x_374_);
v_target_376_ = l_Lake_stringToLegalOrSimpleName(v___x_375_);
v___x_377_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_377_, 0, v_pkg_355_);
lean_ctor_set(v___x_377_, 1, v_target_376_);
v___x_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
return v___x_378_;
}
}
}
else
{
lean_object* v___x_379_; 
lean_dec(v___x_365_);
lean_dec(v_pkg_355_);
v___x_379_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3));
return v___x_379_;
}
v___jp_360_:
{
lean_object* v___x_361_; lean_object* v_target_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_361_ = lean_string_utf8_extract_fast(v_str_357_, v_startInclusive_358_, v_endExclusive_359_);
v_target_362_ = l_Lake_stringToLegalOrSimpleName(v___x_361_);
v___x_363_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_363_, 0, v_pkg_355_);
lean_ctor_set(v___x_363_, 1, v_target_362_);
v___x_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___boxed(lean_object* v_pkg_380_, lean_object* v_target_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v_pkg_380_, v_target_381_);
lean_dec_ref(v_target_381_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg(){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0));
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___boxed(lean_object* v___dummy_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg();
return v_res_388_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0(void){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg();
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0(lean_object* v_s_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___boxed(lean_object* v_s_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0(v_s_392_);
lean_dec_ref(v_s_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(lean_object* v_s_394_, lean_object* v___x_395_, lean_object* v___x_396_, lean_object* v_a_397_, lean_object* v_b_398_){
_start:
{
lean_object* v_it_400_; lean_object* v_startInclusive_401_; lean_object* v_endExclusive_402_; 
if (lean_obj_tag(v_a_397_) == 0)
{
lean_object* v_currPos_406_; lean_object* v_searcher_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_430_; 
v_currPos_406_ = lean_ctor_get(v_a_397_, 0);
v_searcher_407_ = lean_ctor_get(v_a_397_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_a_397_);
if (v_isSharedCheck_430_ == 0)
{
v___x_409_ = v_a_397_;
v_isShared_410_ = v_isSharedCheck_430_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_searcher_407_);
lean_inc(v_currPos_406_);
lean_dec(v_a_397_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_430_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
uint8_t v_decide_411_; 
v_decide_411_ = lean_nat_dec_eq(v_searcher_407_, v___x_396_);
if (v_decide_411_ == 0)
{
uint32_t v___x_412_; uint32_t v___x_413_; uint8_t v___x_414_; 
v___x_412_ = 47;
v___x_413_ = lean_string_utf8_get_fast(v_s_394_, v_searcher_407_);
v___x_414_ = lean_uint32_dec_eq(v___x_413_, v___x_412_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_415_ = lean_string_utf8_next_fast(v_s_394_, v_searcher_407_);
lean_dec(v_searcher_407_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___x_415_);
v___x_417_ = v___x_409_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_currPos_406_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v___x_415_);
v___x_417_ = v_reuseFailAlloc_419_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
v_a_397_ = v___x_417_;
goto _start;
}
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v_slice_423_; lean_object* v_nextIt_425_; 
v___x_420_ = lean_string_utf8_next_fast(v_s_394_, v_searcher_407_);
v___x_421_ = lean_nat_sub(v___x_420_, v_searcher_407_);
v___x_422_ = lean_nat_add(v_searcher_407_, v___x_421_);
lean_dec(v___x_421_);
v_slice_423_ = l_String_Slice_subslice_x21(v___x_395_, v_currPos_406_, v_searcher_407_);
lean_inc(v___x_422_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___x_422_);
lean_ctor_set(v___x_409_, 0, v___x_422_);
v_nextIt_425_ = v___x_409_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v___x_422_);
v_nextIt_425_ = v_reuseFailAlloc_428_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v_startInclusive_426_; lean_object* v_endExclusive_427_; 
v_startInclusive_426_ = lean_ctor_get(v_slice_423_, 0);
lean_inc(v_startInclusive_426_);
v_endExclusive_427_ = lean_ctor_get(v_slice_423_, 1);
lean_inc(v_endExclusive_427_);
lean_dec_ref(v_slice_423_);
v_it_400_ = v_nextIt_425_;
v_startInclusive_401_ = v_startInclusive_426_;
v_endExclusive_402_ = v_endExclusive_427_;
goto v___jp_399_;
}
}
}
else
{
lean_object* v___x_429_; 
lean_del_object(v___x_409_);
lean_dec(v_searcher_407_);
v___x_429_ = lean_box(1);
lean_inc(v___x_396_);
v_it_400_ = v___x_429_;
v_startInclusive_401_ = v_currPos_406_;
v_endExclusive_402_ = v___x_396_;
goto v___jp_399_;
}
}
}
else
{
lean_dec(v___x_396_);
lean_dec_ref(v_s_394_);
return v_b_398_;
}
v___jp_399_:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
lean_inc_ref(v_s_394_);
v___x_403_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_403_, 0, v_s_394_);
lean_ctor_set(v___x_403_, 1, v_startInclusive_401_);
lean_ctor_set(v___x_403_, 2, v_endExclusive_402_);
v___x_404_ = lean_array_push(v_b_398_, v___x_403_);
v_a_397_ = v_it_400_;
v_b_398_ = v___x_404_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg___boxed(lean_object* v_s_431_, lean_object* v___x_432_, lean_object* v___x_433_, lean_object* v_a_434_, lean_object* v_b_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(v_s_431_, v___x_432_, v___x_433_, v_a_434_, v_b_435_);
lean_dec_ref(v___x_432_);
return v_res_436_;
}
}
static lean_object* _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_447_ = lean_string_utf8_byte_size(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_obj_once(&l_Lake_PartialBuildKey_instInhabited___closed__0, &l_Lake_PartialBuildKey_instInhabited___closed__0_once, _init_l_Lake_PartialBuildKey_instInhabited___closed__0);
v___x_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget(lean_object* v_s_450_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_string_utf8_byte_size(v_s_450_);
lean_inc_ref(v_s_450_);
v___x_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_455_, 0, v_s_450_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
lean_ctor_set(v___x_455_, 2, v___x_454_);
v___x_456_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0);
v___x_457_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2));
v___x_458_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(v_s_450_, v___x_455_, v___x_454_, v___x_456_, v___x_457_);
lean_dec_ref_known(v___x_455_, 3);
v___x_459_ = lean_array_to_list(v___x_458_);
if (lean_obj_tag(v___x_459_) == 1)
{
lean_object* v_head_460_; lean_object* v_tail_461_; 
v_head_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_head_460_);
v_tail_461_ = lean_ctor_get(v___x_459_, 1);
lean_inc(v_tail_461_);
lean_dec_ref_known(v___x_459_, 2);
if (lean_obj_tag(v_tail_461_) == 0)
{
lean_object* v_str_465_; lean_object* v_startInclusive_466_; lean_object* v_endExclusive_467_; lean_object* v___x_484_; uint8_t v___x_485_; 
v_str_465_ = lean_ctor_get(v_head_460_, 0);
v_startInclusive_466_ = lean_ctor_get(v_head_460_, 1);
v_endExclusive_467_ = lean_ctor_get(v_head_460_, 2);
v___x_484_ = lean_nat_sub(v_endExclusive_467_, v_startInclusive_466_);
v___x_485_ = lean_nat_dec_eq(v___x_484_, v___x_453_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_486_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_487_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6);
v___x_488_ = lean_nat_dec_le(v___x_487_, v___x_484_);
lean_dec(v___x_484_);
if (v___x_488_ == 0)
{
goto v___jp_468_;
}
else
{
uint8_t v___x_489_; 
v___x_489_ = lean_string_memcmp(v_str_465_, v___x_486_, v_startInclusive_466_, v___x_453_, v___x_487_);
if (v___x_489_ == 0)
{
goto v___jp_468_;
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
lean_inc(v_endExclusive_467_);
lean_inc(v_startInclusive_466_);
lean_inc_ref(v_str_465_);
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = l_String_Slice_Pos_nextn(v_head_460_, v___x_453_, v___x_490_);
lean_dec(v_head_460_);
v___x_492_ = lean_nat_add(v_startInclusive_466_, v___x_491_);
lean_dec(v___x_491_);
lean_dec(v_startInclusive_466_);
v___x_493_ = lean_nat_sub(v_endExclusive_467_, v___x_492_);
v___x_494_ = lean_nat_dec_eq(v___x_493_, v___x_453_);
lean_dec(v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_495_ = lean_string_utf8_extract_fast(v_str_465_, v___x_492_, v_endExclusive_467_);
lean_dec(v_endExclusive_467_);
lean_dec(v___x_492_);
lean_dec_ref(v_str_465_);
v___x_496_ = l_Lake_stringToLegalOrSimpleName(v___x_495_);
v___x_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
v___x_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
else
{
lean_object* v___x_499_; 
lean_dec(v___x_492_);
lean_dec(v_endExclusive_467_);
lean_dec_ref(v_str_465_);
v___x_499_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7);
return v___x_499_;
}
}
}
}
else
{
lean_object* v___x_500_; 
lean_dec(v___x_484_);
lean_dec(v_head_460_);
v___x_500_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7);
return v___x_500_;
}
v___jp_468_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_469_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_470_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1);
v___x_471_ = lean_nat_sub(v_endExclusive_467_, v_startInclusive_466_);
v___x_472_ = lean_nat_dec_le(v___x_470_, v___x_471_);
lean_dec(v___x_471_);
if (v___x_472_ == 0)
{
goto v___jp_462_;
}
else
{
uint8_t v___x_473_; 
v___x_473_ = lean_string_memcmp(v_str_465_, v___x_469_, v_startInclusive_466_, v___x_453_, v___x_470_);
if (v___x_473_ == 0)
{
goto v___jp_462_;
}
else
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
lean_inc(v_endExclusive_467_);
lean_inc(v_startInclusive_466_);
lean_inc_ref(v_str_465_);
v___x_474_ = lean_unsigned_to_nat(1u);
v___x_475_ = l_String_Slice_Pos_nextn(v_head_460_, v___x_453_, v___x_474_);
lean_dec(v_head_460_);
v___x_476_ = lean_nat_add(v_startInclusive_466_, v___x_475_);
lean_dec(v___x_475_);
lean_dec(v_startInclusive_466_);
v___x_477_ = lean_nat_sub(v_endExclusive_467_, v___x_476_);
v___x_478_ = lean_nat_dec_eq(v___x_477_, v___x_453_);
lean_dec(v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_479_ = lean_string_utf8_extract_fast(v_str_465_, v___x_476_, v_endExclusive_467_);
lean_dec(v_endExclusive_467_);
lean_dec(v___x_476_);
lean_dec_ref(v_str_465_);
v___x_480_ = l_Lake_stringToLegalOrSimpleName(v___x_479_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
else
{
lean_object* v___x_483_; 
lean_dec(v___x_476_);
lean_dec(v_endExclusive_467_);
lean_dec_ref(v_str_465_);
v___x_483_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4));
return v___x_483_;
}
}
}
}
}
else
{
lean_object* v_head_501_; lean_object* v_tail_502_; lean_object* v_str_504_; lean_object* v_startInclusive_505_; lean_object* v_endExclusive_506_; 
v_head_501_ = lean_ctor_get(v_tail_461_, 0);
lean_inc(v_head_501_);
v_tail_502_ = lean_ctor_get(v_tail_461_, 1);
lean_inc(v_tail_502_);
lean_dec_ref_known(v_tail_461_, 2);
if (lean_obj_tag(v_tail_502_) == 0)
{
lean_object* v_str_514_; lean_object* v_startInclusive_515_; lean_object* v_endExclusive_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_str_514_ = lean_ctor_get(v_head_460_, 0);
lean_inc_ref(v_str_514_);
v_startInclusive_515_ = lean_ctor_get(v_head_460_, 1);
lean_inc(v_startInclusive_515_);
v_endExclusive_516_ = lean_ctor_get(v_head_460_, 2);
lean_inc(v_endExclusive_516_);
v___x_517_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_518_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6);
v___x_519_ = lean_nat_sub(v_endExclusive_516_, v_startInclusive_515_);
v___x_520_ = lean_nat_dec_le(v___x_518_, v___x_519_);
lean_dec(v___x_519_);
if (v___x_520_ == 0)
{
lean_dec(v_head_460_);
v_str_504_ = v_str_514_;
v_startInclusive_505_ = v_startInclusive_515_;
v_endExclusive_506_ = v_endExclusive_516_;
goto v___jp_503_;
}
else
{
uint8_t v___x_521_; 
v___x_521_ = lean_string_memcmp(v_str_514_, v___x_517_, v_startInclusive_515_, v___x_453_, v___x_518_);
if (v___x_521_ == 0)
{
lean_dec(v_head_460_);
v_str_504_ = v_str_514_;
v_startInclusive_505_ = v_startInclusive_515_;
v_endExclusive_506_ = v_endExclusive_516_;
goto v___jp_503_;
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_522_ = lean_unsigned_to_nat(1u);
v___x_523_ = l_String_Slice_Pos_nextn(v_head_460_, v___x_453_, v___x_522_);
lean_dec(v_head_460_);
v___x_524_ = lean_nat_add(v_startInclusive_515_, v___x_523_);
lean_dec(v___x_523_);
lean_dec(v_startInclusive_515_);
v_str_504_ = v_str_514_;
v_startInclusive_505_ = v___x_524_;
v_endExclusive_506_ = v_endExclusive_516_;
goto v___jp_503_;
}
}
}
else
{
lean_dec(v_tail_502_);
lean_dec(v_head_501_);
lean_dec(v_head_460_);
goto v___jp_451_;
}
v___jp_503_:
{
lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_507_ = lean_nat_sub(v_endExclusive_506_, v_startInclusive_505_);
v___x_508_ = lean_nat_dec_eq(v___x_507_, v___x_453_);
lean_dec(v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = lean_string_utf8_extract_fast(v_str_504_, v_startInclusive_505_, v_endExclusive_506_);
lean_dec(v_endExclusive_506_);
lean_dec(v_startInclusive_505_);
lean_dec_ref(v_str_504_);
v___x_510_ = l_Lake_stringToLegalOrSimpleName(v___x_509_);
v___x_511_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v___x_510_, v_head_501_);
lean_dec(v_head_501_);
return v___x_511_;
}
else
{
lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec(v_endExclusive_506_);
lean_dec(v_startInclusive_505_);
lean_dec_ref(v_str_504_);
v___x_512_ = lean_obj_once(&l_Lake_instInhabitedBuildKey_default___closed__0, &l_Lake_instInhabitedBuildKey_default___closed__0_once, _init_l_Lake_instInhabitedBuildKey_default___closed__0);
v___x_513_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v___x_512_, v_head_501_);
lean_dec(v_head_501_);
return v___x_513_;
}
}
}
v___jp_462_:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_obj_once(&l_Lake_instInhabitedBuildKey_default___closed__0, &l_Lake_instInhabitedBuildKey_default___closed__0_once, _init_l_Lake_instInhabitedBuildKey_default___closed__0);
v___x_464_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v___x_463_, v_head_460_);
lean_dec(v_head_460_);
return v___x_464_;
}
}
else
{
lean_dec(v___x_459_);
goto v___jp_451_;
}
v___jp_451_:
{
lean_object* v___x_452_; 
v___x_452_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1));
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1(lean_object* v_s_525_, lean_object* v___x_526_, lean_object* v___x_527_, lean_object* v_inst_528_, lean_object* v_R_529_, lean_object* v_a_530_, lean_object* v_b_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(v_s_525_, v___x_526_, v___x_527_, v_a_530_, v_b_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___boxed(lean_object* v_s_533_, lean_object* v___x_534_, lean_object* v___x_535_, lean_object* v_inst_536_, lean_object* v_R_537_, lean_object* v_a_538_, lean_object* v_b_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1(v_s_533_, v___x_534_, v___x_535_, v_inst_536_, v_R_537_, v_a_538_, v_b_539_);
lean_dec_ref(v___x_534_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg(){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0));
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg___boxed(lean_object* v___dummy_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg();
return v_res_544_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0(void){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg();
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0(lean_object* v_s_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___boxed(lean_object* v_s_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0(v_s_548_);
lean_dec_ref(v_s_548_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lake_PartialBuildKey_parse_spec__2(lean_object* v_msg_551_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = ((lean_object*)(l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0));
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
v___x_554_ = lean_panic_fn_borrowed(v___x_553_, v_msg_551_);
lean_dec_ref_known(v___x_553_, 1);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(lean_object* v_s_555_, lean_object* v___x_556_, lean_object* v___x_557_, lean_object* v_a_558_, lean_object* v_b_559_){
_start:
{
lean_object* v_it_561_; lean_object* v_startInclusive_562_; lean_object* v_endExclusive_563_; 
if (lean_obj_tag(v_a_558_) == 0)
{
lean_object* v_currPos_568_; lean_object* v_searcher_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_592_; 
v_currPos_568_ = lean_ctor_get(v_a_558_, 0);
v_searcher_569_ = lean_ctor_get(v_a_558_, 1);
v_isSharedCheck_592_ = !lean_is_exclusive(v_a_558_);
if (v_isSharedCheck_592_ == 0)
{
v___x_571_ = v_a_558_;
v_isShared_572_ = v_isSharedCheck_592_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_searcher_569_);
lean_inc(v_currPos_568_);
lean_dec(v_a_558_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_592_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v_decide_573_; 
v_decide_573_ = lean_nat_dec_eq(v_searcher_569_, v___x_557_);
if (v_decide_573_ == 0)
{
uint32_t v___x_574_; uint32_t v___x_575_; uint8_t v___x_576_; 
v___x_574_ = 58;
v___x_575_ = lean_string_utf8_get_fast(v_s_555_, v_searcher_569_);
v___x_576_ = lean_uint32_dec_eq(v___x_575_, v___x_574_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_577_ = lean_string_utf8_next_fast(v_s_555_, v_searcher_569_);
lean_dec(v_searcher_569_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 1, v___x_577_);
v___x_579_ = v___x_571_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_currPos_568_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
v_a_558_ = v___x_579_;
goto _start;
}
}
else
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v_slice_585_; lean_object* v_nextIt_587_; 
v___x_582_ = lean_string_utf8_next_fast(v_s_555_, v_searcher_569_);
v___x_583_ = lean_nat_sub(v___x_582_, v_searcher_569_);
v___x_584_ = lean_nat_add(v_searcher_569_, v___x_583_);
lean_dec(v___x_583_);
v_slice_585_ = l_String_Slice_subslice_x21(v___x_556_, v_currPos_568_, v_searcher_569_);
lean_inc(v___x_584_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 1, v___x_584_);
lean_ctor_set(v___x_571_, 0, v___x_584_);
v_nextIt_587_ = v___x_571_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v___x_584_);
v_nextIt_587_ = v_reuseFailAlloc_590_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v_startInclusive_588_; lean_object* v_endExclusive_589_; 
v_startInclusive_588_ = lean_ctor_get(v_slice_585_, 0);
lean_inc(v_startInclusive_588_);
v_endExclusive_589_ = lean_ctor_get(v_slice_585_, 1);
lean_inc(v_endExclusive_589_);
lean_dec_ref(v_slice_585_);
v_it_561_ = v_nextIt_587_;
v_startInclusive_562_ = v_startInclusive_588_;
v_endExclusive_563_ = v_endExclusive_589_;
goto v___jp_560_;
}
}
}
else
{
lean_object* v___x_591_; 
lean_del_object(v___x_571_);
lean_dec(v_searcher_569_);
v___x_591_ = lean_box(1);
lean_inc(v___x_557_);
v_it_561_ = v___x_591_;
v_startInclusive_562_ = v_currPos_568_;
v_endExclusive_563_ = v___x_557_;
goto v___jp_560_;
}
}
}
else
{
lean_dec(v___x_557_);
lean_dec_ref(v_s_555_);
return v_b_559_;
}
v___jp_560_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
lean_inc_ref(v_s_555_);
v___x_564_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_564_, 0, v_s_555_);
lean_ctor_set(v___x_564_, 1, v_startInclusive_562_);
lean_ctor_set(v___x_564_, 2, v_endExclusive_563_);
v___x_565_ = l_String_Slice_toString(v___x_564_);
lean_dec_ref_known(v___x_564_, 3);
v___x_566_ = lean_array_push(v_b_559_, v___x_565_);
v_a_558_ = v_it_561_;
v_b_559_ = v___x_566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg___boxed(lean_object* v_s_593_, lean_object* v___x_594_, lean_object* v___x_595_, lean_object* v_a_596_, lean_object* v_b_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(v_s_593_, v___x_594_, v___x_595_, v_a_596_, v_b_597_);
lean_dec_ref(v___x_594_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3(lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
if (lean_obj_tag(v_x_603_) == 0)
{
lean_object* v___x_604_; 
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v_x_602_);
return v___x_604_;
}
else
{
lean_object* v_head_605_; lean_object* v_tail_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_619_; 
v_head_605_ = lean_ctor_get(v_x_603_, 0);
v_tail_606_ = lean_ctor_get(v_x_603_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_603_);
if (v_isSharedCheck_619_ == 0)
{
v___x_608_ = v_x_603_;
v_isShared_609_ = v_isSharedCheck_619_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_tail_606_);
lean_inc(v_head_605_);
lean_dec(v_x_603_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_619_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_610_ = lean_string_utf8_byte_size(v_head_605_);
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lean_nat_dec_eq(v___x_610_, v___x_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_613_ = l_Lake_stringToLegalOrSimpleName(v_head_605_);
if (v_isShared_609_ == 0)
{
lean_ctor_set_tag(v___x_608_, 4);
lean_ctor_set(v___x_608_, 1, v___x_613_);
lean_ctor_set(v___x_608_, 0, v_x_602_);
v___x_615_ = v___x_608_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_x_602_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_613_);
v___x_615_ = v_reuseFailAlloc_617_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
v_x_602_ = v___x_615_;
v_x_603_ = v_tail_606_;
goto _start;
}
}
else
{
lean_object* v___x_618_; 
lean_del_object(v___x_608_);
lean_dec(v_tail_606_);
lean_dec(v_head_605_);
lean_dec_ref(v_x_602_);
v___x_618_ = ((lean_object*)(l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1));
return v___x_618_;
}
}
}
}
}
static lean_object* _init_l_Lake_PartialBuildKey_parse___closed__4(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_625_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__3));
v___x_626_ = lean_unsigned_to_nat(4u);
v___x_627_ = lean_unsigned_to_nat(65u);
v___x_628_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__2));
v___x_629_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__1));
v___x_630_ = l_mkPanicMessageWithDecl(v___x_629_, v___x_628_, v___x_627_, v___x_626_, v___x_625_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_parse(lean_object* v_s_634_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_635_ = lean_string_utf8_byte_size(v_s_634_);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = lean_nat_dec_eq(v___x_635_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
lean_inc_ref(v_s_634_);
v___x_638_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_638_, 0, v_s_634_);
lean_ctor_set(v___x_638_, 1, v___x_636_);
lean_ctor_set(v___x_638_, 2, v___x_635_);
v___x_639_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0);
v___x_640_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__0));
v___x_641_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(v_s_634_, v___x_638_, v___x_635_, v___x_639_, v___x_640_);
lean_dec_ref_known(v___x_638_, 3);
v___x_642_ = lean_array_to_list(v___x_641_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = lean_obj_once(&l_Lake_PartialBuildKey_parse___closed__4, &l_Lake_PartialBuildKey_parse___closed__4_once, _init_l_Lake_PartialBuildKey_parse___closed__4);
v___x_644_ = l_panic___at___00Lake_PartialBuildKey_parse_spec__2(v___x_643_);
return v___x_644_;
}
else
{
lean_object* v_head_645_; lean_object* v_tail_646_; lean_object* v___x_647_; 
v_head_645_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_head_645_);
v_tail_646_ = lean_ctor_get(v___x_642_, 1);
lean_inc(v_tail_646_);
lean_dec_ref_known(v___x_642_, 2);
v___x_647_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget(v_head_645_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_dec(v_tail_646_);
return v___x_647_;
}
else
{
lean_object* v_a_648_; lean_object* v___x_649_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_a_648_);
lean_dec_ref_known(v___x_647_, 1);
v___x_649_ = l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3(v_a_648_, v_tail_646_);
return v___x_649_;
}
}
}
else
{
lean_object* v___x_650_; 
lean_dec_ref(v_s_634_);
v___x_650_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__6));
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1(lean_object* v_s_651_, lean_object* v___x_652_, lean_object* v___x_653_, lean_object* v_inst_654_, lean_object* v_R_655_, lean_object* v_a_656_, lean_object* v_b_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(v_s_651_, v___x_652_, v___x_653_, v_a_656_, v_b_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___boxed(lean_object* v_s_659_, lean_object* v___x_660_, lean_object* v___x_661_, lean_object* v_inst_662_, lean_object* v_R_663_, lean_object* v_a_664_, lean_object* v_b_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1(v_s_659_, v___x_660_, v___x_661_, v_inst_662_, v_R_663_, v_a_664_, v_b_665_);
lean_dec_ref(v___x_660_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(lean_object* v_p_667_){
_start:
{
switch(lean_obj_tag(v_p_667_))
{
case 0:
{
return v_p_667_;
}
case 2:
{
lean_object* v_pre_668_; 
v_pre_668_ = lean_ctor_get(v_p_667_, 0);
if (lean_obj_tag(v_pre_668_) == 0)
{
return v_pre_668_;
}
else
{
lean_inc(v_pre_668_);
return v_pre_668_;
}
}
default: 
{
lean_inc(v_p_667_);
return v_p_667_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName___boxed(lean_object* v_p_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_p_669_);
lean_dec(v_p_669_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_toString(lean_object* v_x_674_){
_start:
{
switch(lean_obj_tag(v_x_674_))
{
case 0:
{
lean_object* v_module_675_; lean_object* v___x_676_; uint8_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_module_675_ = lean_ctor_get(v_x_674_, 0);
lean_inc(v_module_675_);
lean_dec_ref_known(v_x_674_, 1);
v___x_676_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_677_ = 1;
v___x_678_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_675_, v___x_677_);
v___x_679_ = lean_string_append(v___x_676_, v___x_678_);
lean_dec_ref(v___x_678_);
return v___x_679_;
}
case 1:
{
lean_object* v_package_680_; lean_object* v___x_681_; 
v_package_680_ = lean_ctor_get(v_x_674_, 0);
lean_inc(v_package_680_);
lean_dec_ref_known(v_x_674_, 1);
v___x_681_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_package_680_);
lean_dec(v_package_680_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v___x_682_; 
v___x_682_ = ((lean_object*)(l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0));
return v___x_682_;
}
else
{
lean_object* v___x_683_; uint8_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_683_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_684_ = 1;
v___x_685_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_681_, v___x_684_);
v___x_686_ = lean_string_append(v___x_683_, v___x_685_);
lean_dec_ref(v___x_685_);
return v___x_686_;
}
}
case 2:
{
lean_object* v_package_687_; lean_object* v_module_688_; lean_object* v___x_689_; 
v_package_687_ = lean_ctor_get(v_x_674_, 0);
lean_inc(v_package_687_);
v_module_688_ = lean_ctor_get(v_x_674_, 1);
lean_inc(v_module_688_);
lean_dec_ref_known(v_x_674_, 2);
v___x_689_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_package_687_);
lean_dec(v_package_687_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v___x_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_690_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_691_ = 1;
v___x_692_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_688_, v___x_691_);
v___x_693_ = lean_string_append(v___x_690_, v___x_692_);
lean_dec_ref(v___x_692_);
return v___x_693_;
}
else
{
uint8_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_694_ = 1;
v___x_695_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_689_, v___x_694_);
v___x_696_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__0));
v___x_697_ = lean_string_append(v___x_695_, v___x_696_);
v___x_698_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_688_, v___x_694_);
v___x_699_ = lean_string_append(v___x_697_, v___x_698_);
lean_dec_ref(v___x_698_);
return v___x_699_;
}
}
case 3:
{
lean_object* v_package_700_; lean_object* v_target_701_; lean_object* v___x_702_; 
v_package_700_ = lean_ctor_get(v_x_674_, 0);
lean_inc(v_package_700_);
v_target_701_ = lean_ctor_get(v_x_674_, 1);
lean_inc(v_target_701_);
lean_dec_ref_known(v_x_674_, 2);
v___x_702_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_package_700_);
lean_dec(v_package_700_);
if (lean_obj_tag(v___x_702_) == 0)
{
uint8_t v___x_703_; lean_object* v___x_704_; 
v___x_703_ = 1;
v___x_704_ = l_Lean_Name_toString(v_target_701_, v___x_703_);
return v___x_704_;
}
else
{
uint8_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_705_ = 1;
v___x_706_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_702_, v___x_705_);
v___x_707_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__1));
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
v___x_709_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_target_701_, v___x_705_);
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
lean_dec_ref(v___x_709_);
return v___x_710_;
}
}
default: 
{
lean_object* v_target_711_; lean_object* v_facet_712_; uint8_t v___x_713_; 
v_target_711_ = lean_ctor_get(v_x_674_, 0);
lean_inc_ref(v_target_711_);
v_facet_712_ = lean_ctor_get(v_x_674_, 1);
lean_inc(v_facet_712_);
lean_dec_ref_known(v_x_674_, 2);
v___x_713_ = l_Lean_Name_isAnonymous(v_facet_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_714_ = l_Lake_PartialBuildKey_toString(v_target_711_);
v___x_715_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__2));
v___x_716_ = lean_string_append(v___x_714_, v___x_715_);
v___x_717_ = 1;
v___x_718_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_facet_712_, v___x_717_);
v___x_719_ = lean_string_append(v___x_716_, v___x_718_);
lean_dec_ref(v___x_718_);
return v___x_719_;
}
else
{
lean_dec(v_facet_712_);
v_x_674_ = v_target_711_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_moduleFacet(lean_object* v_module_723_, lean_object* v_facet_724_){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v_module_723_);
v___x_726_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v_facet_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageFacet(lean_object* v_package_727_, lean_object* v_facet_728_){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v_package_727_);
v___x_730_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
lean_ctor_set(v___x_730_, 1, v_facet_728_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModuleFacet(lean_object* v_package_731_, lean_object* v_module_732_, lean_object* v_facet_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_734_, 0, v_package_731_);
lean_ctor_set(v___x_734_, 1, v_module_732_);
v___x_735_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
lean_ctor_set(v___x_735_, 1, v_facet_733_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_targetFacet(lean_object* v_package_736_, lean_object* v_target_737_, lean_object* v_facet_738_){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_739_, 0, v_package_736_);
lean_ctor_set(v___x_739_, 1, v_target_737_);
v___x_740_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v_facet_738_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_customTarget(lean_object* v_package_741_, lean_object* v_target_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_743_, 0, v_package_741_);
lean_ctor_set(v___x_743_, 1, v_target_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_toString(lean_object* v_x_744_){
_start:
{
switch(lean_obj_tag(v_x_744_))
{
case 0:
{
lean_object* v_module_745_; lean_object* v___x_746_; uint8_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v_module_745_ = lean_ctor_get(v_x_744_, 0);
lean_inc(v_module_745_);
lean_dec_ref_known(v_x_744_, 1);
v___x_746_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_747_ = 1;
v___x_748_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_745_, v___x_747_);
v___x_749_ = lean_string_append(v___x_746_, v___x_748_);
lean_dec_ref(v___x_748_);
return v___x_749_;
}
case 1:
{
lean_object* v_package_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_package_750_ = lean_ctor_get(v_x_744_, 0);
lean_inc(v_package_750_);
lean_dec_ref_known(v_x_744_, 1);
v___x_751_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_752_ = l_Lean_Name_getPrefix(v_package_750_);
lean_dec(v_package_750_);
v___x_753_ = 1;
v___x_754_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_752_, v___x_753_);
v___x_755_ = lean_string_append(v___x_751_, v___x_754_);
lean_dec_ref(v___x_754_);
return v___x_755_;
}
case 2:
{
lean_object* v_package_756_; lean_object* v_module_757_; lean_object* v___x_758_; uint8_t v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_package_756_ = lean_ctor_get(v_x_744_, 0);
lean_inc(v_package_756_);
v_module_757_ = lean_ctor_get(v_x_744_, 1);
lean_inc(v_module_757_);
lean_dec_ref_known(v_x_744_, 2);
v___x_758_ = l_Lean_Name_getPrefix(v_package_756_);
lean_dec(v_package_756_);
v___x_759_ = 1;
v___x_760_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_758_, v___x_759_);
v___x_761_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__0));
v___x_762_ = lean_string_append(v___x_760_, v___x_761_);
v___x_763_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_757_, v___x_759_);
v___x_764_ = lean_string_append(v___x_762_, v___x_763_);
lean_dec_ref(v___x_763_);
return v___x_764_;
}
case 3:
{
lean_object* v_package_765_; lean_object* v_target_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_package_765_ = lean_ctor_get(v_x_744_, 0);
lean_inc(v_package_765_);
v_target_766_ = lean_ctor_get(v_x_744_, 1);
lean_inc(v_target_766_);
lean_dec_ref_known(v_x_744_, 2);
v___x_767_ = l_Lean_Name_getPrefix(v_package_765_);
lean_dec(v_package_765_);
v___x_768_ = 1;
v___x_769_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_767_, v___x_768_);
v___x_770_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__1));
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
v___x_772_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_target_766_, v___x_768_);
v___x_773_ = lean_string_append(v___x_771_, v___x_772_);
lean_dec_ref(v___x_772_);
return v___x_773_;
}
default: 
{
lean_object* v_target_774_; lean_object* v_facet_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_target_774_ = lean_ctor_get(v_x_744_, 0);
lean_inc_ref(v_target_774_);
v_facet_775_ = lean_ctor_get(v_x_744_, 1);
lean_inc(v_facet_775_);
lean_dec_ref_known(v_x_744_, 2);
v___x_776_ = l_Lake_BuildKey_toString(v_target_774_);
v___x_777_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__2));
v___x_778_ = lean_string_append(v___x_776_, v___x_777_);
v___x_779_ = l_Lake_Name_eraseHead(v_facet_775_);
v___x_780_ = 1;
v___x_781_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_779_, v___x_780_);
v___x_782_ = lean_string_append(v___x_778_, v___x_781_);
lean_dec_ref(v___x_781_);
return v___x_782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_toSimpleString(lean_object* v_x_783_){
_start:
{
lean_object* v_p_785_; lean_object* v_m_786_; 
switch(lean_obj_tag(v_x_783_))
{
case 0:
{
lean_object* v_module_794_; uint8_t v___x_795_; lean_object* v___x_796_; 
v_module_794_ = lean_ctor_get(v_x_783_, 0);
lean_inc(v_module_794_);
lean_dec_ref_known(v_x_783_, 1);
v___x_795_ = 1;
v___x_796_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_794_, v___x_795_);
return v___x_796_;
}
case 1:
{
lean_object* v_package_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; 
v_package_797_ = lean_ctor_get(v_x_783_, 0);
lean_inc(v_package_797_);
lean_dec_ref_known(v_x_783_, 1);
v___x_798_ = l_Lean_Name_getPrefix(v_package_797_);
lean_dec(v_package_797_);
v___x_799_ = 1;
v___x_800_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_798_, v___x_799_);
return v___x_800_;
}
case 4:
{
lean_object* v_target_801_; lean_object* v_facet_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v_target_801_ = lean_ctor_get(v_x_783_, 0);
lean_inc_ref(v_target_801_);
v_facet_802_ = lean_ctor_get(v_x_783_, 1);
lean_inc(v_facet_802_);
lean_dec_ref_known(v_x_783_, 2);
v___x_803_ = l_Lake_BuildKey_toSimpleString(v_target_801_);
v___x_804_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__2));
v___x_805_ = lean_string_append(v___x_803_, v___x_804_);
v___x_806_ = l_Lake_Name_eraseHead(v_facet_802_);
v___x_807_ = 1;
v___x_808_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_806_, v___x_807_);
v___x_809_ = lean_string_append(v___x_805_, v___x_808_);
lean_dec_ref(v___x_808_);
return v___x_809_;
}
default: 
{
lean_object* v_package_810_; lean_object* v_module_811_; 
v_package_810_ = lean_ctor_get(v_x_783_, 0);
lean_inc(v_package_810_);
v_module_811_ = lean_ctor_get(v_x_783_, 1);
lean_inc(v_module_811_);
lean_dec_ref(v_x_783_);
v_p_785_ = v_package_810_;
v_m_786_ = v_module_811_;
goto v___jp_784_;
}
}
v___jp_784_:
{
lean_object* v___x_787_; uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_787_ = l_Lean_Name_getPrefix(v_p_785_);
lean_dec(v_p_785_);
v___x_788_ = 1;
v___x_789_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_787_, v___x_788_);
v___x_790_ = ((lean_object*)(l_Lake_PartialBuildKey_toString___closed__1));
v___x_791_ = lean_string_append(v___x_789_, v___x_790_);
v___x_792_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_m_786_, v___x_788_);
v___x_793_ = lean_string_append(v___x_791_, v___x_792_);
lean_dec_ref(v___x_792_);
return v___x_793_;
}
}
}
LEAN_EXPORT uint8_t l_Lake_BuildKey_quickCmp(lean_object* v_k_814_, lean_object* v_k_x27_815_){
_start:
{
switch(lean_obj_tag(v_k_814_))
{
case 0:
{
if (lean_obj_tag(v_k_x27_815_) == 0)
{
lean_object* v_module_816_; lean_object* v_module_817_; uint8_t v___x_818_; 
v_module_816_ = lean_ctor_get(v_k_814_, 0);
v_module_817_ = lean_ctor_get(v_k_x27_815_, 0);
v___x_818_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_module_816_, v_module_817_);
return v___x_818_;
}
else
{
uint8_t v___x_819_; 
v___x_819_ = 0;
return v___x_819_;
}
}
case 1:
{
switch(lean_obj_tag(v_k_x27_815_))
{
case 0:
{
uint8_t v___x_820_; 
v___x_820_ = 2;
return v___x_820_;
}
case 1:
{
lean_object* v_package_821_; lean_object* v_package_822_; uint8_t v___x_823_; 
v_package_821_ = lean_ctor_get(v_k_814_, 0);
v_package_822_ = lean_ctor_get(v_k_x27_815_, 0);
v___x_823_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_package_821_, v_package_822_);
return v___x_823_;
}
default: 
{
uint8_t v___x_824_; 
v___x_824_ = 0;
return v___x_824_;
}
}
}
case 2:
{
switch(lean_obj_tag(v_k_x27_815_))
{
case 4:
{
uint8_t v___x_825_; 
v___x_825_ = 0;
return v___x_825_;
}
case 3:
{
uint8_t v___x_826_; 
v___x_826_ = 0;
return v___x_826_;
}
case 2:
{
lean_object* v_package_827_; lean_object* v_module_828_; lean_object* v_package_829_; lean_object* v_module_830_; uint8_t v___x_831_; 
v_package_827_ = lean_ctor_get(v_k_814_, 0);
v_module_828_ = lean_ctor_get(v_k_814_, 1);
v_package_829_ = lean_ctor_get(v_k_x27_815_, 0);
v_module_830_ = lean_ctor_get(v_k_x27_815_, 1);
v___x_831_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_module_828_, v_module_830_);
if (v___x_831_ == 1)
{
uint8_t v___x_832_; 
v___x_832_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_package_827_, v_package_829_);
return v___x_832_;
}
else
{
return v___x_831_;
}
}
default: 
{
uint8_t v___x_833_; 
v___x_833_ = 2;
return v___x_833_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_k_x27_815_))
{
case 4:
{
uint8_t v___x_834_; 
v___x_834_ = 0;
return v___x_834_;
}
case 3:
{
lean_object* v_package_835_; lean_object* v_target_836_; lean_object* v_package_837_; lean_object* v_target_838_; uint8_t v___x_839_; 
v_package_835_ = lean_ctor_get(v_k_814_, 0);
v_target_836_ = lean_ctor_get(v_k_814_, 1);
v_package_837_ = lean_ctor_get(v_k_x27_815_, 0);
v_target_838_ = lean_ctor_get(v_k_x27_815_, 1);
v___x_839_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_package_835_, v_package_837_);
if (v___x_839_ == 1)
{
uint8_t v___x_840_; 
v___x_840_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_target_836_, v_target_838_);
return v___x_840_;
}
else
{
return v___x_839_;
}
}
default: 
{
uint8_t v___x_841_; 
v___x_841_ = 2;
return v___x_841_;
}
}
}
default: 
{
if (lean_obj_tag(v_k_x27_815_) == 4)
{
lean_object* v_target_842_; lean_object* v_facet_843_; lean_object* v_target_844_; lean_object* v_facet_845_; uint8_t v___x_846_; 
v_target_842_ = lean_ctor_get(v_k_814_, 0);
v_facet_843_ = lean_ctor_get(v_k_814_, 1);
v_target_844_ = lean_ctor_get(v_k_x27_815_, 0);
v_facet_845_ = lean_ctor_get(v_k_x27_815_, 1);
v___x_846_ = l_Lake_BuildKey_quickCmp(v_target_842_, v_target_844_);
if (v___x_846_ == 1)
{
uint8_t v___x_847_; 
v___x_847_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_facet_843_, v_facet_845_);
return v___x_847_;
}
else
{
return v___x_846_;
}
}
else
{
uint8_t v___x_848_; 
v___x_848_ = 2;
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_quickCmp___boxed(lean_object* v_k_849_, lean_object* v_k_x27_850_){
_start:
{
uint8_t v_res_851_; lean_object* v_r_852_; 
v_res_851_ = l_Lake_BuildKey_quickCmp(v_k_849_, v_k_x27_850_);
lean_dec_ref(v_k_x27_850_);
lean_dec_ref(v_k_849_);
v_r_852_ = lean_box(v_res_851_);
return v_r_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter___redArg(lean_object* v_x_853_, lean_object* v_h__1_854_, lean_object* v_h__2_855_, lean_object* v_h__3_856_, lean_object* v_h__4_857_, lean_object* v_h__5_858_){
_start:
{
switch(lean_obj_tag(v_x_853_))
{
case 0:
{
lean_object* v_module_859_; lean_object* v___x_860_; 
lean_dec(v_h__5_858_);
lean_dec(v_h__4_857_);
lean_dec(v_h__3_856_);
lean_dec(v_h__2_855_);
v_module_859_ = lean_ctor_get(v_x_853_, 0);
lean_inc(v_module_859_);
lean_dec_ref_known(v_x_853_, 1);
v___x_860_ = lean_apply_1(v_h__1_854_, v_module_859_);
return v___x_860_;
}
case 1:
{
lean_object* v_package_861_; lean_object* v___x_862_; 
lean_dec(v_h__5_858_);
lean_dec(v_h__4_857_);
lean_dec(v_h__3_856_);
lean_dec(v_h__1_854_);
v_package_861_ = lean_ctor_get(v_x_853_, 0);
lean_inc(v_package_861_);
lean_dec_ref_known(v_x_853_, 1);
v___x_862_ = lean_apply_1(v_h__2_855_, v_package_861_);
return v___x_862_;
}
case 2:
{
lean_object* v_package_863_; lean_object* v_module_864_; lean_object* v___x_865_; 
lean_dec(v_h__5_858_);
lean_dec(v_h__4_857_);
lean_dec(v_h__2_855_);
lean_dec(v_h__1_854_);
v_package_863_ = lean_ctor_get(v_x_853_, 0);
lean_inc(v_package_863_);
v_module_864_ = lean_ctor_get(v_x_853_, 1);
lean_inc(v_module_864_);
lean_dec_ref_known(v_x_853_, 2);
v___x_865_ = lean_apply_2(v_h__3_856_, v_package_863_, v_module_864_);
return v___x_865_;
}
case 3:
{
lean_object* v_package_866_; lean_object* v_target_867_; lean_object* v___x_868_; 
lean_dec(v_h__5_858_);
lean_dec(v_h__3_856_);
lean_dec(v_h__2_855_);
lean_dec(v_h__1_854_);
v_package_866_ = lean_ctor_get(v_x_853_, 0);
lean_inc(v_package_866_);
v_target_867_ = lean_ctor_get(v_x_853_, 1);
lean_inc(v_target_867_);
lean_dec_ref_known(v_x_853_, 2);
v___x_868_ = lean_apply_2(v_h__4_857_, v_package_866_, v_target_867_);
return v___x_868_;
}
default: 
{
lean_object* v_target_869_; lean_object* v_facet_870_; lean_object* v___x_871_; 
lean_dec(v_h__4_857_);
lean_dec(v_h__3_856_);
lean_dec(v_h__2_855_);
lean_dec(v_h__1_854_);
v_target_869_ = lean_ctor_get(v_x_853_, 0);
lean_inc_ref(v_target_869_);
v_facet_870_ = lean_ctor_get(v_x_853_, 1);
lean_inc(v_facet_870_);
lean_dec_ref_known(v_x_853_, 2);
v___x_871_ = lean_apply_2(v_h__5_858_, v_target_869_, v_facet_870_);
return v___x_871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter(lean_object* v_motive_872_, lean_object* v_x_873_, lean_object* v_h__1_874_, lean_object* v_h__2_875_, lean_object* v_h__3_876_, lean_object* v_h__4_877_, lean_object* v_h__5_878_){
_start:
{
switch(lean_obj_tag(v_x_873_))
{
case 0:
{
lean_object* v_module_879_; lean_object* v___x_880_; 
lean_dec(v_h__5_878_);
lean_dec(v_h__4_877_);
lean_dec(v_h__3_876_);
lean_dec(v_h__2_875_);
v_module_879_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_module_879_);
lean_dec_ref_known(v_x_873_, 1);
v___x_880_ = lean_apply_1(v_h__1_874_, v_module_879_);
return v___x_880_;
}
case 1:
{
lean_object* v_package_881_; lean_object* v___x_882_; 
lean_dec(v_h__5_878_);
lean_dec(v_h__4_877_);
lean_dec(v_h__3_876_);
lean_dec(v_h__1_874_);
v_package_881_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_package_881_);
lean_dec_ref_known(v_x_873_, 1);
v___x_882_ = lean_apply_1(v_h__2_875_, v_package_881_);
return v___x_882_;
}
case 2:
{
lean_object* v_package_883_; lean_object* v_module_884_; lean_object* v___x_885_; 
lean_dec(v_h__5_878_);
lean_dec(v_h__4_877_);
lean_dec(v_h__2_875_);
lean_dec(v_h__1_874_);
v_package_883_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_package_883_);
v_module_884_ = lean_ctor_get(v_x_873_, 1);
lean_inc(v_module_884_);
lean_dec_ref_known(v_x_873_, 2);
v___x_885_ = lean_apply_2(v_h__3_876_, v_package_883_, v_module_884_);
return v___x_885_;
}
case 3:
{
lean_object* v_package_886_; lean_object* v_target_887_; lean_object* v___x_888_; 
lean_dec(v_h__5_878_);
lean_dec(v_h__3_876_);
lean_dec(v_h__2_875_);
lean_dec(v_h__1_874_);
v_package_886_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_package_886_);
v_target_887_ = lean_ctor_get(v_x_873_, 1);
lean_inc(v_target_887_);
lean_dec_ref_known(v_x_873_, 2);
v___x_888_ = lean_apply_2(v_h__4_877_, v_package_886_, v_target_887_);
return v___x_888_;
}
default: 
{
lean_object* v_target_889_; lean_object* v_facet_890_; lean_object* v___x_891_; 
lean_dec(v_h__4_877_);
lean_dec(v_h__3_876_);
lean_dec(v_h__2_875_);
lean_dec(v_h__1_874_);
v_target_889_ = lean_ctor_get(v_x_873_, 0);
lean_inc_ref(v_target_889_);
v_facet_890_ = lean_ctor_get(v_x_873_, 1);
lean_inc(v_facet_890_);
lean_dec_ref_known(v_x_873_, 2);
v___x_891_ = lean_apply_2(v_h__5_878_, v_target_889_, v_facet_890_);
return v___x_891_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter___redArg(lean_object* v_k_x27_892_, lean_object* v_h__1_893_, lean_object* v_h__2_894_){
_start:
{
if (lean_obj_tag(v_k_x27_892_) == 0)
{
lean_object* v_module_895_; lean_object* v___x_896_; 
lean_dec(v_h__2_894_);
v_module_895_ = lean_ctor_get(v_k_x27_892_, 0);
lean_inc(v_module_895_);
lean_dec_ref_known(v_k_x27_892_, 1);
v___x_896_ = lean_apply_1(v_h__1_893_, v_module_895_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; 
lean_dec(v_h__1_893_);
v___x_897_ = lean_apply_2(v_h__2_894_, v_k_x27_892_, lean_box(0));
return v___x_897_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter(lean_object* v_motive_898_, lean_object* v_k_x27_899_, lean_object* v_h__1_900_, lean_object* v_h__2_901_){
_start:
{
if (lean_obj_tag(v_k_x27_899_) == 0)
{
lean_object* v_module_902_; lean_object* v___x_903_; 
lean_dec(v_h__2_901_);
v_module_902_ = lean_ctor_get(v_k_x27_899_, 0);
lean_inc(v_module_902_);
lean_dec_ref_known(v_k_x27_899_, 1);
v___x_903_ = lean_apply_1(v_h__1_900_, v_module_902_);
return v___x_903_;
}
else
{
lean_object* v___x_904_; 
lean_dec(v_h__1_900_);
v___x_904_ = lean_apply_2(v_h__2_901_, v_k_x27_899_, lean_box(0));
return v___x_904_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter___redArg(lean_object* v_k_x27_905_, lean_object* v_h__1_906_, lean_object* v_h__2_907_, lean_object* v_h__3_908_){
_start:
{
switch(lean_obj_tag(v_k_x27_905_))
{
case 0:
{
lean_object* v_module_909_; lean_object* v___x_910_; 
lean_dec(v_h__3_908_);
lean_dec(v_h__2_907_);
v_module_909_ = lean_ctor_get(v_k_x27_905_, 0);
lean_inc(v_module_909_);
lean_dec_ref_known(v_k_x27_905_, 1);
v___x_910_ = lean_apply_1(v_h__1_906_, v_module_909_);
return v___x_910_;
}
case 1:
{
lean_object* v_package_911_; lean_object* v___x_912_; 
lean_dec(v_h__3_908_);
lean_dec(v_h__1_906_);
v_package_911_ = lean_ctor_get(v_k_x27_905_, 0);
lean_inc(v_package_911_);
lean_dec_ref_known(v_k_x27_905_, 1);
v___x_912_ = lean_apply_1(v_h__2_907_, v_package_911_);
return v___x_912_;
}
default: 
{
lean_object* v___x_913_; 
lean_dec(v_h__2_907_);
lean_dec(v_h__1_906_);
v___x_913_ = lean_apply_3(v_h__3_908_, v_k_x27_905_, lean_box(0), lean_box(0));
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter(lean_object* v_motive_914_, lean_object* v_k_x27_915_, lean_object* v_h__1_916_, lean_object* v_h__2_917_, lean_object* v_h__3_918_){
_start:
{
switch(lean_obj_tag(v_k_x27_915_))
{
case 0:
{
lean_object* v_module_919_; lean_object* v___x_920_; 
lean_dec(v_h__3_918_);
lean_dec(v_h__2_917_);
v_module_919_ = lean_ctor_get(v_k_x27_915_, 0);
lean_inc(v_module_919_);
lean_dec_ref_known(v_k_x27_915_, 1);
v___x_920_ = lean_apply_1(v_h__1_916_, v_module_919_);
return v___x_920_;
}
case 1:
{
lean_object* v_package_921_; lean_object* v___x_922_; 
lean_dec(v_h__3_918_);
lean_dec(v_h__1_916_);
v_package_921_ = lean_ctor_get(v_k_x27_915_, 0);
lean_inc(v_package_921_);
lean_dec_ref_known(v_k_x27_915_, 1);
v___x_922_ = lean_apply_1(v_h__2_917_, v_package_921_);
return v___x_922_;
}
default: 
{
lean_object* v___x_923_; 
lean_dec(v_h__2_917_);
lean_dec(v_h__1_916_);
v___x_923_ = lean_apply_3(v_h__3_918_, v_k_x27_915_, lean_box(0), lean_box(0));
return v___x_923_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter___redArg(lean_object* v_k_x27_924_, lean_object* v_h__1_925_, lean_object* v_h__2_926_, lean_object* v_h__3_927_, lean_object* v_h__4_928_){
_start:
{
switch(lean_obj_tag(v_k_x27_924_))
{
case 4:
{
lean_object* v_target_929_; lean_object* v_facet_930_; lean_object* v___x_931_; 
lean_dec(v_h__4_928_);
lean_dec(v_h__3_927_);
lean_dec(v_h__2_926_);
v_target_929_ = lean_ctor_get(v_k_x27_924_, 0);
lean_inc_ref(v_target_929_);
v_facet_930_ = lean_ctor_get(v_k_x27_924_, 1);
lean_inc(v_facet_930_);
lean_dec_ref_known(v_k_x27_924_, 2);
v___x_931_ = lean_apply_2(v_h__1_925_, v_target_929_, v_facet_930_);
return v___x_931_;
}
case 3:
{
lean_object* v_package_932_; lean_object* v_target_933_; lean_object* v___x_934_; 
lean_dec(v_h__4_928_);
lean_dec(v_h__3_927_);
lean_dec(v_h__1_925_);
v_package_932_ = lean_ctor_get(v_k_x27_924_, 0);
lean_inc(v_package_932_);
v_target_933_ = lean_ctor_get(v_k_x27_924_, 1);
lean_inc(v_target_933_);
lean_dec_ref_known(v_k_x27_924_, 2);
v___x_934_ = lean_apply_2(v_h__2_926_, v_package_932_, v_target_933_);
return v___x_934_;
}
case 2:
{
lean_object* v_package_935_; lean_object* v_module_936_; lean_object* v___x_937_; 
lean_dec(v_h__4_928_);
lean_dec(v_h__2_926_);
lean_dec(v_h__1_925_);
v_package_935_ = lean_ctor_get(v_k_x27_924_, 0);
lean_inc(v_package_935_);
v_module_936_ = lean_ctor_get(v_k_x27_924_, 1);
lean_inc(v_module_936_);
lean_dec_ref_known(v_k_x27_924_, 2);
v___x_937_ = lean_apply_2(v_h__3_927_, v_package_935_, v_module_936_);
return v___x_937_;
}
default: 
{
lean_object* v___x_938_; 
lean_dec(v_h__3_927_);
lean_dec(v_h__2_926_);
lean_dec(v_h__1_925_);
v___x_938_ = lean_apply_4(v_h__4_928_, v_k_x27_924_, lean_box(0), lean_box(0), lean_box(0));
return v___x_938_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter(lean_object* v_motive_939_, lean_object* v_k_x27_940_, lean_object* v_h__1_941_, lean_object* v_h__2_942_, lean_object* v_h__3_943_, lean_object* v_h__4_944_){
_start:
{
switch(lean_obj_tag(v_k_x27_940_))
{
case 4:
{
lean_object* v_target_945_; lean_object* v_facet_946_; lean_object* v___x_947_; 
lean_dec(v_h__4_944_);
lean_dec(v_h__3_943_);
lean_dec(v_h__2_942_);
v_target_945_ = lean_ctor_get(v_k_x27_940_, 0);
lean_inc_ref(v_target_945_);
v_facet_946_ = lean_ctor_get(v_k_x27_940_, 1);
lean_inc(v_facet_946_);
lean_dec_ref_known(v_k_x27_940_, 2);
v___x_947_ = lean_apply_2(v_h__1_941_, v_target_945_, v_facet_946_);
return v___x_947_;
}
case 3:
{
lean_object* v_package_948_; lean_object* v_target_949_; lean_object* v___x_950_; 
lean_dec(v_h__4_944_);
lean_dec(v_h__3_943_);
lean_dec(v_h__1_941_);
v_package_948_ = lean_ctor_get(v_k_x27_940_, 0);
lean_inc(v_package_948_);
v_target_949_ = lean_ctor_get(v_k_x27_940_, 1);
lean_inc(v_target_949_);
lean_dec_ref_known(v_k_x27_940_, 2);
v___x_950_ = lean_apply_2(v_h__2_942_, v_package_948_, v_target_949_);
return v___x_950_;
}
case 2:
{
lean_object* v_package_951_; lean_object* v_module_952_; lean_object* v___x_953_; 
lean_dec(v_h__4_944_);
lean_dec(v_h__2_942_);
lean_dec(v_h__1_941_);
v_package_951_ = lean_ctor_get(v_k_x27_940_, 0);
lean_inc(v_package_951_);
v_module_952_ = lean_ctor_get(v_k_x27_940_, 1);
lean_inc(v_module_952_);
lean_dec_ref_known(v_k_x27_940_, 2);
v___x_953_ = lean_apply_2(v_h__3_943_, v_package_951_, v_module_952_);
return v___x_953_;
}
default: 
{
lean_object* v___x_954_; 
lean_dec(v_h__3_943_);
lean_dec(v_h__2_942_);
lean_dec(v_h__1_941_);
v___x_954_ = lean_apply_4(v_h__4_944_, v_k_x27_940_, lean_box(0), lean_box(0), lean_box(0));
return v___x_954_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg(uint8_t v_x_955_, lean_object* v_h__1_956_, lean_object* v_h__2_957_){
_start:
{
if (v_x_955_ == 1)
{
lean_object* v___x_958_; lean_object* v___x_959_; 
lean_dec(v_h__2_957_);
v___x_958_ = lean_box(0);
v___x_959_ = lean_apply_1(v_h__1_956_, v___x_958_);
return v___x_959_;
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; 
lean_dec(v_h__1_956_);
v___x_960_ = lean_box(v_x_955_);
v___x_961_ = lean_apply_2(v_h__2_957_, v___x_960_, lean_box(0));
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg___boxed(lean_object* v_x_962_, lean_object* v_h__1_963_, lean_object* v_h__2_964_){
_start:
{
uint8_t v_x_13__boxed_965_; lean_object* v_res_966_; 
v_x_13__boxed_965_ = lean_unbox(v_x_962_);
v_res_966_ = l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg(v_x_13__boxed_965_, v_h__1_963_, v_h__2_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter(lean_object* v_motive_967_, uint8_t v_x_968_, lean_object* v_h__1_969_, lean_object* v_h__2_970_){
_start:
{
if (v_x_968_ == 1)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_dec(v_h__2_970_);
v___x_971_ = lean_box(0);
v___x_972_ = lean_apply_1(v_h__1_969_, v___x_971_);
return v___x_972_;
}
else
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec(v_h__1_969_);
v___x_973_ = lean_box(v_x_968_);
v___x_974_ = lean_apply_2(v_h__2_970_, v___x_973_, lean_box(0));
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___boxed(lean_object* v_motive_975_, lean_object* v_x_976_, lean_object* v_h__1_977_, lean_object* v_h__2_978_){
_start:
{
uint8_t v_x_24__boxed_979_; lean_object* v_res_980_; 
v_x_24__boxed_979_ = lean_unbox(v_x_976_);
v_res_980_ = l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter(v_motive_975_, v_x_24__boxed_979_, v_h__1_977_, v_h__2_978_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter___redArg(lean_object* v_k_x27_981_, lean_object* v_h__1_982_, lean_object* v_h__2_983_, lean_object* v_h__3_984_){
_start:
{
switch(lean_obj_tag(v_k_x27_981_))
{
case 4:
{
lean_object* v_target_985_; lean_object* v_facet_986_; lean_object* v___x_987_; 
lean_dec(v_h__3_984_);
lean_dec(v_h__2_983_);
v_target_985_ = lean_ctor_get(v_k_x27_981_, 0);
lean_inc_ref(v_target_985_);
v_facet_986_ = lean_ctor_get(v_k_x27_981_, 1);
lean_inc(v_facet_986_);
lean_dec_ref_known(v_k_x27_981_, 2);
v___x_987_ = lean_apply_2(v_h__1_982_, v_target_985_, v_facet_986_);
return v___x_987_;
}
case 3:
{
lean_object* v_package_988_; lean_object* v_target_989_; lean_object* v___x_990_; 
lean_dec(v_h__3_984_);
lean_dec(v_h__1_982_);
v_package_988_ = lean_ctor_get(v_k_x27_981_, 0);
lean_inc(v_package_988_);
v_target_989_ = lean_ctor_get(v_k_x27_981_, 1);
lean_inc(v_target_989_);
lean_dec_ref_known(v_k_x27_981_, 2);
v___x_990_ = lean_apply_2(v_h__2_983_, v_package_988_, v_target_989_);
return v___x_990_;
}
default: 
{
lean_object* v___x_991_; 
lean_dec(v_h__2_983_);
lean_dec(v_h__1_982_);
v___x_991_ = lean_apply_3(v_h__3_984_, v_k_x27_981_, lean_box(0), lean_box(0));
return v___x_991_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter(lean_object* v_motive_992_, lean_object* v_k_x27_993_, lean_object* v_h__1_994_, lean_object* v_h__2_995_, lean_object* v_h__3_996_){
_start:
{
switch(lean_obj_tag(v_k_x27_993_))
{
case 4:
{
lean_object* v_target_997_; lean_object* v_facet_998_; lean_object* v___x_999_; 
lean_dec(v_h__3_996_);
lean_dec(v_h__2_995_);
v_target_997_ = lean_ctor_get(v_k_x27_993_, 0);
lean_inc_ref(v_target_997_);
v_facet_998_ = lean_ctor_get(v_k_x27_993_, 1);
lean_inc(v_facet_998_);
lean_dec_ref_known(v_k_x27_993_, 2);
v___x_999_ = lean_apply_2(v_h__1_994_, v_target_997_, v_facet_998_);
return v___x_999_;
}
case 3:
{
lean_object* v_package_1000_; lean_object* v_target_1001_; lean_object* v___x_1002_; 
lean_dec(v_h__3_996_);
lean_dec(v_h__1_994_);
v_package_1000_ = lean_ctor_get(v_k_x27_993_, 0);
lean_inc(v_package_1000_);
v_target_1001_ = lean_ctor_get(v_k_x27_993_, 1);
lean_inc(v_target_1001_);
lean_dec_ref_known(v_k_x27_993_, 2);
v___x_1002_ = lean_apply_2(v_h__2_995_, v_package_1000_, v_target_1001_);
return v___x_1002_;
}
default: 
{
lean_object* v___x_1003_; 
lean_dec(v_h__2_995_);
lean_dec(v_h__1_994_);
v___x_1003_ = lean_apply_3(v_h__3_996_, v_k_x27_993_, lean_box(0), lean_box(0));
return v___x_1003_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter___redArg(lean_object* v_k_x27_1004_, lean_object* v_h__1_1005_, lean_object* v_h__2_1006_){
_start:
{
if (lean_obj_tag(v_k_x27_1004_) == 4)
{
lean_object* v_target_1007_; lean_object* v_facet_1008_; lean_object* v___x_1009_; 
lean_dec(v_h__2_1006_);
v_target_1007_ = lean_ctor_get(v_k_x27_1004_, 0);
lean_inc_ref(v_target_1007_);
v_facet_1008_ = lean_ctor_get(v_k_x27_1004_, 1);
lean_inc(v_facet_1008_);
lean_dec_ref_known(v_k_x27_1004_, 2);
v___x_1009_ = lean_apply_2(v_h__1_1005_, v_target_1007_, v_facet_1008_);
return v___x_1009_;
}
else
{
lean_object* v___x_1010_; 
lean_dec(v_h__1_1005_);
v___x_1010_ = lean_apply_2(v_h__2_1006_, v_k_x27_1004_, lean_box(0));
return v___x_1010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter(lean_object* v_motive_1011_, lean_object* v_k_x27_1012_, lean_object* v_h__1_1013_, lean_object* v_h__2_1014_){
_start:
{
if (lean_obj_tag(v_k_x27_1012_) == 4)
{
lean_object* v_target_1015_; lean_object* v_facet_1016_; lean_object* v___x_1017_; 
lean_dec(v_h__2_1014_);
v_target_1015_ = lean_ctor_get(v_k_x27_1012_, 0);
lean_inc_ref(v_target_1015_);
v_facet_1016_ = lean_ctor_get(v_k_x27_1012_, 1);
lean_inc(v_facet_1016_);
lean_dec_ref_known(v_k_x27_1012_, 2);
v___x_1017_ = lean_apply_2(v_h__1_1013_, v_target_1015_, v_facet_1016_);
return v___x_1017_;
}
else
{
lean_object* v___x_1018_; 
lean_dec(v_h__1_1013_);
v___x_1018_ = lean_apply_2(v_h__2_1014_, v_k_x27_1012_, lean_box(0));
return v___x_1018_;
}
}
}
lean_object* runtime_initialize_Init_Data_Order(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_Data_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedBuildKey_default = _init_l_Lake_instInhabitedBuildKey_default();
lean_mark_persistent(l_Lake_instInhabitedBuildKey_default);
l_Lake_instInhabitedBuildKey = _init_l_Lake_instInhabitedBuildKey();
lean_mark_persistent(l_Lake_instInhabitedBuildKey);
l_Lake_PartialBuildKey_instInhabited = _init_l_Lake_PartialBuildKey_instInhabited();
lean_mark_persistent(l_Lake_PartialBuildKey_instInhabited);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Key(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Order(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Key(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Key(builtin);
}
#ifdef __cplusplus
}
#endif

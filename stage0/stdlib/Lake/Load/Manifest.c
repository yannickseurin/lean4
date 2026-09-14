// Lean compiler output
// Module: Lake.Load.Manifest
// Imports: public import Lake.Util.Version public import Lake.Config.Defaults public import Lake.Util.Git import Lake.Util.Error public import Lake.Util.FilePath import Lake.Util.JsonObject import Init.Data.Option.Coe
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_defaultManifestFile;
extern lean_object* l_Lake_defaultConfigFile;
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lake_StdVer_compare(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lake_SemVerCore_toString(lean_object*);
uint8_t l_Lake_instOrdSemVerCore_ord(lean_object*, lean_object*);
lean_object* l_Lake_StdVer_toString(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lake_StdVer_parse(lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_Manifest_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Manifest_version___closed__0 = (const lean_object*)&l_Lake_Manifest_version___closed__0_value;
static const lean_string_object l_Lake_Manifest_version___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Manifest_version___closed__1 = (const lean_object*)&l_Lake_Manifest_version___closed__1_value;
static const lean_ctor_object l_Lake_Manifest_version___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Manifest_version___closed__0_value),((lean_object*)&l_Lake_Manifest_version___closed__1_value)}};
static const lean_object* l_Lake_Manifest_version___closed__2 = (const lean_object*)&l_Lake_Manifest_version___closed__2_value;
LEAN_EXPORT const lean_object* l_Lake_Manifest_version = (const lean_object*)&l_Lake_Manifest_version___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_path_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_path_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_git_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_git_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a `Name`, got '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected a `NameMap`, got '"};
static const lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0___closed__0 = (const lean_object*)&l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__0 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__0_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__0_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__1 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__1_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "git"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__4 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__4_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__4_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__5 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__5_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__7 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__7_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "opts"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__8 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__8_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__8_value),LEAN_SCALAR_PTR_LITERAL(49, 15, 216, 57, 127, 228, 200, 93)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__9 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__9_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inherited"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(5, 243, 84, 167, 125, 155, 180, 170)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__11 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__11_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(223, 8, 114, 234, 1, 186, 24, 188)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__13 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__13_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rev"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(215, 226, 195, 78, 237, 95, 37, 186)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__15 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__15_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inputRev\?"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__16 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__16_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__16_value),LEAN_SCALAR_PTR_LITERAL(35, 252, 185, 60, 100, 164, 29, 176)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__17 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__17_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "subDir\?"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__18 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__18_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__18_value),LEAN_SCALAR_PTR_LITERAL(200, 131, 32, 198, 225, 97, 240, 33)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__19 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__19_value;
static const lean_array_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__7_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__9_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__11_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__13_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__15_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__17_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__19_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__20 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__20_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__20_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__21 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__21_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dir"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22_value),LEAN_SCALAR_PTR_LITERAL(133, 174, 87, 196, 58, 217, 0, 187)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__23 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__23_value;
static const lean_array_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__7_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__9_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__11_value),((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__23_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__24 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__24_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__24_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__25 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__25_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson(lean_object*);
static const lean_closure_object l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6___closed__0 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6___closed__0 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6___closed__0_value;
static lean_once_cell_t l_Lake_instInhabitedPackageEntryV6_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackageEntryV6_default___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPackageEntryV6_default;
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_instInhabitedPackageEntryV6;
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_path_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_path_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_git_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_git_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_instInhabitedPackageEntrySrc_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Manifest_version___closed__1_value)}};
static const lean_object* l_Lake_instInhabitedPackageEntrySrc_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedPackageEntrySrc_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedPackageEntrySrc_default = (const lean_object*)&l_Lake_instInhabitedPackageEntrySrc_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedPackageEntrySrc = (const lean_object*)&l_Lake_instInhabitedPackageEntrySrc_default___closed__0_value;
static lean_once_cell_t l_Lake_instInhabitedPackageEntry_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackageEntry_default___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPackageEntry_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPackageEntry;
static const lean_string_object l_Lake_PackageEntry_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scope"};
static const lean_object* l_Lake_PackageEntry_toJson___closed__0 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__0_value;
static const lean_string_object l_Lake_PackageEntry_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configFile"};
static const lean_object* l_Lake_PackageEntry_toJson___closed__1 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__1_value;
static const lean_string_object l_Lake_PackageEntry_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "manifestFile"};
static const lean_object* l_Lake_PackageEntry_toJson___closed__2 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__2_value;
static const lean_string_object l_Lake_PackageEntry_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lake_PackageEntry_toJson___closed__3 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__3_value;
static const lean_ctor_object l_Lake_PackageEntry_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2_value)}};
static const lean_object* l_Lake_PackageEntry_toJson___closed__4 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__4_value;
static const lean_ctor_object l_Lake_PackageEntry_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PackageEntry_toJson___closed__3_value),((lean_object*)&l_Lake_PackageEntry_toJson___closed__4_value)}};
static const lean_object* l_Lake_PackageEntry_toJson___closed__5 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__5_value;
static const lean_ctor_object l_Lake_PackageEntry_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3_value)}};
static const lean_object* l_Lake_PackageEntry_toJson___closed__6 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__6_value;
static const lean_ctor_object l_Lake_PackageEntry_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PackageEntry_toJson___closed__3_value),((lean_object*)&l_Lake_PackageEntry_toJson___closed__6_value)}};
static const lean_object* l_Lake_PackageEntry_toJson___closed__7 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__7_value;
static const lean_string_object l_Lake_PackageEntry_toJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "inputRev"};
static const lean_object* l_Lake_PackageEntry_toJson___closed__8 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__8_value;
static const lean_string_object l_Lake_PackageEntry_toJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "subDir"};
static const lean_object* l_Lake_PackageEntry_toJson___closed__9 = (const lean_object*)&l_Lake_PackageEntry_toJson___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_PackageEntry_toJson(lean_object*);
static const lean_closure_object l_Lake_PackageEntry_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PackageEntry_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PackageEntry_instToJson___closed__0 = (const lean_object*)&l_Lake_PackageEntry_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PackageEntry_instToJson = (const lean_object*)&l_Lake_PackageEntry_instToJson___closed__0_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "package entry: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___lam__0___closed__0 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_PackageEntry_fromJson_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_fromJson_x3f___lam__0___boxed(lean_object*);
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "property not found: name"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__0_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "name: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "package entry '"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "': "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__3_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "subDir: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__4_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unknown package entry type '"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__5 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__5_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "property not found: url"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__6 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__6_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "url: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__7 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__7_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "property not found: rev"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__8 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__8_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rev: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__9 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__9_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "inputRev: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__10 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__10_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "property not found: dir"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__11 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__11_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dir: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__12 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__12_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "manifestFile: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__13 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__13_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "property not found: type"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__14 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__14_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "type: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__15 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__15_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "property not found: inherited"};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__16 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__16_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inherited: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__17 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__17_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "configFile: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__18 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__18_value;
static const lean_string_object l_Lake_PackageEntry_fromJson_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scope: "};
static const lean_object* l_Lake_PackageEntry_fromJson_x3f___closed__19 = (const lean_object*)&l_Lake_PackageEntry_fromJson_x3f___closed__19_value;
LEAN_EXPORT lean_object* l_Lake_PackageEntry_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lake_PackageEntry_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PackageEntry_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PackageEntry_instFromJson___closed__0 = (const lean_object*)&l_Lake_PackageEntry_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PackageEntry_instFromJson = (const lean_object*)&l_Lake_PackageEntry_instFromJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_PackageEntry_prettyName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_dirName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_inputRev_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_inputRev_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_setInherited(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_setConfigFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_setManifestFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_inDirectory(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntry_ofV6(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntry_ofV6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_addPackage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0___boxed(lean_object*);
static const lean_string_object l_Lake_Manifest_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lake_Manifest_toJson___closed__0 = (const lean_object*)&l_Lake_Manifest_toJson___closed__0_value;
static lean_once_cell_t l_Lake_Manifest_toJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Manifest_toJson___closed__1;
static lean_once_cell_t l_Lake_Manifest_toJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Manifest_toJson___closed__2;
static lean_once_cell_t l_Lake_Manifest_toJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Manifest_toJson___closed__3;
static const lean_string_object l_Lake_Manifest_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "fixedToolchain"};
static const lean_object* l_Lake_Manifest_toJson___closed__4 = (const lean_object*)&l_Lake_Manifest_toJson___closed__4_value;
static const lean_string_object l_Lake_Manifest_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "lakeDir"};
static const lean_object* l_Lake_Manifest_toJson___closed__5 = (const lean_object*)&l_Lake_Manifest_toJson___closed__5_value;
static const lean_string_object l_Lake_Manifest_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "packagesDir"};
static const lean_object* l_Lake_Manifest_toJson___closed__6 = (const lean_object*)&l_Lake_Manifest_toJson___closed__6_value;
static const lean_string_object l_Lake_Manifest_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "packages"};
static const lean_object* l_Lake_Manifest_toJson___closed__7 = (const lean_object*)&l_Lake_Manifest_toJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_Manifest_toJson(lean_object*);
static const lean_closure_object l_Lake_Manifest_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Manifest_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Manifest_instToJson___closed__0 = (const lean_object*)&l_Lake_Manifest_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Manifest_instToJson = (const lean_object*)&l_Lake_Manifest_instToJson___closed__0_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "invalid version '"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__0 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__0_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "'; you may need to update your 'lean-toolchain'"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__1 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__1_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "incompatible manifest version '"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__2 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__2_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__3 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__3_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "schema version '"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__4 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__4_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "' is of a higher major version than this Lake's '"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__5 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__5_value;
static lean_once_cell_t l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__6;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "schemaVersion"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__7 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__7_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "property not found: schemaVersion"};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__8 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__8_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__8_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__9 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__0 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__0_value;
static const lean_array_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__1 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__1_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__1_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__2 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__2_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__3 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__3_value;
static const lean_ctor_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__3_value),((lean_object*)&l_Lake_Manifest_version___closed__1_value)}};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__4 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__4_value;
static const lean_string_object l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "packages: "};
static const lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__5 = (const lean_object*)&l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1___boxed(lean_object*);
static const lean_string_object l_Lake_Manifest_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "packagesDir: "};
static const lean_object* l_Lake_Manifest_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_Manifest_fromJson_x3f___closed__0_value;
static const lean_string_object l_Lake_Manifest_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lakeDir: "};
static const lean_object* l_Lake_Manifest_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_Manifest_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_Manifest_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "fixedToolchain: "};
static const lean_object* l_Lake_Manifest_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_Manifest_fromJson_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Manifest_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lake_Manifest_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Manifest_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Manifest_instFromJson___closed__0 = (const lean_object*)&l_Lake_Manifest_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Manifest_instFromJson = (const lean_object*)&l_Lake_Manifest_instFromJson___closed__0_value;
static const lean_string_object l_Lake_Manifest_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid JSON: "};
static const lean_object* l_Lake_Manifest_parse___closed__0 = (const lean_object*)&l_Lake_Manifest_parse___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Manifest_parse(lean_object*);
static const lean_string_object l_Lake_Manifest_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_Manifest_load___closed__0 = (const lean_object*)&l_Lake_Manifest_load___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Manifest_load(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_load___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_load_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_load_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_save(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_save___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_decodeEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_parseEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_loadEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_loadEntries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_tryLoadEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_tryLoadEntries___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Manifest_saveEntries___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Manifest_saveEntries___closed__0;
LEAN_EXPORT lean_object* l_Lake_Manifest_saveEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Manifest_saveEntries___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorIdx(lean_object* v_x_10_){
_start:
{
if (lean_obj_tag(v_x_10_) == 0)
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(0u);
return v___x_11_;
}
else
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(1u);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorIdx___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorIdx(v_x_13_);
lean_dec_ref(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(lean_object* v_t_15_, lean_object* v_k_16_){
_start:
{
if (lean_obj_tag(v_t_15_) == 0)
{
lean_object* v_name_17_; lean_object* v_opts_18_; uint8_t v_inherited_19_; lean_object* v_dir_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_name_17_ = lean_ctor_get(v_t_15_, 0);
lean_inc(v_name_17_);
v_opts_18_ = lean_ctor_get(v_t_15_, 1);
lean_inc(v_opts_18_);
v_inherited_19_ = lean_ctor_get_uint8(v_t_15_, sizeof(void*)*3);
v_dir_20_ = lean_ctor_get(v_t_15_, 2);
lean_inc_ref(v_dir_20_);
lean_dec_ref_known(v_t_15_, 3);
v___x_21_ = lean_box(v_inherited_19_);
v___x_22_ = lean_apply_4(v_k_16_, v_name_17_, v_opts_18_, v___x_21_, v_dir_20_);
return v___x_22_;
}
else
{
lean_object* v_name_23_; lean_object* v_opts_24_; uint8_t v_inherited_25_; lean_object* v_url_26_; lean_object* v_rev_27_; lean_object* v_inputRev_x3f_28_; lean_object* v_subDir_x3f_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_name_23_ = lean_ctor_get(v_t_15_, 0);
lean_inc(v_name_23_);
v_opts_24_ = lean_ctor_get(v_t_15_, 1);
lean_inc(v_opts_24_);
v_inherited_25_ = lean_ctor_get_uint8(v_t_15_, sizeof(void*)*6);
v_url_26_ = lean_ctor_get(v_t_15_, 2);
lean_inc_ref(v_url_26_);
v_rev_27_ = lean_ctor_get(v_t_15_, 3);
lean_inc_ref(v_rev_27_);
v_inputRev_x3f_28_ = lean_ctor_get(v_t_15_, 4);
lean_inc(v_inputRev_x3f_28_);
v_subDir_x3f_29_ = lean_ctor_get(v_t_15_, 5);
lean_inc(v_subDir_x3f_29_);
lean_dec_ref_known(v_t_15_, 6);
v___x_30_ = lean_box(v_inherited_25_);
v___x_31_ = lean_apply_7(v_k_16_, v_name_23_, v_opts_24_, v___x_30_, v_url_26_, v_rev_27_, v_inputRev_x3f_28_, v_subDir_x3f_29_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim(lean_object* v_motive_32_, lean_object* v_ctorIdx_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_k_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(v_t_34_, v_k_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___boxed(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim(v_motive_38_, v_ctorIdx_39_, v_t_40_, v_h_41_, v_k_42_);
lean_dec(v_ctorIdx_39_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_path_elim___redArg(lean_object* v_t_44_, lean_object* v_path_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(v_t_44_, v_path_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_path_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_path_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(v_t_48_, v_path_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_git_elim___redArg(lean_object* v_t_52_, lean_object* v_git_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(v_t_52_, v_git_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_git_elim(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_git_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntryV6_ctorElim___redArg(v_t_56_, v_git_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1(lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_62_) == 0)
{
lean_object* v___x_63_; 
v___x_63_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1___closed__0));
return v___x_63_;
}
else
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Json_getStr_x3f(v_x_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_81_; 
v_a_73_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_81_ == 0)
{
v___x_75_ = v___x_64_;
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_64_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_79_; 
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v_a_73_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_77_);
v___x_79_ = v___x_75_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_77_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(lean_object* v_x_82_){
_start:
{
if (lean_obj_tag(v_x_82_) == 0)
{
lean_object* v___x_83_; 
v___x_83_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1___closed__0));
return v___x_83_;
}
else
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Json_getStr_x3f(v_x_82_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
v_a_85_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_92_ == 0)
{
v___x_87_ = v___x_84_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_84_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_a_85_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v_a_93_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v___x_84_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_84_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_97_, 0, v_a_93_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 0, v___x_97_);
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_box(0);
v___x_106_ = l_unsafeCast___redArg(v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0(lean_object* v_init_107_, lean_object* v_x_108_){
_start:
{
if (lean_obj_tag(v_x_108_) == 0)
{
lean_object* v_k_109_; lean_object* v_v_110_; lean_object* v_l_111_; lean_object* v_r_112_; lean_object* v___x_113_; 
v_k_109_ = lean_ctor_get(v_x_108_, 1);
lean_inc(v_k_109_);
v_v_110_ = lean_ctor_get(v_x_108_, 2);
lean_inc(v_v_110_);
v_l_111_ = lean_ctor_get(v_x_108_, 3);
lean_inc(v_l_111_);
v_r_112_ = lean_ctor_get(v_x_108_, 4);
lean_inc(v_r_112_);
lean_dec_ref_known(v_x_108_, 5);
v___x_113_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0(v_init_107_, v_l_111_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_dec(v_r_112_);
lean_dec(v_v_110_);
lean_dec(v_k_109_);
return v___x_113_;
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_154_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_154_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_154_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_154_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__0));
v___x_119_ = lean_string_dec_eq(v_k_109_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v_n_120_; uint8_t v___x_121_; 
lean_inc(v_k_109_);
v_n_120_ = l_String_toName(v_k_109_);
v___x_121_ = l_Lean_Name_isAnonymous(v_n_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_del_object(v___x_116_);
lean_dec(v_k_109_);
v___x_122_ = l_Lean_Json_getStr_x3f(v_v_110_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_n_120_);
lean_dec(v_a_114_);
lean_dec(v_r_112_);
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_132_; 
v_a_131_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_a_131_);
lean_dec_ref_known(v___x_122_, 1);
v___x_132_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_120_, v_a_131_, v_a_114_);
v_init_107_ = v___x_132_;
v_x_108_ = v_r_112_;
goto _start;
}
}
else
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
lean_dec(v_n_120_);
lean_dec(v_a_114_);
lean_dec(v_r_112_);
lean_dec(v_v_110_);
v___x_134_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__1));
v___x_135_ = lean_string_append(v___x_134_, v_k_109_);
lean_dec(v_k_109_);
v___x_136_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2));
v___x_137_ = lean_string_append(v___x_135_, v___x_136_);
if (v_isShared_117_ == 0)
{
lean_ctor_set_tag(v___x_116_, 0);
lean_ctor_set(v___x_116_, 0, v___x_137_);
v___x_139_ = v___x_116_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v___x_141_; 
lean_del_object(v___x_116_);
lean_dec(v_k_109_);
v___x_141_ = l_Lean_Json_getStr_x3f(v_v_110_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
lean_dec(v_a_114_);
lean_dec(v_r_112_);
v_a_142_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_141_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_141_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_a_150_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_141_, 1);
v___x_151_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3);
v___x_152_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_151_, v_a_150_, v_a_114_);
v_init_107_ = v___x_152_;
v_x_108_ = v_r_112_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v_init_107_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0(lean_object* v_x_157_){
_start:
{
if (lean_obj_tag(v_x_157_) == 5)
{
lean_object* v_kvPairs_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_kvPairs_158_ = lean_ctor_get(v_x_157_, 0);
lean_inc(v_kvPairs_158_);
lean_dec_ref_known(v_x_157_, 1);
v___x_159_ = lean_box(1);
v___x_160_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0(v___x_159_, v_kvPairs_158_);
return v___x_160_;
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_161_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0___closed__0));
v___x_162_ = lean_unsigned_to_nat(80u);
v___x_163_ = l_Lean_Json_pretty(v_x_157_, v___x_162_);
v___x_164_ = lean_string_append(v___x_161_, v___x_163_);
lean_dec_ref(v___x_163_);
v___x_165_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2));
v___x_166_ = lean_string_append(v___x_164_, v___x_165_);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson(lean_object* v_json_230_){
_start:
{
lean_object* v___x_231_; 
lean_inc(v_json_230_);
v___x_231_ = l_Lean_Json_getTag_x3f(v_json_230_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v___x_232_; 
lean_dec(v_json_230_);
v___x_232_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__1));
return v___x_232_;
}
else
{
lean_object* v_val_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_val_233_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_val_233_);
lean_dec_ref_known(v___x_231_, 1);
v___x_234_ = lean_box(0);
v___x_235_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2));
v___x_236_ = lean_string_dec_eq(v_val_233_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3));
v___x_238_ = lean_string_dec_eq(v_val_233_, v___x_237_);
lean_dec(v_val_233_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; 
lean_dec(v_json_230_);
v___x_239_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__5));
return v___x_239_;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_unsigned_to_nat(7u);
v___x_241_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__21));
v___x_242_ = l_Lean_Json_parseCtorFields(v_json_230_, v___x_237_, v___x_240_, v___x_241_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
else
{
lean_object* v_a_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_a_251_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_251_);
lean_dec_ref_known(v___x_242_, 1);
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_array_get_borrowed(v___x_234_, v_a_251_, v___x_252_);
lean_inc(v___x_253_);
v___x_254_ = l_Lean_Name_fromJson_x3f(v___x_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec(v_a_251_);
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
v___x_264_ = lean_unsigned_to_nat(1u);
v___x_265_ = lean_array_get_borrowed(v___x_234_, v_a_251_, v___x_264_);
lean_inc(v___x_265_);
v___x_266_ = l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0(v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec(v_a_263_);
lean_dec(v_a_251_);
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
v___x_276_ = lean_unsigned_to_nat(2u);
v___x_277_ = lean_array_get_borrowed(v___x_234_, v_a_251_, v___x_276_);
v___x_278_ = l_Lean_Json_getBool_x3f(v___x_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec(v_a_275_);
lean_dec(v_a_263_);
lean_dec(v_a_251_);
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_a_287_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_278_, 1);
v___x_288_ = lean_unsigned_to_nat(3u);
v___x_289_ = lean_array_get_borrowed(v___x_234_, v_a_251_, v___x_288_);
lean_inc(v___x_289_);
v___x_290_ = l_Lean_Json_getStr_x3f(v___x_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_dec(v_a_287_);
lean_dec(v_a_275_);
lean_dec(v_a_263_);
lean_dec(v_a_251_);
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
v___x_300_ = lean_unsigned_to_nat(4u);
v___x_301_ = lean_array_get_borrowed(v___x_234_, v_a_251_, v___x_300_);
lean_inc(v___x_301_);
v___x_302_ = l_Lean_Json_getStr_x3f(v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_dec(v_a_299_);
lean_dec(v_a_287_);
lean_dec(v_a_275_);
lean_dec(v_a_263_);
lean_dec(v_a_251_);
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
lean_object* v_a_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v_a_311_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_302_, 1);
v___x_312_ = lean_unsigned_to_nat(5u);
v___x_313_ = lean_array_get_borrowed(v___x_234_, v_a_251_, v___x_312_);
lean_inc(v___x_313_);
v___x_314_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1(v___x_313_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec(v_a_311_);
lean_dec(v_a_299_);
lean_dec(v_a_287_);
lean_dec(v_a_275_);
lean_dec(v_a_263_);
lean_dec(v_a_251_);
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_314_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v_a_323_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_314_, 1);
v___x_324_ = lean_unsigned_to_nat(6u);
v___x_325_ = lean_array_get(v___x_234_, v_a_251_, v___x_324_);
lean_dec(v_a_251_);
v___x_326_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(v___x_325_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec(v_a_323_);
lean_dec(v_a_311_);
lean_dec(v_a_299_);
lean_dec(v_a_287_);
lean_dec(v_a_275_);
lean_dec(v_a_263_);
v_a_327_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_326_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_326_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_344_; 
v_a_335_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_344_ == 0)
{
v___x_337_ = v___x_326_;
v_isShared_338_ = v_isSharedCheck_344_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_326_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_344_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_342_; 
v___x_339_ = lean_alloc_ctor(1, 6, 1);
lean_ctor_set(v___x_339_, 0, v_a_263_);
lean_ctor_set(v___x_339_, 1, v_a_275_);
lean_ctor_set(v___x_339_, 2, v_a_299_);
lean_ctor_set(v___x_339_, 3, v_a_311_);
lean_ctor_set(v___x_339_, 4, v_a_323_);
lean_ctor_set(v___x_339_, 5, v_a_335_);
v___x_340_ = lean_unbox(v_a_287_);
lean_dec(v_a_287_);
lean_ctor_set_uint8(v___x_339_, sizeof(void*)*6, v___x_340_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_339_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_339_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
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
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec(v_val_233_);
v___x_345_ = lean_unsigned_to_nat(4u);
v___x_346_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__25));
v___x_347_ = l_Lean_Json_parseCtorFields(v_json_230_, v___x_235_, v___x_345_, v___x_346_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_347_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_347_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_a_356_ = lean_ctor_get(v___x_347_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_347_, 1);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_array_get_borrowed(v___x_234_, v_a_356_, v___x_357_);
lean_inc(v___x_358_);
v___x_359_ = l_Lean_Name_fromJson_x3f(v___x_358_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_a_356_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_a_368_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_359_, 1);
v___x_369_ = lean_unsigned_to_nat(1u);
v___x_370_ = lean_array_get_borrowed(v___x_234_, v_a_356_, v___x_369_);
lean_inc(v___x_370_);
v___x_371_ = l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0(v___x_370_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_a_368_);
lean_dec(v_a_356_);
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_a_380_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v___x_371_, 1);
v___x_381_ = lean_unsigned_to_nat(2u);
v___x_382_ = lean_array_get_borrowed(v___x_234_, v_a_356_, v___x_381_);
v___x_383_ = l_Lean_Json_getBool_x3f(v___x_382_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec(v_a_380_);
lean_dec(v_a_368_);
lean_dec(v_a_356_);
v_a_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_a_392_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_392_);
lean_dec_ref_known(v___x_383_, 1);
v___x_393_ = lean_unsigned_to_nat(3u);
v___x_394_ = lean_array_get(v___x_234_, v_a_356_, v___x_393_);
lean_dec(v_a_356_);
v___x_395_ = l_Lean_Json_getStr_x3f(v___x_394_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
lean_dec(v_a_392_);
lean_dec(v_a_380_);
lean_dec(v_a_368_);
v_a_396_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_395_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_395_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_413_; 
v_a_404_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_413_ == 0)
{
v___x_406_ = v___x_395_;
v_isShared_407_ = v_isSharedCheck_413_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_395_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_413_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_408_; uint8_t v___x_409_; lean_object* v___x_411_; 
v___x_408_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_408_, 0, v_a_368_);
lean_ctor_set(v___x_408_, 1, v_a_380_);
lean_ctor_set(v___x_408_, 2, v_a_404_);
v___x_409_ = lean_unbox(v_a_392_);
lean_dec(v_a_392_);
lean_ctor_set_uint8(v___x_408_, sizeof(void*)*3, v___x_409_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_408_);
v___x_411_ = v___x_406_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_408_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
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
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__1(lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_416_) == 0)
{
lean_object* v___x_417_; 
v___x_417_ = lean_box(0);
return v___x_417_;
}
else
{
lean_object* v_val_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
v_val_418_ = lean_ctor_get(v_x_416_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_416_);
if (v_isSharedCheck_425_ == 0)
{
v___x_420_ = v_x_416_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_val_418_);
lean_dec(v_x_416_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set_tag(v___x_420_, 3);
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_val_418_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__2(lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_426_) == 0)
{
lean_object* v___x_427_; 
v___x_427_ = lean_box(0);
return v___x_427_;
}
else
{
lean_object* v_val_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_436_; 
v_val_428_ = lean_ctor_get(v_x_426_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v_x_426_);
if (v_isSharedCheck_436_ == 0)
{
v___x_430_ = v_x_426_;
v_isShared_431_ = v_isSharedCheck_436_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_val_428_);
lean_dec(v_x_426_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_436_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_432_ = l_Lake_mkRelPathString(v_val_428_);
if (v_isShared_431_ == 0)
{
lean_ctor_set_tag(v___x_430_, 3);
lean_ctor_set(v___x_430_, 0, v___x_432_);
v___x_434_ = v___x_430_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(lean_object* v_msg_437_){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_box(1);
v___x_439_ = lean_panic_fn_borrowed(v___x_438_, v_msg_437_);
return v___x_439_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_443_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__2));
v___x_444_ = lean_unsigned_to_nat(35u);
v___x_445_ = lean_unsigned_to_nat(182u);
v___x_446_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__1));
v___x_447_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0));
v___x_448_ = l_mkPanicMessageWithDecl(v___x_447_, v___x_446_, v___x_445_, v___x_444_, v___x_443_);
return v___x_448_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_449_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__2));
v___x_450_ = lean_unsigned_to_nat(21u);
v___x_451_ = lean_unsigned_to_nat(183u);
v___x_452_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__1));
v___x_453_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0));
v___x_454_ = l_mkPanicMessageWithDecl(v___x_453_, v___x_452_, v___x_451_, v___x_450_, v___x_449_);
return v___x_454_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_457_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__6));
v___x_458_ = lean_unsigned_to_nat(35u);
v___x_459_ = lean_unsigned_to_nat(276u);
v___x_460_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__5));
v___x_461_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0));
v___x_462_ = l_mkPanicMessageWithDecl(v___x_461_, v___x_460_, v___x_459_, v___x_458_, v___x_457_);
return v___x_462_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_463_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__6));
v___x_464_ = lean_unsigned_to_nat(21u);
v___x_465_ = lean_unsigned_to_nat(277u);
v___x_466_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__5));
v___x_467_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__0));
v___x_468_ = l_mkPanicMessageWithDecl(v___x_467_, v___x_466_, v___x_465_, v___x_464_, v___x_463_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg(lean_object* v_k_469_, lean_object* v_v_470_, lean_object* v_t_471_){
_start:
{
if (lean_obj_tag(v_t_471_) == 0)
{
lean_object* v_size_472_; lean_object* v_k_473_; lean_object* v_v_474_; lean_object* v_l_475_; lean_object* v_r_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_832_; 
v_size_472_ = lean_ctor_get(v_t_471_, 0);
v_k_473_ = lean_ctor_get(v_t_471_, 1);
v_v_474_ = lean_ctor_get(v_t_471_, 2);
v_l_475_ = lean_ctor_get(v_t_471_, 3);
v_r_476_ = lean_ctor_get(v_t_471_, 4);
v_isSharedCheck_832_ = !lean_is_exclusive(v_t_471_);
if (v_isSharedCheck_832_ == 0)
{
v___x_478_ = v_t_471_;
v_isShared_479_ = v_isSharedCheck_832_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_r_476_);
lean_inc(v_l_475_);
lean_inc(v_v_474_);
lean_inc(v_k_473_);
lean_inc(v_size_472_);
lean_dec(v_t_471_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_832_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
uint8_t v___x_480_; 
v___x_480_ = lean_string_compare(v_k_469_, v_k_473_);
switch(v___x_480_)
{
case 0:
{
lean_object* v___x_481_; 
lean_dec(v_size_472_);
v___x_481_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg(v_k_469_, v_v_470_, v_l_475_);
if (lean_obj_tag(v_r_476_) == 0)
{
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_size_482_; lean_object* v_size_483_; lean_object* v_k_484_; lean_object* v_v_485_; lean_object* v_l_486_; lean_object* v_r_487_; lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v_size_482_ = lean_ctor_get(v_r_476_, 0);
v_size_483_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_size_483_);
v_k_484_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_k_484_);
v_v_485_ = lean_ctor_get(v___x_481_, 2);
lean_inc(v_v_485_);
v_l_486_ = lean_ctor_get(v___x_481_, 3);
lean_inc(v_l_486_);
v_r_487_ = lean_ctor_get(v___x_481_, 4);
lean_inc(v_r_487_);
v___x_488_ = lean_unsigned_to_nat(3u);
v___x_489_ = lean_nat_mul(v___x_488_, v_size_482_);
v___x_490_ = lean_nat_dec_lt(v___x_489_, v_size_483_);
lean_dec(v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_495_; 
lean_dec(v_r_487_);
lean_dec(v_l_486_);
lean_dec(v_v_485_);
lean_dec(v_k_484_);
v___x_491_ = lean_unsigned_to_nat(1u);
v___x_492_ = lean_nat_add(v___x_491_, v_size_483_);
lean_dec(v_size_483_);
v___x_493_ = lean_nat_add(v___x_492_, v_size_482_);
lean_dec(v___x_492_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 3, v___x_481_);
lean_ctor_set(v___x_478_, 0, v___x_493_);
v___x_495_ = v___x_478_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_496_, 3, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_496_, 4, v_r_476_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
else
{
lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_568_; 
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; lean_object* v_unused_570_; lean_object* v_unused_571_; lean_object* v_unused_572_; lean_object* v_unused_573_; 
v_unused_569_ = lean_ctor_get(v___x_481_, 4);
lean_dec(v_unused_569_);
v_unused_570_ = lean_ctor_get(v___x_481_, 3);
lean_dec(v_unused_570_);
v_unused_571_ = lean_ctor_get(v___x_481_, 2);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v___x_481_, 1);
lean_dec(v_unused_572_);
v_unused_573_ = lean_ctor_get(v___x_481_, 0);
lean_dec(v_unused_573_);
v___x_498_ = v___x_481_;
v_isShared_499_ = v_isSharedCheck_568_;
goto v_resetjp_497_;
}
else
{
lean_dec(v___x_481_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_568_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
if (lean_obj_tag(v_l_486_) == 0)
{
if (lean_obj_tag(v_r_487_) == 0)
{
lean_object* v_size_500_; lean_object* v_size_501_; lean_object* v_k_502_; lean_object* v_v_503_; lean_object* v_l_504_; lean_object* v_r_505_; lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v_size_500_ = lean_ctor_get(v_l_486_, 0);
v_size_501_ = lean_ctor_get(v_r_487_, 0);
v_k_502_ = lean_ctor_get(v_r_487_, 1);
v_v_503_ = lean_ctor_get(v_r_487_, 2);
v_l_504_ = lean_ctor_get(v_r_487_, 3);
v_r_505_ = lean_ctor_get(v_r_487_, 4);
v___x_506_ = lean_unsigned_to_nat(2u);
v___x_507_ = lean_nat_mul(v___x_506_, v_size_500_);
v___x_508_ = lean_nat_dec_lt(v_size_501_, v___x_507_);
lean_dec(v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_538_; 
lean_inc(v_r_505_);
lean_inc(v_l_504_);
lean_inc(v_v_503_);
lean_inc(v_k_502_);
v_isSharedCheck_538_ = !lean_is_exclusive(v_r_487_);
if (v_isSharedCheck_538_ == 0)
{
lean_object* v_unused_539_; lean_object* v_unused_540_; lean_object* v_unused_541_; lean_object* v_unused_542_; lean_object* v_unused_543_; 
v_unused_539_ = lean_ctor_get(v_r_487_, 4);
lean_dec(v_unused_539_);
v_unused_540_ = lean_ctor_get(v_r_487_, 3);
lean_dec(v_unused_540_);
v_unused_541_ = lean_ctor_get(v_r_487_, 2);
lean_dec(v_unused_541_);
v_unused_542_ = lean_ctor_get(v_r_487_, 1);
lean_dec(v_unused_542_);
v_unused_543_ = lean_ctor_get(v_r_487_, 0);
lean_dec(v_unused_543_);
v___x_510_ = v_r_487_;
v_isShared_511_ = v_isSharedCheck_538_;
goto v_resetjp_509_;
}
else
{
lean_dec(v_r_487_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_538_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___x_526_; lean_object* v___y_528_; 
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_nat_add(v___x_512_, v_size_483_);
lean_dec(v_size_483_);
v___x_514_ = lean_nat_add(v___x_513_, v_size_482_);
lean_dec(v___x_513_);
v___x_526_ = lean_nat_add(v___x_512_, v_size_500_);
if (lean_obj_tag(v_l_504_) == 0)
{
lean_object* v_size_536_; 
v_size_536_ = lean_ctor_get(v_l_504_, 0);
lean_inc(v_size_536_);
v___y_528_ = v_size_536_;
goto v___jp_527_;
}
else
{
lean_object* v___x_537_; 
v___x_537_ = lean_unsigned_to_nat(0u);
v___y_528_ = v___x_537_;
goto v___jp_527_;
}
v___jp_515_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_nat_add(v___y_516_, v___y_518_);
lean_dec(v___y_518_);
lean_dec(v___y_516_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 4, v_r_476_);
lean_ctor_set(v___x_510_, 3, v_r_505_);
lean_ctor_set(v___x_510_, 2, v_v_474_);
lean_ctor_set(v___x_510_, 1, v_k_473_);
lean_ctor_set(v___x_510_, 0, v___x_519_);
v___x_521_ = v___x_510_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_r_505_);
lean_ctor_set(v_reuseFailAlloc_525_, 4, v_r_476_);
v___x_521_ = v_reuseFailAlloc_525_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 4, v___x_521_);
lean_ctor_set(v___x_498_, 3, v___y_517_);
lean_ctor_set(v___x_498_, 2, v_v_503_);
lean_ctor_set(v___x_498_, 1, v_k_502_);
lean_ctor_set(v___x_498_, 0, v___x_514_);
v___x_523_ = v___x_498_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_k_502_);
lean_ctor_set(v_reuseFailAlloc_524_, 2, v_v_503_);
lean_ctor_set(v_reuseFailAlloc_524_, 3, v___y_517_);
lean_ctor_set(v_reuseFailAlloc_524_, 4, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
v___jp_527_:
{
lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_529_ = lean_nat_add(v___x_526_, v___y_528_);
lean_dec(v___y_528_);
lean_dec(v___x_526_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v_l_504_);
lean_ctor_set(v___x_478_, 3, v_l_486_);
lean_ctor_set(v___x_478_, 2, v_v_485_);
lean_ctor_set(v___x_478_, 1, v_k_484_);
lean_ctor_set(v___x_478_, 0, v___x_529_);
v___x_531_ = v___x_478_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_529_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_k_484_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_v_485_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_l_486_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_l_504_);
v___x_531_ = v_reuseFailAlloc_535_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_532_; 
v___x_532_ = lean_nat_add(v___x_512_, v_size_482_);
if (lean_obj_tag(v_r_505_) == 0)
{
lean_object* v_size_533_; 
v_size_533_ = lean_ctor_get(v_r_505_, 0);
lean_inc(v_size_533_);
v___y_516_ = v___x_532_;
v___y_517_ = v___x_531_;
v___y_518_ = v_size_533_;
goto v___jp_515_;
}
else
{
lean_object* v___x_534_; 
v___x_534_ = lean_unsigned_to_nat(0u);
v___y_516_ = v___x_532_;
v___y_517_ = v___x_531_;
v___y_518_ = v___x_534_;
goto v___jp_515_;
}
}
}
}
}
else
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_550_; 
lean_del_object(v___x_478_);
v___x_544_ = lean_unsigned_to_nat(1u);
v___x_545_ = lean_nat_add(v___x_544_, v_size_483_);
lean_dec(v_size_483_);
v___x_546_ = lean_nat_add(v___x_545_, v_size_482_);
lean_dec(v___x_545_);
v___x_547_ = lean_nat_add(v___x_544_, v_size_482_);
v___x_548_ = lean_nat_add(v___x_547_, v_size_501_);
lean_dec(v___x_547_);
lean_inc_ref(v_r_476_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 4, v_r_476_);
lean_ctor_set(v___x_498_, 3, v_r_487_);
lean_ctor_set(v___x_498_, 2, v_v_474_);
lean_ctor_set(v___x_498_, 1, v_k_473_);
lean_ctor_set(v___x_498_, 0, v___x_548_);
v___x_550_ = v___x_498_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_563_, 3, v_r_487_);
lean_ctor_set(v_reuseFailAlloc_563_, 4, v_r_476_);
v___x_550_ = v_reuseFailAlloc_563_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
v_isSharedCheck_557_ = !lean_is_exclusive(v_r_476_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; lean_object* v_unused_559_; lean_object* v_unused_560_; lean_object* v_unused_561_; lean_object* v_unused_562_; 
v_unused_558_ = lean_ctor_get(v_r_476_, 4);
lean_dec(v_unused_558_);
v_unused_559_ = lean_ctor_get(v_r_476_, 3);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_r_476_, 2);
lean_dec(v_unused_560_);
v_unused_561_ = lean_ctor_get(v_r_476_, 1);
lean_dec(v_unused_561_);
v_unused_562_ = lean_ctor_get(v_r_476_, 0);
lean_dec(v_unused_562_);
v___x_552_ = v_r_476_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_dec(v_r_476_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 4, v___x_550_);
lean_ctor_set(v___x_552_, 3, v_l_486_);
lean_ctor_set(v___x_552_, 2, v_v_485_);
lean_ctor_set(v___x_552_, 1, v_k_484_);
lean_ctor_set(v___x_552_, 0, v___x_546_);
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_546_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_k_484_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_v_485_);
lean_ctor_set(v_reuseFailAlloc_556_, 3, v_l_486_);
lean_ctor_set(v_reuseFailAlloc_556_, 4, v___x_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec_ref_known(v_l_486_, 5);
lean_del_object(v___x_498_);
lean_dec(v_v_485_);
lean_dec(v_k_484_);
lean_dec(v_size_483_);
lean_dec_ref_known(v_r_476_, 5);
lean_del_object(v___x_478_);
lean_dec(v_v_474_);
lean_dec(v_k_473_);
v___x_564_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__3);
v___x_565_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(v___x_564_);
return v___x_565_;
}
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; 
lean_del_object(v___x_498_);
lean_dec(v_r_487_);
lean_dec(v_v_485_);
lean_dec(v_k_484_);
lean_dec(v_size_483_);
lean_dec_ref_known(v_r_476_, 5);
lean_del_object(v___x_478_);
lean_dec(v_v_474_);
lean_dec(v_k_473_);
v___x_566_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__4);
v___x_567_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(v___x_566_);
return v___x_567_;
}
}
}
}
else
{
lean_object* v_size_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v_size_574_ = lean_ctor_get(v_r_476_, 0);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_nat_add(v___x_575_, v_size_574_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 3, v___x_481_);
lean_ctor_set(v___x_478_, 0, v___x_576_);
v___x_578_ = v___x_478_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_r_476_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
else
{
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_l_580_; 
v_l_580_ = lean_ctor_get(v___x_481_, 3);
lean_inc(v_l_580_);
if (lean_obj_tag(v_l_580_) == 0)
{
lean_object* v_r_581_; 
v_r_581_ = lean_ctor_get(v___x_481_, 4);
lean_inc(v_r_581_);
if (lean_obj_tag(v_r_581_) == 0)
{
lean_object* v_size_582_; lean_object* v_k_583_; lean_object* v_v_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_598_; 
v_size_582_ = lean_ctor_get(v___x_481_, 0);
v_k_583_ = lean_ctor_get(v___x_481_, 1);
v_v_584_ = lean_ctor_get(v___x_481_, 2);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; lean_object* v_unused_600_; 
v_unused_599_ = lean_ctor_get(v___x_481_, 4);
lean_dec(v_unused_599_);
v_unused_600_ = lean_ctor_get(v___x_481_, 3);
lean_dec(v_unused_600_);
v___x_586_ = v___x_481_;
v_isShared_587_ = v_isSharedCheck_598_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_v_584_);
lean_inc(v_k_583_);
lean_inc(v_size_582_);
lean_dec(v___x_481_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_598_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v_size_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v_size_588_ = lean_ctor_get(v_r_581_, 0);
v___x_589_ = lean_unsigned_to_nat(1u);
v___x_590_ = lean_nat_add(v___x_589_, v_size_582_);
lean_dec(v_size_582_);
v___x_591_ = lean_nat_add(v___x_589_, v_size_588_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 4, v_r_476_);
lean_ctor_set(v___x_586_, 3, v_r_581_);
lean_ctor_set(v___x_586_, 2, v_v_474_);
lean_ctor_set(v___x_586_, 1, v_k_473_);
lean_ctor_set(v___x_586_, 0, v___x_591_);
v___x_593_ = v___x_586_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_597_, 3, v_r_581_);
lean_ctor_set(v_reuseFailAlloc_597_, 4, v_r_476_);
v___x_593_ = v_reuseFailAlloc_597_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_595_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_593_);
lean_ctor_set(v___x_478_, 3, v_l_580_);
lean_ctor_set(v___x_478_, 2, v_v_584_);
lean_ctor_set(v___x_478_, 1, v_k_583_);
lean_ctor_set(v___x_478_, 0, v___x_590_);
v___x_595_ = v___x_478_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_k_583_);
lean_ctor_set(v_reuseFailAlloc_596_, 2, v_v_584_);
lean_ctor_set(v_reuseFailAlloc_596_, 3, v_l_580_);
lean_ctor_set(v_reuseFailAlloc_596_, 4, v___x_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
else
{
lean_object* v_k_601_; lean_object* v_v_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_614_; 
v_k_601_ = lean_ctor_get(v___x_481_, 1);
v_v_602_ = lean_ctor_get(v___x_481_, 2);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; lean_object* v_unused_616_; lean_object* v_unused_617_; 
v_unused_615_ = lean_ctor_get(v___x_481_, 4);
lean_dec(v_unused_615_);
v_unused_616_ = lean_ctor_get(v___x_481_, 3);
lean_dec(v_unused_616_);
v_unused_617_ = lean_ctor_get(v___x_481_, 0);
lean_dec(v_unused_617_);
v___x_604_ = v___x_481_;
v_isShared_605_ = v_isSharedCheck_614_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_v_602_);
lean_inc(v_k_601_);
lean_dec(v___x_481_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_614_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_606_ = lean_unsigned_to_nat(3u);
v___x_607_ = lean_unsigned_to_nat(1u);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 3, v_r_581_);
lean_ctor_set(v___x_604_, 2, v_v_474_);
lean_ctor_set(v___x_604_, 1, v_k_473_);
lean_ctor_set(v___x_604_, 0, v___x_607_);
v___x_609_ = v___x_604_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_613_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_613_, 3, v_r_581_);
lean_ctor_set(v_reuseFailAlloc_613_, 4, v_r_581_);
v___x_609_ = v_reuseFailAlloc_613_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_611_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_609_);
lean_ctor_set(v___x_478_, 3, v_l_580_);
lean_ctor_set(v___x_478_, 2, v_v_602_);
lean_ctor_set(v___x_478_, 1, v_k_601_);
lean_ctor_set(v___x_478_, 0, v___x_606_);
v___x_611_ = v___x_478_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_606_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_k_601_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v_v_602_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_l_580_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v___x_609_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
else
{
lean_object* v_r_618_; 
v_r_618_ = lean_ctor_get(v___x_481_, 4);
lean_inc(v_r_618_);
if (lean_obj_tag(v_r_618_) == 0)
{
lean_object* v_k_619_; lean_object* v_v_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_644_; 
v_k_619_ = lean_ctor_get(v___x_481_, 1);
v_v_620_ = lean_ctor_get(v___x_481_, 2);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_644_ == 0)
{
lean_object* v_unused_645_; lean_object* v_unused_646_; lean_object* v_unused_647_; 
v_unused_645_ = lean_ctor_get(v___x_481_, 4);
lean_dec(v_unused_645_);
v_unused_646_ = lean_ctor_get(v___x_481_, 3);
lean_dec(v_unused_646_);
v_unused_647_ = lean_ctor_get(v___x_481_, 0);
lean_dec(v_unused_647_);
v___x_622_ = v___x_481_;
v_isShared_623_ = v_isSharedCheck_644_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_v_620_);
lean_inc(v_k_619_);
lean_dec(v___x_481_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_644_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v_k_624_; lean_object* v_v_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_640_; 
v_k_624_ = lean_ctor_get(v_r_618_, 1);
v_v_625_ = lean_ctor_get(v_r_618_, 2);
v_isSharedCheck_640_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; lean_object* v_unused_642_; lean_object* v_unused_643_; 
v_unused_641_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_641_);
v_unused_642_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_642_);
v_unused_643_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_643_);
v___x_627_ = v_r_618_;
v_isShared_628_ = v_isSharedCheck_640_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_v_625_);
lean_inc(v_k_624_);
lean_dec(v_r_618_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_640_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_629_ = lean_unsigned_to_nat(3u);
v___x_630_ = lean_unsigned_to_nat(1u);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 4, v_l_580_);
lean_ctor_set(v___x_627_, 3, v_l_580_);
lean_ctor_set(v___x_627_, 2, v_v_620_);
lean_ctor_set(v___x_627_, 1, v_k_619_);
lean_ctor_set(v___x_627_, 0, v___x_630_);
v___x_632_ = v___x_627_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_630_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_k_619_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v_v_620_);
lean_ctor_set(v_reuseFailAlloc_639_, 3, v_l_580_);
lean_ctor_set(v_reuseFailAlloc_639_, 4, v_l_580_);
v___x_632_ = v_reuseFailAlloc_639_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_634_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 4, v_l_580_);
lean_ctor_set(v___x_622_, 2, v_v_474_);
lean_ctor_set(v___x_622_, 1, v_k_473_);
lean_ctor_set(v___x_622_, 0, v___x_630_);
v___x_634_ = v___x_622_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_630_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_638_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_638_, 3, v_l_580_);
lean_ctor_set(v_reuseFailAlloc_638_, 4, v_l_580_);
v___x_634_ = v_reuseFailAlloc_638_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_636_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_634_);
lean_ctor_set(v___x_478_, 3, v___x_632_);
lean_ctor_set(v___x_478_, 2, v_v_625_);
lean_ctor_set(v___x_478_, 1, v_k_624_);
lean_ctor_set(v___x_478_, 0, v___x_629_);
v___x_636_ = v___x_478_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_k_624_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v_v_625_);
lean_ctor_set(v_reuseFailAlloc_637_, 3, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_637_, 4, v___x_634_);
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
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_648_ = lean_unsigned_to_nat(2u);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v_r_618_);
lean_ctor_set(v___x_478_, 3, v___x_481_);
lean_ctor_set(v___x_478_, 0, v___x_648_);
v___x_650_ = v___x_478_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_651_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_651_, 3, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_651_, 4, v_r_618_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = lean_unsigned_to_nat(1u);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_481_);
lean_ctor_set(v___x_478_, 3, v___x_481_);
lean_ctor_set(v___x_478_, 0, v___x_652_);
v___x_654_ = v___x_478_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_655_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_655_, 3, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_655_, 4, v___x_481_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
case 1:
{
lean_object* v___x_657_; 
lean_dec(v_v_474_);
lean_dec(v_k_473_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 2, v_v_470_);
lean_ctor_set(v___x_478_, 1, v_k_469_);
v___x_657_ = v___x_478_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_size_472_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_k_469_);
lean_ctor_set(v_reuseFailAlloc_658_, 2, v_v_470_);
lean_ctor_set(v_reuseFailAlloc_658_, 3, v_l_475_);
lean_ctor_set(v_reuseFailAlloc_658_, 4, v_r_476_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
default: 
{
lean_object* v___x_659_; 
lean_dec(v_size_472_);
v___x_659_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg(v_k_469_, v_v_470_, v_r_476_);
if (lean_obj_tag(v_l_475_) == 0)
{
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_size_660_; lean_object* v_size_661_; lean_object* v_k_662_; lean_object* v_v_663_; lean_object* v_l_664_; lean_object* v_r_665_; lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_size_660_ = lean_ctor_get(v_l_475_, 0);
v_size_661_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_size_661_);
v_k_662_ = lean_ctor_get(v___x_659_, 1);
lean_inc(v_k_662_);
v_v_663_ = lean_ctor_get(v___x_659_, 2);
lean_inc(v_v_663_);
v_l_664_ = lean_ctor_get(v___x_659_, 3);
lean_inc(v_l_664_);
v_r_665_ = lean_ctor_get(v___x_659_, 4);
lean_inc(v_r_665_);
v___x_666_ = lean_unsigned_to_nat(3u);
v___x_667_ = lean_nat_mul(v___x_666_, v_size_660_);
v___x_668_ = lean_nat_dec_lt(v___x_667_, v_size_661_);
lean_dec(v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_673_; 
lean_dec(v_r_665_);
lean_dec(v_l_664_);
lean_dec(v_v_663_);
lean_dec(v_k_662_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_add(v___x_669_, v_size_660_);
v___x_671_ = lean_nat_add(v___x_670_, v_size_661_);
lean_dec(v_size_661_);
lean_dec(v___x_670_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_659_);
lean_ctor_set(v___x_478_, 0, v___x_671_);
v___x_673_ = v___x_478_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_674_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_674_, 3, v_l_475_);
lean_ctor_set(v_reuseFailAlloc_674_, 4, v___x_659_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
else
{
lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_744_; 
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; lean_object* v_unused_746_; lean_object* v_unused_747_; lean_object* v_unused_748_; lean_object* v_unused_749_; 
v_unused_745_ = lean_ctor_get(v___x_659_, 4);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v___x_659_, 3);
lean_dec(v_unused_746_);
v_unused_747_ = lean_ctor_get(v___x_659_, 2);
lean_dec(v_unused_747_);
v_unused_748_ = lean_ctor_get(v___x_659_, 1);
lean_dec(v_unused_748_);
v_unused_749_ = lean_ctor_get(v___x_659_, 0);
lean_dec(v_unused_749_);
v___x_676_ = v___x_659_;
v_isShared_677_ = v_isSharedCheck_744_;
goto v_resetjp_675_;
}
else
{
lean_dec(v___x_659_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_744_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
if (lean_obj_tag(v_l_664_) == 0)
{
if (lean_obj_tag(v_r_665_) == 0)
{
lean_object* v_size_678_; lean_object* v_k_679_; lean_object* v_v_680_; lean_object* v_l_681_; lean_object* v_r_682_; lean_object* v_size_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_size_678_ = lean_ctor_get(v_l_664_, 0);
v_k_679_ = lean_ctor_get(v_l_664_, 1);
v_v_680_ = lean_ctor_get(v_l_664_, 2);
v_l_681_ = lean_ctor_get(v_l_664_, 3);
v_r_682_ = lean_ctor_get(v_l_664_, 4);
v_size_683_ = lean_ctor_get(v_r_665_, 0);
v___x_684_ = lean_unsigned_to_nat(2u);
v___x_685_ = lean_nat_mul(v___x_684_, v_size_683_);
v___x_686_ = lean_nat_dec_lt(v_size_678_, v___x_685_);
lean_dec(v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_715_; 
lean_inc(v_r_682_);
lean_inc(v_l_681_);
lean_inc(v_v_680_);
lean_inc(v_k_679_);
v_isSharedCheck_715_ = !lean_is_exclusive(v_l_664_);
if (v_isSharedCheck_715_ == 0)
{
lean_object* v_unused_716_; lean_object* v_unused_717_; lean_object* v_unused_718_; lean_object* v_unused_719_; lean_object* v_unused_720_; 
v_unused_716_ = lean_ctor_get(v_l_664_, 4);
lean_dec(v_unused_716_);
v_unused_717_ = lean_ctor_get(v_l_664_, 3);
lean_dec(v_unused_717_);
v_unused_718_ = lean_ctor_get(v_l_664_, 2);
lean_dec(v_unused_718_);
v_unused_719_ = lean_ctor_get(v_l_664_, 1);
lean_dec(v_unused_719_);
v_unused_720_ = lean_ctor_get(v_l_664_, 0);
lean_dec(v_unused_720_);
v___x_688_ = v_l_664_;
v_isShared_689_ = v_isSharedCheck_715_;
goto v_resetjp_687_;
}
else
{
lean_dec(v_l_664_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_715_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_705_; 
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_add(v___x_690_, v_size_660_);
v___x_692_ = lean_nat_add(v___x_691_, v_size_661_);
lean_dec(v_size_661_);
if (lean_obj_tag(v_l_681_) == 0)
{
lean_object* v_size_713_; 
v_size_713_ = lean_ctor_get(v_l_681_, 0);
lean_inc(v_size_713_);
v___y_705_ = v_size_713_;
goto v___jp_704_;
}
else
{
lean_object* v___x_714_; 
v___x_714_ = lean_unsigned_to_nat(0u);
v___y_705_ = v___x_714_;
goto v___jp_704_;
}
v___jp_693_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = lean_nat_add(v___y_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec(v___y_695_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 4, v_r_665_);
lean_ctor_set(v___x_688_, 3, v_r_682_);
lean_ctor_set(v___x_688_, 2, v_v_663_);
lean_ctor_set(v___x_688_, 1, v_k_662_);
lean_ctor_set(v___x_688_, 0, v___x_697_);
v___x_699_ = v___x_688_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_697_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_703_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_703_, 3, v_r_682_);
lean_ctor_set(v_reuseFailAlloc_703_, 4, v_r_665_);
v___x_699_ = v_reuseFailAlloc_703_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_701_; 
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 4, v___x_699_);
lean_ctor_set(v___x_676_, 3, v___y_694_);
lean_ctor_set(v___x_676_, 2, v_v_680_);
lean_ctor_set(v___x_676_, 1, v_k_679_);
lean_ctor_set(v___x_676_, 0, v___x_692_);
v___x_701_ = v___x_676_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_692_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_k_679_);
lean_ctor_set(v_reuseFailAlloc_702_, 2, v_v_680_);
lean_ctor_set(v_reuseFailAlloc_702_, 3, v___y_694_);
lean_ctor_set(v_reuseFailAlloc_702_, 4, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
v___jp_704_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_nat_add(v___x_691_, v___y_705_);
lean_dec(v___y_705_);
lean_dec(v___x_691_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v_l_681_);
lean_ctor_set(v___x_478_, 0, v___x_706_);
v___x_708_ = v___x_478_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_712_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_712_, 3, v_l_475_);
lean_ctor_set(v_reuseFailAlloc_712_, 4, v_l_681_);
v___x_708_ = v_reuseFailAlloc_712_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_709_; 
v___x_709_ = lean_nat_add(v___x_690_, v_size_683_);
if (lean_obj_tag(v_r_682_) == 0)
{
lean_object* v_size_710_; 
v_size_710_ = lean_ctor_get(v_r_682_, 0);
lean_inc(v_size_710_);
v___y_694_ = v___x_708_;
v___y_695_ = v___x_709_;
v___y_696_ = v_size_710_;
goto v___jp_693_;
}
else
{
lean_object* v___x_711_; 
v___x_711_ = lean_unsigned_to_nat(0u);
v___y_694_ = v___x_708_;
v___y_695_ = v___x_709_;
v___y_696_ = v___x_711_;
goto v___jp_693_;
}
}
}
}
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
lean_del_object(v___x_478_);
v___x_721_ = lean_unsigned_to_nat(1u);
v___x_722_ = lean_nat_add(v___x_721_, v_size_660_);
v___x_723_ = lean_nat_add(v___x_722_, v_size_661_);
lean_dec(v_size_661_);
v___x_724_ = lean_nat_add(v___x_722_, v_size_678_);
lean_dec(v___x_722_);
lean_inc_ref(v_l_475_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 4, v_l_664_);
lean_ctor_set(v___x_676_, 3, v_l_475_);
lean_ctor_set(v___x_676_, 2, v_v_474_);
lean_ctor_set(v___x_676_, 1, v_k_473_);
lean_ctor_set(v___x_676_, 0, v___x_724_);
v___x_726_ = v___x_676_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_739_, 3, v_l_475_);
lean_ctor_set(v_reuseFailAlloc_739_, 4, v_l_664_);
v___x_726_ = v_reuseFailAlloc_739_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
v_isSharedCheck_733_ = !lean_is_exclusive(v_l_475_);
if (v_isSharedCheck_733_ == 0)
{
lean_object* v_unused_734_; lean_object* v_unused_735_; lean_object* v_unused_736_; lean_object* v_unused_737_; lean_object* v_unused_738_; 
v_unused_734_ = lean_ctor_get(v_l_475_, 4);
lean_dec(v_unused_734_);
v_unused_735_ = lean_ctor_get(v_l_475_, 3);
lean_dec(v_unused_735_);
v_unused_736_ = lean_ctor_get(v_l_475_, 2);
lean_dec(v_unused_736_);
v_unused_737_ = lean_ctor_get(v_l_475_, 1);
lean_dec(v_unused_737_);
v_unused_738_ = lean_ctor_get(v_l_475_, 0);
lean_dec(v_unused_738_);
v___x_728_ = v_l_475_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_dec(v_l_475_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 4, v_r_665_);
lean_ctor_set(v___x_728_, 3, v___x_726_);
lean_ctor_set(v___x_728_, 2, v_v_663_);
lean_ctor_set(v___x_728_, 1, v_k_662_);
lean_ctor_set(v___x_728_, 0, v___x_723_);
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_732_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_732_, 3, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_732_, 4, v_r_665_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec_ref_known(v_l_664_, 5);
lean_del_object(v___x_676_);
lean_dec(v_v_663_);
lean_dec(v_k_662_);
lean_dec(v_size_661_);
lean_dec_ref_known(v_l_475_, 5);
lean_del_object(v___x_478_);
lean_dec(v_v_474_);
lean_dec(v_k_473_);
v___x_740_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__7);
v___x_741_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(v___x_740_);
return v___x_741_;
}
}
else
{
lean_object* v___x_742_; lean_object* v___x_743_; 
lean_del_object(v___x_676_);
lean_dec(v_r_665_);
lean_dec(v_v_663_);
lean_dec(v_k_662_);
lean_dec(v_size_661_);
lean_dec_ref_known(v_l_475_, 5);
lean_del_object(v___x_478_);
lean_dec(v_v_474_);
lean_dec(v_k_473_);
v___x_742_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg___closed__8);
v___x_743_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(v___x_742_);
return v___x_743_;
}
}
}
}
else
{
lean_object* v_size_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_754_; 
v_size_750_ = lean_ctor_get(v_l_475_, 0);
v___x_751_ = lean_unsigned_to_nat(1u);
v___x_752_ = lean_nat_add(v___x_751_, v_size_750_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_659_);
lean_ctor_set(v___x_478_, 0, v___x_752_);
v___x_754_ = v___x_478_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_755_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_755_, 3, v_l_475_);
lean_ctor_set(v_reuseFailAlloc_755_, 4, v___x_659_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_l_756_; 
v_l_756_ = lean_ctor_get(v___x_659_, 3);
lean_inc(v_l_756_);
if (lean_obj_tag(v_l_756_) == 0)
{
lean_object* v_r_757_; 
v_r_757_ = lean_ctor_get(v___x_659_, 4);
lean_inc(v_r_757_);
if (lean_obj_tag(v_r_757_) == 0)
{
lean_object* v_size_758_; lean_object* v_k_759_; lean_object* v_v_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_774_; 
v_size_758_ = lean_ctor_get(v___x_659_, 0);
v_k_759_ = lean_ctor_get(v___x_659_, 1);
v_v_760_ = lean_ctor_get(v___x_659_, 2);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; lean_object* v_unused_776_; 
v_unused_775_ = lean_ctor_get(v___x_659_, 4);
lean_dec(v_unused_775_);
v_unused_776_ = lean_ctor_get(v___x_659_, 3);
lean_dec(v_unused_776_);
v___x_762_ = v___x_659_;
v_isShared_763_ = v_isSharedCheck_774_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_v_760_);
lean_inc(v_k_759_);
lean_inc(v_size_758_);
lean_dec(v___x_659_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_774_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v_size_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v_size_764_ = lean_ctor_get(v_l_756_, 0);
v___x_765_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_nat_add(v___x_765_, v_size_758_);
lean_dec(v_size_758_);
v___x_767_ = lean_nat_add(v___x_765_, v_size_764_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 4, v_l_756_);
lean_ctor_set(v___x_762_, 3, v_l_475_);
lean_ctor_set(v___x_762_, 2, v_v_474_);
lean_ctor_set(v___x_762_, 1, v_k_473_);
lean_ctor_set(v___x_762_, 0, v___x_767_);
v___x_769_ = v___x_762_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_l_475_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_l_756_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v_r_757_);
lean_ctor_set(v___x_478_, 3, v___x_769_);
lean_ctor_set(v___x_478_, 2, v_v_760_);
lean_ctor_set(v___x_478_, 1, v_k_759_);
lean_ctor_set(v___x_478_, 0, v___x_766_);
v___x_771_ = v___x_478_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_k_759_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_v_760_);
lean_ctor_set(v_reuseFailAlloc_772_, 3, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_772_, 4, v_r_757_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
else
{
lean_object* v_k_777_; lean_object* v_v_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_802_; 
v_k_777_ = lean_ctor_get(v___x_659_, 1);
v_v_778_ = lean_ctor_get(v___x_659_, 2);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_802_ == 0)
{
lean_object* v_unused_803_; lean_object* v_unused_804_; lean_object* v_unused_805_; 
v_unused_803_ = lean_ctor_get(v___x_659_, 4);
lean_dec(v_unused_803_);
v_unused_804_ = lean_ctor_get(v___x_659_, 3);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v___x_659_, 0);
lean_dec(v_unused_805_);
v___x_780_ = v___x_659_;
v_isShared_781_ = v_isSharedCheck_802_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_v_778_);
lean_inc(v_k_777_);
lean_dec(v___x_659_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_802_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v_k_782_; lean_object* v_v_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_798_; 
v_k_782_ = lean_ctor_get(v_l_756_, 1);
v_v_783_ = lean_ctor_get(v_l_756_, 2);
v_isSharedCheck_798_ = !lean_is_exclusive(v_l_756_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; lean_object* v_unused_800_; lean_object* v_unused_801_; 
v_unused_799_ = lean_ctor_get(v_l_756_, 4);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_l_756_, 3);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_l_756_, 0);
lean_dec(v_unused_801_);
v___x_785_ = v_l_756_;
v_isShared_786_ = v_isSharedCheck_798_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_v_783_);
lean_inc(v_k_782_);
lean_dec(v_l_756_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_798_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_787_ = lean_unsigned_to_nat(3u);
v___x_788_ = lean_unsigned_to_nat(1u);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 4, v_r_757_);
lean_ctor_set(v___x_785_, 3, v_r_757_);
lean_ctor_set(v___x_785_, 2, v_v_474_);
lean_ctor_set(v___x_785_, 1, v_k_473_);
lean_ctor_set(v___x_785_, 0, v___x_788_);
v___x_790_ = v___x_785_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_797_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_797_, 3, v_r_757_);
lean_ctor_set(v_reuseFailAlloc_797_, 4, v_r_757_);
v___x_790_ = v_reuseFailAlloc_797_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_792_; 
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 3, v_r_757_);
lean_ctor_set(v___x_780_, 0, v___x_788_);
v___x_792_ = v___x_780_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_k_777_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v_v_778_);
lean_ctor_set(v_reuseFailAlloc_796_, 3, v_r_757_);
lean_ctor_set(v_reuseFailAlloc_796_, 4, v_r_757_);
v___x_792_ = v_reuseFailAlloc_796_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_794_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_792_);
lean_ctor_set(v___x_478_, 3, v___x_790_);
lean_ctor_set(v___x_478_, 2, v_v_783_);
lean_ctor_set(v___x_478_, 1, v_k_782_);
lean_ctor_set(v___x_478_, 0, v___x_787_);
v___x_794_ = v___x_478_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_k_782_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_v_783_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_806_; 
v_r_806_ = lean_ctor_get(v___x_659_, 4);
lean_inc(v_r_806_);
if (lean_obj_tag(v_r_806_) == 0)
{
lean_object* v_k_807_; lean_object* v_v_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_820_; 
v_k_807_ = lean_ctor_get(v___x_659_, 1);
v_v_808_ = lean_ctor_get(v___x_659_, 2);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; lean_object* v_unused_822_; lean_object* v_unused_823_; 
v_unused_821_ = lean_ctor_get(v___x_659_, 4);
lean_dec(v_unused_821_);
v_unused_822_ = lean_ctor_get(v___x_659_, 3);
lean_dec(v_unused_822_);
v_unused_823_ = lean_ctor_get(v___x_659_, 0);
lean_dec(v_unused_823_);
v___x_810_ = v___x_659_;
v_isShared_811_ = v_isSharedCheck_820_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_v_808_);
lean_inc(v_k_807_);
lean_dec(v___x_659_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_820_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_812_ = lean_unsigned_to_nat(3u);
v___x_813_ = lean_unsigned_to_nat(1u);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_l_756_);
lean_ctor_set(v___x_810_, 2, v_v_474_);
lean_ctor_set(v___x_810_, 1, v_k_473_);
lean_ctor_set(v___x_810_, 0, v___x_813_);
v___x_815_ = v___x_810_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_819_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_819_, 3, v_l_756_);
lean_ctor_set(v_reuseFailAlloc_819_, 4, v_l_756_);
v___x_815_ = v_reuseFailAlloc_819_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_817_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v_r_806_);
lean_ctor_set(v___x_478_, 3, v___x_815_);
lean_ctor_set(v___x_478_, 2, v_v_808_);
lean_ctor_set(v___x_478_, 1, v_k_807_);
lean_ctor_set(v___x_478_, 0, v___x_812_);
v___x_817_ = v___x_478_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v_k_807_);
lean_ctor_set(v_reuseFailAlloc_818_, 2, v_v_808_);
lean_ctor_set(v_reuseFailAlloc_818_, 3, v___x_815_);
lean_ctor_set(v_reuseFailAlloc_818_, 4, v_r_806_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
else
{
lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_824_ = lean_unsigned_to_nat(2u);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_659_);
lean_ctor_set(v___x_478_, 3, v_r_806_);
lean_ctor_set(v___x_478_, 0, v___x_824_);
v___x_826_ = v___x_478_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_827_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_827_, 3, v_r_806_);
lean_ctor_set(v_reuseFailAlloc_827_, 4, v___x_659_);
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
lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_828_ = lean_unsigned_to_nat(1u);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 4, v___x_659_);
lean_ctor_set(v___x_478_, 3, v___x_659_);
lean_ctor_set(v___x_478_, 0, v___x_828_);
v___x_830_ = v___x_478_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_831_, 3, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_831_, 4, v___x_659_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_unsigned_to_nat(1u);
v___x_834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v_k_469_);
lean_ctor_set(v___x_834_, 2, v_v_470_);
lean_ctor_set(v___x_834_, 3, v_t_471_);
lean_ctor_set(v___x_834_, 4, v_t_471_);
return v___x_834_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1_spec__5(lean_object* v_init_835_, lean_object* v_x_836_){
_start:
{
if (lean_obj_tag(v_x_836_) == 0)
{
lean_object* v_k_837_; lean_object* v_v_838_; lean_object* v_l_839_; lean_object* v_r_840_; lean_object* v___x_841_; uint8_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_k_837_ = lean_ctor_get(v_x_836_, 1);
lean_inc(v_k_837_);
v_v_838_ = lean_ctor_get(v_x_836_, 2);
lean_inc(v_v_838_);
v_l_839_ = lean_ctor_get(v_x_836_, 3);
lean_inc(v_l_839_);
v_r_840_ = lean_ctor_get(v_x_836_, 4);
lean_inc(v_r_840_);
lean_dec_ref_known(v_x_836_, 5);
v___x_841_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1_spec__5(v_init_835_, v_l_839_);
v___x_842_ = 1;
v___x_843_ = l_Lean_Name_toString(v_k_837_, v___x_842_);
v___x_844_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_844_, 0, v_v_838_);
v___x_845_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg(v___x_843_, v___x_844_, v___x_841_);
v_init_835_ = v___x_845_;
v_x_836_ = v_r_840_;
goto _start;
}
else
{
return v_init_835_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0(lean_object* v_m_847_){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = lean_box(1);
v___x_849_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1_spec__5(v___x_848_, v_m_847_);
v___x_850_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson(lean_object* v_x_851_){
_start:
{
if (lean_obj_tag(v_x_851_) == 0)
{
lean_object* v_name_852_; lean_object* v_opts_853_; uint8_t v_inherited_854_; lean_object* v_dir_855_; lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_name_852_ = lean_ctor_get(v_x_851_, 0);
lean_inc(v_name_852_);
v_opts_853_ = lean_ctor_get(v_x_851_, 1);
lean_inc(v_opts_853_);
v_inherited_854_ = lean_ctor_get_uint8(v_x_851_, sizeof(void*)*3);
v_dir_855_ = lean_ctor_get(v_x_851_, 2);
lean_inc_ref(v_dir_855_);
lean_dec_ref_known(v_x_851_, 3);
v___x_856_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2));
v___x_857_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6));
v___x_858_ = 1;
v___x_859_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_852_, v___x_858_);
v___x_860_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_860_, 0, v___x_859_);
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_857_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
v___x_862_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__8));
v___x_863_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0(v_opts_853_);
v___x_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10));
v___x_866_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_866_, 0, v_inherited_854_);
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_865_);
lean_ctor_set(v___x_867_, 1, v___x_866_);
v___x_868_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22));
v___x_869_ = l_Lake_mkRelPathString(v_dir_855_);
v___x_870_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_868_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = lean_box(0);
v___x_873_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_867_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_864_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_861_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = l_Lean_Json_mkObj(v___x_876_);
lean_dec_ref_known(v___x_876_, 2);
v___x_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_856_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
lean_ctor_set(v___x_879_, 1, v___x_872_);
v___x_880_ = l_Lean_Json_mkObj(v___x_879_);
lean_dec_ref_known(v___x_879_, 2);
return v___x_880_;
}
else
{
lean_object* v_name_881_; lean_object* v_opts_882_; uint8_t v_inherited_883_; lean_object* v_url_884_; lean_object* v_rev_885_; lean_object* v_inputRev_x3f_886_; lean_object* v_subDir_x3f_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_name_881_ = lean_ctor_get(v_x_851_, 0);
lean_inc(v_name_881_);
v_opts_882_ = lean_ctor_get(v_x_851_, 1);
lean_inc(v_opts_882_);
v_inherited_883_ = lean_ctor_get_uint8(v_x_851_, sizeof(void*)*6);
v_url_884_ = lean_ctor_get(v_x_851_, 2);
lean_inc_ref(v_url_884_);
v_rev_885_ = lean_ctor_get(v_x_851_, 3);
lean_inc_ref(v_rev_885_);
v_inputRev_x3f_886_ = lean_ctor_get(v_x_851_, 4);
lean_inc(v_inputRev_x3f_886_);
v_subDir_x3f_887_ = lean_ctor_get(v_x_851_, 5);
lean_inc(v_subDir_x3f_887_);
lean_dec_ref_known(v_x_851_, 6);
v___x_888_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3));
v___x_889_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6));
v___x_890_ = 1;
v___x_891_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_881_, v___x_890_);
v___x_892_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_889_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__8));
v___x_895_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0(v_opts_882_);
v___x_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_894_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10));
v___x_898_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_898_, 0, v_inherited_883_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12));
v___x_901_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_901_, 0, v_url_884_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14));
v___x_904_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_904_, 0, v_rev_885_);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_903_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__16));
v___x_907_ = l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__1(v_inputRev_x3f_886_);
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
v___x_909_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__18));
v___x_910_ = l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__2(v_subDir_x3f_887_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_box(0);
v___x_913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_908_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_905_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_902_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_899_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_896_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_893_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = l_Lean_Json_mkObj(v___x_919_);
lean_dec_ref_known(v___x_919_, 2);
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_888_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v___x_912_);
v___x_923_ = l_Lean_Json_mkObj(v___x_922_);
lean_dec_ref_known(v___x_922_, 2);
return v___x_923_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_924_, lean_object* v_msg_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0_spec__3___redArg(v_msg_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0(lean_object* v_00_u03b2_927_, lean_object* v_k_928_, lean_object* v_v_929_, lean_object* v_t_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__0___redArg(v_k_928_, v_v_929_, v_t_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1(lean_object* v_init_932_, lean_object* v_t_933_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__0_spec__1_spec__5(v_init_932_, v_t_933_);
return v___x_934_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackageEntryV6_default___closed__0(void){
_start:
{
lean_object* v___x_937_; uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_937_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v___x_938_ = 0;
v___x_939_ = lean_box(1);
v___x_940_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3);
v___x_941_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set(v___x_941_, 1, v___x_939_);
lean_ctor_set(v___x_941_, 2, v___x_937_);
lean_ctor_set_uint8(v___x_941_, sizeof(void*)*3, v___x_938_);
return v___x_941_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackageEntryV6_default(void){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = lean_obj_once(&l_Lake_instInhabitedPackageEntryV6_default___closed__0, &l_Lake_instInhabitedPackageEntryV6_default___closed__0_once, _init_l_Lake_instInhabitedPackageEntryV6_default___closed__0);
return v___x_942_;
}
}
static lean_object* _init_l___private_Lake_Load_Manifest_0__Lake_instInhabitedPackageEntryV6(void){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lake_instInhabitedPackageEntryV6_default;
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorIdx(lean_object* v_x_944_){
_start:
{
if (lean_obj_tag(v_x_944_) == 0)
{
lean_object* v___x_945_; 
v___x_945_ = lean_unsigned_to_nat(0u);
return v___x_945_;
}
else
{
lean_object* v___x_946_; 
v___x_946_ = lean_unsigned_to_nat(1u);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorIdx___boxed(lean_object* v_x_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lake_PackageEntrySrc_ctorIdx(v_x_947_);
lean_dec_ref(v_x_947_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorElim___redArg(lean_object* v_t_949_, lean_object* v_k_950_){
_start:
{
if (lean_obj_tag(v_t_949_) == 0)
{
lean_object* v_dir_951_; lean_object* v___x_952_; 
v_dir_951_ = lean_ctor_get(v_t_949_, 0);
lean_inc_ref(v_dir_951_);
lean_dec_ref_known(v_t_949_, 1);
v___x_952_ = lean_apply_1(v_k_950_, v_dir_951_);
return v___x_952_;
}
else
{
lean_object* v_url_953_; lean_object* v_rev_954_; lean_object* v_inputRev_x3f_955_; lean_object* v_subDir_x3f_956_; lean_object* v___x_957_; 
v_url_953_ = lean_ctor_get(v_t_949_, 0);
lean_inc_ref(v_url_953_);
v_rev_954_ = lean_ctor_get(v_t_949_, 1);
lean_inc_ref(v_rev_954_);
v_inputRev_x3f_955_ = lean_ctor_get(v_t_949_, 2);
lean_inc(v_inputRev_x3f_955_);
v_subDir_x3f_956_ = lean_ctor_get(v_t_949_, 3);
lean_inc(v_subDir_x3f_956_);
lean_dec_ref_known(v_t_949_, 4);
v___x_957_ = lean_apply_4(v_k_950_, v_url_953_, v_rev_954_, v_inputRev_x3f_955_, v_subDir_x3f_956_);
return v___x_957_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorElim(lean_object* v_motive_958_, lean_object* v_ctorIdx_959_, lean_object* v_t_960_, lean_object* v_h_961_, lean_object* v_k_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_Lake_PackageEntrySrc_ctorElim___redArg(v_t_960_, v_k_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_ctorElim___boxed(lean_object* v_motive_964_, lean_object* v_ctorIdx_965_, lean_object* v_t_966_, lean_object* v_h_967_, lean_object* v_k_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lake_PackageEntrySrc_ctorElim(v_motive_964_, v_ctorIdx_965_, v_t_966_, v_h_967_, v_k_968_);
lean_dec(v_ctorIdx_965_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_path_elim___redArg(lean_object* v_t_970_, lean_object* v_path_971_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l_Lake_PackageEntrySrc_ctorElim___redArg(v_t_970_, v_path_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_path_elim(lean_object* v_motive_973_, lean_object* v_t_974_, lean_object* v_h_975_, lean_object* v_path_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lake_PackageEntrySrc_ctorElim___redArg(v_t_974_, v_path_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_git_elim___redArg(lean_object* v_t_978_, lean_object* v_git_979_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lake_PackageEntrySrc_ctorElim___redArg(v_t_978_, v_git_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntrySrc_git_elim(lean_object* v_motive_981_, lean_object* v_t_982_, lean_object* v_h_983_, lean_object* v_git_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lake_PackageEntrySrc_ctorElim___redArg(v_t_982_, v_git_984_);
return v___x_985_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackageEntry_default___closed__0(void){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_990_ = ((lean_object*)(l_Lake_instInhabitedPackageEntrySrc_default));
v___x_991_ = lean_box(0);
v___x_992_ = l_Lake_defaultConfigFile;
v___x_993_ = 0;
v___x_994_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v___x_995_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3);
v___x_996_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___x_994_);
lean_ctor_set(v___x_996_, 2, v___x_992_);
lean_ctor_set(v___x_996_, 3, v___x_991_);
lean_ctor_set(v___x_996_, 4, v___x_990_);
lean_ctor_set_uint8(v___x_996_, sizeof(void*)*5, v___x_993_);
return v___x_996_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackageEntry_default(void){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = lean_obj_once(&l_Lake_instInhabitedPackageEntry_default___closed__0, &l_Lake_instInhabitedPackageEntry_default___closed__0_once, _init_l_Lake_instInhabitedPackageEntry_default___closed__0);
return v___x_997_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackageEntry(void){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Lake_instInhabitedPackageEntry_default;
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_toJson(lean_object* v_entry_1015_){
_start:
{
lean_object* v_name_1016_; lean_object* v_scope_1017_; uint8_t v_inherited_1018_; lean_object* v_configFile_1019_; lean_object* v_manifestFile_x3f_1020_; lean_object* v_src_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v_fields_1045_; 
v_name_1016_ = lean_ctor_get(v_entry_1015_, 0);
lean_inc(v_name_1016_);
v_scope_1017_ = lean_ctor_get(v_entry_1015_, 1);
lean_inc_ref(v_scope_1017_);
v_inherited_1018_ = lean_ctor_get_uint8(v_entry_1015_, sizeof(void*)*5);
v_configFile_1019_ = lean_ctor_get(v_entry_1015_, 2);
lean_inc_ref(v_configFile_1019_);
v_manifestFile_x3f_1020_ = lean_ctor_get(v_entry_1015_, 3);
lean_inc(v_manifestFile_x3f_1020_);
v_src_1021_ = lean_ctor_get(v_entry_1015_, 4);
lean_inc_ref(v_src_1021_);
lean_dec_ref(v_entry_1015_);
v___x_1022_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6));
v___x_1023_ = 1;
v___x_1024_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1016_, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1022_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__0));
v___x_1028_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1028_, 0, v_scope_1017_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__1));
v___x_1031_ = l_Lake_mkRelPathString(v_configFile_1019_);
v___x_1032_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1030_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__2));
v___x_1035_ = l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__2(v_manifestFile_x3f_1020_);
v___x_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10));
v___x_1038_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1038_, 0, v_inherited_1018_);
v___x_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1037_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1036_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1033_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1029_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v_fields_1045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_fields_1045_, 0, v___x_1026_);
lean_ctor_set(v_fields_1045_, 1, v___x_1044_);
if (lean_obj_tag(v_src_1021_) == 0)
{
lean_object* v_dir_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1061_; 
v_dir_1046_ = lean_ctor_get(v_src_1021_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_src_1021_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1048_ = v_src_1021_;
v_isShared_1049_ = v_isSharedCheck_1061_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_dir_1046_);
lean_dec(v_src_1021_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1061_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1050_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__5));
v___x_1051_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22));
v___x_1052_ = l_Lake_mkRelPathString(v_dir_1046_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set_tag(v___x_1048_, 3);
lean_ctor_set(v___x_1048_, 0, v___x_1052_);
v___x_1054_ = v___x_1048_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1051_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set(v___x_1056_, 1, v___x_1040_);
v___x_1057_ = l_List_appendTR___redArg(v_fields_1045_, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1050_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = l_Lean_Json_mkObj(v___x_1058_);
lean_dec_ref_known(v___x_1058_, 2);
return v___x_1059_;
}
}
}
else
{
lean_object* v_url_1062_; lean_object* v_rev_1063_; lean_object* v_inputRev_x3f_1064_; lean_object* v_subDir_x3f_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v_url_1062_ = lean_ctor_get(v_src_1021_, 0);
lean_inc_ref(v_url_1062_);
v_rev_1063_ = lean_ctor_get(v_src_1021_, 1);
lean_inc_ref(v_rev_1063_);
v_inputRev_x3f_1064_ = lean_ctor_get(v_src_1021_, 2);
lean_inc(v_inputRev_x3f_1064_);
v_subDir_x3f_1065_ = lean_ctor_get(v_src_1021_, 3);
lean_inc(v_subDir_x3f_1065_);
lean_dec_ref_known(v_src_1021_, 4);
v___x_1066_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__7));
v___x_1067_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12));
v___x_1068_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_url_1062_);
v___x_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14));
v___x_1071_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1071_, 0, v_rev_1063_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__8));
v___x_1074_ = l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__1(v_inputRev_x3f_1064_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__9));
v___x_1077_ = l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__2(v_subDir_x3f_1065_);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v___x_1040_);
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1075_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1072_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1069_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = l_List_appendTR___redArg(v_fields_1045_, v___x_1082_);
v___x_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1066_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = l_Lean_Json_mkObj(v___x_1084_);
lean_dec_ref_known(v___x_1084_, 2);
return v___x_1085_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_fromJson_x3f___lam__0(lean_object* v_x_1089_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___lam__0___closed__0));
v___x_1091_ = lean_string_append(v___x_1090_, v_x_1089_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_fromJson_x3f___lam__0___boxed(lean_object* v_x_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lake_PackageEntry_fromJson_x3f___lam__0(v_x_1092_);
lean_dec_ref(v_x_1092_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_fromJson_x3f(lean_object* v_json_1114_){
_start:
{
lean_object* v_a_1116_; lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_Json_getObj_x3f(v_json_1114_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1128_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1122_ = v___x_1119_;
v_isShared_1123_ = v_isSharedCheck_1128_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1119_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1128_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1126_; 
v___x_1124_ = l_Lake_PackageEntry_fromJson_x3f___lam__0(v_a_1120_);
lean_dec(v_a_1120_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 0, v___x_1124_);
v___x_1126_ = v___x_1122_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1124_);
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
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
v_a_1129_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1119_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1119_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 0);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1359_; 
v_a_1137_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1139_ = v___x_1119_;
v_isShared_1140_ = v_isSharedCheck_1359_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1119_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1359_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6));
v___x_1142_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v___x_1143_; 
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v___x_1143_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__0));
v_a_1116_ = v___x_1143_;
goto v___jp_1115_;
}
else
{
lean_object* v_val_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1358_; 
v_val_1144_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1146_ = v___x_1142_;
v_isShared_1147_ = v_isSharedCheck_1358_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_val_1144_);
lean_dec(v___x_1142_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1358_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lean_Name_fromJson_x3f(v_val_1144_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v___x_1150_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__1));
v___x_1151_ = lean_string_append(v___x_1150_, v_a_1149_);
lean_dec(v_a_1149_);
v_a_1116_ = v___x_1151_;
goto v___jp_1115_;
}
else
{
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1152_; 
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1152_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1148_, 1);
v_a_1116_ = v_a_1152_;
goto v___jp_1115_;
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1357_; 
v_a_1153_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1155_ = v___x_1148_;
v_isShared_1156_ = v_isSharedCheck_1357_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1148_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1357_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v_a_1158_; uint8_t v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v_a_1174_; uint8_t v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v_a_1190_; lean_object* v___y_1193_; uint8_t v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v_a_1199_; uint8_t v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v_a_1215_; uint8_t v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; uint8_t v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v_a_1280_; uint8_t v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; lean_object* v_a_1297_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__0));
v___x_1334_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1333_);
if (lean_obj_tag(v___x_1334_) == 0)
{
goto v___jp_1331_;
}
else
{
lean_object* v_val_1335_; lean_object* v___x_1336_; 
v_val_1335_ = lean_ctor_get(v___x_1334_, 0);
lean_inc(v_val_1335_);
lean_dec_ref_known(v___x_1334_, 1);
v___x_1336_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1(v_val_1335_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1346_; 
lean_del_object(v___x_1155_);
lean_dec(v_a_1153_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1339_ = v___x_1336_;
v_isShared_1340_ = v_isSharedCheck_1346_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1336_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1346_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1344_; 
v___x_1341_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__19));
v___x_1342_ = lean_string_append(v___x_1341_, v_a_1337_);
lean_dec(v_a_1337_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v___x_1342_);
v___x_1344_ = v___x_1339_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
else
{
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_del_object(v___x_1155_);
lean_dec(v_a_1153_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1347_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1336_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1336_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
lean_ctor_set_tag(v___x_1349_, 0);
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1347_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
else
{
lean_object* v_a_1355_; 
v_a_1355_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1336_, 1);
if (lean_obj_tag(v_a_1355_) == 0)
{
goto v___jp_1331_;
}
else
{
lean_object* v_val_1356_; 
v_val_1356_ = lean_ctor_get(v_a_1355_, 0);
lean_inc(v_val_1356_);
lean_dec_ref_known(v_a_1355_, 1);
v_a_1297_ = v_val_1356_;
goto v___jp_1296_;
}
}
}
}
v___jp_1157_:
{
lean_object* v___x_1159_; uint8_t v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1167_; 
v___x_1159_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__2));
v___x_1160_ = 1;
v___x_1161_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1153_, v___x_1160_);
v___x_1162_ = lean_string_append(v___x_1159_, v___x_1161_);
lean_dec_ref(v___x_1161_);
v___x_1163_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__3));
v___x_1164_ = lean_string_append(v___x_1162_, v___x_1163_);
v___x_1165_ = lean_string_append(v___x_1164_, v_a_1158_);
lean_dec_ref(v_a_1158_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set_tag(v___x_1155_, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1165_);
v___x_1167_ = v___x_1155_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
v___jp_1169_:
{
lean_object* v___x_1176_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___y_1172_);
v___x_1176_ = v___x_1146_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___y_1172_);
v___x_1176_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1177_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1177_, 0, v_a_1153_);
lean_ctor_set(v___x_1177_, 1, v___y_1173_);
lean_ctor_set(v___x_1177_, 2, v___y_1171_);
lean_ctor_set(v___x_1177_, 3, v___x_1176_);
lean_ctor_set(v___x_1177_, 4, v_a_1174_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*5, v___y_1170_);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v___x_1177_);
v___x_1179_ = v___x_1139_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
v___jp_1182_:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1191_, 0, v___y_1188_);
lean_ctor_set(v___x_1191_, 1, v___y_1184_);
lean_ctor_set(v___x_1191_, 2, v___y_1187_);
lean_ctor_set(v___x_1191_, 3, v_a_1190_);
v___y_1170_ = v___y_1183_;
v___y_1171_ = v___y_1186_;
v___y_1172_ = v___y_1185_;
v___y_1173_ = v___y_1189_;
v_a_1174_ = v___x_1191_;
goto v___jp_1169_;
}
v___jp_1192_:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__9));
v___x_1201_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1200_);
lean_dec(v_a_1137_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v___x_1202_; 
lean_del_object(v___x_1155_);
v___x_1202_ = lean_box(0);
v___y_1183_ = v___y_1194_;
v___y_1184_ = v___y_1193_;
v___y_1185_ = v___y_1197_;
v___y_1186_ = v___y_1196_;
v___y_1187_ = v_a_1199_;
v___y_1188_ = v___y_1195_;
v___y_1189_ = v___y_1198_;
v_a_1190_ = v___x_1202_;
goto v___jp_1182_;
}
else
{
lean_object* v_val_1203_; lean_object* v___x_1204_; 
v_val_1203_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_val_1203_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1204_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(v_val_1203_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec(v_a_1199_);
lean_dec_ref(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec_ref(v___y_1193_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__4));
v___x_1207_ = lean_string_append(v___x_1206_, v_a_1205_);
lean_dec(v_a_1205_);
v_a_1158_ = v___x_1207_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1208_; 
lean_dec(v_a_1199_);
lean_dec_ref(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec_ref(v___y_1193_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
v_a_1208_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1208_);
lean_dec_ref_known(v___x_1204_, 1);
v_a_1158_ = v_a_1208_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1209_; 
lean_del_object(v___x_1155_);
v_a_1209_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1204_, 1);
v___y_1183_ = v___y_1194_;
v___y_1184_ = v___y_1193_;
v___y_1185_ = v___y_1197_;
v___y_1186_ = v___y_1196_;
v___y_1187_ = v_a_1199_;
v___y_1188_ = v___y_1195_;
v___y_1189_ = v___y_1198_;
v_a_1190_ = v_a_1209_;
goto v___jp_1182_;
}
}
}
}
v___jp_1210_:
{
lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1216_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__2));
v___x_1217_ = lean_string_dec_eq(v___y_1214_, v___x_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1218_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__3));
v___x_1219_ = lean_string_dec_eq(v___y_1214_, v___x_1218_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v___x_1220_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__5));
v___x_1221_ = lean_string_append(v___x_1220_, v___y_1214_);
lean_dec_ref(v___y_1214_);
v___x_1222_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2));
v___x_1223_ = lean_string_append(v___x_1221_, v___x_1222_);
v_a_1158_ = v___x_1223_;
goto v___jp_1157_;
}
else
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
lean_dec_ref(v___y_1214_);
v___x_1224_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__12));
v___x_1225_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1224_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v___x_1226_; 
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v___x_1226_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__6));
v_a_1158_ = v___x_1226_;
goto v___jp_1157_;
}
else
{
lean_object* v_val_1227_; lean_object* v___x_1228_; 
v_val_1227_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_val_1227_);
lean_dec_ref_known(v___x_1225_, 1);
v___x_1228_ = l_Lean_Json_getStr_x3f(v_val_1227_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1229_);
lean_dec_ref_known(v___x_1228_, 1);
v___x_1230_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__7));
v___x_1231_ = lean_string_append(v___x_1230_, v_a_1229_);
lean_dec(v_a_1229_);
v_a_1158_ = v___x_1231_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1232_; 
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1232_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1228_, 1);
v_a_1158_ = v_a_1232_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_a_1233_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v___x_1228_, 1);
v___x_1234_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__14));
v___x_1235_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1234_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v___x_1236_; 
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v___x_1236_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__8));
v_a_1158_ = v___x_1236_;
goto v___jp_1157_;
}
else
{
lean_object* v_val_1237_; lean_object* v___x_1238_; 
v_val_1237_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_val_1237_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1238_ = l_Lean_Json_getStr_x3f(v_val_1237_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__9));
v___x_1241_ = lean_string_append(v___x_1240_, v_a_1239_);
lean_dec(v_a_1239_);
v_a_1158_ = v___x_1241_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1242_; 
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1242_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1238_, 1);
v_a_1158_ = v_a_1242_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v_a_1243_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1244_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__8));
v___x_1245_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1244_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_box(0);
v___y_1193_ = v_a_1243_;
v___y_1194_ = v___y_1211_;
v___y_1195_ = v_a_1233_;
v___y_1196_ = v___y_1212_;
v___y_1197_ = v_a_1215_;
v___y_1198_ = v___y_1213_;
v_a_1199_ = v___x_1246_;
goto v___jp_1192_;
}
else
{
lean_object* v_val_1247_; lean_object* v___x_1248_; 
v_val_1247_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_val_1247_);
lean_dec_ref_known(v___x_1245_, 1);
v___x_1248_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__1(v_val_1247_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
lean_dec(v_a_1243_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1248_, 1);
v___x_1250_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__10));
v___x_1251_ = lean_string_append(v___x_1250_, v_a_1249_);
lean_dec(v_a_1249_);
v_a_1158_ = v___x_1251_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1252_; 
lean_dec(v_a_1243_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1252_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v___x_1248_, 1);
v_a_1158_ = v_a_1252_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1253_; 
v_a_1253_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1253_);
lean_dec_ref_known(v___x_1248_, 1);
v___y_1193_ = v_a_1243_;
v___y_1194_ = v___y_1211_;
v___y_1195_ = v_a_1233_;
v___y_1196_ = v___y_1212_;
v___y_1197_ = v_a_1215_;
v___y_1198_ = v___y_1213_;
v_a_1199_ = v_a_1253_;
goto v___jp_1192_;
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
else
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
lean_dec_ref(v___y_1214_);
v___x_1254_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__22));
v___x_1255_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1254_);
lean_dec(v_a_1137_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v___x_1256_; 
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
v___x_1256_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__11));
v_a_1158_ = v___x_1256_;
goto v___jp_1157_;
}
else
{
lean_object* v_val_1257_; lean_object* v___x_1258_; 
v_val_1257_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_val_1257_);
lean_dec_ref_known(v___x_1255_, 1);
v___x_1258_ = l_Lean_Json_getStr_x3f(v_val_1257_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_dec_ref(v_a_1215_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__12));
v___x_1261_ = lean_string_append(v___x_1260_, v_a_1259_);
lean_dec(v_a_1259_);
v_a_1158_ = v___x_1261_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
lean_del_object(v___x_1155_);
v_a_1262_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1258_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1258_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
lean_ctor_set_tag(v___x_1264_, 0);
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
v___y_1170_ = v___y_1211_;
v___y_1171_ = v___y_1212_;
v___y_1172_ = v_a_1215_;
v___y_1173_ = v___y_1213_;
v_a_1174_ = v___x_1267_;
goto v___jp_1169_;
}
}
}
}
}
}
v___jp_1270_:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lake_defaultManifestFile;
v___y_1211_ = v___y_1271_;
v___y_1212_ = v___y_1272_;
v___y_1213_ = v___y_1273_;
v___y_1214_ = v___y_1274_;
v_a_1215_ = v___x_1275_;
goto v___jp_1210_;
}
v___jp_1276_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__2));
v___x_1282_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1281_);
if (lean_obj_tag(v___x_1282_) == 0)
{
v___y_1271_ = v___y_1277_;
v___y_1272_ = v_a_1280_;
v___y_1273_ = v___y_1278_;
v___y_1274_ = v___y_1279_;
goto v___jp_1270_;
}
else
{
lean_object* v_val_1283_; lean_object* v___x_1284_; 
v_val_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_val_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(v_val_1283_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec_ref(v_a_1280_);
lean_dec_ref(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_a_1285_);
lean_dec_ref_known(v___x_1284_, 1);
v___x_1286_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__13));
v___x_1287_ = lean_string_append(v___x_1286_, v_a_1285_);
lean_dec(v_a_1285_);
v_a_1158_ = v___x_1287_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1288_; 
lean_dec_ref(v_a_1280_);
lean_dec_ref(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1288_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1284_, 1);
v_a_1158_ = v_a_1288_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1289_; 
v_a_1289_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_1284_, 1);
if (lean_obj_tag(v_a_1289_) == 0)
{
v___y_1271_ = v___y_1277_;
v___y_1272_ = v_a_1280_;
v___y_1273_ = v___y_1278_;
v___y_1274_ = v___y_1279_;
goto v___jp_1270_;
}
else
{
lean_object* v_val_1290_; 
v_val_1290_ = lean_ctor_get(v_a_1289_, 0);
lean_inc(v_val_1290_);
lean_dec_ref_known(v_a_1289_, 1);
v___y_1211_ = v___y_1277_;
v___y_1212_ = v_a_1280_;
v___y_1213_ = v___y_1278_;
v___y_1214_ = v___y_1279_;
v_a_1215_ = v_val_1290_;
goto v___jp_1210_;
}
}
}
}
}
v___jp_1291_:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lake_defaultConfigFile;
v___y_1277_ = v___y_1292_;
v___y_1278_ = v___y_1293_;
v___y_1279_ = v___y_1294_;
v_a_1280_ = v___x_1295_;
goto v___jp_1276_;
}
v___jp_1296_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__3));
v___x_1299_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1298_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v___x_1300_; 
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v___x_1300_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__14));
v_a_1158_ = v___x_1300_;
goto v___jp_1157_;
}
else
{
lean_object* v_val_1301_; lean_object* v___x_1302_; 
v_val_1301_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_val_1301_);
lean_dec_ref_known(v___x_1299_, 1);
v___x_1302_ = l_Lean_Json_getStr_x3f(v_val_1301_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v___x_1302_, 1);
v___x_1304_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__15));
v___x_1305_ = lean_string_append(v___x_1304_, v_a_1303_);
lean_dec(v_a_1303_);
v_a_1158_ = v___x_1305_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1306_; 
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1306_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1302_, 1);
v_a_1158_ = v_a_1306_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_a_1307_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1302_, 1);
v___x_1308_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__10));
v___x_1309_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1308_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v___x_1310_; 
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v___x_1310_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__16));
v_a_1158_ = v___x_1310_;
goto v___jp_1157_;
}
else
{
lean_object* v_val_1311_; lean_object* v___x_1312_; 
v_val_1311_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_val_1311_);
lean_dec_ref_known(v___x_1309_, 1);
v___x_1312_ = l_Lean_Json_getBool_x3f(v_val_1311_);
lean_dec(v_val_1311_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1313_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1314_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__17));
v___x_1315_ = lean_string_append(v___x_1314_, v_a_1313_);
lean_dec(v_a_1313_);
v_a_1158_ = v___x_1315_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1316_; 
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1316_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1316_);
lean_dec_ref_known(v___x_1312_, 1);
v_a_1158_ = v_a_1316_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v_a_1317_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1318_ = ((lean_object*)(l_Lake_PackageEntry_toJson___closed__1));
v___x_1319_ = l_Lake_JsonObject_getJson_x3f(v_a_1137_, v___x_1318_);
if (lean_obj_tag(v___x_1319_) == 0)
{
uint8_t v___x_1320_; 
v___x_1320_ = lean_unbox(v_a_1317_);
lean_dec(v_a_1317_);
v___y_1292_ = v___x_1320_;
v___y_1293_ = v_a_1297_;
v___y_1294_ = v_a_1307_;
goto v___jp_1291_;
}
else
{
lean_object* v_val_1321_; lean_object* v___x_1322_; 
v_val_1321_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_val_1321_);
lean_dec_ref_known(v___x_1319_, 1);
v___x_1322_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(v_val_1321_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec(v_a_1317_);
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref_known(v___x_1322_, 1);
v___x_1324_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__18));
v___x_1325_ = lean_string_append(v___x_1324_, v_a_1323_);
lean_dec(v_a_1323_);
v_a_1158_ = v___x_1325_;
goto v___jp_1157_;
}
else
{
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1326_; 
lean_dec(v_a_1317_);
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1297_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1139_);
lean_dec(v_a_1137_);
v_a_1326_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1322_, 1);
v_a_1158_ = v_a_1326_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1327_; 
v_a_1327_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1322_, 1);
if (lean_obj_tag(v_a_1327_) == 0)
{
uint8_t v___x_1328_; 
v___x_1328_ = lean_unbox(v_a_1317_);
lean_dec(v_a_1317_);
v___y_1292_ = v___x_1328_;
v___y_1293_ = v_a_1297_;
v___y_1294_ = v_a_1307_;
goto v___jp_1291_;
}
else
{
lean_object* v_val_1329_; uint8_t v___x_1330_; 
v_val_1329_ = lean_ctor_get(v_a_1327_, 0);
lean_inc(v_val_1329_);
lean_dec_ref_known(v_a_1327_, 1);
v___x_1330_ = lean_unbox(v_a_1317_);
lean_dec(v_a_1317_);
v___y_1277_ = v___x_1330_;
v___y_1278_ = v_a_1297_;
v___y_1279_ = v_a_1307_;
v_a_1280_ = v_val_1329_;
goto v___jp_1276_;
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
v___jp_1331_:
{
lean_object* v___x_1332_; 
v___x_1332_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v_a_1297_ = v___x_1332_;
goto v___jp_1296_;
}
}
}
}
}
}
}
}
}
v___jp_1115_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = l_Lake_PackageEntry_fromJson_x3f___lam__0(v_a_1116_);
lean_dec_ref(v_a_1116_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_prettyName(lean_object* v_entry_1362_){
_start:
{
lean_object* v_name_1363_; uint8_t v___x_1364_; lean_object* v___x_1365_; 
v_name_1363_ = lean_ctor_get(v_entry_1362_, 0);
lean_inc(v_name_1363_);
lean_dec_ref(v_entry_1362_);
v___x_1364_ = 0;
v___x_1365_ = l_Lean_Name_toString(v_name_1363_, v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_dirName(lean_object* v_entry_1366_){
_start:
{
lean_object* v_name_1367_; uint8_t v___x_1368_; lean_object* v___x_1369_; 
v_name_1367_ = lean_ctor_get(v_entry_1366_, 0);
lean_inc(v_name_1367_);
lean_dec_ref(v_entry_1366_);
v___x_1368_ = 0;
v___x_1369_ = l_Lean_Name_toString(v_name_1367_, v___x_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_inputRev_x3f(lean_object* v_entry_1370_){
_start:
{
lean_object* v_src_1371_; 
v_src_1371_ = lean_ctor_get(v_entry_1370_, 4);
if (lean_obj_tag(v_src_1371_) == 0)
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_box(0);
return v___x_1372_;
}
else
{
lean_object* v_inputRev_x3f_1373_; 
v_inputRev_x3f_1373_ = lean_ctor_get(v_src_1371_, 2);
lean_inc(v_inputRev_x3f_1373_);
return v_inputRev_x3f_1373_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_inputRev_x3f___boxed(lean_object* v_entry_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lake_PackageEntry_inputRev_x3f(v_entry_1374_);
lean_dec_ref(v_entry_1374_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_setInherited(lean_object* v_entry_1376_){
_start:
{
lean_object* v_name_1377_; lean_object* v_scope_1378_; lean_object* v_configFile_1379_; lean_object* v_manifestFile_x3f_1380_; lean_object* v_src_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1389_; 
v_name_1377_ = lean_ctor_get(v_entry_1376_, 0);
v_scope_1378_ = lean_ctor_get(v_entry_1376_, 1);
v_configFile_1379_ = lean_ctor_get(v_entry_1376_, 2);
v_manifestFile_x3f_1380_ = lean_ctor_get(v_entry_1376_, 3);
v_src_1381_ = lean_ctor_get(v_entry_1376_, 4);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_entry_1376_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1383_ = v_entry_1376_;
v_isShared_1384_ = v_isSharedCheck_1389_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_src_1381_);
lean_inc(v_manifestFile_x3f_1380_);
lean_inc(v_configFile_1379_);
lean_inc(v_scope_1378_);
lean_inc(v_name_1377_);
lean_dec(v_entry_1376_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1389_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
uint8_t v___x_1385_; lean_object* v___x_1387_; 
v___x_1385_ = 1;
if (v_isShared_1384_ == 0)
{
v___x_1387_ = v___x_1383_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_name_1377_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_scope_1378_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_configFile_1379_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_manifestFile_x3f_1380_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v_src_1381_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_ctor_set_uint8(v___x_1387_, sizeof(void*)*5, v___x_1385_);
return v___x_1387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_setConfigFile(lean_object* v_path_1390_, lean_object* v_entry_1391_){
_start:
{
lean_object* v_name_1392_; lean_object* v_scope_1393_; uint8_t v_inherited_1394_; lean_object* v_manifestFile_x3f_1395_; lean_object* v_src_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
v_name_1392_ = lean_ctor_get(v_entry_1391_, 0);
v_scope_1393_ = lean_ctor_get(v_entry_1391_, 1);
v_inherited_1394_ = lean_ctor_get_uint8(v_entry_1391_, sizeof(void*)*5);
v_manifestFile_x3f_1395_ = lean_ctor_get(v_entry_1391_, 3);
v_src_1396_ = lean_ctor_get(v_entry_1391_, 4);
v_isSharedCheck_1403_ = !lean_is_exclusive(v_entry_1391_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; 
v_unused_1404_ = lean_ctor_get(v_entry_1391_, 2);
lean_dec(v_unused_1404_);
v___x_1398_ = v_entry_1391_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_src_1396_);
lean_inc(v_manifestFile_x3f_1395_);
lean_inc(v_scope_1393_);
lean_inc(v_name_1392_);
lean_dec(v_entry_1391_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 2, v_path_1390_);
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_name_1392_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_scope_1393_);
lean_ctor_set(v_reuseFailAlloc_1402_, 2, v_path_1390_);
lean_ctor_set(v_reuseFailAlloc_1402_, 3, v_manifestFile_x3f_1395_);
lean_ctor_set(v_reuseFailAlloc_1402_, 4, v_src_1396_);
lean_ctor_set_uint8(v_reuseFailAlloc_1402_, sizeof(void*)*5, v_inherited_1394_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_setManifestFile(lean_object* v_path_x3f_1405_, lean_object* v_entry_1406_){
_start:
{
lean_object* v_name_1407_; lean_object* v_scope_1408_; uint8_t v_inherited_1409_; lean_object* v_configFile_1410_; lean_object* v_src_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1418_; 
v_name_1407_ = lean_ctor_get(v_entry_1406_, 0);
v_scope_1408_ = lean_ctor_get(v_entry_1406_, 1);
v_inherited_1409_ = lean_ctor_get_uint8(v_entry_1406_, sizeof(void*)*5);
v_configFile_1410_ = lean_ctor_get(v_entry_1406_, 2);
v_src_1411_ = lean_ctor_get(v_entry_1406_, 4);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_entry_1406_);
if (v_isSharedCheck_1418_ == 0)
{
lean_object* v_unused_1419_; 
v_unused_1419_ = lean_ctor_get(v_entry_1406_, 3);
lean_dec(v_unused_1419_);
v___x_1413_ = v_entry_1406_;
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_src_1411_);
lean_inc(v_configFile_1410_);
lean_inc(v_scope_1408_);
lean_inc(v_name_1407_);
lean_dec(v_entry_1406_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 3, v_path_x3f_1405_);
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_name_1407_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_scope_1408_);
lean_ctor_set(v_reuseFailAlloc_1417_, 2, v_configFile_1410_);
lean_ctor_set(v_reuseFailAlloc_1417_, 3, v_path_x3f_1405_);
lean_ctor_set(v_reuseFailAlloc_1417_, 4, v_src_1411_);
lean_ctor_set_uint8(v_reuseFailAlloc_1417_, sizeof(void*)*5, v_inherited_1409_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_inDirectory(lean_object* v_pkgDir_1420_, lean_object* v_entry_1421_){
_start:
{
lean_object* v_src_1422_; 
v_src_1422_ = lean_ctor_get(v_entry_1421_, 4);
lean_inc_ref(v_src_1422_);
if (lean_obj_tag(v_src_1422_) == 0)
{
lean_object* v_name_1423_; lean_object* v_scope_1424_; uint8_t v_inherited_1425_; lean_object* v_configFile_1426_; lean_object* v_manifestFile_x3f_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1443_; 
v_name_1423_ = lean_ctor_get(v_entry_1421_, 0);
v_scope_1424_ = lean_ctor_get(v_entry_1421_, 1);
v_inherited_1425_ = lean_ctor_get_uint8(v_entry_1421_, sizeof(void*)*5);
v_configFile_1426_ = lean_ctor_get(v_entry_1421_, 2);
v_manifestFile_x3f_1427_ = lean_ctor_get(v_entry_1421_, 3);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_entry_1421_);
if (v_isSharedCheck_1443_ == 0)
{
lean_object* v_unused_1444_; 
v_unused_1444_ = lean_ctor_get(v_entry_1421_, 4);
lean_dec(v_unused_1444_);
v___x_1429_ = v_entry_1421_;
v_isShared_1430_ = v_isSharedCheck_1443_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_manifestFile_x3f_1427_);
lean_inc(v_configFile_1426_);
lean_inc(v_scope_1424_);
lean_inc(v_name_1423_);
lean_dec(v_entry_1421_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1443_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v_dir_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1442_; 
v_dir_1431_ = lean_ctor_get(v_src_1422_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_src_1422_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1433_ = v_src_1422_;
v_isShared_1434_ = v_isSharedCheck_1442_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_dir_1431_);
lean_dec(v_src_1422_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1442_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1435_ = l_Lake_joinRelative(v_pkgDir_1420_, v_dir_1431_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1435_);
v___x_1437_ = v___x_1433_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1439_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 4, v___x_1437_);
v___x_1439_ = v___x_1429_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_name_1423_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_scope_1424_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_configFile_1426_);
lean_ctor_set(v_reuseFailAlloc_1440_, 3, v_manifestFile_x3f_1427_);
lean_ctor_set(v_reuseFailAlloc_1440_, 4, v___x_1437_);
lean_ctor_set_uint8(v_reuseFailAlloc_1440_, sizeof(void*)*5, v_inherited_1425_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
else
{
lean_dec_ref(v_src_1422_);
lean_dec_ref(v_pkgDir_1420_);
return v_entry_1421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntry_ofV6(lean_object* v_x_1445_){
_start:
{
if (lean_obj_tag(v_x_1445_) == 0)
{
lean_object* v_name_1446_; uint8_t v_inherited_1447_; lean_object* v_dir_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v_name_1446_ = lean_ctor_get(v_x_1445_, 0);
v_inherited_1447_ = lean_ctor_get_uint8(v_x_1445_, sizeof(void*)*3);
v_dir_1448_ = lean_ctor_get(v_x_1445_, 2);
v___x_1449_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v___x_1450_ = l_Lake_defaultConfigFile;
v___x_1451_ = lean_box(0);
lean_inc_ref(v_dir_1448_);
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v_dir_1448_);
lean_inc(v_name_1446_);
v___x_1453_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1453_, 0, v_name_1446_);
lean_ctor_set(v___x_1453_, 1, v___x_1449_);
lean_ctor_set(v___x_1453_, 2, v___x_1450_);
lean_ctor_set(v___x_1453_, 3, v___x_1451_);
lean_ctor_set(v___x_1453_, 4, v___x_1452_);
lean_ctor_set_uint8(v___x_1453_, sizeof(void*)*5, v_inherited_1447_);
return v___x_1453_;
}
else
{
lean_object* v_name_1454_; uint8_t v_inherited_1455_; lean_object* v_url_1456_; lean_object* v_rev_1457_; lean_object* v_inputRev_x3f_1458_; lean_object* v_subDir_x3f_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v_name_1454_ = lean_ctor_get(v_x_1445_, 0);
v_inherited_1455_ = lean_ctor_get_uint8(v_x_1445_, sizeof(void*)*6);
v_url_1456_ = lean_ctor_get(v_x_1445_, 2);
v_rev_1457_ = lean_ctor_get(v_x_1445_, 3);
v_inputRev_x3f_1458_ = lean_ctor_get(v_x_1445_, 4);
v_subDir_x3f_1459_ = lean_ctor_get(v_x_1445_, 5);
v___x_1460_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v___x_1461_ = l_Lake_defaultConfigFile;
v___x_1462_ = lean_box(0);
lean_inc(v_subDir_x3f_1459_);
lean_inc(v_inputRev_x3f_1458_);
lean_inc_ref(v_rev_1457_);
lean_inc_ref(v_url_1456_);
v___x_1463_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1463_, 0, v_url_1456_);
lean_ctor_set(v___x_1463_, 1, v_rev_1457_);
lean_ctor_set(v___x_1463_, 2, v_inputRev_x3f_1458_);
lean_ctor_set(v___x_1463_, 3, v_subDir_x3f_1459_);
lean_inc(v_name_1454_);
v___x_1464_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1464_, 0, v_name_1454_);
lean_ctor_set(v___x_1464_, 1, v___x_1460_);
lean_ctor_set(v___x_1464_, 2, v___x_1461_);
lean_ctor_set(v___x_1464_, 3, v___x_1462_);
lean_ctor_set(v___x_1464_, 4, v___x_1463_);
lean_ctor_set_uint8(v___x_1464_, sizeof(void*)*5, v_inherited_1455_);
return v___x_1464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_PackageEntry_ofV6___boxed(lean_object* v_x_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntry_ofV6(v_x_1465_);
lean_dec_ref(v_x_1465_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_addPackage(lean_object* v_entry_1467_, lean_object* v_self_1468_){
_start:
{
lean_object* v_name_1469_; lean_object* v_lakeDir_1470_; uint8_t v_fixedToolchain_1471_; lean_object* v_packagesDir_x3f_1472_; lean_object* v_packages_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1481_; 
v_name_1469_ = lean_ctor_get(v_self_1468_, 0);
v_lakeDir_1470_ = lean_ctor_get(v_self_1468_, 1);
v_fixedToolchain_1471_ = lean_ctor_get_uint8(v_self_1468_, sizeof(void*)*4);
v_packagesDir_x3f_1472_ = lean_ctor_get(v_self_1468_, 2);
v_packages_1473_ = lean_ctor_get(v_self_1468_, 3);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_self_1468_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1475_ = v_self_1468_;
v_isShared_1476_ = v_isSharedCheck_1481_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_packages_1473_);
lean_inc(v_packagesDir_x3f_1472_);
lean_inc(v_lakeDir_1470_);
lean_inc(v_name_1469_);
lean_dec(v_self_1468_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1481_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1477_ = lean_array_push(v_packages_1473_, v_entry_1467_);
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 3, v___x_1477_);
v___x_1479_ = v___x_1475_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_name_1469_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_lakeDir_1470_);
lean_ctor_set(v_reuseFailAlloc_1480_, 2, v_packagesDir_x3f_1472_);
lean_ctor_set(v_reuseFailAlloc_1480_, 3, v___x_1477_);
lean_ctor_set_uint8(v_reuseFailAlloc_1480_, sizeof(void*)*4, v_fixedToolchain_1471_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0_spec__0(size_t v_sz_1482_, size_t v_i_1483_, lean_object* v_bs_1484_){
_start:
{
uint8_t v___x_1485_; 
v___x_1485_ = lean_usize_dec_lt(v_i_1483_, v_sz_1482_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; 
v___x_1486_ = l_unsafeCast___redArg(v_bs_1484_);
lean_dec_ref(v_bs_1484_);
return v___x_1486_;
}
else
{
lean_object* v_v_1487_; lean_object* v___x_1488_; lean_object* v_bs_x27_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; size_t v___x_1492_; size_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v_v_1487_ = lean_array_uget(v_bs_1484_, v_i_1483_);
v___x_1488_ = lean_unsigned_to_nat(0u);
v_bs_x27_1489_ = lean_array_uset(v_bs_1484_, v_i_1483_, v___x_1488_);
v___x_1490_ = l_unsafeCast___redArg(v_v_1487_);
lean_dec(v_v_1487_);
v___x_1491_ = l_Lake_PackageEntry_toJson(v___x_1490_);
v___x_1492_ = ((size_t)1ULL);
v___x_1493_ = lean_usize_add(v_i_1483_, v___x_1492_);
v___x_1494_ = l_unsafeCast___redArg(v___x_1491_);
lean_dec(v___x_1491_);
v___x_1495_ = lean_array_uset(v_bs_x27_1489_, v_i_1483_, v___x_1494_);
v_i_1483_ = v___x_1493_;
v_bs_1484_ = v___x_1495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1497_, lean_object* v_i_1498_, lean_object* v_bs_1499_){
_start:
{
size_t v_sz_boxed_1500_; size_t v_i_boxed_1501_; lean_object* v_res_1502_; 
v_sz_boxed_1500_ = lean_unbox_usize(v_sz_1497_);
lean_dec(v_sz_1497_);
v_i_boxed_1501_ = lean_unbox_usize(v_i_1498_);
lean_dec(v_i_1498_);
v_res_1502_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0_spec__0(v_sz_boxed_1500_, v_i_boxed_1501_, v_bs_1499_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0(lean_object* v_a_1503_){
_start:
{
size_t v_sz_1504_; size_t v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_sz_1504_ = lean_array_size(v_a_1503_);
v___x_1505_ = ((size_t)0ULL);
v___x_1506_ = l_unsafeCast___redArg(v_a_1503_);
v___x_1507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0_spec__0(v_sz_1504_, v___x_1505_, v___x_1506_);
v___x_1508_ = l_unsafeCast___redArg(v___x_1507_);
lean_dec_ref(v___x_1507_);
v___x_1509_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0___boxed(lean_object* v_a_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0(v_a_1510_);
lean_dec_ref(v_a_1510_);
return v_res_1511_;
}
}
static lean_object* _init_l_Lake_Manifest_toJson___closed__1(void){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = ((lean_object*)(l_Lake_Manifest_version___closed__2));
v___x_1514_ = l_Lake_StdVer_toString(v___x_1513_);
return v___x_1514_;
}
}
static lean_object* _init_l_Lake_Manifest_toJson___closed__2(void){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = lean_obj_once(&l_Lake_Manifest_toJson___closed__1, &l_Lake_Manifest_toJson___closed__1_once, _init_l_Lake_Manifest_toJson___closed__1);
v___x_1516_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
return v___x_1516_;
}
}
static lean_object* _init_l_Lake_Manifest_toJson___closed__3(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1517_ = lean_obj_once(&l_Lake_Manifest_toJson___closed__2, &l_Lake_Manifest_toJson___closed__2_once, _init_l_Lake_Manifest_toJson___closed__2);
v___x_1518_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__0));
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
lean_ctor_set(v___x_1519_, 1, v___x_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_toJson(lean_object* v_self_1524_){
_start:
{
lean_object* v_name_1525_; lean_object* v_lakeDir_1526_; uint8_t v_fixedToolchain_1527_; lean_object* v_packagesDir_x3f_1528_; lean_object* v_packages_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_name_1525_ = lean_ctor_get(v_self_1524_, 0);
lean_inc(v_name_1525_);
v_lakeDir_1526_ = lean_ctor_get(v_self_1524_, 1);
lean_inc_ref(v_lakeDir_1526_);
v_fixedToolchain_1527_ = lean_ctor_get_uint8(v_self_1524_, sizeof(void*)*4);
v_packagesDir_x3f_1528_ = lean_ctor_get(v_self_1524_, 2);
lean_inc(v_packagesDir_x3f_1528_);
v_packages_1529_ = lean_ctor_get(v_self_1524_, 3);
lean_inc_ref(v_packages_1529_);
lean_dec_ref(v_self_1524_);
v___x_1530_ = lean_obj_once(&l_Lake_Manifest_toJson___closed__3, &l_Lake_Manifest_toJson___closed__3_once, _init_l_Lake_Manifest_toJson___closed__3);
v___x_1531_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__4));
v___x_1532_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1532_, 0, v_fixedToolchain_1527_);
v___x_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1531_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
v___x_1534_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6));
v___x_1535_ = 1;
v___x_1536_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1525_, v___x_1535_);
v___x_1537_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1536_);
v___x_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1534_);
lean_ctor_set(v___x_1538_, 1, v___x_1537_);
v___x_1539_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__5));
v___x_1540_ = l_Lake_mkRelPathString(v_lakeDir_1526_);
v___x_1541_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1540_);
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1539_);
lean_ctor_set(v___x_1542_, 1, v___x_1541_);
v___x_1543_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__6));
v___x_1544_ = l_Lean_Option_toJson___at___00__private_Lake_Load_Manifest_0__Lake_instToJsonPackageEntryV6_toJson_spec__2(v_packagesDir_x3f_1528_);
v___x_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__7));
v___x_1547_ = l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0(v_packages_1529_);
lean_dec_ref(v_packages_1529_);
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1546_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = lean_box(0);
v___x_1550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1545_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1542_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1538_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1533_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1530_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = l_Lean_Json_mkObj(v___x_1555_);
lean_dec_ref_known(v___x_1555_, 2);
return v___x_1556_;
}
}
static lean_object* _init_l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__6(void){
_start:
{
lean_object* v_natZero_1567_; lean_object* v_intZero_1568_; 
v_natZero_1567_ = lean_unsigned_to_nat(0u);
v_intZero_1568_ = lean_nat_to_int(v_natZero_1567_);
return v_intZero_1568_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion(lean_object* v_obj_1573_){
_start:
{
lean_object* v_ver_1575_; lean_object* v___y_1584_; lean_object* v_ver_1592_; lean_object* v_major_1593_; lean_object* v_a_1610_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1633_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__0));
v___x_1634_ = l_Lake_JsonObject_getJson_x3f(v_obj_1573_, v___x_1633_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__7));
v___x_1636_ = l_Lake_JsonObject_getJson_x3f(v_obj_1573_, v___x_1635_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v___x_1637_; 
v___x_1637_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__9));
return v___x_1637_;
}
else
{
lean_object* v_val_1638_; 
v_val_1638_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_val_1638_);
lean_dec_ref_known(v___x_1636_, 1);
v_a_1610_ = v_val_1638_;
goto v___jp_1609_;
}
}
else
{
lean_object* v_val_1639_; 
v_val_1639_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_val_1639_);
lean_dec_ref_known(v___x_1634_, 1);
v_a_1610_ = v_val_1639_;
goto v___jp_1609_;
}
v___jp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1576_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__0));
v___x_1577_ = lean_unsigned_to_nat(80u);
v___x_1578_ = l_Lean_Json_pretty(v_ver_1575_, v___x_1577_);
v___x_1579_ = lean_string_append(v___x_1576_, v___x_1578_);
lean_dec_ref(v___x_1578_);
v___x_1580_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__1));
v___x_1581_ = lean_string_append(v___x_1579_, v___x_1580_);
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
return v___x_1582_;
}
v___jp_1583_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1585_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__2));
v___x_1586_ = l_Lake_SemVerCore_toString(v___y_1584_);
v___x_1587_ = lean_string_append(v___x_1585_, v___x_1586_);
lean_dec_ref(v___x_1586_);
v___x_1588_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2));
v___x_1589_ = lean_string_append(v___x_1587_, v___x_1588_);
v___x_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
return v___x_1590_;
}
v___jp_1591_:
{
lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1594_ = lean_unsigned_to_nat(1u);
v___x_1595_ = lean_nat_dec_lt(v___x_1594_, v_major_1593_);
lean_dec(v_major_1593_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1596_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__3));
v___x_1597_ = l_Lake_instOrdSemVerCore_ord(v_ver_1592_, v___x_1596_);
if (v___x_1597_ == 0)
{
v___y_1584_ = v_ver_1592_;
goto v___jp_1583_;
}
else
{
if (v___x_1595_ == 0)
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_ver_1592_);
return v___x_1598_;
}
else
{
v___y_1584_ = v_ver_1592_;
goto v___jp_1583_;
}
}
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1599_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__4));
v___x_1600_ = l_Lake_SemVerCore_toString(v_ver_1592_);
v___x_1601_ = lean_string_append(v___x_1599_, v___x_1600_);
lean_dec_ref(v___x_1600_);
v___x_1602_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__5));
v___x_1603_ = lean_string_append(v___x_1601_, v___x_1602_);
v___x_1604_ = lean_obj_once(&l_Lake_Manifest_toJson___closed__1, &l_Lake_Manifest_toJson___closed__1_once, _init_l_Lake_Manifest_toJson___closed__1);
v___x_1605_ = lean_string_append(v___x_1603_, v___x_1604_);
v___x_1606_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__1));
v___x_1607_ = lean_string_append(v___x_1605_, v___x_1606_);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
return v___x_1608_;
}
}
v___jp_1609_:
{
switch(lean_obj_tag(v_a_1610_))
{
case 2:
{
lean_object* v_n_1611_; lean_object* v_mantissa_1612_; lean_object* v_exponent_1613_; lean_object* v_natZero_1614_; lean_object* v_intZero_1615_; uint8_t v_isNeg_1616_; 
v_n_1611_ = lean_ctor_get(v_a_1610_, 0);
v_mantissa_1612_ = lean_ctor_get(v_n_1611_, 0);
v_exponent_1613_ = lean_ctor_get(v_n_1611_, 1);
v_natZero_1614_ = lean_unsigned_to_nat(0u);
v_intZero_1615_ = lean_obj_once(&l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__6, &l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__6_once, _init_l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__6);
v_isNeg_1616_ = lean_int_dec_lt(v_mantissa_1612_, v_intZero_1615_);
if (v_isNeg_1616_ == 0)
{
uint8_t v___x_1617_; 
v___x_1617_ = lean_nat_dec_eq(v_exponent_1613_, v_natZero_1614_);
if (v___x_1617_ == 0)
{
v_ver_1575_ = v_a_1610_;
goto v___jp_1574_;
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1619_; 
lean_inc(v_mantissa_1612_);
lean_dec_ref_known(v_a_1610_, 1);
v_a_1618_ = lean_nat_abs(v_mantissa_1612_);
lean_dec(v_mantissa_1612_);
v___x_1619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1619_, 0, v_natZero_1614_);
lean_ctor_set(v___x_1619_, 1, v_a_1618_);
lean_ctor_set(v___x_1619_, 2, v_natZero_1614_);
v_ver_1592_ = v___x_1619_;
v_major_1593_ = v_natZero_1614_;
goto v___jp_1591_;
}
}
else
{
v_ver_1575_ = v_a_1610_;
goto v___jp_1574_;
}
}
case 3:
{
lean_object* v_s_1620_; lean_object* v___x_1621_; 
v_s_1620_ = lean_ctor_get(v_a_1610_, 0);
lean_inc_ref(v_s_1620_);
lean_dec_ref_known(v_a_1610_, 1);
v___x_1621_ = l_Lake_StdVer_parse(v_s_1620_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1621_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1621_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
else
{
lean_object* v_a_1630_; lean_object* v_toSemVerCore_1631_; lean_object* v_major_1632_; 
v_a_1630_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1630_);
lean_dec_ref_known(v___x_1621_, 1);
v_toSemVerCore_1631_ = lean_ctor_get(v_a_1630_, 0);
lean_inc_ref(v_toSemVerCore_1631_);
lean_dec(v_a_1630_);
v_major_1632_ = lean_ctor_get(v_toSemVerCore_1631_, 0);
lean_inc(v_major_1632_);
v_ver_1592_ = v_toSemVerCore_1631_;
v_major_1593_ = v_major_1632_;
goto v___jp_1591_;
}
}
default: 
{
v_ver_1575_ = v_a_1610_;
goto v___jp_1574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___boxed(lean_object* v_obj_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion(v_obj_1640_);
lean_dec(v_obj_1640_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3_spec__5(size_t v_sz_1642_, size_t v_i_1643_, lean_object* v_bs_1644_){
_start:
{
uint8_t v___x_1645_; 
v___x_1645_ = lean_usize_dec_lt(v_i_1643_, v_sz_1642_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = l_unsafeCast___redArg(v_bs_1644_);
lean_dec_ref(v_bs_1644_);
v___x_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
else
{
lean_object* v_v_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v_v_1648_ = lean_array_uget_borrowed(v_bs_1644_, v_i_1643_);
v___x_1649_ = l_unsafeCast___redArg(v_v_1648_);
v___x_1650_ = l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson(v___x_1649_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec_ref(v_bs_1644_);
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1650_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1650_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1660_; lean_object* v_bs_x27_1661_; size_t v___x_1662_; size_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v_a_1659_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1660_ = lean_unsigned_to_nat(0u);
v_bs_x27_1661_ = lean_array_uset(v_bs_1644_, v_i_1643_, v___x_1660_);
v___x_1662_ = ((size_t)1ULL);
v___x_1663_ = lean_usize_add(v_i_1643_, v___x_1662_);
v___x_1664_ = l_unsafeCast___redArg(v_a_1659_);
lean_dec(v_a_1659_);
v___x_1665_ = lean_array_uset(v_bs_x27_1661_, v_i_1643_, v___x_1664_);
v_i_1643_ = v___x_1663_;
v_bs_1644_ = v___x_1665_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3_spec__5___boxed(lean_object* v_sz_1667_, lean_object* v_i_1668_, lean_object* v_bs_1669_){
_start:
{
size_t v_sz_boxed_1670_; size_t v_i_boxed_1671_; lean_object* v_res_1672_; 
v_sz_boxed_1670_ = lean_unbox_usize(v_sz_1667_);
lean_dec(v_sz_1667_);
v_i_boxed_1671_ = lean_unbox_usize(v_i_1668_);
lean_dec(v_i_1668_);
v_res_1672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3_spec__5(v_sz_boxed_1670_, v_i_boxed_1671_, v_bs_1669_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3(lean_object* v_x_1674_){
_start:
{
if (lean_obj_tag(v_x_1674_) == 4)
{
lean_object* v_elems_1675_; size_t v_sz_1676_; size_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_elems_1675_ = lean_ctor_get(v_x_1674_, 0);
lean_inc_ref(v_elems_1675_);
lean_dec_ref_known(v_x_1674_, 1);
v_sz_1676_ = lean_array_size(v_elems_1675_);
v___x_1677_ = ((size_t)0ULL);
v___x_1678_ = l_unsafeCast___redArg(v_elems_1675_);
lean_dec_ref(v_elems_1675_);
v___x_1679_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3_spec__5(v_sz_1676_, v___x_1677_, v___x_1678_);
v___x_1680_ = l_unsafeCast___redArg(v___x_1679_);
lean_dec_ref(v___x_1679_);
return v___x_1680_;
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1681_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3___closed__0));
v___x_1682_ = lean_unsigned_to_nat(80u);
v___x_1683_ = l_Lean_Json_pretty(v_x_1674_, v___x_1682_);
v___x_1684_ = lean_string_append(v___x_1681_, v___x_1683_);
lean_dec_ref(v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2));
v___x_1686_ = lean_string_append(v___x_1684_, v___x_1685_);
v___x_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2(lean_object* v_x_1690_){
_start:
{
if (lean_obj_tag(v_x_1690_) == 0)
{
lean_object* v___x_1691_; 
v___x_1691_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2___closed__0));
return v___x_1691_;
}
else
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3(v_x_1690_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1709_; 
v_a_1701_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1703_ = v___x_1692_;
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1692_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1705_; lean_object* v___x_1707_; 
v___x_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1705_, 0, v_a_1701_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v___x_1705_);
v___x_1707_ = v___x_1703_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1_spec__2(size_t v_sz_1710_, size_t v_i_1711_, lean_object* v_bs_1712_){
_start:
{
uint8_t v___x_1713_; 
v___x_1713_ = lean_usize_dec_lt(v_i_1711_, v_sz_1710_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = l_unsafeCast___redArg(v_bs_1712_);
lean_dec_ref(v_bs_1712_);
v___x_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
return v___x_1715_;
}
else
{
lean_object* v_v_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v_v_1716_ = lean_array_uget_borrowed(v_bs_1712_, v_i_1711_);
v___x_1717_ = l_unsafeCast___redArg(v_v_1716_);
v___x_1718_ = l_Lake_PackageEntry_fromJson_x3f(v___x_1717_);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1726_; 
lean_dec_ref(v_bs_1712_);
v_a_1719_ = lean_ctor_get(v___x_1718_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1718_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1721_ = v___x_1718_;
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___x_1718_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1724_; 
if (v_isShared_1722_ == 0)
{
v___x_1724_ = v___x_1721_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1719_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1728_; lean_object* v_bs_x27_1729_; size_t v___x_1730_; size_t v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_a_1727_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1718_, 1);
v___x_1728_ = lean_unsigned_to_nat(0u);
v_bs_x27_1729_ = lean_array_uset(v_bs_1712_, v_i_1711_, v___x_1728_);
v___x_1730_ = ((size_t)1ULL);
v___x_1731_ = lean_usize_add(v_i_1711_, v___x_1730_);
v___x_1732_ = l_unsafeCast___redArg(v_a_1727_);
lean_dec(v_a_1727_);
v___x_1733_ = lean_array_uset(v_bs_x27_1729_, v_i_1711_, v___x_1732_);
v_i_1711_ = v___x_1731_;
v_bs_1712_ = v___x_1733_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_1735_, lean_object* v_i_1736_, lean_object* v_bs_1737_){
_start:
{
size_t v_sz_boxed_1738_; size_t v_i_boxed_1739_; lean_object* v_res_1740_; 
v_sz_boxed_1738_ = lean_unbox_usize(v_sz_1735_);
lean_dec(v_sz_1735_);
v_i_boxed_1739_ = lean_unbox_usize(v_i_1736_);
lean_dec(v_i_1736_);
v_res_1740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1_spec__2(v_sz_boxed_1738_, v_i_boxed_1739_, v_bs_1737_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1(lean_object* v_x_1741_){
_start:
{
if (lean_obj_tag(v_x_1741_) == 4)
{
lean_object* v_elems_1742_; size_t v_sz_1743_; size_t v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_elems_1742_ = lean_ctor_get(v_x_1741_, 0);
lean_inc_ref(v_elems_1742_);
lean_dec_ref_known(v_x_1741_, 1);
v_sz_1743_ = lean_array_size(v_elems_1742_);
v___x_1744_ = ((size_t)0ULL);
v___x_1745_ = l_unsafeCast___redArg(v_elems_1742_);
lean_dec_ref(v_elems_1742_);
v___x_1746_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1_spec__2(v_sz_1743_, v___x_1744_, v___x_1745_);
v___x_1747_ = l_unsafeCast___redArg(v___x_1746_);
lean_dec_ref(v___x_1746_);
return v___x_1747_;
}
else
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1748_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2_spec__3___closed__0));
v___x_1749_ = lean_unsigned_to_nat(80u);
v___x_1750_ = l_Lean_Json_pretty(v_x_1741_, v___x_1749_);
v___x_1751_ = lean_string_append(v___x_1748_, v___x_1750_);
lean_dec_ref(v___x_1750_);
v___x_1752_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__2));
v___x_1753_ = lean_string_append(v___x_1751_, v___x_1752_);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1(lean_object* v_x_1757_){
_start:
{
if (lean_obj_tag(v_x_1757_) == 0)
{
lean_object* v___x_1758_; 
v___x_1758_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1___closed__0));
return v___x_1758_;
}
else
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1_spec__1(v_x_1757_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1767_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1762_ = v___x_1759_;
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1759_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1763_ == 0)
{
v___x_1765_ = v___x_1762_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1776_; 
v_a_1768_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1770_ = v___x_1759_;
v_isShared_1771_ = v_isSharedCheck_1776_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1759_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1776_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1772_, 0, v_a_1768_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1772_);
v___x_1774_ = v___x_1770_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__0(size_t v_sz_1777_, size_t v_i_1778_, lean_object* v_bs_1779_){
_start:
{
uint8_t v___x_1780_; 
v___x_1780_ = lean_usize_dec_lt(v_i_1778_, v_sz_1777_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = l_unsafeCast___redArg(v_bs_1779_);
lean_dec_ref(v_bs_1779_);
return v___x_1781_;
}
else
{
lean_object* v_v_1782_; lean_object* v___x_1783_; lean_object* v_bs_x27_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; size_t v___x_1787_; size_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v_v_1782_ = lean_array_uget(v_bs_1779_, v_i_1778_);
v___x_1783_ = lean_unsigned_to_nat(0u);
v_bs_x27_1784_ = lean_array_uset(v_bs_1779_, v_i_1778_, v___x_1783_);
v___x_1785_ = l_unsafeCast___redArg(v_v_1782_);
lean_dec(v_v_1782_);
v___x_1786_ = l___private_Lake_Load_Manifest_0__Lake_PackageEntry_ofV6(v___x_1785_);
lean_dec(v___x_1785_);
v___x_1787_ = ((size_t)1ULL);
v___x_1788_ = lean_usize_add(v_i_1778_, v___x_1787_);
v___x_1789_ = l_unsafeCast___redArg(v___x_1786_);
lean_dec_ref(v___x_1786_);
v___x_1790_ = lean_array_uset(v_bs_x27_1784_, v_i_1778_, v___x_1789_);
v_i_1778_ = v___x_1788_;
v_bs_1779_ = v___x_1790_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__0___boxed(lean_object* v_sz_1792_, lean_object* v_i_1793_, lean_object* v_bs_1794_){
_start:
{
size_t v_sz_boxed_1795_; size_t v_i_boxed_1796_; lean_object* v_res_1797_; 
v_sz_boxed_1795_ = lean_unbox_usize(v_sz_1792_);
lean_dec(v_sz_1792_);
v_i_boxed_1796_ = lean_unbox_usize(v_i_1793_);
lean_dec(v_i_1793_);
v_res_1797_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__0(v_sz_boxed_1795_, v_i_boxed_1796_, v_bs_1794_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages(lean_object* v_ver_1811_, lean_object* v_obj_1812_){
_start:
{
lean_object* v_a_1814_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1825_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__4));
v___x_1826_ = l_Lake_StdVer_compare(v_ver_1811_, v___x_1825_);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__7));
v___x_1828_ = l_Lake_JsonObject_getJson_x3f(v_obj_1812_, v___x_1827_);
if (lean_obj_tag(v___x_1828_) == 0)
{
goto v___jp_1821_;
}
else
{
lean_object* v_val_1829_; lean_object* v___x_1830_; 
v_val_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_val_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1830_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__2(v_val_1829_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1840_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1833_ = v___x_1830_;
v_isShared_1834_ = v_isSharedCheck_1840_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1830_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1840_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1835_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__5));
v___x_1836_ = lean_string_append(v___x_1835_, v_a_1831_);
lean_dec(v_a_1831_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 0, v___x_1836_);
v___x_1838_ = v___x_1833_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
else
{
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1830_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1830_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set_tag(v___x_1843_, 0);
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
else
{
lean_object* v_a_1849_; 
v_a_1849_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1830_, 1);
if (lean_obj_tag(v_a_1849_) == 0)
{
goto v___jp_1821_;
}
else
{
lean_object* v_val_1850_; 
v_val_1850_ = lean_ctor_get(v_a_1849_, 0);
lean_inc(v_val_1850_);
lean_dec_ref_known(v_a_1849_, 1);
v_a_1814_ = v_val_1850_;
goto v___jp_1813_;
}
}
}
}
}
else
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__7));
v___x_1852_ = l_Lake_JsonObject_getJson_x3f(v_obj_1812_, v___x_1851_);
if (lean_obj_tag(v___x_1852_) == 0)
{
goto v___jp_1823_;
}
else
{
lean_object* v_val_1853_; lean_object* v___x_1854_; 
v_val_1853_ = lean_ctor_get(v___x_1852_, 0);
lean_inc(v_val_1853_);
lean_dec_ref_known(v___x_1852_, 1);
v___x_1854_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__1(v_val_1853_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1864_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1857_ = v___x_1854_;
v_isShared_1858_ = v_isSharedCheck_1864_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1854_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1864_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1859_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__5));
v___x_1860_ = lean_string_append(v___x_1859_, v_a_1855_);
lean_dec(v_a_1855_);
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 0, v___x_1860_);
v___x_1862_ = v___x_1857_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
else
{
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
v_a_1865_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1854_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1854_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
lean_ctor_set_tag(v___x_1867_, 0);
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1881_; 
v_a_1873_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1875_ = v___x_1854_;
v_isShared_1876_ = v_isSharedCheck_1881_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1854_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1881_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
if (lean_obj_tag(v_a_1873_) == 0)
{
lean_del_object(v___x_1875_);
goto v___jp_1823_;
}
else
{
lean_object* v_val_1877_; lean_object* v___x_1879_; 
v_val_1877_ = lean_ctor_get(v_a_1873_, 0);
lean_inc(v_val_1877_);
lean_dec_ref_known(v_a_1873_, 1);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v_val_1877_);
v___x_1879_ = v___x_1875_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_val_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
}
}
v___jp_1813_:
{
size_t v_sz_1815_; size_t v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v_sz_1815_ = lean_array_size(v_a_1814_);
v___x_1816_ = ((size_t)0ULL);
v___x_1817_ = l_unsafeCast___redArg(v_a_1814_);
lean_dec_ref(v_a_1814_);
v___x_1818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Manifest_0__Lake_Manifest_getPackages_spec__0(v_sz_1815_, v___x_1816_, v___x_1817_);
v___x_1819_ = l_unsafeCast___redArg(v___x_1818_);
lean_dec_ref(v___x_1818_);
v___x_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1819_);
return v___x_1820_;
}
v___jp_1821_:
{
lean_object* v___x_1822_; 
v___x_1822_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__0));
v_a_1814_ = v___x_1822_;
goto v___jp_1813_;
}
v___jp_1823_:
{
lean_object* v___x_1824_; 
v___x_1824_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__2));
return v___x_1824_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___boxed(lean_object* v_ver_1882_, lean_object* v_obj_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages(v_ver_1882_, v_obj_1883_);
lean_dec(v_obj_1883_);
lean_dec_ref(v_ver_1882_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0(lean_object* v_x_1887_){
_start:
{
if (lean_obj_tag(v_x_1887_) == 0)
{
lean_object* v___x_1888_; 
v___x_1888_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0___closed__0));
return v___x_1888_;
}
else
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Lean_Name_fromJson_x3f(v_x_1887_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1889_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1906_; 
v_a_1898_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1900_ = v___x_1889_;
v_isShared_1901_ = v_isSharedCheck_1906_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1889_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1906_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; lean_object* v___x_1904_; 
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_a_1898_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1902_);
v___x_1904_ = v___x_1900_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1(lean_object* v_x_1909_){
_start:
{
if (lean_obj_tag(v_x_1909_) == 0)
{
lean_object* v___x_1910_; 
v___x_1910_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1___closed__0));
return v___x_1910_;
}
else
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_Json_getBool_x3f(v_x_1909_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1928_; 
v_a_1920_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1922_ = v___x_1911_;
v_isShared_1923_ = v_isSharedCheck_1928_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1911_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1928_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_a_1920_);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1924_);
v___x_1926_ = v___x_1922_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1___boxed(lean_object* v_x_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1(v_x_1929_);
lean_dec(v_x_1929_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_fromJson_x3f(lean_object* v_json_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_Json_getObj_x3f(v_json_1934_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1945_; 
v_a_1944_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1935_, 1);
v___x_1945_ = l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion(v_a_1944_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec(v_a_1944_);
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1945_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1945_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
else
{
lean_object* v_a_1954_; uint8_t v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v_a_1959_; uint8_t v___y_1981_; lean_object* v___y_1982_; lean_object* v_a_1983_; uint8_t v___y_2009_; lean_object* v___y_2010_; uint8_t v___y_2013_; lean_object* v_a_2014_; uint8_t v___y_2040_; uint8_t v_a_2043_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_a_1954_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1954_);
lean_dec_ref_known(v___x_1945_, 1);
v___x_2070_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__4));
v___x_2071_ = l_Lake_JsonObject_getJson_x3f(v_a_1944_, v___x_2070_);
if (lean_obj_tag(v___x_2071_) == 0)
{
goto v___jp_2068_;
}
else
{
lean_object* v_val_2072_; lean_object* v___x_2073_; 
v_val_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_val_2072_);
lean_dec_ref_known(v___x_2071_, 1);
v___x_2073_ = l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__1(v_val_2072_);
lean_dec(v_val_2072_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2083_; 
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2076_ = v___x_2073_;
v_isShared_2077_ = v_isSharedCheck_2083_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2073_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2083_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2078_ = ((lean_object*)(l_Lake_Manifest_fromJson_x3f___closed__2));
v___x_2079_ = lean_string_append(v___x_2078_, v_a_2074_);
lean_dec(v_a_2074_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v___x_2079_);
v___x_2081_ = v___x_2076_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2079_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
else
{
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2091_; 
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_2084_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2086_ = v___x_2073_;
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2073_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2089_; 
if (v_isShared_2087_ == 0)
{
lean_ctor_set_tag(v___x_2086_, 0);
v___x_2089_ = v___x_2086_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_a_2084_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
else
{
lean_object* v_a_2092_; 
v_a_2092_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v___x_2073_, 1);
if (lean_obj_tag(v_a_2092_) == 0)
{
goto v___jp_2068_;
}
else
{
lean_object* v_val_2093_; uint8_t v___x_2094_; 
v_val_2093_ = lean_ctor_get(v_a_2092_, 0);
lean_inc(v_val_2093_);
lean_dec_ref_known(v_a_2092_, 1);
v___x_2094_ = lean_unbox(v_val_2093_);
lean_dec(v_val_2093_);
v_a_2043_ = v___x_2094_;
goto v___jp_2042_;
}
}
}
}
v___jp_1955_:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1960_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_a_1954_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages(v___x_1961_, v_a_1944_);
lean_dec(v_a_1944_);
lean_dec_ref_known(v___x_1961_, 2);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec(v_a_1959_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1962_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1962_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1979_; 
v_a_1971_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1973_ = v___x_1962_;
v_isShared_1974_ = v_isSharedCheck_1979_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1962_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1979_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1975_; lean_object* v___x_1977_; 
v___x_1975_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1975_, 0, v___y_1958_);
lean_ctor_set(v___x_1975_, 1, v___y_1957_);
lean_ctor_set(v___x_1975_, 2, v_a_1959_);
lean_ctor_set(v___x_1975_, 3, v_a_1971_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*4, v___y_1956_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v___x_1975_);
v___x_1977_ = v___x_1973_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v___x_1975_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
v___jp_1980_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__6));
v___x_1985_ = l_Lake_JsonObject_getJson_x3f(v_a_1944_, v___x_1984_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v___x_1986_; 
v___x_1986_ = lean_box(0);
v___y_1956_ = v___y_1981_;
v___y_1957_ = v_a_1983_;
v___y_1958_ = v___y_1982_;
v_a_1959_ = v___x_1986_;
goto v___jp_1955_;
}
else
{
lean_object* v_val_1987_; lean_object* v___x_1988_; 
v_val_1987_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_val_1987_);
lean_dec_ref_known(v___x_1985_, 1);
v___x_1988_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(v_val_1987_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1998_; 
lean_dec_ref(v_a_1983_);
lean_dec(v___y_1982_);
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1991_ = v___x_1988_;
v_isShared_1992_ = v_isSharedCheck_1998_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1988_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1998_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1993_ = ((lean_object*)(l_Lake_Manifest_fromJson_x3f___closed__0));
v___x_1994_ = lean_string_append(v___x_1993_, v_a_1989_);
lean_dec(v_a_1989_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 0, v___x_1994_);
v___x_1996_ = v___x_1991_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
else
{
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
lean_dec_ref(v_a_1983_);
lean_dec(v___y_1982_);
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_1999_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1988_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1988_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
lean_ctor_set_tag(v___x_2001_, 0);
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
else
{
lean_object* v_a_2007_; 
v_a_2007_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_1988_, 1);
v___y_1956_ = v___y_1981_;
v___y_1957_ = v_a_1983_;
v___y_1958_ = v___y_1982_;
v_a_1959_ = v_a_2007_;
goto v___jp_1955_;
}
}
}
}
v___jp_2008_:
{
lean_object* v___x_2011_; 
v___x_2011_ = l_Lake_defaultLakeDir;
v___y_1981_ = v___y_2009_;
v___y_1982_ = v___y_2010_;
v_a_1983_ = v___x_2011_;
goto v___jp_1980_;
}
v___jp_2012_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__5));
v___x_2016_ = l_Lake_JsonObject_getJson_x3f(v_a_1944_, v___x_2015_);
if (lean_obj_tag(v___x_2016_) == 0)
{
v___y_2009_ = v___y_2013_;
v___y_2010_ = v_a_2014_;
goto v___jp_2008_;
}
else
{
lean_object* v_val_2017_; lean_object* v___x_2018_; 
v_val_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_val_2017_);
lean_dec_ref_known(v___x_2016_, 1);
v___x_2018_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__2(v_val_2017_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_a_2014_);
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2021_ = v___x_2018_;
v_isShared_2022_ = v_isSharedCheck_2028_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2018_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2028_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2023_ = ((lean_object*)(l_Lake_Manifest_fromJson_x3f___closed__1));
v___x_2024_ = lean_string_append(v___x_2023_, v_a_2019_);
lean_dec(v_a_2019_);
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 0, v___x_2024_);
v___x_2026_ = v___x_2021_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
else
{
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_dec(v_a_2014_);
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_2029_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_2018_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2018_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 0);
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
else
{
lean_object* v_a_2037_; 
v_a_2037_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2018_, 1);
if (lean_obj_tag(v_a_2037_) == 0)
{
v___y_2009_ = v___y_2013_;
v___y_2010_ = v_a_2014_;
goto v___jp_2008_;
}
else
{
lean_object* v_val_2038_; 
v_val_2038_ = lean_ctor_get(v_a_2037_, 0);
lean_inc(v_val_2038_);
lean_dec_ref_known(v_a_2037_, 1);
v___y_1981_ = v___y_2013_;
v___y_1982_ = v_a_2014_;
v_a_1983_ = v_val_2038_;
goto v___jp_1980_;
}
}
}
}
}
v___jp_2039_:
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson_spec__0_spec__0___closed__3);
v___y_2013_ = v___y_2040_;
v_a_2014_ = v___x_2041_;
goto v___jp_2012_;
}
v___jp_2042_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_instFromJsonPackageEntryV6_fromJson___closed__6));
v___x_2045_ = l_Lake_JsonObject_getJson_x3f(v_a_1944_, v___x_2044_);
if (lean_obj_tag(v___x_2045_) == 0)
{
v___y_2040_ = v_a_2043_;
goto v___jp_2039_;
}
else
{
lean_object* v_val_2046_; lean_object* v___x_2047_; 
v_val_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_val_2046_);
lean_dec_ref_known(v___x_2045_, 1);
v___x_2047_ = l_Lean_Option_fromJson_x3f___at___00Lake_Manifest_fromJson_x3f_spec__0(v_val_2046_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2057_; 
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2050_ = v___x_2047_;
v_isShared_2051_ = v_isSharedCheck_2057_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2057_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2052_ = ((lean_object*)(l_Lake_PackageEntry_fromJson_x3f___closed__1));
v___x_2053_ = lean_string_append(v___x_2052_, v_a_2048_);
lean_dec(v_a_2048_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2053_);
v___x_2055_ = v___x_2050_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2053_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
else
{
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec(v_a_1954_);
lean_dec(v_a_1944_);
v_a_2058_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2047_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2047_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
lean_ctor_set_tag(v___x_2060_, 0);
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
else
{
lean_object* v_a_2066_; 
v_a_2066_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2047_, 1);
if (lean_obj_tag(v_a_2066_) == 0)
{
v___y_2040_ = v_a_2043_;
goto v___jp_2039_;
}
else
{
lean_object* v_val_2067_; 
v_val_2067_ = lean_ctor_get(v_a_2066_, 0);
lean_inc(v_val_2067_);
lean_dec_ref_known(v_a_2066_, 1);
v___y_2013_ = v_a_2043_;
v_a_2014_ = v_val_2067_;
goto v___jp_2012_;
}
}
}
}
}
v___jp_2068_:
{
uint8_t v___x_2069_; 
v___x_2069_ = 0;
v_a_2043_ = v___x_2069_;
goto v___jp_2042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_parse(lean_object* v_data_2098_){
_start:
{
lean_object* v___x_2099_; 
v___x_2099_ = l_Lean_Json_parse(v_data_2098_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2109_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2109_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2109_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2104_ = ((lean_object*)(l_Lake_Manifest_parse___closed__0));
v___x_2105_ = lean_string_append(v___x_2104_, v_a_2100_);
lean_dec(v_a_2100_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2105_);
v___x_2107_ = v___x_2102_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2111_; 
v_a_2110_ = lean_ctor_get(v___x_2099_, 0);
lean_inc(v_a_2110_);
lean_dec_ref_known(v___x_2099_, 1);
v___x_2111_ = l_Lake_Manifest_fromJson_x3f(v_a_2110_);
return v___x_2111_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_load(lean_object* v_file_2113_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l_IO_FS_readFile(v_file_2113_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2144_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2118_ = v___x_2115_;
v_isShared_2119_ = v_isSharedCheck_2144_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2115_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2144_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v_a_2121_; lean_object* v___x_2129_; 
v___x_2129_ = l_Lean_Json_parse(v_a_2116_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2130_);
lean_dec_ref_known(v___x_2129_, 1);
v___x_2131_ = ((lean_object*)(l_Lake_Manifest_parse___closed__0));
v___x_2132_ = lean_string_append(v___x_2131_, v_a_2130_);
lean_dec(v_a_2130_);
v_a_2121_ = v___x_2132_;
goto v___jp_2120_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2134_; 
v_a_2133_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2129_, 1);
v___x_2134_ = l_Lake_Manifest_fromJson_x3f(v_a_2133_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v_a_2121_ = v_a_2135_;
goto v___jp_2120_;
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
lean_del_object(v___x_2118_);
lean_dec_ref(v_file_2113_);
v_a_2136_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2134_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2134_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
v___jp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2122_ = ((lean_object*)(l_Lake_Manifest_load___closed__0));
v___x_2123_ = lean_string_append(v_file_2113_, v___x_2122_);
v___x_2124_ = lean_string_append(v___x_2123_, v_a_2121_);
lean_dec_ref(v_a_2121_);
v___x_2125_ = lean_mk_io_user_error(v___x_2124_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set_tag(v___x_2118_, 1);
lean_ctor_set(v___x_2118_, 0, v___x_2125_);
v___x_2127_ = v___x_2118_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec_ref(v_file_2113_);
v_a_2145_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2115_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2115_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_load___boxed(lean_object* v_file_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Lake_Manifest_load(v_file_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_load_x3f(lean_object* v_file_2156_){
_start:
{
lean_object* v_a_2159_; lean_object* v___x_2163_; 
v___x_2163_ = l_IO_FS_readFile(v_file_2156_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2192_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2166_ = v___x_2163_;
v_isShared_2167_ = v_isSharedCheck_2192_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2163_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2192_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v_a_2169_; lean_object* v___x_2174_; 
v___x_2174_ = l_Lean_Json_parse(v_a_2164_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_del_object(v___x_2166_);
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2174_, 1);
v___x_2176_ = ((lean_object*)(l_Lake_Manifest_parse___closed__0));
v___x_2177_ = lean_string_append(v___x_2176_, v_a_2175_);
lean_dec(v_a_2175_);
v_a_2169_ = v___x_2177_;
goto v___jp_2168_;
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2179_; 
v_a_2178_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v___x_2174_, 1);
v___x_2179_ = l_Lake_Manifest_fromJson_x3f(v_a_2178_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; 
lean_del_object(v___x_2166_);
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
lean_inc(v_a_2180_);
lean_dec_ref_known(v___x_2179_, 1);
v_a_2169_ = v_a_2180_;
goto v___jp_2168_;
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2191_; 
lean_dec_ref(v_file_2156_);
v_a_2181_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2183_ = v___x_2179_;
v_isShared_2184_ = v_isSharedCheck_2191_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2179_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2191_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_object* v___x_2188_; 
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 0, v___x_2186_);
v___x_2188_ = v___x_2166_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v___x_2186_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
}
v___jp_2168_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2170_ = ((lean_object*)(l_Lake_Manifest_load___closed__0));
v___x_2171_ = lean_string_append(v_file_2156_, v___x_2170_);
v___x_2172_ = lean_string_append(v___x_2171_, v_a_2169_);
lean_dec_ref(v_a_2169_);
v___x_2173_ = lean_mk_io_user_error(v___x_2172_);
v_a_2159_ = v___x_2173_;
goto v___jp_2158_;
}
}
}
else
{
lean_object* v_a_2193_; 
lean_dec_ref(v_file_2156_);
v_a_2193_ = lean_ctor_get(v___x_2163_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v___x_2163_, 1);
v_a_2159_ = v_a_2193_;
goto v___jp_2158_;
}
v___jp_2158_:
{
if (lean_obj_tag(v_a_2159_) == 11)
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_dec_ref_known(v_a_2159_, 2);
v___x_2160_ = lean_box(0);
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
return v___x_2161_;
}
else
{
lean_object* v___x_2162_; 
v___x_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2162_, 0, v_a_2159_);
return v___x_2162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_load_x3f___boxed(lean_object* v_file_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lake_Manifest_load_x3f(v_file_2194_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_save(lean_object* v_self_2197_, lean_object* v_manifestFile_2198_){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v_contents_2202_; uint32_t v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2200_ = l_Lake_Manifest_toJson(v_self_2197_);
v___x_2201_ = lean_unsigned_to_nat(80u);
v_contents_2202_ = l_Lean_Json_pretty(v___x_2200_, v___x_2201_);
v___x_2203_ = 10;
v___x_2204_ = lean_string_push(v_contents_2202_, v___x_2203_);
v___x_2205_ = l_IO_FS_writeFile(v_manifestFile_2198_, v___x_2204_);
lean_dec_ref(v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_save___boxed(lean_object* v_self_2206_, lean_object* v_manifestFile_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lake_Manifest_save(v_self_2206_, v_manifestFile_2207_);
lean_dec_ref(v_manifestFile_2207_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_decodeEntries(lean_object* v_data_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Lean_Json_getObj_x3f(v_data_2210_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2211_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2211_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2221_; 
v_a_2220_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2220_);
lean_dec_ref_known(v___x_2211_, 1);
v___x_2221_ = l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion(v_a_2220_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_dec(v_a_2220_);
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2221_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2221_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v_a_2230_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v___x_2221_, 1);
v___x_2231_ = ((lean_object*)(l_Lake_Manifest_version___closed__1));
v___x_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2232_, 0, v_a_2230_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
v___x_2233_ = l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages(v___x_2232_, v_a_2220_);
lean_dec(v_a_2220_);
lean_dec_ref_known(v___x_2232_, 2);
return v___x_2233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_parseEntries(lean_object* v_data_2234_){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = l_Lean_Json_parse(v_data_2234_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2245_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2238_ = v___x_2235_;
v_isShared_2239_ = v_isSharedCheck_2245_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2235_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2245_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2243_; 
v___x_2240_ = ((lean_object*)(l_Lake_Manifest_parse___closed__0));
v___x_2241_ = lean_string_append(v___x_2240_, v_a_2236_);
lean_dec(v_a_2236_);
if (v_isShared_2239_ == 0)
{
lean_ctor_set(v___x_2238_, 0, v___x_2241_);
v___x_2243_ = v___x_2238_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2241_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2247_; 
v_a_2246_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2246_);
lean_dec_ref_known(v___x_2235_, 1);
v___x_2247_ = l_Lake_Manifest_decodeEntries(v_a_2246_);
return v___x_2247_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_loadEntries(lean_object* v_file_2248_){
_start:
{
lean_object* v___x_2250_; 
v___x_2250_ = l_IO_FS_readFile(v_file_2248_);
if (lean_obj_tag(v___x_2250_) == 0)
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2279_; 
v_a_2251_ = lean_ctor_get(v___x_2250_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2250_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2253_ = v___x_2250_;
v_isShared_2254_ = v_isSharedCheck_2279_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2250_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2279_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v_a_2256_; lean_object* v___x_2264_; 
v___x_2264_ = l_Lean_Json_parse(v_a_2251_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
v___x_2266_ = ((lean_object*)(l_Lake_Manifest_parse___closed__0));
v___x_2267_ = lean_string_append(v___x_2266_, v_a_2265_);
lean_dec(v_a_2265_);
v_a_2256_ = v___x_2267_;
goto v___jp_2255_;
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2269_; 
v_a_2268_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2264_, 1);
v___x_2269_ = l_Lake_Manifest_decodeEntries(v_a_2268_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc(v_a_2270_);
lean_dec_ref_known(v___x_2269_, 1);
v_a_2256_ = v_a_2270_;
goto v___jp_2255_;
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
lean_del_object(v___x_2253_);
lean_dec_ref(v_file_2248_);
v_a_2271_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2269_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2269_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
lean_ctor_set_tag(v___x_2273_, 0);
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
v___jp_2255_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2257_ = ((lean_object*)(l_Lake_Manifest_load___closed__0));
v___x_2258_ = lean_string_append(v_file_2248_, v___x_2257_);
v___x_2259_ = lean_string_append(v___x_2258_, v_a_2256_);
lean_dec_ref(v_a_2256_);
v___x_2260_ = lean_mk_io_user_error(v___x_2259_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set_tag(v___x_2253_, 1);
lean_ctor_set(v___x_2253_, 0, v___x_2260_);
v___x_2262_ = v___x_2253_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_dec_ref(v_file_2248_);
v_a_2280_ = lean_ctor_get(v___x_2250_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2250_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2250_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2250_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_loadEntries___boxed(lean_object* v_file_2288_, lean_object* v_a_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lake_Manifest_loadEntries(v_file_2288_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_tryLoadEntries(lean_object* v_file_2291_){
_start:
{
lean_object* v_a_2294_; lean_object* v___x_2303_; 
v___x_2303_ = l_IO_FS_readFile(v_file_2291_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2325_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2325_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2325_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v_a_2309_; lean_object* v___x_2314_; 
v___x_2314_ = l_Lean_Json_parse(v_a_2304_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
lean_del_object(v___x_2306_);
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2315_);
lean_dec_ref_known(v___x_2314_, 1);
v___x_2316_ = ((lean_object*)(l_Lake_Manifest_parse___closed__0));
v___x_2317_ = lean_string_append(v___x_2316_, v_a_2315_);
lean_dec(v_a_2315_);
v_a_2309_ = v___x_2317_;
goto v___jp_2308_;
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2319_; 
v_a_2318_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2318_);
lean_dec_ref_known(v___x_2314_, 1);
v___x_2319_ = l_Lake_Manifest_decodeEntries(v_a_2318_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; 
lean_del_object(v___x_2306_);
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v_a_2309_ = v_a_2320_;
goto v___jp_2308_;
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; 
lean_dec_ref(v_file_2291_);
v_a_2321_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2319_, 1);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v_a_2321_);
v___x_2323_ = v___x_2306_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2321_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
v___jp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2310_ = ((lean_object*)(l_Lake_Manifest_load___closed__0));
lean_inc_ref(v_file_2291_);
v___x_2311_ = lean_string_append(v_file_2291_, v___x_2310_);
v___x_2312_ = lean_string_append(v___x_2311_, v_a_2309_);
lean_dec_ref(v_a_2309_);
v___x_2313_ = lean_mk_io_user_error(v___x_2312_);
v_a_2294_ = v___x_2313_;
goto v___jp_2293_;
}
}
}
else
{
lean_object* v_a_2326_; 
v_a_2326_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2326_);
lean_dec_ref_known(v___x_2303_, 1);
v_a_2294_ = v_a_2326_;
goto v___jp_2293_;
}
v___jp_2293_:
{
if (lean_obj_tag(v_a_2294_) == 11)
{
lean_object* v___x_2295_; lean_object* v___x_2296_; 
lean_dec_ref_known(v_a_2294_, 2);
lean_dec_ref(v_file_2291_);
v___x_2295_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getPackages___closed__1));
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
return v___x_2296_;
}
else
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2297_ = ((lean_object*)(l_Lake_Manifest_load___closed__0));
v___x_2298_ = lean_string_append(v_file_2291_, v___x_2297_);
v___x_2299_ = lean_io_error_to_string(v_a_2294_);
v___x_2300_ = lean_string_append(v___x_2298_, v___x_2299_);
lean_dec_ref(v___x_2299_);
v___x_2301_ = lean_mk_io_user_error(v___x_2300_);
v___x_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_tryLoadEntries___boxed(lean_object* v_file_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l_Lake_Manifest_tryLoadEntries(v_file_2327_);
return v_res_2329_;
}
}
static lean_object* _init_l_Lake_Manifest_saveEntries___closed__0(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2330_ = lean_obj_once(&l_Lake_Manifest_toJson___closed__2, &l_Lake_Manifest_toJson___closed__2_once, _init_l_Lake_Manifest_toJson___closed__2);
v___x_2331_ = ((lean_object*)(l___private_Lake_Load_Manifest_0__Lake_Manifest_getVersion___closed__7));
v___x_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2331_);
lean_ctor_set(v___x_2332_, 1, v___x_2330_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_saveEntries(lean_object* v_file_2333_, lean_object* v_entries_2334_){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v_contents_2345_; uint32_t v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2336_ = lean_obj_once(&l_Lake_Manifest_saveEntries___closed__0, &l_Lake_Manifest_saveEntries___closed__0_once, _init_l_Lake_Manifest_saveEntries___closed__0);
v___x_2337_ = ((lean_object*)(l_Lake_Manifest_toJson___closed__7));
v___x_2338_ = l_Lean_Array_toJson___at___00Lake_Manifest_toJson_spec__0(v_entries_2334_);
v___x_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2337_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = lean_box(0);
v___x_2341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2339_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2336_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = l_Lean_Json_mkObj(v___x_2342_);
lean_dec_ref_known(v___x_2342_, 2);
v___x_2344_ = lean_unsigned_to_nat(80u);
v_contents_2345_ = l_Lean_Json_pretty(v___x_2343_, v___x_2344_);
v___x_2346_ = 10;
v___x_2347_ = lean_string_push(v_contents_2345_, v___x_2346_);
v___x_2348_ = l_IO_FS_writeFile(v_file_2333_, v___x_2347_);
lean_dec_ref(v___x_2347_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l_Lake_Manifest_saveEntries___boxed(lean_object* v_file_2349_, lean_object* v_entries_2350_, lean_object* v_a_2351_){
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = l_Lake_Manifest_saveEntries(v_file_2349_, v_entries_2350_);
lean_dec_ref(v_entries_2350_);
lean_dec_ref(v_file_2349_);
return v_res_2352_;
}
}
lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Defaults(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Git(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Error(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Manifest(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Defaults(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedPackageEntryV6_default = _init_l_Lake_instInhabitedPackageEntryV6_default();
lean_mark_persistent(l_Lake_instInhabitedPackageEntryV6_default);
l___private_Lake_Load_Manifest_0__Lake_instInhabitedPackageEntryV6 = _init_l___private_Lake_Load_Manifest_0__Lake_instInhabitedPackageEntryV6();
lean_mark_persistent(l___private_Lake_Load_Manifest_0__Lake_instInhabitedPackageEntryV6);
l_Lake_instInhabitedPackageEntry_default = _init_l_Lake_instInhabitedPackageEntry_default();
lean_mark_persistent(l_Lake_instInhabitedPackageEntry_default);
l_Lake_instInhabitedPackageEntry = _init_l_Lake_instInhabitedPackageEntry();
lean_mark_persistent(l_Lake_instInhabitedPackageEntry);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Manifest(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Version(uint8_t builtin);
lean_object* initialize_Lake_Config_Defaults(uint8_t builtin);
lean_object* initialize_Lake_Util_Git(uint8_t builtin);
lean_object* initialize_Lake_Util_Error(uint8_t builtin);
lean_object* initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Manifest(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Defaults(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Manifest(builtin);
}
#ifdef __cplusplus
}
#endif

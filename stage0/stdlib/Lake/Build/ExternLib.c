// Lean compiler output
// Module: Lake.Build.ExternLib
// Imports: public import Lake.Config.FacetConfig public import Lake.Build.Job.Monad import Lake.Build.Job.Register import Lake.Build.Common import Lake.Build.Infos
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
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
extern lean_object* l_Lake_ExternLib_keyword;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_System_FilePath_fileStem(lean_object*);
extern uint8_t l_System_Platform_isWindows;
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_to_int(lean_object*);
extern lean_object* l_Lake_platformTrace;
extern lean_object* l_Lake_sharedLibExt;
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lake_ExternLib_staticFacet;
extern lean_object* l_Lake_ExternLib_defaultFacet;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_sharedFacet;
extern lean_object* l_Lake_ExternLib_dynlibFacet;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "static"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__0 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__0_value;
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":static"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__1 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_staticFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_staticFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_ExternLib_staticFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_ExternLib_staticFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ExternLib_staticFacetConfig___closed__0 = (const lean_object*)&l_Lake_ExternLib_staticFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_ExternLib_staticFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ExternLib_staticFacetConfig___closed__1 = (const lean_object*)&l_Lake_ExternLib_staticFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_ExternLib_staticFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_staticFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_ExternLib_staticFacetConfig;
static const lean_string_object l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__0 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__0_value;
static lean_once_cell_t l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__1;
static const lean_string_object l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "-Wl,--whole-archive"};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__2 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__2_value;
static const lean_string_object l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "-Wl,--no-whole-archive"};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__3 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__3_value;
static lean_once_cell_t l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__4;
static const lean_string_object l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "-Wl,-force_load,"};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__5 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanSharedLibOfStatic_spec__1(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanSharedLibOfStatic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___boxed(lean_object*);
static const lean_string_object l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pure: "};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__0 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__0_value;
static const lean_string_object l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__1 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__1_value;
static const lean_array_object l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__2 = (const lean_object*)&l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__2_value;
static lean_once_cell_t l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__3;
static lean_once_cell_t l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":shared"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___closed__0 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ExternLib_sharedFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ExternLib_sharedFacetConfig___closed__0 = (const lean_object*)&l_Lake_ExternLib_sharedFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_ExternLib_sharedFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_sharedFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_ExternLib_sharedFacetConfig;
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "shared library `"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "` does not start with `lib`; this is not supported on Unix"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lib"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__2 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__3;
static const lean_array_object l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__4 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__4_value;
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` has no file name"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__5 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___closed__0 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":dynlib"};
static const lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___closed__0 = (const lean_object*)&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_dynlibFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_dynlibFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_ExternLib_dynlibFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_ExternLib_dynlibFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ExternLib_dynlibFacetConfig___closed__0 = (const lean_object*)&l_Lake_ExternLib_dynlibFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_ExternLib_dynlibFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ExternLib_dynlibFacetConfig___closed__1 = (const lean_object*)&l_Lake_ExternLib_dynlibFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_ExternLib_dynlibFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_dynlibFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_ExternLib_dynlibFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ExternLib_defaultFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildDefault___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ExternLib_defaultFacetConfig___closed__0 = (const lean_object*)&l_Lake_ExternLib_defaultFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_ExternLib_defaultFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_defaultFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_ExternLib_defaultFacetConfig;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_ExternLib_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_ExternLib_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_initFacetConfigs___closed__1;
static lean_once_cell_t l_Lake_ExternLib_initFacetConfigs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_initFacetConfigs___closed__2;
static lean_once_cell_t l_Lake_ExternLib_initFacetConfigs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_initFacetConfigs___closed__3;
LEAN_EXPORT lean_object* l_Lake_ExternLib_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___lam__0(lean_object* v___x_1_, lean_object* v_config_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc(v___y_5_);
lean_inc(v___y_4_);
v___x_10_ = lean_apply_7(v___y_3_, v___x_1_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, lean_box(0));
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; lean_object* v_a_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_20_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
v_a_12_ = lean_ctor_get(v___x_10_, 1);
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_20_ == 0)
{
v___x_14_ = v___x_10_;
v_isShared_15_ = v_isSharedCheck_20_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_a_12_);
lean_inc(v_a_11_);
lean_dec(v___x_10_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_20_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_16_; lean_object* v___x_18_; 
v___x_16_ = lean_apply_1(v_config_2_, v_a_11_);
if (v_isShared_15_ == 0)
{
lean_ctor_set(v___x_14_, 0, v___x_16_);
v___x_18_ = v___x_14_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v___x_16_);
lean_ctor_set(v_reuseFailAlloc_19_, 1, v_a_12_);
v___x_18_ = v_reuseFailAlloc_19_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
return v___x_18_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_29_; 
lean_dec(v_config_2_);
v_a_21_ = lean_ctor_get(v___x_10_, 0);
v_a_22_ = lean_ctor_get(v___x_10_, 1);
v_isSharedCheck_29_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_29_ == 0)
{
v___x_24_ = v___x_10_;
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_inc(v_a_21_);
lean_dec(v___x_10_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_27_; 
if (v_isShared_25_ == 0)
{
v___x_27_ = v___x_24_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_a_21_);
lean_ctor_set(v_reuseFailAlloc_28_, 1, v_a_22_);
v___x_27_ = v_reuseFailAlloc_28_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
return v___x_27_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___lam__0___boxed(lean_object* v___x_30_, lean_object* v_config_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___lam__0(v___x_30_, v_config_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_);
lean_dec_ref(v___y_36_);
lean_dec(v___y_35_);
lean_dec(v___y_34_);
lean_dec(v___y_33_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic(lean_object* v_lib_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v_pkg_50_; lean_object* v_name_51_; lean_object* v_config_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; uint8_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___f_61_; uint8_t v___x_62_; lean_object* v___x_63_; 
v_pkg_50_ = lean_ctor_get(v_lib_42_, 0);
lean_inc_ref(v_pkg_50_);
v_name_51_ = lean_ctor_get(v_lib_42_, 1);
lean_inc(v_name_51_);
v_config_52_ = lean_ctor_get(v_lib_42_, 2);
lean_inc(v_config_52_);
lean_dec_ref(v_lib_42_);
v___x_53_ = l_Lake_instDataKindFilePath;
v___x_54_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__0));
v___x_55_ = l_Lean_Name_str___override(v_name_51_, v___x_54_);
v___x_56_ = 1;
lean_inc(v___x_55_);
v___x_57_ = l_Lean_Name_toString(v___x_55_, v___x_56_);
v___x_58_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__1));
v___x_59_ = lean_string_append(v___x_57_, v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_pkg_50_);
lean_ctor_set(v___x_60_, 1, v___x_55_);
v___f_61_ = lean_alloc_closure((void*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___lam__0___boxed), 9, 2);
lean_closure_set(v___f_61_, 0, v___x_60_);
lean_closure_set(v___f_61_, 1, v_config_52_);
v___x_62_ = 0;
v___x_63_ = l_Lake_ensureJob___redArg(v___x_53_, v___f_61_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_88_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
v_a_65_ = lean_ctor_get(v___x_63_, 1);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_88_ == 0)
{
v___x_67_ = v___x_63_;
v_isShared_68_ = v_isSharedCheck_88_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_inc(v_a_64_);
lean_dec(v___x_63_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_88_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v_task_69_; lean_object* v_kind_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_86_; 
v_task_69_ = lean_ctor_get(v_a_64_, 0);
v_kind_70_ = lean_ctor_get(v_a_64_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_a_64_);
if (v_isSharedCheck_86_ == 0)
{
lean_object* v_unused_87_; 
v_unused_87_ = lean_ctor_get(v_a_64_, 2);
lean_dec(v_unused_87_);
v___x_72_ = v_a_64_;
v_isShared_73_ = v_isSharedCheck_86_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_kind_70_);
lean_inc(v_task_69_);
lean_dec(v_a_64_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_86_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v_registeredJobs_74_; lean_object* v_job_76_; 
v_registeredJobs_74_ = lean_ctor_get(v_a_47_, 4);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 2, v___x_59_);
v_job_76_ = v___x_72_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_task_69_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_kind_70_);
lean_ctor_set(v_reuseFailAlloc_85_, 2, v___x_59_);
v_job_76_ = v_reuseFailAlloc_85_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_83_; 
lean_ctor_set_uint8(v_job_76_, sizeof(void*)*3, v___x_62_);
v___x_77_ = lean_st_ref_take(v_registeredJobs_74_);
lean_inc_ref(v_job_76_);
v___x_78_ = l_Lake_Job_toOpaque___redArg(v_job_76_);
v___x_79_ = lean_array_push(v___x_77_, v___x_78_);
v___x_80_ = lean_st_ref_put(v_registeredJobs_74_, v___x_79_);
v___x_81_ = l_Lake_Job_renew___redArg(v_job_76_);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_81_);
v___x_83_ = v___x_67_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_a_65_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_59_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___boxed(lean_object* v_lib_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic(v_lib_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_);
lean_dec_ref(v_a_94_);
lean_dec(v_a_93_);
lean_dec(v_a_92_);
lean_dec(v_a_91_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_staticFacetConfig_spec__0(uint8_t v_fmt_98_, lean_object* v_a_99_){
_start:
{
if (v_fmt_98_ == 0)
{
return v_a_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = l_Lake_mkRelPathString(v_a_99_);
v___x_101_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
v___x_102_ = l_Lean_Json_compress(v___x_101_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_staticFacetConfig_spec__0___boxed(lean_object* v_fmt_103_, lean_object* v_a_104_){
_start:
{
uint8_t v_fmt_boxed_105_; lean_object* v_res_106_; 
v_fmt_boxed_105_ = lean_unbox(v_fmt_103_);
v_res_106_ = l_Lake_formatQuery___at___00Lake_ExternLib_staticFacetConfig_spec__0(v_fmt_boxed_105_, v_a_104_);
return v_res_106_;
}
}
static lean_object* _init_l_Lake_ExternLib_staticFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_109_; uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___f_109_ = ((lean_object*)(l_Lake_ExternLib_staticFacetConfig___closed__0));
v___x_110_ = 1;
v___x_111_ = l_Lake_instDataKindFilePath;
v___x_112_ = ((lean_object*)(l_Lake_ExternLib_staticFacetConfig___closed__1));
v___x_113_ = l_Lake_ExternLib_keyword;
v___x_114_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_111_);
lean_ctor_set(v___x_114_, 3, v___f_109_);
lean_ctor_set_uint8(v___x_114_, sizeof(void*)*4, v___x_110_);
lean_ctor_set_uint8(v___x_114_, sizeof(void*)*4 + 1, v___x_110_);
return v___x_114_;
}
}
static lean_object* _init_l_Lake_ExternLib_staticFacetConfig(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lake_ExternLib_staticFacetConfig___closed__2, &l_Lake_ExternLib_staticFacetConfig___closed__2_once, _init_l_Lake_ExternLib_staticFacetConfig___closed__2);
return v___x_115_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__1(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__0));
v___x_118_ = lean_unsigned_to_nat(2u);
v___x_119_ = lean_mk_empty_array_with_capacity(v___x_118_);
v___x_120_ = lean_array_push(v___x_119_, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__4(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_123_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__2));
v___x_124_ = lean_unsigned_to_nat(3u);
v___x_125_ = lean_mk_empty_array_with_capacity(v___x_124_);
v___x_126_ = lean_array_push(v___x_125_, v___x_123_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0(lean_object* v_weakArgs_128_, lean_object* v_traceArgs_129_, lean_object* v___x_130_, lean_object* v_staticLib_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_log_139_; uint8_t v_action_140_; uint8_t v_wantsRebuild_141_; lean_object* v_trace_142_; lean_object* v_buildTime_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_210_; 
v_log_139_ = lean_ctor_get(v___y_137_, 0);
v_action_140_ = lean_ctor_get_uint8(v___y_137_, sizeof(void*)*3);
v_wantsRebuild_141_ = lean_ctor_get_uint8(v___y_137_, sizeof(void*)*3 + 1);
v_trace_142_ = lean_ctor_get(v___y_137_, 1);
v_buildTime_143_ = lean_ctor_get(v___y_137_, 2);
v_isSharedCheck_210_ = !lean_is_exclusive(v___y_137_);
if (v_isSharedCheck_210_ == 0)
{
v___x_145_ = v___y_137_;
v_isShared_146_ = v_isSharedCheck_210_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_buildTime_143_);
lean_inc(v_trace_142_);
lean_inc(v_log_139_);
lean_dec(v___y_137_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_210_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v_toContext_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v_lakeEnv_161_; lean_object* v_lean_162_; lean_object* v___y_164_; uint8_t v___x_200_; 
v_toContext_147_ = lean_ctor_get(v___y_136_, 1);
v___x_148_ = l_unsafeCast___redArg(v_toContext_147_);
v___x_149_ = l_unsafeCast___redArg(v___x_148_);
lean_dec(v___x_148_);
v___x_150_ = l_unsafeCast___redArg(v___x_149_);
lean_dec(v___x_149_);
v___x_151_ = l_unsafeCast___redArg(v___x_150_);
lean_dec(v___x_150_);
v___x_152_ = l_unsafeCast___redArg(v___x_151_);
lean_dec(v___x_151_);
v___x_153_ = l_unsafeCast___redArg(v___x_152_);
lean_dec(v___x_152_);
v___x_154_ = l_unsafeCast___redArg(v___x_153_);
lean_dec(v___x_153_);
v___x_155_ = l_unsafeCast___redArg(v___x_154_);
lean_dec(v___x_154_);
v___x_156_ = l_unsafeCast___redArg(v___x_155_);
lean_dec(v___x_155_);
v___x_157_ = l_unsafeCast___redArg(v___x_156_);
lean_dec(v___x_156_);
v___x_158_ = l_unsafeCast___redArg(v___x_157_);
lean_dec(v___x_157_);
v___x_159_ = l_unsafeCast___redArg(v___x_158_);
lean_dec(v___x_158_);
v___x_160_ = l_unsafeCast___redArg(v___x_159_);
lean_dec(v___x_159_);
v_lakeEnv_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc_ref(v_lakeEnv_161_);
lean_dec(v___x_160_);
v_lean_162_ = lean_ctor_get(v_lakeEnv_161_, 1);
lean_inc_ref(v_lean_162_);
lean_dec_ref(v_lakeEnv_161_);
v___x_200_ = l_System_Platform_isOSX;
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_201_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__3));
v___x_202_ = lean_obj_once(&l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__4, &l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__4_once, _init_l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__4);
v___x_203_ = lean_array_push(v___x_202_, v_staticLib_131_);
v___x_204_ = lean_array_push(v___x_203_, v___x_201_);
v___y_164_ = v___x_204_;
goto v___jp_163_;
}
else
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_205_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__5));
v___x_206_ = lean_string_append(v___x_205_, v_staticLib_131_);
lean_dec_ref(v_staticLib_131_);
v___x_207_ = lean_unsigned_to_nat(1u);
v___x_208_ = lean_mk_empty_array_with_capacity(v___x_207_);
v___x_209_ = lean_array_push(v___x_208_, v___x_206_);
v___y_164_ = v___x_209_;
goto v___jp_163_;
}
v___jp_163_:
{
lean_object* v_leanLibDir_165_; lean_object* v_cc_166_; lean_object* v_ccLinkSharedFlags_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_leanLibDir_165_ = lean_ctor_get(v_lean_162_, 3);
lean_inc_ref(v_leanLibDir_165_);
v_cc_166_ = lean_ctor_get(v_lean_162_, 14);
lean_inc_ref(v_cc_166_);
v_ccLinkSharedFlags_167_ = lean_ctor_get(v_lean_162_, 20);
lean_inc_ref(v_ccLinkSharedFlags_167_);
lean_dec_ref(v_lean_162_);
v___x_168_ = l_Array_append___redArg(v___y_164_, v_weakArgs_128_);
v___x_169_ = l_Array_append___redArg(v___x_168_, v_traceArgs_129_);
v___x_170_ = lean_obj_once(&l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__1, &l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__1_once, _init_l_Lake_buildLeanSharedLibOfStatic___lam__0___closed__1);
v___x_171_ = lean_array_push(v___x_170_, v_leanLibDir_165_);
v___x_172_ = l_Array_append___redArg(v___x_169_, v___x_171_);
lean_dec_ref(v___x_171_);
v___x_173_ = l_Array_append___redArg(v___x_172_, v_ccLinkSharedFlags_167_);
lean_dec_ref(v_ccLinkSharedFlags_167_);
v___x_174_ = lean_box(0);
v___x_175_ = l_Lake_compileSharedLib(v___x_130_, v___x_173_, v_cc_166_, v___x_174_, v_log_139_);
lean_dec_ref(v___x_173_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_187_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_a_177_ = lean_ctor_get(v___x_175_, 1);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_187_ == 0)
{
v___x_179_ = v___x_175_;
v_isShared_180_ = v_isSharedCheck_187_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_inc(v_a_176_);
lean_dec(v___x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_187_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v_a_177_);
v___x_182_ = v___x_145_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_177_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v_trace_142_);
lean_ctor_set(v_reuseFailAlloc_186_, 2, v_buildTime_143_);
lean_ctor_set_uint8(v_reuseFailAlloc_186_, sizeof(void*)*3, v_action_140_);
lean_ctor_set_uint8(v_reuseFailAlloc_186_, sizeof(void*)*3 + 1, v_wantsRebuild_141_);
v___x_182_ = v_reuseFailAlloc_186_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_184_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v___x_182_);
v___x_184_ = v___x_179_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_176_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
else
{
lean_object* v_a_188_; lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_199_; 
v_a_188_ = lean_ctor_get(v___x_175_, 0);
v_a_189_ = lean_ctor_get(v___x_175_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_199_ == 0)
{
v___x_191_ = v___x_175_;
v_isShared_192_ = v_isSharedCheck_199_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_dec(v___x_175_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_199_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v_a_189_);
v___x_194_ = v___x_145_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_a_189_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_trace_142_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_buildTime_143_);
lean_ctor_set_uint8(v_reuseFailAlloc_198_, sizeof(void*)*3, v_action_140_);
lean_ctor_set_uint8(v_reuseFailAlloc_198_, sizeof(void*)*3 + 1, v_wantsRebuild_141_);
v___x_194_ = v_reuseFailAlloc_198_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_196_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v___x_194_);
v___x_196_ = v___x_191_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_188_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__0___boxed(lean_object* v_weakArgs_211_, lean_object* v_traceArgs_212_, lean_object* v___x_213_, lean_object* v_staticLib_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lake_buildLeanSharedLibOfStatic___lam__0(v_weakArgs_211_, v_traceArgs_212_, v___x_213_, v_staticLib_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec_ref(v_traceArgs_212_);
lean_dec_ref(v_weakArgs_211_);
return v_res_222_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanSharedLibOfStatic_spec__1(lean_object* v_as_223_, size_t v_i_224_, size_t v_stop_225_, uint64_t v_b_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_usize_dec_eq(v_i_224_, v_stop_225_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; uint64_t v___x_229_; uint64_t v___x_230_; uint64_t v___x_231_; uint64_t v___x_232_; size_t v___x_233_; size_t v___x_234_; 
v___x_228_ = lean_array_uget_borrowed(v_as_223_, v_i_224_);
v___x_229_ = l_Lake_Hash_nil;
v___x_230_ = lean_string_hash(v___x_228_);
v___x_231_ = lean_uint64_mix_hash(v___x_229_, v___x_230_);
v___x_232_ = lean_uint64_mix_hash(v_b_226_, v___x_231_);
v___x_233_ = ((size_t)1ULL);
v___x_234_ = lean_usize_add(v_i_224_, v___x_233_);
v_i_224_ = v___x_234_;
v_b_226_ = v___x_232_;
goto _start;
}
else
{
return v_b_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanSharedLibOfStatic_spec__1___boxed(lean_object* v_as_236_, lean_object* v_i_237_, lean_object* v_stop_238_, lean_object* v_b_239_){
_start:
{
size_t v_i_boxed_240_; size_t v_stop_boxed_241_; uint64_t v_b_boxed_242_; uint64_t v_res_243_; lean_object* v_r_244_; 
v_i_boxed_240_ = lean_unbox_usize(v_i_237_);
lean_dec(v_i_237_);
v_stop_boxed_241_ = lean_unbox_usize(v_stop_238_);
lean_dec(v_stop_238_);
v_b_boxed_242_ = lean_unbox_uint64(v_b_239_);
lean_dec_ref(v_b_239_);
v_res_243_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanSharedLibOfStatic_spec__1(v_as_236_, v_i_boxed_240_, v_stop_boxed_241_, v_b_boxed_242_);
lean_dec_ref(v_as_236_);
v_r_244_ = lean_box_uint64(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0(lean_object* v_x_246_, lean_object* v_x_247_){
_start:
{
if (lean_obj_tag(v_x_247_) == 0)
{
return v_x_246_;
}
else
{
lean_object* v_head_248_; lean_object* v_tail_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v_head_248_ = lean_ctor_get(v_x_247_, 0);
v_tail_249_ = lean_ctor_get(v_x_247_, 1);
v___x_250_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0___closed__0));
v___x_251_ = lean_string_append(v_x_246_, v___x_250_);
v___x_252_ = lean_string_append(v___x_251_, v_head_248_);
v_x_246_ = v___x_252_;
v_x_247_ = v_tail_249_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0___boxed(lean_object* v_x_254_, lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0(v_x_254_, v_x_255_);
lean_dec(v_x_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0(lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v___x_261_; 
v___x_261_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__0));
return v___x_261_;
}
else
{
lean_object* v_tail_262_; 
v_tail_262_ = lean_ctor_get(v_x_260_, 1);
if (lean_obj_tag(v_tail_262_) == 0)
{
lean_object* v_head_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_head_263_ = lean_ctor_get(v_x_260_, 0);
v___x_264_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__1));
v___x_265_ = lean_string_append(v___x_264_, v_head_263_);
v___x_266_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__2));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
return v___x_267_;
}
else
{
lean_object* v_head_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint32_t v___x_272_; lean_object* v___x_273_; 
v_head_268_ = lean_ctor_get(v_x_260_, 0);
v___x_269_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___closed__1));
v___x_270_ = lean_string_append(v___x_269_, v_head_268_);
v___x_271_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0_spec__0(v___x_270_, v_tail_262_);
v___x_272_ = 93;
v___x_273_ = lean_string_push(v___x_271_, v___x_272_);
return v___x_273_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0___boxed(lean_object* v_x_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0(v_x_274_);
lean_dec(v_x_274_);
return v_res_275_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__3(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_nat_to_int(v___x_280_);
return v___x_281_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__4(void){
_start:
{
uint32_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_282_ = 0;
v___x_283_ = lean_obj_once(&l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__3, &l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__3_once, _init_l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__3);
v___x_284_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set_uint32(v___x_284_, sizeof(void*)*1, v___x_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1(lean_object* v_traceArgs_285_, lean_object* v_weakArgs_286_, lean_object* v_staticLib_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_log_295_; uint8_t v_action_296_; uint8_t v_wantsRebuild_297_; lean_object* v_trace_298_; lean_object* v_buildTime_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_352_; 
v_log_295_ = lean_ctor_get(v___y_293_, 0);
v_action_296_ = lean_ctor_get_uint8(v___y_293_, sizeof(void*)*3);
v_wantsRebuild_297_ = lean_ctor_get_uint8(v___y_293_, sizeof(void*)*3 + 1);
v_trace_298_ = lean_ctor_get(v___y_293_, 1);
v_buildTime_299_ = lean_ctor_get(v___y_293_, 2);
v_isSharedCheck_352_ = !lean_is_exclusive(v___y_293_);
if (v_isSharedCheck_352_ == 0)
{
v___x_301_ = v___y_293_;
v_isShared_302_ = v_isSharedCheck_352_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_buildTime_299_);
lean_inc(v_trace_298_);
lean_inc(v_log_295_);
lean_dec(v___y_293_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_352_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v_leanTrace_303_; lean_object* v___x_304_; uint64_t v___y_306_; uint64_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
v_leanTrace_303_ = lean_ctor_get(v___y_292_, 2);
lean_inc_ref(v_leanTrace_303_);
v___x_304_ = l_Lake_BuildTrace_mix(v_trace_298_, v_leanTrace_303_);
v___x_345_ = l_Lake_Hash_nil;
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_array_get_size(v_traceArgs_285_);
v___x_348_ = lean_nat_dec_lt(v___x_346_, v___x_347_);
if (v___x_348_ == 0)
{
v___y_306_ = v___x_345_;
goto v___jp_305_;
}
else
{
size_t v___x_349_; size_t v___x_350_; uint64_t v___x_351_; 
v___x_349_ = ((size_t)0ULL);
v___x_350_ = lean_usize_of_nat(v___x_347_);
v___x_351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanSharedLibOfStatic_spec__1(v_traceArgs_285_, v___x_349_, v___x_350_, v___x_345_);
v___y_306_ = v___x_351_;
goto v___jp_305_;
}
v___jp_305_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_307_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__0));
v___x_308_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__1));
lean_inc_ref(v_traceArgs_285_);
v___x_309_ = lean_array_to_list(v_traceArgs_285_);
v___x_310_ = l_List_toString___at___00Lake_buildLeanSharedLibOfStatic_spec__0(v___x_309_);
lean_dec(v___x_309_);
v___x_311_ = lean_string_append(v___x_308_, v___x_310_);
lean_dec_ref(v___x_310_);
v___x_312_ = lean_string_append(v___x_307_, v___x_311_);
lean_dec_ref(v___x_311_);
v___x_313_ = ((lean_object*)(l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__2));
v___x_314_ = lean_obj_once(&l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__4, &l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__4_once, _init_l_Lake_buildLeanSharedLibOfStatic___lam__1___closed__4);
v___x_315_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_315_, 0, v___x_312_);
lean_ctor_set(v___x_315_, 1, v___x_313_);
lean_ctor_set(v___x_315_, 2, v___x_314_);
lean_ctor_set_uint64(v___x_315_, sizeof(void*)*3, v___y_306_);
v___x_316_ = l_Lake_BuildTrace_mix(v___x_304_, v___x_315_);
v___x_317_ = l_Lake_platformTrace;
v___x_318_ = l_Lake_BuildTrace_mix(v___x_316_, v___x_317_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_318_);
v___x_320_ = v___x_301_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_log_295_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_344_, 2, v_buildTime_299_);
lean_ctor_set_uint8(v_reuseFailAlloc_344_, sizeof(void*)*3, v_action_296_);
lean_ctor_set_uint8(v_reuseFailAlloc_344_, sizeof(void*)*3 + 1, v_wantsRebuild_297_);
v___x_320_ = v_reuseFailAlloc_344_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___f_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v___x_321_ = l_Lake_sharedLibExt;
lean_inc_ref(v_staticLib_287_);
v___x_322_ = l_System_FilePath_withExtension(v_staticLib_287_, v___x_321_);
lean_inc_ref_n(v___x_322_, 2);
v___f_323_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLibOfStatic___lam__0___boxed), 11, 4);
lean_closure_set(v___f_323_, 0, v_weakArgs_286_);
lean_closure_set(v___f_323_, 1, v_traceArgs_285_);
lean_closure_set(v___f_323_, 2, v___x_322_);
lean_closure_set(v___f_323_, 3, v_staticLib_287_);
v___x_324_ = 0;
v___x_325_ = l_Lake_buildFileUnlessUpToDate_x27(v___x_322_, v___f_323_, v___x_324_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___x_320_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_a_326_ = lean_ctor_get(v___x_325_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; 
v_unused_334_ = lean_ctor_get(v___x_325_, 0);
lean_dec(v_unused_334_);
v___x_328_ = v___x_325_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_322_);
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
else
{
lean_object* v_a_335_; lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec_ref(v___x_322_);
v_a_335_ = lean_ctor_get(v___x_325_, 0);
v_a_336_ = lean_ctor_get(v___x_325_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_325_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_inc(v_a_335_);
lean_dec(v___x_325_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_335_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___lam__1___boxed(lean_object* v_traceArgs_353_, lean_object* v_weakArgs_354_, lean_object* v_staticLib_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lake_buildLeanSharedLibOfStatic___lam__1(v_traceArgs_353_, v_weakArgs_354_, v_staticLib_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec(v___y_358_);
lean_dec(v___y_357_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic(lean_object* v_staticLibJob_364_, lean_object* v_weakArgs_365_, lean_object* v_traceArgs_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_){
_start:
{
lean_object* v___f_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; lean_object* v___x_378_; 
v___f_374_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLibOfStatic___lam__1___boxed), 10, 2);
lean_closure_set(v___f_374_, 0, v_traceArgs_366_);
lean_closure_set(v___f_374_, 1, v_weakArgs_365_);
v___x_375_ = l_Lake_instDataKindFilePath;
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = 0;
v___x_378_ = l_Lake_Job_mapM___redArg(v___x_375_, v_staticLibJob_364_, v___f_374_, v___x_376_, v___x_377_, v_a_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibOfStatic___boxed(lean_object* v_staticLibJob_379_, lean_object* v_weakArgs_380_, lean_object* v_traceArgs_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lake_buildLeanSharedLibOfStatic(v_staticLibJob_379_, v_weakArgs_380_, v_traceArgs_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_);
lean_dec_ref(v_a_387_);
lean_dec_ref(v_a_386_);
lean_dec(v_a_385_);
lean_dec(v_a_384_);
lean_dec(v_a_383_);
return v_res_389_;
}
}
static lean_object* _init_l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__1));
v___x_394_ = l_Lake_BuildTrace_nil(v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0(lean_object* v___x_395_, lean_object* v_config_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; 
lean_inc_ref(v___y_397_);
lean_inc_ref(v___y_401_);
lean_inc(v___y_400_);
lean_inc(v___y_399_);
lean_inc(v___y_398_);
v___x_404_ = lean_apply_7(v___y_397_, v___x_395_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, lean_box(0));
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_toLeanConfig_405_; lean_object* v_a_406_; lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_418_; 
v_toLeanConfig_405_ = lean_ctor_get(v_config_396_, 1);
lean_inc_ref(v_toLeanConfig_405_);
lean_dec_ref(v_config_396_);
v_a_406_ = lean_ctor_get(v___x_404_, 0);
v_a_407_ = lean_ctor_get(v___x_404_, 1);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_418_ == 0)
{
v___x_409_ = v___x_404_;
v_isShared_410_ = v_isSharedCheck_418_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_inc(v_a_406_);
lean_dec(v___x_404_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_418_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_moreLinkArgs_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v_moreLinkArgs_411_ = lean_ctor_get(v_toLeanConfig_405_, 8);
lean_inc_ref(v_moreLinkArgs_411_);
lean_dec_ref(v_toLeanConfig_405_);
v___x_412_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__0));
v___x_413_ = lean_obj_once(&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2, &l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2_once, _init_l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2);
v___x_414_ = l_Lake_buildLeanSharedLibOfStatic(v_a_406_, v_moreLinkArgs_411_, v___x_412_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___x_413_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_414_);
v___x_416_ = v___x_409_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_414_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_a_407_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
else
{
lean_dec_ref(v___y_397_);
lean_dec_ref(v_config_396_);
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___boxed(lean_object* v___x_419_, lean_object* v_config_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0(v___x_419_, v_config_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec(v___y_423_);
lean_dec(v___y_422_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared(lean_object* v_lib_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
lean_object* v_pkg_438_; lean_object* v_name_439_; lean_object* v_keyName_440_; lean_object* v_config_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___f_453_; uint8_t v___x_454_; lean_object* v___x_455_; 
v_pkg_438_ = lean_ctor_get(v_lib_430_, 0);
v_name_439_ = lean_ctor_get(v_lib_430_, 1);
v_keyName_440_ = lean_ctor_get(v_pkg_438_, 2);
v_config_441_ = lean_ctor_get(v_pkg_438_, 6);
lean_inc_ref(v_config_441_);
v___x_442_ = l_Lake_instDataKindFilePath;
v___x_443_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__0));
lean_inc_n(v_name_439_, 2);
v___x_444_ = l_Lean_Name_str___override(v_name_439_, v___x_443_);
v___x_445_ = 1;
v___x_446_ = l_Lean_Name_toString(v___x_444_, v___x_445_);
v___x_447_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___closed__0));
v___x_448_ = lean_string_append(v___x_446_, v___x_447_);
v___x_449_ = l_Lake_ExternLib_staticFacet;
lean_inc(v_keyName_440_);
v___x_450_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_450_, 0, v_keyName_440_);
lean_ctor_set(v___x_450_, 1, v_name_439_);
v___x_451_ = l_Lake_ExternLib_keyword;
v___x_452_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
lean_ctor_set(v___x_452_, 2, v_lib_430_);
lean_ctor_set(v___x_452_, 3, v___x_449_);
v___f_453_ = lean_alloc_closure((void*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___boxed), 9, 2);
lean_closure_set(v___f_453_, 0, v___x_452_);
lean_closure_set(v___f_453_, 1, v_config_441_);
v___x_454_ = 0;
v___x_455_ = l_Lake_ensureJob___redArg(v___x_442_, v___f_453_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_480_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_a_457_ = lean_ctor_get(v___x_455_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_480_ == 0)
{
v___x_459_ = v___x_455_;
v_isShared_460_ = v_isSharedCheck_480_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_inc(v_a_456_);
lean_dec(v___x_455_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_480_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v_task_461_; lean_object* v_kind_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_478_; 
v_task_461_ = lean_ctor_get(v_a_456_, 0);
v_kind_462_ = lean_ctor_get(v_a_456_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_a_456_);
if (v_isSharedCheck_478_ == 0)
{
lean_object* v_unused_479_; 
v_unused_479_ = lean_ctor_get(v_a_456_, 2);
lean_dec(v_unused_479_);
v___x_464_ = v_a_456_;
v_isShared_465_ = v_isSharedCheck_478_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_kind_462_);
lean_inc(v_task_461_);
lean_dec(v_a_456_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_478_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v_registeredJobs_466_; lean_object* v_job_468_; 
v_registeredJobs_466_ = lean_ctor_get(v_a_435_, 4);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 2, v___x_448_);
v_job_468_ = v___x_464_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_task_461_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v_kind_462_);
lean_ctor_set(v_reuseFailAlloc_477_, 2, v___x_448_);
v_job_468_ = v_reuseFailAlloc_477_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_475_; 
lean_ctor_set_uint8(v_job_468_, sizeof(void*)*3, v___x_454_);
v___x_469_ = lean_st_ref_take(v_registeredJobs_466_);
lean_inc_ref(v_job_468_);
v___x_470_ = l_Lake_Job_toOpaque___redArg(v_job_468_);
v___x_471_ = lean_array_push(v___x_469_, v___x_470_);
v___x_472_ = lean_st_ref_put(v_registeredJobs_466_, v___x_471_);
v___x_473_ = l_Lake_Job_renew___redArg(v_job_468_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_473_);
v___x_475_ = v___x_459_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_a_457_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_448_);
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___boxed(lean_object* v_lib_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared(v_lib_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec(v_a_484_);
lean_dec(v_a_483_);
return v_res_489_;
}
}
static lean_object* _init_l_Lake_ExternLib_sharedFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_491_; uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___f_491_ = ((lean_object*)(l_Lake_ExternLib_staticFacetConfig___closed__0));
v___x_492_ = 1;
v___x_493_ = l_Lake_instDataKindFilePath;
v___x_494_ = ((lean_object*)(l_Lake_ExternLib_sharedFacetConfig___closed__0));
v___x_495_ = l_Lake_ExternLib_keyword;
v___x_496_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
lean_ctor_set(v___x_496_, 2, v___x_493_);
lean_ctor_set(v___x_496_, 3, v___f_491_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*4, v___x_492_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*4 + 1, v___x_492_);
return v___x_496_;
}
}
static lean_object* _init_l_Lake_ExternLib_sharedFacetConfig(void){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lean_obj_once(&l_Lake_ExternLib_sharedFacetConfig___closed__1, &l_Lake_ExternLib_sharedFacetConfig___closed__1_once, _init_l_Lake_ExternLib_sharedFacetConfig___closed__1);
return v___x_497_;
}
}
static lean_object* _init_l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__3(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__2));
v___x_502_ = lean_string_utf8_byte_size(v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0(lean_object* v_sharedLib_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v___x_536_; 
lean_inc_ref(v_sharedLib_506_);
v___x_536_ = l_System_FilePath_fileStem(v_sharedLib_506_);
if (lean_obj_tag(v___x_536_) == 1)
{
lean_object* v_val_537_; uint8_t v___x_538_; 
v_val_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_val_537_);
lean_dec_ref_known(v___x_536_, 1);
v___x_538_ = l_System_Platform_isWindows;
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_539_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__2));
v___x_540_ = lean_string_utf8_byte_size(v_val_537_);
v___x_541_ = lean_obj_once(&l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__3, &l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__3_once, _init_l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__3);
v___x_542_ = lean_nat_dec_le(v___x_541_, v___x_540_);
if (v___x_542_ == 0)
{
lean_dec(v_val_537_);
goto v___jp_514_;
}
else
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_string_memcmp(v_val_537_, v___x_539_, v___x_543_, v___x_543_, v___x_541_);
if (v___x_544_ == 0)
{
lean_dec(v_val_537_);
goto v___jp_514_;
}
else
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_545_ = lean_unsigned_to_nat(3u);
lean_inc(v_val_537_);
v___x_546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_546_, 0, v_val_537_);
lean_ctor_set(v___x_546_, 1, v___x_543_);
lean_ctor_set(v___x_546_, 2, v___x_540_);
v___x_547_ = l_String_Slice_Pos_nextn(v___x_546_, v___x_543_, v___x_545_);
lean_dec_ref_known(v___x_546_, 3);
v___x_548_ = lean_string_utf8_extract_fast(v_val_537_, v___x_547_, v___x_540_);
lean_dec(v___x_547_);
lean_dec(v_val_537_);
v___x_549_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__4));
v___x_550_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_550_, 0, v_sharedLib_506_);
lean_ctor_set(v___x_550_, 1, v___x_548_);
lean_ctor_set(v___x_550_, 2, v___x_549_);
lean_ctor_set(v___x_550_, 3, v___x_549_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*4, v___x_538_);
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___y_512_);
return v___x_551_;
}
}
}
else
{
uint8_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_552_ = 0;
v___x_553_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__4));
v___x_554_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_554_, 0, v_sharedLib_506_);
lean_ctor_set(v___x_554_, 1, v_val_537_);
lean_ctor_set(v___x_554_, 2, v___x_553_);
lean_ctor_set(v___x_554_, 3, v___x_553_);
lean_ctor_set_uint8(v___x_554_, sizeof(void*)*4, v___x_552_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___y_512_);
return v___x_555_;
}
}
else
{
lean_object* v_log_556_; uint8_t v_action_557_; uint8_t v_wantsRebuild_558_; lean_object* v_trace_559_; lean_object* v_buildTime_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_576_; 
lean_dec(v___x_536_);
v_log_556_ = lean_ctor_get(v___y_512_, 0);
v_action_557_ = lean_ctor_get_uint8(v___y_512_, sizeof(void*)*3);
v_wantsRebuild_558_ = lean_ctor_get_uint8(v___y_512_, sizeof(void*)*3 + 1);
v_trace_559_ = lean_ctor_get(v___y_512_, 1);
v_buildTime_560_ = lean_ctor_get(v___y_512_, 2);
v_isSharedCheck_576_ = !lean_is_exclusive(v___y_512_);
if (v_isSharedCheck_576_ == 0)
{
v___x_562_ = v___y_512_;
v_isShared_563_ = v_isSharedCheck_576_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_buildTime_560_);
lean_inc(v_trace_559_);
lean_inc(v_log_556_);
lean_dec(v___y_512_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_576_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_564_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__0));
v___x_565_ = lean_string_append(v___x_564_, v_sharedLib_506_);
lean_dec_ref(v_sharedLib_506_);
v___x_566_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__5));
v___x_567_ = lean_string_append(v___x_565_, v___x_566_);
v___x_568_ = 3;
v___x_569_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set_uint8(v___x_569_, sizeof(void*)*1, v___x_568_);
v___x_570_ = lean_array_get_size(v_log_556_);
v___x_571_ = lean_array_push(v_log_556_, v___x_569_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_571_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_trace_559_);
lean_ctor_set(v_reuseFailAlloc_575_, 2, v_buildTime_560_);
lean_ctor_set_uint8(v_reuseFailAlloc_575_, sizeof(void*)*3, v_action_557_);
lean_ctor_set_uint8(v_reuseFailAlloc_575_, sizeof(void*)*3 + 1, v_wantsRebuild_558_);
v___x_573_ = v_reuseFailAlloc_575_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; 
v___x_574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_570_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
return v___x_574_;
}
}
}
v___jp_514_:
{
lean_object* v_log_515_; uint8_t v_action_516_; uint8_t v_wantsRebuild_517_; lean_object* v_trace_518_; lean_object* v_buildTime_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_535_; 
v_log_515_ = lean_ctor_get(v___y_512_, 0);
v_action_516_ = lean_ctor_get_uint8(v___y_512_, sizeof(void*)*3);
v_wantsRebuild_517_ = lean_ctor_get_uint8(v___y_512_, sizeof(void*)*3 + 1);
v_trace_518_ = lean_ctor_get(v___y_512_, 1);
v_buildTime_519_ = lean_ctor_get(v___y_512_, 2);
v_isSharedCheck_535_ = !lean_is_exclusive(v___y_512_);
if (v_isSharedCheck_535_ == 0)
{
v___x_521_ = v___y_512_;
v_isShared_522_ = v_isSharedCheck_535_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_buildTime_519_);
lean_inc(v_trace_518_);
lean_inc(v_log_515_);
lean_dec(v___y_512_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_535_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_523_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__0));
v___x_524_ = lean_string_append(v___x_523_, v_sharedLib_506_);
lean_dec_ref(v_sharedLib_506_);
v___x_525_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___closed__1));
v___x_526_ = lean_string_append(v___x_524_, v___x_525_);
v___x_527_ = 3;
v___x_528_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = lean_array_get_size(v_log_515_);
v___x_530_ = lean_array_push(v_log_515_, v___x_528_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_530_);
v___x_532_ = v___x_521_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_530_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_trace_518_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_buildTime_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3, v_action_516_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3 + 1, v_wantsRebuild_517_);
v___x_532_ = v_reuseFailAlloc_534_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_529_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
return v___x_533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0___boxed(lean_object* v_sharedLib_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___lam__0(v_sharedLib_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared(lean_object* v_sharedLibTarget_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; 
v___f_595_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___closed__0));
v___x_596_ = l_Lake_instDataKindDynlib;
v___x_597_ = lean_unsigned_to_nat(0u);
v___x_598_ = 0;
v___x_599_ = l_Lake_Job_mapM___redArg(v___x_596_, v_sharedLibTarget_587_, v___f_595_, v___x_597_, v___x_598_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared___boxed(lean_object* v_sharedLibTarget_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared(v_sharedLibTarget_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
lean_dec_ref(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec(v_a_603_);
lean_dec(v_a_602_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___lam__0(lean_object* v___x_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v___x_617_; 
lean_inc_ref(v___y_610_);
lean_inc_ref(v___y_614_);
lean_inc(v___y_613_);
lean_inc(v___y_612_);
lean_inc(v___y_611_);
v___x_617_ = lean_apply_7(v___y_610_, v___x_609_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, lean_box(0));
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_628_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_a_619_ = lean_ctor_get(v___x_617_, 1);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_628_ == 0)
{
v___x_621_ = v___x_617_;
v_isShared_622_ = v_isSharedCheck_628_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_628_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_623_ = lean_obj_once(&l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2, &l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2_once, _init_l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildShared___lam__0___closed__2);
v___x_624_ = l___private_Lake_Build_ExternLib_0__Lake_computeDynlibOfShared(v_a_618_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___x_623_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_624_);
v___x_626_ = v___x_621_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_a_619_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_629_; lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec_ref(v___y_610_);
v_a_629_ = lean_ctor_get(v___x_617_, 0);
v_a_630_ = lean_ctor_get(v___x_617_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_617_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_inc(v_a_629_);
lean_dec(v___x_617_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_629_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___lam__0___boxed(lean_object* v___x_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___lam__0(v___x_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec(v___y_641_);
lean_dec(v___y_640_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib(lean_object* v_lib_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
lean_object* v_pkg_656_; lean_object* v_name_657_; lean_object* v_keyName_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___f_670_; uint8_t v___x_671_; lean_object* v___x_672_; 
v_pkg_656_ = lean_ctor_get(v_lib_648_, 0);
v_name_657_ = lean_ctor_get(v_lib_648_, 1);
v_keyName_658_ = lean_ctor_get(v_pkg_656_, 2);
v___x_659_ = l_Lake_instDataKindDynlib;
v___x_660_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildStatic___closed__0));
lean_inc_n(v_name_657_, 2);
v___x_661_ = l_Lean_Name_str___override(v_name_657_, v___x_660_);
v___x_662_ = 1;
v___x_663_ = l_Lean_Name_toString(v___x_661_, v___x_662_);
v___x_664_ = ((lean_object*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___closed__0));
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
v___x_666_ = l_Lake_ExternLib_sharedFacet;
lean_inc(v_keyName_658_);
v___x_667_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_667_, 0, v_keyName_658_);
lean_ctor_set(v___x_667_, 1, v_name_657_);
v___x_668_ = l_Lake_ExternLib_keyword;
v___x_669_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
lean_ctor_set(v___x_669_, 2, v_lib_648_);
lean_ctor_set(v___x_669_, 3, v___x_666_);
v___f_670_ = lean_alloc_closure((void*)(l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___lam__0___boxed), 8, 1);
lean_closure_set(v___f_670_, 0, v___x_669_);
v___x_671_ = 0;
v___x_672_ = l_Lake_ensureJob___redArg(v___x_659_, v___f_670_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_697_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_a_674_ = lean_ctor_get(v___x_672_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_697_ == 0)
{
v___x_676_ = v___x_672_;
v_isShared_677_ = v_isSharedCheck_697_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_697_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v_task_678_; lean_object* v_kind_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_695_; 
v_task_678_ = lean_ctor_get(v_a_673_, 0);
v_kind_679_ = lean_ctor_get(v_a_673_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v_a_673_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; 
v_unused_696_ = lean_ctor_get(v_a_673_, 2);
lean_dec(v_unused_696_);
v___x_681_ = v_a_673_;
v_isShared_682_ = v_isSharedCheck_695_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_kind_679_);
lean_inc(v_task_678_);
lean_dec(v_a_673_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_695_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v_registeredJobs_683_; lean_object* v_job_685_; 
v_registeredJobs_683_ = lean_ctor_get(v_a_653_, 4);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 2, v___x_665_);
v_job_685_ = v___x_681_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_task_678_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_kind_679_);
lean_ctor_set(v_reuseFailAlloc_694_, 2, v___x_665_);
v_job_685_ = v_reuseFailAlloc_694_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_692_; 
lean_ctor_set_uint8(v_job_685_, sizeof(void*)*3, v___x_671_);
v___x_686_ = lean_st_ref_take(v_registeredJobs_683_);
lean_inc_ref(v_job_685_);
v___x_687_ = l_Lake_Job_toOpaque___redArg(v_job_685_);
v___x_688_ = lean_array_push(v___x_686_, v___x_687_);
v___x_689_ = lean_st_ref_put(v_registeredJobs_683_, v___x_688_);
v___x_690_ = l_Lake_Job_renew___redArg(v_job_685_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_690_);
v___x_692_ = v___x_676_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_a_674_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_665_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib___boxed(lean_object* v_lib_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recComputeDynlib(v_lib_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec(v_a_701_);
lean_dec(v_a_700_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_dynlibFacetConfig_spec__0(uint8_t v_fmt_707_, lean_object* v_a_708_){
_start:
{
if (v_fmt_707_ == 0)
{
lean_object* v_path_709_; 
v_path_709_ = lean_ctor_get(v_a_708_, 0);
lean_inc_ref(v_path_709_);
return v_path_709_;
}
else
{
lean_object* v_path_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v_path_710_ = lean_ctor_get(v_a_708_, 0);
lean_inc_ref(v_path_710_);
v___x_711_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_711_, 0, v_path_710_);
v___x_712_ = l_Lean_Json_compress(v___x_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_ExternLib_dynlibFacetConfig_spec__0___boxed(lean_object* v_fmt_713_, lean_object* v_a_714_){
_start:
{
uint8_t v_fmt_boxed_715_; lean_object* v_res_716_; 
v_fmt_boxed_715_ = lean_unbox(v_fmt_713_);
v_res_716_ = l_Lake_formatQuery___at___00Lake_ExternLib_dynlibFacetConfig_spec__0(v_fmt_boxed_715_, v_a_714_);
lean_dec_ref(v_a_714_);
return v_res_716_;
}
}
static lean_object* _init_l_Lake_ExternLib_dynlibFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_719_; uint8_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___f_719_ = ((lean_object*)(l_Lake_ExternLib_dynlibFacetConfig___closed__0));
v___x_720_ = 1;
v___x_721_ = l_Lake_instDataKindDynlib;
v___x_722_ = ((lean_object*)(l_Lake_ExternLib_dynlibFacetConfig___closed__1));
v___x_723_ = l_Lake_ExternLib_keyword;
v___x_724_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_724_, 0, v___x_723_);
lean_ctor_set(v___x_724_, 1, v___x_722_);
lean_ctor_set(v___x_724_, 2, v___x_721_);
lean_ctor_set(v___x_724_, 3, v___f_719_);
lean_ctor_set_uint8(v___x_724_, sizeof(void*)*4, v___x_720_);
lean_ctor_set_uint8(v___x_724_, sizeof(void*)*4 + 1, v___x_720_);
return v___x_724_;
}
}
static lean_object* _init_l_Lake_ExternLib_dynlibFacetConfig(void){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = lean_obj_once(&l_Lake_ExternLib_dynlibFacetConfig___closed__2, &l_Lake_ExternLib_dynlibFacetConfig___closed__2_once, _init_l_Lake_ExternLib_dynlibFacetConfig___closed__2);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildDefault(lean_object* v_lib_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_pkg_734_; lean_object* v_name_735_; lean_object* v_keyName_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_pkg_734_ = lean_ctor_get(v_lib_726_, 0);
v_name_735_ = lean_ctor_get(v_lib_726_, 1);
v_keyName_736_ = lean_ctor_get(v_pkg_734_, 2);
v___x_737_ = l_Lake_ExternLib_staticFacet;
lean_inc(v_name_735_);
lean_inc(v_keyName_736_);
v___x_738_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_738_, 0, v_keyName_736_);
lean_ctor_set(v___x_738_, 1, v_name_735_);
v___x_739_ = l_Lake_ExternLib_keyword;
v___x_740_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
lean_ctor_set(v___x_740_, 2, v_lib_726_);
lean_ctor_set(v___x_740_, 3, v___x_737_);
lean_inc_ref(v_a_731_);
lean_inc(v_a_730_);
lean_inc(v_a_729_);
lean_inc(v_a_728_);
v___x_741_ = lean_apply_7(v_a_727_, v___x_740_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, lean_box(0));
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildDefault___boxed(lean_object* v_lib_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l___private_Lake_Build_ExternLib_0__Lake_ExternLib_recBuildDefault(v_lib_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec(v_a_745_);
lean_dec(v_a_744_);
return v_res_750_;
}
}
static lean_object* _init_l_Lake_ExternLib_defaultFacetConfig___closed__1(void){
_start:
{
uint8_t v___x_752_; lean_object* v___f_753_; uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_752_ = 0;
v___f_753_ = ((lean_object*)(l_Lake_ExternLib_staticFacetConfig___closed__0));
v___x_754_ = 1;
v___x_755_ = l_Lake_instDataKindFilePath;
v___x_756_ = ((lean_object*)(l_Lake_ExternLib_defaultFacetConfig___closed__0));
v___x_757_ = l_Lake_ExternLib_keyword;
v___x_758_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_758_, 0, v___x_757_);
lean_ctor_set(v___x_758_, 1, v___x_756_);
lean_ctor_set(v___x_758_, 2, v___x_755_);
lean_ctor_set(v___x_758_, 3, v___f_753_);
lean_ctor_set_uint8(v___x_758_, sizeof(void*)*4, v___x_754_);
lean_ctor_set_uint8(v___x_758_, sizeof(void*)*4 + 1, v___x_752_);
return v___x_758_;
}
}
static lean_object* _init_l_Lake_ExternLib_defaultFacetConfig(void){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = lean_obj_once(&l_Lake_ExternLib_defaultFacetConfig___closed__1, &l_Lake_ExternLib_defaultFacetConfig___closed__1_once, _init_l_Lake_ExternLib_defaultFacetConfig___closed__1);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(lean_object* v_k_760_, lean_object* v_v_761_, lean_object* v_t_762_){
_start:
{
if (lean_obj_tag(v_t_762_) == 0)
{
lean_object* v_size_763_; lean_object* v_k_764_; lean_object* v_v_765_; lean_object* v_l_766_; lean_object* v_r_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_1047_; 
v_size_763_ = lean_ctor_get(v_t_762_, 0);
v_k_764_ = lean_ctor_get(v_t_762_, 1);
v_v_765_ = lean_ctor_get(v_t_762_, 2);
v_l_766_ = lean_ctor_get(v_t_762_, 3);
v_r_767_ = lean_ctor_get(v_t_762_, 4);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_t_762_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_769_ = v_t_762_;
v_isShared_770_ = v_isSharedCheck_1047_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_r_767_);
lean_inc(v_l_766_);
lean_inc(v_v_765_);
lean_inc(v_k_764_);
lean_inc(v_size_763_);
lean_dec(v_t_762_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_1047_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
uint8_t v___x_771_; 
v___x_771_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_760_, v_k_764_);
switch(v___x_771_)
{
case 0:
{
lean_object* v_impl_772_; lean_object* v___x_773_; 
lean_dec(v_size_763_);
v_impl_772_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v_k_760_, v_v_761_, v_l_766_);
v___x_773_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_767_) == 0)
{
lean_object* v_size_774_; lean_object* v_size_775_; lean_object* v_k_776_; lean_object* v_v_777_; lean_object* v_l_778_; lean_object* v_r_779_; lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v_size_774_ = lean_ctor_get(v_r_767_, 0);
v_size_775_ = lean_ctor_get(v_impl_772_, 0);
lean_inc(v_size_775_);
v_k_776_ = lean_ctor_get(v_impl_772_, 1);
lean_inc(v_k_776_);
v_v_777_ = lean_ctor_get(v_impl_772_, 2);
lean_inc(v_v_777_);
v_l_778_ = lean_ctor_get(v_impl_772_, 3);
lean_inc(v_l_778_);
v_r_779_ = lean_ctor_get(v_impl_772_, 4);
lean_inc(v_r_779_);
v___x_780_ = lean_unsigned_to_nat(3u);
v___x_781_ = lean_nat_mul(v___x_780_, v_size_774_);
v___x_782_ = lean_nat_dec_lt(v___x_781_, v_size_775_);
lean_dec(v___x_781_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_786_; 
lean_dec(v_r_779_);
lean_dec(v_l_778_);
lean_dec(v_v_777_);
lean_dec(v_k_776_);
v___x_783_ = lean_nat_add(v___x_773_, v_size_775_);
lean_dec(v_size_775_);
v___x_784_ = lean_nat_add(v___x_783_, v_size_774_);
lean_dec(v___x_783_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 3, v_impl_772_);
lean_ctor_set(v___x_769_, 0, v___x_784_);
v___x_786_ = v___x_769_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_787_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_787_, 3, v_impl_772_);
lean_ctor_set(v_reuseFailAlloc_787_, 4, v_r_767_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
else
{
lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_853_; 
v_isSharedCheck_853_ = !lean_is_exclusive(v_impl_772_);
if (v_isSharedCheck_853_ == 0)
{
lean_object* v_unused_854_; lean_object* v_unused_855_; lean_object* v_unused_856_; lean_object* v_unused_857_; lean_object* v_unused_858_; 
v_unused_854_ = lean_ctor_get(v_impl_772_, 4);
lean_dec(v_unused_854_);
v_unused_855_ = lean_ctor_get(v_impl_772_, 3);
lean_dec(v_unused_855_);
v_unused_856_ = lean_ctor_get(v_impl_772_, 2);
lean_dec(v_unused_856_);
v_unused_857_ = lean_ctor_get(v_impl_772_, 1);
lean_dec(v_unused_857_);
v_unused_858_ = lean_ctor_get(v_impl_772_, 0);
lean_dec(v_unused_858_);
v___x_789_ = v_impl_772_;
v_isShared_790_ = v_isSharedCheck_853_;
goto v_resetjp_788_;
}
else
{
lean_dec(v_impl_772_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_853_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v_size_791_; lean_object* v_size_792_; lean_object* v_k_793_; lean_object* v_v_794_; lean_object* v_l_795_; lean_object* v_r_796_; lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v_size_791_ = lean_ctor_get(v_l_778_, 0);
v_size_792_ = lean_ctor_get(v_r_779_, 0);
v_k_793_ = lean_ctor_get(v_r_779_, 1);
v_v_794_ = lean_ctor_get(v_r_779_, 2);
v_l_795_ = lean_ctor_get(v_r_779_, 3);
v_r_796_ = lean_ctor_get(v_r_779_, 4);
v___x_797_ = lean_unsigned_to_nat(2u);
v___x_798_ = lean_nat_mul(v___x_797_, v_size_791_);
v___x_799_ = lean_nat_dec_lt(v_size_792_, v___x_798_);
lean_dec(v___x_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_828_; 
lean_inc(v_r_796_);
lean_inc(v_l_795_);
lean_inc(v_v_794_);
lean_inc(v_k_793_);
v_isSharedCheck_828_ = !lean_is_exclusive(v_r_779_);
if (v_isSharedCheck_828_ == 0)
{
lean_object* v_unused_829_; lean_object* v_unused_830_; lean_object* v_unused_831_; lean_object* v_unused_832_; lean_object* v_unused_833_; 
v_unused_829_ = lean_ctor_get(v_r_779_, 4);
lean_dec(v_unused_829_);
v_unused_830_ = lean_ctor_get(v_r_779_, 3);
lean_dec(v_unused_830_);
v_unused_831_ = lean_ctor_get(v_r_779_, 2);
lean_dec(v_unused_831_);
v_unused_832_ = lean_ctor_get(v_r_779_, 1);
lean_dec(v_unused_832_);
v_unused_833_ = lean_ctor_get(v_r_779_, 0);
lean_dec(v_unused_833_);
v___x_801_ = v_r_779_;
v_isShared_802_ = v_isSharedCheck_828_;
goto v_resetjp_800_;
}
else
{
lean_dec(v_r_779_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_828_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___x_816_; lean_object* v___y_818_; 
v___x_803_ = lean_nat_add(v___x_773_, v_size_775_);
lean_dec(v_size_775_);
v___x_804_ = lean_nat_add(v___x_803_, v_size_774_);
lean_dec(v___x_803_);
v___x_816_ = lean_nat_add(v___x_773_, v_size_791_);
if (lean_obj_tag(v_l_795_) == 0)
{
lean_object* v_size_826_; 
v_size_826_ = lean_ctor_get(v_l_795_, 0);
lean_inc(v_size_826_);
v___y_818_ = v_size_826_;
goto v___jp_817_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = lean_unsigned_to_nat(0u);
v___y_818_ = v___x_827_;
goto v___jp_817_;
}
v___jp_805_:
{
lean_object* v___x_809_; lean_object* v___x_811_; 
v___x_809_ = lean_nat_add(v___y_806_, v___y_808_);
lean_dec(v___y_808_);
lean_dec(v___y_806_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 4, v_r_767_);
lean_ctor_set(v___x_801_, 3, v_r_796_);
lean_ctor_set(v___x_801_, 2, v_v_765_);
lean_ctor_set(v___x_801_, 1, v_k_764_);
lean_ctor_set(v___x_801_, 0, v___x_809_);
v___x_811_ = v___x_801_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_815_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_815_, 3, v_r_796_);
lean_ctor_set(v_reuseFailAlloc_815_, 4, v_r_767_);
v___x_811_ = v_reuseFailAlloc_815_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_813_; 
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 4, v___x_811_);
lean_ctor_set(v___x_789_, 3, v___y_807_);
lean_ctor_set(v___x_789_, 2, v_v_794_);
lean_ctor_set(v___x_789_, 1, v_k_793_);
lean_ctor_set(v___x_789_, 0, v___x_804_);
v___x_813_ = v___x_789_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_k_793_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v_v_794_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v___y_807_);
lean_ctor_set(v_reuseFailAlloc_814_, 4, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_821_; 
v___x_819_ = lean_nat_add(v___x_816_, v___y_818_);
lean_dec(v___y_818_);
lean_dec(v___x_816_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v_l_795_);
lean_ctor_set(v___x_769_, 3, v_l_778_);
lean_ctor_set(v___x_769_, 2, v_v_777_);
lean_ctor_set(v___x_769_, 1, v_k_776_);
lean_ctor_set(v___x_769_, 0, v___x_819_);
v___x_821_ = v___x_769_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_819_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v_k_776_);
lean_ctor_set(v_reuseFailAlloc_825_, 2, v_v_777_);
lean_ctor_set(v_reuseFailAlloc_825_, 3, v_l_778_);
lean_ctor_set(v_reuseFailAlloc_825_, 4, v_l_795_);
v___x_821_ = v_reuseFailAlloc_825_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_822_; 
v___x_822_ = lean_nat_add(v___x_773_, v_size_774_);
if (lean_obj_tag(v_r_796_) == 0)
{
lean_object* v_size_823_; 
v_size_823_ = lean_ctor_get(v_r_796_, 0);
lean_inc(v_size_823_);
v___y_806_ = v___x_822_;
v___y_807_ = v___x_821_;
v___y_808_ = v_size_823_;
goto v___jp_805_;
}
else
{
lean_object* v___x_824_; 
v___x_824_ = lean_unsigned_to_nat(0u);
v___y_806_ = v___x_822_;
v___y_807_ = v___x_821_;
v___y_808_ = v___x_824_;
goto v___jp_805_;
}
}
}
}
}
else
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
lean_del_object(v___x_769_);
v___x_834_ = lean_nat_add(v___x_773_, v_size_775_);
lean_dec(v_size_775_);
v___x_835_ = lean_nat_add(v___x_834_, v_size_774_);
lean_dec(v___x_834_);
v___x_836_ = lean_nat_add(v___x_773_, v_size_774_);
v___x_837_ = lean_nat_add(v___x_836_, v_size_792_);
lean_dec(v___x_836_);
lean_inc_ref(v_r_767_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 4, v_r_767_);
lean_ctor_set(v___x_789_, 3, v_r_779_);
lean_ctor_set(v___x_789_, 2, v_v_765_);
lean_ctor_set(v___x_789_, 1, v_k_764_);
lean_ctor_set(v___x_789_, 0, v___x_837_);
v___x_839_ = v___x_789_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_852_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_852_, 3, v_r_779_);
lean_ctor_set(v_reuseFailAlloc_852_, 4, v_r_767_);
v___x_839_ = v_reuseFailAlloc_852_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_isSharedCheck_846_ = !lean_is_exclusive(v_r_767_);
if (v_isSharedCheck_846_ == 0)
{
lean_object* v_unused_847_; lean_object* v_unused_848_; lean_object* v_unused_849_; lean_object* v_unused_850_; lean_object* v_unused_851_; 
v_unused_847_ = lean_ctor_get(v_r_767_, 4);
lean_dec(v_unused_847_);
v_unused_848_ = lean_ctor_get(v_r_767_, 3);
lean_dec(v_unused_848_);
v_unused_849_ = lean_ctor_get(v_r_767_, 2);
lean_dec(v_unused_849_);
v_unused_850_ = lean_ctor_get(v_r_767_, 1);
lean_dec(v_unused_850_);
v_unused_851_ = lean_ctor_get(v_r_767_, 0);
lean_dec(v_unused_851_);
v___x_841_ = v_r_767_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_dec(v_r_767_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 4, v___x_839_);
lean_ctor_set(v___x_841_, 3, v_l_778_);
lean_ctor_set(v___x_841_, 2, v_v_777_);
lean_ctor_set(v___x_841_, 1, v_k_776_);
lean_ctor_set(v___x_841_, 0, v___x_835_);
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_835_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_k_776_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v_v_777_);
lean_ctor_set(v_reuseFailAlloc_845_, 3, v_l_778_);
lean_ctor_set(v_reuseFailAlloc_845_, 4, v___x_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_859_; 
v_l_859_ = lean_ctor_get(v_impl_772_, 3);
lean_inc(v_l_859_);
if (lean_obj_tag(v_l_859_) == 0)
{
lean_object* v_r_860_; lean_object* v_k_861_; lean_object* v_v_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_873_; 
v_r_860_ = lean_ctor_get(v_impl_772_, 4);
v_k_861_ = lean_ctor_get(v_impl_772_, 1);
v_v_862_ = lean_ctor_get(v_impl_772_, 2);
v_isSharedCheck_873_ = !lean_is_exclusive(v_impl_772_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; lean_object* v_unused_875_; 
v_unused_874_ = lean_ctor_get(v_impl_772_, 3);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_impl_772_, 0);
lean_dec(v_unused_875_);
v___x_864_ = v_impl_772_;
v_isShared_865_ = v_isSharedCheck_873_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_r_860_);
lean_inc(v_v_862_);
lean_inc(v_k_861_);
lean_dec(v_impl_772_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_873_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_860_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 3, v_r_860_);
lean_ctor_set(v___x_864_, 2, v_v_765_);
lean_ctor_set(v___x_864_, 1, v_k_764_);
lean_ctor_set(v___x_864_, 0, v___x_773_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_872_, 3, v_r_860_);
lean_ctor_set(v_reuseFailAlloc_872_, 4, v_r_860_);
v___x_868_ = v_reuseFailAlloc_872_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_870_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v___x_868_);
lean_ctor_set(v___x_769_, 3, v_l_859_);
lean_ctor_set(v___x_769_, 2, v_v_862_);
lean_ctor_set(v___x_769_, 1, v_k_861_);
lean_ctor_set(v___x_769_, 0, v___x_866_);
v___x_870_ = v___x_769_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_k_861_);
lean_ctor_set(v_reuseFailAlloc_871_, 2, v_v_862_);
lean_ctor_set(v_reuseFailAlloc_871_, 3, v_l_859_);
lean_ctor_set(v_reuseFailAlloc_871_, 4, v___x_868_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
else
{
lean_object* v_r_876_; 
v_r_876_ = lean_ctor_get(v_impl_772_, 4);
lean_inc(v_r_876_);
if (lean_obj_tag(v_r_876_) == 0)
{
lean_object* v_k_877_; lean_object* v_v_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_901_; 
v_k_877_ = lean_ctor_get(v_impl_772_, 1);
v_v_878_ = lean_ctor_get(v_impl_772_, 2);
v_isSharedCheck_901_ = !lean_is_exclusive(v_impl_772_);
if (v_isSharedCheck_901_ == 0)
{
lean_object* v_unused_902_; lean_object* v_unused_903_; lean_object* v_unused_904_; 
v_unused_902_ = lean_ctor_get(v_impl_772_, 4);
lean_dec(v_unused_902_);
v_unused_903_ = lean_ctor_get(v_impl_772_, 3);
lean_dec(v_unused_903_);
v_unused_904_ = lean_ctor_get(v_impl_772_, 0);
lean_dec(v_unused_904_);
v___x_880_ = v_impl_772_;
v_isShared_881_ = v_isSharedCheck_901_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_v_878_);
lean_inc(v_k_877_);
lean_dec(v_impl_772_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_901_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v_k_882_; lean_object* v_v_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_897_; 
v_k_882_ = lean_ctor_get(v_r_876_, 1);
v_v_883_ = lean_ctor_get(v_r_876_, 2);
v_isSharedCheck_897_ = !lean_is_exclusive(v_r_876_);
if (v_isSharedCheck_897_ == 0)
{
lean_object* v_unused_898_; lean_object* v_unused_899_; lean_object* v_unused_900_; 
v_unused_898_ = lean_ctor_get(v_r_876_, 4);
lean_dec(v_unused_898_);
v_unused_899_ = lean_ctor_get(v_r_876_, 3);
lean_dec(v_unused_899_);
v_unused_900_ = lean_ctor_get(v_r_876_, 0);
lean_dec(v_unused_900_);
v___x_885_ = v_r_876_;
v_isShared_886_ = v_isSharedCheck_897_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_v_883_);
lean_inc(v_k_882_);
lean_dec(v_r_876_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_897_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_887_ = lean_unsigned_to_nat(3u);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 4, v_l_859_);
lean_ctor_set(v___x_885_, 3, v_l_859_);
lean_ctor_set(v___x_885_, 2, v_v_878_);
lean_ctor_set(v___x_885_, 1, v_k_877_);
lean_ctor_set(v___x_885_, 0, v___x_773_);
v___x_889_ = v___x_885_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v_k_877_);
lean_ctor_set(v_reuseFailAlloc_896_, 2, v_v_878_);
lean_ctor_set(v_reuseFailAlloc_896_, 3, v_l_859_);
lean_ctor_set(v_reuseFailAlloc_896_, 4, v_l_859_);
v___x_889_ = v_reuseFailAlloc_896_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_891_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 4, v_l_859_);
lean_ctor_set(v___x_880_, 2, v_v_765_);
lean_ctor_set(v___x_880_, 1, v_k_764_);
lean_ctor_set(v___x_880_, 0, v___x_773_);
v___x_891_ = v___x_880_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_895_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_895_, 3, v_l_859_);
lean_ctor_set(v_reuseFailAlloc_895_, 4, v_l_859_);
v___x_891_ = v_reuseFailAlloc_895_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_893_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v___x_891_);
lean_ctor_set(v___x_769_, 3, v___x_889_);
lean_ctor_set(v___x_769_, 2, v_v_883_);
lean_ctor_set(v___x_769_, 1, v_k_882_);
lean_ctor_set(v___x_769_, 0, v___x_887_);
v___x_893_ = v___x_769_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_k_882_);
lean_ctor_set(v_reuseFailAlloc_894_, 2, v_v_883_);
lean_ctor_set(v_reuseFailAlloc_894_, 3, v___x_889_);
lean_ctor_set(v_reuseFailAlloc_894_, 4, v___x_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
else
{
lean_object* v___x_905_; lean_object* v___x_907_; 
v___x_905_ = lean_unsigned_to_nat(2u);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v_r_876_);
lean_ctor_set(v___x_769_, 3, v_impl_772_);
lean_ctor_set(v___x_769_, 0, v___x_905_);
v___x_907_ = v___x_769_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_905_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_impl_772_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v_r_876_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
case 1:
{
lean_object* v___x_910_; 
lean_dec(v_v_765_);
lean_dec(v_k_764_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 2, v_v_761_);
lean_ctor_set(v___x_769_, 1, v_k_760_);
v___x_910_ = v___x_769_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_size_763_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_k_760_);
lean_ctor_set(v_reuseFailAlloc_911_, 2, v_v_761_);
lean_ctor_set(v_reuseFailAlloc_911_, 3, v_l_766_);
lean_ctor_set(v_reuseFailAlloc_911_, 4, v_r_767_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
default: 
{
lean_object* v_impl_912_; lean_object* v___x_913_; 
lean_dec(v_size_763_);
v_impl_912_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v_k_760_, v_v_761_, v_r_767_);
v___x_913_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_766_) == 0)
{
lean_object* v_size_914_; lean_object* v_size_915_; lean_object* v_k_916_; lean_object* v_v_917_; lean_object* v_l_918_; lean_object* v_r_919_; lean_object* v___x_920_; lean_object* v___x_921_; uint8_t v___x_922_; 
v_size_914_ = lean_ctor_get(v_l_766_, 0);
v_size_915_ = lean_ctor_get(v_impl_912_, 0);
lean_inc(v_size_915_);
v_k_916_ = lean_ctor_get(v_impl_912_, 1);
lean_inc(v_k_916_);
v_v_917_ = lean_ctor_get(v_impl_912_, 2);
lean_inc(v_v_917_);
v_l_918_ = lean_ctor_get(v_impl_912_, 3);
lean_inc(v_l_918_);
v_r_919_ = lean_ctor_get(v_impl_912_, 4);
lean_inc(v_r_919_);
v___x_920_ = lean_unsigned_to_nat(3u);
v___x_921_ = lean_nat_mul(v___x_920_, v_size_914_);
v___x_922_ = lean_nat_dec_lt(v___x_921_, v_size_915_);
lean_dec(v___x_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
lean_dec(v_r_919_);
lean_dec(v_l_918_);
lean_dec(v_v_917_);
lean_dec(v_k_916_);
v___x_923_ = lean_nat_add(v___x_913_, v_size_914_);
v___x_924_ = lean_nat_add(v___x_923_, v_size_915_);
lean_dec(v_size_915_);
lean_dec(v___x_923_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v_impl_912_);
lean_ctor_set(v___x_769_, 0, v___x_924_);
v___x_926_ = v___x_769_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_927_, 3, v_l_766_);
lean_ctor_set(v_reuseFailAlloc_927_, 4, v_impl_912_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
else
{
lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_991_; 
v_isSharedCheck_991_ = !lean_is_exclusive(v_impl_912_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; lean_object* v_unused_995_; lean_object* v_unused_996_; 
v_unused_992_ = lean_ctor_get(v_impl_912_, 4);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_impl_912_, 3);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_impl_912_, 2);
lean_dec(v_unused_994_);
v_unused_995_ = lean_ctor_get(v_impl_912_, 1);
lean_dec(v_unused_995_);
v_unused_996_ = lean_ctor_get(v_impl_912_, 0);
lean_dec(v_unused_996_);
v___x_929_ = v_impl_912_;
v_isShared_930_ = v_isSharedCheck_991_;
goto v_resetjp_928_;
}
else
{
lean_dec(v_impl_912_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_991_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v_size_931_; lean_object* v_k_932_; lean_object* v_v_933_; lean_object* v_l_934_; lean_object* v_r_935_; lean_object* v_size_936_; lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_size_931_ = lean_ctor_get(v_l_918_, 0);
v_k_932_ = lean_ctor_get(v_l_918_, 1);
v_v_933_ = lean_ctor_get(v_l_918_, 2);
v_l_934_ = lean_ctor_get(v_l_918_, 3);
v_r_935_ = lean_ctor_get(v_l_918_, 4);
v_size_936_ = lean_ctor_get(v_r_919_, 0);
v___x_937_ = lean_unsigned_to_nat(2u);
v___x_938_ = lean_nat_mul(v___x_937_, v_size_936_);
v___x_939_ = lean_nat_dec_lt(v_size_931_, v___x_938_);
lean_dec(v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_967_; 
lean_inc(v_r_935_);
lean_inc(v_l_934_);
lean_inc(v_v_933_);
lean_inc(v_k_932_);
v_isSharedCheck_967_ = !lean_is_exclusive(v_l_918_);
if (v_isSharedCheck_967_ == 0)
{
lean_object* v_unused_968_; lean_object* v_unused_969_; lean_object* v_unused_970_; lean_object* v_unused_971_; lean_object* v_unused_972_; 
v_unused_968_ = lean_ctor_get(v_l_918_, 4);
lean_dec(v_unused_968_);
v_unused_969_ = lean_ctor_get(v_l_918_, 3);
lean_dec(v_unused_969_);
v_unused_970_ = lean_ctor_get(v_l_918_, 2);
lean_dec(v_unused_970_);
v_unused_971_ = lean_ctor_get(v_l_918_, 1);
lean_dec(v_unused_971_);
v_unused_972_ = lean_ctor_get(v_l_918_, 0);
lean_dec(v_unused_972_);
v___x_941_ = v_l_918_;
v_isShared_942_ = v_isSharedCheck_967_;
goto v_resetjp_940_;
}
else
{
lean_dec(v_l_918_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_967_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_957_; 
v___x_943_ = lean_nat_add(v___x_913_, v_size_914_);
v___x_944_ = lean_nat_add(v___x_943_, v_size_915_);
lean_dec(v_size_915_);
if (lean_obj_tag(v_l_934_) == 0)
{
lean_object* v_size_965_; 
v_size_965_ = lean_ctor_get(v_l_934_, 0);
lean_inc(v_size_965_);
v___y_957_ = v_size_965_;
goto v___jp_956_;
}
else
{
lean_object* v___x_966_; 
v___x_966_ = lean_unsigned_to_nat(0u);
v___y_957_ = v___x_966_;
goto v___jp_956_;
}
v___jp_945_:
{
lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_949_ = lean_nat_add(v___y_947_, v___y_948_);
lean_dec(v___y_948_);
lean_dec(v___y_947_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 4, v_r_919_);
lean_ctor_set(v___x_941_, 3, v_r_935_);
lean_ctor_set(v___x_941_, 2, v_v_917_);
lean_ctor_set(v___x_941_, 1, v_k_916_);
lean_ctor_set(v___x_941_, 0, v___x_949_);
v___x_951_ = v___x_941_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_955_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_955_, 3, v_r_935_);
lean_ctor_set(v_reuseFailAlloc_955_, 4, v_r_919_);
v___x_951_ = v_reuseFailAlloc_955_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_953_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 4, v___x_951_);
lean_ctor_set(v___x_929_, 3, v___y_946_);
lean_ctor_set(v___x_929_, 2, v_v_933_);
lean_ctor_set(v___x_929_, 1, v_k_932_);
lean_ctor_set(v___x_929_, 0, v___x_944_);
v___x_953_ = v___x_929_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_k_932_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_v_933_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v___y_946_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v___x_951_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
v___jp_956_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_nat_add(v___x_943_, v___y_957_);
lean_dec(v___y_957_);
lean_dec(v___x_943_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v_l_934_);
lean_ctor_set(v___x_769_, 0, v___x_958_);
v___x_960_ = v___x_769_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_l_766_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v_l_934_);
v___x_960_ = v_reuseFailAlloc_964_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_961_; 
v___x_961_ = lean_nat_add(v___x_913_, v_size_936_);
if (lean_obj_tag(v_r_935_) == 0)
{
lean_object* v_size_962_; 
v_size_962_ = lean_ctor_get(v_r_935_, 0);
lean_inc(v_size_962_);
v___y_946_ = v___x_960_;
v___y_947_ = v___x_961_;
v___y_948_ = v_size_962_;
goto v___jp_945_;
}
else
{
lean_object* v___x_963_; 
v___x_963_ = lean_unsigned_to_nat(0u);
v___y_946_ = v___x_960_;
v___y_947_ = v___x_961_;
v___y_948_ = v___x_963_;
goto v___jp_945_;
}
}
}
}
}
else
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_977_; 
lean_del_object(v___x_769_);
v___x_973_ = lean_nat_add(v___x_913_, v_size_914_);
v___x_974_ = lean_nat_add(v___x_973_, v_size_915_);
lean_dec(v_size_915_);
v___x_975_ = lean_nat_add(v___x_973_, v_size_931_);
lean_dec(v___x_973_);
lean_inc_ref(v_l_766_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 4, v_l_918_);
lean_ctor_set(v___x_929_, 3, v_l_766_);
lean_ctor_set(v___x_929_, 2, v_v_765_);
lean_ctor_set(v___x_929_, 1, v_k_764_);
lean_ctor_set(v___x_929_, 0, v___x_975_);
v___x_977_ = v___x_929_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_990_, 3, v_l_766_);
lean_ctor_set(v_reuseFailAlloc_990_, 4, v_l_918_);
v___x_977_ = v_reuseFailAlloc_990_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
v_isSharedCheck_984_ = !lean_is_exclusive(v_l_766_);
if (v_isSharedCheck_984_ == 0)
{
lean_object* v_unused_985_; lean_object* v_unused_986_; lean_object* v_unused_987_; lean_object* v_unused_988_; lean_object* v_unused_989_; 
v_unused_985_ = lean_ctor_get(v_l_766_, 4);
lean_dec(v_unused_985_);
v_unused_986_ = lean_ctor_get(v_l_766_, 3);
lean_dec(v_unused_986_);
v_unused_987_ = lean_ctor_get(v_l_766_, 2);
lean_dec(v_unused_987_);
v_unused_988_ = lean_ctor_get(v_l_766_, 1);
lean_dec(v_unused_988_);
v_unused_989_ = lean_ctor_get(v_l_766_, 0);
lean_dec(v_unused_989_);
v___x_979_ = v_l_766_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_dec(v_l_766_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 4, v_r_919_);
lean_ctor_set(v___x_979_, 3, v___x_977_);
lean_ctor_set(v___x_979_, 2, v_v_917_);
lean_ctor_set(v___x_979_, 1, v_k_916_);
lean_ctor_set(v___x_979_, 0, v___x_974_);
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_974_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_983_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_983_, 3, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_983_, 4, v_r_919_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_997_; 
v_l_997_ = lean_ctor_get(v_impl_912_, 3);
lean_inc(v_l_997_);
if (lean_obj_tag(v_l_997_) == 0)
{
lean_object* v_r_998_; lean_object* v_k_999_; lean_object* v_v_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1023_; 
v_r_998_ = lean_ctor_get(v_impl_912_, 4);
v_k_999_ = lean_ctor_get(v_impl_912_, 1);
v_v_1000_ = lean_ctor_get(v_impl_912_, 2);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_impl_912_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; lean_object* v_unused_1025_; 
v_unused_1024_ = lean_ctor_get(v_impl_912_, 3);
lean_dec(v_unused_1024_);
v_unused_1025_ = lean_ctor_get(v_impl_912_, 0);
lean_dec(v_unused_1025_);
v___x_1002_ = v_impl_912_;
v_isShared_1003_ = v_isSharedCheck_1023_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_r_998_);
lean_inc(v_v_1000_);
lean_inc(v_k_999_);
lean_dec(v_impl_912_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1023_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v_k_1004_; lean_object* v_v_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1019_; 
v_k_1004_ = lean_ctor_get(v_l_997_, 1);
v_v_1005_ = lean_ctor_get(v_l_997_, 2);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_l_997_);
if (v_isSharedCheck_1019_ == 0)
{
lean_object* v_unused_1020_; lean_object* v_unused_1021_; lean_object* v_unused_1022_; 
v_unused_1020_ = lean_ctor_get(v_l_997_, 4);
lean_dec(v_unused_1020_);
v_unused_1021_ = lean_ctor_get(v_l_997_, 3);
lean_dec(v_unused_1021_);
v_unused_1022_ = lean_ctor_get(v_l_997_, 0);
lean_dec(v_unused_1022_);
v___x_1007_ = v_l_997_;
v_isShared_1008_ = v_isSharedCheck_1019_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_v_1005_);
lean_inc(v_k_1004_);
lean_dec(v_l_997_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1019_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1009_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_998_, 2);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 4, v_r_998_);
lean_ctor_set(v___x_1007_, 3, v_r_998_);
lean_ctor_set(v___x_1007_, 2, v_v_765_);
lean_ctor_set(v___x_1007_, 1, v_k_764_);
lean_ctor_set(v___x_1007_, 0, v___x_913_);
v___x_1011_ = v___x_1007_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_1018_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_1018_, 3, v_r_998_);
lean_ctor_set(v_reuseFailAlloc_1018_, 4, v_r_998_);
v___x_1011_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1013_; 
lean_inc(v_r_998_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 3, v_r_998_);
lean_ctor_set(v___x_1002_, 0, v___x_913_);
v___x_1013_ = v___x_1002_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_k_999_);
lean_ctor_set(v_reuseFailAlloc_1017_, 2, v_v_1000_);
lean_ctor_set(v_reuseFailAlloc_1017_, 3, v_r_998_);
lean_ctor_set(v_reuseFailAlloc_1017_, 4, v_r_998_);
v___x_1013_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___x_1015_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v___x_1013_);
lean_ctor_set(v___x_769_, 3, v___x_1011_);
lean_ctor_set(v___x_769_, 2, v_v_1005_);
lean_ctor_set(v___x_769_, 1, v_k_1004_);
lean_ctor_set(v___x_769_, 0, v___x_1009_);
v___x_1015_ = v___x_769_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_k_1004_);
lean_ctor_set(v_reuseFailAlloc_1016_, 2, v_v_1005_);
lean_ctor_set(v_reuseFailAlloc_1016_, 3, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1016_, 4, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
}
else
{
lean_object* v_r_1026_; 
v_r_1026_ = lean_ctor_get(v_impl_912_, 4);
lean_inc(v_r_1026_);
if (lean_obj_tag(v_r_1026_) == 0)
{
lean_object* v_k_1027_; lean_object* v_v_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1039_; 
v_k_1027_ = lean_ctor_get(v_impl_912_, 1);
v_v_1028_ = lean_ctor_get(v_impl_912_, 2);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_impl_912_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; lean_object* v_unused_1041_; lean_object* v_unused_1042_; 
v_unused_1040_ = lean_ctor_get(v_impl_912_, 4);
lean_dec(v_unused_1040_);
v_unused_1041_ = lean_ctor_get(v_impl_912_, 3);
lean_dec(v_unused_1041_);
v_unused_1042_ = lean_ctor_get(v_impl_912_, 0);
lean_dec(v_unused_1042_);
v___x_1030_ = v_impl_912_;
v_isShared_1031_ = v_isSharedCheck_1039_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_v_1028_);
lean_inc(v_k_1027_);
lean_dec(v_impl_912_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1039_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1032_ = lean_unsigned_to_nat(3u);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 4, v_l_997_);
lean_ctor_set(v___x_1030_, 2, v_v_765_);
lean_ctor_set(v___x_1030_, 1, v_k_764_);
lean_ctor_set(v___x_1030_, 0, v___x_913_);
v___x_1034_ = v___x_1030_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_1038_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_1038_, 3, v_l_997_);
lean_ctor_set(v_reuseFailAlloc_1038_, 4, v_l_997_);
v___x_1034_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1036_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v_r_1026_);
lean_ctor_set(v___x_769_, 3, v___x_1034_);
lean_ctor_set(v___x_769_, 2, v_v_1028_);
lean_ctor_set(v___x_769_, 1, v_k_1027_);
lean_ctor_set(v___x_769_, 0, v___x_1032_);
v___x_1036_ = v___x_769_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_k_1027_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v_v_1028_);
lean_ctor_set(v_reuseFailAlloc_1037_, 3, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1037_, 4, v_r_1026_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1043_ = lean_unsigned_to_nat(2u);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v_impl_912_);
lean_ctor_set(v___x_769_, 3, v_r_1026_);
lean_ctor_set(v___x_769_, 0, v___x_1043_);
v___x_1045_ = v___x_769_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_1046_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_1046_, 3, v_r_1026_);
lean_ctor_set(v_reuseFailAlloc_1046_, 4, v_impl_912_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
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
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_unsigned_to_nat(1u);
v___x_1049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set(v___x_1049_, 1, v_k_760_);
lean_ctor_set(v___x_1049_, 2, v_v_761_);
lean_ctor_set(v___x_1049_, 3, v_t_762_);
lean_ctor_set(v___x_1049_, 4, v_t_762_);
return v___x_1049_;
}
}
}
static lean_object* _init_l_Lake_ExternLib_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1050_ = lean_box(1);
v___x_1051_ = l_Lake_ExternLib_defaultFacetConfig;
v___x_1052_ = l_Lake_ExternLib_defaultFacet;
v___x_1053_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v___x_1052_, v___x_1051_, v___x_1050_);
return v___x_1053_;
}
}
static lean_object* _init_l_Lake_ExternLib_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1054_ = lean_obj_once(&l_Lake_ExternLib_initFacetConfigs___closed__0, &l_Lake_ExternLib_initFacetConfigs___closed__0_once, _init_l_Lake_ExternLib_initFacetConfigs___closed__0);
v___x_1055_ = l_Lake_ExternLib_staticFacetConfig;
v___x_1056_ = l_Lake_ExternLib_staticFacet;
v___x_1057_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v___x_1056_, v___x_1055_, v___x_1054_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lake_ExternLib_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1058_ = lean_obj_once(&l_Lake_ExternLib_initFacetConfigs___closed__1, &l_Lake_ExternLib_initFacetConfigs___closed__1_once, _init_l_Lake_ExternLib_initFacetConfigs___closed__1);
v___x_1059_ = l_Lake_ExternLib_sharedFacetConfig;
v___x_1060_ = l_Lake_ExternLib_sharedFacet;
v___x_1061_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v___x_1060_, v___x_1059_, v___x_1058_);
return v___x_1061_;
}
}
static lean_object* _init_l_Lake_ExternLib_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1062_ = lean_obj_once(&l_Lake_ExternLib_initFacetConfigs___closed__2, &l_Lake_ExternLib_initFacetConfigs___closed__2_once, _init_l_Lake_ExternLib_initFacetConfigs___closed__2);
v___x_1063_ = l_Lake_ExternLib_dynlibFacetConfig;
v___x_1064_ = l_Lake_ExternLib_dynlibFacet;
v___x_1065_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v___x_1064_, v___x_1063_, v___x_1062_);
return v___x_1065_;
}
}
static lean_object* _init_l_Lake_ExternLib_initFacetConfigs(void){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_obj_once(&l_Lake_ExternLib_initFacetConfigs___closed__3, &l_Lake_ExternLib_initFacetConfigs___closed__3_once, _init_l_Lake_ExternLib_initFacetConfigs___closed__3);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0(lean_object* v_00_u03b2_1067_, lean_object* v_k_1068_, lean_object* v_v_1069_, lean_object* v_t_1070_, lean_object* v_hl_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_ExternLib_initFacetConfigs_spec__0___redArg(v_k_1068_, v_v_1069_, v_t_1070_);
return v___x_1072_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_ExternLib(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_ExternLib_staticFacetConfig = _init_l_Lake_ExternLib_staticFacetConfig();
lean_mark_persistent(l_Lake_ExternLib_staticFacetConfig);
l_Lake_ExternLib_sharedFacetConfig = _init_l_Lake_ExternLib_sharedFacetConfig();
lean_mark_persistent(l_Lake_ExternLib_sharedFacetConfig);
l_Lake_ExternLib_dynlibFacetConfig = _init_l_Lake_ExternLib_dynlibFacetConfig();
lean_mark_persistent(l_Lake_ExternLib_dynlibFacetConfig);
l_Lake_ExternLib_defaultFacetConfig = _init_l_Lake_ExternLib_defaultFacetConfig();
lean_mark_persistent(l_Lake_ExternLib_defaultFacetConfig);
l_Lake_ExternLib_initFacetConfigs = _init_l_Lake_ExternLib_initFacetConfigs();
lean_mark_persistent(l_Lake_ExternLib_initFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_ExternLib(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_ExternLib(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_ExternLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_ExternLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_ExternLib(builtin);
}
#ifdef __cplusplus
}
#endif

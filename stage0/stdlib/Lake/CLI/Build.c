// Lean compiler output
// Module: Lake.CLI.Build
// Imports: public import Lake.CLI.Error public import Lake.Config.Workspace import Lake.Build.Infos import Lake.Build.Job.Monad public import Lake.Build.Job.Register import Lake.Util.IO import Init.Data.Iterators.Consumers
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_keyword;
lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_Module_leanArtsFacet;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lake_OptDataKind_anonymous___redArg();
lean_object* l_Lake_BuildInfo_key(lean_object*);
lean_object* l_Lake_BuildKey_toSimpleString(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lake_resolvePath(lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_Lake_Workspace_findModuleBySrc_x3f(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
lean_object* l_Lake_Workspace_findTargetModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* l_Lake_formatQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildSpec_query___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildSpec_query___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l_Lake_buildSpecs___closed__0 = (const lean_object*)&l_Lake_buildSpecs___closed__0_value;
static const lean_ctor_object l_Lake_buildSpecs___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lake_buildSpecs___boxed__const__1 = (const lean_object*)&l_Lake_buildSpecs___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lake_buildSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_querySpecs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_querySpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0 = (const lean_object*)&l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0_value;
static const lean_closure_object l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value)}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "package"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1_value;
static lean_once_cell_t l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0_value;
static lean_once_cell_t l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_parseTargetSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_parseTargetSpec___closed__0 = (const lean_object*)&l_Lake_parseTargetSpec___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_parseTargetSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_parseTargetSpecs___closed__0 = (const lean_object*)&l_Lake_parseTargetSpecs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec___redArg(lean_object* v_info_1_, lean_object* v_inst_2_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 1;
v___x_4_ = lean_alloc_closure((void*)(l_Lake_formatQuery___boxed), 4, 2);
lean_closure_set(v___x_4_, 0, lean_box(0));
lean_closure_set(v___x_4_, 1, v_inst_2_);
v___x_5_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5_, 0, v_info_1_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec(lean_object* v_00_u03b1_6_, lean_object* v_info_7_, lean_object* v_inst_8_, lean_object* v_h_9_){
_start:
{
uint8_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = 1;
v___x_11_ = lean_alloc_closure((void*)(l_Lake_formatQuery___boxed), 4, 2);
lean_closure_set(v___x_11_, 0, lean_box(0));
lean_closure_set(v___x_11_, 1, v_inst_8_);
v___x_12_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_12_, 0, v_info_7_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg(lean_object* v_info_13_, lean_object* v_config_14_){
_start:
{
uint8_t v_buildable_15_; lean_object* v_format_16_; lean_object* v___x_17_; 
v_buildable_15_ = lean_ctor_get_uint8(v_config_14_, sizeof(void*)*4);
v_format_16_ = lean_ctor_get(v_config_14_, 3);
lean_inc_ref(v_format_16_);
v___x_17_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_17_, 0, v_info_13_);
lean_ctor_set(v___x_17_, 1, v_format_16_);
lean_ctor_set_uint8(v___x_17_, sizeof(void*)*2, v_buildable_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg___boxed(lean_object* v_info_18_, lean_object* v_config_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lake_mkConfigBuildSpec___redArg(v_info_18_, v_config_19_);
lean_dec_ref(v_config_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec(lean_object* v_facet_21_, lean_object* v_info_22_, lean_object* v_config_23_, lean_object* v_h_24_){
_start:
{
uint8_t v_buildable_25_; lean_object* v_format_26_; lean_object* v___x_27_; 
v_buildable_25_ = lean_ctor_get_uint8(v_config_23_, sizeof(void*)*4);
v_format_26_ = lean_ctor_get(v_config_23_, 3);
lean_inc_ref(v_format_26_);
v___x_27_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_27_, 0, v_info_22_);
lean_ctor_set(v___x_27_, 1, v_format_26_);
lean_ctor_set_uint8(v___x_27_, sizeof(void*)*2, v_buildable_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___boxed(lean_object* v_facet_28_, lean_object* v_info_29_, lean_object* v_config_30_, lean_object* v_h_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lake_mkConfigBuildSpec(v_facet_28_, v_info_29_, v_config_30_, v_h_31_);
lean_dec_ref(v_config_30_);
lean_dec(v_facet_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch(lean_object* v_self_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_info_41_; lean_object* v___x_42_; 
v_info_41_ = lean_ctor_get(v_self_33_, 0);
lean_inc_ref_n(v_info_41_, 2);
lean_dec_ref(v_self_33_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc(v_a_36_);
lean_inc(v_a_35_);
v___x_42_ = lean_apply_7(v_a_34_, v_info_41_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, lean_box(0));
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v_a_44_; lean_object* v_task_45_; lean_object* v_kind_46_; lean_object* v_caption_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_75_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
v_a_44_ = lean_ctor_get(v___x_42_, 1);
lean_inc(v_a_44_);
v_task_45_ = lean_ctor_get(v_a_43_, 0);
v_kind_46_ = lean_ctor_get(v_a_43_, 1);
v_caption_47_ = lean_ctor_get(v_a_43_, 2);
v_isSharedCheck_75_ = !lean_is_exclusive(v_a_43_);
if (v_isSharedCheck_75_ == 0)
{
v___x_49_ = v_a_43_;
v_isShared_50_ = v_isSharedCheck_75_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_caption_47_);
lean_inc(v_kind_46_);
lean_inc(v_task_45_);
lean_dec(v_a_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_75_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_51_ = lean_string_utf8_byte_size(v_caption_47_);
lean_dec_ref(v_caption_47_);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_dec_eq(v___x_51_, v___x_52_);
if (v___x_53_ == 0)
{
lean_del_object(v___x_49_);
lean_dec(v_kind_46_);
lean_dec_ref(v_task_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_info_41_);
return v___x_42_;
}
else
{
lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_72_; 
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; lean_object* v_unused_74_; 
v_unused_73_ = lean_ctor_get(v___x_42_, 1);
lean_dec(v_unused_73_);
v_unused_74_ = lean_ctor_get(v___x_42_, 0);
lean_dec(v_unused_74_);
v___x_55_ = v___x_42_;
v_isShared_56_ = v_isSharedCheck_72_;
goto v_resetjp_54_;
}
else
{
lean_dec(v___x_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_72_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v_registeredJobs_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v_job_62_; 
v_registeredJobs_57_ = lean_ctor_get(v_a_38_, 4);
v___x_58_ = l_Lake_BuildInfo_key(v_info_41_);
v___x_59_ = l_Lake_BuildKey_toSimpleString(v___x_58_);
v___x_60_ = 0;
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_59_);
v_job_62_ = v___x_49_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_task_45_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_kind_46_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_59_);
v_job_62_ = v_reuseFailAlloc_71_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
lean_ctor_set_uint8(v_job_62_, sizeof(void*)*3, v___x_60_);
v___x_63_ = lean_st_ref_take(v_registeredJobs_57_);
lean_inc_ref(v_job_62_);
v___x_64_ = l_Lake_Job_toOpaque___redArg(v_job_62_);
v___x_65_ = lean_array_push(v___x_63_, v___x_64_);
v___x_66_ = lean_st_ref_put(v_registeredJobs_57_, v___x_65_);
v___x_67_ = l_Lake_Job_renew___redArg(v_job_62_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_67_);
v___x_69_ = v___x_55_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_a_44_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_info_41_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch___boxed(lean_object* v_self_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lake_BuildSpec_fetch(v_self_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec(v_a_79_);
lean_dec(v_a_78_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build(lean_object* v_self_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v_info_98_; lean_object* v___x_99_; 
v_info_98_ = lean_ctor_get(v_self_85_, 0);
lean_inc_ref_n(v_info_98_, 2);
lean_dec_ref(v_self_85_);
lean_inc_ref(v_a_90_);
lean_inc(v_a_89_);
lean_inc(v_a_88_);
lean_inc(v_a_87_);
v___x_99_ = lean_apply_7(v_a_86_, v_info_98_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, lean_box(0));
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v_a_101_; lean_object* v_task_102_; lean_object* v_kind_103_; lean_object* v_caption_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
v_a_101_ = lean_ctor_get(v___x_99_, 1);
lean_inc(v_a_101_);
lean_dec_ref_known(v___x_99_, 2);
v_task_102_ = lean_ctor_get(v_a_100_, 0);
v_kind_103_ = lean_ctor_get(v_a_100_, 1);
v_caption_104_ = lean_ctor_get(v_a_100_, 2);
v___x_105_ = lean_string_utf8_byte_size(v_caption_104_);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_nat_dec_eq(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_info_98_);
v_a_94_ = v_a_100_;
v_a_95_ = v_a_101_;
goto v___jp_93_;
}
else
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_123_; 
lean_inc(v_kind_103_);
lean_inc_ref(v_task_102_);
v_isSharedCheck_123_ = !lean_is_exclusive(v_a_100_);
if (v_isSharedCheck_123_ == 0)
{
lean_object* v_unused_124_; lean_object* v_unused_125_; lean_object* v_unused_126_; 
v_unused_124_ = lean_ctor_get(v_a_100_, 2);
lean_dec(v_unused_124_);
v_unused_125_ = lean_ctor_get(v_a_100_, 1);
lean_dec(v_unused_125_);
v_unused_126_ = lean_ctor_get(v_a_100_, 0);
lean_dec(v_unused_126_);
v___x_109_ = v_a_100_;
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
else
{
lean_dec(v_a_100_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_registeredJobs_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v_job_116_; 
v_registeredJobs_111_ = lean_ctor_get(v_a_90_, 4);
v___x_112_ = l_Lake_BuildInfo_key(v_info_98_);
v___x_113_ = l_Lake_BuildKey_toSimpleString(v___x_112_);
v___x_114_ = 0;
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 2, v___x_113_);
v_job_116_ = v___x_109_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_task_102_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v_kind_103_);
lean_ctor_set(v_reuseFailAlloc_122_, 2, v___x_113_);
v_job_116_ = v_reuseFailAlloc_122_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
lean_ctor_set_uint8(v_job_116_, sizeof(void*)*3, v___x_114_);
v___x_117_ = lean_st_ref_take(v_registeredJobs_111_);
lean_inc_ref(v_job_116_);
v___x_118_ = l_Lake_Job_toOpaque___redArg(v_job_116_);
v___x_119_ = lean_array_push(v___x_117_, v___x_118_);
v___x_120_ = lean_st_ref_put(v_registeredJobs_111_, v___x_119_);
v___x_121_ = l_Lake_Job_renew___redArg(v_job_116_);
v_a_94_ = v___x_121_;
v_a_95_ = v_a_101_;
goto v___jp_93_;
}
}
}
}
else
{
lean_dec_ref(v_info_98_);
return v___x_99_;
}
v___jp_93_:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = l_Lake_Job_toOpaque___redArg(v_a_94_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_95_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build___boxed(lean_object* v_self_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lake_BuildSpec_build(v_self_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec(v_a_130_);
lean_dec(v_a_129_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0(lean_object* v_format_136_, uint8_t v_fmt_137_, lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_149_; 
v_a_139_ = lean_ctor_get(v_x_138_, 0);
v_a_140_ = lean_ctor_get(v_x_138_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_149_ == 0)
{
v___x_142_ = v_x_138_;
v_isShared_143_ = v_isSharedCheck_149_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_inc(v_a_139_);
lean_dec(v_x_138_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_149_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_144_ = lean_box(v_fmt_137_);
v___x_145_ = lean_apply_2(v_format_136_, v___x_144_, v_a_139_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_a_140_);
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
lean_object* v_a_150_; lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_dec_ref(v_format_136_);
v_a_150_ = lean_ctor_get(v_x_138_, 0);
v_a_151_ = lean_ctor_get(v_x_138_, 1);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v_x_138_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_inc(v_a_150_);
lean_dec(v_x_138_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_150_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0___boxed(lean_object* v_format_159_, lean_object* v_fmt_160_, lean_object* v_x_161_){
_start:
{
uint8_t v_fmt_boxed_162_; lean_object* v_res_163_; 
v_fmt_boxed_162_ = lean_unbox(v_fmt_160_);
v_res_163_ = l_Lake_BuildSpec_query___lam__0(v_format_159_, v_fmt_boxed_162_, v_x_161_);
return v_res_163_;
}
}
static lean_object* _init_l_Lake_BuildSpec_query___closed__0(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lake_OptDataKind_anonymous___redArg();
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query(lean_object* v_self_165_, uint8_t v_fmt_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_info_174_; lean_object* v_format_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___f_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_info_174_ = lean_ctor_get(v_self_165_, 0);
lean_inc_ref_n(v_info_174_, 2);
v_format_175_ = lean_ctor_get(v_self_165_, 1);
lean_inc_ref(v_format_175_);
lean_dec_ref(v_self_165_);
v___x_176_ = lean_obj_once(&l_Lake_BuildSpec_query___closed__0, &l_Lake_BuildSpec_query___closed__0_once, _init_l_Lake_BuildSpec_query___closed__0);
v___x_177_ = lean_box(v_fmt_166_);
v___f_178_ = lean_alloc_closure((void*)(l_Lake_BuildSpec_query___lam__0___boxed), 3, 2);
lean_closure_set(v___f_178_, 0, v_format_175_);
lean_closure_set(v___f_178_, 1, v___x_177_);
v___x_179_ = l_Lake_BuildInfo_key(v_info_174_);
v___x_180_ = l_Lake_BuildKey_toSimpleString(v___x_179_);
lean_inc_ref(v_a_171_);
lean_inc(v_a_170_);
lean_inc(v_a_169_);
lean_inc(v_a_168_);
v___x_181_ = lean_apply_7(v_a_167_, v_info_174_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, lean_box(0));
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_218_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
v_a_183_ = lean_ctor_get(v___x_181_, 1);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_218_ == 0)
{
v___x_185_ = v___x_181_;
v_isShared_186_ = v_isSharedCheck_218_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_inc(v_a_182_);
lean_dec(v___x_181_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_218_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v_task_187_; lean_object* v_caption_188_; uint8_t v_optional_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_216_; 
v_task_187_ = lean_ctor_get(v_a_182_, 0);
v_caption_188_ = lean_ctor_get(v_a_182_, 2);
v_optional_189_ = lean_ctor_get_uint8(v_a_182_, sizeof(void*)*3);
v_isSharedCheck_216_ = !lean_is_exclusive(v_a_182_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; 
v_unused_217_ = lean_ctor_get(v_a_182_, 1);
lean_dec(v_unused_217_);
v___x_191_ = v_a_182_;
v_isShared_192_ = v_isSharedCheck_216_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_caption_188_);
lean_inc(v_task_187_);
lean_dec(v_a_182_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_216_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; uint8_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_193_ = lean_unsigned_to_nat(0u);
v___x_194_ = 0;
v___x_195_ = lean_task_map(v___f_178_, v_task_187_, v___x_193_, v___x_194_);
v___x_196_ = lean_string_utf8_byte_size(v_caption_188_);
v___x_197_ = lean_nat_dec_eq(v___x_196_, v___x_193_);
if (v___x_197_ == 0)
{
lean_object* v___x_199_; 
lean_dec_ref(v___x_180_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v___x_176_);
lean_ctor_set(v___x_191_, 0, v___x_195_);
v___x_199_ = v___x_191_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_195_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_caption_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_203_, sizeof(void*)*3, v_optional_189_);
v___x_199_ = v_reuseFailAlloc_203_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_201_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_199_);
v___x_201_ = v___x_185_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_a_183_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
else
{
lean_object* v_registeredJobs_204_; lean_object* v_job_206_; 
lean_dec_ref(v_caption_188_);
v_registeredJobs_204_ = lean_ctor_get(v_a_171_, 4);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 2, v___x_180_);
lean_ctor_set(v___x_191_, 1, v___x_176_);
lean_ctor_set(v___x_191_, 0, v___x_195_);
v_job_206_ = v___x_191_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_195_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v___x_180_);
v_job_206_ = v_reuseFailAlloc_215_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
lean_ctor_set_uint8(v_job_206_, sizeof(void*)*3, v___x_194_);
v___x_207_ = lean_st_ref_take(v_registeredJobs_204_);
lean_inc_ref(v_job_206_);
v___x_208_ = l_Lake_Job_toOpaque___redArg(v_job_206_);
v___x_209_ = lean_array_push(v___x_207_, v___x_208_);
v___x_210_ = lean_st_ref_put(v_registeredJobs_204_, v___x_209_);
v___x_211_ = l_Lake_Job_renew___redArg(v_job_206_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_211_);
v___x_213_ = v___x_185_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_a_183_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v___x_180_);
lean_dec_ref(v___f_178_);
v_a_219_ = lean_ctor_get(v___x_181_, 0);
v_a_220_ = lean_ctor_get(v___x_181_, 1);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_181_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_inc(v_a_219_);
lean_dec(v___x_181_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_219_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___boxed(lean_object* v_self_228_, lean_object* v_fmt_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
uint8_t v_fmt_boxed_237_; lean_object* v_res_238_; 
v_fmt_boxed_237_ = lean_unbox(v_fmt_229_);
v_res_238_ = l_Lake_BuildSpec_query(v_self_228_, v_fmt_boxed_237_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec(v_a_232_);
lean_dec(v_a_231_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(size_t v_sz_239_, size_t v_i_240_, lean_object* v_bs_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = lean_usize_dec_lt(v_i_240_, v_sz_239_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec_ref(v___y_242_);
v___x_250_ = l_unsafeCast___redArg(v_bs_241_);
lean_dec_ref(v_bs_241_);
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v___y_247_);
return v___x_251_;
}
else
{
lean_object* v_v_252_; lean_object* v___x_253_; lean_object* v_info_254_; lean_object* v___x_255_; lean_object* v_bs_x27_256_; lean_object* v_a_258_; lean_object* v_a_259_; lean_object* v___x_266_; 
v_v_252_ = lean_array_uget_borrowed(v_bs_241_, v_i_240_);
v___x_253_ = l_unsafeCast___redArg(v_v_252_);
v_info_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc_ref_n(v_info_254_, 2);
lean_dec(v___x_253_);
v___x_255_ = lean_unsigned_to_nat(0u);
v_bs_x27_256_ = lean_array_uset(v_bs_241_, v_i_240_, v___x_255_);
lean_inc_ref(v___y_242_);
lean_inc_ref(v___y_246_);
lean_inc(v___y_245_);
lean_inc(v___y_244_);
lean_inc(v___y_243_);
v___x_266_ = lean_apply_7(v___y_242_, v_info_254_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, lean_box(0));
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v_a_268_; lean_object* v_task_269_; lean_object* v_kind_270_; lean_object* v_caption_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_a_267_);
v_a_268_ = lean_ctor_get(v___x_266_, 1);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_266_, 2);
v_task_269_ = lean_ctor_get(v_a_267_, 0);
v_kind_270_ = lean_ctor_get(v_a_267_, 1);
v_caption_271_ = lean_ctor_get(v_a_267_, 2);
v___x_272_ = lean_string_utf8_byte_size(v_caption_271_);
v___x_273_ = lean_nat_dec_eq(v___x_272_, v___x_255_);
if (v___x_273_ == 0)
{
lean_dec_ref(v_info_254_);
v_a_258_ = v_a_267_;
v_a_259_ = v_a_268_;
goto v___jp_257_;
}
else
{
lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_289_; 
lean_inc(v_kind_270_);
lean_inc_ref(v_task_269_);
v_isSharedCheck_289_ = !lean_is_exclusive(v_a_267_);
if (v_isSharedCheck_289_ == 0)
{
lean_object* v_unused_290_; lean_object* v_unused_291_; lean_object* v_unused_292_; 
v_unused_290_ = lean_ctor_get(v_a_267_, 2);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_a_267_, 1);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_a_267_, 0);
lean_dec(v_unused_292_);
v___x_275_ = v_a_267_;
v_isShared_276_ = v_isSharedCheck_289_;
goto v_resetjp_274_;
}
else
{
lean_dec(v_a_267_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_289_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_registeredJobs_277_; lean_object* v___x_278_; lean_object* v___x_279_; uint8_t v___x_280_; lean_object* v_job_282_; 
v_registeredJobs_277_ = lean_ctor_get(v___y_246_, 4);
v___x_278_ = l_Lake_BuildInfo_key(v_info_254_);
v___x_279_ = l_Lake_BuildKey_toSimpleString(v___x_278_);
v___x_280_ = 0;
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 2, v___x_279_);
v_job_282_ = v___x_275_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_task_269_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_kind_270_);
lean_ctor_set(v_reuseFailAlloc_288_, 2, v___x_279_);
v_job_282_ = v_reuseFailAlloc_288_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
lean_ctor_set_uint8(v_job_282_, sizeof(void*)*3, v___x_280_);
v___x_283_ = lean_st_ref_take(v_registeredJobs_277_);
lean_inc_ref(v_job_282_);
v___x_284_ = l_Lake_Job_toOpaque___redArg(v_job_282_);
v___x_285_ = lean_array_push(v___x_283_, v___x_284_);
v___x_286_ = lean_st_ref_put(v_registeredJobs_277_, v___x_285_);
v___x_287_ = l_Lake_Job_renew___redArg(v_job_282_);
v_a_258_ = v___x_287_;
v_a_259_ = v_a_268_;
goto v___jp_257_;
}
}
}
}
else
{
lean_object* v_a_293_; lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec_ref(v_bs_x27_256_);
lean_dec_ref(v_info_254_);
lean_dec_ref(v___y_242_);
v_a_293_ = lean_ctor_get(v___x_266_, 0);
v_a_294_ = lean_ctor_get(v___x_266_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_266_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_inc(v_a_293_);
lean_dec(v___x_266_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_293_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
v___jp_257_:
{
lean_object* v___x_260_; size_t v___x_261_; size_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_260_ = l_Lake_Job_toOpaque___redArg(v_a_258_);
v___x_261_ = ((size_t)1ULL);
v___x_262_ = lean_usize_add(v_i_240_, v___x_261_);
v___x_263_ = l_unsafeCast___redArg(v___x_260_);
lean_dec_ref(v___x_260_);
v___x_264_ = lean_array_uset(v_bs_x27_256_, v_i_240_, v___x_263_);
v_i_240_ = v___x_262_;
v_bs_241_ = v___x_264_;
v___y_247_ = v_a_259_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed(lean_object* v_sz_302_, lean_object* v_i_303_, lean_object* v_bs_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
size_t v_sz_boxed_312_; size_t v_i_boxed_313_; lean_object* v_res_314_; 
v_sz_boxed_312_ = lean_unbox_usize(v_sz_302_);
lean_dec(v_sz_302_);
v_i_boxed_313_ = lean_unbox_usize(v_i_303_);
lean_dec(v_i_303_);
v_res_314_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(v_sz_boxed_312_, v_i_boxed_313_, v_bs_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec(v___y_307_);
lean_dec(v___y_306_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSpecs(lean_object* v_specs_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
size_t v_sz_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_2003__overap_331_; lean_object* v___x_332_; 
v_sz_326_ = lean_array_size(v_specs_318_);
v___x_327_ = l_unsafeCast___redArg(v_specs_318_);
v___x_328_ = lean_box_usize(v_sz_326_);
v___x_329_ = ((lean_object*)(l_Lake_buildSpecs___boxed__const__1));
v___x_330_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed), 10, 3);
lean_closure_set(v___x_330_, 0, v___x_328_);
lean_closure_set(v___x_330_, 1, v___x_329_);
lean_closure_set(v___x_330_, 2, v___x_327_);
v___x_2003__overap_331_ = l_unsafeCast___redArg(v___x_330_);
lean_dec_ref(v___x_330_);
lean_inc_ref(v_a_323_);
lean_inc(v_a_322_);
lean_inc(v_a_321_);
lean_inc(v_a_320_);
v___x_332_ = lean_apply_7(v___x_2003__overap_331_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, lean_box(0));
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_343_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_a_334_ = lean_ctor_get(v___x_332_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_343_ == 0)
{
v___x_336_ = v___x_332_;
v_isShared_337_ = v_isSharedCheck_343_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_343_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_338_ = ((lean_object*)(l_Lake_buildSpecs___closed__0));
v___x_339_ = l_Lake_Job_mixArray___redArg(v_a_333_, v___x_338_);
lean_dec(v_a_333_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_339_);
v___x_341_ = v___x_336_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_a_334_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_344_ = lean_ctor_get(v___x_332_, 0);
v_a_345_ = lean_ctor_get(v___x_332_, 1);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_332_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_inc(v_a_344_);
lean_dec(v___x_332_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_344_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSpecs___boxed(lean_object* v_specs_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lake_buildSpecs(v_specs_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec(v_a_356_);
lean_dec(v_a_355_);
lean_dec_ref(v_specs_353_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(lean_object* v_format_362_, uint8_t v_fmt_363_, lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_375_; 
v_a_365_ = lean_ctor_get(v_x_364_, 0);
v_a_366_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_375_ == 0)
{
v___x_368_ = v_x_364_;
v_isShared_369_ = v_isSharedCheck_375_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_inc(v_a_365_);
lean_dec(v_x_364_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_375_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_370_ = lean_box(v_fmt_363_);
v___x_371_ = lean_apply_2(v_format_362_, v___x_370_, v_a_365_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_371_);
v___x_373_ = v___x_368_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v_a_366_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
else
{
lean_object* v_a_376_; lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec_ref(v_format_362_);
v_a_376_ = lean_ctor_get(v_x_364_, 0);
v_a_377_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v_x_364_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_inc(v_a_376_);
lean_dec(v_x_364_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_376_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed(lean_object* v_format_385_, lean_object* v_fmt_386_, lean_object* v_x_387_){
_start:
{
uint8_t v_fmt_boxed_388_; lean_object* v_res_389_; 
v_fmt_boxed_388_ = lean_unbox(v_fmt_386_);
v_res_389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(v_format_385_, v_fmt_boxed_388_, v_x_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(uint8_t v_fmt_390_, size_t v_sz_391_, size_t v_i_392_, lean_object* v_bs_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
uint8_t v___x_401_; 
v___x_401_ = lean_usize_dec_lt(v_i_392_, v_sz_391_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref(v___y_394_);
v___x_402_ = l_unsafeCast___redArg(v_bs_393_);
lean_dec_ref(v_bs_393_);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set(v___x_403_, 1, v___y_399_);
return v___x_403_;
}
else
{
lean_object* v_v_404_; lean_object* v___x_405_; lean_object* v_info_406_; lean_object* v_format_407_; lean_object* v___x_408_; lean_object* v_bs_x27_409_; lean_object* v_a_411_; lean_object* v_a_412_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___f_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_v_404_ = lean_array_uget_borrowed(v_bs_393_, v_i_392_);
v___x_405_ = l_unsafeCast___redArg(v_v_404_);
v_info_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc_ref_n(v_info_406_, 2);
v_format_407_ = lean_ctor_get(v___x_405_, 1);
lean_inc_ref(v_format_407_);
lean_dec(v___x_405_);
v___x_408_ = lean_unsigned_to_nat(0u);
v_bs_x27_409_ = lean_array_uset(v_bs_393_, v_i_392_, v___x_408_);
v___x_418_ = lean_obj_once(&l_Lake_BuildSpec_query___closed__0, &l_Lake_BuildSpec_query___closed__0_once, _init_l_Lake_BuildSpec_query___closed__0);
v___x_419_ = lean_box(v_fmt_390_);
v___f_420_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_420_, 0, v_format_407_);
lean_closure_set(v___f_420_, 1, v___x_419_);
v___x_421_ = l_Lake_BuildInfo_key(v_info_406_);
v___x_422_ = l_Lake_BuildKey_toSimpleString(v___x_421_);
lean_inc_ref(v___y_394_);
lean_inc_ref(v___y_398_);
lean_inc(v___y_397_);
lean_inc(v___y_396_);
lean_inc(v___y_395_);
v___x_423_ = lean_apply_7(v___y_394_, v_info_406_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, lean_box(0));
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v_a_425_; lean_object* v_task_426_; lean_object* v_caption_427_; uint8_t v_optional_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_448_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
v_a_425_ = lean_ctor_get(v___x_423_, 1);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_423_, 2);
v_task_426_ = lean_ctor_get(v_a_424_, 0);
v_caption_427_ = lean_ctor_get(v_a_424_, 2);
v_optional_428_ = lean_ctor_get_uint8(v_a_424_, sizeof(void*)*3);
v_isSharedCheck_448_ = !lean_is_exclusive(v_a_424_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v_a_424_, 1);
lean_dec(v_unused_449_);
v___x_430_ = v_a_424_;
v_isShared_431_ = v_isSharedCheck_448_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_caption_427_);
lean_inc(v_task_426_);
lean_dec(v_a_424_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_448_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_432_ = 0;
v___x_433_ = lean_task_map(v___f_420_, v_task_426_, v___x_408_, v___x_432_);
v___x_434_ = lean_string_utf8_byte_size(v_caption_427_);
v___x_435_ = lean_nat_dec_eq(v___x_434_, v___x_408_);
if (v___x_435_ == 0)
{
lean_object* v___x_437_; 
lean_dec_ref(v___x_422_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 1, v___x_418_);
lean_ctor_set(v___x_430_, 0, v___x_433_);
v___x_437_ = v___x_430_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_438_, 2, v_caption_427_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, sizeof(void*)*3, v_optional_428_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
v_a_411_ = v___x_437_;
v_a_412_ = v_a_425_;
goto v___jp_410_;
}
}
else
{
lean_object* v_registeredJobs_439_; lean_object* v_job_441_; 
lean_dec_ref(v_caption_427_);
v_registeredJobs_439_ = lean_ctor_get(v___y_398_, 4);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 2, v___x_422_);
lean_ctor_set(v___x_430_, 1, v___x_418_);
lean_ctor_set(v___x_430_, 0, v___x_433_);
v_job_441_ = v___x_430_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_447_, 2, v___x_422_);
v_job_441_ = v_reuseFailAlloc_447_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_ctor_set_uint8(v_job_441_, sizeof(void*)*3, v___x_432_);
v___x_442_ = lean_st_ref_take(v_registeredJobs_439_);
lean_inc_ref(v_job_441_);
v___x_443_ = l_Lake_Job_toOpaque___redArg(v_job_441_);
v___x_444_ = lean_array_push(v___x_442_, v___x_443_);
v___x_445_ = lean_st_ref_put(v_registeredJobs_439_, v___x_444_);
v___x_446_ = l_Lake_Job_renew___redArg(v_job_441_);
v_a_411_ = v___x_446_;
v_a_412_ = v_a_425_;
goto v___jp_410_;
}
}
}
}
else
{
lean_object* v_a_450_; lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec_ref(v___x_422_);
lean_dec_ref(v___f_420_);
lean_dec_ref(v_bs_x27_409_);
lean_dec_ref(v___y_394_);
v_a_450_ = lean_ctor_get(v___x_423_, 0);
v_a_451_ = lean_ctor_get(v___x_423_, 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_423_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_inc(v_a_450_);
lean_dec(v___x_423_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_450_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
v___jp_410_:
{
size_t v___x_413_; size_t v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_413_ = ((size_t)1ULL);
v___x_414_ = lean_usize_add(v_i_392_, v___x_413_);
v___x_415_ = l_unsafeCast___redArg(v_a_411_);
lean_dec_ref(v_a_411_);
v___x_416_ = lean_array_uset(v_bs_x27_409_, v_i_392_, v___x_415_);
v_i_392_ = v___x_414_;
v_bs_393_ = v___x_416_;
v___y_399_ = v_a_412_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed(lean_object* v_fmt_459_, lean_object* v_sz_460_, lean_object* v_i_461_, lean_object* v_bs_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
uint8_t v_fmt_boxed_470_; size_t v_sz_boxed_471_; size_t v_i_boxed_472_; lean_object* v_res_473_; 
v_fmt_boxed_470_ = lean_unbox(v_fmt_459_);
v_sz_boxed_471_ = lean_unbox_usize(v_sz_460_);
lean_dec(v_sz_460_);
v_i_boxed_472_ = lean_unbox_usize(v_i_461_);
lean_dec(v_i_461_);
v_res_473_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(v_fmt_boxed_470_, v_sz_boxed_471_, v_i_boxed_472_, v_bs_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec(v___y_465_);
lean_dec(v___y_464_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lake_querySpecs(lean_object* v_specs_474_, uint8_t v_fmt_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_){
_start:
{
size_t v_sz_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_2034__overap_489_; lean_object* v___x_490_; 
v_sz_483_ = lean_array_size(v_specs_474_);
v___x_484_ = l_unsafeCast___redArg(v_specs_474_);
v___x_485_ = lean_box(v_fmt_475_);
v___x_486_ = lean_box_usize(v_sz_483_);
v___x_487_ = ((lean_object*)(l_Lake_buildSpecs___boxed__const__1));
v___x_488_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed), 11, 4);
lean_closure_set(v___x_488_, 0, v___x_485_);
lean_closure_set(v___x_488_, 1, v___x_486_);
lean_closure_set(v___x_488_, 2, v___x_487_);
lean_closure_set(v___x_488_, 3, v___x_484_);
v___x_2034__overap_489_ = l_unsafeCast___redArg(v___x_488_);
lean_dec_ref(v___x_488_);
lean_inc_ref(v_a_480_);
lean_inc(v_a_479_);
lean_inc(v_a_478_);
lean_inc(v_a_477_);
v___x_490_ = lean_apply_7(v___x_2034__overap_489_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, lean_box(0));
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_501_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
v_a_492_ = lean_ctor_get(v___x_490_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_501_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_501_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_inc(v_a_491_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_501_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_496_ = ((lean_object*)(l_Lake_buildSpecs___closed__0));
v___x_497_ = l_Lake_Job_collectArray___redArg(v_a_491_, v___x_496_);
lean_dec(v_a_491_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_497_);
v___x_499_ = v___x_494_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_a_492_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
else
{
lean_object* v_a_502_; lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_a_502_ = lean_ctor_get(v___x_490_, 0);
v_a_503_ = lean_ctor_get(v___x_490_, 1);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_490_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_inc(v_a_502_);
lean_dec(v___x_490_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_502_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_querySpecs___boxed(lean_object* v_specs_511_, lean_object* v_fmt_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
uint8_t v_fmt_boxed_520_; lean_object* v_res_521_; 
v_fmt_boxed_520_ = lean_unbox(v_fmt_512_);
v_res_521_ = l_Lake_querySpecs(v_specs_511_, v_fmt_boxed_520_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
lean_dec(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_specs_511_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(lean_object* v___x_525_, lean_object* v_as_526_, size_t v_sz_527_, size_t v_i_528_, lean_object* v_b_529_){
_start:
{
uint8_t v___x_530_; 
v___x_530_ = lean_usize_dec_lt(v_i_528_, v_sz_527_);
if (v___x_530_ == 0)
{
lean_inc_ref(v_b_529_);
return v_b_529_;
}
else
{
lean_object* v_a_531_; lean_object* v_baseName_532_; lean_object* v___x_533_; uint8_t v___x_534_; 
v_a_531_ = lean_array_uget_borrowed(v_as_526_, v_i_528_);
v_baseName_532_ = lean_ctor_get(v_a_531_, 1);
v___x_533_ = lean_box(0);
v___x_534_ = lean_name_eq(v_baseName_532_, v___x_525_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; size_t v___x_536_; size_t v___x_537_; 
v___x_535_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v___x_536_ = ((size_t)1ULL);
v___x_537_ = lean_usize_add(v_i_528_, v___x_536_);
v_i_528_ = v___x_537_;
v_b_529_ = v___x_535_;
goto _start;
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
lean_inc(v_a_531_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v_a_531_);
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v___x_533_);
return v___x_541_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___boxed(lean_object* v___x_542_, lean_object* v_as_543_, lean_object* v_sz_544_, lean_object* v_i_545_, lean_object* v_b_546_){
_start:
{
size_t v_sz_boxed_547_; size_t v_i_boxed_548_; lean_object* v_res_549_; 
v_sz_boxed_547_ = lean_unbox_usize(v_sz_544_);
lean_dec(v_sz_544_);
v_i_boxed_548_ = lean_unbox_usize(v_i_545_);
lean_dec(v_i_545_);
v_res_549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v___x_542_, v_as_543_, v_sz_boxed_547_, v_i_boxed_548_, v_b_546_);
lean_dec_ref(v_b_546_);
lean_dec_ref(v_as_543_);
lean_dec(v___x_542_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec(lean_object* v_ws_550_, lean_object* v_spec_551_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_555_ = lean_string_utf8_byte_size(v_spec_551_);
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = lean_nat_dec_eq(v___x_555_, v___x_556_);
if (v___x_557_ == 0)
{
lean_object* v_packages_558_; lean_object* v___x_559_; lean_object* v___x_560_; size_t v_sz_561_; size_t v___x_562_; lean_object* v___x_563_; lean_object* v_fst_564_; 
v_packages_558_ = lean_ctor_get(v_ws_550_, 4);
lean_inc_ref(v_spec_551_);
v___x_559_ = l_Lake_stringToLegalOrSimpleName(v_spec_551_);
v___x_560_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v_sz_561_ = lean_array_size(v_packages_558_);
v___x_562_ = ((size_t)0ULL);
v___x_563_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v___x_559_, v_packages_558_, v_sz_561_, v___x_562_, v___x_560_);
lean_dec(v___x_559_);
v_fst_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_fst_564_);
lean_dec_ref(v___x_563_);
if (lean_obj_tag(v_fst_564_) == 0)
{
goto v___jp_552_;
}
else
{
lean_object* v_val_565_; 
v_val_565_ = lean_ctor_get(v_fst_564_, 0);
lean_inc(v_val_565_);
lean_dec_ref_known(v_fst_564_, 1);
if (lean_obj_tag(v_val_565_) == 0)
{
goto v___jp_552_;
}
else
{
lean_object* v_val_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_dec_ref(v_spec_551_);
v_val_566_ = lean_ctor_get(v_val_565_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v_val_565_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v_val_565_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_val_566_);
lean_dec(v_val_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_val_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
else
{
lean_object* v_packages_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec_ref(v_spec_551_);
v_packages_574_ = lean_ctor_get(v_ws_550_, 4);
v___x_575_ = lean_array_fget_borrowed(v_packages_574_, v___x_556_);
lean_inc(v___x_575_);
v___x_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
v___jp_552_:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_553_, 0, v_spec_551_);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec___boxed(lean_object* v_ws_577_, lean_object* v_spec_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lake_parsePackageSpec(v_ws_577_, v_spec_578_);
lean_dec_ref(v_ws_577_);
return v_res_579_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_box(0);
v___x_582_ = l_Lean_Json_compress(v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(uint8_t v_fmt_583_){
_start:
{
if (v_fmt_583_ == 0)
{
lean_object* v___x_584_; 
v___x_584_ = ((lean_object*)(l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0));
return v___x_584_;
}
else
{
lean_object* v___x_585_; 
v___x_585_ = lean_obj_once(&l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1, &l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1_once, _init_l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___boxed(lean_object* v_fmt_586_){
_start:
{
uint8_t v_fmt_boxed_587_; lean_object* v_res_588_; 
v_fmt_boxed_587_ = lean_unbox(v_fmt_586_);
v_res_588_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v_fmt_boxed_587_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(uint8_t v_fmt_589_, lean_object* v_a_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v_fmt_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___boxed(lean_object* v_fmt_592_, lean_object* v_a_593_){
_start:
{
uint8_t v_fmt_boxed_594_; lean_object* v_res_595_; 
v_fmt_boxed_594_ = lean_unbox(v_fmt_592_);
v_res_595_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(v_fmt_boxed_594_, v_a_593_);
lean_dec_ref(v_a_593_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(uint8_t v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v___y_596_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed(lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v___y_282__boxed_601_; lean_object* v_res_602_; 
v___y_282__boxed_601_ = lean_unbox(v___y_599_);
v_res_602_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(v___y_282__boxed_601_, v___y_600_);
lean_dec_ref(v___y_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(lean_object* v_ws_605_, lean_object* v_mod_606_, lean_object* v_facet_607_){
_start:
{
uint8_t v___x_608_; 
v___x_608_ = l_Lean_Name_isAnonymous(v_facet_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = l_Lake_Module_keyword;
lean_inc(v_facet_607_);
v___x_610_ = l_Lean_Name_append(v___x_609_, v_facet_607_);
v___x_611_ = l_Lake_Workspace_findModuleFacetConfig_x3f(v___x_610_, v_ws_605_);
if (lean_obj_tag(v___x_611_) == 1)
{
lean_object* v_lib_612_; lean_object* v_pkg_613_; lean_object* v_val_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_facet_607_);
v_lib_612_ = lean_ctor_get(v_mod_606_, 0);
v_pkg_613_ = lean_ctor_get(v_lib_612_, 0);
v_val_614_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_628_ == 0)
{
v___x_616_ = v___x_611_;
v_isShared_617_ = v_isSharedCheck_628_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_val_614_);
lean_dec(v___x_611_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_628_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v_name_618_; lean_object* v_keyName_619_; uint8_t v_buildable_620_; lean_object* v_format_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v_name_618_ = lean_ctor_get(v_mod_606_, 1);
v_keyName_619_ = lean_ctor_get(v_pkg_613_, 2);
v_buildable_620_ = lean_ctor_get_uint8(v_val_614_, sizeof(void*)*4);
v_format_621_ = lean_ctor_get(v_val_614_, 3);
lean_inc_ref(v_format_621_);
lean_dec(v_val_614_);
lean_inc(v_name_618_);
lean_inc(v_keyName_619_);
v___x_622_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_622_, 0, v_keyName_619_);
lean_ctor_set(v___x_622_, 1, v_name_618_);
v___x_623_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
lean_ctor_set(v___x_623_, 1, v___x_609_);
lean_ctor_set(v___x_623_, 2, v_mod_606_);
lean_ctor_set(v___x_623_, 3, v___x_610_);
v___x_624_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v_format_621_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*2, v_buildable_620_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_624_);
v___x_626_ = v___x_616_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
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
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v___x_611_);
lean_dec(v___x_610_);
lean_dec_ref(v_mod_606_);
v___x_629_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0));
v___x_630_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v_facet_607_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
else
{
lean_object* v_lib_632_; lean_object* v_pkg_633_; lean_object* v_name_634_; lean_object* v_keyName_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
lean_dec(v_facet_607_);
v_lib_632_ = lean_ctor_get(v_mod_606_, 0);
v_pkg_633_ = lean_ctor_get(v_lib_632_, 0);
v_name_634_ = lean_ctor_get(v_mod_606_, 1);
v_keyName_635_ = lean_ctor_get(v_pkg_633_, 2);
v___f_636_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1));
v___x_637_ = l_Lake_Module_leanArtsFacet;
lean_inc(v_name_634_);
lean_inc(v_keyName_635_);
v___x_638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_638_, 0, v_keyName_635_);
lean_ctor_set(v___x_638_, 1, v_name_634_);
v___x_639_ = l_Lake_Module_keyword;
v___x_640_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
lean_ctor_set(v___x_640_, 2, v_mod_606_);
lean_ctor_set(v___x_640_, 3, v___x_637_);
v___x_641_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___f_636_);
lean_ctor_set_uint8(v___x_641_, sizeof(void*)*2, v___x_608_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___boxed(lean_object* v_ws_643_, lean_object* v_mod_644_, lean_object* v_facet_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_643_, v_mod_644_, v_facet_645_);
lean_dec_ref(v_ws_643_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(lean_object* v_pkg_647_, lean_object* v_name_648_, lean_object* v_facet_649_, lean_object* v_config_650_){
_start:
{
uint8_t v___x_651_; 
v___x_651_ = l_Lean_Name_isAnonymous(v_facet_649_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec_ref(v_config_650_);
lean_dec_ref(v_pkg_647_);
v___x_652_ = lean_alloc_ctor(20, 2, 0);
lean_ctor_set(v___x_652_, 0, v_name_648_);
lean_ctor_set(v___x_652_, 1, v_facet_649_);
v___x_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
return v___x_653_;
}
else
{
lean_object* v_format_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_facet_649_);
v_format_654_ = lean_ctor_get(v_config_650_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_config_650_);
if (v_isSharedCheck_663_ == 0)
{
lean_object* v_unused_664_; 
v_unused_664_ = lean_ctor_get(v_config_650_, 0);
lean_dec(v_unused_664_);
v___x_656_ = v_config_650_;
v_isShared_657_ = v_isSharedCheck_663_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_format_654_);
lean_dec(v_config_650_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_663_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 1, v_name_648_);
lean_ctor_set(v___x_656_, 0, v_pkg_647_);
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_pkg_647_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_name_648_);
v___x_659_ = v_reuseFailAlloc_662_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v_format_654_);
lean_ctor_set_uint8(v___x_660_, sizeof(void*)*2, v___x_651_);
v___x_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(lean_object* v_ws_668_, lean_object* v_pkg_669_, lean_object* v_target_670_, lean_object* v_decl_671_, lean_object* v_facet_672_){
_start:
{
lean_object* v_name_673_; lean_object* v_kind_674_; lean_object* v_config_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_732_; 
v_name_673_ = lean_ctor_get(v_decl_671_, 1);
v_kind_674_ = lean_ctor_get(v_decl_671_, 2);
v_config_675_ = lean_ctor_get(v_decl_671_, 3);
v_isSharedCheck_732_ = !lean_is_exclusive(v_decl_671_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; 
v_unused_733_ = lean_ctor_get(v_decl_671_, 0);
lean_dec(v_unused_733_);
v___x_677_ = v_decl_671_;
v_isShared_678_ = v_isSharedCheck_732_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_config_675_);
lean_inc(v_kind_674_);
lean_inc(v_name_673_);
lean_dec(v_decl_671_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_732_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
uint8_t v___x_679_; 
v___x_679_ = l_Lean_Name_isAnonymous(v_kind_674_);
if (v___x_679_ == 0)
{
uint8_t v___x_680_; lean_object* v___y_682_; uint8_t v___x_709_; 
lean_dec(v_target_670_);
v___x_680_ = 1;
v___x_709_ = l_Lean_Name_isAnonymous(v_facet_672_);
if (v___x_709_ == 0)
{
v___y_682_ = v_facet_672_;
goto v___jp_681_;
}
else
{
lean_object* v___x_710_; 
lean_dec(v_facet_672_);
v___x_710_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1));
v___y_682_ = v___x_710_;
goto v___jp_681_;
}
v___jp_681_:
{
lean_object* v_facetConfigs_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_facetConfigs_683_ = lean_ctor_get(v_ws_668_, 6);
lean_inc(v___y_682_);
lean_inc(v_kind_674_);
v___x_684_ = l_Lean_Name_append(v_kind_674_, v___y_682_);
v___x_685_ = l_Lake_FacetConfigMap_get_x3f(v___x_684_, v_facetConfigs_683_);
if (lean_obj_tag(v___x_685_) == 1)
{
lean_object* v_val_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_705_; 
lean_dec(v___y_682_);
v_val_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_705_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_705_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_val_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_705_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_keyName_690_; uint8_t v_buildable_691_; lean_object* v_format_692_; lean_object* v_tgt_693_; lean_object* v___x_694_; lean_object* v_info_696_; 
v_keyName_690_ = lean_ctor_get(v_pkg_669_, 2);
lean_inc(v_keyName_690_);
v_buildable_691_ = lean_ctor_get_uint8(v_val_686_, sizeof(void*)*4);
v_format_692_ = lean_ctor_get(v_val_686_, 3);
lean_inc_ref(v_format_692_);
lean_dec(v_val_686_);
lean_inc(v_name_673_);
v_tgt_693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_tgt_693_, 0, v_pkg_669_);
lean_ctor_set(v_tgt_693_, 1, v_name_673_);
lean_ctor_set(v_tgt_693_, 2, v_config_675_);
v___x_694_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_694_, 0, v_keyName_690_);
lean_ctor_set(v___x_694_, 1, v_name_673_);
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 1);
lean_ctor_set(v___x_677_, 3, v___x_684_);
lean_ctor_set(v___x_677_, 2, v_tgt_693_);
lean_ctor_set(v___x_677_, 1, v_kind_674_);
lean_ctor_set(v___x_677_, 0, v___x_694_);
v_info_696_ = v___x_677_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_694_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_kind_674_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v_tgt_693_);
lean_ctor_set(v_reuseFailAlloc_704_, 3, v___x_684_);
v_info_696_ = v_reuseFailAlloc_704_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_697_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_697_, 0, v_info_696_);
lean_ctor_set(v___x_697_, 1, v_format_692_);
lean_ctor_set_uint8(v___x_697_, sizeof(void*)*2, v_buildable_691_);
v___x_698_ = lean_unsigned_to_nat(1u);
v___x_699_ = lean_mk_empty_array_with_capacity(v___x_698_);
v___x_700_ = lean_array_push(v___x_699_, v___x_697_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_700_);
v___x_702_ = v___x_688_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_del_object(v___x_677_);
lean_dec(v_config_675_);
lean_dec(v_name_673_);
lean_dec_ref(v_pkg_669_);
v___x_706_ = l_Lean_Name_toString(v_kind_674_, v___x_680_);
v___x_707_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
lean_ctor_set(v___x_707_, 1, v___y_682_);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; 
lean_del_object(v___x_677_);
lean_dec(v_kind_674_);
lean_dec(v_name_673_);
v___x_711_ = l_unsafeCast___redArg(v_config_675_);
lean_dec(v_config_675_);
v___x_712_ = l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(v_pkg_669_, v_target_670_, v_facet_672_, v___x_711_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_712_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_731_; 
v_a_721_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_731_ == 0)
{
v___x_723_ = v___x_712_;
v_isShared_724_ = v_isSharedCheck_731_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_712_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_731_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
v___x_725_ = lean_unsigned_to_nat(1u);
v___x_726_ = lean_mk_empty_array_with_capacity(v___x_725_);
v___x_727_ = lean_array_push(v___x_726_, v_a_721_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 0, v___x_727_);
v___x_729_ = v___x_723_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___boxed(lean_object* v_ws_734_, lean_object* v_pkg_735_, lean_object* v_target_736_, lean_object* v_decl_737_, lean_object* v_facet_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_734_, v_pkg_735_, v_target_736_, v_decl_737_, v_facet_738_);
lean_dec_ref(v_ws_734_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(lean_object* v_ws_740_, lean_object* v_pkg_741_, lean_object* v_target_742_, lean_object* v_facet_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lake_Package_findTargetDecl_x3f(v_target_742_, v_pkg_741_);
if (lean_obj_tag(v___x_744_) == 1)
{
lean_object* v_val_745_; lean_object* v___x_746_; 
v_val_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_val_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_740_, v_pkg_741_, v_target_742_, v_val_745_, v_facet_743_);
return v___x_746_;
}
else
{
lean_object* v___x_747_; 
lean_dec(v___x_744_);
lean_inc_ref(v_pkg_741_);
lean_inc(v_target_742_);
v___x_747_ = l_Lake_Package_findTargetModule_x3f(v_target_742_, v_pkg_741_);
if (lean_obj_tag(v___x_747_) == 1)
{
lean_object* v_val_748_; lean_object* v___x_749_; 
lean_dec(v_target_742_);
lean_dec_ref(v_pkg_741_);
v_val_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_val_748_);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_740_, v_val_748_, v_facet_743_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_768_; 
v_a_758_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_768_ == 0)
{
v___x_760_ = v___x_749_;
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_749_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_766_; 
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_mk_empty_array_with_capacity(v___x_762_);
v___x_764_ = lean_array_push(v___x_763_, v_a_758_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v___x_764_);
v___x_766_ = v___x_760_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_baseName_769_; uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
lean_dec(v___x_747_);
lean_dec(v_facet_743_);
v_baseName_769_ = lean_ctor_get(v_pkg_741_, 1);
lean_inc(v_baseName_769_);
lean_dec_ref(v_pkg_741_);
v___x_770_ = 0;
v___x_771_ = l_Lean_Name_toString(v_target_742_, v___x_770_);
v___x_772_ = lean_alloc_ctor(17, 2, 0);
lean_ctor_set(v___x_772_, 0, v_baseName_769_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage___boxed(lean_object* v_ws_774_, lean_object* v_pkg_775_, lean_object* v_target_776_, lean_object* v_facet_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_774_, v_pkg_775_, v_target_776_, v_facet_777_);
lean_dec_ref(v_ws_774_);
return v_res_778_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_box(0);
v___x_780_ = l_unsafeCast___redArg(v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(lean_object* v_ws_781_, lean_object* v_pkg_782_, lean_object* v_as_783_, size_t v_i_784_, size_t v_stop_785_, lean_object* v_b_786_){
_start:
{
lean_object* v_a_788_; uint8_t v___x_792_; 
v___x_792_ = lean_usize_dec_eq(v_i_784_, v_stop_785_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_793_ = lean_array_uget_borrowed(v_as_783_, v_i_784_);
v___x_794_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0);
lean_inc(v___x_793_);
lean_inc_ref(v_pkg_782_);
v___x_795_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_781_, v_pkg_782_, v___x_793_, v___x_794_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_dec_ref(v_b_786_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_dec_ref(v_pkg_782_);
return v___x_795_;
}
else
{
lean_object* v_a_796_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref_known(v___x_795_, 1);
v_a_788_ = v_a_796_;
goto v___jp_787_;
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_798_; 
v_a_797_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_795_, 1);
v___x_798_ = l_Array_append___redArg(v_b_786_, v_a_797_);
lean_dec(v_a_797_);
v_a_788_ = v___x_798_;
goto v___jp_787_;
}
}
else
{
lean_object* v___x_799_; 
lean_dec_ref(v_pkg_782_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v_b_786_);
return v___x_799_;
}
v___jp_787_:
{
size_t v___x_789_; size_t v___x_790_; 
v___x_789_ = ((size_t)1ULL);
v___x_790_ = lean_usize_add(v_i_784_, v___x_789_);
v_i_784_ = v___x_790_;
v_b_786_ = v_a_788_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___boxed(lean_object* v_ws_800_, lean_object* v_pkg_801_, lean_object* v_as_802_, lean_object* v_i_803_, lean_object* v_stop_804_, lean_object* v_b_805_){
_start:
{
size_t v_i_boxed_806_; size_t v_stop_boxed_807_; lean_object* v_res_808_; 
v_i_boxed_806_ = lean_unbox_usize(v_i_803_);
lean_dec(v_i_803_);
v_stop_boxed_807_ = lean_unbox_usize(v_stop_804_);
lean_dec(v_stop_804_);
v_res_808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(v_ws_800_, v_pkg_801_, v_as_802_, v_i_boxed_806_, v_stop_boxed_807_, v_b_805_);
lean_dec_ref(v_as_802_);
lean_dec_ref(v_ws_800_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(lean_object* v_ws_813_, lean_object* v_pkg_814_){
_start:
{
lean_object* v_defaultTargets_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_defaultTargets_815_ = lean_ctor_get(v_pkg_814_, 17);
lean_inc_ref(v_defaultTargets_815_);
v___x_816_ = lean_unsigned_to_nat(0u);
v___x_817_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0));
v___x_818_ = lean_array_get_size(v_defaultTargets_815_);
v___x_819_ = lean_nat_dec_lt(v___x_816_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; 
lean_dec_ref(v_defaultTargets_815_);
lean_dec_ref(v_pkg_814_);
v___x_820_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1));
return v___x_820_;
}
else
{
size_t v___x_821_; size_t v___x_822_; lean_object* v___x_823_; 
v___x_821_ = ((size_t)0ULL);
v___x_822_ = lean_usize_of_nat(v___x_818_);
v___x_823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(v_ws_813_, v_pkg_814_, v_defaultTargets_815_, v___x_821_, v___x_822_, v___x_817_);
lean_dec_ref(v_defaultTargets_815_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___boxed(lean_object* v_ws_824_, lean_object* v_pkg_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_824_, v_pkg_825_);
lean_dec_ref(v_ws_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(lean_object* v_ws_828_, lean_object* v_pkg_829_, lean_object* v_facet_830_){
_start:
{
uint8_t v___x_831_; 
v___x_831_ = l_Lean_Name_isAnonymous(v_facet_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_832_ = l_Lake_Package_keyword;
lean_inc(v_facet_830_);
v___x_833_ = l_Lean_Name_append(v___x_832_, v_facet_830_);
v___x_834_ = l_Lake_Workspace_findPackageFacetConfig_x3f(v___x_833_, v_ws_828_);
if (lean_obj_tag(v___x_834_) == 1)
{
lean_object* v_val_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_851_; 
lean_dec(v_facet_830_);
v_val_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_851_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_851_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_val_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_851_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v_keyName_839_; uint8_t v_buildable_840_; lean_object* v_format_841_; lean_object* v___x_843_; 
v_keyName_839_ = lean_ctor_get(v_pkg_829_, 2);
v_buildable_840_ = lean_ctor_get_uint8(v_val_835_, sizeof(void*)*4);
v_format_841_ = lean_ctor_get(v_val_835_, 3);
lean_inc_ref(v_format_841_);
lean_dec(v_val_835_);
lean_inc(v_keyName_839_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v_keyName_839_);
v___x_843_ = v___x_837_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_keyName_839_);
v___x_843_ = v_reuseFailAlloc_850_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_844_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
lean_ctor_set(v___x_844_, 1, v___x_832_);
lean_ctor_set(v___x_844_, 2, v_pkg_829_);
lean_ctor_set(v___x_844_, 3, v___x_833_);
v___x_845_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v_format_841_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*2, v_buildable_840_);
v___x_846_ = lean_unsigned_to_nat(1u);
v___x_847_ = lean_mk_empty_array_with_capacity(v___x_846_);
v___x_848_ = lean_array_push(v___x_847_, v___x_845_);
v___x_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
}
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
lean_dec(v___x_834_);
lean_dec(v___x_833_);
lean_dec_ref(v_pkg_829_);
v___x_852_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0));
v___x_853_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
lean_ctor_set(v___x_853_, 1, v_facet_830_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
else
{
lean_object* v___x_855_; 
lean_dec(v_facet_830_);
v___x_855_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_828_, v_pkg_829_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___boxed(lean_object* v_ws_856_, lean_object* v_pkg_857_, lean_object* v_facet_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_856_, v_pkg_857_, v_facet_858_);
lean_dec_ref(v_ws_856_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(lean_object* v_ws_860_, lean_object* v_target_861_, lean_object* v_facet_862_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = l_Lake_Workspace_findTargetDecl_x3f(v_target_861_, v_ws_860_);
if (lean_obj_tag(v___x_888_) == 1)
{
lean_object* v_val_889_; lean_object* v_fst_890_; lean_object* v_snd_891_; lean_object* v___x_892_; 
v_val_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_val_889_);
lean_dec_ref_known(v___x_888_, 1);
v_fst_890_ = lean_ctor_get(v_val_889_, 0);
lean_inc(v_fst_890_);
v_snd_891_ = lean_ctor_get(v_val_889_, 1);
lean_inc(v_snd_891_);
lean_dec(v_val_889_);
v___x_892_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_860_, v_fst_890_, v_target_861_, v_snd_891_, v_facet_862_);
return v___x_892_;
}
else
{
lean_object* v_packages_893_; lean_object* v___x_894_; size_t v_sz_895_; size_t v___x_896_; lean_object* v___x_897_; lean_object* v_fst_898_; 
lean_dec(v___x_888_);
v_packages_893_ = lean_ctor_get(v_ws_860_, 4);
v___x_894_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v_sz_895_ = lean_array_size(v_packages_893_);
v___x_896_ = ((size_t)0ULL);
v___x_897_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v_target_861_, v_packages_893_, v_sz_895_, v___x_896_, v___x_894_);
v_fst_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_fst_898_);
lean_dec_ref(v___x_897_);
if (lean_obj_tag(v_fst_898_) == 0)
{
goto v___jp_863_;
}
else
{
lean_object* v_val_899_; 
v_val_899_ = lean_ctor_get(v_fst_898_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v_fst_898_, 1);
if (lean_obj_tag(v_val_899_) == 1)
{
lean_object* v_val_900_; lean_object* v___x_901_; 
lean_dec(v_target_861_);
v_val_900_ = lean_ctor_get(v_val_899_, 0);
lean_inc(v_val_900_);
lean_dec_ref_known(v_val_899_, 1);
v___x_901_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_860_, v_val_900_, v_facet_862_);
return v___x_901_;
}
else
{
lean_dec(v_val_899_);
goto v___jp_863_;
}
}
}
v___jp_863_:
{
lean_object* v___x_864_; 
lean_inc(v_target_861_);
v___x_864_ = l_Lake_Workspace_findTargetModule_x3f(v_target_861_, v_ws_860_);
if (lean_obj_tag(v___x_864_) == 1)
{
lean_object* v_val_865_; lean_object* v___x_866_; 
lean_dec(v_target_861_);
v_val_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_val_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_860_, v_val_865_, v_facet_862_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_885_; 
v_a_875_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_885_ == 0)
{
v___x_877_ = v___x_866_;
v_isShared_878_ = v_isSharedCheck_885_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_866_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_885_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v___x_879_ = lean_unsigned_to_nat(1u);
v___x_880_ = lean_mk_empty_array_with_capacity(v___x_879_);
v___x_881_ = lean_array_push(v___x_880_, v_a_875_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_881_);
v___x_883_ = v___x_877_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_881_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
else
{
lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec(v___x_864_);
lean_dec(v_facet_862_);
v___x_886_ = lean_alloc_ctor(15, 1, 0);
lean_ctor_set(v___x_886_, 0, v_target_861_);
v___x_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
return v___x_887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace___boxed(lean_object* v_ws_902_, lean_object* v_target_903_, lean_object* v_facet_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(v_ws_902_, v_target_903_, v_facet_904_);
lean_dec_ref(v_ws_902_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0));
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___boxed(lean_object* v___dummy_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
return v_res_911_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(lean_object* v_s_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___boxed(lean_object* v_s_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(v_s_915_);
lean_dec_ref(v_s_915_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(lean_object* v_spec_917_, lean_object* v___x_918_, lean_object* v___x_919_, lean_object* v_a_920_, lean_object* v_b_921_){
_start:
{
lean_object* v_it_923_; lean_object* v_startInclusive_924_; lean_object* v_endExclusive_925_; 
if (lean_obj_tag(v_a_920_) == 0)
{
lean_object* v_currPos_929_; lean_object* v_searcher_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_953_; 
v_currPos_929_ = lean_ctor_get(v_a_920_, 0);
v_searcher_930_ = lean_ctor_get(v_a_920_, 1);
v_isSharedCheck_953_ = !lean_is_exclusive(v_a_920_);
if (v_isSharedCheck_953_ == 0)
{
v___x_932_ = v_a_920_;
v_isShared_933_ = v_isSharedCheck_953_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_searcher_930_);
lean_inc(v_currPos_929_);
lean_dec(v_a_920_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_953_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
uint8_t v_decide_934_; 
v_decide_934_ = lean_nat_dec_eq(v_searcher_930_, v___x_919_);
if (v_decide_934_ == 0)
{
uint32_t v___x_935_; uint32_t v___x_936_; uint8_t v___x_937_; 
v___x_935_ = 47;
v___x_936_ = lean_string_utf8_get_fast(v_spec_917_, v_searcher_930_);
v___x_937_ = lean_uint32_dec_eq(v___x_936_, v___x_935_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_938_ = lean_string_utf8_next_fast(v_spec_917_, v_searcher_930_);
lean_dec(v_searcher_930_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 1, v___x_938_);
v___x_940_ = v___x_932_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_currPos_929_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v___x_938_);
v___x_940_ = v_reuseFailAlloc_942_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
v_a_920_ = v___x_940_;
goto _start;
}
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v_slice_946_; lean_object* v_nextIt_948_; 
v___x_943_ = lean_string_utf8_next_fast(v_spec_917_, v_searcher_930_);
v___x_944_ = lean_nat_sub(v___x_943_, v_searcher_930_);
v___x_945_ = lean_nat_add(v_searcher_930_, v___x_944_);
lean_dec(v___x_944_);
v_slice_946_ = l_String_Slice_subslice_x21(v___x_918_, v_currPos_929_, v_searcher_930_);
lean_inc(v___x_945_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 1, v___x_945_);
lean_ctor_set(v___x_932_, 0, v___x_945_);
v_nextIt_948_ = v___x_932_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_945_);
v_nextIt_948_ = v_reuseFailAlloc_951_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v_startInclusive_949_; lean_object* v_endExclusive_950_; 
v_startInclusive_949_ = lean_ctor_get(v_slice_946_, 0);
lean_inc(v_startInclusive_949_);
v_endExclusive_950_ = lean_ctor_get(v_slice_946_, 1);
lean_inc(v_endExclusive_950_);
lean_dec_ref(v_slice_946_);
v_it_923_ = v_nextIt_948_;
v_startInclusive_924_ = v_startInclusive_949_;
v_endExclusive_925_ = v_endExclusive_950_;
goto v___jp_922_;
}
}
}
else
{
lean_object* v___x_952_; 
lean_del_object(v___x_932_);
lean_dec(v_searcher_930_);
v___x_952_ = lean_box(1);
lean_inc(v___x_919_);
v_it_923_ = v___x_952_;
v_startInclusive_924_ = v_currPos_929_;
v_endExclusive_925_ = v___x_919_;
goto v___jp_922_;
}
}
}
else
{
lean_dec(v___x_919_);
lean_dec_ref(v_spec_917_);
return v_b_921_;
}
v___jp_922_:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
lean_inc_ref(v_spec_917_);
v___x_926_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_926_, 0, v_spec_917_);
lean_ctor_set(v___x_926_, 1, v_startInclusive_924_);
lean_ctor_set(v___x_926_, 2, v_endExclusive_925_);
v___x_927_ = lean_array_push(v_b_921_, v___x_926_);
v_a_920_ = v_it_923_;
v_b_921_ = v___x_927_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg___boxed(lean_object* v_spec_954_, lean_object* v___x_955_, lean_object* v___x_956_, lean_object* v_a_957_, lean_object* v_b_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_954_, v___x_955_, v___x_956_, v_a_957_, v_b_958_);
lean_dec_ref(v___x_955_);
return v_res_959_;
}
}
static lean_object* _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_964_ = lean_string_utf8_byte_size(v___x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(lean_object* v_ws_965_, lean_object* v_spec_966_, lean_object* v_facet_967_, uint8_t v_isMaybePath_968_, uint8_t v_explicit_969_){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_976_ = lean_unsigned_to_nat(0u);
v___x_977_ = lean_string_utf8_byte_size(v_spec_966_);
lean_inc_ref_n(v_spec_966_, 2);
v___x_978_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_978_, 0, v_spec_966_);
lean_ctor_set(v___x_978_, 1, v___x_976_);
lean_ctor_set(v___x_978_, 2, v___x_977_);
v___x_979_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
v___x_980_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0));
v___x_981_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_966_, v___x_978_, v___x_977_, v___x_979_, v___x_980_);
lean_dec_ref_known(v___x_978_, 3);
v___x_982_ = lean_array_to_list(v___x_981_);
if (lean_obj_tag(v___x_982_) == 1)
{
lean_object* v_tail_983_; 
v_tail_983_ = lean_ctor_get(v___x_982_, 1);
lean_inc(v_tail_983_);
if (lean_obj_tag(v_tail_983_) == 0)
{
lean_object* v_head_984_; lean_object* v_str_985_; lean_object* v_startInclusive_986_; lean_object* v_endExclusive_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
lean_dec_ref(v_spec_966_);
v_head_984_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_head_984_);
lean_dec_ref_known(v___x_982_, 2);
v_str_985_ = lean_ctor_get(v_head_984_, 0);
lean_inc_ref(v_str_985_);
v_startInclusive_986_ = lean_ctor_get(v_head_984_, 1);
lean_inc(v_startInclusive_986_);
v_endExclusive_987_ = lean_ctor_get(v_head_984_, 2);
lean_inc(v_endExclusive_987_);
lean_dec(v_head_984_);
v___x_988_ = lean_nat_sub(v_endExclusive_987_, v_startInclusive_986_);
v___x_989_ = lean_nat_dec_eq(v___x_988_, v___x_976_);
lean_dec(v___x_988_);
if (v___x_989_ == 0)
{
if (v_explicit_969_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_990_ = lean_string_utf8_extract_fast(v_str_985_, v_startInclusive_986_, v_endExclusive_987_);
lean_dec(v_endExclusive_987_);
lean_dec(v_startInclusive_986_);
lean_dec_ref(v_str_985_);
v___x_991_ = l_Lake_stringToLegalOrSimpleName(v___x_990_);
v___x_992_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(v_ws_965_, v___x_991_, v_facet_967_);
return v___x_992_;
}
else
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_string_utf8_extract_fast(v_str_985_, v_startInclusive_986_, v_endExclusive_987_);
lean_dec(v_endExclusive_987_);
lean_dec(v_startInclusive_986_);
lean_dec_ref(v_str_985_);
v___x_994_ = l_Lake_parsePackageSpec(v_ws_965_, v___x_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec(v_facet_967_);
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1004_; 
v_a_1003_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_994_, 1);
v___x_1004_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_965_, v_a_1003_, v_facet_967_);
return v___x_1004_;
}
}
}
else
{
lean_object* v_packages_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec(v_endExclusive_987_);
lean_dec(v_startInclusive_986_);
lean_dec_ref(v_str_985_);
v_packages_1005_ = lean_ctor_get(v_ws_965_, 4);
v___x_1006_ = lean_array_fget_borrowed(v_packages_1005_, v___x_976_);
lean_inc(v___x_1006_);
v___x_1007_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_965_, v___x_1006_, v_facet_967_);
return v___x_1007_;
}
}
else
{
lean_object* v_tail_1008_; 
v_tail_1008_ = lean_ctor_get(v_tail_983_, 1);
if (lean_obj_tag(v_tail_1008_) == 0)
{
lean_object* v_head_1009_; lean_object* v_head_1010_; lean_object* v_str_1011_; lean_object* v_startInclusive_1012_; lean_object* v_endExclusive_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_dec_ref(v_spec_966_);
v_head_1009_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_head_1009_);
lean_dec_ref_known(v___x_982_, 2);
v_head_1010_ = lean_ctor_get(v_tail_983_, 0);
lean_inc(v_head_1010_);
lean_dec_ref_known(v_tail_983_, 2);
v_str_1011_ = lean_ctor_get(v_head_1009_, 0);
lean_inc_ref(v_str_1011_);
v_startInclusive_1012_ = lean_ctor_get(v_head_1009_, 1);
lean_inc(v_startInclusive_1012_);
v_endExclusive_1013_ = lean_ctor_get(v_head_1009_, 2);
lean_inc(v_endExclusive_1013_);
lean_dec(v_head_1009_);
v___x_1014_ = lean_string_utf8_extract_fast(v_str_1011_, v_startInclusive_1012_, v_endExclusive_1013_);
lean_dec(v_endExclusive_1013_);
lean_dec(v_startInclusive_1012_);
lean_dec_ref(v_str_1011_);
v___x_1015_ = l_Lake_parsePackageSpec(v_ws_965_, v___x_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v_head_1010_);
lean_dec(v_facet_967_);
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1015_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1015_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1072_; 
v_a_1024_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1026_ = v___x_1015_;
v_isShared_1027_ = v_isSharedCheck_1072_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1015_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1072_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v_str_1028_; lean_object* v_startInclusive_1029_; lean_object* v_endExclusive_1030_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_str_1028_ = lean_ctor_get(v_head_1010_, 0);
lean_inc_ref(v_str_1028_);
v_startInclusive_1029_ = lean_ctor_get(v_head_1010_, 1);
lean_inc(v_startInclusive_1029_);
v_endExclusive_1030_ = lean_ctor_get(v_head_1010_, 2);
lean_inc(v_endExclusive_1030_);
v___x_1035_ = lean_nat_sub(v_endExclusive_1030_, v_startInclusive_1029_);
v___x_1036_ = lean_nat_dec_eq(v___x_1035_, v___x_976_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1037_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_1038_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2, &l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2);
v___x_1039_ = lean_nat_dec_le(v___x_1038_, v___x_1035_);
lean_dec(v___x_1035_);
if (v___x_1039_ == 0)
{
lean_del_object(v___x_1026_);
lean_dec(v_head_1010_);
goto v___jp_1031_;
}
else
{
uint8_t v___x_1040_; 
v___x_1040_ = lean_string_memcmp(v_str_1028_, v___x_1037_, v_startInclusive_1029_, v___x_976_, v___x_1038_);
if (v___x_1040_ == 0)
{
lean_del_object(v___x_1026_);
lean_dec(v_head_1010_);
goto v___jp_1031_;
}
else
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1041_ = lean_unsigned_to_nat(1u);
v___x_1042_ = l_String_Slice_Pos_nextn(v_head_1010_, v___x_976_, v___x_1041_);
lean_dec(v_head_1010_);
v___x_1043_ = lean_nat_add(v_startInclusive_1029_, v___x_1042_);
lean_dec(v___x_1042_);
lean_dec(v_startInclusive_1029_);
v___x_1044_ = lean_string_utf8_extract_fast(v_str_1028_, v___x_1043_, v_endExclusive_1030_);
lean_dec(v_endExclusive_1030_);
lean_dec(v___x_1043_);
lean_dec_ref(v_str_1028_);
v___x_1045_ = l_String_toName(v___x_1044_);
lean_inc(v___x_1045_);
v___x_1046_ = l_Lake_Package_findTargetModule_x3f(v___x_1045_, v_a_1024_);
if (lean_obj_tag(v___x_1046_) == 1)
{
lean_object* v_val_1047_; lean_object* v___x_1048_; 
lean_dec(v___x_1045_);
lean_del_object(v___x_1026_);
v_val_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_val_1047_);
lean_dec_ref_known(v___x_1046_, 1);
v___x_1048_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_965_, v_val_1047_, v_facet_967_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1048_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1066_; 
v_a_1057_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1059_ = v___x_1048_;
v_isShared_1060_ = v_isSharedCheck_1066_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1048_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1066_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1064_; 
v___x_1061_ = lean_mk_empty_array_with_capacity(v___x_1041_);
v___x_1062_ = lean_array_push(v___x_1061_, v_a_1057_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1062_);
v___x_1064_ = v___x_1059_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1062_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
lean_dec(v___x_1046_);
lean_dec(v_facet_967_);
v___x_1067_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1045_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set_tag(v___x_1026_, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1067_);
v___x_1069_ = v___x_1026_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
else
{
lean_object* v___x_1071_; 
lean_dec(v___x_1035_);
lean_dec(v_endExclusive_1030_);
lean_dec(v_startInclusive_1029_);
lean_dec_ref(v_str_1028_);
lean_del_object(v___x_1026_);
lean_dec(v_head_1010_);
v___x_1071_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_965_, v_a_1024_, v_facet_967_);
return v___x_1071_;
}
v___jp_1031_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_string_utf8_extract_fast(v_str_1028_, v_startInclusive_1029_, v_endExclusive_1030_);
lean_dec(v_endExclusive_1030_);
lean_dec(v_startInclusive_1029_);
lean_dec_ref(v_str_1028_);
v___x_1033_ = l_Lake_stringToLegalOrSimpleName(v___x_1032_);
v___x_1034_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_965_, v_a_1024_, v___x_1033_, v_facet_967_);
return v___x_1034_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_983_, 2);
lean_dec_ref_known(v___x_982_, 2);
lean_dec(v_facet_967_);
goto v___jp_970_;
}
}
}
else
{
lean_dec(v___x_982_);
lean_dec(v_facet_967_);
goto v___jp_970_;
}
v___jp_970_:
{
if (v_isMaybePath_968_ == 0)
{
uint32_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_971_ = 47;
v___x_972_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_972_, 0, v_spec_966_);
lean_ctor_set_uint32(v___x_972_, sizeof(void*)*1, v___x_971_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
else
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v___x_974_, 0, v_spec_966_);
v___x_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___boxed(lean_object* v_ws_1073_, lean_object* v_spec_1074_, lean_object* v_facet_1075_, lean_object* v_isMaybePath_1076_, lean_object* v_explicit_1077_){
_start:
{
uint8_t v_isMaybePath_boxed_1078_; uint8_t v_explicit_boxed_1079_; lean_object* v_res_1080_; 
v_isMaybePath_boxed_1078_ = lean_unbox(v_isMaybePath_1076_);
v_explicit_boxed_1079_ = lean_unbox(v_explicit_1077_);
v_res_1080_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1073_, v_spec_1074_, v_facet_1075_, v_isMaybePath_boxed_1078_, v_explicit_boxed_1079_);
lean_dec_ref(v_ws_1073_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(lean_object* v_spec_1081_, lean_object* v___x_1082_, lean_object* v___x_1083_, lean_object* v_inst_1084_, lean_object* v_R_1085_, lean_object* v_a_1086_, lean_object* v_b_1087_){
_start:
{
lean_object* v___x_1088_; 
v___x_1088_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_1081_, v___x_1082_, v___x_1083_, v_a_1086_, v_b_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___boxed(lean_object* v_spec_1089_, lean_object* v___x_1090_, lean_object* v___x_1091_, lean_object* v_inst_1092_, lean_object* v_R_1093_, lean_object* v_a_1094_, lean_object* v_b_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(v_spec_1089_, v___x_1090_, v___x_1091_, v_inst_1092_, v_R_1093_, v_a_1094_, v_b_1095_);
lean_dec_ref(v___x_1090_);
return v_res_1096_;
}
}
static lean_object* _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1099_ = lean_string_utf8_byte_size(v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(lean_object* v_ws_1100_, lean_object* v_spec_1101_, lean_object* v_facet_1102_){
_start:
{
uint8_t v___y_1105_; uint8_t v___y_1106_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v___x_1221_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1222_ = lean_string_utf8_byte_size(v_spec_1101_);
v___x_1223_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1, &l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1);
v___x_1224_ = lean_nat_dec_le(v___x_1223_, v___x_1222_);
if (v___x_1224_ == 0)
{
goto v___jp_1185_;
}
else
{
lean_object* v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(0u);
v___x_1226_ = lean_string_memcmp(v_spec_1101_, v___x_1221_, v___x_1225_, v___x_1225_, v___x_1223_);
if (v___x_1226_ == 0)
{
goto v___jp_1185_;
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; uint8_t v___x_1231_; lean_object* v___x_1232_; 
v___x_1227_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_spec_1101_);
v___x_1228_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1228_, 0, v_spec_1101_);
lean_ctor_set(v___x_1228_, 1, v___x_1225_);
lean_ctor_set(v___x_1228_, 2, v___x_1222_);
v___x_1229_ = l_String_Slice_Pos_nextn(v___x_1228_, v___x_1225_, v___x_1227_);
lean_dec_ref_known(v___x_1228_, 3);
v___x_1230_ = lean_string_utf8_extract_fast(v_spec_1101_, v___x_1229_, v___x_1222_);
lean_dec(v___x_1229_);
lean_dec_ref(v_spec_1101_);
v___x_1231_ = 0;
v___x_1232_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1100_, v___x_1230_, v_facet_1102_, v___x_1231_, v___x_1224_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1232_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1232_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set_tag(v___x_1235_, 1);
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
v_a_1241_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1232_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1232_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
lean_ctor_set_tag(v___x_1243_, 0);
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
v___jp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
lean_inc_ref(v_spec_1101_);
v___x_1107_ = l_Lake_resolvePath(v_spec_1101_);
v___x_1108_ = lean_string_utf8_byte_size(v___x_1107_);
v___x_1109_ = lean_unsigned_to_nat(0u);
v___x_1110_ = lean_nat_dec_eq(v___x_1108_, v___x_1109_);
if (v___x_1110_ == 0)
{
uint8_t v___x_1111_; 
v___x_1111_ = l_System_FilePath_isDir(v___x_1107_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lake_Workspace_findModuleBySrc_x3f(v___x_1107_, v_ws_1100_);
if (lean_obj_tag(v___x_1112_) == 1)
{
lean_object* v_val_1113_; lean_object* v___x_1114_; 
lean_dec_ref(v_spec_1101_);
v_val_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_val_1113_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1114_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_1100_, v_val_1113_, v_facet_1102_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1114_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1114_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set_tag(v___x_1117_, 1);
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1133_; 
v_a_1123_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1125_ = v___x_1114_;
v_isShared_1126_ = v_isSharedCheck_1133_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1114_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1133_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1131_; 
v___x_1127_ = lean_unsigned_to_nat(1u);
v___x_1128_ = lean_mk_empty_array_with_capacity(v___x_1127_);
v___x_1129_ = lean_array_push(v___x_1128_, v_a_1123_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set_tag(v___x_1125_, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1129_);
v___x_1131_ = v___x_1125_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
else
{
lean_object* v___x_1134_; 
lean_dec(v___x_1112_);
v___x_1134_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1100_, v_spec_1101_, v_facet_1102_, v___y_1105_, v___x_1111_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set_tag(v___x_1137_, 1);
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1134_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1134_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 0);
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
}
else
{
lean_object* v___x_1151_; 
lean_dec_ref(v___x_1107_);
v___x_1151_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1100_, v_spec_1101_, v_facet_1102_, v___y_1106_, v___y_1106_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 1);
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v_a_1160_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1151_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1151_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set_tag(v___x_1162_, 0);
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
else
{
lean_object* v___x_1168_; 
lean_dec_ref(v___x_1107_);
v___x_1168_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1100_, v_spec_1101_, v_facet_1102_, v___y_1105_, v___y_1106_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1168_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1168_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set_tag(v___x_1171_, 1);
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
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
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
v_a_1177_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1168_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1168_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 0);
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
}
v___jp_1185_:
{
uint8_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; 
v___x_1186_ = 1;
v___x_1187_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_1188_ = lean_string_utf8_byte_size(v_spec_1101_);
v___x_1189_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2, &l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2);
v___x_1190_ = lean_nat_dec_le(v___x_1189_, v___x_1188_);
if (v___x_1190_ == 0)
{
v___y_1105_ = v___x_1186_;
v___y_1106_ = v___x_1190_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1191_; uint8_t v___x_1192_; 
v___x_1191_ = lean_unsigned_to_nat(0u);
v___x_1192_ = lean_string_memcmp(v_spec_1101_, v___x_1187_, v___x_1191_, v___x_1191_, v___x_1189_);
if (v___x_1192_ == 0)
{
v___y_1105_ = v___x_1186_;
v___y_1106_ = v___x_1192_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v_mod_1197_; lean_object* v___x_1198_; 
v___x_1193_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_spec_1101_);
v___x_1194_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1194_, 0, v_spec_1101_);
lean_ctor_set(v___x_1194_, 1, v___x_1191_);
lean_ctor_set(v___x_1194_, 2, v___x_1188_);
v___x_1195_ = l_String_Slice_Pos_nextn(v___x_1194_, v___x_1191_, v___x_1193_);
lean_dec_ref_known(v___x_1194_, 3);
v___x_1196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1196_, 0, v_spec_1101_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
lean_ctor_set(v___x_1196_, 2, v___x_1188_);
v_mod_1197_ = l_String_Slice_toName(v___x_1196_);
lean_dec_ref_known(v___x_1196_, 3);
lean_inc(v_mod_1197_);
v___x_1198_ = l_Lake_Workspace_findTargetModule_x3f(v_mod_1197_, v_ws_1100_);
if (lean_obj_tag(v___x_1198_) == 1)
{
lean_object* v_val_1199_; lean_object* v___x_1200_; 
lean_dec(v_mod_1197_);
v_val_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_val_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v___x_1200_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_1100_, v_val_1199_, v_facet_1102_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
lean_ctor_set_tag(v___x_1203_, 1);
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1218_; 
v_a_1209_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1211_ = v___x_1200_;
v_isShared_1212_ = v_isSharedCheck_1218_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1200_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1218_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1213_ = lean_mk_empty_array_with_capacity(v___x_1193_);
v___x_1214_ = lean_array_push(v___x_1213_, v_a_1209_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set_tag(v___x_1211_, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1214_);
v___x_1216_ = v___x_1211_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
else
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
lean_dec(v___x_1198_);
lean_dec(v_facet_1102_);
v___x_1219_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1219_, 0, v_mod_1197_);
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___boxed(lean_object* v_ws_1249_, lean_object* v_spec_1250_, lean_object* v_facet_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1249_, v_spec_1250_, v_facet_1251_);
lean_dec_ref(v_ws_1249_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec(lean_object* v_ws_1254_, lean_object* v_spec_1255_){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1263_ = lean_unsigned_to_nat(0u);
v___x_1264_ = lean_string_utf8_byte_size(v_spec_1255_);
lean_inc_ref_n(v_spec_1255_, 2);
v___x_1265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1265_, 0, v_spec_1255_);
lean_ctor_set(v___x_1265_, 1, v___x_1263_);
lean_ctor_set(v___x_1265_, 2, v___x_1264_);
v___x_1266_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
v___x_1267_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0));
v___x_1268_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_1255_, v___x_1265_, v___x_1264_, v___x_1266_, v___x_1267_);
lean_dec_ref_known(v___x_1265_, 3);
v___x_1269_ = lean_array_to_list(v___x_1268_);
if (lean_obj_tag(v___x_1269_) == 1)
{
lean_object* v_tail_1270_; 
v_tail_1270_ = lean_ctor_get(v___x_1269_, 1);
lean_inc(v_tail_1270_);
if (lean_obj_tag(v_tail_1270_) == 0)
{
lean_object* v_head_1271_; lean_object* v_str_1272_; lean_object* v_startInclusive_1273_; lean_object* v_endExclusive_1274_; lean_object* v___x_1275_; lean_object* v_targetName_1276_; lean_object* v___x_1277_; 
v_head_1271_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_head_1271_);
lean_dec_ref_known(v___x_1269_, 2);
v_str_1272_ = lean_ctor_get(v_head_1271_, 0);
lean_inc_ref(v_str_1272_);
v_startInclusive_1273_ = lean_ctor_get(v_head_1271_, 1);
lean_inc(v_startInclusive_1273_);
v_endExclusive_1274_ = lean_ctor_get(v_head_1271_, 2);
lean_inc(v_endExclusive_1274_);
lean_dec(v_head_1271_);
v___x_1275_ = lean_string_utf8_extract_fast(v_str_1272_, v_startInclusive_1273_, v_endExclusive_1274_);
lean_dec(v_endExclusive_1274_);
lean_dec(v_startInclusive_1273_);
lean_dec_ref(v_str_1272_);
v_targetName_1276_ = l_Lake_stringToLegalOrSimpleName(v___x_1275_);
v___x_1277_ = l_Lake_Workspace_findLeanExe_x3f(v_targetName_1276_, v_ws_1254_);
lean_dec(v_targetName_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = lean_alloc_ctor(21, 1, 0);
lean_ctor_set(v___x_1278_, 0, v_spec_1255_);
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
else
{
lean_object* v_val_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec_ref(v_spec_1255_);
v_val_1280_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1277_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_val_1280_);
lean_dec(v___x_1277_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_val_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
else
{
lean_object* v_head_1288_; lean_object* v_head_1289_; lean_object* v_tail_1290_; lean_object* v_str_1292_; lean_object* v_startInclusive_1293_; lean_object* v_endExclusive_1294_; 
v_head_1288_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_head_1288_);
lean_dec_ref_known(v___x_1269_, 2);
v_head_1289_ = lean_ctor_get(v_tail_1270_, 0);
lean_inc(v_head_1289_);
v_tail_1290_ = lean_ctor_get(v_tail_1270_, 1);
lean_inc(v_tail_1290_);
lean_dec_ref_known(v_tail_1270_, 2);
if (lean_obj_tag(v_tail_1290_) == 0)
{
lean_object* v_str_1332_; lean_object* v_startInclusive_1333_; lean_object* v_endExclusive_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v_str_1332_ = lean_ctor_get(v_head_1288_, 0);
lean_inc_ref(v_str_1332_);
v_startInclusive_1333_ = lean_ctor_get(v_head_1288_, 1);
lean_inc(v_startInclusive_1333_);
v_endExclusive_1334_ = lean_ctor_get(v_head_1288_, 2);
lean_inc(v_endExclusive_1334_);
v___x_1335_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1336_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1, &l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1);
v___x_1337_ = lean_nat_sub(v_endExclusive_1334_, v_startInclusive_1333_);
v___x_1338_ = lean_nat_dec_le(v___x_1336_, v___x_1337_);
lean_dec(v___x_1337_);
if (v___x_1338_ == 0)
{
lean_dec(v_head_1288_);
v_str_1292_ = v_str_1332_;
v_startInclusive_1293_ = v_startInclusive_1333_;
v_endExclusive_1294_ = v_endExclusive_1334_;
goto v___jp_1291_;
}
else
{
uint8_t v___x_1339_; 
v___x_1339_ = lean_string_memcmp(v_str_1332_, v___x_1335_, v_startInclusive_1333_, v___x_1263_, v___x_1336_);
if (v___x_1339_ == 0)
{
lean_dec(v_head_1288_);
v_str_1292_ = v_str_1332_;
v_startInclusive_1293_ = v_startInclusive_1333_;
v_endExclusive_1294_ = v_endExclusive_1334_;
goto v___jp_1291_;
}
else
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1340_ = lean_unsigned_to_nat(1u);
v___x_1341_ = l_String_Slice_Pos_nextn(v_head_1288_, v___x_1263_, v___x_1340_);
lean_dec(v_head_1288_);
v___x_1342_ = lean_nat_add(v_startInclusive_1333_, v___x_1341_);
lean_dec(v___x_1341_);
lean_dec(v_startInclusive_1333_);
v_str_1292_ = v_str_1332_;
v_startInclusive_1293_ = v___x_1342_;
v_endExclusive_1294_ = v_endExclusive_1334_;
goto v___jp_1291_;
}
}
}
else
{
lean_dec(v_tail_1290_);
lean_dec(v_head_1289_);
lean_dec(v_head_1288_);
goto v___jp_1259_;
}
v___jp_1291_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = lean_string_utf8_extract_fast(v_str_1292_, v_startInclusive_1293_, v_endExclusive_1294_);
lean_dec(v_endExclusive_1294_);
lean_dec(v_startInclusive_1293_);
lean_dec_ref(v_str_1292_);
v___x_1296_ = l_Lake_parsePackageSpec(v_ws_1254_, v___x_1295_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec(v_head_1289_);
lean_dec_ref(v_spec_1255_);
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1331_; 
v_a_1305_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1307_ = v___x_1296_;
v_isShared_1308_ = v_isSharedCheck_1331_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1296_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1331_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v_str_1309_; lean_object* v_startInclusive_1310_; lean_object* v_endExclusive_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1330_; 
v_str_1309_ = lean_ctor_get(v_head_1289_, 0);
v_startInclusive_1310_ = lean_ctor_get(v_head_1289_, 1);
v_endExclusive_1311_ = lean_ctor_get(v_head_1289_, 2);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_head_1289_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1313_ = v_head_1289_;
v_isShared_1314_ = v_isSharedCheck_1330_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_endExclusive_1311_);
lean_inc(v_startInclusive_1310_);
lean_inc(v_str_1309_);
lean_dec(v_head_1289_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1330_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_string_utf8_extract_fast(v_str_1309_, v_startInclusive_1310_, v_endExclusive_1311_);
lean_dec(v_endExclusive_1311_);
lean_dec(v_startInclusive_1310_);
lean_dec_ref(v_str_1309_);
v___x_1316_ = l_Lake_stringToLegalOrSimpleName(v___x_1315_);
v___x_1317_ = l_Lake_Package_findTargetDecl_x3f(v___x_1316_, v_a_1305_);
lean_dec(v___x_1316_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_del_object(v___x_1313_);
lean_del_object(v___x_1307_);
lean_dec(v_a_1305_);
goto v___jp_1256_;
}
else
{
lean_object* v_val_1318_; lean_object* v_name_1319_; lean_object* v_kind_1320_; lean_object* v_config_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; 
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_val_1318_);
lean_dec_ref_known(v___x_1317_, 1);
v_name_1319_ = lean_ctor_get(v_val_1318_, 1);
lean_inc(v_name_1319_);
v_kind_1320_ = lean_ctor_get(v_val_1318_, 2);
lean_inc(v_kind_1320_);
v_config_1321_ = lean_ctor_get(v_val_1318_, 3);
lean_inc(v_config_1321_);
lean_dec(v_val_1318_);
v___x_1322_ = l_Lake_LeanExe_keyword;
v___x_1323_ = lean_name_eq(v_kind_1320_, v___x_1322_);
lean_dec(v_kind_1320_);
if (v___x_1323_ == 0)
{
lean_dec(v_config_1321_);
lean_dec(v_name_1319_);
lean_del_object(v___x_1313_);
lean_del_object(v___x_1307_);
lean_dec(v_a_1305_);
goto v___jp_1256_;
}
else
{
lean_object* v___x_1325_; 
lean_dec_ref(v_spec_1255_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 2, v_config_1321_);
lean_ctor_set(v___x_1313_, 1, v_name_1319_);
lean_ctor_set(v___x_1313_, 0, v_a_1305_);
v___x_1325_ = v___x_1313_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1305_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_name_1319_);
lean_ctor_set(v_reuseFailAlloc_1329_, 2, v_config_1321_);
v___x_1325_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1327_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1325_);
v___x_1327_ = v___x_1307_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
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
lean_dec(v___x_1269_);
goto v___jp_1259_;
}
v___jp_1256_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = lean_alloc_ctor(21, 1, 0);
lean_ctor_set(v___x_1257_, 0, v_spec_1255_);
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
v___jp_1259_:
{
uint32_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = 47;
v___x_1261_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_1261_, 0, v_spec_1255_);
lean_ctor_set_uint32(v___x_1261_, sizeof(void*)*1, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec___boxed(lean_object* v_ws_1343_, lean_object* v_spec_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lake_parseExeTargetSpec(v_ws_1343_, v_spec_1344_);
lean_dec_ref(v_ws_1343_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0));
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg___boxed(lean_object* v___dummy_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
return v_res_1349_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(lean_object* v_s_1351_){
_start:
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___boxed(lean_object* v_s_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(v_s_1353_);
lean_dec_ref(v_s_1353_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(lean_object* v_spec_1355_, lean_object* v___x_1356_, lean_object* v___x_1357_, lean_object* v_a_1358_, lean_object* v_b_1359_){
_start:
{
lean_object* v_it_1361_; lean_object* v_startInclusive_1362_; lean_object* v_endExclusive_1363_; 
if (lean_obj_tag(v_a_1358_) == 0)
{
lean_object* v_currPos_1368_; lean_object* v_searcher_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1392_; 
v_currPos_1368_ = lean_ctor_get(v_a_1358_, 0);
v_searcher_1369_ = lean_ctor_get(v_a_1358_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_a_1358_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1371_ = v_a_1358_;
v_isShared_1372_ = v_isSharedCheck_1392_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_searcher_1369_);
lean_inc(v_currPos_1368_);
lean_dec(v_a_1358_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1392_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
uint8_t v_decide_1373_; 
v_decide_1373_ = lean_nat_dec_eq(v_searcher_1369_, v___x_1357_);
if (v_decide_1373_ == 0)
{
uint32_t v___x_1374_; uint32_t v___x_1375_; uint8_t v___x_1376_; 
v___x_1374_ = 58;
v___x_1375_ = lean_string_utf8_get_fast(v_spec_1355_, v_searcher_1369_);
v___x_1376_ = lean_uint32_dec_eq(v___x_1375_, v___x_1374_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1377_ = lean_string_utf8_next_fast(v_spec_1355_, v_searcher_1369_);
lean_dec(v_searcher_1369_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v___x_1377_);
v___x_1379_ = v___x_1371_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_currPos_1368_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v___x_1377_);
v___x_1379_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
v_a_1358_ = v___x_1379_;
goto _start;
}
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v_slice_1385_; lean_object* v_nextIt_1387_; 
v___x_1382_ = lean_string_utf8_next_fast(v_spec_1355_, v_searcher_1369_);
v___x_1383_ = lean_nat_sub(v___x_1382_, v_searcher_1369_);
v___x_1384_ = lean_nat_add(v_searcher_1369_, v___x_1383_);
lean_dec(v___x_1383_);
v_slice_1385_ = l_String_Slice_subslice_x21(v___x_1356_, v_currPos_1368_, v_searcher_1369_);
lean_inc(v___x_1384_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v___x_1384_);
lean_ctor_set(v___x_1371_, 0, v___x_1384_);
v_nextIt_1387_ = v___x_1371_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v___x_1384_);
v_nextIt_1387_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v_startInclusive_1388_; lean_object* v_endExclusive_1389_; 
v_startInclusive_1388_ = lean_ctor_get(v_slice_1385_, 0);
lean_inc(v_startInclusive_1388_);
v_endExclusive_1389_ = lean_ctor_get(v_slice_1385_, 1);
lean_inc(v_endExclusive_1389_);
lean_dec_ref(v_slice_1385_);
v_it_1361_ = v_nextIt_1387_;
v_startInclusive_1362_ = v_startInclusive_1388_;
v_endExclusive_1363_ = v_endExclusive_1389_;
goto v___jp_1360_;
}
}
}
else
{
lean_object* v___x_1391_; 
lean_del_object(v___x_1371_);
lean_dec(v_searcher_1369_);
v___x_1391_ = lean_box(1);
lean_inc(v___x_1357_);
v_it_1361_ = v___x_1391_;
v_startInclusive_1362_ = v_currPos_1368_;
v_endExclusive_1363_ = v___x_1357_;
goto v___jp_1360_;
}
}
}
else
{
lean_dec(v___x_1357_);
lean_dec_ref(v_spec_1355_);
return v_b_1359_;
}
v___jp_1360_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_inc_ref(v_spec_1355_);
v___x_1364_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1364_, 0, v_spec_1355_);
lean_ctor_set(v___x_1364_, 1, v_startInclusive_1362_);
lean_ctor_set(v___x_1364_, 2, v_endExclusive_1363_);
v___x_1365_ = l_String_Slice_toString(v___x_1364_);
lean_dec_ref_known(v___x_1364_, 3);
v___x_1366_ = lean_array_push(v_b_1359_, v___x_1365_);
v_a_1358_ = v_it_1361_;
v_b_1359_ = v___x_1366_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg___boxed(lean_object* v_spec_1393_, lean_object* v___x_1394_, lean_object* v___x_1395_, lean_object* v_a_1396_, lean_object* v_b_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1393_, v___x_1394_, v___x_1395_, v_a_1396_, v_b_1397_);
lean_dec_ref(v___x_1394_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec(lean_object* v_ws_1401_, lean_object* v_spec_1402_){
_start:
{
uint32_t v___x_1404_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1404_ = 58;
v___x_1408_ = lean_unsigned_to_nat(0u);
v___x_1409_ = lean_string_utf8_byte_size(v_spec_1402_);
lean_inc_ref_n(v_spec_1402_, 2);
v___x_1410_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1410_, 0, v_spec_1402_);
lean_ctor_set(v___x_1410_, 1, v___x_1408_);
lean_ctor_set(v___x_1410_, 2, v___x_1409_);
v___x_1411_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0);
v___x_1412_ = ((lean_object*)(l_Lake_parseTargetSpec___closed__0));
v___x_1413_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1402_, v___x_1410_, v___x_1409_, v___x_1411_, v___x_1412_);
lean_dec_ref_known(v___x_1410_, 3);
v___x_1414_ = lean_array_to_list(v___x_1413_);
if (lean_obj_tag(v___x_1414_) == 1)
{
lean_object* v_tail_1415_; 
v_tail_1415_ = lean_ctor_get(v___x_1414_, 1);
lean_inc(v_tail_1415_);
if (lean_obj_tag(v_tail_1415_) == 0)
{
lean_object* v_head_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_dec_ref(v_spec_1402_);
v_head_1416_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_head_1416_);
lean_dec_ref_known(v___x_1414_, 2);
v___x_1417_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___closed__0);
v___x_1418_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1401_, v_head_1416_, v___x_1417_);
return v___x_1418_;
}
else
{
lean_object* v_tail_1419_; 
v_tail_1419_ = lean_ctor_get(v_tail_1415_, 1);
if (lean_obj_tag(v_tail_1419_) == 0)
{
lean_object* v_head_1420_; lean_object* v_head_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_dec_ref(v_spec_1402_);
v_head_1420_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_head_1420_);
lean_dec_ref_known(v___x_1414_, 2);
v_head_1421_ = lean_ctor_get(v_tail_1415_, 0);
lean_inc(v_head_1421_);
lean_dec_ref_known(v_tail_1415_, 2);
v___x_1422_ = l_String_toName(v_head_1421_);
v___x_1423_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1401_, v_head_1420_, v___x_1422_);
return v___x_1423_;
}
else
{
lean_dec_ref_known(v_tail_1415_, 2);
lean_dec_ref_known(v___x_1414_, 2);
goto v___jp_1405_;
}
}
}
else
{
lean_dec(v___x_1414_);
goto v___jp_1405_;
}
v___jp_1405_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_1406_, 0, v_spec_1402_);
lean_ctor_set_uint32(v___x_1406_, sizeof(void*)*1, v___x_1404_);
v___x_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec___boxed(lean_object* v_ws_1424_, lean_object* v_spec_1425_, lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lake_parseTargetSpec(v_ws_1424_, v_spec_1425_);
lean_dec_ref(v_ws_1424_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(lean_object* v_spec_1428_, lean_object* v___x_1429_, lean_object* v___x_1430_, lean_object* v_inst_1431_, lean_object* v_R_1432_, lean_object* v_a_1433_, lean_object* v_b_1434_){
_start:
{
lean_object* v___x_1435_; 
v___x_1435_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1428_, v___x_1429_, v___x_1430_, v_a_1433_, v_b_1434_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___boxed(lean_object* v_spec_1436_, lean_object* v___x_1437_, lean_object* v___x_1438_, lean_object* v_inst_1439_, lean_object* v_R_1440_, lean_object* v_a_1441_, lean_object* v_b_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(v_spec_1436_, v___x_1437_, v___x_1438_, v_inst_1439_, v_R_1440_, v_a_1441_, v_b_1442_);
lean_dec_ref(v___x_1437_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(lean_object* v_ws_1444_, lean_object* v_as_x27_1445_, lean_object* v_b_1446_){
_start:
{
if (lean_obj_tag(v_as_x27_1445_) == 0)
{
lean_object* v___x_1448_; 
v___x_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1448_, 0, v_b_1446_);
return v___x_1448_;
}
else
{
lean_object* v_head_1449_; lean_object* v_tail_1450_; lean_object* v___x_1451_; 
v_head_1449_ = lean_ctor_get(v_as_x27_1445_, 0);
v_tail_1450_ = lean_ctor_get(v_as_x27_1445_, 1);
lean_inc(v_head_1449_);
v___x_1451_ = l_Lake_parseTargetSpec(v_ws_1444_, v_head_1449_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1453_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v___x_1453_ = l_Array_append___redArg(v_b_1446_, v_a_1452_);
lean_dec(v_a_1452_);
v_as_x27_1445_ = v_tail_1450_;
v_b_1446_ = v___x_1453_;
goto _start;
}
else
{
lean_dec_ref(v_b_1446_);
return v___x_1451_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg___boxed(lean_object* v_ws_1455_, lean_object* v_as_x27_1456_, lean_object* v_b_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1455_, v_as_x27_1456_, v_b_1457_);
lean_dec(v_as_x27_1456_);
lean_dec_ref(v_ws_1455_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs(lean_object* v_ws_1462_, lean_object* v_specs_1463_){
_start:
{
lean_object* v___x_1465_; lean_object* v_results_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v_results_1466_ = ((lean_object*)(l_Lake_parseTargetSpecs___closed__0));
v___x_1467_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1462_, v_specs_1463_, v_results_1466_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc(v_a_1468_);
v___x_1469_ = lean_array_get_size(v_a_1468_);
lean_dec(v_a_1468_);
v___x_1470_ = lean_nat_dec_eq(v___x_1469_, v___x_1465_);
if (v___x_1470_ == 0)
{
return v___x_1467_;
}
else
{
lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1485_; 
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; 
v_unused_1486_ = lean_ctor_get(v___x_1467_, 0);
lean_dec(v_unused_1486_);
v___x_1472_ = v___x_1467_;
v_isShared_1473_ = v_isSharedCheck_1485_;
goto v_resetjp_1471_;
}
else
{
lean_dec(v___x_1467_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1485_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v_packages_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v_packages_1474_ = lean_ctor_get(v_ws_1462_, 4);
v___x_1475_ = lean_array_fget_borrowed(v_packages_1474_, v___x_1465_);
lean_inc(v___x_1475_);
v___x_1476_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_1462_, v___x_1475_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1479_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v___x_1476_, 1);
if (v_isShared_1473_ == 0)
{
lean_ctor_set_tag(v___x_1472_, 1);
lean_ctor_set(v___x_1472_, 0, v_a_1477_);
v___x_1479_ = v___x_1472_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; 
v_a_1481_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1481_);
lean_dec_ref_known(v___x_1476_, 1);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v_a_1481_);
v___x_1483_ = v___x_1472_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1481_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
else
{
return v___x_1467_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs___boxed(lean_object* v_ws_1487_, lean_object* v_specs_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Lake_parseTargetSpecs(v_ws_1487_, v_specs_1488_);
lean_dec(v_specs_1488_);
lean_dec_ref(v_ws_1487_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(lean_object* v_ws_1491_, lean_object* v_as_1492_, lean_object* v_as_x27_1493_, lean_object* v_b_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1491_, v_as_x27_1493_, v_b_1494_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___boxed(lean_object* v_ws_1498_, lean_object* v_as_1499_, lean_object* v_as_x27_1500_, lean_object* v_b_1501_, lean_object* v_a_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(v_ws_1498_, v_as_1499_, v_as_x27_1500_, v_b_1501_, v_a_1502_);
lean_dec(v_as_x27_1500_);
lean_dec(v_as_1499_);
lean_dec_ref(v_ws_1498_);
return v_res_1504_;
}
}
lean_object* runtime_initialize_Lake_CLI_Error(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_CLI_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_CLI_Error(uint8_t builtin);
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_CLI_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Build(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lake.Config.Env
// Imports: public import Lake.Config.Cache public import Lake.Config.InstallPath import Init.System.Platform
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_LeanInstall_leanCc_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Lake_envToBool_x3f(lean_object*);
lean_object* l_Lake_getSearchPath(lean_object*);
extern lean_object* l_Lake_sharedLibPathEnvVar;
extern lean_object* l_Lean_toolchain;
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
extern lean_object* l_Lake_instInhabitedLeanInstall_default;
extern lean_object* l_Lake_instInhabitedLakeInstall_default;
lean_object* l_Lake_LeanInstall_sharedLibPath(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_System_SearchPath_toString(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lake_instInhabitedEnv_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedEnv_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedEnv_default___closed__0_value;
static lean_once_cell_t l_Lake_instInhabitedEnv_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedEnv_default___closed__1;
LEAN_EXPORT lean_object* l_Lake_instInhabitedEnv_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedEnv;
static const lean_string_object l_Lake_getUserHome_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HOME"};
static const lean_object* l_Lake_getUserHome_x3f___closed__0 = (const lean_object*)&l_Lake_getUserHome_x3f___closed__0_value;
static const lean_string_object l_Lake_getUserHome_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "HOMEDRIVE"};
static const lean_object* l_Lake_getUserHome_x3f___closed__1 = (const lean_object*)&l_Lake_getUserHome_x3f___closed__1_value;
static const lean_string_object l_Lake_getUserHome_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HOMEPATH"};
static const lean_object* l_Lake_getUserHome_x3f___closed__2 = (const lean_object*)&l_Lake_getUserHome_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f();
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "XDG_CACHE_HOME"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0_value;
static const lean_string_object l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ".cache"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f();
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0_value;
static const lean_string_object l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cache"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Env_computeToolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ELAN_TOOLCHAIN"};
static const lean_object* l_Lake_Env_computeToolchain___closed__0 = (const lean_object*)&l_Lake_Env_computeToolchain___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain();
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LAKE_CACHE_DIR"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f();
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfSystem_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a `Name`, got '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected a `NameMap`, got '"};
static const lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0 = (const lean_object*)&l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LAKE_PKG_URL_MAP"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0_value;
static const lean_string_object l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "'LAKE_PKG_URL_MAP' has invalid JSON: "};
static const lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap();
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(lean_object*);
static const lean_string_object l_Lake_Env_compute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".lake"};
static const lean_object* l_Lake_Env_compute___closed__0 = (const lean_object*)&l_Lake_Env_compute___closed__0_value;
static const lean_string_object l_Lake_Env_compute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "config.toml"};
static const lean_object* l_Lake_Env_compute___closed__1 = (const lean_object*)&l_Lake_Env_compute___closed__1_value;
static const lean_string_object l_Lake_Env_compute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LAKE_NO_CACHE"};
static const lean_object* l_Lake_Env_compute___closed__2 = (const lean_object*)&l_Lake_Env_compute___closed__2_value;
static const lean_string_object l_Lake_Env_compute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LAKE_ARTIFACT_CACHE"};
static const lean_object* l_Lake_Env_compute___closed__3 = (const lean_object*)&l_Lake_Env_compute___closed__3_value;
static const lean_string_object l_Lake_Env_compute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LAKE_RESTORE_ARTIFACTS"};
static const lean_object* l_Lake_Env_compute___closed__4 = (const lean_object*)&l_Lake_Env_compute___closed__4_value;
static const lean_string_object l_Lake_Env_compute___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LAKE_CONFIG"};
static const lean_object* l_Lake_Env_compute___closed__5 = (const lean_object*)&l_Lake_Env_compute___closed__5_value;
static const lean_string_object l_Lake_Env_compute___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LAKE_CACHE_KEY"};
static const lean_object* l_Lake_Env_compute___closed__6 = (const lean_object*)&l_Lake_Env_compute___closed__6_value;
static const lean_string_object l_Lake_Env_compute___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LAKE_CACHE_ARTIFACT_ENDPOINT"};
static const lean_object* l_Lake_Env_compute___closed__7 = (const lean_object*)&l_Lake_Env_compute___closed__7_value;
static const lean_string_object l_Lake_Env_compute___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LAKE_CACHE_REVISION_ENDPOINT"};
static const lean_object* l_Lake_Env_compute___closed__8 = (const lean_object*)&l_Lake_Env_compute___closed__8_value;
static const lean_string_object l_Lake_Env_compute___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LAKE_CACHE_SERVICE"};
static const lean_object* l_Lake_Env_compute___closed__9 = (const lean_object*)&l_Lake_Env_compute___closed__9_value;
static const lean_string_object l_Lake_Env_compute___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LEAN_GITHASH"};
static const lean_object* l_Lake_Env_compute___closed__10 = (const lean_object*)&l_Lake_Env_compute___closed__10_value;
static const lean_string_object l_Lake_Env_compute___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lake_Env_compute___closed__11 = (const lean_object*)&l_Lake_Env_compute___closed__11_value;
static const lean_string_object l_Lake_Env_compute___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LEAN_SRC_PATH"};
static const lean_object* l_Lake_Env_compute___closed__12 = (const lean_object*)&l_Lake_Env_compute___closed__12_value;
static const lean_string_object l_Lake_Env_compute___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PATH"};
static const lean_object* l_Lake_Env_compute___closed__13 = (const lean_object*)&l_Lake_Env_compute___closed__13_value;
static const lean_string_object l_Lake_Env_compute___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "RESERVOIR_API_URL"};
static const lean_object* l_Lake_Env_compute___closed__14 = (const lean_object*)&l_Lake_Env_compute___closed__14_value;
static const lean_string_object l_Lake_Env_compute___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/v1"};
static const lean_object* l_Lake_Env_compute___closed__15 = (const lean_object*)&l_Lake_Env_compute___closed__15_value;
static const lean_string_object l_Lake_Env_compute___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "RESERVOIR_API_BASE_URL"};
static const lean_object* l_Lake_Env_compute___closed__16 = (const lean_object*)&l_Lake_Env_compute___closed__16_value;
static const lean_string_object l_Lake_Env_compute___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "https://reservoir.lean-lang.org/api"};
static const lean_object* l_Lake_Env_compute___closed__17 = (const lean_object*)&l_Lake_Env_compute___closed__17_value;
LEAN_EXPORT lean_object* l_Lake_Env_compute(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_compute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_path(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_path___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_sharedLibPath(lean_object*);
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_computeToolchain___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__0 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__0_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LAKE"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__1 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__1_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__2 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__2_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LAKE_OVERRIDE_LEAN"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__3 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__3_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__4 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__4_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LAKE_HOME"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__5 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__5_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__6 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__6_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LEAN"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__7 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__7_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__8 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__8_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_compute___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__9 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__9_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LEAN_SYSROOT"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__10 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__10_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__11 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__11_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "LEAN_AR"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__12 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__12_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__13 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__13_value;
static lean_once_cell_t l_Lake_Env_noToolchainVars___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Env_noToolchainVars___closed__14;
static lean_once_cell_t l_Lake_Env_noToolchainVars___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Env_noToolchainVars___closed__15;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instInhabitedEnv_default___closed__0_value)}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__16 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__16_value;
LEAN_EXPORT lean_object* l_Lake_Env_noToolchainVars(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0(lean_object*);
static const lean_string_object l_Lake_Env_baseVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "LEAN_CC"};
static const lean_object* l_Lake_Env_baseVars___closed__0 = (const lean_object*)&l_Lake_Env_baseVars___closed__0_value;
static const lean_string_object l_Lake_Env_baseVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_Env_baseVars___closed__1 = (const lean_object*)&l_Lake_Env_baseVars___closed__1_value;
static const lean_string_object l_Lake_Env_baseVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_Env_baseVars___closed__2 = (const lean_object*)&l_Lake_Env_baseVars___closed__2_value;
static const lean_string_object l_Lake_Env_baseVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ELAN"};
static const lean_object* l_Lake_Env_baseVars___closed__3 = (const lean_object*)&l_Lake_Env_baseVars___closed__3_value;
static const lean_string_object l_Lake_Env_baseVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ELAN_HOME"};
static const lean_object* l_Lake_Env_baseVars___closed__4 = (const lean_object*)&l_Lake_Env_baseVars___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Env_baseVars(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0___boxed(lean_object*);
static const lean_ctor_object l_Lake_Env_vars___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Env_baseVars___closed__1_value)}};
static const lean_object* l_Lake_Env_vars___lam__1___closed__0 = (const lean_object*)&l_Lake_Env_vars___lam__1___closed__0_value;
static const lean_ctor_object l_Lake_Env_vars___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Env_baseVars___closed__2_value)}};
static const lean_object* l_Lake_Env_vars___lam__1___closed__1 = (const lean_object*)&l_Lake_Env_vars___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_vars(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath___boxed(lean_object*);
static lean_object* _init_l_Lake_instInhabitedEnv_default___closed__1(void){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_2_ = lean_box(0);
v___x_3_ = 0;
v___x_4_ = lean_box(1);
v___x_5_ = ((lean_object*)(l_Lake_instInhabitedEnv_default___closed__0));
v___x_6_ = lean_box(0);
v___x_7_ = l_Lake_instInhabitedLeanInstall_default;
v___x_8_ = l_Lake_instInhabitedLakeInstall_default;
v___x_9_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_6_);
lean_ctor_set(v___x_9_, 3, v___x_5_);
lean_ctor_set(v___x_9_, 4, v___x_5_);
lean_ctor_set(v___x_9_, 5, v___x_4_);
lean_ctor_set(v___x_9_, 6, v___x_6_);
lean_ctor_set(v___x_9_, 7, v___x_6_);
lean_ctor_set(v___x_9_, 8, v___x_6_);
lean_ctor_set(v___x_9_, 9, v___x_6_);
lean_ctor_set(v___x_9_, 10, v___x_6_);
lean_ctor_set(v___x_9_, 11, v___x_6_);
lean_ctor_set(v___x_9_, 12, v___x_6_);
lean_ctor_set(v___x_9_, 13, v___x_6_);
lean_ctor_set(v___x_9_, 14, v___x_6_);
lean_ctor_set(v___x_9_, 15, v___x_2_);
lean_ctor_set(v___x_9_, 16, v___x_2_);
lean_ctor_set(v___x_9_, 17, v___x_2_);
lean_ctor_set(v___x_9_, 18, v___x_2_);
lean_ctor_set(v___x_9_, 19, v___x_5_);
lean_ctor_set_uint8(v___x_9_, sizeof(void*)*20, v___x_3_);
lean_ctor_set_uint8(v___x_9_, sizeof(void*)*20 + 1, v___x_3_);
return v___x_9_;
}
}
static lean_object* _init_l_Lake_instInhabitedEnv_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lake_instInhabitedEnv_default___closed__1, &l_Lake_instInhabitedEnv_default___closed__1_once, _init_l_Lake_instInhabitedEnv_default___closed__1);
return v___x_10_;
}
}
static lean_object* _init_l_Lake_instInhabitedEnv(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lake_instInhabitedEnv_default;
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f(){
_start:
{
uint8_t v___x_16_; 
v___x_16_ = l_System_Platform_isWindows;
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = ((lean_object*)(l_Lake_getUserHome_x3f___closed__0));
v___x_18_ = lean_io_getenv(v___x_17_);
if (lean_obj_tag(v___x_18_) == 1)
{
lean_object* v_val_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_26_; 
v_val_19_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_26_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_26_ == 0)
{
v___x_21_ = v___x_18_;
v_isShared_22_ = v_isSharedCheck_26_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_val_19_);
lean_dec(v___x_18_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_26_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_24_; 
if (v_isShared_22_ == 0)
{
v___x_24_ = v___x_21_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_val_19_);
v___x_24_ = v_reuseFailAlloc_25_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
return v___x_24_;
}
}
}
else
{
lean_object* v___x_27_; 
lean_dec(v___x_18_);
v___x_27_ = lean_box(0);
return v___x_27_;
}
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = ((lean_object*)(l_Lake_getUserHome_x3f___closed__1));
v___x_29_ = lean_io_getenv(v___x_28_);
if (lean_obj_tag(v___x_29_) == 1)
{
lean_object* v_val_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_val_30_ = lean_ctor_get(v___x_29_, 0);
lean_inc(v_val_30_);
lean_dec_ref_known(v___x_29_, 1);
v___x_31_ = ((lean_object*)(l_Lake_getUserHome_x3f___closed__2));
v___x_32_ = lean_io_getenv(v___x_31_);
if (lean_obj_tag(v___x_32_) == 1)
{
lean_object* v_val_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_41_; 
v_val_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_41_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_41_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_val_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_41_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_37_ = lean_string_append(v_val_30_, v_val_33_);
lean_dec(v_val_33_);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 0, v___x_37_);
v___x_39_ = v___x_35_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_37_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
else
{
lean_object* v___x_42_; 
lean_dec(v___x_32_);
lean_dec(v_val_30_);
v___x_42_ = lean_box(0);
return v___x_42_;
}
}
else
{
lean_object* v___x_43_; 
lean_dec(v___x_29_);
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f___boxed(lean_object* v_a_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lake_getUserHome_x3f();
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(lean_object* v_userHome_x3f_48_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0));
v___x_51_ = lean_io_getenv(v___x_50_);
if (lean_obj_tag(v___x_51_) == 1)
{
lean_object* v_val_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
lean_dec(v_userHome_x3f_48_);
v_val_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_val_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_val_52_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
else
{
lean_dec(v___x_51_);
if (lean_obj_tag(v_userHome_x3f_48_) == 1)
{
lean_object* v_val_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_69_; 
v_val_60_ = lean_ctor_get(v_userHome_x3f_48_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v_userHome_x3f_48_);
if (v_isSharedCheck_69_ == 0)
{
v___x_62_ = v_userHome_x3f_48_;
v_isShared_63_ = v_isSharedCheck_69_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_val_60_);
lean_dec(v_userHome_x3f_48_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_69_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_64_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1));
v___x_65_ = l_System_FilePath_join(v_val_60_, v___x_64_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 0, v___x_65_);
v___x_67_ = v___x_62_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_65_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_userHome_x3f_48_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___boxed(lean_object* v_userHome_x3f_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(v_userHome_x3f_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f(){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0));
v___x_76_ = lean_io_getenv(v___x_75_);
if (lean_obj_tag(v___x_76_) == 1)
{
lean_object* v_val_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
v_val_77_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_76_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_val_77_);
lean_dec(v___x_76_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_val_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
else
{
lean_object* v___x_85_; 
lean_dec(v___x_76_);
v___x_85_ = l_Lake_getUserHome_x3f();
if (lean_obj_tag(v___x_85_) == 1)
{
lean_object* v_val_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_95_; 
v_val_86_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_95_ == 0)
{
v___x_88_ = v___x_85_;
v_isShared_89_ = v_isSharedCheck_95_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_val_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_95_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_90_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1));
v___x_91_ = l_System_FilePath_join(v_val_86_, v___x_90_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_91_);
v___x_93_ = v___x_88_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v___x_96_; 
lean_dec(v___x_85_);
v___x_96_ = lean_box(0);
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f___boxed(lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lake_getSystemCacheHome_x3f();
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(lean_object* v_elan_101_, lean_object* v_toolchain_102_){
_start:
{
lean_object* v_toolchainsDir_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_toolchainsDir_103_ = lean_ctor_get(v_elan_101_, 3);
lean_inc_ref(v_toolchainsDir_103_);
lean_dec_ref(v_elan_101_);
v___x_104_ = ((lean_object*)(l_Lake_instInhabitedEnv_default___closed__0));
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_102_, v___x_104_, v___x_105_);
v___x_107_ = l_System_FilePath_join(v_toolchainsDir_103_, v___x_106_);
v___x_108_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_109_ = l_System_FilePath_join(v___x_107_, v___x_108_);
v___x_110_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1));
v___x_111_ = l_System_FilePath_join(v___x_109_, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___boxed(lean_object* v_elan_112_, lean_object* v_toolchain_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_elan_112_, v_toolchain_113_);
lean_dec_ref(v_toolchain_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f(lean_object* v_elan_115_, lean_object* v_toolchain_116_){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_117_ = lean_string_utf8_byte_size(v_toolchain_116_);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_nat_dec_eq(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_elan_115_, v_toolchain_116_);
v___x_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; 
lean_dec_ref(v_elan_115_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f___boxed(lean_object* v_elan_123_, lean_object* v_toolchain_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f(v_elan_123_, v_toolchain_124_);
lean_dec_ref(v_toolchain_124_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain(){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_Lake_Env_computeToolchain___closed__0));
v___x_129_ = lean_io_getenv(v___x_128_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_toolchain;
return v___x_130_;
}
else
{
lean_object* v_val_131_; 
v_val_131_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_val_131_);
lean_dec_ref_known(v___x_129_, 1);
return v_val_131_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain___boxed(lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lake_Env_computeToolchain();
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f(){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
v___x_137_ = lean_io_getenv(v___x_136_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_138_; 
v___x_138_ = lean_box(0);
return v___x_138_;
}
else
{
lean_object* v_val_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_150_; 
v_val_139_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_150_ == 0)
{
v___x_141_ = v___x_137_;
v_isShared_142_ = v_isSharedCheck_150_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_val_139_);
lean_dec(v___x_137_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_150_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_143_ = lean_string_utf8_byte_size(v_val_139_);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; 
lean_del_object(v___x_141_);
lean_dec(v_val_139_);
v___x_146_ = lean_box(0);
return v___x_146_;
}
else
{
lean_object* v___x_148_; 
if (v_isShared_142_ == 0)
{
v___x_148_ = v___x_141_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_val_139_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___boxed(lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f();
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfSystem_x3f(lean_object* v_cacheHome_x3f_153_){
_start:
{
if (lean_obj_tag(v_cacheHome_x3f_153_) == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_box(0);
return v___x_154_;
}
else
{
lean_object* v_val_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_164_; 
v_val_155_ = lean_ctor_get(v_cacheHome_x3f_153_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_cacheHome_x3f_153_);
if (v_isSharedCheck_164_ == 0)
{
v___x_157_ = v_cacheHome_x3f_153_;
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_val_155_);
lean_dec(v_cacheHome_x3f_153_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_160_ = l_System_FilePath_join(v_val_155_, v___x_159_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_160_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f(lean_object* v_elan_x3f_165_, lean_object* v_toolchain_166_){
_start:
{
if (lean_obj_tag(v_elan_x3f_165_) == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_box(0);
return v___x_167_;
}
else
{
lean_object* v_val_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_180_; 
v_val_168_ = lean_ctor_get(v_elan_x3f_165_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v_elan_x3f_165_);
if (v_isSharedCheck_180_ == 0)
{
v___x_170_ = v_elan_x3f_165_;
v_isShared_171_ = v_isSharedCheck_180_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_val_168_);
lean_dec(v_elan_x3f_165_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_180_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_172_ = lean_string_utf8_byte_size(v_toolchain_166_);
v___x_173_ = lean_unsigned_to_nat(0u);
v___x_174_ = lean_nat_dec_eq(v___x_172_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_val_168_, v_toolchain_166_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 0, v___x_175_);
v___x_177_ = v___x_170_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v___x_179_; 
lean_del_object(v___x_170_);
lean_dec(v_val_168_);
v___x_179_ = lean_box(0);
return v___x_179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f___boxed(lean_object* v_elan_x3f_181_, lean_object* v_toolchain_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f(v_elan_x3f_181_, v_toolchain_182_);
lean_dec_ref(v_toolchain_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f(lean_object* v_elan_x3f_184_, lean_object* v_toolchain_185_){
_start:
{
lean_object* v_cache_188_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
v___x_203_ = lean_io_getenv(v___x_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
goto v___jp_196_;
}
else
{
lean_object* v_val_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v_val_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_205_ = lean_string_utf8_byte_size(v_val_204_);
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_nat_dec_eq(v___x_205_, v___x_206_);
if (v___x_207_ == 0)
{
lean_dec(v_val_204_);
goto v___jp_196_;
}
else
{
lean_dec(v_elan_x3f_184_);
v_cache_188_ = v_val_204_;
goto v___jp_187_;
}
}
v___jp_187_:
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v_cache_188_);
return v___x_189_;
}
v___jp_190_:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lake_getSystemCacheHome_x3f();
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_box(0);
return v___x_192_;
}
else
{
lean_object* v_val_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_val_193_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_191_, 1);
v___x_194_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_195_ = l_System_FilePath_join(v_val_193_, v___x_194_);
v_cache_188_ = v___x_195_;
goto v___jp_187_;
}
}
v___jp_196_:
{
if (lean_obj_tag(v_elan_x3f_184_) == 0)
{
goto v___jp_190_;
}
else
{
lean_object* v_val_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_val_197_ = lean_ctor_get(v_elan_x3f_184_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v_elan_x3f_184_, 1);
v___x_198_ = lean_string_utf8_byte_size(v_toolchain_185_);
v___x_199_ = lean_unsigned_to_nat(0u);
v___x_200_ = lean_nat_dec_eq(v___x_198_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_val_197_, v_toolchain_185_);
v_cache_188_ = v___x_201_;
goto v___jp_187_;
}
else
{
lean_dec(v_val_197_);
goto v___jp_190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f___boxed(lean_object* v_elan_x3f_208_, lean_object* v_toolchain_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lake_Env_computeCache_x3f(v_elan_x3f_208_, v_toolchain_209_);
lean_dec_ref(v_toolchain_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(lean_object* v_elan_x3f_212_, lean_object* v_userHome_x3f_213_, lean_object* v_toolchain_214_, lean_object* v_env_215_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
v___x_218_ = lean_io_getenv(v___x_217_);
if (lean_obj_tag(v___x_218_) == 1)
{
lean_object* v_val_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_331_; 
lean_dec(v_userHome_x3f_213_);
lean_dec(v_elan_x3f_212_);
v_val_262_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_331_ == 0)
{
v___x_264_ = v___x_218_;
v_isShared_265_ = v_isSharedCheck_331_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_val_262_);
lean_dec(v___x_218_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_331_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_266_ = lean_string_utf8_byte_size(v_val_262_);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_nat_dec_eq(v___x_266_, v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v_lake_269_; lean_object* v_lean_270_; lean_object* v_elan_x3f_271_; lean_object* v_reservoirApiUrl_272_; lean_object* v_githashOverride_273_; lean_object* v_pkgUrlMap_274_; uint8_t v_noCache_275_; lean_object* v_enableArtifactCache_x3f_276_; lean_object* v_restoreAllArtifacts_x3f_277_; uint8_t v_noSystemCache_278_; lean_object* v_lakeConfig_x3f_279_; lean_object* v_cacheKey_x3f_280_; lean_object* v_cacheArtifactEndpoint_x3f_281_; lean_object* v_cacheRevisionEndpoint_x3f_282_; lean_object* v_cacheService_x3f_283_; lean_object* v_initLeanPath_284_; lean_object* v_initLeanSrcPath_285_; lean_object* v_initSharedLibPath_286_; lean_object* v_initPath_287_; lean_object* v_toolchain_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_299_; 
v_lake_269_ = lean_ctor_get(v_env_215_, 0);
v_lean_270_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_271_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_272_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_273_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_274_ = lean_ctor_get(v_env_215_, 5);
v_noCache_275_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_276_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_277_ = lean_ctor_get(v_env_215_, 7);
v_noSystemCache_278_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_lakeConfig_x3f_279_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_280_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_281_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_282_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_283_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_284_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_285_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_286_ = lean_ctor_get(v_env_215_, 17);
v_initPath_287_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_288_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_299_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; lean_object* v_unused_301_; 
v_unused_300_ = lean_ctor_get(v_env_215_, 9);
lean_dec(v_unused_300_);
v_unused_301_ = lean_ctor_get(v_env_215_, 8);
lean_dec(v_unused_301_);
v___x_290_ = v_env_215_;
v_isShared_291_ = v_isSharedCheck_299_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_toolchain_288_);
lean_inc(v_initPath_287_);
lean_inc(v_initSharedLibPath_286_);
lean_inc(v_initLeanSrcPath_285_);
lean_inc(v_initLeanPath_284_);
lean_inc(v_cacheService_x3f_283_);
lean_inc(v_cacheRevisionEndpoint_x3f_282_);
lean_inc(v_cacheArtifactEndpoint_x3f_281_);
lean_inc(v_cacheKey_x3f_280_);
lean_inc(v_lakeConfig_x3f_279_);
lean_inc(v_restoreAllArtifacts_x3f_277_);
lean_inc(v_enableArtifactCache_x3f_276_);
lean_inc(v_pkgUrlMap_274_);
lean_inc(v_githashOverride_273_);
lean_inc(v_reservoirApiUrl_272_);
lean_inc(v_elan_x3f_271_);
lean_inc(v_lean_270_);
lean_inc(v_lake_269_);
lean_dec(v_env_215_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_299_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_265_ == 0)
{
v___x_293_ = v___x_264_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_val_262_);
v___x_293_ = v_reuseFailAlloc_298_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_295_; 
lean_inc_ref(v___x_293_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 9, v___x_293_);
lean_ctor_set(v___x_290_, 8, v___x_293_);
v___x_295_ = v___x_290_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_lake_269_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v_lean_270_);
lean_ctor_set(v_reuseFailAlloc_297_, 2, v_elan_x3f_271_);
lean_ctor_set(v_reuseFailAlloc_297_, 3, v_reservoirApiUrl_272_);
lean_ctor_set(v_reuseFailAlloc_297_, 4, v_githashOverride_273_);
lean_ctor_set(v_reuseFailAlloc_297_, 5, v_pkgUrlMap_274_);
lean_ctor_set(v_reuseFailAlloc_297_, 6, v_enableArtifactCache_x3f_276_);
lean_ctor_set(v_reuseFailAlloc_297_, 7, v_restoreAllArtifacts_x3f_277_);
lean_ctor_set(v_reuseFailAlloc_297_, 8, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_297_, 9, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_297_, 10, v_lakeConfig_x3f_279_);
lean_ctor_set(v_reuseFailAlloc_297_, 11, v_cacheKey_x3f_280_);
lean_ctor_set(v_reuseFailAlloc_297_, 12, v_cacheArtifactEndpoint_x3f_281_);
lean_ctor_set(v_reuseFailAlloc_297_, 13, v_cacheRevisionEndpoint_x3f_282_);
lean_ctor_set(v_reuseFailAlloc_297_, 14, v_cacheService_x3f_283_);
lean_ctor_set(v_reuseFailAlloc_297_, 15, v_initLeanPath_284_);
lean_ctor_set(v_reuseFailAlloc_297_, 16, v_initLeanSrcPath_285_);
lean_ctor_set(v_reuseFailAlloc_297_, 17, v_initSharedLibPath_286_);
lean_ctor_set(v_reuseFailAlloc_297_, 18, v_initPath_287_);
lean_ctor_set(v_reuseFailAlloc_297_, 19, v_toolchain_288_);
lean_ctor_set_uint8(v_reuseFailAlloc_297_, sizeof(void*)*20, v_noCache_275_);
lean_ctor_set_uint8(v_reuseFailAlloc_297_, sizeof(void*)*20 + 1, v_noSystemCache_278_);
v___x_295_ = v_reuseFailAlloc_297_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_296_; 
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
}
}
else
{
lean_object* v_lake_302_; lean_object* v_lean_303_; lean_object* v_elan_x3f_304_; lean_object* v_reservoirApiUrl_305_; lean_object* v_githashOverride_306_; lean_object* v_pkgUrlMap_307_; uint8_t v_noCache_308_; lean_object* v_enableArtifactCache_x3f_309_; lean_object* v_restoreAllArtifacts_x3f_310_; lean_object* v_lakeCache_x3f_311_; lean_object* v_lakeSystemCache_x3f_312_; lean_object* v_lakeConfig_x3f_313_; lean_object* v_cacheKey_x3f_314_; lean_object* v_cacheArtifactEndpoint_x3f_315_; lean_object* v_cacheRevisionEndpoint_x3f_316_; lean_object* v_cacheService_x3f_317_; lean_object* v_initLeanPath_318_; lean_object* v_initLeanSrcPath_319_; lean_object* v_initSharedLibPath_320_; lean_object* v_initPath_321_; lean_object* v_toolchain_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_330_; 
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
v_lake_302_ = lean_ctor_get(v_env_215_, 0);
v_lean_303_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_304_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_305_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_306_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_307_ = lean_ctor_get(v_env_215_, 5);
v_noCache_308_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_309_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_310_ = lean_ctor_get(v_env_215_, 7);
v_lakeCache_x3f_311_ = lean_ctor_get(v_env_215_, 8);
v_lakeSystemCache_x3f_312_ = lean_ctor_get(v_env_215_, 9);
v_lakeConfig_x3f_313_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_314_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_315_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_316_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_317_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_318_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_319_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_320_ = lean_ctor_get(v_env_215_, 17);
v_initPath_321_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_322_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_330_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_330_ == 0)
{
v___x_324_ = v_env_215_;
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_toolchain_322_);
lean_inc(v_initPath_321_);
lean_inc(v_initSharedLibPath_320_);
lean_inc(v_initLeanSrcPath_319_);
lean_inc(v_initLeanPath_318_);
lean_inc(v_cacheService_x3f_317_);
lean_inc(v_cacheRevisionEndpoint_x3f_316_);
lean_inc(v_cacheArtifactEndpoint_x3f_315_);
lean_inc(v_cacheKey_x3f_314_);
lean_inc(v_lakeConfig_x3f_313_);
lean_inc(v_lakeSystemCache_x3f_312_);
lean_inc(v_lakeCache_x3f_311_);
lean_inc(v_restoreAllArtifacts_x3f_310_);
lean_inc(v_enableArtifactCache_x3f_309_);
lean_inc(v_pkgUrlMap_307_);
lean_inc(v_githashOverride_306_);
lean_inc(v_reservoirApiUrl_305_);
lean_inc(v_elan_x3f_304_);
lean_inc(v_lean_303_);
lean_inc(v_lake_302_);
lean_dec(v_env_215_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_lake_302_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_lean_303_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v_elan_x3f_304_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v_reservoirApiUrl_305_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v_githashOverride_306_);
lean_ctor_set(v_reuseFailAlloc_329_, 5, v_pkgUrlMap_307_);
lean_ctor_set(v_reuseFailAlloc_329_, 6, v_enableArtifactCache_x3f_309_);
lean_ctor_set(v_reuseFailAlloc_329_, 7, v_restoreAllArtifacts_x3f_310_);
lean_ctor_set(v_reuseFailAlloc_329_, 8, v_lakeCache_x3f_311_);
lean_ctor_set(v_reuseFailAlloc_329_, 9, v_lakeSystemCache_x3f_312_);
lean_ctor_set(v_reuseFailAlloc_329_, 10, v_lakeConfig_x3f_313_);
lean_ctor_set(v_reuseFailAlloc_329_, 11, v_cacheKey_x3f_314_);
lean_ctor_set(v_reuseFailAlloc_329_, 12, v_cacheArtifactEndpoint_x3f_315_);
lean_ctor_set(v_reuseFailAlloc_329_, 13, v_cacheRevisionEndpoint_x3f_316_);
lean_ctor_set(v_reuseFailAlloc_329_, 14, v_cacheService_x3f_317_);
lean_ctor_set(v_reuseFailAlloc_329_, 15, v_initLeanPath_318_);
lean_ctor_set(v_reuseFailAlloc_329_, 16, v_initLeanSrcPath_319_);
lean_ctor_set(v_reuseFailAlloc_329_, 17, v_initSharedLibPath_320_);
lean_ctor_set(v_reuseFailAlloc_329_, 18, v_initPath_321_);
lean_ctor_set(v_reuseFailAlloc_329_, 19, v_toolchain_322_);
lean_ctor_set_uint8(v_reuseFailAlloc_329_, sizeof(void*)*20, v_noCache_308_);
v___x_327_ = v_reuseFailAlloc_329_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; 
lean_ctor_set_uint8(v___x_327_, sizeof(void*)*20 + 1, v___x_268_);
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
}
}
}
}
else
{
lean_dec(v___x_218_);
if (lean_obj_tag(v_elan_x3f_212_) == 0)
{
goto v___jp_219_;
}
else
{
lean_object* v_val_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_387_; 
v_val_332_ = lean_ctor_get(v_elan_x3f_212_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v_elan_x3f_212_);
if (v_isSharedCheck_387_ == 0)
{
v___x_334_ = v_elan_x3f_212_;
v_isShared_335_ = v_isSharedCheck_387_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_val_332_);
lean_dec(v_elan_x3f_212_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_387_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_336_ = lean_string_utf8_byte_size(v_toolchain_214_);
v___x_337_ = lean_unsigned_to_nat(0u);
v___x_338_ = lean_nat_dec_eq(v___x_336_, v___x_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_339_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_val_332_, v_toolchain_214_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_339_);
v___x_341_ = v___x_334_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_386_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v___y_344_; 
v___x_342_ = l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(v_userHome_x3f_213_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v___x_375_; 
v___x_375_ = lean_box(0);
v___y_344_ = v___x_375_;
goto v___jp_343_;
}
else
{
lean_object* v_val_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_385_; 
v_val_376_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_385_ == 0)
{
v___x_378_ = v___x_342_;
v_isShared_379_ = v_isSharedCheck_385_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_val_376_);
lean_dec(v___x_342_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_385_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_380_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_381_ = l_System_FilePath_join(v_val_376_, v___x_380_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v___x_381_);
v___x_383_ = v___x_378_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
v___y_344_ = v___x_383_;
goto v___jp_343_;
}
}
}
v___jp_343_:
{
lean_object* v_lake_345_; lean_object* v_lean_346_; lean_object* v_elan_x3f_347_; lean_object* v_reservoirApiUrl_348_; lean_object* v_githashOverride_349_; lean_object* v_pkgUrlMap_350_; uint8_t v_noCache_351_; lean_object* v_enableArtifactCache_x3f_352_; lean_object* v_restoreAllArtifacts_x3f_353_; uint8_t v_noSystemCache_354_; lean_object* v_lakeConfig_x3f_355_; lean_object* v_cacheKey_x3f_356_; lean_object* v_cacheArtifactEndpoint_x3f_357_; lean_object* v_cacheRevisionEndpoint_x3f_358_; lean_object* v_cacheService_x3f_359_; lean_object* v_initLeanPath_360_; lean_object* v_initLeanSrcPath_361_; lean_object* v_initSharedLibPath_362_; lean_object* v_initPath_363_; lean_object* v_toolchain_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_372_; 
v_lake_345_ = lean_ctor_get(v_env_215_, 0);
v_lean_346_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_347_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_348_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_349_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_350_ = lean_ctor_get(v_env_215_, 5);
v_noCache_351_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_352_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_353_ = lean_ctor_get(v_env_215_, 7);
v_noSystemCache_354_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_lakeConfig_x3f_355_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_356_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_357_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_358_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_359_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_360_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_361_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_362_ = lean_ctor_get(v_env_215_, 17);
v_initPath_363_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_364_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_372_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; lean_object* v_unused_374_; 
v_unused_373_ = lean_ctor_get(v_env_215_, 9);
lean_dec(v_unused_373_);
v_unused_374_ = lean_ctor_get(v_env_215_, 8);
lean_dec(v_unused_374_);
v___x_366_ = v_env_215_;
v_isShared_367_ = v_isSharedCheck_372_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_toolchain_364_);
lean_inc(v_initPath_363_);
lean_inc(v_initSharedLibPath_362_);
lean_inc(v_initLeanSrcPath_361_);
lean_inc(v_initLeanPath_360_);
lean_inc(v_cacheService_x3f_359_);
lean_inc(v_cacheRevisionEndpoint_x3f_358_);
lean_inc(v_cacheArtifactEndpoint_x3f_357_);
lean_inc(v_cacheKey_x3f_356_);
lean_inc(v_lakeConfig_x3f_355_);
lean_inc(v_restoreAllArtifacts_x3f_353_);
lean_inc(v_enableArtifactCache_x3f_352_);
lean_inc(v_pkgUrlMap_350_);
lean_inc(v_githashOverride_349_);
lean_inc(v_reservoirApiUrl_348_);
lean_inc(v_elan_x3f_347_);
lean_inc(v_lean_346_);
lean_inc(v_lake_345_);
lean_dec(v_env_215_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_372_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 9, v___y_344_);
lean_ctor_set(v___x_366_, 8, v___x_341_);
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_lake_345_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_lean_346_);
lean_ctor_set(v_reuseFailAlloc_371_, 2, v_elan_x3f_347_);
lean_ctor_set(v_reuseFailAlloc_371_, 3, v_reservoirApiUrl_348_);
lean_ctor_set(v_reuseFailAlloc_371_, 4, v_githashOverride_349_);
lean_ctor_set(v_reuseFailAlloc_371_, 5, v_pkgUrlMap_350_);
lean_ctor_set(v_reuseFailAlloc_371_, 6, v_enableArtifactCache_x3f_352_);
lean_ctor_set(v_reuseFailAlloc_371_, 7, v_restoreAllArtifacts_x3f_353_);
lean_ctor_set(v_reuseFailAlloc_371_, 8, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_371_, 9, v___y_344_);
lean_ctor_set(v_reuseFailAlloc_371_, 10, v_lakeConfig_x3f_355_);
lean_ctor_set(v_reuseFailAlloc_371_, 11, v_cacheKey_x3f_356_);
lean_ctor_set(v_reuseFailAlloc_371_, 12, v_cacheArtifactEndpoint_x3f_357_);
lean_ctor_set(v_reuseFailAlloc_371_, 13, v_cacheRevisionEndpoint_x3f_358_);
lean_ctor_set(v_reuseFailAlloc_371_, 14, v_cacheService_x3f_359_);
lean_ctor_set(v_reuseFailAlloc_371_, 15, v_initLeanPath_360_);
lean_ctor_set(v_reuseFailAlloc_371_, 16, v_initLeanSrcPath_361_);
lean_ctor_set(v_reuseFailAlloc_371_, 17, v_initSharedLibPath_362_);
lean_ctor_set(v_reuseFailAlloc_371_, 18, v_initPath_363_);
lean_ctor_set(v_reuseFailAlloc_371_, 19, v_toolchain_364_);
lean_ctor_set_uint8(v_reuseFailAlloc_371_, sizeof(void*)*20, v_noCache_351_);
lean_ctor_set_uint8(v_reuseFailAlloc_371_, sizeof(void*)*20 + 1, v_noSystemCache_354_);
v___x_369_ = v_reuseFailAlloc_371_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_370_; 
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
}
}
}
else
{
lean_del_object(v___x_334_);
lean_dec(v_val_332_);
goto v___jp_219_;
}
}
}
}
v___jp_219_:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(v_userHome_x3f_213_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v_env_215_);
return v___x_221_;
}
else
{
lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_261_; 
v_val_222_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_261_ == 0)
{
v___x_224_ = v___x_220_;
v_isShared_225_ = v_isSharedCheck_261_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_dec(v___x_220_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_261_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v_lake_226_; lean_object* v_lean_227_; lean_object* v_elan_x3f_228_; lean_object* v_reservoirApiUrl_229_; lean_object* v_githashOverride_230_; lean_object* v_pkgUrlMap_231_; uint8_t v_noCache_232_; lean_object* v_enableArtifactCache_x3f_233_; lean_object* v_restoreAllArtifacts_x3f_234_; uint8_t v_noSystemCache_235_; lean_object* v_lakeConfig_x3f_236_; lean_object* v_cacheKey_x3f_237_; lean_object* v_cacheArtifactEndpoint_x3f_238_; lean_object* v_cacheRevisionEndpoint_x3f_239_; lean_object* v_cacheService_x3f_240_; lean_object* v_initLeanPath_241_; lean_object* v_initLeanSrcPath_242_; lean_object* v_initSharedLibPath_243_; lean_object* v_initPath_244_; lean_object* v_toolchain_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_258_; 
v_lake_226_ = lean_ctor_get(v_env_215_, 0);
v_lean_227_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_228_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_229_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_230_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_231_ = lean_ctor_get(v_env_215_, 5);
v_noCache_232_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_233_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_234_ = lean_ctor_get(v_env_215_, 7);
v_noSystemCache_235_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_lakeConfig_x3f_236_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_237_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_238_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_239_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_240_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_241_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_242_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_243_ = lean_ctor_get(v_env_215_, 17);
v_initPath_244_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_245_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_258_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_258_ == 0)
{
lean_object* v_unused_259_; lean_object* v_unused_260_; 
v_unused_259_ = lean_ctor_get(v_env_215_, 9);
lean_dec(v_unused_259_);
v_unused_260_ = lean_ctor_get(v_env_215_, 8);
lean_dec(v_unused_260_);
v___x_247_ = v_env_215_;
v_isShared_248_ = v_isSharedCheck_258_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_toolchain_245_);
lean_inc(v_initPath_244_);
lean_inc(v_initSharedLibPath_243_);
lean_inc(v_initLeanSrcPath_242_);
lean_inc(v_initLeanPath_241_);
lean_inc(v_cacheService_x3f_240_);
lean_inc(v_cacheRevisionEndpoint_x3f_239_);
lean_inc(v_cacheArtifactEndpoint_x3f_238_);
lean_inc(v_cacheKey_x3f_237_);
lean_inc(v_lakeConfig_x3f_236_);
lean_inc(v_restoreAllArtifacts_x3f_234_);
lean_inc(v_enableArtifactCache_x3f_233_);
lean_inc(v_pkgUrlMap_231_);
lean_inc(v_githashOverride_230_);
lean_inc(v_reservoirApiUrl_229_);
lean_inc(v_elan_x3f_228_);
lean_inc(v_lean_227_);
lean_inc(v_lake_226_);
lean_dec(v_env_215_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_258_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_249_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_250_ = l_System_FilePath_join(v_val_222_, v___x_249_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_250_);
v___x_252_ = v___x_224_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_257_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
lean_object* v___x_254_; 
lean_inc_ref(v___x_252_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 9, v___x_252_);
lean_ctor_set(v___x_247_, 8, v___x_252_);
v___x_254_ = v___x_247_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_lake_226_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_lean_227_);
lean_ctor_set(v_reuseFailAlloc_256_, 2, v_elan_x3f_228_);
lean_ctor_set(v_reuseFailAlloc_256_, 3, v_reservoirApiUrl_229_);
lean_ctor_set(v_reuseFailAlloc_256_, 4, v_githashOverride_230_);
lean_ctor_set(v_reuseFailAlloc_256_, 5, v_pkgUrlMap_231_);
lean_ctor_set(v_reuseFailAlloc_256_, 6, v_enableArtifactCache_x3f_233_);
lean_ctor_set(v_reuseFailAlloc_256_, 7, v_restoreAllArtifacts_x3f_234_);
lean_ctor_set(v_reuseFailAlloc_256_, 8, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_256_, 9, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_256_, 10, v_lakeConfig_x3f_236_);
lean_ctor_set(v_reuseFailAlloc_256_, 11, v_cacheKey_x3f_237_);
lean_ctor_set(v_reuseFailAlloc_256_, 12, v_cacheArtifactEndpoint_x3f_238_);
lean_ctor_set(v_reuseFailAlloc_256_, 13, v_cacheRevisionEndpoint_x3f_239_);
lean_ctor_set(v_reuseFailAlloc_256_, 14, v_cacheService_x3f_240_);
lean_ctor_set(v_reuseFailAlloc_256_, 15, v_initLeanPath_241_);
lean_ctor_set(v_reuseFailAlloc_256_, 16, v_initLeanSrcPath_242_);
lean_ctor_set(v_reuseFailAlloc_256_, 17, v_initSharedLibPath_243_);
lean_ctor_set(v_reuseFailAlloc_256_, 18, v_initPath_244_);
lean_ctor_set(v_reuseFailAlloc_256_, 19, v_toolchain_245_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*20, v_noCache_232_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*20 + 1, v_noSystemCache_235_);
v___x_254_ = v_reuseFailAlloc_256_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v___x_255_; 
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
return v___x_255_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs___boxed(lean_object* v_elan_x3f_388_, lean_object* v_userHome_x3f_389_, lean_object* v_toolchain_390_, lean_object* v_env_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(v_elan_x3f_388_, v_userHome_x3f_389_, v_toolchain_390_, v_env_391_);
lean_dec_ref(v_toolchain_390_);
return v_res_393_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_box(0);
v___x_398_ = l_unsafeCast___redArg(v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(lean_object* v_init_399_, lean_object* v_x_400_){
_start:
{
if (lean_obj_tag(v_x_400_) == 0)
{
lean_object* v_k_401_; lean_object* v_v_402_; lean_object* v_l_403_; lean_object* v_r_404_; lean_object* v___x_405_; 
v_k_401_ = lean_ctor_get(v_x_400_, 1);
lean_inc(v_k_401_);
v_v_402_ = lean_ctor_get(v_x_400_, 2);
lean_inc(v_v_402_);
v_l_403_ = lean_ctor_get(v_x_400_, 3);
lean_inc(v_l_403_);
v_r_404_ = lean_ctor_get(v_x_400_, 4);
lean_inc(v_r_404_);
lean_dec_ref_known(v_x_400_, 5);
v___x_405_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(v_init_399_, v_l_403_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_dec(v_r_404_);
lean_dec(v_v_402_);
lean_dec(v_k_401_);
return v___x_405_;
}
else
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_446_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_446_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_446_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_446_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0));
v___x_411_ = lean_string_dec_eq(v_k_401_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v_n_412_; uint8_t v___x_413_; 
lean_inc(v_k_401_);
v_n_412_ = l_String_toName(v_k_401_);
v___x_413_ = l_Lean_Name_isAnonymous(v_n_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; 
lean_del_object(v___x_408_);
lean_dec(v_k_401_);
v___x_414_ = l_Lean_Json_getStr_x3f(v_v_402_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
lean_dec(v_n_412_);
lean_dec(v_a_406_);
lean_dec(v_r_404_);
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_424_; 
v_a_423_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_414_, 1);
v___x_424_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_412_, v_a_423_, v_a_406_);
v_init_399_ = v___x_424_;
v_x_400_ = v_r_404_;
goto _start;
}
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_431_; 
lean_dec(v_n_412_);
lean_dec(v_a_406_);
lean_dec(v_r_404_);
lean_dec(v_v_402_);
v___x_426_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1));
v___x_427_ = lean_string_append(v___x_426_, v_k_401_);
lean_dec(v_k_401_);
v___x_428_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2));
v___x_429_ = lean_string_append(v___x_427_, v___x_428_);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 0);
lean_ctor_set(v___x_408_, 0, v___x_429_);
v___x_431_ = v___x_408_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
else
{
lean_object* v___x_433_; 
lean_del_object(v___x_408_);
lean_dec(v_k_401_);
v___x_433_ = l_Lean_Json_getStr_x3f(v_v_402_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_a_406_);
lean_dec(v_r_404_);
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_a_442_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v___x_433_, 1);
v___x_443_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__3);
v___x_444_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_443_, v_a_442_, v_a_406_);
v_init_399_ = v___x_444_;
v_x_400_ = v_r_404_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_447_; 
v___x_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_447_, 0, v_init_399_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0(lean_object* v_x_449_){
_start:
{
if (lean_obj_tag(v_x_449_) == 5)
{
lean_object* v_kvPairs_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_kvPairs_450_ = lean_ctor_get(v_x_449_, 0);
lean_inc(v_kvPairs_450_);
lean_dec_ref_known(v_x_449_, 1);
v___x_451_ = lean_box(1);
v___x_452_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(v___x_451_, v_kvPairs_450_);
return v___x_452_;
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_453_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0));
v___x_454_ = lean_unsigned_to_nat(80u);
v___x_455_ = l_Lean_Json_pretty(v_x_449_, v___x_454_);
v___x_456_ = lean_string_append(v___x_453_, v___x_455_);
lean_dec_ref(v___x_455_);
v___x_457_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2));
v___x_458_ = lean_string_append(v___x_456_, v___x_457_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap(){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v_a_466_; 
v___x_463_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0));
v___x_464_ = lean_io_getenv(v___x_463_);
if (lean_obj_tag(v___x_464_) == 1)
{
lean_object* v_val_470_; lean_object* v___x_471_; 
v_val_470_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_val_470_);
lean_dec_ref_known(v___x_464_, 1);
v___x_471_ = l_Lean_Json_parse(v_val_470_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v_a_466_ = v_a_472_;
goto v___jp_465_;
}
else
{
lean_object* v_a_473_; lean_object* v___x_474_; 
v_a_473_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_471_, 1);
v___x_474_ = l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0(v_a_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v_a_466_ = v_a_475_;
goto v___jp_465_;
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
v_a_476_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_474_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set_tag(v___x_478_, 0);
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; 
lean_dec(v___x_464_);
v___x_484_ = lean_box(1);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
v___jp_465_:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_467_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1));
v___x_468_ = lean_string_append(v___x_467_, v_a_466_);
lean_dec_ref(v_a_466_);
v___x_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___boxed(lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap();
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(lean_object* v_url_488_){
_start:
{
uint32_t v___y_490_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_499_ = lean_unsigned_to_nat(0u);
v___x_500_ = lean_string_utf8_byte_size(v_url_488_);
lean_inc_ref(v_url_488_);
v___x_501_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_501_, 0, v_url_488_);
lean_ctor_set(v___x_501_, 1, v___x_499_);
lean_ctor_set(v___x_501_, 2, v___x_500_);
v___x_502_ = l_String_Slice_Pos_prev_x3f(v___x_501_, v___x_500_);
if (lean_obj_tag(v___x_502_) == 0)
{
uint32_t v___x_503_; 
lean_dec_ref_known(v___x_501_, 3);
v___x_503_ = 65;
v___y_490_ = v___x_503_;
goto v___jp_489_;
}
else
{
lean_object* v_val_504_; lean_object* v___x_505_; 
v_val_504_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_val_504_);
lean_dec_ref_known(v___x_502_, 1);
v___x_505_ = l_String_Slice_Pos_get_x3f(v___x_501_, v_val_504_);
lean_dec(v_val_504_);
lean_dec_ref_known(v___x_501_, 3);
if (lean_obj_tag(v___x_505_) == 0)
{
uint32_t v___x_506_; 
v___x_506_ = 65;
v___y_490_ = v___x_506_;
goto v___jp_489_;
}
else
{
lean_object* v_val_507_; uint32_t v___x_508_; 
v_val_507_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_val_507_);
lean_dec_ref_known(v___x_505_, 1);
v___x_508_ = lean_unbox_uint32(v_val_507_);
lean_dec(v_val_507_);
v___y_490_ = v___x_508_;
goto v___jp_489_;
}
}
v___jp_489_:
{
uint32_t v___x_491_; uint8_t v___x_492_; 
v___x_491_ = 47;
v___x_492_ = lean_uint32_dec_eq(v___y_490_, v___x_491_);
if (v___x_492_ == 0)
{
return v_url_488_;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_493_ = lean_unsigned_to_nat(1u);
v___x_494_ = lean_unsigned_to_nat(0u);
v___x_495_ = lean_string_utf8_byte_size(v_url_488_);
lean_inc_ref(v_url_488_);
v___x_496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_496_, 0, v_url_488_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
lean_ctor_set(v___x_496_, 2, v___x_495_);
v___x_497_ = l_String_Slice_Pos_prevn(v___x_496_, v___x_495_, v___x_493_);
lean_dec_ref_known(v___x_496_, 3);
v___x_498_ = lean_string_utf8_extract_fast(v_url_488_, v___x_494_, v___x_497_);
lean_dec(v___x_497_);
lean_dec_ref(v_url_488_);
return v___x_498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_compute(lean_object* v_lake_527_, lean_object* v_lean_528_, lean_object* v_elan_x3f_529_, lean_object* v_noCache_530_){
_start:
{
lean_object* v___y_533_; uint8_t v___y_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; uint8_t v___y_550_; lean_object* v___y_551_; lean_object* v___y_555_; uint8_t v___y_556_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; uint8_t v___y_572_; lean_object* v___y_573_; lean_object* v___y_592_; uint8_t v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; uint8_t v___y_609_; lean_object* v___y_610_; lean_object* v___y_621_; uint8_t v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; uint8_t v___y_638_; lean_object* v___y_639_; lean_object* v___y_650_; uint8_t v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; uint8_t v___y_667_; lean_object* v___y_668_; lean_object* v___y_686_; uint8_t v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; uint8_t v___y_703_; lean_object* v_val_704_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; uint8_t v___y_722_; lean_object* v___y_723_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; uint8_t v___y_748_; lean_object* v___y_749_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; uint8_t v___y_770_; lean_object* v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v_a_820_; lean_object* v_a_850_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(l_Lake_Env_compute___closed__16));
v___x_870_ = lean_io_getenv(v___x_869_);
if (lean_obj_tag(v___x_870_) == 1)
{
lean_object* v_val_871_; lean_object* v___x_872_; 
v_val_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_val_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_871_);
v_a_850_ = v___x_872_;
goto v___jp_849_;
}
else
{
lean_object* v___x_873_; 
lean_dec(v___x_870_);
v___x_873_ = ((lean_object*)(l_Lake_Env_compute___closed__17));
v_a_850_ = v___x_873_;
goto v___jp_849_;
}
v___jp_532_:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
lean_inc_ref(v___y_543_);
lean_inc_n(v___y_545_, 2);
lean_inc(v_elan_x3f_529_);
v___x_552_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v___x_552_, 0, v_lake_527_);
lean_ctor_set(v___x_552_, 1, v_lean_528_);
lean_ctor_set(v___x_552_, 2, v_elan_x3f_529_);
lean_ctor_set(v___x_552_, 3, v___y_544_);
lean_ctor_set(v___x_552_, 4, v___y_539_);
lean_ctor_set(v___x_552_, 5, v___y_548_);
lean_ctor_set(v___x_552_, 6, v___y_533_);
lean_ctor_set(v___x_552_, 7, v___y_546_);
lean_ctor_set(v___x_552_, 8, v___y_545_);
lean_ctor_set(v___x_552_, 9, v___y_545_);
lean_ctor_set(v___x_552_, 10, v___y_537_);
lean_ctor_set(v___x_552_, 11, v___y_536_);
lean_ctor_set(v___x_552_, 12, v___y_535_);
lean_ctor_set(v___x_552_, 13, v___y_541_);
lean_ctor_set(v___x_552_, 14, v___y_551_);
lean_ctor_set(v___x_552_, 15, v___y_540_);
lean_ctor_set(v___x_552_, 16, v___y_549_);
lean_ctor_set(v___x_552_, 17, v___y_547_);
lean_ctor_set(v___x_552_, 18, v___y_538_);
lean_ctor_set(v___x_552_, 19, v___y_543_);
lean_ctor_set_uint8(v___x_552_, sizeof(void*)*20, v___y_550_);
lean_ctor_set_uint8(v___x_552_, sizeof(void*)*20 + 1, v___y_534_);
v___x_553_ = l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(v_elan_x3f_529_, v___y_542_, v___y_543_, v___x_552_);
lean_dec_ref(v___y_543_);
return v___x_553_;
}
v___jp_554_:
{
if (lean_obj_tag(v___y_557_) == 0)
{
lean_object* v___x_574_; 
v___x_574_ = lean_box(0);
v___y_533_ = v___y_555_;
v___y_534_ = v___y_556_;
v___y_535_ = v___y_558_;
v___y_536_ = v___y_559_;
v___y_537_ = v___y_560_;
v___y_538_ = v___y_561_;
v___y_539_ = v___y_562_;
v___y_540_ = v___y_563_;
v___y_541_ = v___y_573_;
v___y_542_ = v___y_564_;
v___y_543_ = v___y_565_;
v___y_544_ = v___y_566_;
v___y_545_ = v___y_567_;
v___y_546_ = v___y_568_;
v___y_547_ = v___y_570_;
v___y_548_ = v___y_569_;
v___y_549_ = v___y_571_;
v___y_550_ = v___y_572_;
v___y_551_ = v___x_574_;
goto v___jp_532_;
}
else
{
lean_object* v_val_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_590_; 
v_val_575_ = lean_ctor_get(v___y_557_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___y_557_);
if (v_isSharedCheck_590_ == 0)
{
v___x_577_ = v___y_557_;
v_isShared_578_ = v_isSharedCheck_590_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_val_575_);
lean_dec(v___y_557_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_590_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v_str_583_; lean_object* v_startInclusive_584_; lean_object* v_endExclusive_585_; lean_object* v___x_586_; lean_object* v___x_588_; 
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_580_ = lean_string_utf8_byte_size(v_val_575_);
v___x_581_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_581_, 0, v_val_575_);
lean_ctor_set(v___x_581_, 1, v___x_579_);
lean_ctor_set(v___x_581_, 2, v___x_580_);
v___x_582_ = l_String_Slice_trimAscii(v___x_581_);
v_str_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc_ref(v_str_583_);
v_startInclusive_584_ = lean_ctor_get(v___x_582_, 1);
lean_inc(v_startInclusive_584_);
v_endExclusive_585_ = lean_ctor_get(v___x_582_, 2);
lean_inc(v_endExclusive_585_);
lean_dec_ref(v___x_582_);
v___x_586_ = lean_string_utf8_extract_fast(v_str_583_, v_startInclusive_584_, v_endExclusive_585_);
lean_dec(v_endExclusive_585_);
lean_dec(v_startInclusive_584_);
lean_dec_ref(v_str_583_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_586_);
v___x_588_ = v___x_577_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
v___y_533_ = v___y_555_;
v___y_534_ = v___y_556_;
v___y_535_ = v___y_558_;
v___y_536_ = v___y_559_;
v___y_537_ = v___y_560_;
v___y_538_ = v___y_561_;
v___y_539_ = v___y_562_;
v___y_540_ = v___y_563_;
v___y_541_ = v___y_573_;
v___y_542_ = v___y_564_;
v___y_543_ = v___y_565_;
v___y_544_ = v___y_566_;
v___y_545_ = v___y_567_;
v___y_546_ = v___y_568_;
v___y_547_ = v___y_570_;
v___y_548_ = v___y_569_;
v___y_549_ = v___y_571_;
v___y_550_ = v___y_572_;
v___y_551_ = v___x_588_;
goto v___jp_532_;
}
}
}
}
v___jp_591_:
{
if (lean_obj_tag(v___y_598_) == 0)
{
v___y_555_ = v___y_592_;
v___y_556_ = v___y_593_;
v___y_557_ = v___y_594_;
v___y_558_ = v___y_610_;
v___y_559_ = v___y_595_;
v___y_560_ = v___y_596_;
v___y_561_ = v___y_597_;
v___y_562_ = v___y_599_;
v___y_563_ = v___y_600_;
v___y_564_ = v___y_601_;
v___y_565_ = v___y_602_;
v___y_566_ = v___y_603_;
v___y_567_ = v___y_604_;
v___y_568_ = v___y_605_;
v___y_569_ = v___y_607_;
v___y_570_ = v___y_606_;
v___y_571_ = v___y_608_;
v___y_572_ = v___y_609_;
v___y_573_ = v___y_598_;
goto v___jp_554_;
}
else
{
lean_object* v_val_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_619_; 
v_val_611_ = lean_ctor_get(v___y_598_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___y_598_);
if (v_isSharedCheck_619_ == 0)
{
v___x_613_ = v___y_598_;
v_isShared_614_ = v_isSharedCheck_619_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_val_611_);
lean_dec(v___y_598_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_619_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_615_; lean_object* v___x_617_; 
v___x_615_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_611_);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_615_);
v___x_617_ = v___x_613_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
v___y_555_ = v___y_592_;
v___y_556_ = v___y_593_;
v___y_557_ = v___y_594_;
v___y_558_ = v___y_610_;
v___y_559_ = v___y_595_;
v___y_560_ = v___y_596_;
v___y_561_ = v___y_597_;
v___y_562_ = v___y_599_;
v___y_563_ = v___y_600_;
v___y_564_ = v___y_601_;
v___y_565_ = v___y_602_;
v___y_566_ = v___y_603_;
v___y_567_ = v___y_604_;
v___y_568_ = v___y_605_;
v___y_569_ = v___y_607_;
v___y_570_ = v___y_606_;
v___y_571_ = v___y_608_;
v___y_572_ = v___y_609_;
v___y_573_ = v___x_617_;
goto v___jp_554_;
}
}
}
}
v___jp_620_:
{
if (lean_obj_tag(v___y_629_) == 0)
{
v___y_592_ = v___y_621_;
v___y_593_ = v___y_622_;
v___y_594_ = v___y_623_;
v___y_595_ = v___y_639_;
v___y_596_ = v___y_624_;
v___y_597_ = v___y_625_;
v___y_598_ = v___y_626_;
v___y_599_ = v___y_627_;
v___y_600_ = v___y_628_;
v___y_601_ = v___y_630_;
v___y_602_ = v___y_631_;
v___y_603_ = v___y_632_;
v___y_604_ = v___y_633_;
v___y_605_ = v___y_634_;
v___y_606_ = v___y_636_;
v___y_607_ = v___y_635_;
v___y_608_ = v___y_637_;
v___y_609_ = v___y_638_;
v___y_610_ = v___y_629_;
goto v___jp_591_;
}
else
{
lean_object* v_val_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_648_; 
v_val_640_ = lean_ctor_get(v___y_629_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___y_629_);
if (v_isSharedCheck_648_ == 0)
{
v___x_642_ = v___y_629_;
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_val_640_);
lean_dec(v___y_629_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_644_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_640_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_644_);
v___x_646_ = v___x_642_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
v___y_592_ = v___y_621_;
v___y_593_ = v___y_622_;
v___y_594_ = v___y_623_;
v___y_595_ = v___y_639_;
v___y_596_ = v___y_624_;
v___y_597_ = v___y_625_;
v___y_598_ = v___y_626_;
v___y_599_ = v___y_627_;
v___y_600_ = v___y_628_;
v___y_601_ = v___y_630_;
v___y_602_ = v___y_631_;
v___y_603_ = v___y_632_;
v___y_604_ = v___y_633_;
v___y_605_ = v___y_634_;
v___y_606_ = v___y_636_;
v___y_607_ = v___y_635_;
v___y_608_ = v___y_637_;
v___y_609_ = v___y_638_;
v___y_610_ = v___x_646_;
goto v___jp_591_;
}
}
}
}
v___jp_649_:
{
if (lean_obj_tag(v___y_653_) == 0)
{
v___y_621_ = v___y_650_;
v___y_622_ = v___y_651_;
v___y_623_ = v___y_652_;
v___y_624_ = v___y_668_;
v___y_625_ = v___y_654_;
v___y_626_ = v___y_655_;
v___y_627_ = v___y_656_;
v___y_628_ = v___y_657_;
v___y_629_ = v___y_658_;
v___y_630_ = v___y_659_;
v___y_631_ = v___y_660_;
v___y_632_ = v___y_661_;
v___y_633_ = v___y_662_;
v___y_634_ = v___y_663_;
v___y_635_ = v___y_665_;
v___y_636_ = v___y_664_;
v___y_637_ = v___y_666_;
v___y_638_ = v___y_667_;
v___y_639_ = v___y_653_;
goto v___jp_620_;
}
else
{
lean_object* v_val_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_684_; 
v_val_669_ = lean_ctor_get(v___y_653_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___y_653_);
if (v_isSharedCheck_684_ == 0)
{
v___x_671_ = v___y_653_;
v_isShared_672_ = v_isSharedCheck_684_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_val_669_);
lean_dec(v___y_653_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_684_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v_str_677_; lean_object* v_startInclusive_678_; lean_object* v_endExclusive_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_673_ = lean_unsigned_to_nat(0u);
v___x_674_ = lean_string_utf8_byte_size(v_val_669_);
v___x_675_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_675_, 0, v_val_669_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
lean_ctor_set(v___x_675_, 2, v___x_674_);
v___x_676_ = l_String_Slice_trimAscii(v___x_675_);
v_str_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc_ref(v_str_677_);
v_startInclusive_678_ = lean_ctor_get(v___x_676_, 1);
lean_inc(v_startInclusive_678_);
v_endExclusive_679_ = lean_ctor_get(v___x_676_, 2);
lean_inc(v_endExclusive_679_);
lean_dec_ref(v___x_676_);
v___x_680_ = lean_string_utf8_extract_fast(v_str_677_, v_startInclusive_678_, v_endExclusive_679_);
lean_dec(v_endExclusive_679_);
lean_dec(v_startInclusive_678_);
lean_dec_ref(v_str_677_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_680_);
v___x_682_ = v___x_671_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
v___y_621_ = v___y_650_;
v___y_622_ = v___y_651_;
v___y_623_ = v___y_652_;
v___y_624_ = v___y_668_;
v___y_625_ = v___y_654_;
v___y_626_ = v___y_655_;
v___y_627_ = v___y_656_;
v___y_628_ = v___y_657_;
v___y_629_ = v___y_658_;
v___y_630_ = v___y_659_;
v___y_631_ = v___y_660_;
v___y_632_ = v___y_661_;
v___y_633_ = v___y_662_;
v___y_634_ = v___y_663_;
v___y_635_ = v___y_665_;
v___y_636_ = v___y_664_;
v___y_637_ = v___y_666_;
v___y_638_ = v___y_667_;
v___y_639_ = v___x_682_;
goto v___jp_620_;
}
}
}
}
v___jp_685_:
{
lean_object* v___x_705_; 
v___x_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_705_, 0, v_val_704_);
v___y_650_ = v___y_686_;
v___y_651_ = v___y_687_;
v___y_652_ = v___y_688_;
v___y_653_ = v___y_689_;
v___y_654_ = v___y_690_;
v___y_655_ = v___y_691_;
v___y_656_ = v___y_692_;
v___y_657_ = v___y_693_;
v___y_658_ = v___y_694_;
v___y_659_ = v___y_695_;
v___y_660_ = v___y_696_;
v___y_661_ = v___y_697_;
v___y_662_ = v___y_698_;
v___y_663_ = v___y_699_;
v___y_664_ = v___y_701_;
v___y_665_ = v___y_700_;
v___y_666_ = v___y_702_;
v___y_667_ = v___y_703_;
v___y_668_ = v___x_705_;
goto v___jp_649_;
}
v___jp_706_:
{
uint8_t v___x_724_; lean_object* v___x_725_; 
v___x_724_ = 0;
v___x_725_ = lean_box(0);
if (lean_obj_tag(v___y_718_) == 0)
{
if (lean_obj_tag(v___y_715_) == 0)
{
v___y_650_ = v___y_707_;
v___y_651_ = v___x_724_;
v___y_652_ = v___y_708_;
v___y_653_ = v___y_709_;
v___y_654_ = v___y_710_;
v___y_655_ = v___y_711_;
v___y_656_ = v___y_712_;
v___y_657_ = v___y_713_;
v___y_658_ = v___y_714_;
v___y_659_ = v___y_715_;
v___y_660_ = v___y_716_;
v___y_661_ = v___y_717_;
v___y_662_ = v___x_725_;
v___y_663_ = v___y_723_;
v___y_664_ = v___y_720_;
v___y_665_ = v___y_719_;
v___y_666_ = v___y_721_;
v___y_667_ = v___y_722_;
v___y_668_ = v___y_715_;
goto v___jp_649_;
}
else
{
lean_object* v_val_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_val_726_ = lean_ctor_get(v___y_715_, 0);
v___x_727_ = ((lean_object*)(l_Lake_Env_compute___closed__0));
lean_inc(v_val_726_);
v___x_728_ = l_System_FilePath_join(v_val_726_, v___x_727_);
v___x_729_ = ((lean_object*)(l_Lake_Env_compute___closed__1));
v___x_730_ = l_System_FilePath_join(v___x_728_, v___x_729_);
v___y_686_ = v___y_707_;
v___y_687_ = v___x_724_;
v___y_688_ = v___y_708_;
v___y_689_ = v___y_709_;
v___y_690_ = v___y_710_;
v___y_691_ = v___y_711_;
v___y_692_ = v___y_712_;
v___y_693_ = v___y_713_;
v___y_694_ = v___y_714_;
v___y_695_ = v___y_715_;
v___y_696_ = v___y_716_;
v___y_697_ = v___y_717_;
v___y_698_ = v___x_725_;
v___y_699_ = v___y_723_;
v___y_700_ = v___y_719_;
v___y_701_ = v___y_720_;
v___y_702_ = v___y_721_;
v___y_703_ = v___y_722_;
v_val_704_ = v___x_730_;
goto v___jp_685_;
}
}
else
{
lean_object* v_val_731_; 
v_val_731_ = lean_ctor_get(v___y_718_, 0);
lean_inc(v_val_731_);
lean_dec_ref_known(v___y_718_, 1);
v___y_686_ = v___y_707_;
v___y_687_ = v___x_724_;
v___y_688_ = v___y_708_;
v___y_689_ = v___y_709_;
v___y_690_ = v___y_710_;
v___y_691_ = v___y_711_;
v___y_692_ = v___y_712_;
v___y_693_ = v___y_713_;
v___y_694_ = v___y_714_;
v___y_695_ = v___y_715_;
v___y_696_ = v___y_716_;
v___y_697_ = v___y_717_;
v___y_698_ = v___x_725_;
v___y_699_ = v___y_723_;
v___y_700_ = v___y_719_;
v___y_701_ = v___y_720_;
v___y_702_ = v___y_721_;
v___y_703_ = v___y_722_;
v_val_704_ = v_val_731_;
goto v___jp_685_;
}
}
v___jp_732_:
{
if (lean_obj_tag(v___y_747_) == 0)
{
lean_object* v___x_750_; 
v___x_750_ = lean_box(0);
v___y_707_ = v___y_749_;
v___y_708_ = v___y_733_;
v___y_709_ = v___y_734_;
v___y_710_ = v___y_735_;
v___y_711_ = v___y_736_;
v___y_712_ = v___y_737_;
v___y_713_ = v___y_738_;
v___y_714_ = v___y_739_;
v___y_715_ = v___y_740_;
v___y_716_ = v___y_741_;
v___y_717_ = v___y_742_;
v___y_718_ = v___y_743_;
v___y_719_ = v___y_745_;
v___y_720_ = v___y_744_;
v___y_721_ = v___y_746_;
v___y_722_ = v___y_748_;
v___y_723_ = v___x_750_;
goto v___jp_706_;
}
else
{
lean_object* v_val_751_; lean_object* v___x_752_; 
v_val_751_ = lean_ctor_get(v___y_747_, 0);
lean_inc(v_val_751_);
lean_dec_ref_known(v___y_747_, 1);
v___x_752_ = l_Lake_envToBool_x3f(v_val_751_);
v___y_707_ = v___y_749_;
v___y_708_ = v___y_733_;
v___y_709_ = v___y_734_;
v___y_710_ = v___y_735_;
v___y_711_ = v___y_736_;
v___y_712_ = v___y_737_;
v___y_713_ = v___y_738_;
v___y_714_ = v___y_739_;
v___y_715_ = v___y_740_;
v___y_716_ = v___y_741_;
v___y_717_ = v___y_742_;
v___y_718_ = v___y_743_;
v___y_719_ = v___y_745_;
v___y_720_ = v___y_744_;
v___y_721_ = v___y_746_;
v___y_722_ = v___y_748_;
v___y_723_ = v___x_752_;
goto v___jp_706_;
}
}
v___jp_753_:
{
if (lean_obj_tag(v___y_763_) == 0)
{
lean_object* v___x_771_; 
v___x_771_ = lean_box(0);
v___y_733_ = v___y_754_;
v___y_734_ = v___y_755_;
v___y_735_ = v___y_756_;
v___y_736_ = v___y_757_;
v___y_737_ = v___y_758_;
v___y_738_ = v___y_759_;
v___y_739_ = v___y_760_;
v___y_740_ = v___y_761_;
v___y_741_ = v___y_762_;
v___y_742_ = v___y_764_;
v___y_743_ = v___y_765_;
v___y_744_ = v___y_767_;
v___y_745_ = v___y_766_;
v___y_746_ = v___y_768_;
v___y_747_ = v___y_769_;
v___y_748_ = v___y_770_;
v___y_749_ = v___x_771_;
goto v___jp_732_;
}
else
{
lean_object* v_val_772_; lean_object* v___x_773_; 
v_val_772_ = lean_ctor_get(v___y_763_, 0);
lean_inc(v_val_772_);
lean_dec_ref_known(v___y_763_, 1);
v___x_773_ = l_Lake_envToBool_x3f(v_val_772_);
v___y_733_ = v___y_754_;
v___y_734_ = v___y_755_;
v___y_735_ = v___y_756_;
v___y_736_ = v___y_757_;
v___y_737_ = v___y_758_;
v___y_738_ = v___y_759_;
v___y_739_ = v___y_760_;
v___y_740_ = v___y_761_;
v___y_741_ = v___y_762_;
v___y_742_ = v___y_764_;
v___y_743_ = v___y_765_;
v___y_744_ = v___y_767_;
v___y_745_ = v___y_766_;
v___y_746_ = v___y_768_;
v___y_747_ = v___y_769_;
v___y_748_ = v___y_770_;
v___y_749_ = v___x_773_;
goto v___jp_732_;
}
}
v___jp_774_:
{
uint8_t v___x_791_; 
v___x_791_ = 0;
v___y_754_ = v___y_775_;
v___y_755_ = v___y_776_;
v___y_756_ = v___y_777_;
v___y_757_ = v___y_778_;
v___y_758_ = v___y_779_;
v___y_759_ = v___y_780_;
v___y_760_ = v___y_781_;
v___y_761_ = v___y_782_;
v___y_762_ = v___y_783_;
v___y_763_ = v___y_784_;
v___y_764_ = v___y_785_;
v___y_765_ = v___y_786_;
v___y_766_ = v___y_788_;
v___y_767_ = v___y_787_;
v___y_768_ = v___y_789_;
v___y_769_ = v___y_790_;
v___y_770_ = v___x_791_;
goto v___jp_753_;
}
v___jp_792_:
{
if (lean_obj_tag(v_noCache_530_) == 0)
{
if (lean_obj_tag(v___y_795_) == 0)
{
v___y_775_ = v___y_793_;
v___y_776_ = v___y_794_;
v___y_777_ = v___y_796_;
v___y_778_ = v___y_797_;
v___y_779_ = v___y_809_;
v___y_780_ = v___y_798_;
v___y_781_ = v___y_799_;
v___y_782_ = v___y_800_;
v___y_783_ = v___y_801_;
v___y_784_ = v___y_802_;
v___y_785_ = v___y_803_;
v___y_786_ = v___y_804_;
v___y_787_ = v___y_805_;
v___y_788_ = v___y_806_;
v___y_789_ = v___y_807_;
v___y_790_ = v___y_808_;
goto v___jp_774_;
}
else
{
lean_object* v_val_810_; lean_object* v___x_811_; 
v_val_810_ = lean_ctor_get(v___y_795_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v___y_795_, 1);
v___x_811_ = l_Lake_envToBool_x3f(v_val_810_);
if (lean_obj_tag(v___x_811_) == 0)
{
v___y_775_ = v___y_793_;
v___y_776_ = v___y_794_;
v___y_777_ = v___y_796_;
v___y_778_ = v___y_797_;
v___y_779_ = v___y_809_;
v___y_780_ = v___y_798_;
v___y_781_ = v___y_799_;
v___y_782_ = v___y_800_;
v___y_783_ = v___y_801_;
v___y_784_ = v___y_802_;
v___y_785_ = v___y_803_;
v___y_786_ = v___y_804_;
v___y_787_ = v___y_805_;
v___y_788_ = v___y_806_;
v___y_789_ = v___y_807_;
v___y_790_ = v___y_808_;
goto v___jp_774_;
}
else
{
lean_object* v_val_812_; uint8_t v___x_813_; 
v_val_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_val_812_);
lean_dec_ref_known(v___x_811_, 1);
v___x_813_ = lean_unbox(v_val_812_);
lean_dec(v_val_812_);
v___y_754_ = v___y_793_;
v___y_755_ = v___y_794_;
v___y_756_ = v___y_796_;
v___y_757_ = v___y_797_;
v___y_758_ = v___y_809_;
v___y_759_ = v___y_798_;
v___y_760_ = v___y_799_;
v___y_761_ = v___y_800_;
v___y_762_ = v___y_801_;
v___y_763_ = v___y_802_;
v___y_764_ = v___y_803_;
v___y_765_ = v___y_804_;
v___y_766_ = v___y_806_;
v___y_767_ = v___y_805_;
v___y_768_ = v___y_807_;
v___y_769_ = v___y_808_;
v___y_770_ = v___x_813_;
goto v___jp_753_;
}
}
}
else
{
lean_object* v_val_814_; uint8_t v___x_815_; 
lean_dec(v___y_795_);
v_val_814_ = lean_ctor_get(v_noCache_530_, 0);
v___x_815_ = lean_unbox(v_val_814_);
v___y_754_ = v___y_793_;
v___y_755_ = v___y_794_;
v___y_756_ = v___y_796_;
v___y_757_ = v___y_797_;
v___y_758_ = v___y_809_;
v___y_759_ = v___y_798_;
v___y_760_ = v___y_799_;
v___y_761_ = v___y_800_;
v___y_762_ = v___y_801_;
v___y_763_ = v___y_802_;
v___y_764_ = v___y_803_;
v___y_765_ = v___y_804_;
v___y_766_ = v___y_806_;
v___y_767_ = v___y_805_;
v___y_768_ = v___y_807_;
v___y_769_ = v___y_808_;
v___y_770_ = v___x_815_;
goto v___jp_753_;
}
}
v___jp_816_:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_821_ = ((lean_object*)(l_Lake_Env_compute___closed__2));
v___x_822_ = lean_io_getenv(v___x_821_);
v___x_823_ = ((lean_object*)(l_Lake_Env_compute___closed__3));
v___x_824_ = lean_io_getenv(v___x_823_);
v___x_825_ = ((lean_object*)(l_Lake_Env_compute___closed__4));
v___x_826_ = lean_io_getenv(v___x_825_);
v___x_827_ = ((lean_object*)(l_Lake_Env_compute___closed__5));
v___x_828_ = lean_io_getenv(v___x_827_);
v___x_829_ = ((lean_object*)(l_Lake_Env_compute___closed__6));
v___x_830_ = lean_io_getenv(v___x_829_);
v___x_831_ = ((lean_object*)(l_Lake_Env_compute___closed__7));
v___x_832_ = lean_io_getenv(v___x_831_);
v___x_833_ = ((lean_object*)(l_Lake_Env_compute___closed__8));
v___x_834_ = lean_io_getenv(v___x_833_);
v___x_835_ = ((lean_object*)(l_Lake_Env_compute___closed__9));
v___x_836_ = lean_io_getenv(v___x_835_);
v___x_837_ = ((lean_object*)(l_Lake_Env_compute___closed__10));
v___x_838_ = lean_io_getenv(v___x_837_);
v___x_839_ = ((lean_object*)(l_Lake_Env_compute___closed__11));
v___x_840_ = l_Lake_getSearchPath(v___x_839_);
v___x_841_ = ((lean_object*)(l_Lake_Env_compute___closed__12));
v___x_842_ = l_Lake_getSearchPath(v___x_841_);
v___x_843_ = l_Lake_sharedLibPathEnvVar;
v___x_844_ = l_Lake_getSearchPath(v___x_843_);
v___x_845_ = ((lean_object*)(l_Lake_Env_compute___closed__13));
v___x_846_ = l_Lake_getSearchPath(v___x_845_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v___x_847_; 
v___x_847_ = ((lean_object*)(l_Lake_instInhabitedEnv_default___closed__0));
v___y_793_ = v___x_836_;
v___y_794_ = v___x_830_;
v___y_795_ = v___x_822_;
v___y_796_ = v___x_846_;
v___y_797_ = v___x_834_;
v___y_798_ = v___x_840_;
v___y_799_ = v___x_832_;
v___y_800_ = v___y_818_;
v___y_801_ = v___y_817_;
v___y_802_ = v___x_824_;
v___y_803_ = v_a_820_;
v___y_804_ = v___x_828_;
v___y_805_ = v___x_844_;
v___y_806_ = v___y_819_;
v___y_807_ = v___x_842_;
v___y_808_ = v___x_826_;
v___y_809_ = v___x_847_;
goto v___jp_792_;
}
else
{
lean_object* v_val_848_; 
v_val_848_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_val_848_);
lean_dec_ref_known(v___x_838_, 1);
v___y_793_ = v___x_836_;
v___y_794_ = v___x_830_;
v___y_795_ = v___x_822_;
v___y_796_ = v___x_846_;
v___y_797_ = v___x_834_;
v___y_798_ = v___x_840_;
v___y_799_ = v___x_832_;
v___y_800_ = v___y_818_;
v___y_801_ = v___y_817_;
v___y_802_ = v___x_824_;
v___y_803_ = v_a_820_;
v___y_804_ = v___x_828_;
v___y_805_ = v___x_844_;
v___y_806_ = v___y_819_;
v___y_807_ = v___x_842_;
v___y_808_ = v___x_826_;
v___y_809_ = v_val_848_;
goto v___jp_792_;
}
}
v___jp_849_:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = l_Lake_Env_computeToolchain();
v___x_852_ = l_Lake_getUserHome_x3f();
v___x_853_ = l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap();
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_853_, 1);
v___x_855_ = ((lean_object*)(l_Lake_Env_compute___closed__14));
v___x_856_ = lean_io_getenv(v___x_855_);
if (lean_obj_tag(v___x_856_) == 1)
{
lean_object* v_val_857_; lean_object* v___x_858_; 
lean_dec_ref(v_a_850_);
v_val_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_val_857_);
lean_dec_ref_known(v___x_856_, 1);
v___x_858_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_857_);
v___y_817_ = v___x_851_;
v___y_818_ = v___x_852_;
v___y_819_ = v_a_854_;
v_a_820_ = v___x_858_;
goto v___jp_816_;
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; 
lean_dec(v___x_856_);
v___x_859_ = ((lean_object*)(l_Lake_Env_compute___closed__15));
v___x_860_ = lean_string_append(v_a_850_, v___x_859_);
v___y_817_ = v___x_851_;
v___y_818_ = v___x_852_;
v___y_819_ = v_a_854_;
v_a_820_ = v___x_860_;
goto v___jp_816_;
}
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_dec(v___x_852_);
lean_dec_ref(v___x_851_);
lean_dec_ref(v_a_850_);
lean_dec(v_elan_x3f_529_);
lean_dec_ref(v_lean_528_);
lean_dec_ref(v_lake_527_);
v_a_861_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_853_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_853_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_compute___boxed(lean_object* v_lake_874_, lean_object* v_lean_875_, lean_object* v_elan_x3f_876_, lean_object* v_noCache_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lake_Env_compute(v_lake_874_, v_lean_875_, v_elan_x3f_876_, v_noCache_877_);
lean_dec(v_noCache_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain(lean_object* v_env_880_){
_start:
{
lean_object* v_toolchain_881_; 
v_toolchain_881_ = lean_ctor_get(v_env_880_, 19);
lean_inc_ref(v_toolchain_881_);
return v_toolchain_881_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain___boxed(lean_object* v_env_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lake_Env_cacheToolchain(v_env_882_);
lean_dec_ref(v_env_882_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash(lean_object* v_env_884_){
_start:
{
lean_object* v_lean_885_; lean_object* v_githashOverride_886_; lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v_lean_885_ = lean_ctor_get(v_env_884_, 1);
v_githashOverride_886_ = lean_ctor_get(v_env_884_, 4);
v___x_887_ = lean_string_utf8_byte_size(v_githashOverride_886_);
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_nat_dec_eq(v___x_887_, v___x_888_);
if (v___x_889_ == 0)
{
lean_inc_ref(v_githashOverride_886_);
return v_githashOverride_886_;
}
else
{
lean_object* v_githash_890_; 
v_githash_890_ = lean_ctor_get(v_lean_885_, 1);
lean_inc_ref(v_githash_890_);
return v_githash_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash___boxed(lean_object* v_env_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lake_Env_leanGithash(v_env_891_);
lean_dec_ref(v_env_891_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_path(lean_object* v_env_893_){
_start:
{
lean_object* v_lake_894_; lean_object* v_lean_895_; lean_object* v_initPath_896_; lean_object* v_binDir_897_; lean_object* v_binDir_898_; uint8_t v___x_899_; 
v_lake_894_ = lean_ctor_get(v_env_893_, 0);
v_lean_895_ = lean_ctor_get(v_env_893_, 1);
v_initPath_896_ = lean_ctor_get(v_env_893_, 18);
v_binDir_897_ = lean_ctor_get(v_lake_894_, 2);
v_binDir_898_ = lean_ctor_get(v_lean_895_, 6);
v___x_899_ = lean_string_dec_eq(v_binDir_897_, v_binDir_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; lean_object* v___x_901_; 
lean_inc(v_initPath_896_);
lean_inc_ref(v_binDir_898_);
v___x_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_900_, 0, v_binDir_898_);
lean_ctor_set(v___x_900_, 1, v_initPath_896_);
lean_inc_ref(v_binDir_897_);
v___x_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_901_, 0, v_binDir_897_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
return v___x_901_;
}
else
{
lean_object* v___x_902_; 
lean_inc(v_initPath_896_);
lean_inc_ref(v_binDir_898_);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v_binDir_898_);
lean_ctor_set(v___x_902_, 1, v_initPath_896_);
return v___x_902_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_path___boxed(lean_object* v_env_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_Lake_Env_path(v_env_903_);
lean_dec_ref(v_env_903_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanPath(lean_object* v_env_905_){
_start:
{
lean_object* v_lake_906_; lean_object* v_initLeanPath_907_; lean_object* v_libDir_908_; lean_object* v___x_909_; 
v_lake_906_ = lean_ctor_get(v_env_905_, 0);
v_initLeanPath_907_ = lean_ctor_get(v_env_905_, 15);
v_libDir_908_ = lean_ctor_get(v_lake_906_, 3);
lean_inc(v_initLeanPath_907_);
lean_inc_ref(v_libDir_908_);
v___x_909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_909_, 0, v_libDir_908_);
lean_ctor_set(v___x_909_, 1, v_initLeanPath_907_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanPath___boxed(lean_object* v_env_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lake_Env_leanPath(v_env_910_);
lean_dec_ref(v_env_910_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath(lean_object* v_env_912_){
_start:
{
lean_object* v_lake_913_; lean_object* v_initLeanSrcPath_914_; lean_object* v_srcDir_915_; lean_object* v___x_916_; 
v_lake_913_ = lean_ctor_get(v_env_912_, 0);
v_initLeanSrcPath_914_ = lean_ctor_get(v_env_912_, 16);
v_srcDir_915_ = lean_ctor_get(v_lake_913_, 1);
lean_inc(v_initLeanSrcPath_914_);
lean_inc_ref(v_srcDir_915_);
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v_srcDir_915_);
lean_ctor_set(v___x_916_, 1, v_initLeanSrcPath_914_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath___boxed(lean_object* v_env_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lake_Env_leanSrcPath(v_env_917_);
lean_dec_ref(v_env_917_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_sharedLibPath(lean_object* v_env_919_){
_start:
{
lean_object* v_lean_920_; lean_object* v_initSharedLibPath_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_lean_920_ = lean_ctor_get(v_env_919_, 1);
lean_inc_ref(v_lean_920_);
v_initSharedLibPath_921_ = lean_ctor_get(v_env_919_, 17);
lean_inc(v_initSharedLibPath_921_);
lean_dec_ref(v_env_919_);
v___x_922_ = l_Lake_LeanInstall_sharedLibPath(v_lean_920_);
lean_dec_ref(v_lean_920_);
v___x_923_ = l_List_appendTR___redArg(v___x_922_, v_initSharedLibPath_921_);
return v___x_923_;
}
}
static lean_object* _init_l_Lake_Env_noToolchainVars___closed__14(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__0));
v___x_955_ = lean_unsigned_to_nat(9u);
v___x_956_ = lean_mk_empty_array_with_capacity(v___x_955_);
v___x_957_ = lean_array_push(v___x_956_, v___x_954_);
return v___x_957_;
}
}
static lean_object* _init_l_Lake_Env_noToolchainVars___closed__15(void){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_958_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__2));
v___x_959_ = lean_obj_once(&l_Lake_Env_noToolchainVars___closed__14, &l_Lake_Env_noToolchainVars___closed__14_once, _init_l_Lake_Env_noToolchainVars___closed__14);
v___x_960_ = lean_array_push(v___x_959_, v___x_958_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_noToolchainVars(lean_object* v_env_963_){
_start:
{
uint8_t v_noSystemCache_964_; lean_object* v_lakeSystemCache_x3f_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___y_969_; 
v_noSystemCache_964_ = lean_ctor_get_uint8(v_env_963_, sizeof(void*)*20 + 1);
v_lakeSystemCache_x3f_965_ = lean_ctor_get(v_env_963_, 9);
lean_inc(v_lakeSystemCache_x3f_965_);
lean_dec_ref(v_env_963_);
v___x_966_ = lean_box(0);
v___x_967_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
if (v_noSystemCache_964_ == 0)
{
if (lean_obj_tag(v_lakeSystemCache_x3f_965_) == 0)
{
v___y_969_ = v___x_966_;
goto v___jp_968_;
}
else
{
lean_object* v_val_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
v_val_985_ = lean_ctor_get(v_lakeSystemCache_x3f_965_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v_lakeSystemCache_x3f_965_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v_lakeSystemCache_x3f_965_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_val_985_);
lean_dec(v_lakeSystemCache_x3f_965_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_val_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
v___y_969_ = v___x_990_;
goto v___jp_968_;
}
}
}
}
else
{
lean_object* v___x_993_; 
lean_dec(v_lakeSystemCache_x3f_965_);
v___x_993_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
v___y_969_ = v___x_993_;
goto v___jp_968_;
}
v___jp_968_:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_967_);
lean_ctor_set(v___x_970_, 1, v___y_969_);
v___x_971_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__4));
v___x_972_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__6));
v___x_973_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__8));
v___x_974_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__9));
v___x_975_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__11));
v___x_976_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__13));
v___x_977_ = lean_obj_once(&l_Lake_Env_noToolchainVars___closed__15, &l_Lake_Env_noToolchainVars___closed__15_once, _init_l_Lake_Env_noToolchainVars___closed__15);
v___x_978_ = lean_array_push(v___x_977_, v___x_970_);
v___x_979_ = lean_array_push(v___x_978_, v___x_971_);
v___x_980_ = lean_array_push(v___x_979_, v___x_972_);
v___x_981_ = lean_array_push(v___x_980_, v___x_973_);
v___x_982_ = lean_array_push(v___x_981_, v___x_974_);
v___x_983_ = lean_array_push(v___x_982_, v___x_975_);
v___x_984_ = lean_array_push(v___x_983_, v___x_976_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_994_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_box(1);
v___x_996_ = lean_panic_fn_borrowed(v___x_995_, v_msg_994_);
return v___x_996_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1000_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2));
v___x_1001_ = lean_unsigned_to_nat(35u);
v___x_1002_ = lean_unsigned_to_nat(182u);
v___x_1003_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1));
v___x_1004_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1005_ = l_mkPanicMessageWithDecl(v___x_1004_, v___x_1003_, v___x_1002_, v___x_1001_, v___x_1000_);
return v___x_1005_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1006_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2));
v___x_1007_ = lean_unsigned_to_nat(21u);
v___x_1008_ = lean_unsigned_to_nat(183u);
v___x_1009_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1));
v___x_1010_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1011_ = l_mkPanicMessageWithDecl(v___x_1010_, v___x_1009_, v___x_1008_, v___x_1007_, v___x_1006_);
return v___x_1011_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1014_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6));
v___x_1015_ = lean_unsigned_to_nat(35u);
v___x_1016_ = lean_unsigned_to_nat(276u);
v___x_1017_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5));
v___x_1018_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1019_ = l_mkPanicMessageWithDecl(v___x_1018_, v___x_1017_, v___x_1016_, v___x_1015_, v___x_1014_);
return v___x_1019_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1020_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6));
v___x_1021_ = lean_unsigned_to_nat(21u);
v___x_1022_ = lean_unsigned_to_nat(277u);
v___x_1023_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5));
v___x_1024_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1025_ = l_mkPanicMessageWithDecl(v___x_1024_, v___x_1023_, v___x_1022_, v___x_1021_, v___x_1020_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(lean_object* v_k_1026_, lean_object* v_v_1027_, lean_object* v_t_1028_){
_start:
{
if (lean_obj_tag(v_t_1028_) == 0)
{
lean_object* v_size_1029_; lean_object* v_k_1030_; lean_object* v_v_1031_; lean_object* v_l_1032_; lean_object* v_r_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1389_; 
v_size_1029_ = lean_ctor_get(v_t_1028_, 0);
v_k_1030_ = lean_ctor_get(v_t_1028_, 1);
v_v_1031_ = lean_ctor_get(v_t_1028_, 2);
v_l_1032_ = lean_ctor_get(v_t_1028_, 3);
v_r_1033_ = lean_ctor_get(v_t_1028_, 4);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_t_1028_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1035_ = v_t_1028_;
v_isShared_1036_ = v_isSharedCheck_1389_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_r_1033_);
lean_inc(v_l_1032_);
lean_inc(v_v_1031_);
lean_inc(v_k_1030_);
lean_inc(v_size_1029_);
lean_dec(v_t_1028_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1389_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
uint8_t v___x_1037_; 
v___x_1037_ = lean_string_compare(v_k_1026_, v_k_1030_);
switch(v___x_1037_)
{
case 0:
{
lean_object* v___x_1038_; 
lean_dec(v_size_1029_);
v___x_1038_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v_k_1026_, v_v_1027_, v_l_1032_);
if (lean_obj_tag(v_r_1033_) == 0)
{
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_size_1039_; lean_object* v_size_1040_; lean_object* v_k_1041_; lean_object* v_v_1042_; lean_object* v_l_1043_; lean_object* v_r_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_size_1039_ = lean_ctor_get(v_r_1033_, 0);
v_size_1040_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_size_1040_);
v_k_1041_ = lean_ctor_get(v___x_1038_, 1);
lean_inc(v_k_1041_);
v_v_1042_ = lean_ctor_get(v___x_1038_, 2);
lean_inc(v_v_1042_);
v_l_1043_ = lean_ctor_get(v___x_1038_, 3);
lean_inc(v_l_1043_);
v_r_1044_ = lean_ctor_get(v___x_1038_, 4);
lean_inc(v_r_1044_);
v___x_1045_ = lean_unsigned_to_nat(3u);
v___x_1046_ = lean_nat_mul(v___x_1045_, v_size_1039_);
v___x_1047_ = lean_nat_dec_lt(v___x_1046_, v_size_1040_);
lean_dec(v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
lean_dec(v_r_1044_);
lean_dec(v_l_1043_);
lean_dec(v_v_1042_);
lean_dec(v_k_1041_);
v___x_1048_ = lean_unsigned_to_nat(1u);
v___x_1049_ = lean_nat_add(v___x_1048_, v_size_1040_);
lean_dec(v_size_1040_);
v___x_1050_ = lean_nat_add(v___x_1049_, v_size_1039_);
lean_dec(v___x_1049_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 3, v___x_1038_);
lean_ctor_set(v___x_1035_, 0, v___x_1050_);
v___x_1052_ = v___x_1035_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1053_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1053_, 3, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1053_, 4, v_r_1033_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
else
{
lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1125_; 
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1125_ == 0)
{
lean_object* v_unused_1126_; lean_object* v_unused_1127_; lean_object* v_unused_1128_; lean_object* v_unused_1129_; lean_object* v_unused_1130_; 
v_unused_1126_ = lean_ctor_get(v___x_1038_, 4);
lean_dec(v_unused_1126_);
v_unused_1127_ = lean_ctor_get(v___x_1038_, 3);
lean_dec(v_unused_1127_);
v_unused_1128_ = lean_ctor_get(v___x_1038_, 2);
lean_dec(v_unused_1128_);
v_unused_1129_ = lean_ctor_get(v___x_1038_, 1);
lean_dec(v_unused_1129_);
v_unused_1130_ = lean_ctor_get(v___x_1038_, 0);
lean_dec(v_unused_1130_);
v___x_1055_ = v___x_1038_;
v_isShared_1056_ = v_isSharedCheck_1125_;
goto v_resetjp_1054_;
}
else
{
lean_dec(v___x_1038_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1125_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
if (lean_obj_tag(v_l_1043_) == 0)
{
if (lean_obj_tag(v_r_1044_) == 0)
{
lean_object* v_size_1057_; lean_object* v_size_1058_; lean_object* v_k_1059_; lean_object* v_v_1060_; lean_object* v_l_1061_; lean_object* v_r_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_size_1057_ = lean_ctor_get(v_l_1043_, 0);
v_size_1058_ = lean_ctor_get(v_r_1044_, 0);
v_k_1059_ = lean_ctor_get(v_r_1044_, 1);
v_v_1060_ = lean_ctor_get(v_r_1044_, 2);
v_l_1061_ = lean_ctor_get(v_r_1044_, 3);
v_r_1062_ = lean_ctor_get(v_r_1044_, 4);
v___x_1063_ = lean_unsigned_to_nat(2u);
v___x_1064_ = lean_nat_mul(v___x_1063_, v_size_1057_);
v___x_1065_ = lean_nat_dec_lt(v_size_1058_, v___x_1064_);
lean_dec(v___x_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1095_; 
lean_inc(v_r_1062_);
lean_inc(v_l_1061_);
lean_inc(v_v_1060_);
lean_inc(v_k_1059_);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_r_1044_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; lean_object* v_unused_1097_; lean_object* v_unused_1098_; lean_object* v_unused_1099_; lean_object* v_unused_1100_; 
v_unused_1096_ = lean_ctor_get(v_r_1044_, 4);
lean_dec(v_unused_1096_);
v_unused_1097_ = lean_ctor_get(v_r_1044_, 3);
lean_dec(v_unused_1097_);
v_unused_1098_ = lean_ctor_get(v_r_1044_, 2);
lean_dec(v_unused_1098_);
v_unused_1099_ = lean_ctor_get(v_r_1044_, 1);
lean_dec(v_unused_1099_);
v_unused_1100_ = lean_ctor_get(v_r_1044_, 0);
lean_dec(v_unused_1100_);
v___x_1067_ = v_r_1044_;
v_isShared_1068_ = v_isSharedCheck_1095_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v_r_1044_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1095_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___x_1083_; lean_object* v___y_1085_; 
v___x_1069_ = lean_unsigned_to_nat(1u);
v___x_1070_ = lean_nat_add(v___x_1069_, v_size_1040_);
lean_dec(v_size_1040_);
v___x_1071_ = lean_nat_add(v___x_1070_, v_size_1039_);
lean_dec(v___x_1070_);
v___x_1083_ = lean_nat_add(v___x_1069_, v_size_1057_);
if (lean_obj_tag(v_l_1061_) == 0)
{
lean_object* v_size_1093_; 
v_size_1093_ = lean_ctor_get(v_l_1061_, 0);
lean_inc(v_size_1093_);
v___y_1085_ = v_size_1093_;
goto v___jp_1084_;
}
else
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_unsigned_to_nat(0u);
v___y_1085_ = v___x_1094_;
goto v___jp_1084_;
}
v___jp_1072_:
{
lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1076_ = lean_nat_add(v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec(v___y_1074_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 4, v_r_1033_);
lean_ctor_set(v___x_1067_, 3, v_r_1062_);
lean_ctor_set(v___x_1067_, 2, v_v_1031_);
lean_ctor_set(v___x_1067_, 1, v_k_1030_);
lean_ctor_set(v___x_1067_, 0, v___x_1076_);
v___x_1078_ = v___x_1067_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1082_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1082_, 3, v_r_1062_);
lean_ctor_set(v_reuseFailAlloc_1082_, 4, v_r_1033_);
v___x_1078_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1080_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 4, v___x_1078_);
lean_ctor_set(v___x_1055_, 3, v___y_1073_);
lean_ctor_set(v___x_1055_, 2, v_v_1060_);
lean_ctor_set(v___x_1055_, 1, v_k_1059_);
lean_ctor_set(v___x_1055_, 0, v___x_1071_);
v___x_1080_ = v___x_1055_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1071_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_k_1059_);
lean_ctor_set(v_reuseFailAlloc_1081_, 2, v_v_1060_);
lean_ctor_set(v_reuseFailAlloc_1081_, 3, v___y_1073_);
lean_ctor_set(v_reuseFailAlloc_1081_, 4, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
v___jp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1086_ = lean_nat_add(v___x_1083_, v___y_1085_);
lean_dec(v___y_1085_);
lean_dec(v___x_1083_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_l_1061_);
lean_ctor_set(v___x_1035_, 3, v_l_1043_);
lean_ctor_set(v___x_1035_, 2, v_v_1042_);
lean_ctor_set(v___x_1035_, 1, v_k_1041_);
lean_ctor_set(v___x_1035_, 0, v___x_1086_);
v___x_1088_ = v___x_1035_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_k_1041_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v_v_1042_);
lean_ctor_set(v_reuseFailAlloc_1092_, 3, v_l_1043_);
lean_ctor_set(v_reuseFailAlloc_1092_, 4, v_l_1061_);
v___x_1088_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_nat_add(v___x_1069_, v_size_1039_);
if (lean_obj_tag(v_r_1062_) == 0)
{
lean_object* v_size_1090_; 
v_size_1090_ = lean_ctor_get(v_r_1062_, 0);
lean_inc(v_size_1090_);
v___y_1073_ = v___x_1088_;
v___y_1074_ = v___x_1089_;
v___y_1075_ = v_size_1090_;
goto v___jp_1072_;
}
else
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_unsigned_to_nat(0u);
v___y_1073_ = v___x_1088_;
v___y_1074_ = v___x_1089_;
v___y_1075_ = v___x_1091_;
goto v___jp_1072_;
}
}
}
}
}
else
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
lean_del_object(v___x_1035_);
v___x_1101_ = lean_unsigned_to_nat(1u);
v___x_1102_ = lean_nat_add(v___x_1101_, v_size_1040_);
lean_dec(v_size_1040_);
v___x_1103_ = lean_nat_add(v___x_1102_, v_size_1039_);
lean_dec(v___x_1102_);
v___x_1104_ = lean_nat_add(v___x_1101_, v_size_1039_);
v___x_1105_ = lean_nat_add(v___x_1104_, v_size_1058_);
lean_dec(v___x_1104_);
lean_inc_ref(v_r_1033_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 4, v_r_1033_);
lean_ctor_set(v___x_1055_, 3, v_r_1044_);
lean_ctor_set(v___x_1055_, 2, v_v_1031_);
lean_ctor_set(v___x_1055_, 1, v_k_1030_);
lean_ctor_set(v___x_1055_, 0, v___x_1105_);
v___x_1107_ = v___x_1055_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1120_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1120_, 3, v_r_1044_);
lean_ctor_set(v_reuseFailAlloc_1120_, 4, v_r_1033_);
v___x_1107_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
v_isSharedCheck_1114_ = !lean_is_exclusive(v_r_1033_);
if (v_isSharedCheck_1114_ == 0)
{
lean_object* v_unused_1115_; lean_object* v_unused_1116_; lean_object* v_unused_1117_; lean_object* v_unused_1118_; lean_object* v_unused_1119_; 
v_unused_1115_ = lean_ctor_get(v_r_1033_, 4);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v_r_1033_, 3);
lean_dec(v_unused_1116_);
v_unused_1117_ = lean_ctor_get(v_r_1033_, 2);
lean_dec(v_unused_1117_);
v_unused_1118_ = lean_ctor_get(v_r_1033_, 1);
lean_dec(v_unused_1118_);
v_unused_1119_ = lean_ctor_get(v_r_1033_, 0);
lean_dec(v_unused_1119_);
v___x_1109_ = v_r_1033_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_dec(v_r_1033_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 4, v___x_1107_);
lean_ctor_set(v___x_1109_, 3, v_l_1043_);
lean_ctor_set(v___x_1109_, 2, v_v_1042_);
lean_ctor_set(v___x_1109_, 1, v_k_1041_);
lean_ctor_set(v___x_1109_, 0, v___x_1103_);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1103_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_k_1041_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_v_1042_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v_l_1043_);
lean_ctor_set(v_reuseFailAlloc_1113_, 4, v___x_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
else
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
lean_dec_ref_known(v_l_1043_, 5);
lean_del_object(v___x_1055_);
lean_dec(v_v_1042_);
lean_dec(v_k_1041_);
lean_dec(v_size_1040_);
lean_dec_ref_known(v_r_1033_, 5);
lean_del_object(v___x_1035_);
lean_dec(v_v_1031_);
lean_dec(v_k_1030_);
v___x_1121_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3);
v___x_1122_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1121_);
return v___x_1122_;
}
}
else
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_del_object(v___x_1055_);
lean_dec(v_r_1044_);
lean_dec(v_v_1042_);
lean_dec(v_k_1041_);
lean_dec(v_size_1040_);
lean_dec_ref_known(v_r_1033_, 5);
lean_del_object(v___x_1035_);
lean_dec(v_v_1031_);
lean_dec(v_k_1030_);
v___x_1123_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4);
v___x_1124_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1123_);
return v___x_1124_;
}
}
}
}
else
{
lean_object* v_size_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1135_; 
v_size_1131_ = lean_ctor_get(v_r_1033_, 0);
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = lean_nat_add(v___x_1132_, v_size_1131_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 3, v___x_1038_);
lean_ctor_set(v___x_1035_, 0, v___x_1133_);
v___x_1135_ = v___x_1035_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1133_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1136_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1136_, 3, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1136_, 4, v_r_1033_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
else
{
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_l_1137_; 
v_l_1137_ = lean_ctor_get(v___x_1038_, 3);
lean_inc(v_l_1137_);
if (lean_obj_tag(v_l_1137_) == 0)
{
lean_object* v_r_1138_; 
v_r_1138_ = lean_ctor_get(v___x_1038_, 4);
lean_inc(v_r_1138_);
if (lean_obj_tag(v_r_1138_) == 0)
{
lean_object* v_size_1139_; lean_object* v_k_1140_; lean_object* v_v_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1155_; 
v_size_1139_ = lean_ctor_get(v___x_1038_, 0);
v_k_1140_ = lean_ctor_get(v___x_1038_, 1);
v_v_1141_ = lean_ctor_get(v___x_1038_, 2);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; lean_object* v_unused_1157_; 
v_unused_1156_ = lean_ctor_get(v___x_1038_, 4);
lean_dec(v_unused_1156_);
v_unused_1157_ = lean_ctor_get(v___x_1038_, 3);
lean_dec(v_unused_1157_);
v___x_1143_ = v___x_1038_;
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_v_1141_);
lean_inc(v_k_1140_);
lean_inc(v_size_1139_);
lean_dec(v___x_1038_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_size_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v_size_1145_ = lean_ctor_get(v_r_1138_, 0);
v___x_1146_ = lean_unsigned_to_nat(1u);
v___x_1147_ = lean_nat_add(v___x_1146_, v_size_1139_);
lean_dec(v_size_1139_);
v___x_1148_ = lean_nat_add(v___x_1146_, v_size_1145_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 4, v_r_1033_);
lean_ctor_set(v___x_1143_, 3, v_r_1138_);
lean_ctor_set(v___x_1143_, 2, v_v_1031_);
lean_ctor_set(v___x_1143_, 1, v_k_1030_);
lean_ctor_set(v___x_1143_, 0, v___x_1148_);
v___x_1150_ = v___x_1143_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1154_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1154_, 3, v_r_1138_);
lean_ctor_set(v_reuseFailAlloc_1154_, 4, v_r_1033_);
v___x_1150_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1152_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1150_);
lean_ctor_set(v___x_1035_, 3, v_l_1137_);
lean_ctor_set(v___x_1035_, 2, v_v_1141_);
lean_ctor_set(v___x_1035_, 1, v_k_1140_);
lean_ctor_set(v___x_1035_, 0, v___x_1147_);
v___x_1152_ = v___x_1035_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_k_1140_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_v_1141_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_l_1137_);
lean_ctor_set(v_reuseFailAlloc_1153_, 4, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
else
{
lean_object* v_k_1158_; lean_object* v_v_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1171_; 
v_k_1158_ = lean_ctor_get(v___x_1038_, 1);
v_v_1159_ = lean_ctor_get(v___x_1038_, 2);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1171_ == 0)
{
lean_object* v_unused_1172_; lean_object* v_unused_1173_; lean_object* v_unused_1174_; 
v_unused_1172_ = lean_ctor_get(v___x_1038_, 4);
lean_dec(v_unused_1172_);
v_unused_1173_ = lean_ctor_get(v___x_1038_, 3);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v___x_1038_, 0);
lean_dec(v_unused_1174_);
v___x_1161_ = v___x_1038_;
v_isShared_1162_ = v_isSharedCheck_1171_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_v_1159_);
lean_inc(v_k_1158_);
lean_dec(v___x_1038_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1171_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1163_ = lean_unsigned_to_nat(3u);
v___x_1164_ = lean_unsigned_to_nat(1u);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 3, v_r_1138_);
lean_ctor_set(v___x_1161_, 2, v_v_1031_);
lean_ctor_set(v___x_1161_, 1, v_k_1030_);
lean_ctor_set(v___x_1161_, 0, v___x_1164_);
v___x_1166_ = v___x_1161_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1170_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1170_, 3, v_r_1138_);
lean_ctor_set(v_reuseFailAlloc_1170_, 4, v_r_1138_);
v___x_1166_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1168_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1166_);
lean_ctor_set(v___x_1035_, 3, v_l_1137_);
lean_ctor_set(v___x_1035_, 2, v_v_1159_);
lean_ctor_set(v___x_1035_, 1, v_k_1158_);
lean_ctor_set(v___x_1035_, 0, v___x_1163_);
v___x_1168_ = v___x_1035_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_k_1158_);
lean_ctor_set(v_reuseFailAlloc_1169_, 2, v_v_1159_);
lean_ctor_set(v_reuseFailAlloc_1169_, 3, v_l_1137_);
lean_ctor_set(v_reuseFailAlloc_1169_, 4, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
else
{
lean_object* v_r_1175_; 
v_r_1175_ = lean_ctor_get(v___x_1038_, 4);
lean_inc(v_r_1175_);
if (lean_obj_tag(v_r_1175_) == 0)
{
lean_object* v_k_1176_; lean_object* v_v_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1201_; 
v_k_1176_ = lean_ctor_get(v___x_1038_, 1);
v_v_1177_ = lean_ctor_get(v___x_1038_, 2);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; lean_object* v_unused_1203_; lean_object* v_unused_1204_; 
v_unused_1202_ = lean_ctor_get(v___x_1038_, 4);
lean_dec(v_unused_1202_);
v_unused_1203_ = lean_ctor_get(v___x_1038_, 3);
lean_dec(v_unused_1203_);
v_unused_1204_ = lean_ctor_get(v___x_1038_, 0);
lean_dec(v_unused_1204_);
v___x_1179_ = v___x_1038_;
v_isShared_1180_ = v_isSharedCheck_1201_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_v_1177_);
lean_inc(v_k_1176_);
lean_dec(v___x_1038_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1201_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v_k_1181_; lean_object* v_v_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1197_; 
v_k_1181_ = lean_ctor_get(v_r_1175_, 1);
v_v_1182_ = lean_ctor_get(v_r_1175_, 2);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_r_1175_);
if (v_isSharedCheck_1197_ == 0)
{
lean_object* v_unused_1198_; lean_object* v_unused_1199_; lean_object* v_unused_1200_; 
v_unused_1198_ = lean_ctor_get(v_r_1175_, 4);
lean_dec(v_unused_1198_);
v_unused_1199_ = lean_ctor_get(v_r_1175_, 3);
lean_dec(v_unused_1199_);
v_unused_1200_ = lean_ctor_get(v_r_1175_, 0);
lean_dec(v_unused_1200_);
v___x_1184_ = v_r_1175_;
v_isShared_1185_ = v_isSharedCheck_1197_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_v_1182_);
lean_inc(v_k_1181_);
lean_dec(v_r_1175_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1197_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1186_ = lean_unsigned_to_nat(3u);
v___x_1187_ = lean_unsigned_to_nat(1u);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 4, v_l_1137_);
lean_ctor_set(v___x_1184_, 3, v_l_1137_);
lean_ctor_set(v___x_1184_, 2, v_v_1177_);
lean_ctor_set(v___x_1184_, 1, v_k_1176_);
lean_ctor_set(v___x_1184_, 0, v___x_1187_);
v___x_1189_ = v___x_1184_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_k_1176_);
lean_ctor_set(v_reuseFailAlloc_1196_, 2, v_v_1177_);
lean_ctor_set(v_reuseFailAlloc_1196_, 3, v_l_1137_);
lean_ctor_set(v_reuseFailAlloc_1196_, 4, v_l_1137_);
v___x_1189_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1191_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 4, v_l_1137_);
lean_ctor_set(v___x_1179_, 2, v_v_1031_);
lean_ctor_set(v___x_1179_, 1, v_k_1030_);
lean_ctor_set(v___x_1179_, 0, v___x_1187_);
v___x_1191_ = v___x_1179_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1195_, 3, v_l_1137_);
lean_ctor_set(v_reuseFailAlloc_1195_, 4, v_l_1137_);
v___x_1191_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
lean_object* v___x_1193_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1191_);
lean_ctor_set(v___x_1035_, 3, v___x_1189_);
lean_ctor_set(v___x_1035_, 2, v_v_1182_);
lean_ctor_set(v___x_1035_, 1, v_k_1181_);
lean_ctor_set(v___x_1035_, 0, v___x_1186_);
v___x_1193_ = v___x_1035_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v_k_1181_);
lean_ctor_set(v_reuseFailAlloc_1194_, 2, v_v_1182_);
lean_ctor_set(v_reuseFailAlloc_1194_, 3, v___x_1189_);
lean_ctor_set(v_reuseFailAlloc_1194_, 4, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
}
}
else
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = lean_unsigned_to_nat(2u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_r_1175_);
lean_ctor_set(v___x_1035_, 3, v___x_1038_);
lean_ctor_set(v___x_1035_, 0, v___x_1205_);
v___x_1207_ = v___x_1035_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1208_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1208_, 3, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1208_, 4, v_r_1175_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1209_ = lean_unsigned_to_nat(1u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1038_);
lean_ctor_set(v___x_1035_, 3, v___x_1038_);
lean_ctor_set(v___x_1035_, 0, v___x_1209_);
v___x_1211_ = v___x_1035_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1212_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1212_, 3, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1212_, 4, v___x_1038_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
case 1:
{
lean_object* v___x_1214_; 
lean_dec(v_v_1031_);
lean_dec(v_k_1030_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v_v_1027_);
lean_ctor_set(v___x_1035_, 1, v_k_1026_);
v___x_1214_ = v___x_1035_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_size_1029_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_k_1026_);
lean_ctor_set(v_reuseFailAlloc_1215_, 2, v_v_1027_);
lean_ctor_set(v_reuseFailAlloc_1215_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1215_, 4, v_r_1033_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
default: 
{
lean_object* v___x_1216_; 
lean_dec(v_size_1029_);
v___x_1216_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v_k_1026_, v_v_1027_, v_r_1033_);
if (lean_obj_tag(v_l_1032_) == 0)
{
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_size_1217_; lean_object* v_size_1218_; lean_object* v_k_1219_; lean_object* v_v_1220_; lean_object* v_l_1221_; lean_object* v_r_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; 
v_size_1217_ = lean_ctor_get(v_l_1032_, 0);
v_size_1218_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_size_1218_);
v_k_1219_ = lean_ctor_get(v___x_1216_, 1);
lean_inc(v_k_1219_);
v_v_1220_ = lean_ctor_get(v___x_1216_, 2);
lean_inc(v_v_1220_);
v_l_1221_ = lean_ctor_get(v___x_1216_, 3);
lean_inc(v_l_1221_);
v_r_1222_ = lean_ctor_get(v___x_1216_, 4);
lean_inc(v_r_1222_);
v___x_1223_ = lean_unsigned_to_nat(3u);
v___x_1224_ = lean_nat_mul(v___x_1223_, v_size_1217_);
v___x_1225_ = lean_nat_dec_lt(v___x_1224_, v_size_1218_);
lean_dec(v___x_1224_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1230_; 
lean_dec(v_r_1222_);
lean_dec(v_l_1221_);
lean_dec(v_v_1220_);
lean_dec(v_k_1219_);
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_nat_add(v___x_1226_, v_size_1217_);
v___x_1228_ = lean_nat_add(v___x_1227_, v_size_1218_);
lean_dec(v_size_1218_);
lean_dec(v___x_1227_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1216_);
lean_ctor_set(v___x_1035_, 0, v___x_1228_);
v___x_1230_ = v___x_1035_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1228_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1231_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1231_, 4, v___x_1216_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
else
{
lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1301_; 
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1301_ == 0)
{
lean_object* v_unused_1302_; lean_object* v_unused_1303_; lean_object* v_unused_1304_; lean_object* v_unused_1305_; lean_object* v_unused_1306_; 
v_unused_1302_ = lean_ctor_get(v___x_1216_, 4);
lean_dec(v_unused_1302_);
v_unused_1303_ = lean_ctor_get(v___x_1216_, 3);
lean_dec(v_unused_1303_);
v_unused_1304_ = lean_ctor_get(v___x_1216_, 2);
lean_dec(v_unused_1304_);
v_unused_1305_ = lean_ctor_get(v___x_1216_, 1);
lean_dec(v_unused_1305_);
v_unused_1306_ = lean_ctor_get(v___x_1216_, 0);
lean_dec(v_unused_1306_);
v___x_1233_ = v___x_1216_;
v_isShared_1234_ = v_isSharedCheck_1301_;
goto v_resetjp_1232_;
}
else
{
lean_dec(v___x_1216_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1301_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
if (lean_obj_tag(v_l_1221_) == 0)
{
if (lean_obj_tag(v_r_1222_) == 0)
{
lean_object* v_size_1235_; lean_object* v_k_1236_; lean_object* v_v_1237_; lean_object* v_l_1238_; lean_object* v_r_1239_; lean_object* v_size_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v_size_1235_ = lean_ctor_get(v_l_1221_, 0);
v_k_1236_ = lean_ctor_get(v_l_1221_, 1);
v_v_1237_ = lean_ctor_get(v_l_1221_, 2);
v_l_1238_ = lean_ctor_get(v_l_1221_, 3);
v_r_1239_ = lean_ctor_get(v_l_1221_, 4);
v_size_1240_ = lean_ctor_get(v_r_1222_, 0);
v___x_1241_ = lean_unsigned_to_nat(2u);
v___x_1242_ = lean_nat_mul(v___x_1241_, v_size_1240_);
v___x_1243_ = lean_nat_dec_lt(v_size_1235_, v___x_1242_);
lean_dec(v___x_1242_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1272_; 
lean_inc(v_r_1239_);
lean_inc(v_l_1238_);
lean_inc(v_v_1237_);
lean_inc(v_k_1236_);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_l_1221_);
if (v_isSharedCheck_1272_ == 0)
{
lean_object* v_unused_1273_; lean_object* v_unused_1274_; lean_object* v_unused_1275_; lean_object* v_unused_1276_; lean_object* v_unused_1277_; 
v_unused_1273_ = lean_ctor_get(v_l_1221_, 4);
lean_dec(v_unused_1273_);
v_unused_1274_ = lean_ctor_get(v_l_1221_, 3);
lean_dec(v_unused_1274_);
v_unused_1275_ = lean_ctor_get(v_l_1221_, 2);
lean_dec(v_unused_1275_);
v_unused_1276_ = lean_ctor_get(v_l_1221_, 1);
lean_dec(v_unused_1276_);
v_unused_1277_ = lean_ctor_get(v_l_1221_, 0);
lean_dec(v_unused_1277_);
v___x_1245_ = v_l_1221_;
v_isShared_1246_ = v_isSharedCheck_1272_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_l_1221_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1272_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1262_; 
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = lean_nat_add(v___x_1247_, v_size_1217_);
v___x_1249_ = lean_nat_add(v___x_1248_, v_size_1218_);
lean_dec(v_size_1218_);
if (lean_obj_tag(v_l_1238_) == 0)
{
lean_object* v_size_1270_; 
v_size_1270_ = lean_ctor_get(v_l_1238_, 0);
lean_inc(v_size_1270_);
v___y_1262_ = v_size_1270_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1271_; 
v___x_1271_ = lean_unsigned_to_nat(0u);
v___y_1262_ = v___x_1271_;
goto v___jp_1261_;
}
v___jp_1250_:
{
lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1254_ = lean_nat_add(v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec(v___y_1252_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 4, v_r_1222_);
lean_ctor_set(v___x_1245_, 3, v_r_1239_);
lean_ctor_set(v___x_1245_, 2, v_v_1220_);
lean_ctor_set(v___x_1245_, 1, v_k_1219_);
lean_ctor_set(v___x_1245_, 0, v___x_1254_);
v___x_1256_ = v___x_1245_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_k_1219_);
lean_ctor_set(v_reuseFailAlloc_1260_, 2, v_v_1220_);
lean_ctor_set(v_reuseFailAlloc_1260_, 3, v_r_1239_);
lean_ctor_set(v_reuseFailAlloc_1260_, 4, v_r_1222_);
v___x_1256_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1258_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 4, v___x_1256_);
lean_ctor_set(v___x_1233_, 3, v___y_1251_);
lean_ctor_set(v___x_1233_, 2, v_v_1237_);
lean_ctor_set(v___x_1233_, 1, v_k_1236_);
lean_ctor_set(v___x_1233_, 0, v___x_1249_);
v___x_1258_ = v___x_1233_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1249_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_k_1236_);
lean_ctor_set(v_reuseFailAlloc_1259_, 2, v_v_1237_);
lean_ctor_set(v_reuseFailAlloc_1259_, 3, v___y_1251_);
lean_ctor_set(v_reuseFailAlloc_1259_, 4, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
v___jp_1261_:
{
lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1263_ = lean_nat_add(v___x_1248_, v___y_1262_);
lean_dec(v___y_1262_);
lean_dec(v___x_1248_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_l_1238_);
lean_ctor_set(v___x_1035_, 0, v___x_1263_);
v___x_1265_ = v___x_1035_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1263_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1269_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1269_, 4, v_l_1238_);
v___x_1265_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_nat_add(v___x_1247_, v_size_1240_);
if (lean_obj_tag(v_r_1239_) == 0)
{
lean_object* v_size_1267_; 
v_size_1267_ = lean_ctor_get(v_r_1239_, 0);
lean_inc(v_size_1267_);
v___y_1251_ = v___x_1265_;
v___y_1252_ = v___x_1266_;
v___y_1253_ = v_size_1267_;
goto v___jp_1250_;
}
else
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_unsigned_to_nat(0u);
v___y_1251_ = v___x_1265_;
v___y_1252_ = v___x_1266_;
v___y_1253_ = v___x_1268_;
goto v___jp_1250_;
}
}
}
}
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1283_; 
lean_del_object(v___x_1035_);
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = lean_nat_add(v___x_1278_, v_size_1217_);
v___x_1280_ = lean_nat_add(v___x_1279_, v_size_1218_);
lean_dec(v_size_1218_);
v___x_1281_ = lean_nat_add(v___x_1279_, v_size_1235_);
lean_dec(v___x_1279_);
lean_inc_ref(v_l_1032_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 4, v_l_1221_);
lean_ctor_set(v___x_1233_, 3, v_l_1032_);
lean_ctor_set(v___x_1233_, 2, v_v_1031_);
lean_ctor_set(v___x_1233_, 1, v_k_1030_);
lean_ctor_set(v___x_1233_, 0, v___x_1281_);
v___x_1283_ = v___x_1233_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1281_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1296_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1296_, 4, v_l_1221_);
v___x_1283_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_isSharedCheck_1290_ = !lean_is_exclusive(v_l_1032_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; lean_object* v_unused_1292_; lean_object* v_unused_1293_; lean_object* v_unused_1294_; lean_object* v_unused_1295_; 
v_unused_1291_ = lean_ctor_get(v_l_1032_, 4);
lean_dec(v_unused_1291_);
v_unused_1292_ = lean_ctor_get(v_l_1032_, 3);
lean_dec(v_unused_1292_);
v_unused_1293_ = lean_ctor_get(v_l_1032_, 2);
lean_dec(v_unused_1293_);
v_unused_1294_ = lean_ctor_get(v_l_1032_, 1);
lean_dec(v_unused_1294_);
v_unused_1295_ = lean_ctor_get(v_l_1032_, 0);
lean_dec(v_unused_1295_);
v___x_1285_ = v_l_1032_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_dec(v_l_1032_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 4, v_r_1222_);
lean_ctor_set(v___x_1285_, 3, v___x_1283_);
lean_ctor_set(v___x_1285_, 2, v_v_1220_);
lean_ctor_set(v___x_1285_, 1, v_k_1219_);
lean_ctor_set(v___x_1285_, 0, v___x_1280_);
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1280_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_k_1219_);
lean_ctor_set(v_reuseFailAlloc_1289_, 2, v_v_1220_);
lean_ctor_set(v_reuseFailAlloc_1289_, 3, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1289_, 4, v_r_1222_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
else
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
lean_dec_ref_known(v_l_1221_, 5);
lean_del_object(v___x_1233_);
lean_dec(v_v_1220_);
lean_dec(v_k_1219_);
lean_dec(v_size_1218_);
lean_dec_ref_known(v_l_1032_, 5);
lean_del_object(v___x_1035_);
lean_dec(v_v_1031_);
lean_dec(v_k_1030_);
v___x_1297_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7);
v___x_1298_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1297_);
return v___x_1298_;
}
}
else
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
lean_del_object(v___x_1233_);
lean_dec(v_r_1222_);
lean_dec(v_v_1220_);
lean_dec(v_k_1219_);
lean_dec(v_size_1218_);
lean_dec_ref_known(v_l_1032_, 5);
lean_del_object(v___x_1035_);
lean_dec(v_v_1031_);
lean_dec(v_k_1030_);
v___x_1299_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8);
v___x_1300_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1299_);
return v___x_1300_;
}
}
}
}
else
{
lean_object* v_size_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1311_; 
v_size_1307_ = lean_ctor_get(v_l_1032_, 0);
v___x_1308_ = lean_unsigned_to_nat(1u);
v___x_1309_ = lean_nat_add(v___x_1308_, v_size_1307_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1216_);
lean_ctor_set(v___x_1035_, 0, v___x_1309_);
v___x_1311_ = v___x_1035_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1309_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1312_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1312_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1312_, 4, v___x_1216_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
else
{
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_l_1313_; 
v_l_1313_ = lean_ctor_get(v___x_1216_, 3);
lean_inc(v_l_1313_);
if (lean_obj_tag(v_l_1313_) == 0)
{
lean_object* v_r_1314_; 
v_r_1314_ = lean_ctor_get(v___x_1216_, 4);
lean_inc(v_r_1314_);
if (lean_obj_tag(v_r_1314_) == 0)
{
lean_object* v_size_1315_; lean_object* v_k_1316_; lean_object* v_v_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1331_; 
v_size_1315_ = lean_ctor_get(v___x_1216_, 0);
v_k_1316_ = lean_ctor_get(v___x_1216_, 1);
v_v_1317_ = lean_ctor_get(v___x_1216_, 2);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1331_ == 0)
{
lean_object* v_unused_1332_; lean_object* v_unused_1333_; 
v_unused_1332_ = lean_ctor_get(v___x_1216_, 4);
lean_dec(v_unused_1332_);
v_unused_1333_ = lean_ctor_get(v___x_1216_, 3);
lean_dec(v_unused_1333_);
v___x_1319_ = v___x_1216_;
v_isShared_1320_ = v_isSharedCheck_1331_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_v_1317_);
lean_inc(v_k_1316_);
lean_inc(v_size_1315_);
lean_dec(v___x_1216_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1331_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v_size_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1326_; 
v_size_1321_ = lean_ctor_get(v_l_1313_, 0);
v___x_1322_ = lean_unsigned_to_nat(1u);
v___x_1323_ = lean_nat_add(v___x_1322_, v_size_1315_);
lean_dec(v_size_1315_);
v___x_1324_ = lean_nat_add(v___x_1322_, v_size_1321_);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 4, v_l_1313_);
lean_ctor_set(v___x_1319_, 3, v_l_1032_);
lean_ctor_set(v___x_1319_, 2, v_v_1031_);
lean_ctor_set(v___x_1319_, 1, v_k_1030_);
lean_ctor_set(v___x_1319_, 0, v___x_1324_);
v___x_1326_ = v___x_1319_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1324_);
lean_ctor_set(v_reuseFailAlloc_1330_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1330_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1330_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1330_, 4, v_l_1313_);
v___x_1326_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1328_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_r_1314_);
lean_ctor_set(v___x_1035_, 3, v___x_1326_);
lean_ctor_set(v___x_1035_, 2, v_v_1317_);
lean_ctor_set(v___x_1035_, 1, v_k_1316_);
lean_ctor_set(v___x_1035_, 0, v___x_1323_);
v___x_1328_ = v___x_1035_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1323_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_k_1316_);
lean_ctor_set(v_reuseFailAlloc_1329_, 2, v_v_1317_);
lean_ctor_set(v_reuseFailAlloc_1329_, 3, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1329_, 4, v_r_1314_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
else
{
lean_object* v_k_1334_; lean_object* v_v_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1359_; 
v_k_1334_ = lean_ctor_get(v___x_1216_, 1);
v_v_1335_ = lean_ctor_get(v___x_1216_, 2);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1359_ == 0)
{
lean_object* v_unused_1360_; lean_object* v_unused_1361_; lean_object* v_unused_1362_; 
v_unused_1360_ = lean_ctor_get(v___x_1216_, 4);
lean_dec(v_unused_1360_);
v_unused_1361_ = lean_ctor_get(v___x_1216_, 3);
lean_dec(v_unused_1361_);
v_unused_1362_ = lean_ctor_get(v___x_1216_, 0);
lean_dec(v_unused_1362_);
v___x_1337_ = v___x_1216_;
v_isShared_1338_ = v_isSharedCheck_1359_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_v_1335_);
lean_inc(v_k_1334_);
lean_dec(v___x_1216_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1359_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v_k_1339_; lean_object* v_v_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1355_; 
v_k_1339_ = lean_ctor_get(v_l_1313_, 1);
v_v_1340_ = lean_ctor_get(v_l_1313_, 2);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_l_1313_);
if (v_isSharedCheck_1355_ == 0)
{
lean_object* v_unused_1356_; lean_object* v_unused_1357_; lean_object* v_unused_1358_; 
v_unused_1356_ = lean_ctor_get(v_l_1313_, 4);
lean_dec(v_unused_1356_);
v_unused_1357_ = lean_ctor_get(v_l_1313_, 3);
lean_dec(v_unused_1357_);
v_unused_1358_ = lean_ctor_get(v_l_1313_, 0);
lean_dec(v_unused_1358_);
v___x_1342_ = v_l_1313_;
v_isShared_1343_ = v_isSharedCheck_1355_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_v_1340_);
lean_inc(v_k_1339_);
lean_dec(v_l_1313_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1355_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1344_ = lean_unsigned_to_nat(3u);
v___x_1345_ = lean_unsigned_to_nat(1u);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 4, v_r_1314_);
lean_ctor_set(v___x_1342_, 3, v_r_1314_);
lean_ctor_set(v___x_1342_, 2, v_v_1031_);
lean_ctor_set(v___x_1342_, 1, v_k_1030_);
lean_ctor_set(v___x_1342_, 0, v___x_1345_);
v___x_1347_ = v___x_1342_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1345_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1354_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1354_, 3, v_r_1314_);
lean_ctor_set(v_reuseFailAlloc_1354_, 4, v_r_1314_);
v___x_1347_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1349_; 
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 3, v_r_1314_);
lean_ctor_set(v___x_1337_, 0, v___x_1345_);
v___x_1349_ = v___x_1337_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1345_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_k_1334_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_v_1335_);
lean_ctor_set(v_reuseFailAlloc_1353_, 3, v_r_1314_);
lean_ctor_set(v_reuseFailAlloc_1353_, 4, v_r_1314_);
v___x_1349_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1349_);
lean_ctor_set(v___x_1035_, 3, v___x_1347_);
lean_ctor_set(v___x_1035_, 2, v_v_1340_);
lean_ctor_set(v___x_1035_, 1, v_k_1339_);
lean_ctor_set(v___x_1035_, 0, v___x_1344_);
v___x_1351_ = v___x_1035_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1344_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_k_1339_);
lean_ctor_set(v_reuseFailAlloc_1352_, 2, v_v_1340_);
lean_ctor_set(v_reuseFailAlloc_1352_, 3, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1352_, 4, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1363_; 
v_r_1363_ = lean_ctor_get(v___x_1216_, 4);
lean_inc(v_r_1363_);
if (lean_obj_tag(v_r_1363_) == 0)
{
lean_object* v_k_1364_; lean_object* v_v_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1377_; 
v_k_1364_ = lean_ctor_get(v___x_1216_, 1);
v_v_1365_ = lean_ctor_get(v___x_1216_, 2);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; lean_object* v_unused_1379_; lean_object* v_unused_1380_; 
v_unused_1378_ = lean_ctor_get(v___x_1216_, 4);
lean_dec(v_unused_1378_);
v_unused_1379_ = lean_ctor_get(v___x_1216_, 3);
lean_dec(v_unused_1379_);
v_unused_1380_ = lean_ctor_get(v___x_1216_, 0);
lean_dec(v_unused_1380_);
v___x_1367_ = v___x_1216_;
v_isShared_1368_ = v_isSharedCheck_1377_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_v_1365_);
lean_inc(v_k_1364_);
lean_dec(v___x_1216_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1377_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1369_ = lean_unsigned_to_nat(3u);
v___x_1370_ = lean_unsigned_to_nat(1u);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 4, v_l_1313_);
lean_ctor_set(v___x_1367_, 2, v_v_1031_);
lean_ctor_set(v___x_1367_, 1, v_k_1030_);
lean_ctor_set(v___x_1367_, 0, v___x_1370_);
v___x_1372_ = v___x_1367_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1376_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1376_, 3, v_l_1313_);
lean_ctor_set(v_reuseFailAlloc_1376_, 4, v_l_1313_);
v___x_1372_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1374_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_r_1363_);
lean_ctor_set(v___x_1035_, 3, v___x_1372_);
lean_ctor_set(v___x_1035_, 2, v_v_1365_);
lean_ctor_set(v___x_1035_, 1, v_k_1364_);
lean_ctor_set(v___x_1035_, 0, v___x_1369_);
v___x_1374_ = v___x_1035_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v_k_1364_);
lean_ctor_set(v_reuseFailAlloc_1375_, 2, v_v_1365_);
lean_ctor_set(v_reuseFailAlloc_1375_, 3, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1375_, 4, v_r_1363_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1381_ = lean_unsigned_to_nat(2u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1216_);
lean_ctor_set(v___x_1035_, 3, v_r_1363_);
lean_ctor_set(v___x_1035_, 0, v___x_1381_);
v___x_1383_ = v___x_1035_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1384_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1384_, 3, v_r_1363_);
lean_ctor_set(v_reuseFailAlloc_1384_, 4, v___x_1216_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
else
{
lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1385_ = lean_unsigned_to_nat(1u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1216_);
lean_ctor_set(v___x_1035_, 3, v___x_1216_);
lean_ctor_set(v___x_1035_, 0, v___x_1385_);
v___x_1387_ = v___x_1035_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v___x_1216_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v___x_1216_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = lean_unsigned_to_nat(1u);
v___x_1391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
lean_ctor_set(v___x_1391_, 1, v_k_1026_);
lean_ctor_set(v___x_1391_, 2, v_v_1027_);
lean_ctor_set(v___x_1391_, 3, v_t_1028_);
lean_ctor_set(v___x_1391_, 4, v_t_1028_);
return v___x_1391_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(lean_object* v_init_1392_, lean_object* v_x_1393_){
_start:
{
if (lean_obj_tag(v_x_1393_) == 0)
{
lean_object* v_k_1394_; lean_object* v_v_1395_; lean_object* v_l_1396_; lean_object* v_r_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_k_1394_ = lean_ctor_get(v_x_1393_, 1);
lean_inc(v_k_1394_);
v_v_1395_ = lean_ctor_get(v_x_1393_, 2);
lean_inc(v_v_1395_);
v_l_1396_ = lean_ctor_get(v_x_1393_, 3);
lean_inc(v_l_1396_);
v_r_1397_ = lean_ctor_get(v_x_1393_, 4);
lean_inc(v_r_1397_);
lean_dec_ref_known(v_x_1393_, 5);
v___x_1398_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(v_init_1392_, v_l_1396_);
v___x_1399_ = 1;
v___x_1400_ = l_Lean_Name_toString(v_k_1394_, v___x_1399_);
v___x_1401_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1401_, 0, v_v_1395_);
v___x_1402_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v___x_1400_, v___x_1401_, v___x_1398_);
v_init_1392_ = v___x_1402_;
v_x_1393_ = v_r_1397_;
goto _start;
}
else
{
return v_init_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0(lean_object* v_m_1404_){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = lean_box(1);
v___x_1406_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(v___x_1405_, v_m_1404_);
v___x_1407_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_baseVars(lean_object* v_env_1413_){
_start:
{
lean_object* v_lake_1414_; lean_object* v_lean_1415_; lean_object* v_elan_x3f_1416_; lean_object* v_pkgUrlMap_1417_; uint8_t v_noCache_1418_; lean_object* v_lakeConfig_x3f_1419_; lean_object* v_cacheKey_x3f_1420_; lean_object* v_cacheArtifactEndpoint_x3f_1421_; lean_object* v_cacheRevisionEndpoint_x3f_1422_; lean_object* v_cacheService_x3f_1423_; lean_object* v_toolchain_1424_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___y_1504_; lean_object* v___y_1505_; lean_object* v___y_1506_; lean_object* v___y_1507_; lean_object* v___y_1508_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___x_1553_; lean_object* v___y_1555_; 
v_lake_1414_ = lean_ctor_get(v_env_1413_, 0);
lean_inc_ref(v_lake_1414_);
v_lean_1415_ = lean_ctor_get(v_env_1413_, 1);
lean_inc_ref(v_lean_1415_);
v_elan_x3f_1416_ = lean_ctor_get(v_env_1413_, 2);
lean_inc(v_elan_x3f_1416_);
v_pkgUrlMap_1417_ = lean_ctor_get(v_env_1413_, 5);
lean_inc(v_pkgUrlMap_1417_);
v_noCache_1418_ = lean_ctor_get_uint8(v_env_1413_, sizeof(void*)*20);
v_lakeConfig_x3f_1419_ = lean_ctor_get(v_env_1413_, 10);
lean_inc(v_lakeConfig_x3f_1419_);
v_cacheKey_x3f_1420_ = lean_ctor_get(v_env_1413_, 11);
lean_inc(v_cacheKey_x3f_1420_);
v_cacheArtifactEndpoint_x3f_1421_ = lean_ctor_get(v_env_1413_, 12);
lean_inc(v_cacheArtifactEndpoint_x3f_1421_);
v_cacheRevisionEndpoint_x3f_1422_ = lean_ctor_get(v_env_1413_, 13);
lean_inc(v_cacheRevisionEndpoint_x3f_1422_);
v_cacheService_x3f_1423_ = lean_ctor_get(v_env_1413_, 14);
lean_inc(v_cacheService_x3f_1423_);
v_toolchain_1424_ = lean_ctor_get(v_env_1413_, 19);
lean_inc_ref(v_toolchain_1424_);
lean_dec_ref(v_env_1413_);
v___x_1553_ = ((lean_object*)(l_Lake_Env_baseVars___closed__3));
if (lean_obj_tag(v_elan_x3f_1416_) == 0)
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_box(0);
v___y_1555_ = v___x_1568_;
goto v___jp_1554_;
}
else
{
lean_object* v_val_1569_; lean_object* v_elan_1570_; lean_object* v___x_1571_; 
v_val_1569_ = lean_ctor_get(v_elan_x3f_1416_, 0);
v_elan_1570_ = lean_ctor_get(v_val_1569_, 1);
lean_inc_ref(v_elan_1570_);
v___x_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_elan_1570_);
v___y_1555_ = v___x_1571_;
goto v___jp_1554_;
}
v___jp_1425_:
{
lean_object* v_sysroot_1439_; lean_object* v_lean_1440_; lean_object* v_ar_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v_sysroot_1439_ = lean_ctor_get(v_lean_1415_, 0);
v_lean_1440_ = lean_ctor_get(v_lean_1415_, 7);
v_ar_1441_ = lean_ctor_get(v_lean_1415_, 13);
lean_inc_ref(v___y_1434_);
v___x_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___y_1434_);
lean_ctor_set(v___x_1442_, 1, v___y_1438_);
v___x_1443_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__7));
lean_inc_ref(v_lean_1440_);
v___x_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1444_, 0, v_lean_1440_);
v___x_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
v___x_1446_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__10));
lean_inc_ref(v_sysroot_1439_);
v___x_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1447_, 0, v_sysroot_1439_);
v___x_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1446_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v___x_1449_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__12));
lean_inc_ref(v_ar_1441_);
v___x_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1450_, 0, v_ar_1441_);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = ((lean_object*)(l_Lake_Env_baseVars___closed__0));
v___x_1453_ = l_Lake_LeanInstall_leanCc_x3f(v_lean_1415_);
lean_dec_ref(v_lean_1415_);
v___x_1454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = lean_unsigned_to_nat(16u);
v___x_1456_ = lean_mk_empty_array_with_capacity(v___x_1455_);
v___x_1457_ = lean_array_push(v___x_1456_, v___y_1427_);
v___x_1458_ = lean_array_push(v___x_1457_, v___y_1432_);
v___x_1459_ = lean_array_push(v___x_1458_, v___y_1426_);
v___x_1460_ = lean_array_push(v___x_1459_, v___y_1428_);
v___x_1461_ = lean_array_push(v___x_1460_, v___y_1429_);
v___x_1462_ = lean_array_push(v___x_1461_, v___y_1437_);
v___x_1463_ = lean_array_push(v___x_1462_, v___y_1433_);
v___x_1464_ = lean_array_push(v___x_1463_, v___y_1430_);
v___x_1465_ = lean_array_push(v___x_1464_, v___y_1436_);
v___x_1466_ = lean_array_push(v___x_1465_, v___y_1435_);
v___x_1467_ = lean_array_push(v___x_1466_, v___y_1431_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1442_);
v___x_1469_ = lean_array_push(v___x_1468_, v___x_1445_);
v___x_1470_ = lean_array_push(v___x_1469_, v___x_1448_);
v___x_1471_ = lean_array_push(v___x_1470_, v___x_1451_);
v___x_1472_ = lean_array_push(v___x_1471_, v___x_1454_);
return v___x_1472_;
}
v___jp_1473_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_inc_ref(v___y_1482_);
v___x_1483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1483_, 0, v___y_1482_);
lean_inc_ref(v___y_1478_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___y_1478_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = ((lean_object*)(l_Lake_Env_compute___closed__6));
v___x_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
lean_ctor_set(v___x_1486_, 1, v_cacheKey_x3f_1420_);
v___x_1487_ = ((lean_object*)(l_Lake_Env_compute___closed__7));
v___x_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1487_);
lean_ctor_set(v___x_1488_, 1, v_cacheArtifactEndpoint_x3f_1421_);
v___x_1489_ = ((lean_object*)(l_Lake_Env_compute___closed__8));
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
lean_ctor_set(v___x_1490_, 1, v_cacheRevisionEndpoint_x3f_1422_);
v___x_1491_ = ((lean_object*)(l_Lake_Env_compute___closed__9));
if (lean_obj_tag(v_cacheService_x3f_1423_) == 0)
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_box(0);
v___y_1426_ = v___y_1474_;
v___y_1427_ = v___y_1475_;
v___y_1428_ = v___y_1476_;
v___y_1429_ = v___y_1477_;
v___y_1430_ = v___x_1484_;
v___y_1431_ = v___x_1490_;
v___y_1432_ = v___y_1479_;
v___y_1433_ = v___y_1480_;
v___y_1434_ = v___x_1491_;
v___y_1435_ = v___x_1488_;
v___y_1436_ = v___x_1486_;
v___y_1437_ = v___y_1481_;
v___y_1438_ = v___x_1492_;
goto v___jp_1425_;
}
else
{
lean_object* v_val_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
v_val_1493_ = lean_ctor_get(v_cacheService_x3f_1423_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_cacheService_x3f_1423_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v_cacheService_x3f_1423_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_val_1493_);
lean_dec(v_cacheService_x3f_1423_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_val_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
v___y_1426_ = v___y_1474_;
v___y_1427_ = v___y_1475_;
v___y_1428_ = v___y_1476_;
v___y_1429_ = v___y_1477_;
v___y_1430_ = v___x_1484_;
v___y_1431_ = v___x_1490_;
v___y_1432_ = v___y_1479_;
v___y_1433_ = v___y_1480_;
v___y_1434_ = v___x_1491_;
v___y_1435_ = v___x_1488_;
v___y_1436_ = v___x_1486_;
v___y_1437_ = v___y_1481_;
v___y_1438_ = v___x_1498_;
goto v___jp_1425_;
}
}
}
}
v___jp_1501_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_inc_ref(v___y_1505_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___y_1505_);
lean_ctor_set(v___x_1509_, 1, v___y_1508_);
v___x_1510_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0));
v___x_1511_ = l_Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0(v_pkgUrlMap_1417_);
v___x_1512_ = l_Lean_Json_compress(v___x_1511_);
v___x_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
v___x_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1510_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
v___x_1515_ = ((lean_object*)(l_Lake_Env_compute___closed__2));
if (v_noCache_1418_ == 0)
{
lean_object* v___x_1516_; 
v___x_1516_ = ((lean_object*)(l_Lake_Env_baseVars___closed__1));
v___y_1474_ = v___y_1502_;
v___y_1475_ = v___y_1503_;
v___y_1476_ = v___y_1504_;
v___y_1477_ = v___y_1506_;
v___y_1478_ = v___x_1515_;
v___y_1479_ = v___y_1507_;
v___y_1480_ = v___x_1514_;
v___y_1481_ = v___x_1509_;
v___y_1482_ = v___x_1516_;
goto v___jp_1473_;
}
else
{
lean_object* v___x_1517_; 
v___x_1517_ = ((lean_object*)(l_Lake_Env_baseVars___closed__2));
v___y_1474_ = v___y_1502_;
v___y_1475_ = v___y_1503_;
v___y_1476_ = v___y_1504_;
v___y_1477_ = v___y_1506_;
v___y_1478_ = v___x_1515_;
v___y_1479_ = v___y_1507_;
v___y_1480_ = v___x_1514_;
v___y_1481_ = v___x_1509_;
v___y_1482_ = v___x_1517_;
goto v___jp_1473_;
}
}
v___jp_1518_:
{
lean_object* v_home_1523_; lean_object* v_lake_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_home_1523_ = lean_ctor_get(v_lake_1414_, 0);
lean_inc_ref(v_home_1523_);
v_lake_1524_ = lean_ctor_get(v_lake_1414_, 5);
lean_inc_ref(v_lake_1524_);
lean_dec_ref(v_lake_1414_);
lean_inc_ref(v___y_1520_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___y_1520_);
lean_ctor_set(v___x_1525_, 1, v___y_1522_);
v___x_1526_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__1));
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_lake_1524_);
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
v___x_1529_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__5));
v___x_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1530_, 0, v_home_1523_);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
v___x_1532_ = ((lean_object*)(l_Lake_Env_compute___closed__5));
if (lean_obj_tag(v_lakeConfig_x3f_1419_) == 1)
{
lean_object* v_val_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
v_val_1533_ = lean_ctor_get(v_lakeConfig_x3f_1419_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v_lakeConfig_x3f_1419_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v_lakeConfig_x3f_1419_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_val_1533_);
lean_dec(v_lakeConfig_x3f_1419_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_val_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
v___y_1502_ = v___x_1525_;
v___y_1503_ = v___y_1519_;
v___y_1504_ = v___x_1528_;
v___y_1505_ = v___x_1532_;
v___y_1506_ = v___x_1531_;
v___y_1507_ = v___y_1521_;
v___y_1508_ = v___x_1538_;
goto v___jp_1501_;
}
}
}
else
{
lean_object* v___x_1541_; 
lean_dec(v_lakeConfig_x3f_1419_);
v___x_1541_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
v___y_1502_ = v___x_1525_;
v___y_1503_ = v___y_1519_;
v___y_1504_ = v___x_1528_;
v___y_1505_ = v___x_1532_;
v___y_1506_ = v___x_1531_;
v___y_1507_ = v___y_1521_;
v___y_1508_ = v___x_1541_;
goto v___jp_1501_;
}
}
v___jp_1542_:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; 
lean_inc_ref(v___y_1544_);
v___x_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___y_1544_);
lean_ctor_set(v___x_1546_, 1, v___y_1545_);
v___x_1547_ = ((lean_object*)(l_Lake_Env_computeToolchain___closed__0));
v___x_1548_ = lean_string_utf8_byte_size(v_toolchain_1424_);
v___x_1549_ = lean_unsigned_to_nat(0u);
v___x_1550_ = lean_nat_dec_eq(v___x_1548_, v___x_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1551_, 0, v_toolchain_1424_);
v___y_1519_ = v___y_1543_;
v___y_1520_ = v___x_1547_;
v___y_1521_ = v___x_1546_;
v___y_1522_ = v___x_1551_;
goto v___jp_1518_;
}
else
{
lean_object* v___x_1552_; 
lean_dec_ref(v_toolchain_1424_);
v___x_1552_ = lean_box(0);
v___y_1519_ = v___y_1543_;
v___y_1520_ = v___x_1547_;
v___y_1521_ = v___x_1546_;
v___y_1522_ = v___x_1552_;
goto v___jp_1518_;
}
}
v___jp_1554_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1553_);
lean_ctor_set(v___x_1556_, 1, v___y_1555_);
v___x_1557_ = ((lean_object*)(l_Lake_Env_baseVars___closed__4));
if (lean_obj_tag(v_elan_x3f_1416_) == 0)
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_box(0);
v___y_1543_ = v___x_1556_;
v___y_1544_ = v___x_1557_;
v___y_1545_ = v___x_1558_;
goto v___jp_1542_;
}
else
{
lean_object* v_val_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1567_; 
v_val_1559_ = lean_ctor_get(v_elan_x3f_1416_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_elan_x3f_1416_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1561_ = v_elan_x3f_1416_;
v_isShared_1562_ = v_isSharedCheck_1567_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_val_1559_);
lean_dec(v_elan_x3f_1416_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1567_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_home_1563_; lean_object* v___x_1565_; 
v_home_1563_ = lean_ctor_get(v_val_1559_, 0);
lean_inc_ref(v_home_1563_);
lean_dec(v_val_1559_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v_home_1563_);
v___x_1565_ = v___x_1561_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_home_1563_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
v___y_1543_ = v___x_1556_;
v___y_1544_ = v___x_1557_;
v___y_1545_ = v___x_1565_;
goto v___jp_1542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1572_, lean_object* v_msg_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v_msg_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0(lean_object* v_00_u03b2_1575_, lean_object* v_k_1576_, lean_object* v_v_1577_, lean_object* v_t_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v_k_1576_, v_v_1577_, v_t_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1(lean_object* v_init_1580_, lean_object* v_t_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(v_init_1580_, v_t_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0(lean_object* v_x_1583_){
_start:
{
lean_object* v___x_1584_; 
v___x_1584_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0___boxed(lean_object* v_x_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lake_Env_vars___lam__0(v_x_1585_);
lean_dec(v_x_1585_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1(uint8_t v_b_1591_){
_start:
{
if (v_b_1591_ == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = ((lean_object*)(l_Lake_Env_vars___lam__1___closed__0));
return v___x_1592_;
}
else
{
lean_object* v___x_1593_; 
v___x_1593_ = ((lean_object*)(l_Lake_Env_vars___lam__1___closed__1));
return v___x_1593_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1___boxed(lean_object* v_b_1594_){
_start:
{
uint8_t v_b_boxed_1595_; lean_object* v_res_1596_; 
v_b_boxed_1595_ = lean_unbox(v_b_1594_);
v_res_1596_ = l_Lake_Env_vars___lam__1(v_b_boxed_1595_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars(lean_object* v_env_1597_){
_start:
{
lean_object* v_enableArtifactCache_x3f_1598_; lean_object* v_restoreAllArtifacts_x3f_1599_; lean_object* v_lakeCache_x3f_1600_; lean_object* v___x_1601_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___x_1654_; lean_object* v___y_1656_; 
v_enableArtifactCache_x3f_1598_ = lean_ctor_get(v_env_1597_, 6);
v_restoreAllArtifacts_x3f_1599_ = lean_ctor_get(v_env_1597_, 7);
v_lakeCache_x3f_1600_ = lean_ctor_get(v_env_1597_, 8);
lean_inc(v_lakeCache_x3f_1600_);
lean_inc_ref(v_env_1597_);
v___x_1601_ = l_Lake_Env_baseVars(v_env_1597_);
v___x_1654_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
if (lean_obj_tag(v_lakeCache_x3f_1600_) == 1)
{
lean_object* v_val_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
v_val_1663_ = lean_ctor_get(v_lakeCache_x3f_1600_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_lakeCache_x3f_1600_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v_lakeCache_x3f_1600_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_val_1663_);
lean_dec(v_lakeCache_x3f_1600_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_val_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
v___y_1656_ = v___x_1668_;
goto v___jp_1655_;
}
}
}
else
{
lean_object* v___x_1671_; 
lean_dec(v_lakeCache_x3f_1600_);
v___x_1671_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
v___y_1656_ = v___x_1671_;
goto v___jp_1655_;
}
v___jp_1602_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v_vars_1636_; uint8_t v___x_1637_; 
lean_inc_ref(v___y_1604_);
v___x_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1607_, 0, v___y_1604_);
lean_ctor_set(v___x_1607_, 1, v___y_1606_);
v___x_1608_ = ((lean_object*)(l_Lake_Env_compute___closed__11));
v___x_1609_ = l_Lake_Env_leanPath(v_env_1597_);
v___x_1610_ = l_System_SearchPath_toString(v___x_1609_);
v___x_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1608_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = ((lean_object*)(l_Lake_Env_compute___closed__12));
v___x_1614_ = l_Lake_Env_leanSrcPath(v_env_1597_);
v___x_1615_ = l_System_SearchPath_toString(v___x_1614_);
v___x_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1613_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = ((lean_object*)(l_Lake_Env_compute___closed__10));
v___x_1619_ = l_Lake_Env_leanGithash(v_env_1597_);
v___x_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1618_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = ((lean_object*)(l_Lake_Env_compute___closed__13));
v___x_1623_ = l_Lake_Env_path(v_env_1597_);
v___x_1624_ = l_System_SearchPath_toString(v___x_1623_);
v___x_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1622_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = lean_unsigned_to_nat(7u);
v___x_1628_ = lean_mk_empty_array_with_capacity(v___x_1627_);
v___x_1629_ = lean_array_push(v___x_1628_, v___y_1603_);
v___x_1630_ = lean_array_push(v___x_1629_, v___y_1605_);
v___x_1631_ = lean_array_push(v___x_1630_, v___x_1607_);
v___x_1632_ = lean_array_push(v___x_1631_, v___x_1612_);
v___x_1633_ = lean_array_push(v___x_1632_, v___x_1617_);
v___x_1634_ = lean_array_push(v___x_1633_, v___x_1621_);
v___x_1635_ = lean_array_push(v___x_1634_, v___x_1626_);
v_vars_1636_ = l_Array_append___redArg(v___x_1601_, v___x_1635_);
lean_dec_ref(v___x_1635_);
v___x_1637_ = l_System_Platform_isWindows;
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1638_ = l_Lake_sharedLibPathEnvVar;
v___x_1639_ = l_Lake_Env_sharedLibPath(v_env_1597_);
v___x_1640_ = l_System_SearchPath_toString(v___x_1639_);
v___x_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1638_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = lean_array_push(v_vars_1636_, v___x_1642_);
return v___x_1643_;
}
else
{
lean_dec_ref(v_env_1597_);
return v_vars_1636_;
}
}
v___jp_1644_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
lean_inc_ref(v___y_1645_);
v___x_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___y_1645_);
lean_ctor_set(v___x_1648_, 1, v___y_1647_);
v___x_1649_ = ((lean_object*)(l_Lake_Env_compute___closed__4));
if (lean_obj_tag(v_restoreAllArtifacts_x3f_1599_) == 1)
{
lean_object* v_val_1650_; uint8_t v___x_1651_; lean_object* v___x_1652_; 
v_val_1650_ = lean_ctor_get(v_restoreAllArtifacts_x3f_1599_, 0);
v___x_1651_ = lean_unbox(v_val_1650_);
v___x_1652_ = l_Lake_Env_vars___lam__1(v___x_1651_);
v___y_1603_ = v___y_1646_;
v___y_1604_ = v___x_1649_;
v___y_1605_ = v___x_1648_;
v___y_1606_ = v___x_1652_;
goto v___jp_1602_;
}
else
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lake_Env_vars___lam__0(v_restoreAllArtifacts_x3f_1599_);
v___y_1603_ = v___y_1646_;
v___y_1604_ = v___x_1649_;
v___y_1605_ = v___x_1648_;
v___y_1606_ = v___x_1653_;
goto v___jp_1602_;
}
}
v___jp_1655_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1654_);
lean_ctor_set(v___x_1657_, 1, v___y_1656_);
v___x_1658_ = ((lean_object*)(l_Lake_Env_compute___closed__3));
if (lean_obj_tag(v_enableArtifactCache_x3f_1598_) == 1)
{
lean_object* v_val_1659_; uint8_t v___x_1660_; lean_object* v___x_1661_; 
v_val_1659_ = lean_ctor_get(v_enableArtifactCache_x3f_1598_, 0);
v___x_1660_ = lean_unbox(v_val_1659_);
v___x_1661_ = l_Lake_Env_vars___lam__1(v___x_1660_);
v___y_1645_ = v___x_1658_;
v___y_1646_ = v___x_1657_;
v___y_1647_ = v___x_1661_;
goto v___jp_1644_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = l_Lake_Env_vars___lam__0(v_enableArtifactCache_x3f_1598_);
v___y_1645_ = v___x_1658_;
v___y_1646_ = v___x_1657_;
v___y_1647_ = v___x_1662_;
goto v___jp_1644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath(lean_object* v_env_1672_){
_start:
{
lean_object* v_lake_1673_; lean_object* v_lean_1674_; lean_object* v_libDir_1675_; lean_object* v_leanLibDir_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v_lake_1673_ = lean_ctor_get(v_env_1672_, 0);
v_lean_1674_ = lean_ctor_get(v_env_1672_, 1);
v_libDir_1675_ = lean_ctor_get(v_lake_1673_, 3);
v_leanLibDir_1676_ = lean_ctor_get(v_lean_1674_, 3);
v___x_1677_ = l_Lake_Env_leanPath(v_env_1672_);
lean_inc_ref(v_leanLibDir_1676_);
v___x_1678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1678_, 0, v_leanLibDir_1676_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
lean_inc_ref(v_libDir_1675_);
v___x_1679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1679_, 0, v_libDir_1675_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath___boxed(lean_object* v_env_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lake_Env_leanSearchPath(v_env_1680_);
lean_dec_ref(v_env_1680_);
return v_res_1681_;
}
}
lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Env(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedEnv_default = _init_l_Lake_instInhabitedEnv_default();
lean_mark_persistent(l_Lake_instInhabitedEnv_default);
l_Lake_instInhabitedEnv = _init_l_Lake_instInhabitedEnv();
lean_mark_persistent(l_Lake_instInhabitedEnv);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Env(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Env(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Env(builtin);
}
#ifdef __cplusplus
}
#endif

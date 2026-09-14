// Lean compiler output
// Module: Lake.Config.Package
// Imports: public import Lake.Config.Cache public import Lake.Config.Script public import Lake.Config.ConfigDecl public import Lake.Config.Dependency public import Lake.Config.PackageConfig public import Lake.Util.FilePath public import Lake.Util.OrdHashSet public import Lake.Util.Name meta import all Lake.Util.OpaqueType import Lake.Util.OpaqueType import Lake.Util.IO
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
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lake_LeanExe_keyword;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lake_LeanLibConfig_isBuildableModule___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_CacheServiceScope_ofString(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_OrdHashSet_empty___redArg();
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Bool_decEq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_instInhabitedPackageConfig_default___redArg();
extern lean_object* l_System_Platform_target;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_appendArray(lean_object*, lean_object*);
uint8_t l_Lake_LeanLibConfig_isLocalModule___redArg(lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lake_removeDirAllIfExists(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___redArg();
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_instInhabitedPackage_default_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_instInhabitedPackage_default_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__0;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__1;
static const lean_string_object l_Lake_instInhabitedPackage_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedPackage_default___closed__2 = (const lean_object*)&l_Lake_instInhabitedPackage_default___closed__2_value;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__3;
static const lean_array_object l_Lake_instInhabitedPackage_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedPackage_default___closed__4 = (const lean_object*)&l_Lake_instInhabitedPackage_default___closed__4_value;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__5;
static const lean_string_object l_Lake_instInhabitedPackage_default___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lake_instInhabitedPackage_default___closed__6 = (const lean_object*)&l_Lake_instInhabitedPackage_default___closed__6_value;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__7;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__8;
static const lean_string_object l_Lake_instInhabitedPackage_default___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ".tar.gz"};
static const lean_object* l_Lake_instInhabitedPackage_default___closed__9 = (const lean_object*)&l_Lake_instInhabitedPackage_default___closed__9_value;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__10;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__11;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_instInhabitedPackage_default___closed__12;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_instInhabitedPackage_default___closed__13;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lake_instInhabitedPackage_default___closed__14;
static lean_once_cell_t l_Lake_instInhabitedPackage_default___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedPackage_default___closed__15;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPackage_default;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPackage;
LEAN_EXPORT uint64_t l_Lake_Package_instHashable___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_instHashable___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Package_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Package_instHashable___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_instHashable___closed__0 = (const lean_object*)&l_Lake_Package_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Package_instHashable = (const lean_object*)&l_Lake_Package_instHashable___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_Package_instBEq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_instBEq___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Package_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Package_instBEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_instBEq___closed__0 = (const lean_object*)&l_Lake_Package_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Package_instBEq = (const lean_object*)&l_Lake_Package_instBEq___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_prettyName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_instQueryJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_Package_instQueryJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Package_instQueryJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_instQueryJson___closed__0 = (const lean_object*)&l_Lake_Package_instQueryJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Package_instQueryJson = (const lean_object*)&l_Lake_Package_instQueryJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_instQueryText___lam__0(lean_object*);
static const lean_closure_object l_Lake_Package_instQueryText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Package_instQueryText___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_instQueryText___closed__0 = (const lean_object*)&l_Lake_Package_instQueryText___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Package_instQueryText = (const lean_object*)&l_Lake_Package_instQueryText___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_name(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_name___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_reservoirName(lean_object*);
static lean_once_cell_t l_Lake_PackageSet_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PackageSet_empty___closed__0;
static lean_once_cell_t l_Lake_PackageSet_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PackageSet_empty___closed__1;
LEAN_EXPORT lean_object* l_Lake_PackageSet_empty;
static lean_once_cell_t l_Lake_OrdPackageSet_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdPackageSet_empty___closed__0;
LEAN_EXPORT lean_object* l_Lake_OrdPackageSet_empty;
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_NPackage_instCoeOutPackage___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_NPackage_instCoeOutPackage___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___closed__0 = (const lean_object*)&l_Lake_NPackage_instCoeOutPackage___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg();
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeDepPackageKeyName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeDepPackageKeyName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instInhabitedPostUpdateHook_default___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0 = (const lean_object*)&l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg();
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook___redArg();
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instCoeMk(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instCoeGet(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_instImpl___closed__0_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_instImpl___closed__0_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_ = (const lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value;
static const lean_string_object l_Lake_instImpl___closed__1_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "PostUpdateHookDecl"};
static const lean_object* l_Lake_instImpl___closed__1_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_ = (const lean_object*)&l_Lake_instImpl___closed__1_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value;
static const lean_ctor_object l_Lake_instImpl___closed__2_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instImpl___closed__0_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instImpl___closed__2_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instImpl___closed__2_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value_aux_0),((lean_object*)&l_Lake_instImpl___closed__1_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(197, 83, 199, 129, 62, 183, 64, 19)}};
static const lean_object* l_Lake_instImpl___closed__2_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_ = (const lean_object*)&l_Lake_instImpl___closed__2_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__value;
static lean_once_cell_t l_Lake_instImpl___closed__3_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instImpl___closed__3_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_;
LEAN_EXPORT lean_object* l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_;
LEAN_EXPORT lean_object* l_Lake_instTypeNamePostUpdateHookDecl;
LEAN_EXPORT uint8_t l_Lake_Package_isRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isRoot___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_bootstrap(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_bootstrap___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_id_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_version(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_version___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_versionTags(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_versionTags___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_description(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_description___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_keywords(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_keywords___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_homepage(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_homepage___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_reservoir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_reservoir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_license(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_license___boxed(lean_object*);
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_System_FilePath_normalize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__0 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__0_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__1 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__1_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__2 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__2_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__3 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__3_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__4 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__4_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__5 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__5_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__6 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__6_value;
static const lean_closure_object l_Lake_Package_relLicenseFiles___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_relLicenseFiles___closed__7 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__7_value;
static const lean_ctor_object l_Lake_Package_relLicenseFiles___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_relLicenseFiles___closed__1_value),((lean_object*)&l_Lake_Package_relLicenseFiles___closed__2_value)}};
static const lean_object* l_Lake_Package_relLicenseFiles___closed__8 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__8_value;
static const lean_ctor_object l_Lake_Package_relLicenseFiles___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_relLicenseFiles___closed__8_value),((lean_object*)&l_Lake_Package_relLicenseFiles___closed__3_value),((lean_object*)&l_Lake_Package_relLicenseFiles___closed__4_value),((lean_object*)&l_Lake_Package_relLicenseFiles___closed__5_value),((lean_object*)&l_Lake_Package_relLicenseFiles___closed__6_value)}};
static const lean_object* l_Lake_Package_relLicenseFiles___closed__9 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__9_value;
static const lean_ctor_object l_Lake_Package_relLicenseFiles___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_relLicenseFiles___closed__9_value),((lean_object*)&l_Lake_Package_relLicenseFiles___closed__7_value)}};
static const lean_object* l_Lake_Package_relLicenseFiles___closed__10 = (const lean_object*)&l_Lake_Package_relLicenseFiles___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_Package_relLicenseFiles(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_relLicenseFiles___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_licenseFiles___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_licenseFiles(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_relReadmeFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_readmeFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir___redArg();
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_lakeDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_relPkgsDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_pkgsDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_manifestFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_buildDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_testDriverArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_testDriverArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_lintDriverArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_lintDriverArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_extraDepTargets(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_extraDepTargets___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_platformIndependent(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_platformIndependent___boxed(lean_object*);
static const lean_closure_object l_Lake_Package_isPlatformIndependent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Bool_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_isPlatformIndependent___closed__0 = (const lean_object*)&l_Lake_Package_isPlatformIndependent___closed__0_value;
static const lean_closure_object l_Lake_Package_isPlatformIndependent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instBEqOfDecidableEq___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_Package_isPlatformIndependent___closed__0_value)} };
static const lean_object* l_Lake_Package_isPlatformIndependent___closed__1 = (const lean_object*)&l_Lake_Package_isPlatformIndependent___closed__1_value;
static const lean_ctor_object l_Lake_Package_isPlatformIndependent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_Package_isPlatformIndependent___closed__2 = (const lean_object*)&l_Lake_Package_isPlatformIndependent___closed__2_value;
LEAN_EXPORT uint8_t l_Lake_Package_isPlatformIndependent(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isPlatformIndependent___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_fixedToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fixedToolchain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_releaseRepo_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_releaseRepo_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_remoteUrl_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_remoteUrl_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_buildArchiveFile(lean_object*);
static const lean_string_object l_Lake_Package_barrelFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "build.barrel"};
static const lean_object* l_Lake_Package_barrelFile___closed__0 = (const lean_object*)&l_Lake_Package_barrelFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_barrelFile(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_preferReleaseBuild(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_preferReleaseBuild___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_precompileModules(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_precompileModules___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_precompileImports(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_precompileImports___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreGlobalServerArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreGlobalServerArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreServerOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreServerOptions___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_buildType(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_buildType___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_backend(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_backend___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_allowImportAll(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_allowImportAll___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_requiresModuleSystem(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_requiresModuleSystem___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_allowNonModules(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_allowNonModules___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_dynlibs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_dynlibs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_plugins(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_plugins___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_leanOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_leanOptions___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLeanArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLeanArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_weakLeanArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_weakLeanArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLeancArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLeancArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_weakLeancArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_weakLeancArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkObjs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkObjs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkLibs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkLibs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_weakLinkArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_weakLinkArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_srcDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_rootDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_leanLibDir(lean_object*);
static const lean_string_object l_Lake_Package_bootstrapIncludeDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "include"};
static const lean_object* l_Lake_Package_bootstrapIncludeDir___closed__0 = (const lean_object*)&l_Lake_Package_bootstrapIncludeDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_bootstrapIncludeDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_staticLibDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_sharedLibDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_binDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_irDir(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_libPrefixOnWindows(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_libPrefixOnWindows___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_enableArtifactCache_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_enableArtifactCache_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_cacheScope(lean_object*);
static const lean_string_object l___private_Lake_Config_Package_0__Lake_Package_reservoirScope___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Config_Package_0__Lake_Package_reservoirScope___closed__0 = (const lean_object*)&l___private_Lake_Config_Package_0__Lake_Package_reservoirScope___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_Package_reservoirScope(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_reservoirScope_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findTargetDecl_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_isLocalModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isLocalModule___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isBuildableModule_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isBuildableModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_isBuildableModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isBuildableModule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_clean(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_clean___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___redArg(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___redArg___boxed(lean_object* v___dummy_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___redArg();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType(lean_object* v_pkg_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_box(0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType___boxed(lean_object* v_pkg_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_nonemptyType(v_pkg_7_);
lean_dec(v_pkg_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0___redArg(lean_object* v_k_9_, lean_object* v_v_10_, lean_object* v_t_11_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
lean_object* v_size_12_; lean_object* v_k_13_; lean_object* v_v_14_; lean_object* v_l_15_; lean_object* v_r_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_296_; 
v_size_12_ = lean_ctor_get(v_t_11_, 0);
v_k_13_ = lean_ctor_get(v_t_11_, 1);
v_v_14_ = lean_ctor_get(v_t_11_, 2);
v_l_15_ = lean_ctor_get(v_t_11_, 3);
v_r_16_ = lean_ctor_get(v_t_11_, 4);
v_isSharedCheck_296_ = !lean_is_exclusive(v_t_11_);
if (v_isSharedCheck_296_ == 0)
{
v___x_18_ = v_t_11_;
v_isShared_19_ = v_isSharedCheck_296_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_r_16_);
lean_inc(v_l_15_);
lean_inc(v_v_14_);
lean_inc(v_k_13_);
lean_inc(v_size_12_);
lean_dec(v_t_11_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_296_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
uint8_t v___x_20_; 
v___x_20_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_9_, v_k_13_);
switch(v___x_20_)
{
case 0:
{
lean_object* v_impl_21_; lean_object* v___x_22_; 
lean_dec(v_size_12_);
v_impl_21_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0___redArg(v_k_9_, v_v_10_, v_l_15_);
v___x_22_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_16_) == 0)
{
lean_object* v_size_23_; lean_object* v_size_24_; lean_object* v_k_25_; lean_object* v_v_26_; lean_object* v_l_27_; lean_object* v_r_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v_size_23_ = lean_ctor_get(v_r_16_, 0);
v_size_24_ = lean_ctor_get(v_impl_21_, 0);
lean_inc(v_size_24_);
v_k_25_ = lean_ctor_get(v_impl_21_, 1);
lean_inc(v_k_25_);
v_v_26_ = lean_ctor_get(v_impl_21_, 2);
lean_inc(v_v_26_);
v_l_27_ = lean_ctor_get(v_impl_21_, 3);
lean_inc(v_l_27_);
v_r_28_ = lean_ctor_get(v_impl_21_, 4);
lean_inc(v_r_28_);
v___x_29_ = lean_unsigned_to_nat(3u);
v___x_30_ = lean_nat_mul(v___x_29_, v_size_23_);
v___x_31_ = lean_nat_dec_lt(v___x_30_, v_size_24_);
lean_dec(v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
lean_dec(v_r_28_);
lean_dec(v_l_27_);
lean_dec(v_v_26_);
lean_dec(v_k_25_);
v___x_32_ = lean_nat_add(v___x_22_, v_size_24_);
lean_dec(v_size_24_);
v___x_33_ = lean_nat_add(v___x_32_, v_size_23_);
lean_dec(v___x_32_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 3, v_impl_21_);
lean_ctor_set(v___x_18_, 0, v___x_33_);
v___x_35_ = v___x_18_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_33_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_36_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_36_, 3, v_impl_21_);
lean_ctor_set(v_reuseFailAlloc_36_, 4, v_r_16_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
else
{
lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_102_; 
v_isSharedCheck_102_ = !lean_is_exclusive(v_impl_21_);
if (v_isSharedCheck_102_ == 0)
{
lean_object* v_unused_103_; lean_object* v_unused_104_; lean_object* v_unused_105_; lean_object* v_unused_106_; lean_object* v_unused_107_; 
v_unused_103_ = lean_ctor_get(v_impl_21_, 4);
lean_dec(v_unused_103_);
v_unused_104_ = lean_ctor_get(v_impl_21_, 3);
lean_dec(v_unused_104_);
v_unused_105_ = lean_ctor_get(v_impl_21_, 2);
lean_dec(v_unused_105_);
v_unused_106_ = lean_ctor_get(v_impl_21_, 1);
lean_dec(v_unused_106_);
v_unused_107_ = lean_ctor_get(v_impl_21_, 0);
lean_dec(v_unused_107_);
v___x_38_ = v_impl_21_;
v_isShared_39_ = v_isSharedCheck_102_;
goto v_resetjp_37_;
}
else
{
lean_dec(v_impl_21_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_102_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v_size_40_; lean_object* v_size_41_; lean_object* v_k_42_; lean_object* v_v_43_; lean_object* v_l_44_; lean_object* v_r_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v_size_40_ = lean_ctor_get(v_l_27_, 0);
v_size_41_ = lean_ctor_get(v_r_28_, 0);
v_k_42_ = lean_ctor_get(v_r_28_, 1);
v_v_43_ = lean_ctor_get(v_r_28_, 2);
v_l_44_ = lean_ctor_get(v_r_28_, 3);
v_r_45_ = lean_ctor_get(v_r_28_, 4);
v___x_46_ = lean_unsigned_to_nat(2u);
v___x_47_ = lean_nat_mul(v___x_46_, v_size_40_);
v___x_48_ = lean_nat_dec_lt(v_size_41_, v___x_47_);
lean_dec(v___x_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_77_; 
lean_inc(v_r_45_);
lean_inc(v_l_44_);
lean_inc(v_v_43_);
lean_inc(v_k_42_);
v_isSharedCheck_77_ = !lean_is_exclusive(v_r_28_);
if (v_isSharedCheck_77_ == 0)
{
lean_object* v_unused_78_; lean_object* v_unused_79_; lean_object* v_unused_80_; lean_object* v_unused_81_; lean_object* v_unused_82_; 
v_unused_78_ = lean_ctor_get(v_r_28_, 4);
lean_dec(v_unused_78_);
v_unused_79_ = lean_ctor_get(v_r_28_, 3);
lean_dec(v_unused_79_);
v_unused_80_ = lean_ctor_get(v_r_28_, 2);
lean_dec(v_unused_80_);
v_unused_81_ = lean_ctor_get(v_r_28_, 1);
lean_dec(v_unused_81_);
v_unused_82_ = lean_ctor_get(v_r_28_, 0);
lean_dec(v_unused_82_);
v___x_50_ = v_r_28_;
v_isShared_51_ = v_isSharedCheck_77_;
goto v_resetjp_49_;
}
else
{
lean_dec(v_r_28_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_77_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___y_55_; lean_object* v___y_56_; lean_object* v___y_57_; lean_object* v___x_65_; lean_object* v___y_67_; 
v___x_52_ = lean_nat_add(v___x_22_, v_size_24_);
lean_dec(v_size_24_);
v___x_53_ = lean_nat_add(v___x_52_, v_size_23_);
lean_dec(v___x_52_);
v___x_65_ = lean_nat_add(v___x_22_, v_size_40_);
if (lean_obj_tag(v_l_44_) == 0)
{
lean_object* v_size_75_; 
v_size_75_ = lean_ctor_get(v_l_44_, 0);
lean_inc(v_size_75_);
v___y_67_ = v_size_75_;
goto v___jp_66_;
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_unsigned_to_nat(0u);
v___y_67_ = v___x_76_;
goto v___jp_66_;
}
v___jp_54_:
{
lean_object* v___x_58_; lean_object* v___x_60_; 
v___x_58_ = lean_nat_add(v___y_56_, v___y_57_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 4, v_r_16_);
lean_ctor_set(v___x_50_, 3, v_r_45_);
lean_ctor_set(v___x_50_, 2, v_v_14_);
lean_ctor_set(v___x_50_, 1, v_k_13_);
lean_ctor_set(v___x_50_, 0, v___x_58_);
v___x_60_ = v___x_50_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_64_, 3, v_r_45_);
lean_ctor_set(v_reuseFailAlloc_64_, 4, v_r_16_);
v___x_60_ = v_reuseFailAlloc_64_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_62_; 
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 4, v___x_60_);
lean_ctor_set(v___x_38_, 3, v___y_55_);
lean_ctor_set(v___x_38_, 2, v_v_43_);
lean_ctor_set(v___x_38_, 1, v_k_42_);
lean_ctor_set(v___x_38_, 0, v___x_53_);
v___x_62_ = v___x_38_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_k_42_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_v_43_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v___y_55_);
lean_ctor_set(v_reuseFailAlloc_63_, 4, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
v___jp_66_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_nat_add(v___x_65_, v___y_67_);
lean_dec(v___y_67_);
lean_dec(v___x_65_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v_l_44_);
lean_ctor_set(v___x_18_, 3, v_l_27_);
lean_ctor_set(v___x_18_, 2, v_v_26_);
lean_ctor_set(v___x_18_, 1, v_k_25_);
lean_ctor_set(v___x_18_, 0, v___x_68_);
v___x_70_ = v___x_18_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v_k_25_);
lean_ctor_set(v_reuseFailAlloc_74_, 2, v_v_26_);
lean_ctor_set(v_reuseFailAlloc_74_, 3, v_l_27_);
lean_ctor_set(v_reuseFailAlloc_74_, 4, v_l_44_);
v___x_70_ = v_reuseFailAlloc_74_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; 
v___x_71_ = lean_nat_add(v___x_22_, v_size_23_);
if (lean_obj_tag(v_r_45_) == 0)
{
lean_object* v_size_72_; 
v_size_72_ = lean_ctor_get(v_r_45_, 0);
lean_inc(v_size_72_);
v___y_55_ = v___x_70_;
v___y_56_ = v___x_71_;
v___y_57_ = v_size_72_;
goto v___jp_54_;
}
else
{
lean_object* v___x_73_; 
v___x_73_ = lean_unsigned_to_nat(0u);
v___y_55_ = v___x_70_;
v___y_56_ = v___x_71_;
v___y_57_ = v___x_73_;
goto v___jp_54_;
}
}
}
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_88_; 
lean_del_object(v___x_18_);
v___x_83_ = lean_nat_add(v___x_22_, v_size_24_);
lean_dec(v_size_24_);
v___x_84_ = lean_nat_add(v___x_83_, v_size_23_);
lean_dec(v___x_83_);
v___x_85_ = lean_nat_add(v___x_22_, v_size_23_);
v___x_86_ = lean_nat_add(v___x_85_, v_size_41_);
lean_dec(v___x_85_);
lean_inc_ref(v_r_16_);
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 4, v_r_16_);
lean_ctor_set(v___x_38_, 3, v_r_28_);
lean_ctor_set(v___x_38_, 2, v_v_14_);
lean_ctor_set(v___x_38_, 1, v_k_13_);
lean_ctor_set(v___x_38_, 0, v___x_86_);
v___x_88_ = v___x_38_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_86_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_101_, 3, v_r_28_);
lean_ctor_set(v_reuseFailAlloc_101_, 4, v_r_16_);
v___x_88_ = v_reuseFailAlloc_101_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_isSharedCheck_95_ = !lean_is_exclusive(v_r_16_);
if (v_isSharedCheck_95_ == 0)
{
lean_object* v_unused_96_; lean_object* v_unused_97_; lean_object* v_unused_98_; lean_object* v_unused_99_; lean_object* v_unused_100_; 
v_unused_96_ = lean_ctor_get(v_r_16_, 4);
lean_dec(v_unused_96_);
v_unused_97_ = lean_ctor_get(v_r_16_, 3);
lean_dec(v_unused_97_);
v_unused_98_ = lean_ctor_get(v_r_16_, 2);
lean_dec(v_unused_98_);
v_unused_99_ = lean_ctor_get(v_r_16_, 1);
lean_dec(v_unused_99_);
v_unused_100_ = lean_ctor_get(v_r_16_, 0);
lean_dec(v_unused_100_);
v___x_90_ = v_r_16_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_dec(v_r_16_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 4, v___x_88_);
lean_ctor_set(v___x_90_, 3, v_l_27_);
lean_ctor_set(v___x_90_, 2, v_v_26_);
lean_ctor_set(v___x_90_, 1, v_k_25_);
lean_ctor_set(v___x_90_, 0, v___x_84_);
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v_k_25_);
lean_ctor_set(v_reuseFailAlloc_94_, 2, v_v_26_);
lean_ctor_set(v_reuseFailAlloc_94_, 3, v_l_27_);
lean_ctor_set(v_reuseFailAlloc_94_, 4, v___x_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_108_; 
v_l_108_ = lean_ctor_get(v_impl_21_, 3);
lean_inc(v_l_108_);
if (lean_obj_tag(v_l_108_) == 0)
{
lean_object* v_r_109_; lean_object* v_k_110_; lean_object* v_v_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_122_; 
v_r_109_ = lean_ctor_get(v_impl_21_, 4);
v_k_110_ = lean_ctor_get(v_impl_21_, 1);
v_v_111_ = lean_ctor_get(v_impl_21_, 2);
v_isSharedCheck_122_ = !lean_is_exclusive(v_impl_21_);
if (v_isSharedCheck_122_ == 0)
{
lean_object* v_unused_123_; lean_object* v_unused_124_; 
v_unused_123_ = lean_ctor_get(v_impl_21_, 3);
lean_dec(v_unused_123_);
v_unused_124_ = lean_ctor_get(v_impl_21_, 0);
lean_dec(v_unused_124_);
v___x_113_ = v_impl_21_;
v_isShared_114_ = v_isSharedCheck_122_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_r_109_);
lean_inc(v_v_111_);
lean_inc(v_k_110_);
lean_dec(v_impl_21_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_122_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_115_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_109_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 3, v_r_109_);
lean_ctor_set(v___x_113_, 2, v_v_14_);
lean_ctor_set(v___x_113_, 1, v_k_13_);
lean_ctor_set(v___x_113_, 0, v___x_22_);
v___x_117_ = v___x_113_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_22_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_121_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_121_, 3, v_r_109_);
lean_ctor_set(v_reuseFailAlloc_121_, 4, v_r_109_);
v___x_117_ = v_reuseFailAlloc_121_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_119_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v___x_117_);
lean_ctor_set(v___x_18_, 3, v_l_108_);
lean_ctor_set(v___x_18_, 2, v_v_111_);
lean_ctor_set(v___x_18_, 1, v_k_110_);
lean_ctor_set(v___x_18_, 0, v___x_115_);
v___x_119_ = v___x_18_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_k_110_);
lean_ctor_set(v_reuseFailAlloc_120_, 2, v_v_111_);
lean_ctor_set(v_reuseFailAlloc_120_, 3, v_l_108_);
lean_ctor_set(v_reuseFailAlloc_120_, 4, v___x_117_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
else
{
lean_object* v_r_125_; 
v_r_125_ = lean_ctor_get(v_impl_21_, 4);
lean_inc(v_r_125_);
if (lean_obj_tag(v_r_125_) == 0)
{
lean_object* v_k_126_; lean_object* v_v_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_150_; 
v_k_126_ = lean_ctor_get(v_impl_21_, 1);
v_v_127_ = lean_ctor_get(v_impl_21_, 2);
v_isSharedCheck_150_ = !lean_is_exclusive(v_impl_21_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; lean_object* v_unused_152_; lean_object* v_unused_153_; 
v_unused_151_ = lean_ctor_get(v_impl_21_, 4);
lean_dec(v_unused_151_);
v_unused_152_ = lean_ctor_get(v_impl_21_, 3);
lean_dec(v_unused_152_);
v_unused_153_ = lean_ctor_get(v_impl_21_, 0);
lean_dec(v_unused_153_);
v___x_129_ = v_impl_21_;
v_isShared_130_ = v_isSharedCheck_150_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_v_127_);
lean_inc(v_k_126_);
lean_dec(v_impl_21_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_150_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_k_131_; lean_object* v_v_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_146_; 
v_k_131_ = lean_ctor_get(v_r_125_, 1);
v_v_132_ = lean_ctor_get(v_r_125_, 2);
v_isSharedCheck_146_ = !lean_is_exclusive(v_r_125_);
if (v_isSharedCheck_146_ == 0)
{
lean_object* v_unused_147_; lean_object* v_unused_148_; lean_object* v_unused_149_; 
v_unused_147_ = lean_ctor_get(v_r_125_, 4);
lean_dec(v_unused_147_);
v_unused_148_ = lean_ctor_get(v_r_125_, 3);
lean_dec(v_unused_148_);
v_unused_149_ = lean_ctor_get(v_r_125_, 0);
lean_dec(v_unused_149_);
v___x_134_ = v_r_125_;
v_isShared_135_ = v_isSharedCheck_146_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_v_132_);
lean_inc(v_k_131_);
lean_dec(v_r_125_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_146_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_unsigned_to_nat(3u);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 4, v_l_108_);
lean_ctor_set(v___x_134_, 3, v_l_108_);
lean_ctor_set(v___x_134_, 2, v_v_127_);
lean_ctor_set(v___x_134_, 1, v_k_126_);
lean_ctor_set(v___x_134_, 0, v___x_22_);
v___x_138_ = v___x_134_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_22_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_k_126_);
lean_ctor_set(v_reuseFailAlloc_145_, 2, v_v_127_);
lean_ctor_set(v_reuseFailAlloc_145_, 3, v_l_108_);
lean_ctor_set(v_reuseFailAlloc_145_, 4, v_l_108_);
v___x_138_ = v_reuseFailAlloc_145_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_140_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 4, v_l_108_);
lean_ctor_set(v___x_129_, 2, v_v_14_);
lean_ctor_set(v___x_129_, 1, v_k_13_);
lean_ctor_set(v___x_129_, 0, v___x_22_);
v___x_140_ = v___x_129_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_22_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_144_, 3, v_l_108_);
lean_ctor_set(v_reuseFailAlloc_144_, 4, v_l_108_);
v___x_140_ = v_reuseFailAlloc_144_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_142_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v___x_140_);
lean_ctor_set(v___x_18_, 3, v___x_138_);
lean_ctor_set(v___x_18_, 2, v_v_132_);
lean_ctor_set(v___x_18_, 1, v_k_131_);
lean_ctor_set(v___x_18_, 0, v___x_136_);
v___x_142_ = v___x_18_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_136_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v_k_131_);
lean_ctor_set(v_reuseFailAlloc_143_, 2, v_v_132_);
lean_ctor_set(v_reuseFailAlloc_143_, 3, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_143_, 4, v___x_140_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
}
}
else
{
lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_154_ = lean_unsigned_to_nat(2u);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v_r_125_);
lean_ctor_set(v___x_18_, 3, v_impl_21_);
lean_ctor_set(v___x_18_, 0, v___x_154_);
v___x_156_ = v___x_18_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_157_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_157_, 3, v_impl_21_);
lean_ctor_set(v_reuseFailAlloc_157_, 4, v_r_125_);
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
case 1:
{
lean_object* v___x_159_; 
lean_dec(v_v_14_);
lean_dec(v_k_13_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 2, v_v_10_);
lean_ctor_set(v___x_18_, 1, v_k_9_);
v___x_159_ = v___x_18_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_size_12_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_k_9_);
lean_ctor_set(v_reuseFailAlloc_160_, 2, v_v_10_);
lean_ctor_set(v_reuseFailAlloc_160_, 3, v_l_15_);
lean_ctor_set(v_reuseFailAlloc_160_, 4, v_r_16_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
default: 
{
lean_object* v_impl_161_; lean_object* v___x_162_; 
lean_dec(v_size_12_);
v_impl_161_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0___redArg(v_k_9_, v_v_10_, v_r_16_);
v___x_162_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_15_) == 0)
{
lean_object* v_size_163_; lean_object* v_size_164_; lean_object* v_k_165_; lean_object* v_v_166_; lean_object* v_l_167_; lean_object* v_r_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v_size_163_ = lean_ctor_get(v_l_15_, 0);
v_size_164_ = lean_ctor_get(v_impl_161_, 0);
lean_inc(v_size_164_);
v_k_165_ = lean_ctor_get(v_impl_161_, 1);
lean_inc(v_k_165_);
v_v_166_ = lean_ctor_get(v_impl_161_, 2);
lean_inc(v_v_166_);
v_l_167_ = lean_ctor_get(v_impl_161_, 3);
lean_inc(v_l_167_);
v_r_168_ = lean_ctor_get(v_impl_161_, 4);
lean_inc(v_r_168_);
v___x_169_ = lean_unsigned_to_nat(3u);
v___x_170_ = lean_nat_mul(v___x_169_, v_size_163_);
v___x_171_ = lean_nat_dec_lt(v___x_170_, v_size_164_);
lean_dec(v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
lean_dec(v_r_168_);
lean_dec(v_l_167_);
lean_dec(v_v_166_);
lean_dec(v_k_165_);
v___x_172_ = lean_nat_add(v___x_162_, v_size_163_);
v___x_173_ = lean_nat_add(v___x_172_, v_size_164_);
lean_dec(v_size_164_);
lean_dec(v___x_172_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v_impl_161_);
lean_ctor_set(v___x_18_, 0, v___x_173_);
v___x_175_ = v___x_18_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_176_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_176_, 3, v_l_15_);
lean_ctor_set(v_reuseFailAlloc_176_, 4, v_impl_161_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
else
{
lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_240_; 
v_isSharedCheck_240_ = !lean_is_exclusive(v_impl_161_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; lean_object* v_unused_242_; lean_object* v_unused_243_; lean_object* v_unused_244_; lean_object* v_unused_245_; 
v_unused_241_ = lean_ctor_get(v_impl_161_, 4);
lean_dec(v_unused_241_);
v_unused_242_ = lean_ctor_get(v_impl_161_, 3);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_impl_161_, 2);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_impl_161_, 1);
lean_dec(v_unused_244_);
v_unused_245_ = lean_ctor_get(v_impl_161_, 0);
lean_dec(v_unused_245_);
v___x_178_ = v_impl_161_;
v_isShared_179_ = v_isSharedCheck_240_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_impl_161_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_240_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_size_180_; lean_object* v_k_181_; lean_object* v_v_182_; lean_object* v_l_183_; lean_object* v_r_184_; lean_object* v_size_185_; lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v_size_180_ = lean_ctor_get(v_l_167_, 0);
v_k_181_ = lean_ctor_get(v_l_167_, 1);
v_v_182_ = lean_ctor_get(v_l_167_, 2);
v_l_183_ = lean_ctor_get(v_l_167_, 3);
v_r_184_ = lean_ctor_get(v_l_167_, 4);
v_size_185_ = lean_ctor_get(v_r_168_, 0);
v___x_186_ = lean_unsigned_to_nat(2u);
v___x_187_ = lean_nat_mul(v___x_186_, v_size_185_);
v___x_188_ = lean_nat_dec_lt(v_size_180_, v___x_187_);
lean_dec(v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_216_; 
lean_inc(v_r_184_);
lean_inc(v_l_183_);
lean_inc(v_v_182_);
lean_inc(v_k_181_);
v_isSharedCheck_216_ = !lean_is_exclusive(v_l_167_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; lean_object* v_unused_218_; lean_object* v_unused_219_; lean_object* v_unused_220_; lean_object* v_unused_221_; 
v_unused_217_ = lean_ctor_get(v_l_167_, 4);
lean_dec(v_unused_217_);
v_unused_218_ = lean_ctor_get(v_l_167_, 3);
lean_dec(v_unused_218_);
v_unused_219_ = lean_ctor_get(v_l_167_, 2);
lean_dec(v_unused_219_);
v_unused_220_ = lean_ctor_get(v_l_167_, 1);
lean_dec(v_unused_220_);
v_unused_221_ = lean_ctor_get(v_l_167_, 0);
lean_dec(v_unused_221_);
v___x_190_ = v_l_167_;
v_isShared_191_ = v_isSharedCheck_216_;
goto v_resetjp_189_;
}
else
{
lean_dec(v_l_167_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_216_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___y_206_; 
v___x_192_ = lean_nat_add(v___x_162_, v_size_163_);
v___x_193_ = lean_nat_add(v___x_192_, v_size_164_);
lean_dec(v_size_164_);
if (lean_obj_tag(v_l_183_) == 0)
{
lean_object* v_size_214_; 
v_size_214_ = lean_ctor_get(v_l_183_, 0);
lean_inc(v_size_214_);
v___y_206_ = v_size_214_;
goto v___jp_205_;
}
else
{
lean_object* v___x_215_; 
v___x_215_ = lean_unsigned_to_nat(0u);
v___y_206_ = v___x_215_;
goto v___jp_205_;
}
v___jp_194_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = lean_nat_add(v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec(v___y_196_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 4, v_r_168_);
lean_ctor_set(v___x_190_, 3, v_r_184_);
lean_ctor_set(v___x_190_, 2, v_v_166_);
lean_ctor_set(v___x_190_, 1, v_k_165_);
lean_ctor_set(v___x_190_, 0, v___x_198_);
v___x_200_ = v___x_190_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_k_165_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v_v_166_);
lean_ctor_set(v_reuseFailAlloc_204_, 3, v_r_184_);
lean_ctor_set(v_reuseFailAlloc_204_, 4, v_r_168_);
v___x_200_ = v_reuseFailAlloc_204_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_202_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 4, v___x_200_);
lean_ctor_set(v___x_178_, 3, v___y_195_);
lean_ctor_set(v___x_178_, 2, v_v_182_);
lean_ctor_set(v___x_178_, 1, v_k_181_);
lean_ctor_set(v___x_178_, 0, v___x_193_);
v___x_202_ = v___x_178_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_k_181_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_v_182_);
lean_ctor_set(v_reuseFailAlloc_203_, 3, v___y_195_);
lean_ctor_set(v_reuseFailAlloc_203_, 4, v___x_200_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
v___jp_205_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_nat_add(v___x_192_, v___y_206_);
lean_dec(v___y_206_);
lean_dec(v___x_192_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v_l_183_);
lean_ctor_set(v___x_18_, 0, v___x_207_);
v___x_209_ = v___x_18_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_213_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_213_, 3, v_l_15_);
lean_ctor_set(v_reuseFailAlloc_213_, 4, v_l_183_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_210_; 
v___x_210_ = lean_nat_add(v___x_162_, v_size_185_);
if (lean_obj_tag(v_r_184_) == 0)
{
lean_object* v_size_211_; 
v_size_211_ = lean_ctor_get(v_r_184_, 0);
lean_inc(v_size_211_);
v___y_195_ = v___x_209_;
v___y_196_ = v___x_210_;
v___y_197_ = v_size_211_;
goto v___jp_194_;
}
else
{
lean_object* v___x_212_; 
v___x_212_ = lean_unsigned_to_nat(0u);
v___y_195_ = v___x_209_;
v___y_196_ = v___x_210_;
v___y_197_ = v___x_212_;
goto v___jp_194_;
}
}
}
}
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_226_; 
lean_del_object(v___x_18_);
v___x_222_ = lean_nat_add(v___x_162_, v_size_163_);
v___x_223_ = lean_nat_add(v___x_222_, v_size_164_);
lean_dec(v_size_164_);
v___x_224_ = lean_nat_add(v___x_222_, v_size_180_);
lean_dec(v___x_222_);
lean_inc_ref(v_l_15_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 4, v_l_167_);
lean_ctor_set(v___x_178_, 3, v_l_15_);
lean_ctor_set(v___x_178_, 2, v_v_14_);
lean_ctor_set(v___x_178_, 1, v_k_13_);
lean_ctor_set(v___x_178_, 0, v___x_224_);
v___x_226_ = v___x_178_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_239_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_239_, 3, v_l_15_);
lean_ctor_set(v_reuseFailAlloc_239_, 4, v_l_167_);
v___x_226_ = v_reuseFailAlloc_239_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
v_isSharedCheck_233_ = !lean_is_exclusive(v_l_15_);
if (v_isSharedCheck_233_ == 0)
{
lean_object* v_unused_234_; lean_object* v_unused_235_; lean_object* v_unused_236_; lean_object* v_unused_237_; lean_object* v_unused_238_; 
v_unused_234_ = lean_ctor_get(v_l_15_, 4);
lean_dec(v_unused_234_);
v_unused_235_ = lean_ctor_get(v_l_15_, 3);
lean_dec(v_unused_235_);
v_unused_236_ = lean_ctor_get(v_l_15_, 2);
lean_dec(v_unused_236_);
v_unused_237_ = lean_ctor_get(v_l_15_, 1);
lean_dec(v_unused_237_);
v_unused_238_ = lean_ctor_get(v_l_15_, 0);
lean_dec(v_unused_238_);
v___x_228_ = v_l_15_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_dec(v_l_15_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 4, v_r_168_);
lean_ctor_set(v___x_228_, 3, v___x_226_);
lean_ctor_set(v___x_228_, 2, v_v_166_);
lean_ctor_set(v___x_228_, 1, v_k_165_);
lean_ctor_set(v___x_228_, 0, v___x_223_);
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_k_165_);
lean_ctor_set(v_reuseFailAlloc_232_, 2, v_v_166_);
lean_ctor_set(v_reuseFailAlloc_232_, 3, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_232_, 4, v_r_168_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_246_; 
v_l_246_ = lean_ctor_get(v_impl_161_, 3);
lean_inc(v_l_246_);
if (lean_obj_tag(v_l_246_) == 0)
{
lean_object* v_r_247_; lean_object* v_k_248_; lean_object* v_v_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_272_; 
v_r_247_ = lean_ctor_get(v_impl_161_, 4);
v_k_248_ = lean_ctor_get(v_impl_161_, 1);
v_v_249_ = lean_ctor_get(v_impl_161_, 2);
v_isSharedCheck_272_ = !lean_is_exclusive(v_impl_161_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; lean_object* v_unused_274_; 
v_unused_273_ = lean_ctor_get(v_impl_161_, 3);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_impl_161_, 0);
lean_dec(v_unused_274_);
v___x_251_ = v_impl_161_;
v_isShared_252_ = v_isSharedCheck_272_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_r_247_);
lean_inc(v_v_249_);
lean_inc(v_k_248_);
lean_dec(v_impl_161_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_272_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_k_253_; lean_object* v_v_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_268_; 
v_k_253_ = lean_ctor_get(v_l_246_, 1);
v_v_254_ = lean_ctor_get(v_l_246_, 2);
v_isSharedCheck_268_ = !lean_is_exclusive(v_l_246_);
if (v_isSharedCheck_268_ == 0)
{
lean_object* v_unused_269_; lean_object* v_unused_270_; lean_object* v_unused_271_; 
v_unused_269_ = lean_ctor_get(v_l_246_, 4);
lean_dec(v_unused_269_);
v_unused_270_ = lean_ctor_get(v_l_246_, 3);
lean_dec(v_unused_270_);
v_unused_271_ = lean_ctor_get(v_l_246_, 0);
lean_dec(v_unused_271_);
v___x_256_ = v_l_246_;
v_isShared_257_ = v_isSharedCheck_268_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_v_254_);
lean_inc(v_k_253_);
lean_dec(v_l_246_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_268_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_258_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_247_, 2);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v_r_247_);
lean_ctor_set(v___x_256_, 3, v_r_247_);
lean_ctor_set(v___x_256_, 2, v_v_14_);
lean_ctor_set(v___x_256_, 1, v_k_13_);
lean_ctor_set(v___x_256_, 0, v___x_162_);
v___x_260_ = v___x_256_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_267_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_267_, 3, v_r_247_);
lean_ctor_set(v_reuseFailAlloc_267_, 4, v_r_247_);
v___x_260_ = v_reuseFailAlloc_267_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_262_; 
lean_inc(v_r_247_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 3, v_r_247_);
lean_ctor_set(v___x_251_, 0, v___x_162_);
v___x_262_ = v___x_251_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_k_248_);
lean_ctor_set(v_reuseFailAlloc_266_, 2, v_v_249_);
lean_ctor_set(v_reuseFailAlloc_266_, 3, v_r_247_);
lean_ctor_set(v_reuseFailAlloc_266_, 4, v_r_247_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v___x_262_);
lean_ctor_set(v___x_18_, 3, v___x_260_);
lean_ctor_set(v___x_18_, 2, v_v_254_);
lean_ctor_set(v___x_18_, 1, v_k_253_);
lean_ctor_set(v___x_18_, 0, v___x_258_);
v___x_264_ = v___x_18_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_265_, 3, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_265_, 4, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
}
else
{
lean_object* v_r_275_; 
v_r_275_ = lean_ctor_get(v_impl_161_, 4);
lean_inc(v_r_275_);
if (lean_obj_tag(v_r_275_) == 0)
{
lean_object* v_k_276_; lean_object* v_v_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_288_; 
v_k_276_ = lean_ctor_get(v_impl_161_, 1);
v_v_277_ = lean_ctor_get(v_impl_161_, 2);
v_isSharedCheck_288_ = !lean_is_exclusive(v_impl_161_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; 
v_unused_289_ = lean_ctor_get(v_impl_161_, 4);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_impl_161_, 3);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_impl_161_, 0);
lean_dec(v_unused_291_);
v___x_279_ = v_impl_161_;
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_v_277_);
lean_inc(v_k_276_);
lean_dec(v_impl_161_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = lean_unsigned_to_nat(3u);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 4, v_l_246_);
lean_ctor_set(v___x_279_, 2, v_v_14_);
lean_ctor_set(v___x_279_, 1, v_k_13_);
lean_ctor_set(v___x_279_, 0, v___x_162_);
v___x_283_ = v___x_279_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v_l_246_);
lean_ctor_set(v_reuseFailAlloc_287_, 4, v_l_246_);
v___x_283_ = v_reuseFailAlloc_287_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v_r_275_);
lean_ctor_set(v___x_18_, 3, v___x_283_);
lean_ctor_set(v___x_18_, 2, v_v_277_);
lean_ctor_set(v___x_18_, 1, v_k_276_);
lean_ctor_set(v___x_18_, 0, v___x_281_);
v___x_285_ = v___x_18_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_k_276_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v_v_277_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v_r_275_);
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
else
{
lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_292_ = lean_unsigned_to_nat(2u);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 4, v_impl_161_);
lean_ctor_set(v___x_18_, 3, v_r_275_);
lean_ctor_set(v___x_18_, 0, v___x_292_);
v___x_294_ = v___x_18_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v_k_13_);
lean_ctor_set(v_reuseFailAlloc_295_, 2, v_v_14_);
lean_ctor_set(v_reuseFailAlloc_295_, 3, v_r_275_);
lean_ctor_set(v_reuseFailAlloc_295_, 4, v_impl_161_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
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
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(1u);
v___x_298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v_k_9_);
lean_ctor_set(v___x_298_, 2, v_v_10_);
lean_ctor_set(v___x_298_, 3, v_t_11_);
lean_ctor_set(v___x_298_, 4, v_t_11_);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_instInhabitedPackage_default_spec__1(lean_object* v_as_299_, size_t v_i_300_, size_t v_stop_301_, lean_object* v_b_302_){
_start:
{
uint8_t v___x_303_; 
v___x_303_ = lean_usize_dec_eq(v_i_300_, v_stop_301_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v_name_305_; lean_object* v___x_306_; size_t v___x_307_; size_t v___x_308_; 
v___x_304_ = lean_array_uget_borrowed(v_as_299_, v_i_300_);
v_name_305_ = lean_ctor_get(v___x_304_, 1);
lean_inc(v___x_304_);
lean_inc(v_name_305_);
v___x_306_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0___redArg(v_name_305_, v___x_304_, v_b_302_);
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_add(v_i_300_, v___x_307_);
v_i_300_ = v___x_308_;
v_b_302_ = v___x_306_;
goto _start;
}
else
{
return v_b_302_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_instInhabitedPackage_default_spec__1___boxed(lean_object* v_as_310_, lean_object* v_i_311_, lean_object* v_stop_312_, lean_object* v_b_313_){
_start:
{
size_t v_i_boxed_314_; size_t v_stop_boxed_315_; lean_object* v_res_316_; 
v_i_boxed_314_ = lean_unbox_usize(v_i_311_);
lean_dec(v_i_311_);
v_stop_boxed_315_ = lean_unbox_usize(v_stop_312_);
lean_dec(v_stop_312_);
v_res_316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_instInhabitedPackage_default_spec__1(v_as_310_, v_i_boxed_314_, v_stop_boxed_315_, v_b_313_);
lean_dec_ref(v_as_310_);
return v_res_316_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__0(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(0);
v___x_318_ = l_unsafeCast___redArg(v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__1(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__0, &l_Lake_instInhabitedPackage_default___closed__0_once, _init_l_Lake_instInhabitedPackage_default___closed__0);
v___x_321_ = l_Lean_Name_num___override(v___x_320_, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__3(void){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lake_instInhabitedPackageConfig_default___redArg();
return v___x_323_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__5(void){
_start:
{
uint8_t v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = 0;
v___x_327_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__0, &l_Lake_instInhabitedPackage_default___closed__0_once, _init_l_Lake_instInhabitedPackage_default___closed__0);
v___x_328_ = l_Lean_Name_toString(v___x_327_, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__7(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = ((lean_object*)(l_Lake_instInhabitedPackage_default___closed__6));
v___x_331_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__5, &l_Lake_instInhabitedPackage_default___closed__5_once, _init_l_Lake_instInhabitedPackage_default___closed__5);
v___x_332_ = lean_string_append(v___x_331_, v___x_330_);
return v___x_332_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__8(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = l_System_Platform_target;
v___x_334_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__7, &l_Lake_instInhabitedPackage_default___closed__7_once, _init_l_Lake_instInhabitedPackage_default___closed__7);
v___x_335_ = lean_string_append(v___x_334_, v___x_333_);
return v___x_335_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__10(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = ((lean_object*)(l_Lake_instInhabitedPackage_default___closed__9));
v___x_338_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__8, &l_Lake_instInhabitedPackage_default___closed__8_once, _init_l_Lake_instInhabitedPackage_default___closed__8);
v___x_339_ = lean_string_append(v___x_338_, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__11(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = ((lean_object*)(l_Lake_instInhabitedPackage_default___closed__4));
v___x_341_ = lean_array_get_size(v___x_340_);
return v___x_341_;
}
}
static uint8_t _init_l_Lake_instInhabitedPackage_default___closed__12(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_342_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__11, &l_Lake_instInhabitedPackage_default___closed__11_once, _init_l_Lake_instInhabitedPackage_default___closed__11);
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = lean_nat_dec_lt(v___x_343_, v___x_342_);
return v___x_344_;
}
}
static uint8_t _init_l_Lake_instInhabitedPackage_default___closed__13(void){
_start:
{
lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_345_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__11, &l_Lake_instInhabitedPackage_default___closed__11_once, _init_l_Lake_instInhabitedPackage_default___closed__11);
v___x_346_ = lean_nat_dec_le(v___x_345_, v___x_345_);
return v___x_346_;
}
}
static size_t _init_l_Lake_instInhabitedPackage_default___closed__14(void){
_start:
{
lean_object* v___x_347_; size_t v___x_348_; 
v___x_347_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__11, &l_Lake_instInhabitedPackage_default___closed__11_once, _init_l_Lake_instInhabitedPackage_default___closed__11);
v___x_348_ = lean_usize_of_nat(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default___closed__15(void){
_start:
{
lean_object* v___x_349_; size_t v___x_350_; size_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_349_ = lean_box(1);
v___x_350_ = lean_usize_once(&l_Lake_instInhabitedPackage_default___closed__14, &l_Lake_instInhabitedPackage_default___closed__14_once, _init_l_Lake_instInhabitedPackage_default___closed__14);
v___x_351_ = ((size_t)0ULL);
v___x_352_ = ((lean_object*)(l_Lake_instInhabitedPackage_default___closed__4));
v___x_353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_instInhabitedPackage_default_spec__1(v___x_352_, v___x_351_, v___x_350_, v___x_349_);
return v___x_353_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage_default(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_364_; lean_object* v___y_365_; lean_object* v___y_366_; lean_object* v___y_371_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__0, &l_Lake_instInhabitedPackage_default___closed__0_once, _init_l_Lake_instInhabitedPackage_default___closed__0);
v___x_356_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__1, &l_Lake_instInhabitedPackage_default___closed__1_once, _init_l_Lake_instInhabitedPackage_default___closed__1);
v___x_357_ = ((lean_object*)(l_Lake_instInhabitedPackage_default___closed__2));
v___x_358_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__3, &l_Lake_instInhabitedPackage_default___closed__3_once, _init_l_Lake_instInhabitedPackage_default___closed__3);
v___x_359_ = ((lean_object*)(l_Lake_instInhabitedPackage_default___closed__4));
v___x_376_ = lean_box(1);
v___x_377_ = lean_uint8_once(&l_Lake_instInhabitedPackage_default___closed__12, &l_Lake_instInhabitedPackage_default___closed__12_once, _init_l_Lake_instInhabitedPackage_default___closed__12);
if (v___x_377_ == 0)
{
v___y_371_ = v___x_376_;
goto v___jp_370_;
}
else
{
uint8_t v___x_378_; 
v___x_378_ = lean_uint8_once(&l_Lake_instInhabitedPackage_default___closed__13, &l_Lake_instInhabitedPackage_default___closed__13_once, _init_l_Lake_instInhabitedPackage_default___closed__13);
if (v___x_378_ == 0)
{
if (v___x_377_ == 0)
{
v___y_371_ = v___x_376_;
goto v___jp_370_;
}
else
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__15, &l_Lake_instInhabitedPackage_default___closed__15_once, _init_l_Lake_instInhabitedPackage_default___closed__15);
v___y_371_ = v___x_379_;
goto v___jp_370_;
}
}
else
{
lean_object* v___x_380_; 
v___x_380_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__15, &l_Lake_instInhabitedPackage_default___closed__15_once, _init_l_Lake_instInhabitedPackage_default___closed__15);
v___y_371_ = v___x_380_;
goto v___jp_370_;
}
}
v___jp_360_:
{
lean_object* v_testDriver_367_; lean_object* v_lintDriver_368_; lean_object* v___x_369_; 
v_testDriver_367_ = lean_ctor_get(v___x_358_, 12);
v_lintDriver_368_ = lean_ctor_get(v___x_358_, 14);
lean_inc_ref(v_lintDriver_368_);
lean_inc_ref(v_testDriver_367_);
lean_inc_ref(v___y_366_);
lean_inc_ref(v___y_365_);
lean_inc_ref(v___y_362_);
lean_inc(v___y_363_);
lean_inc_ref(v___y_364_);
lean_inc(v___y_361_);
v___x_369_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v___x_369_, 0, v___x_354_);
lean_ctor_set(v___x_369_, 1, v___x_355_);
lean_ctor_set(v___x_369_, 2, v___x_356_);
lean_ctor_set(v___x_369_, 3, v___x_355_);
lean_ctor_set(v___x_369_, 4, v___x_357_);
lean_ctor_set(v___x_369_, 5, v___x_357_);
lean_ctor_set(v___x_369_, 6, v___x_358_);
lean_ctor_set(v___x_369_, 7, v___x_357_);
lean_ctor_set(v___x_369_, 8, v___x_357_);
lean_ctor_set(v___x_369_, 9, v___x_357_);
lean_ctor_set(v___x_369_, 10, v___x_357_);
lean_ctor_set(v___x_369_, 11, v___x_357_);
lean_ctor_set(v___x_369_, 12, v___x_359_);
lean_ctor_set(v___x_369_, 13, v___x_359_);
lean_ctor_set(v___x_369_, 14, v___x_359_);
lean_ctor_set(v___x_369_, 15, v___x_359_);
lean_ctor_set(v___x_369_, 16, v___y_361_);
lean_ctor_set(v___x_369_, 17, v___y_364_);
lean_ctor_set(v___x_369_, 18, v___y_363_);
lean_ctor_set(v___x_369_, 19, v___y_362_);
lean_ctor_set(v___x_369_, 20, v___y_365_);
lean_ctor_set(v___x_369_, 21, v___y_366_);
lean_ctor_set(v___x_369_, 22, v_testDriver_367_);
lean_ctor_set(v___x_369_, 23, v_lintDriver_368_);
return v___x_369_;
}
v___jp_370_:
{
lean_object* v_buildArchive_372_; lean_object* v___x_373_; 
v_buildArchive_372_ = lean_ctor_get(v___x_358_, 11);
v___x_373_ = lean_box(1);
if (lean_obj_tag(v_buildArchive_372_) == 1)
{
lean_object* v_val_374_; 
v_val_374_ = lean_ctor_get(v_buildArchive_372_, 0);
v___y_361_ = v___y_371_;
v___y_362_ = v___x_359_;
v___y_363_ = v___x_373_;
v___y_364_ = v___x_359_;
v___y_365_ = v___x_359_;
v___y_366_ = v_val_374_;
goto v___jp_360_;
}
else
{
lean_object* v___x_375_; 
v___x_375_ = lean_obj_once(&l_Lake_instInhabitedPackage_default___closed__10, &l_Lake_instInhabitedPackage_default___closed__10_once, _init_l_Lake_instInhabitedPackage_default___closed__10);
v___y_361_ = v___y_371_;
v___y_362_ = v___x_359_;
v___y_363_ = v___x_373_;
v___y_364_ = v___x_359_;
v___y_365_ = v___x_359_;
v___y_366_ = v___x_375_;
goto v___jp_360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0(lean_object* v_00_u03b2_381_, lean_object* v_k_382_, lean_object* v_v_383_, lean_object* v_t_384_, lean_object* v_hl_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_instInhabitedPackage_default_spec__0___redArg(v_k_382_, v_v_383_, v_t_384_);
return v___x_386_;
}
}
static lean_object* _init_l_Lake_instInhabitedPackage(void){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Lake_instInhabitedPackage_default;
return v___x_387_;
}
}
LEAN_EXPORT uint64_t l_Lake_Package_instHashable___lam__0(lean_object* v_pkg_388_){
_start:
{
lean_object* v_keyName_389_; lean_object* v___x_390_; 
v_keyName_389_ = lean_ctor_get(v_pkg_388_, 2);
v___x_390_ = l_unsafeCast___redArg(v_keyName_389_);
if (lean_obj_tag(v___x_390_) == 0)
{
uint64_t v___x_391_; 
v___x_391_ = 1723ULL;
return v___x_391_;
}
else
{
uint64_t v_hash_392_; 
v_hash_392_ = lean_ctor_get_uint64(v___x_390_, sizeof(void*)*2);
lean_dec(v___x_390_);
return v_hash_392_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_instHashable___lam__0___boxed(lean_object* v_pkg_393_){
_start:
{
uint64_t v_res_394_; lean_object* v_r_395_; 
v_res_394_ = l_Lake_Package_instHashable___lam__0(v_pkg_393_);
lean_dec_ref(v_pkg_393_);
v_r_395_ = lean_box_uint64(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_instBEq___lam__0(lean_object* v_p1_398_, lean_object* v_p2_399_){
_start:
{
lean_object* v_wsIdx_400_; lean_object* v_wsIdx_401_; uint8_t v___x_402_; 
v_wsIdx_400_ = lean_ctor_get(v_p1_398_, 0);
v_wsIdx_401_ = lean_ctor_get(v_p2_399_, 0);
v___x_402_ = lean_nat_dec_eq(v_wsIdx_400_, v_wsIdx_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_instBEq___lam__0___boxed(lean_object* v_p1_403_, lean_object* v_p2_404_){
_start:
{
uint8_t v_res_405_; lean_object* v_r_406_; 
v_res_405_ = l_Lake_Package_instBEq___lam__0(v_p1_403_, v_p2_404_);
lean_dec_ref(v_p2_404_);
lean_dec_ref(v_p1_403_);
v_r_406_ = lean_box(v_res_405_);
return v_r_406_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_prettyName(lean_object* v_self_409_){
_start:
{
lean_object* v_baseName_410_; uint8_t v___x_411_; lean_object* v___x_412_; 
v_baseName_410_ = lean_ctor_get(v_self_409_, 1);
lean_inc(v_baseName_410_);
lean_dec_ref(v_self_409_);
v___x_411_ = 0;
v___x_412_ = l_Lean_Name_toString(v_baseName_410_, v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_instQueryJson___lam__0(lean_object* v_x_413_){
_start:
{
lean_object* v_keyName_414_; uint8_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_keyName_414_ = lean_ctor_get(v_x_413_, 2);
lean_inc(v_keyName_414_);
lean_dec_ref(v_x_413_);
v___x_415_ = 1;
v___x_416_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_keyName_414_, v___x_415_);
v___x_417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_instQueryText___lam__0(lean_object* v_x_420_){
_start:
{
lean_object* v_baseName_421_; uint8_t v___x_422_; lean_object* v___x_423_; 
v_baseName_421_ = lean_ctor_get(v_x_420_, 1);
lean_inc(v_baseName_421_);
lean_dec_ref(v_x_420_);
v___x_422_ = 0;
v___x_423_ = l_Lean_Name_toString(v_baseName_421_, v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_name(lean_object* v_self_426_){
_start:
{
lean_object* v_baseName_427_; 
v_baseName_427_ = lean_ctor_get(v_self_426_, 1);
lean_inc(v_baseName_427_);
return v_baseName_427_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_name___boxed(lean_object* v_self_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lake_Package_name(v_self_428_);
lean_dec_ref(v_self_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_reservoirName(lean_object* v_self_430_){
_start:
{
lean_object* v_origName_431_; uint8_t v___x_432_; lean_object* v___x_433_; 
v_origName_431_ = lean_ctor_get(v_self_430_, 3);
lean_inc(v_origName_431_);
lean_dec_ref(v_self_430_);
v___x_432_ = 0;
v___x_433_ = l_Lean_Name_toString(v_origName_431_, v___x_432_);
return v___x_433_;
}
}
static lean_object* _init_l_Lake_PackageSet_empty___closed__0(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_box(0);
v___x_435_ = lean_unsigned_to_nat(16u);
v___x_436_ = lean_mk_array(v___x_435_, v___x_434_);
return v___x_436_;
}
}
static lean_object* _init_l_Lake_PackageSet_empty___closed__1(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_437_ = lean_obj_once(&l_Lake_PackageSet_empty___closed__0, &l_Lake_PackageSet_empty___closed__0_once, _init_l_Lake_PackageSet_empty___closed__0);
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v___x_437_);
return v___x_439_;
}
}
static lean_object* _init_l_Lake_PackageSet_empty(void){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = lean_obj_once(&l_Lake_PackageSet_empty___closed__1, &l_Lake_PackageSet_empty___closed__1_once, _init_l_Lake_PackageSet_empty___closed__1);
return v___x_440_;
}
}
static lean_object* _init_l_Lake_OrdPackageSet_empty___closed__0(void){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lake_OrdHashSet_empty___redArg();
return v___x_441_;
}
}
static lean_object* _init_l_Lake_OrdPackageSet_empty(void){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = lean_obj_once(&l_Lake_OrdPackageSet_empty___closed__0, &l_Lake_OrdPackageSet_empty___closed__0_once, _init_l_Lake_OrdPackageSet_empty___closed__0);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___lam__0(lean_object* v_self_443_){
_start:
{
lean_inc_ref(v_self_443_);
return v_self_443_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___lam__0___boxed(lean_object* v_self_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lake_NPackage_instCoeOutPackage___redArg___lam__0(v_self_444_);
lean_dec_ref(v_self_444_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg(){
_start:
{
lean_object* v___f_448_; 
v___f_448_ = ((lean_object*)(l_Lake_NPackage_instCoeOutPackage___redArg___closed__0));
return v___f_448_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___redArg___boxed(lean_object* v___dummy_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lake_NPackage_instCoeOutPackage___redArg();
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage(lean_object* v_n_451_){
_start:
{
lean_object* v___f_452_; 
v___f_452_ = ((lean_object*)(l_Lake_NPackage_instCoeOutPackage___redArg___closed__0));
return v___f_452_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeOutPackage___boxed(lean_object* v_n_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lake_NPackage_instCoeOutPackage(v_n_453_);
lean_dec(v_n_453_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeDepPackageKeyName(lean_object* v_pkg_455_){
_start:
{
lean_inc_ref(v_pkg_455_);
return v_pkg_455_;
}
}
LEAN_EXPORT lean_object* l_Lake_NPackage_instCoeDepPackageKeyName___boxed(lean_object* v_pkg_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lake_NPackage_instCoeDepPackageKeyName(v_pkg_456_);
lean_dec_ref(v_pkg_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___lam__0(lean_object* v_x_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_box(0);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___y_460_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___lam__0___boxed(lean_object* v_x_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lake_instInhabitedPostUpdateHook_default___redArg___lam__0(v_x_464_, v___y_465_, v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v_x_464_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg(){
_start:
{
lean_object* v___f_471_; 
v___f_471_ = ((lean_object*)(l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0));
return v___f_471_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___redArg___boxed(lean_object* v___dummy_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lake_instInhabitedPostUpdateHook_default___redArg();
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default(lean_object* v_pkgName_474_){
_start:
{
lean_object* v___f_475_; 
v___f_475_ = ((lean_object*)(l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0));
return v___f_475_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook_default___boxed(lean_object* v_pkgName_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lake_instInhabitedPostUpdateHook_default(v_pkgName_476_);
lean_dec(v_pkgName_476_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook___redArg(){
_start:
{
lean_object* v___f_479_; 
v___f_479_ = ((lean_object*)(l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0));
return v___f_479_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook___redArg___boxed(lean_object* v___dummy_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lake_instInhabitedPostUpdateHook___redArg();
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook(lean_object* v_a_482_){
_start:
{
lean_object* v___f_483_; 
v___f_483_ = ((lean_object*)(l_Lake_instInhabitedPostUpdateHook_default___redArg___closed__0));
return v___f_483_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedPostUpdateHook___boxed(lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lake_instInhabitedPostUpdateHook(v_a_484_);
lean_dec(v_a_484_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___redArg(lean_object* v_a_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_unsafeCast___redArg(v_a_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___redArg___boxed(lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___redArg(v_a_488_);
lean_dec_ref(v_a_488_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk(lean_object* v_name_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l_unsafeCast___redArg(v_a_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___boxed(lean_object* v_name_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk(v_name_493_, v_a_494_);
lean_dec_ref(v_a_494_);
lean_dec(v_name_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instCoeMk(lean_object* v_name_496_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lean_alloc_closure((void*)(l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeMk___boxed), 2, 1);
lean_closure_set(v___x_497_, 0, v_name_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___redArg(lean_object* v_a_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_unsafeCast___redArg(v_a_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___redArg___boxed(lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___redArg(v_a_500_);
lean_dec(v_a_500_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet(lean_object* v_name_502_, lean_object* v_a_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_unsafeCast___redArg(v_a_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___boxed(lean_object* v_name_505_, lean_object* v_a_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet(v_name_505_, v_a_506_);
lean_dec(v_a_506_);
lean_dec(v_name_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instCoeGet(lean_object* v_name_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_alloc_closure((void*)(l___private_Lake_Config_Package_0__Lake_OpaquePostUpdateHook_unsafeGet___boxed), 2, 1);
lean_closure_set(v___x_509_, 0, v_name_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___redArg(lean_object* v_inst_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_unsafeCast___redArg(v_inst_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___redArg___boxed(lean_object* v_inst_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___redArg(v_inst_512_);
lean_dec_ref(v_inst_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook(lean_object* v_name_514_, lean_object* v_inst_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_unsafeCast___redArg(v_inst_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook___boxed(lean_object* v_name_517_, lean_object* v_inst_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lake_OpaquePostUpdateHook_instInhabitedOfPostUpdateHook(v_name_517_, v_inst_518_);
lean_dec_ref(v_inst_518_);
lean_dec(v_name_517_);
return v_res_519_;
}
}
static lean_object* _init_l_Lake_instImpl___closed__3_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = ((lean_object*)(l_Lake_instImpl___closed__2_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_));
v___x_526_ = l_unsafeCast___redArg(v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_(void){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&l_Lake_instImpl___closed__3_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_, &l_Lake_instImpl___closed__3_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12__once, _init_l_Lake_instImpl___closed__3_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_);
return v___x_527_;
}
}
static lean_object* _init_l_Lake_instTypeNamePostUpdateHookDecl(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_;
return v___x_528_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_isRoot(lean_object* v_self_529_){
_start:
{
lean_object* v_wsIdx_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v_wsIdx_530_ = lean_ctor_get(v_self_529_, 0);
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = lean_nat_dec_eq(v_wsIdx_530_, v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isRoot___boxed(lean_object* v_self_533_){
_start:
{
uint8_t v_res_534_; lean_object* v_r_535_; 
v_res_534_ = l_Lake_Package_isRoot(v_self_533_);
lean_dec_ref(v_self_533_);
v_r_535_ = lean_box(v_res_534_);
return v_r_535_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_bootstrap(lean_object* v_self_536_){
_start:
{
lean_object* v_config_537_; uint8_t v_bootstrap_538_; 
v_config_537_ = lean_ctor_get(v_self_536_, 6);
v_bootstrap_538_ = lean_ctor_get_uint8(v_config_537_, sizeof(void*)*28);
return v_bootstrap_538_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_bootstrap___boxed(lean_object* v_self_539_){
_start:
{
uint8_t v_res_540_; lean_object* v_r_541_; 
v_res_540_ = l_Lake_Package_bootstrap(v_self_539_);
lean_dec_ref(v_self_539_);
v_r_541_ = lean_box(v_res_540_);
return v_r_541_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_id_x3f(lean_object* v_self_542_){
_start:
{
lean_object* v_config_543_; uint8_t v_bootstrap_544_; 
v_config_543_ = lean_ctor_get(v_self_542_, 6);
v_bootstrap_544_ = lean_ctor_get_uint8(v_config_543_, sizeof(void*)*28);
if (v_bootstrap_544_ == 0)
{
lean_object* v_origName_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_origName_545_ = lean_ctor_get(v_self_542_, 3);
lean_inc(v_origName_545_);
lean_dec_ref(v_self_542_);
v___x_546_ = l_Lean_Name_toString(v_origName_545_, v_bootstrap_544_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
else
{
lean_object* v___x_548_; 
lean_dec_ref(v_self_542_);
v___x_548_ = lean_box(0);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_version(lean_object* v_self_549_){
_start:
{
lean_object* v_config_550_; lean_object* v_version_551_; 
v_config_550_ = lean_ctor_get(v_self_549_, 6);
v_version_551_ = lean_ctor_get(v_config_550_, 16);
lean_inc_ref(v_version_551_);
return v_version_551_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_version___boxed(lean_object* v_self_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lake_Package_version(v_self_552_);
lean_dec_ref(v_self_552_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_versionTags(lean_object* v_self_554_){
_start:
{
lean_object* v_config_555_; lean_object* v_versionTags_556_; 
v_config_555_ = lean_ctor_get(v_self_554_, 6);
v_versionTags_556_ = lean_ctor_get(v_config_555_, 17);
lean_inc_ref(v_versionTags_556_);
return v_versionTags_556_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_versionTags___boxed(lean_object* v_self_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lake_Package_versionTags(v_self_557_);
lean_dec_ref(v_self_557_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_description(lean_object* v_self_559_){
_start:
{
lean_object* v_config_560_; lean_object* v_description_561_; 
v_config_560_ = lean_ctor_get(v_self_559_, 6);
v_description_561_ = lean_ctor_get(v_config_560_, 18);
lean_inc_ref(v_description_561_);
return v_description_561_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_description___boxed(lean_object* v_self_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lake_Package_description(v_self_562_);
lean_dec_ref(v_self_562_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_keywords(lean_object* v_self_564_){
_start:
{
lean_object* v_config_565_; lean_object* v_keywords_566_; 
v_config_565_ = lean_ctor_get(v_self_564_, 6);
v_keywords_566_ = lean_ctor_get(v_config_565_, 19);
lean_inc_ref(v_keywords_566_);
return v_keywords_566_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_keywords___boxed(lean_object* v_self_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lake_Package_keywords(v_self_567_);
lean_dec_ref(v_self_567_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_homepage(lean_object* v_self_569_){
_start:
{
lean_object* v_config_570_; lean_object* v_homepage_571_; 
v_config_570_ = lean_ctor_get(v_self_569_, 6);
v_homepage_571_ = lean_ctor_get(v_config_570_, 20);
lean_inc_ref(v_homepage_571_);
return v_homepage_571_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_homepage___boxed(lean_object* v_self_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lake_Package_homepage(v_self_572_);
lean_dec_ref(v_self_572_);
return v_res_573_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_reservoir(lean_object* v_self_574_){
_start:
{
lean_object* v_config_575_; uint8_t v_reservoir_576_; 
v_config_575_ = lean_ctor_get(v_self_574_, 6);
v_reservoir_576_ = lean_ctor_get_uint8(v_config_575_, sizeof(void*)*28 + 3);
return v_reservoir_576_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_reservoir___boxed(lean_object* v_self_577_){
_start:
{
uint8_t v_res_578_; lean_object* v_r_579_; 
v_res_578_ = l_Lake_Package_reservoir(v_self_577_);
lean_dec_ref(v_self_577_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_license(lean_object* v_self_580_){
_start:
{
lean_object* v_config_581_; lean_object* v_license_582_; 
v_config_581_ = lean_ctor_get(v_self_580_, 6);
v_license_582_ = lean_ctor_get(v_config_581_, 21);
lean_inc_ref(v_license_582_);
return v_license_582_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_license___boxed(lean_object* v_self_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lake_Package_license(v_self_583_);
lean_dec_ref(v_self_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relLicenseFiles(lean_object* v_self_605_){
_start:
{
lean_object* v_config_606_; lean_object* v_licenseFiles_607_; lean_object* v___f_608_; lean_object* v___x_609_; size_t v_sz_610_; size_t v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_config_606_ = lean_ctor_get(v_self_605_, 6);
v_licenseFiles_607_ = lean_ctor_get(v_config_606_, 22);
v___f_608_ = ((lean_object*)(l_Lake_Package_relLicenseFiles___closed__0));
v___x_609_ = ((lean_object*)(l_Lake_Package_relLicenseFiles___closed__10));
v_sz_610_ = lean_array_size(v_licenseFiles_607_);
v___x_611_ = ((size_t)0ULL);
v___x_612_ = l_unsafeCast___redArg(v_licenseFiles_607_);
v___x_613_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_609_, v___f_608_, v_sz_610_, v___x_611_, v___x_612_);
v___x_614_ = l_unsafeCast___redArg(v___x_613_);
lean_dec(v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relLicenseFiles___boxed(lean_object* v_self_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lake_Package_relLicenseFiles(v_self_615_);
lean_dec_ref(v_self_615_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_licenseFiles___lam__0(lean_object* v_dir_617_, lean_object* v_x_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = l_System_FilePath_normalize(v_x_618_);
v___x_620_ = l_Lake_joinRelative(v_dir_617_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_licenseFiles(lean_object* v_self_621_){
_start:
{
lean_object* v_config_622_; lean_object* v_dir_623_; lean_object* v_licenseFiles_624_; lean_object* v___f_625_; lean_object* v___f_626_; lean_object* v___x_627_; size_t v_sz_628_; size_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; size_t v_sz_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v_config_622_ = lean_ctor_get(v_self_621_, 6);
lean_inc_ref(v_config_622_);
v_dir_623_ = lean_ctor_get(v_self_621_, 4);
lean_inc_ref(v_dir_623_);
lean_dec_ref(v_self_621_);
v_licenseFiles_624_ = lean_ctor_get(v_config_622_, 22);
lean_inc_ref(v_licenseFiles_624_);
lean_dec_ref(v_config_622_);
v___f_625_ = ((lean_object*)(l_Lake_Package_relLicenseFiles___closed__0));
v___f_626_ = lean_alloc_closure((void*)(l_Lake_Package_licenseFiles___lam__0), 2, 1);
lean_closure_set(v___f_626_, 0, v_dir_623_);
v___x_627_ = ((lean_object*)(l_Lake_Package_relLicenseFiles___closed__10));
v_sz_628_ = lean_array_size(v_licenseFiles_624_);
v___x_629_ = ((size_t)0ULL);
v___x_630_ = l_unsafeCast___redArg(v_licenseFiles_624_);
lean_dec_ref(v_licenseFiles_624_);
v___x_631_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_627_, v___f_625_, v_sz_628_, v___x_629_, v___x_630_);
v___x_632_ = l_unsafeCast___redArg(v___x_631_);
lean_dec(v___x_631_);
v_sz_633_ = lean_array_size(v___x_632_);
v___x_634_ = l_unsafeCast___redArg(v___x_632_);
lean_dec(v___x_632_);
v___x_635_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_627_, v___f_626_, v_sz_633_, v___x_629_, v___x_634_);
v___x_636_ = l_unsafeCast___redArg(v___x_635_);
lean_dec(v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relReadmeFile(lean_object* v_self_637_){
_start:
{
lean_object* v_config_638_; lean_object* v_readmeFile_639_; lean_object* v___x_640_; 
v_config_638_ = lean_ctor_get(v_self_637_, 6);
lean_inc_ref(v_config_638_);
lean_dec_ref(v_self_637_);
v_readmeFile_639_ = lean_ctor_get(v_config_638_, 23);
lean_inc_ref(v_readmeFile_639_);
lean_dec_ref(v_config_638_);
v___x_640_ = l_System_FilePath_normalize(v_readmeFile_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_readmeFile(lean_object* v_self_641_){
_start:
{
lean_object* v_config_642_; lean_object* v_dir_643_; lean_object* v_readmeFile_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_config_642_ = lean_ctor_get(v_self_641_, 6);
lean_inc_ref(v_config_642_);
v_dir_643_ = lean_ctor_get(v_self_641_, 4);
lean_inc_ref(v_dir_643_);
lean_dec_ref(v_self_641_);
v_readmeFile_644_ = lean_ctor_get(v_config_642_, 23);
lean_inc_ref(v_readmeFile_644_);
lean_dec_ref(v_config_642_);
v___x_645_ = l_System_FilePath_normalize(v_readmeFile_644_);
v___x_646_ = l_Lake_joinRelative(v_dir_643_, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir___redArg(){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Lake_defaultLakeDir;
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir___redArg___boxed(lean_object* v___dummy_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lake_Package_relLakeDir___redArg();
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir(lean_object* v_x_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lake_defaultLakeDir;
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relLakeDir___boxed(lean_object* v_x_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lake_Package_relLakeDir(v_x_653_);
lean_dec_ref(v_x_653_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_lakeDir(lean_object* v_self_655_){
_start:
{
lean_object* v_dir_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_dir_656_ = lean_ctor_get(v_self_655_, 4);
lean_inc_ref(v_dir_656_);
lean_dec_ref(v_self_655_);
v___x_657_ = l_Lake_defaultLakeDir;
v___x_658_ = l_Lake_joinRelative(v_dir_656_, v___x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_relPkgsDir(lean_object* v_self_659_){
_start:
{
lean_object* v_config_660_; lean_object* v_toWorkspaceConfig_661_; lean_object* v___x_662_; 
v_config_660_ = lean_ctor_get(v_self_659_, 6);
lean_inc_ref(v_config_660_);
lean_dec_ref(v_self_659_);
v_toWorkspaceConfig_661_ = lean_ctor_get(v_config_660_, 0);
lean_inc_ref(v_toWorkspaceConfig_661_);
lean_dec_ref(v_config_660_);
v___x_662_ = l_System_FilePath_normalize(v_toWorkspaceConfig_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_pkgsDir(lean_object* v_self_663_){
_start:
{
lean_object* v_config_664_; lean_object* v_dir_665_; lean_object* v_toWorkspaceConfig_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_config_664_ = lean_ctor_get(v_self_663_, 6);
lean_inc_ref(v_config_664_);
v_dir_665_ = lean_ctor_get(v_self_663_, 4);
lean_inc_ref(v_dir_665_);
lean_dec_ref(v_self_663_);
v_toWorkspaceConfig_666_ = lean_ctor_get(v_config_664_, 0);
lean_inc_ref(v_toWorkspaceConfig_666_);
lean_dec_ref(v_config_664_);
v___x_667_ = l_System_FilePath_normalize(v_toWorkspaceConfig_666_);
v___x_668_ = l_Lake_joinRelative(v_dir_665_, v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_manifestFile(lean_object* v_self_669_){
_start:
{
lean_object* v_dir_670_; lean_object* v_relManifestFile_671_; lean_object* v___x_672_; 
v_dir_670_ = lean_ctor_get(v_self_669_, 4);
lean_inc_ref(v_dir_670_);
v_relManifestFile_671_ = lean_ctor_get(v_self_669_, 9);
lean_inc_ref(v_relManifestFile_671_);
lean_dec_ref(v_self_669_);
v___x_672_ = l_Lake_joinRelative(v_dir_670_, v_relManifestFile_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildDir(lean_object* v_self_673_){
_start:
{
lean_object* v_config_674_; lean_object* v_dir_675_; lean_object* v_buildDir_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v_config_674_ = lean_ctor_get(v_self_673_, 6);
lean_inc_ref(v_config_674_);
v_dir_675_ = lean_ctor_get(v_self_673_, 4);
lean_inc_ref(v_dir_675_);
lean_dec_ref(v_self_673_);
v_buildDir_676_ = lean_ctor_get(v_config_674_, 5);
lean_inc_ref(v_buildDir_676_);
lean_dec_ref(v_config_674_);
v___x_677_ = l_System_FilePath_normalize(v_buildDir_676_);
v___x_678_ = l_Lake_joinRelative(v_dir_675_, v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_testDriverArgs(lean_object* v_self_679_){
_start:
{
lean_object* v_config_680_; lean_object* v_testDriverArgs_681_; 
v_config_680_ = lean_ctor_get(v_self_679_, 6);
v_testDriverArgs_681_ = lean_ctor_get(v_config_680_, 13);
lean_inc_ref(v_testDriverArgs_681_);
return v_testDriverArgs_681_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_testDriverArgs___boxed(lean_object* v_self_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lake_Package_testDriverArgs(v_self_682_);
lean_dec_ref(v_self_682_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_lintDriverArgs(lean_object* v_self_684_){
_start:
{
lean_object* v_config_685_; lean_object* v_lintDriverArgs_686_; 
v_config_685_ = lean_ctor_get(v_self_684_, 6);
v_lintDriverArgs_686_ = lean_ctor_get(v_config_685_, 15);
lean_inc_ref(v_lintDriverArgs_686_);
return v_lintDriverArgs_686_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_lintDriverArgs___boxed(lean_object* v_self_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lake_Package_lintDriverArgs(v_self_687_);
lean_dec_ref(v_self_687_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_extraDepTargets(lean_object* v_self_689_){
_start:
{
lean_object* v_config_690_; lean_object* v_extraDepTargets_691_; 
v_config_690_ = lean_ctor_get(v_self_689_, 6);
v_extraDepTargets_691_ = lean_ctor_get(v_config_690_, 2);
lean_inc_ref(v_extraDepTargets_691_);
return v_extraDepTargets_691_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_extraDepTargets___boxed(lean_object* v_self_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lake_Package_extraDepTargets(v_self_692_);
lean_dec_ref(v_self_692_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_platformIndependent(lean_object* v_self_694_){
_start:
{
lean_object* v_config_695_; lean_object* v_toLeanConfig_696_; lean_object* v_platformIndependent_697_; 
v_config_695_ = lean_ctor_get(v_self_694_, 6);
v_toLeanConfig_696_ = lean_ctor_get(v_config_695_, 1);
v_platformIndependent_697_ = lean_ctor_get(v_toLeanConfig_696_, 10);
lean_inc(v_platformIndependent_697_);
return v_platformIndependent_697_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_platformIndependent___boxed(lean_object* v_self_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lake_Package_platformIndependent(v_self_698_);
lean_dec_ref(v_self_698_);
return v_res_699_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_isPlatformIndependent(lean_object* v_self_706_){
_start:
{
lean_object* v_config_707_; lean_object* v_toLeanConfig_708_; lean_object* v_platformIndependent_709_; lean_object* v___f_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_config_707_ = lean_ctor_get(v_self_706_, 6);
lean_inc_ref(v_config_707_);
lean_dec_ref(v_self_706_);
v_toLeanConfig_708_ = lean_ctor_get(v_config_707_, 1);
lean_inc_ref(v_toLeanConfig_708_);
lean_dec_ref(v_config_707_);
v_platformIndependent_709_ = lean_ctor_get(v_toLeanConfig_708_, 10);
lean_inc(v_platformIndependent_709_);
lean_dec_ref(v_toLeanConfig_708_);
v___f_710_ = ((lean_object*)(l_Lake_Package_isPlatformIndependent___closed__1));
v___x_711_ = ((lean_object*)(l_Lake_Package_isPlatformIndependent___closed__2));
v___x_712_ = l_Option_instBEq_beq___redArg(v___f_710_, v_platformIndependent_709_, v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isPlatformIndependent___boxed(lean_object* v_self_713_){
_start:
{
uint8_t v_res_714_; lean_object* v_r_715_; 
v_res_714_ = l_Lake_Package_isPlatformIndependent(v_self_713_);
v_r_715_ = lean_box(v_res_714_);
return v_r_715_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_fixedToolchain(lean_object* v_self_716_){
_start:
{
lean_object* v_config_717_; uint8_t v_fixedToolchain_718_; 
v_config_717_ = lean_ctor_get(v_self_716_, 6);
v_fixedToolchain_718_ = lean_ctor_get_uint8(v_config_717_, sizeof(void*)*28 + 6);
return v_fixedToolchain_718_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fixedToolchain___boxed(lean_object* v_self_719_){
_start:
{
uint8_t v_res_720_; lean_object* v_r_721_; 
v_res_720_ = l_Lake_Package_fixedToolchain(v_self_719_);
lean_dec_ref(v_self_719_);
v_r_721_ = lean_box(v_res_720_);
return v_r_721_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_releaseRepo_x3f(lean_object* v_self_722_){
_start:
{
lean_object* v_config_723_; lean_object* v_releaseRepo_724_; 
v_config_723_ = lean_ctor_get(v_self_722_, 6);
v_releaseRepo_724_ = lean_ctor_get(v_config_723_, 10);
lean_inc(v_releaseRepo_724_);
return v_releaseRepo_724_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_releaseRepo_x3f___boxed(lean_object* v_self_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lake_Package_releaseRepo_x3f(v_self_725_);
lean_dec_ref(v_self_725_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_remoteUrl_x3f(lean_object* v_self_727_){
_start:
{
lean_object* v_remoteUrl_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v_remoteUrl_728_ = lean_ctor_get(v_self_727_, 11);
v___x_729_ = lean_string_utf8_byte_size(v_remoteUrl_728_);
v___x_730_ = lean_unsigned_to_nat(0u);
v___x_731_ = lean_nat_dec_eq(v___x_729_, v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_inc_ref(v_remoteUrl_728_);
v___x_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_732_, 0, v_remoteUrl_728_);
return v___x_732_;
}
else
{
lean_object* v___x_733_; 
v___x_733_ = lean_box(0);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_remoteUrl_x3f___boxed(lean_object* v_self_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lake_Package_remoteUrl_x3f(v_self_734_);
lean_dec_ref(v_self_734_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildArchiveFile(lean_object* v_self_736_){
_start:
{
lean_object* v_dir_737_; lean_object* v_buildArchive_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_dir_737_ = lean_ctor_get(v_self_736_, 4);
lean_inc_ref(v_dir_737_);
v_buildArchive_738_ = lean_ctor_get(v_self_736_, 21);
lean_inc_ref(v_buildArchive_738_);
lean_dec_ref(v_self_736_);
v___x_739_ = l_Lake_defaultLakeDir;
v___x_740_ = l_Lake_joinRelative(v_dir_737_, v___x_739_);
v___x_741_ = l_Lake_joinRelative(v___x_740_, v_buildArchive_738_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_barrelFile(lean_object* v_self_743_){
_start:
{
lean_object* v_dir_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_dir_744_ = lean_ctor_get(v_self_743_, 4);
lean_inc_ref(v_dir_744_);
lean_dec_ref(v_self_743_);
v___x_745_ = l_Lake_defaultLakeDir;
v___x_746_ = l_Lake_joinRelative(v_dir_744_, v___x_745_);
v___x_747_ = ((lean_object*)(l_Lake_Package_barrelFile___closed__0));
v___x_748_ = l_Lake_joinRelative(v___x_746_, v___x_747_);
return v___x_748_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_preferReleaseBuild(lean_object* v_self_749_){
_start:
{
lean_object* v_config_750_; uint8_t v_preferReleaseBuild_751_; 
v_config_750_ = lean_ctor_get(v_self_749_, 6);
v_preferReleaseBuild_751_ = lean_ctor_get_uint8(v_config_750_, sizeof(void*)*28 + 2);
return v_preferReleaseBuild_751_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_preferReleaseBuild___boxed(lean_object* v_self_752_){
_start:
{
uint8_t v_res_753_; lean_object* v_r_754_; 
v_res_753_ = l_Lake_Package_preferReleaseBuild(v_self_752_);
lean_dec_ref(v_self_752_);
v_r_754_ = lean_box(v_res_753_);
return v_r_754_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_precompileModules(lean_object* v_self_755_){
_start:
{
lean_object* v_config_756_; uint8_t v_precompileModules_757_; 
v_config_756_ = lean_ctor_get(v_self_755_, 6);
v_precompileModules_757_ = lean_ctor_get_uint8(v_config_756_, sizeof(void*)*28 + 1);
return v_precompileModules_757_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_precompileModules___boxed(lean_object* v_self_758_){
_start:
{
uint8_t v_res_759_; lean_object* v_r_760_; 
v_res_759_ = l_Lake_Package_precompileModules(v_self_758_);
lean_dec_ref(v_self_758_);
v_r_760_ = lean_box(v_res_759_);
return v_r_760_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_precompileImports(lean_object* v_self_761_){
_start:
{
lean_object* v_config_762_; lean_object* v_toLeanConfig_763_; uint8_t v_precompileImports_764_; 
v_config_762_ = lean_ctor_get(v_self_761_, 6);
v_toLeanConfig_763_ = lean_ctor_get(v_config_762_, 1);
v_precompileImports_764_ = lean_ctor_get_uint8(v_toLeanConfig_763_, sizeof(void*)*13 + 2);
return v_precompileImports_764_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_precompileImports___boxed(lean_object* v_self_765_){
_start:
{
uint8_t v_res_766_; lean_object* v_r_767_; 
v_res_766_ = l_Lake_Package_precompileImports(v_self_765_);
lean_dec_ref(v_self_765_);
v_r_767_ = lean_box(v_res_766_);
return v_r_767_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreGlobalServerArgs(lean_object* v_self_768_){
_start:
{
lean_object* v_config_769_; lean_object* v_moreGlobalServerArgs_770_; 
v_config_769_ = lean_ctor_get(v_self_768_, 6);
v_moreGlobalServerArgs_770_ = lean_ctor_get(v_config_769_, 3);
lean_inc_ref(v_moreGlobalServerArgs_770_);
return v_moreGlobalServerArgs_770_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreGlobalServerArgs___boxed(lean_object* v_self_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lake_Package_moreGlobalServerArgs(v_self_771_);
lean_dec_ref(v_self_771_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreServerOptions(lean_object* v_self_773_){
_start:
{
lean_object* v_config_774_; lean_object* v_toLeanConfig_775_; lean_object* v_leanOptions_776_; lean_object* v_moreServerOptions_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_config_774_ = lean_ctor_get(v_self_773_, 6);
v_toLeanConfig_775_ = lean_ctor_get(v_config_774_, 1);
v_leanOptions_776_ = lean_ctor_get(v_toLeanConfig_775_, 0);
v_moreServerOptions_777_ = lean_ctor_get(v_toLeanConfig_775_, 4);
v___x_778_ = l_Lean_LeanOptions_ofArray(v_leanOptions_776_);
v___x_779_ = l_Lean_LeanOptions_appendArray(v___x_778_, v_moreServerOptions_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreServerOptions___boxed(lean_object* v_self_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lake_Package_moreServerOptions(v_self_780_);
lean_dec_ref(v_self_780_);
return v_res_781_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_buildType(lean_object* v_self_782_){
_start:
{
lean_object* v_config_783_; lean_object* v_toLeanConfig_784_; uint8_t v_buildType_785_; 
v_config_783_ = lean_ctor_get(v_self_782_, 6);
v_toLeanConfig_784_ = lean_ctor_get(v_config_783_, 1);
v_buildType_785_ = lean_ctor_get_uint8(v_toLeanConfig_784_, sizeof(void*)*13);
return v_buildType_785_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildType___boxed(lean_object* v_self_786_){
_start:
{
uint8_t v_res_787_; lean_object* v_r_788_; 
v_res_787_ = l_Lake_Package_buildType(v_self_786_);
lean_dec_ref(v_self_786_);
v_r_788_ = lean_box(v_res_787_);
return v_r_788_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_backend(lean_object* v_self_789_){
_start:
{
lean_object* v_config_790_; lean_object* v_toLeanConfig_791_; uint8_t v_backend_792_; 
v_config_790_ = lean_ctor_get(v_self_789_, 6);
v_toLeanConfig_791_ = lean_ctor_get(v_config_790_, 1);
v_backend_792_ = lean_ctor_get_uint8(v_toLeanConfig_791_, sizeof(void*)*13 + 1);
return v_backend_792_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_backend___boxed(lean_object* v_self_793_){
_start:
{
uint8_t v_res_794_; lean_object* v_r_795_; 
v_res_794_ = l_Lake_Package_backend(v_self_793_);
lean_dec_ref(v_self_793_);
v_r_795_ = lean_box(v_res_794_);
return v_r_795_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_allowImportAll(lean_object* v_self_796_){
_start:
{
lean_object* v_config_797_; uint8_t v_allowImportAll_798_; 
v_config_797_ = lean_ctor_get(v_self_796_, 6);
v_allowImportAll_798_ = lean_ctor_get_uint8(v_config_797_, sizeof(void*)*28 + 5);
return v_allowImportAll_798_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_allowImportAll___boxed(lean_object* v_self_799_){
_start:
{
uint8_t v_res_800_; lean_object* v_r_801_; 
v_res_800_ = l_Lake_Package_allowImportAll(v_self_799_);
lean_dec_ref(v_self_799_);
v_r_801_ = lean_box(v_res_800_);
return v_r_801_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_requiresModuleSystem(lean_object* v_self_802_){
_start:
{
lean_object* v_config_803_; lean_object* v_toLeanConfig_804_; uint8_t v_requiresModuleSystem_805_; 
v_config_803_ = lean_ctor_get(v_self_802_, 6);
v_toLeanConfig_804_ = lean_ctor_get(v_config_803_, 1);
v_requiresModuleSystem_805_ = lean_ctor_get_uint8(v_toLeanConfig_804_, sizeof(void*)*13 + 3);
return v_requiresModuleSystem_805_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_requiresModuleSystem___boxed(lean_object* v_self_806_){
_start:
{
uint8_t v_res_807_; lean_object* v_r_808_; 
v_res_807_ = l_Lake_Package_requiresModuleSystem(v_self_806_);
lean_dec_ref(v_self_806_);
v_r_808_ = lean_box(v_res_807_);
return v_r_808_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_allowNonModules(lean_object* v_self_809_){
_start:
{
lean_object* v_config_810_; lean_object* v_toLeanConfig_811_; uint8_t v_allowNonModules_812_; 
v_config_810_ = lean_ctor_get(v_self_809_, 6);
v_toLeanConfig_811_ = lean_ctor_get(v_config_810_, 1);
v_allowNonModules_812_ = lean_ctor_get_uint8(v_toLeanConfig_811_, sizeof(void*)*13 + 4);
return v_allowNonModules_812_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_allowNonModules___boxed(lean_object* v_self_813_){
_start:
{
uint8_t v_res_814_; lean_object* v_r_815_; 
v_res_814_ = l_Lake_Package_allowNonModules(v_self_813_);
lean_dec_ref(v_self_813_);
v_r_815_ = lean_box(v_res_814_);
return v_r_815_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_dynlibs(lean_object* v_self_816_){
_start:
{
lean_object* v_config_817_; lean_object* v_toLeanConfig_818_; lean_object* v_dynlibs_819_; 
v_config_817_ = lean_ctor_get(v_self_816_, 6);
v_toLeanConfig_818_ = lean_ctor_get(v_config_817_, 1);
v_dynlibs_819_ = lean_ctor_get(v_toLeanConfig_818_, 11);
lean_inc_ref(v_dynlibs_819_);
return v_dynlibs_819_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_dynlibs___boxed(lean_object* v_self_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lake_Package_dynlibs(v_self_820_);
lean_dec_ref(v_self_820_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_plugins(lean_object* v_self_822_){
_start:
{
lean_object* v_config_823_; lean_object* v_toLeanConfig_824_; lean_object* v_plugins_825_; 
v_config_823_ = lean_ctor_get(v_self_822_, 6);
v_toLeanConfig_824_ = lean_ctor_get(v_config_823_, 1);
v_plugins_825_ = lean_ctor_get(v_toLeanConfig_824_, 12);
lean_inc_ref(v_plugins_825_);
return v_plugins_825_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_plugins___boxed(lean_object* v_self_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lake_Package_plugins(v_self_826_);
lean_dec_ref(v_self_826_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_leanOptions(lean_object* v_self_828_){
_start:
{
lean_object* v_config_829_; lean_object* v_toLeanConfig_830_; lean_object* v_leanOptions_831_; lean_object* v___x_832_; 
v_config_829_ = lean_ctor_get(v_self_828_, 6);
v_toLeanConfig_830_ = lean_ctor_get(v_config_829_, 1);
v_leanOptions_831_ = lean_ctor_get(v_toLeanConfig_830_, 0);
v___x_832_ = l_Lean_LeanOptions_ofArray(v_leanOptions_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_leanOptions___boxed(lean_object* v_self_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lake_Package_leanOptions(v_self_833_);
lean_dec_ref(v_self_833_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLeanArgs(lean_object* v_self_835_){
_start:
{
lean_object* v_config_836_; lean_object* v_toLeanConfig_837_; lean_object* v_moreLeanArgs_838_; 
v_config_836_ = lean_ctor_get(v_self_835_, 6);
v_toLeanConfig_837_ = lean_ctor_get(v_config_836_, 1);
v_moreLeanArgs_838_ = lean_ctor_get(v_toLeanConfig_837_, 1);
lean_inc_ref(v_moreLeanArgs_838_);
return v_moreLeanArgs_838_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLeanArgs___boxed(lean_object* v_self_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lake_Package_moreLeanArgs(v_self_839_);
lean_dec_ref(v_self_839_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_weakLeanArgs(lean_object* v_self_841_){
_start:
{
lean_object* v_config_842_; lean_object* v_toLeanConfig_843_; lean_object* v_weakLeanArgs_844_; 
v_config_842_ = lean_ctor_get(v_self_841_, 6);
v_toLeanConfig_843_ = lean_ctor_get(v_config_842_, 1);
v_weakLeanArgs_844_ = lean_ctor_get(v_toLeanConfig_843_, 2);
lean_inc_ref(v_weakLeanArgs_844_);
return v_weakLeanArgs_844_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_weakLeanArgs___boxed(lean_object* v_self_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lake_Package_weakLeanArgs(v_self_845_);
lean_dec_ref(v_self_845_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLeancArgs(lean_object* v_self_847_){
_start:
{
lean_object* v_config_848_; lean_object* v_toLeanConfig_849_; lean_object* v_moreLeancArgs_850_; 
v_config_848_ = lean_ctor_get(v_self_847_, 6);
v_toLeanConfig_849_ = lean_ctor_get(v_config_848_, 1);
v_moreLeancArgs_850_ = lean_ctor_get(v_toLeanConfig_849_, 3);
lean_inc_ref(v_moreLeancArgs_850_);
return v_moreLeancArgs_850_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLeancArgs___boxed(lean_object* v_self_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lake_Package_moreLeancArgs(v_self_851_);
lean_dec_ref(v_self_851_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_weakLeancArgs(lean_object* v_self_853_){
_start:
{
lean_object* v_config_854_; lean_object* v_toLeanConfig_855_; lean_object* v_weakLeancArgs_856_; 
v_config_854_ = lean_ctor_get(v_self_853_, 6);
v_toLeanConfig_855_ = lean_ctor_get(v_config_854_, 1);
v_weakLeancArgs_856_ = lean_ctor_get(v_toLeanConfig_855_, 5);
lean_inc_ref(v_weakLeancArgs_856_);
return v_weakLeancArgs_856_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_weakLeancArgs___boxed(lean_object* v_self_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lake_Package_weakLeancArgs(v_self_857_);
lean_dec_ref(v_self_857_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkObjs(lean_object* v_self_859_){
_start:
{
lean_object* v_config_860_; lean_object* v_toLeanConfig_861_; lean_object* v_moreLinkObjs_862_; 
v_config_860_ = lean_ctor_get(v_self_859_, 6);
v_toLeanConfig_861_ = lean_ctor_get(v_config_860_, 1);
v_moreLinkObjs_862_ = lean_ctor_get(v_toLeanConfig_861_, 6);
lean_inc_ref(v_moreLinkObjs_862_);
return v_moreLinkObjs_862_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkObjs___boxed(lean_object* v_self_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lake_Package_moreLinkObjs(v_self_863_);
lean_dec_ref(v_self_863_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkLibs(lean_object* v_self_865_){
_start:
{
lean_object* v_config_866_; lean_object* v_toLeanConfig_867_; lean_object* v_moreLinkLibs_868_; 
v_config_866_ = lean_ctor_get(v_self_865_, 6);
v_toLeanConfig_867_ = lean_ctor_get(v_config_866_, 1);
v_moreLinkLibs_868_ = lean_ctor_get(v_toLeanConfig_867_, 7);
lean_inc_ref(v_moreLinkLibs_868_);
return v_moreLinkLibs_868_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkLibs___boxed(lean_object* v_self_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Lake_Package_moreLinkLibs(v_self_869_);
lean_dec_ref(v_self_869_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkArgs(lean_object* v_self_871_){
_start:
{
lean_object* v_config_872_; lean_object* v_toLeanConfig_873_; lean_object* v_moreLinkArgs_874_; 
v_config_872_ = lean_ctor_get(v_self_871_, 6);
v_toLeanConfig_873_ = lean_ctor_get(v_config_872_, 1);
v_moreLinkArgs_874_ = lean_ctor_get(v_toLeanConfig_873_, 8);
lean_inc_ref(v_moreLinkArgs_874_);
return v_moreLinkArgs_874_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_moreLinkArgs___boxed(lean_object* v_self_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lake_Package_moreLinkArgs(v_self_875_);
lean_dec_ref(v_self_875_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_weakLinkArgs(lean_object* v_self_877_){
_start:
{
lean_object* v_config_878_; lean_object* v_toLeanConfig_879_; lean_object* v_weakLinkArgs_880_; 
v_config_878_ = lean_ctor_get(v_self_877_, 6);
v_toLeanConfig_879_ = lean_ctor_get(v_config_878_, 1);
v_weakLinkArgs_880_ = lean_ctor_get(v_toLeanConfig_879_, 9);
lean_inc_ref(v_weakLinkArgs_880_);
return v_weakLinkArgs_880_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_weakLinkArgs___boxed(lean_object* v_self_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lake_Package_weakLinkArgs(v_self_881_);
lean_dec_ref(v_self_881_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_srcDir(lean_object* v_self_883_){
_start:
{
lean_object* v_config_884_; lean_object* v_dir_885_; lean_object* v_srcDir_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_config_884_ = lean_ctor_get(v_self_883_, 6);
lean_inc_ref(v_config_884_);
v_dir_885_ = lean_ctor_get(v_self_883_, 4);
lean_inc_ref(v_dir_885_);
lean_dec_ref(v_self_883_);
v_srcDir_886_ = lean_ctor_get(v_config_884_, 4);
lean_inc_ref(v_srcDir_886_);
lean_dec_ref(v_config_884_);
v___x_887_ = l_System_FilePath_normalize(v_srcDir_886_);
v___x_888_ = l_Lake_joinRelative(v_dir_885_, v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_rootDir(lean_object* v_self_889_){
_start:
{
lean_object* v_config_890_; lean_object* v_dir_891_; lean_object* v_srcDir_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_config_890_ = lean_ctor_get(v_self_889_, 6);
lean_inc_ref(v_config_890_);
v_dir_891_ = lean_ctor_get(v_self_889_, 4);
lean_inc_ref(v_dir_891_);
lean_dec_ref(v_self_889_);
v_srcDir_892_ = lean_ctor_get(v_config_890_, 4);
lean_inc_ref(v_srcDir_892_);
lean_dec_ref(v_config_890_);
v___x_893_ = l_System_FilePath_normalize(v_srcDir_892_);
v___x_894_ = l_Lake_joinRelative(v_dir_891_, v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_leanLibDir(lean_object* v_self_895_){
_start:
{
lean_object* v_config_896_; lean_object* v_dir_897_; lean_object* v_buildDir_898_; lean_object* v_leanLibDir_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_config_896_ = lean_ctor_get(v_self_895_, 6);
lean_inc_ref(v_config_896_);
v_dir_897_ = lean_ctor_get(v_self_895_, 4);
lean_inc_ref(v_dir_897_);
lean_dec_ref(v_self_895_);
v_buildDir_898_ = lean_ctor_get(v_config_896_, 5);
lean_inc_ref(v_buildDir_898_);
v_leanLibDir_899_ = lean_ctor_get(v_config_896_, 6);
lean_inc_ref(v_leanLibDir_899_);
lean_dec_ref(v_config_896_);
v___x_900_ = l_System_FilePath_normalize(v_buildDir_898_);
v___x_901_ = l_Lake_joinRelative(v_dir_897_, v___x_900_);
v___x_902_ = l_System_FilePath_normalize(v_leanLibDir_899_);
v___x_903_ = l_Lake_joinRelative(v___x_901_, v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_bootstrapIncludeDir(lean_object* v_self_905_){
_start:
{
lean_object* v_config_906_; lean_object* v_dir_907_; lean_object* v_buildDir_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_config_906_ = lean_ctor_get(v_self_905_, 6);
lean_inc_ref(v_config_906_);
v_dir_907_ = lean_ctor_get(v_self_905_, 4);
lean_inc_ref(v_dir_907_);
lean_dec_ref(v_self_905_);
v_buildDir_908_ = lean_ctor_get(v_config_906_, 5);
lean_inc_ref(v_buildDir_908_);
lean_dec_ref(v_config_906_);
v___x_909_ = l_System_FilePath_normalize(v_buildDir_908_);
v___x_910_ = l_Lake_joinRelative(v_dir_907_, v___x_909_);
v___x_911_ = ((lean_object*)(l_Lake_Package_bootstrapIncludeDir___closed__0));
v___x_912_ = l_Lake_joinRelative(v___x_910_, v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_staticLibDir(lean_object* v_self_913_){
_start:
{
lean_object* v_config_914_; lean_object* v_dir_915_; lean_object* v_buildDir_916_; lean_object* v_nativeLibDir_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_config_914_ = lean_ctor_get(v_self_913_, 6);
lean_inc_ref(v_config_914_);
v_dir_915_ = lean_ctor_get(v_self_913_, 4);
lean_inc_ref(v_dir_915_);
lean_dec_ref(v_self_913_);
v_buildDir_916_ = lean_ctor_get(v_config_914_, 5);
lean_inc_ref(v_buildDir_916_);
v_nativeLibDir_917_ = lean_ctor_get(v_config_914_, 7);
lean_inc_ref(v_nativeLibDir_917_);
lean_dec_ref(v_config_914_);
v___x_918_ = l_System_FilePath_normalize(v_buildDir_916_);
v___x_919_ = l_Lake_joinRelative(v_dir_915_, v___x_918_);
v___x_920_ = l_System_FilePath_normalize(v_nativeLibDir_917_);
v___x_921_ = l_Lake_joinRelative(v___x_919_, v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_sharedLibDir(lean_object* v_self_922_){
_start:
{
lean_object* v_config_923_; lean_object* v_dir_924_; lean_object* v_buildDir_925_; lean_object* v_nativeLibDir_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_config_923_ = lean_ctor_get(v_self_922_, 6);
lean_inc_ref(v_config_923_);
v_dir_924_ = lean_ctor_get(v_self_922_, 4);
lean_inc_ref(v_dir_924_);
lean_dec_ref(v_self_922_);
v_buildDir_925_ = lean_ctor_get(v_config_923_, 5);
lean_inc_ref(v_buildDir_925_);
v_nativeLibDir_926_ = lean_ctor_get(v_config_923_, 7);
lean_inc_ref(v_nativeLibDir_926_);
lean_dec_ref(v_config_923_);
v___x_927_ = l_System_FilePath_normalize(v_buildDir_925_);
v___x_928_ = l_Lake_joinRelative(v_dir_924_, v___x_927_);
v___x_929_ = l_System_FilePath_normalize(v_nativeLibDir_926_);
v___x_930_ = l_Lake_joinRelative(v___x_928_, v___x_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_binDir(lean_object* v_self_931_){
_start:
{
lean_object* v_config_932_; lean_object* v_dir_933_; lean_object* v_buildDir_934_; lean_object* v_binDir_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_config_932_ = lean_ctor_get(v_self_931_, 6);
lean_inc_ref(v_config_932_);
v_dir_933_ = lean_ctor_get(v_self_931_, 4);
lean_inc_ref(v_dir_933_);
lean_dec_ref(v_self_931_);
v_buildDir_934_ = lean_ctor_get(v_config_932_, 5);
lean_inc_ref(v_buildDir_934_);
v_binDir_935_ = lean_ctor_get(v_config_932_, 8);
lean_inc_ref(v_binDir_935_);
lean_dec_ref(v_config_932_);
v___x_936_ = l_System_FilePath_normalize(v_buildDir_934_);
v___x_937_ = l_Lake_joinRelative(v_dir_933_, v___x_936_);
v___x_938_ = l_System_FilePath_normalize(v_binDir_935_);
v___x_939_ = l_Lake_joinRelative(v___x_937_, v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_irDir(lean_object* v_self_940_){
_start:
{
lean_object* v_config_941_; lean_object* v_dir_942_; lean_object* v_buildDir_943_; lean_object* v_irDir_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v_config_941_ = lean_ctor_get(v_self_940_, 6);
lean_inc_ref(v_config_941_);
v_dir_942_ = lean_ctor_get(v_self_940_, 4);
lean_inc_ref(v_dir_942_);
lean_dec_ref(v_self_940_);
v_buildDir_943_ = lean_ctor_get(v_config_941_, 5);
lean_inc_ref(v_buildDir_943_);
v_irDir_944_ = lean_ctor_get(v_config_941_, 9);
lean_inc_ref(v_irDir_944_);
lean_dec_ref(v_config_941_);
v___x_945_ = l_System_FilePath_normalize(v_buildDir_943_);
v___x_946_ = l_Lake_joinRelative(v_dir_942_, v___x_945_);
v___x_947_ = l_System_FilePath_normalize(v_irDir_944_);
v___x_948_ = l_Lake_joinRelative(v___x_946_, v___x_947_);
return v___x_948_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_libPrefixOnWindows(lean_object* v_self_949_){
_start:
{
lean_object* v_config_950_; uint8_t v_libPrefixOnWindows_951_; 
v_config_950_ = lean_ctor_get(v_self_949_, 6);
v_libPrefixOnWindows_951_ = lean_ctor_get_uint8(v_config_950_, sizeof(void*)*28 + 4);
return v_libPrefixOnWindows_951_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_libPrefixOnWindows___boxed(lean_object* v_self_952_){
_start:
{
uint8_t v_res_953_; lean_object* v_r_954_; 
v_res_953_ = l_Lake_Package_libPrefixOnWindows(v_self_952_);
lean_dec_ref(v_self_952_);
v_r_954_ = lean_box(v_res_953_);
return v_r_954_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_enableArtifactCache_x3f(lean_object* v_self_955_){
_start:
{
lean_object* v_config_956_; lean_object* v_enableArtifactCache_x3f_957_; 
v_config_956_ = lean_ctor_get(v_self_955_, 6);
v_enableArtifactCache_x3f_957_ = lean_ctor_get(v_config_956_, 24);
lean_inc(v_enableArtifactCache_x3f_957_);
return v_enableArtifactCache_x3f_957_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_enableArtifactCache_x3f___boxed(lean_object* v_self_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lake_Package_enableArtifactCache_x3f(v_self_958_);
lean_dec_ref(v_self_958_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts_x3f(lean_object* v_self_960_){
_start:
{
lean_object* v_config_961_; lean_object* v_restoreAllArtifacts_x3f_962_; 
v_config_961_ = lean_ctor_get(v_self_960_, 6);
v_restoreAllArtifacts_x3f_962_ = lean_ctor_get(v_config_961_, 25);
lean_inc(v_restoreAllArtifacts_x3f_962_);
return v_restoreAllArtifacts_x3f_962_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts_x3f___boxed(lean_object* v_self_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lake_Package_restoreAllArtifacts_x3f(v_self_963_);
lean_dec_ref(v_self_963_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_cacheScope(lean_object* v_self_965_){
_start:
{
lean_object* v_baseName_966_; uint8_t v___x_967_; lean_object* v___x_968_; 
v_baseName_966_ = lean_ctor_get(v_self_965_, 1);
lean_inc(v_baseName_966_);
lean_dec_ref(v_self_965_);
v___x_967_ = 0;
v___x_968_ = l_Lean_Name_toString(v_baseName_966_, v___x_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Package_0__Lake_Package_reservoirScope(lean_object* v_self_970_){
_start:
{
lean_object* v_origName_971_; lean_object* v_scope_972_; lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_origName_971_ = lean_ctor_get(v_self_970_, 3);
lean_inc(v_origName_971_);
v_scope_972_ = lean_ctor_get(v_self_970_, 10);
lean_inc_ref(v_scope_972_);
lean_dec_ref(v_self_970_);
v___x_973_ = ((lean_object*)(l___private_Lake_Config_Package_0__Lake_Package_reservoirScope___closed__0));
v___x_974_ = lean_string_append(v_scope_972_, v___x_973_);
v___x_975_ = 0;
v___x_976_ = l_Lean_Name_toString(v_origName_971_, v___x_975_);
v___x_977_ = lean_string_append(v___x_974_, v___x_976_);
lean_dec_ref(v___x_976_);
v___x_978_ = l_Lake_CacheServiceScope_ofString(v___x_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_reservoirScope_x3f(lean_object* v_self_979_){
_start:
{
lean_object* v_scope_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v_scope_980_ = lean_ctor_get(v_self_979_, 10);
v___x_981_ = lean_string_utf8_byte_size(v_scope_980_);
v___x_982_ = lean_unsigned_to_nat(0u);
v___x_983_ = lean_nat_dec_eq(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = l___private_Lake_Config_Package_0__Lake_Package_reservoirScope(v_self_979_);
v___x_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
return v___x_985_;
}
else
{
lean_object* v___x_986_; 
lean_dec_ref(v_self_979_);
v___x_986_ = lean_box(0);
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg(lean_object* v_t_987_, lean_object* v_k_988_){
_start:
{
if (lean_obj_tag(v_t_987_) == 0)
{
lean_object* v_k_989_; lean_object* v_v_990_; lean_object* v_l_991_; lean_object* v_r_992_; uint8_t v___x_993_; 
v_k_989_ = lean_ctor_get(v_t_987_, 1);
v_v_990_ = lean_ctor_get(v_t_987_, 2);
v_l_991_ = lean_ctor_get(v_t_987_, 3);
v_r_992_ = lean_ctor_get(v_t_987_, 4);
v___x_993_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_988_, v_k_989_);
switch(v___x_993_)
{
case 0:
{
v_t_987_ = v_l_991_;
goto _start;
}
case 1:
{
lean_object* v___x_995_; 
lean_inc(v_v_990_);
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v_v_990_);
return v___x_995_;
}
default: 
{
v_t_987_ = v_r_992_;
goto _start;
}
}
}
else
{
lean_object* v___x_997_; 
v___x_997_ = lean_box(0);
return v___x_997_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg___boxed(lean_object* v_t_998_, lean_object* v_k_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg(v_t_998_, v_k_999_);
lean_dec(v_k_999_);
lean_dec(v_t_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object* v_name_1001_, lean_object* v_self_1002_){
_start:
{
lean_object* v_targetDeclMap_1003_; lean_object* v___x_1004_; 
v_targetDeclMap_1003_ = lean_ctor_get(v_self_1002_, 16);
v___x_1004_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg(v_targetDeclMap_1003_, v_name_1001_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findTargetDecl_x3f___boxed(lean_object* v_name_1005_, lean_object* v_self_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Lake_Package_findTargetDecl_x3f(v_name_1005_, v_self_1006_);
lean_dec_ref(v_self_1006_);
lean_dec(v_name_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0(lean_object* v_00_u03b2_1008_, lean_object* v_inst_1009_, lean_object* v_t_1010_, lean_object* v_k_1011_){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___redArg(v_t_1010_, v_k_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0___boxed(lean_object* v_00_u03b2_1013_, lean_object* v_inst_1014_, lean_object* v_t_1015_, lean_object* v_k_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_Package_findTargetDecl_x3f_spec__0(v_00_u03b2_1013_, v_inst_1014_, v_t_1015_, v_k_1016_);
lean_dec(v_k_1016_);
lean_dec(v_t_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0(lean_object* v_mod_1021_, lean_object* v_as_1022_, size_t v_i_1023_, size_t v_stop_1024_){
_start:
{
uint8_t v___x_1025_; 
v___x_1025_ = lean_usize_dec_eq(v_i_1023_, v_stop_1024_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v_kind_1027_; lean_object* v_config_1028_; uint8_t v___x_1029_; uint8_t v___y_1031_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1026_ = lean_array_uget_borrowed(v_as_1022_, v_i_1023_);
v_kind_1027_ = lean_ctor_get(v___x_1026_, 2);
v_config_1028_ = lean_ctor_get(v___x_1026_, 3);
v___x_1029_ = 1;
v___x_1035_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__1));
v___x_1036_ = lean_name_eq(v_kind_1027_, v___x_1035_);
if (v___x_1036_ == 0)
{
v___y_1031_ = v___x_1036_;
goto v___jp_1030_;
}
else
{
uint8_t v___x_1037_; 
v___x_1037_ = l_Lake_LeanLibConfig_isLocalModule___redArg(v_mod_1021_, v_config_1028_);
v___y_1031_ = v___x_1037_;
goto v___jp_1030_;
}
v___jp_1030_:
{
if (v___y_1031_ == 0)
{
size_t v___x_1032_; size_t v___x_1033_; 
v___x_1032_ = ((size_t)1ULL);
v___x_1033_ = lean_usize_add(v_i_1023_, v___x_1032_);
v_i_1023_ = v___x_1033_;
goto _start;
}
else
{
return v___x_1029_;
}
}
}
else
{
uint8_t v___x_1038_; 
v___x_1038_ = 0;
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___boxed(lean_object* v_mod_1039_, lean_object* v_as_1040_, lean_object* v_i_1041_, lean_object* v_stop_1042_){
_start:
{
size_t v_i_boxed_1043_; size_t v_stop_boxed_1044_; uint8_t v_res_1045_; lean_object* v_r_1046_; 
v_i_boxed_1043_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_stop_boxed_1044_ = lean_unbox_usize(v_stop_1042_);
lean_dec(v_stop_1042_);
v_res_1045_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0(v_mod_1039_, v_as_1040_, v_i_boxed_1043_, v_stop_boxed_1044_);
lean_dec_ref(v_as_1040_);
lean_dec(v_mod_1039_);
v_r_1046_ = lean_box(v_res_1045_);
return v_r_1046_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_isLocalModule(lean_object* v_mod_1047_, lean_object* v_self_1048_){
_start:
{
lean_object* v_targetDecls_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v_targetDecls_1049_ = lean_ctor_get(v_self_1048_, 15);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = lean_array_get_size(v_targetDecls_1049_);
v___x_1052_ = lean_nat_dec_lt(v___x_1050_, v___x_1051_);
if (v___x_1052_ == 0)
{
return v___x_1052_;
}
else
{
if (v___x_1052_ == 0)
{
return v___x_1052_;
}
else
{
size_t v___x_1053_; size_t v___x_1054_; uint8_t v___x_1055_; 
v___x_1053_ = ((size_t)0ULL);
v___x_1054_ = lean_usize_of_nat(v___x_1051_);
v___x_1055_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0(v_mod_1047_, v_targetDecls_1049_, v___x_1053_, v___x_1054_);
return v___x_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isLocalModule___boxed(lean_object* v_mod_1056_, lean_object* v_self_1057_){
_start:
{
uint8_t v_res_1058_; lean_object* v_r_1059_; 
v_res_1058_ = l_Lake_Package_isLocalModule(v_mod_1056_, v_self_1057_);
lean_dec_ref(v_self_1057_);
lean_dec(v_mod_1056_);
v_r_1059_ = lean_box(v_res_1058_);
return v_r_1059_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isBuildableModule_spec__0(lean_object* v_mod_1060_, lean_object* v_as_1061_, size_t v_i_1062_, size_t v_stop_1063_){
_start:
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_usize_dec_eq(v_i_1062_, v_stop_1063_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; lean_object* v_kind_1066_; lean_object* v_config_1067_; uint8_t v___x_1068_; uint8_t v___y_1070_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1065_ = lean_array_uget_borrowed(v_as_1061_, v_i_1062_);
v_kind_1066_ = lean_ctor_get(v___x_1065_, 2);
v_config_1067_ = lean_ctor_get(v___x_1065_, 3);
v___x_1068_ = 1;
v___x_1081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isLocalModule_spec__0___closed__1));
v___x_1082_ = lean_name_eq(v_kind_1066_, v___x_1081_);
if (v___x_1082_ == 0)
{
goto v___jp_1074_;
}
else
{
uint8_t v___x_1083_; 
v___x_1083_ = l_Lake_LeanLibConfig_isBuildableModule___redArg(v_mod_1060_, v_config_1067_);
if (v___x_1083_ == 0)
{
goto v___jp_1074_;
}
else
{
v___y_1070_ = v___x_1083_;
goto v___jp_1069_;
}
}
v___jp_1069_:
{
if (v___y_1070_ == 0)
{
size_t v___x_1071_; size_t v___x_1072_; 
v___x_1071_ = ((size_t)1ULL);
v___x_1072_ = lean_usize_add(v_i_1062_, v___x_1071_);
v_i_1062_ = v___x_1072_;
goto _start;
}
else
{
return v___x_1068_;
}
}
v___jp_1074_:
{
lean_object* v_kind_1075_; lean_object* v_config_1076_; lean_object* v___x_1077_; uint8_t v___x_1078_; 
v_kind_1075_ = lean_ctor_get(v___x_1065_, 2);
v_config_1076_ = lean_ctor_get(v___x_1065_, 3);
v___x_1077_ = l_Lake_LeanExe_keyword;
v___x_1078_ = lean_name_eq(v_kind_1075_, v___x_1077_);
if (v___x_1078_ == 0)
{
v___y_1070_ = v___x_1078_;
goto v___jp_1069_;
}
else
{
lean_object* v_root_1079_; uint8_t v___x_1080_; 
v_root_1079_ = lean_ctor_get(v_config_1076_, 2);
v___x_1080_ = lean_name_eq(v_root_1079_, v_mod_1060_);
v___y_1070_ = v___x_1080_;
goto v___jp_1069_;
}
}
}
else
{
uint8_t v___x_1084_; 
v___x_1084_ = 0;
return v___x_1084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isBuildableModule_spec__0___boxed(lean_object* v_mod_1085_, lean_object* v_as_1086_, lean_object* v_i_1087_, lean_object* v_stop_1088_){
_start:
{
size_t v_i_boxed_1089_; size_t v_stop_boxed_1090_; uint8_t v_res_1091_; lean_object* v_r_1092_; 
v_i_boxed_1089_ = lean_unbox_usize(v_i_1087_);
lean_dec(v_i_1087_);
v_stop_boxed_1090_ = lean_unbox_usize(v_stop_1088_);
lean_dec(v_stop_1088_);
v_res_1091_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isBuildableModule_spec__0(v_mod_1085_, v_as_1086_, v_i_boxed_1089_, v_stop_boxed_1090_);
lean_dec_ref(v_as_1086_);
lean_dec(v_mod_1085_);
v_r_1092_ = lean_box(v_res_1091_);
return v_r_1092_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_isBuildableModule(lean_object* v_mod_1093_, lean_object* v_self_1094_){
_start:
{
lean_object* v_targetDecls_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
v_targetDecls_1095_ = lean_ctor_get(v_self_1094_, 15);
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = lean_array_get_size(v_targetDecls_1095_);
v___x_1098_ = lean_nat_dec_lt(v___x_1096_, v___x_1097_);
if (v___x_1098_ == 0)
{
return v___x_1098_;
}
else
{
if (v___x_1098_ == 0)
{
return v___x_1098_;
}
else
{
size_t v___x_1099_; size_t v___x_1100_; uint8_t v___x_1101_; 
v___x_1099_ = ((size_t)0ULL);
v___x_1100_ = lean_usize_of_nat(v___x_1097_);
v___x_1101_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Package_isBuildableModule_spec__0(v_mod_1093_, v_targetDecls_1095_, v___x_1099_, v___x_1100_);
return v___x_1101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isBuildableModule___boxed(lean_object* v_mod_1102_, lean_object* v_self_1103_){
_start:
{
uint8_t v_res_1104_; lean_object* v_r_1105_; 
v_res_1104_ = l_Lake_Package_isBuildableModule(v_mod_1102_, v_self_1103_);
lean_dec_ref(v_self_1103_);
lean_dec(v_mod_1102_);
v_r_1105_ = lean_box(v_res_1104_);
return v_r_1105_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_clean(lean_object* v_self_1106_){
_start:
{
lean_object* v_config_1108_; lean_object* v_dir_1109_; lean_object* v_buildDir_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v_config_1108_ = lean_ctor_get(v_self_1106_, 6);
lean_inc_ref(v_config_1108_);
v_dir_1109_ = lean_ctor_get(v_self_1106_, 4);
lean_inc_ref(v_dir_1109_);
lean_dec_ref(v_self_1106_);
v_buildDir_1110_ = lean_ctor_get(v_config_1108_, 5);
lean_inc_ref(v_buildDir_1110_);
lean_dec_ref(v_config_1108_);
v___x_1111_ = l_System_FilePath_normalize(v_buildDir_1110_);
v___x_1112_ = l_Lake_joinRelative(v_dir_1109_, v___x_1111_);
v___x_1113_ = l_Lake_removeDirAllIfExists(v___x_1112_);
lean_dec_ref(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_clean___boxed(lean_object* v_self_1114_, lean_object* v_a_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lake_Package_clean(v_self_1114_);
return v_res_1116_;
}
}
lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Script(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_ConfigDecl(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Dependency(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_PackageConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_OrdHashSet(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_OpaqueType(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Package(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Script(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_ConfigDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Dependency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_PackageConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_OrdHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedPackage_default = _init_l_Lake_instInhabitedPackage_default();
lean_mark_persistent(l_Lake_instInhabitedPackage_default);
l_Lake_instInhabitedPackage = _init_l_Lake_instInhabitedPackage();
lean_mark_persistent(l_Lake_instInhabitedPackage);
l_Lake_PackageSet_empty = _init_l_Lake_PackageSet_empty();
lean_mark_persistent(l_Lake_PackageSet_empty);
l_Lake_OrdPackageSet_empty = _init_l_Lake_OrdPackageSet_empty();
lean_mark_persistent(l_Lake_OrdPackageSet_empty);
l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_ = _init_l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_();
lean_mark_persistent(l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_);
l_Lake_instTypeNamePostUpdateHookDecl = _init_l_Lake_instTypeNamePostUpdateHookDecl();
lean_mark_persistent(l_Lake_instTypeNamePostUpdateHookDecl);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Util_OpaqueType(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Package(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* initialize_Lake_Config_Script(uint8_t builtin);
lean_object* initialize_Lake_Config_ConfigDecl(uint8_t builtin);
lean_object* initialize_Lake_Config_Dependency(uint8_t builtin);
lean_object* initialize_Lake_Config_PackageConfig(uint8_t builtin);
lean_object* initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Util_OrdHashSet(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Lake_Util_OpaqueType(uint8_t builtin);
lean_object* initialize_Lake_Util_OpaqueType(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Package(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Script(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_ConfigDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Dependency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_PackageConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_OrdHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Package(builtin);
}
#ifdef __cplusplus
}
#endif

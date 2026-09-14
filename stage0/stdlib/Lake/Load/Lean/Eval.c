// Lean compiler output
// Module: Lake.Load.Lean.Eval
// Imports: public import Lake.Config.Workspace public import Lake.Config.LakefileConfig import Lean.DocString import Lake.DSL.AttributesCore
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_;
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_instTypeNamePackageFacetDecl;
lean_object* l_Lake_OrderedTagAttribute_getAllEntries(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_RBArray_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_RBArray_mkEmpty___redArg(lean_object*);
extern lean_object* l_Lake_instImpl_00___x40_Lake_Config_Dependency_35947708____hygCtx___hyg_24_;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_;
extern lean_object* l_Lake_instTypeNameScriptFn;
extern lean_object* l_Lake_packageAttr;
lean_object* lean_array_to_list(lean_object*);
extern lean_object* l_Lake_instImpl_00___x40_Lake_Config_PackageConfig_1370621153____hygCtx___hyg_18_;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Lake_targetAttr;
size_t lean_array_size(lean_object*);
extern lean_object* l_Lake_moduleFacetAttr;
extern lean_object* l_Lake_instTypeNameModuleFacetDecl;
extern lean_object* l_Lake_packageFacetAttr;
extern lean_object* l_Lake_libraryFacetAttr;
extern lean_object* l_Lake_instTypeNameLibraryFacetDecl;
extern lean_object* l_Lake_lintDriverAttr;
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lake_defaultTargetAttr;
extern lean_object* l_Lake_scriptAttr;
extern lean_object* l_Lake_defaultScriptAttr;
extern lean_object* l_Lake_postUpdateAttr;
extern lean_object* l_Lake_packageDepAttr;
extern lean_object* l_Lake_testDriverAttr;
extern lean_object* l_Lake_LeanExe_keyword;
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unexpected type at '"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "', `"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__1 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` expected"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__2 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown constant '"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "configuration file is missing a `package` declaration"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__0_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__0_value)}};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__1 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__1_value;
static const lean_string_object l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "configuration file has multiple `package` declarations"};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__2 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__2_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__2_value)}};
static const lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__3 = (const lean_object*)&l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__0 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__0_value;
static lean_once_cell_t l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "post-update hook was defined in '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "', but was registered in '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = ": package is missing target '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "' marked as a default"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "target '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' was defined in package '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "', but registered under '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__12(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ": executable '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' has the same root module '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "' as executable '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = ": package is missing script or target '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' marked as a test driver"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' marked as a lint driver"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = ": package is missing script '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__13(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__14(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ": target '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' was already defined as a '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "', but then redefined as a '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_LakefileConfig_loadFromEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LakefileConfig_loadFromEnv___closed__0 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___closed__0_value;
static const lean_string_object l_Lake_LakefileConfig_loadFromEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = ": cannot both set lintDriver and use @[lint_driver]"};
static const lean_object* l_Lake_LakefileConfig_loadFromEnv___closed__1 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___closed__1_value;
static const lean_string_object l_Lake_LakefileConfig_loadFromEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = ": only one script or executable can be tagged @[lint_driver]"};
static const lean_object* l_Lake_LakefileConfig_loadFromEnv___closed__2 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___closed__2_value;
static const lean_string_object l_Lake_LakefileConfig_loadFromEnv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = ": cannot both set testDriver and use @[test_driver]"};
static const lean_object* l_Lake_LakefileConfig_loadFromEnv___closed__3 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___closed__3_value;
static const lean_string_object l_Lake_LakefileConfig_loadFromEnv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = ": only one script, executable, or library can be tagged @[test_driver]"};
static const lean_object* l_Lake_LakefileConfig_loadFromEnv___closed__4 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___closed__4_value;
static const lean_ctor_object l_Lake_LakefileConfig_loadFromEnv___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lake_LakefileConfig_loadFromEnv___boxed__const__1 = (const lean_object*)&l_Lake_LakefileConfig_loadFromEnv___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg(lean_object* v_inst_4_, lean_object* v_const_5_){
_start:
{
lean_object* v___x_6_; uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_6_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__0));
v___x_7_ = 1;
v___x_8_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_const_5_, v___x_7_);
v___x_9_ = lean_string_append(v___x_6_, v___x_8_);
lean_dec_ref(v___x_8_);
v___x_10_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__1));
v___x_11_ = lean_string_append(v___x_9_, v___x_10_);
v___x_12_ = l_unsafeCast___redArg(v_inst_4_);
v___x_13_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_12_, v___x_7_);
v___x_14_ = lean_string_append(v___x_11_, v___x_13_);
lean_dec_ref(v___x_13_);
v___x_15_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___closed__2));
v___x_16_ = lean_string_append(v___x_14_, v___x_15_);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg___boxed(lean_object* v_inst_18_, lean_object* v_const_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg(v_inst_18_, v_const_19_);
lean_dec(v_inst_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType(lean_object* v_00_u03b1_21_, lean_object* v_inst_22_, lean_object* v_const_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg(v_inst_22_, v_const_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___boxed(lean_object* v_00_u03b1_25_, lean_object* v_inst_26_, lean_object* v_const_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType(v_00_u03b1_25_, v_inst_26_, v_const_27_);
lean_dec(v_inst_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(lean_object* v_env_31_, lean_object* v_opts_32_, lean_object* v_inst_33_, lean_object* v_const_34_){
_start:
{
uint8_t v___x_35_; lean_object* v___x_36_; 
v___x_35_ = 0;
lean_inc(v_const_34_);
lean_inc_ref(v_env_31_);
v___x_36_ = l_Lean_Environment_find_x3f(v_env_31_, v_const_34_, v___x_35_);
if (lean_obj_tag(v___x_36_) == 0)
{
lean_object* v___x_37_; uint8_t v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
lean_dec_ref(v_env_31_);
v___x_37_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__0));
v___x_38_ = 1;
v___x_39_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_const_34_, v___x_38_);
v___x_40_ = lean_string_append(v___x_37_, v___x_39_);
lean_dec_ref(v___x_39_);
v___x_41_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1));
v___x_42_ = lean_string_append(v___x_40_, v___x_41_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
else
{
lean_object* v_val_44_; lean_object* v___x_45_; 
v_val_44_ = lean_ctor_get(v___x_36_, 0);
lean_inc(v_val_44_);
lean_dec_ref_known(v___x_36_, 1);
v___x_45_ = l_Lean_ConstantInfo_type(v_val_44_);
lean_dec(v_val_44_);
if (lean_obj_tag(v___x_45_) == 4)
{
lean_object* v_declName_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v_declName_46_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_declName_46_);
lean_dec_ref_known(v___x_45_, 2);
v___x_47_ = l_unsafeCast___redArg(v_inst_33_);
v___x_48_ = lean_name_eq(v_declName_46_, v___x_47_);
lean_dec(v___x_47_);
lean_dec(v_declName_46_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
lean_dec_ref(v_env_31_);
v___x_49_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg(v_inst_33_, v_const_34_);
return v___x_49_;
}
else
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Environment_evalConst___redArg(v_env_31_, v_opts_32_, v_const_34_, v___x_48_);
lean_dec(v_const_34_);
lean_dec_ref(v_env_31_);
return v___x_50_;
}
}
else
{
lean_object* v___x_51_; 
lean_dec_ref(v___x_45_);
lean_dec_ref(v_env_31_);
v___x_51_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck_throwUnexpectedType___redArg(v_inst_33_, v_const_34_);
return v___x_51_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___boxed(lean_object* v_env_52_, lean_object* v_opts_53_, lean_object* v_inst_54_, lean_object* v_const_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_52_, v_opts_53_, v_inst_54_, v_const_55_);
lean_dec(v_inst_54_);
lean_dec_ref(v_opts_53_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck(lean_object* v_env_57_, lean_object* v_opts_58_, lean_object* v_00_u03b1_59_, lean_object* v_inst_60_, lean_object* v_const_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_57_, v_opts_58_, v_inst_60_, v_const_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___boxed(lean_object* v_env_63_, lean_object* v_opts_64_, lean_object* v_00_u03b1_65_, lean_object* v_inst_66_, lean_object* v_const_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck(v_env_63_, v_opts_64_, v_00_u03b1_65_, v_inst_66_, v_const_67_);
lean_dec(v_inst_66_);
lean_dec_ref(v_opts_64_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0(lean_object* v_declName_70_, lean_object* v_map_71_, lean_object* v_toPure_72_, lean_object* v_____do__lift_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0___closed__0));
v___x_75_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_74_, v_declName_70_, v_____do__lift_73_, v_map_71_);
v___x_76_ = lean_apply_2(v_toPure_72_, lean_box(0), v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__1(lean_object* v_toPure_77_, lean_object* v_f_78_, lean_object* v_toBind_79_, lean_object* v_map_80_, lean_object* v_declName_81_){
_start:
{
lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
lean_inc(v_declName_81_);
v___f_82_ = lean_alloc_closure((void*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0), 4, 3);
lean_closure_set(v___f_82_, 0, v_declName_81_);
lean_closure_set(v___f_82_, 1, v_map_80_);
lean_closure_set(v___f_82_, 2, v_toPure_77_);
v___x_83_ = lean_apply_1(v_f_78_, v_declName_81_);
v___x_84_ = lean_apply_4(v_toBind_79_, lean_box(0), lean_box(0), v___x_83_, v___f_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg(lean_object* v_env_85_, lean_object* v_attr_86_, lean_object* v_inst_87_, lean_object* v_f_88_){
_start:
{
lean_object* v_toApplicative_89_; lean_object* v_toBind_90_; lean_object* v_toPure_91_; lean_object* v_entries_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v_toApplicative_89_ = lean_ctor_get(v_inst_87_, 0);
v_toBind_90_ = lean_ctor_get(v_inst_87_, 1);
v_toPure_91_ = lean_ctor_get(v_toApplicative_89_, 1);
v_entries_92_ = l_Lake_OrderedTagAttribute_getAllEntries(v_attr_86_, v_env_85_);
v___x_93_ = lean_box(1);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_array_get_size(v_entries_92_);
v___x_96_ = lean_nat_dec_lt(v___x_94_, v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_inc(v_toPure_91_);
lean_dec_ref(v_entries_92_);
lean_dec(v_f_88_);
lean_dec_ref(v_inst_87_);
v___x_97_ = lean_apply_2(v_toPure_91_, lean_box(0), v___x_93_);
return v___x_97_;
}
else
{
lean_object* v___f_98_; uint8_t v___x_99_; 
lean_inc(v_toBind_90_);
lean_inc(v_toPure_91_);
v___f_98_ = lean_alloc_closure((void*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__1), 5, 3);
lean_closure_set(v___f_98_, 0, v_toPure_91_);
lean_closure_set(v___f_98_, 1, v_f_88_);
lean_closure_set(v___f_98_, 2, v_toBind_90_);
v___x_99_ = lean_nat_dec_le(v___x_95_, v___x_95_);
if (v___x_99_ == 0)
{
if (v___x_96_ == 0)
{
lean_object* v___x_100_; 
lean_inc(v_toPure_91_);
lean_dec_ref(v___f_98_);
lean_dec_ref(v_entries_92_);
lean_dec_ref(v_inst_87_);
v___x_100_ = lean_apply_2(v_toPure_91_, lean_box(0), v___x_93_);
return v___x_100_;
}
else
{
size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; 
v___x_101_ = ((size_t)0ULL);
v___x_102_ = lean_usize_of_nat(v___x_95_);
v___x_103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_87_, v___f_98_, v_entries_92_, v___x_101_, v___x_102_, v___x_93_);
return v___x_103_;
}
}
else
{
size_t v___x_104_; size_t v___x_105_; lean_object* v___x_106_; 
v___x_104_ = ((size_t)0ULL);
v___x_105_ = lean_usize_of_nat(v___x_95_);
v___x_106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_87_, v___f_98_, v_entries_92_, v___x_104_, v___x_105_, v___x_93_);
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___boxed(lean_object* v_env_107_, lean_object* v_attr_108_, lean_object* v_inst_109_, lean_object* v_f_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg(v_env_107_, v_attr_108_, v_inst_109_, v_f_110_);
lean_dec_ref(v_attr_108_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap(lean_object* v_m_112_, lean_object* v_00_u03b2_113_, lean_object* v_env_114_, lean_object* v_attr_115_, lean_object* v_inst_116_, lean_object* v_f_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg(v_env_114_, v_attr_115_, v_inst_116_, v_f_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___boxed(lean_object* v_m_119_, lean_object* v_00_u03b2_120_, lean_object* v_env_121_, lean_object* v_attr_122_, lean_object* v_inst_123_, lean_object* v_f_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap(v_m_119_, v_00_u03b2_120_, v_env_121_, v_attr_122_, v_inst_123_, v_f_124_);
lean_dec_ref(v_attr_122_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___lam__0(lean_object* v_declName_126_, lean_object* v_map_127_, lean_object* v_toPure_128_, lean_object* v_____do__lift_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_126_, v_____do__lift_129_, v_map_127_);
v___x_131_ = lean_apply_2(v_toPure_128_, lean_box(0), v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___lam__1(lean_object* v_toPure_132_, lean_object* v_f_133_, lean_object* v_toBind_134_, lean_object* v_map_135_, lean_object* v_declName_136_){
_start:
{
lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
lean_inc(v_declName_136_);
v___f_137_ = lean_alloc_closure((void*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___lam__0), 4, 3);
lean_closure_set(v___f_137_, 0, v_declName_136_);
lean_closure_set(v___f_137_, 1, v_map_135_);
lean_closure_set(v___f_137_, 2, v_toPure_132_);
v___x_138_ = lean_apply_1(v_f_133_, v_declName_136_);
v___x_139_ = lean_apply_4(v_toBind_134_, lean_box(0), lean_box(0), v___x_138_, v___f_137_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg(lean_object* v_env_140_, lean_object* v_attr_141_, lean_object* v_inst_142_, lean_object* v_f_143_){
_start:
{
lean_object* v_toApplicative_144_; lean_object* v_toBind_145_; lean_object* v_toPure_146_; lean_object* v_entries_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v_toApplicative_144_ = lean_ctor_get(v_inst_142_, 0);
v_toBind_145_ = lean_ctor_get(v_inst_142_, 1);
v_toPure_146_ = lean_ctor_get(v_toApplicative_144_, 1);
v_entries_147_ = l_Lake_OrderedTagAttribute_getAllEntries(v_attr_141_, v_env_140_);
v___x_148_ = lean_box(1);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_array_get_size(v_entries_147_);
v___x_151_ = lean_nat_dec_lt(v___x_149_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_inc(v_toPure_146_);
lean_dec_ref(v_entries_147_);
lean_dec(v_f_143_);
lean_dec_ref(v_inst_142_);
v___x_152_ = lean_apply_2(v_toPure_146_, lean_box(0), v___x_148_);
return v___x_152_;
}
else
{
lean_object* v___f_153_; uint8_t v___x_154_; 
lean_inc(v_toBind_145_);
lean_inc(v_toPure_146_);
v___f_153_ = lean_alloc_closure((void*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___lam__1), 5, 3);
lean_closure_set(v___f_153_, 0, v_toPure_146_);
lean_closure_set(v___f_153_, 1, v_f_143_);
lean_closure_set(v___f_153_, 2, v_toBind_145_);
v___x_154_ = lean_nat_dec_le(v___x_150_, v___x_150_);
if (v___x_154_ == 0)
{
if (v___x_151_ == 0)
{
lean_object* v___x_155_; 
lean_inc(v_toPure_146_);
lean_dec_ref(v___f_153_);
lean_dec_ref(v_entries_147_);
lean_dec_ref(v_inst_142_);
v___x_155_ = lean_apply_2(v_toPure_146_, lean_box(0), v___x_148_);
return v___x_155_;
}
else
{
size_t v___x_156_; size_t v___x_157_; lean_object* v___x_158_; 
v___x_156_ = ((size_t)0ULL);
v___x_157_ = lean_usize_of_nat(v___x_150_);
v___x_158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_142_, v___f_153_, v_entries_147_, v___x_156_, v___x_157_, v___x_148_);
return v___x_158_;
}
}
else
{
size_t v___x_159_; size_t v___x_160_; lean_object* v___x_161_; 
v___x_159_ = ((size_t)0ULL);
v___x_160_ = lean_usize_of_nat(v___x_150_);
v___x_161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_142_, v___f_153_, v_entries_147_, v___x_159_, v___x_160_, v___x_148_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg___boxed(lean_object* v_env_162_, lean_object* v_attr_163_, lean_object* v_inst_164_, lean_object* v_f_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg(v_env_162_, v_attr_163_, v_inst_164_, v_f_165_);
lean_dec_ref(v_attr_163_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap(lean_object* v_m_167_, lean_object* v_00_u03b2_168_, lean_object* v_env_169_, lean_object* v_attr_170_, lean_object* v_inst_171_, lean_object* v_f_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___redArg(v_env_169_, v_attr_170_, v_inst_171_, v_f_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___boxed(lean_object* v_m_174_, lean_object* v_00_u03b2_175_, lean_object* v_env_176_, lean_object* v_attr_177_, lean_object* v_inst_178_, lean_object* v_f_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap(v_m_174_, v_00_u03b2_175_, v_env_176_, v_attr_177_, v_inst_178_, v_f_179_);
lean_dec_ref(v_attr_177_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___lam__0(lean_object* v_map_181_, lean_object* v_declName_182_, lean_object* v_toPure_183_, lean_object* v_____do__lift_184_){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0___closed__0));
v___x_186_ = l_Lake_RBArray_insert___redArg(v___x_185_, v_map_181_, v_declName_182_, v_____do__lift_184_);
v___x_187_ = lean_apply_2(v_toPure_183_, lean_box(0), v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___lam__1(lean_object* v_toPure_188_, lean_object* v_f_189_, lean_object* v_toBind_190_, lean_object* v_map_191_, lean_object* v_declName_192_){
_start:
{
lean_object* v___f_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
lean_inc(v_declName_192_);
v___f_193_ = lean_alloc_closure((void*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___lam__0), 4, 3);
lean_closure_set(v___f_193_, 0, v_map_191_);
lean_closure_set(v___f_193_, 1, v_declName_192_);
lean_closure_set(v___f_193_, 2, v_toPure_188_);
v___x_194_ = lean_apply_1(v_f_189_, v_declName_192_);
v___x_195_ = lean_apply_4(v_toBind_190_, lean_box(0), lean_box(0), v___x_194_, v___f_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg(lean_object* v_env_196_, lean_object* v_attr_197_, lean_object* v_inst_198_, lean_object* v_f_199_){
_start:
{
lean_object* v_toApplicative_200_; lean_object* v_toBind_201_; lean_object* v_toPure_202_; lean_object* v_entries_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v_toApplicative_200_ = lean_ctor_get(v_inst_198_, 0);
v_toBind_201_ = lean_ctor_get(v_inst_198_, 1);
v_toPure_202_ = lean_ctor_get(v_toApplicative_200_, 1);
v_entries_203_ = l_Lake_OrderedTagAttribute_getAllEntries(v_attr_197_, v_env_196_);
v___x_204_ = lean_array_get_size(v_entries_203_);
v___x_205_ = l_Lake_RBArray_mkEmpty___redArg(v___x_204_);
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_nat_dec_lt(v___x_206_, v___x_204_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; 
lean_inc(v_toPure_202_);
lean_dec_ref(v_entries_203_);
lean_dec(v_f_199_);
lean_dec_ref(v_inst_198_);
v___x_208_ = lean_apply_2(v_toPure_202_, lean_box(0), v___x_205_);
return v___x_208_;
}
else
{
lean_object* v___f_209_; uint8_t v___x_210_; 
lean_inc(v_toBind_201_);
lean_inc(v_toPure_202_);
v___f_209_ = lean_alloc_closure((void*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___lam__1), 5, 3);
lean_closure_set(v___f_209_, 0, v_toPure_202_);
lean_closure_set(v___f_209_, 1, v_f_199_);
lean_closure_set(v___f_209_, 2, v_toBind_201_);
v___x_210_ = lean_nat_dec_le(v___x_204_, v___x_204_);
if (v___x_210_ == 0)
{
if (v___x_207_ == 0)
{
lean_object* v___x_211_; 
lean_inc(v_toPure_202_);
lean_dec_ref(v___f_209_);
lean_dec_ref(v_entries_203_);
lean_dec_ref(v_inst_198_);
v___x_211_ = lean_apply_2(v_toPure_202_, lean_box(0), v___x_205_);
return v___x_211_;
}
else
{
size_t v___x_212_; size_t v___x_213_; lean_object* v___x_214_; 
v___x_212_ = ((size_t)0ULL);
v___x_213_ = lean_usize_of_nat(v___x_204_);
v___x_214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_198_, v___f_209_, v_entries_203_, v___x_212_, v___x_213_, v___x_205_);
return v___x_214_;
}
}
else
{
size_t v___x_215_; size_t v___x_216_; lean_object* v___x_217_; 
v___x_215_ = ((size_t)0ULL);
v___x_216_ = lean_usize_of_nat(v___x_204_);
v___x_217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_198_, v___f_209_, v_entries_203_, v___x_215_, v___x_216_, v___x_205_);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg___boxed(lean_object* v_env_218_, lean_object* v_attr_219_, lean_object* v_inst_220_, lean_object* v_f_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg(v_env_218_, v_attr_219_, v_inst_220_, v_f_221_);
lean_dec_ref(v_attr_219_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap(lean_object* v_m_223_, lean_object* v_00_u03b2_224_, lean_object* v_env_225_, lean_object* v_attr_226_, lean_object* v_inst_227_, lean_object* v_f_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___redArg(v_env_225_, v_attr_226_, v_inst_227_, v_f_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___boxed(lean_object* v_m_230_, lean_object* v_00_u03b2_231_, lean_object* v_env_232_, lean_object* v_attr_233_, lean_object* v_inst_234_, lean_object* v_f_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap(v_m_230_, v_00_u03b2_231_, v_env_232_, v_attr_233_, v_inst_234_, v_f_235_);
lean_dec_ref(v_attr_233_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv(lean_object* v_env_243_, lean_object* v_opts_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = l_Lake_packageAttr;
lean_inc_ref(v_env_243_);
v___x_246_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_245_, v_env_243_);
v___x_247_ = lean_array_to_list(v___x_246_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v___x_248_; 
lean_dec_ref(v_env_243_);
v___x_248_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__1));
return v___x_248_;
}
else
{
lean_object* v_tail_249_; 
v_tail_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_tail_249_);
if (lean_obj_tag(v_tail_249_) == 0)
{
lean_object* v_head_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v_head_250_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_head_250_);
lean_dec_ref_known(v___x_247_, 2);
v___x_251_ = l_Lake_instImpl_00___x40_Lake_Config_PackageConfig_1370621153____hygCtx___hyg_18_;
v___x_252_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_243_, v_opts_244_, v___x_251_, v_head_250_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; 
lean_dec(v_tail_249_);
lean_dec_ref_known(v___x_247_, 2);
lean_dec_ref(v_env_243_);
v___x_253_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___closed__3));
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv___boxed(lean_object* v_env_254_, lean_object* v_opts_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv(v_env_254_, v_opts_255_);
lean_dec_ref(v_opts_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(lean_object* v_e_257_){
_start:
{
if (lean_obj_tag(v_e_257_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_267_; 
v_a_259_ = lean_ctor_get(v_e_257_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v_e_257_);
if (v_isSharedCheck_267_ == 0)
{
v___x_261_ = v_e_257_;
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v_e_257_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_263_ = lean_mk_io_user_error(v_a_259_);
if (v_isShared_262_ == 0)
{
lean_ctor_set_tag(v___x_261_, 1);
lean_ctor_set(v___x_261_, 0, v___x_263_);
v___x_265_ = v___x_261_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v_e_257_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v_e_257_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v_e_257_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v_e_257_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
lean_ctor_set_tag(v___x_270_, 0);
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg___boxed(lean_object* v_e_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v_e_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0(lean_object* v_00_u03b1_279_, lean_object* v_e_280_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v_e_280_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___boxed(lean_object* v_00_u03b1_283_, lean_object* v_e_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0(v_00_u03b1_283_, v_e_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__0(lean_object* v_env_287_, lean_object* v_opts_288_, lean_object* v___x_289_, lean_object* v_name_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_287_, v_opts_288_, v___x_289_, v_name_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__0___boxed(lean_object* v_env_292_, lean_object* v_opts_293_, lean_object* v___x_294_, lean_object* v_name_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lake_LakefileConfig_loadFromEnv___lam__0(v_env_292_, v_opts_293_, v___x_294_, v_name_295_);
lean_dec(v___x_294_);
lean_dec_ref(v_opts_293_);
return v_res_296_;
}
}
static lean_object* _init_l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__1(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_box(0);
v___x_299_ = l_unsafeCast___redArg(v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__1(lean_object* v___x_300_, uint8_t v___x_301_, lean_object* v_env_302_, lean_object* v_opts_303_, lean_object* v___x_304_, lean_object* v_scriptName_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_308_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__0));
v___x_309_ = lean_string_append(v___x_300_, v___x_308_);
lean_inc_n(v_scriptName_305_, 2);
v___x_310_ = l_Lean_Name_toString(v_scriptName_305_, v___x_301_);
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
lean_dec_ref(v___x_310_);
lean_inc_ref(v_env_302_);
v___x_312_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_302_, v_opts_303_, v___x_304_, v_scriptName_305_);
v___x_313_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v___x_312_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; uint8_t v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v___x_315_ = 1;
v___x_316_ = l_Lean_Options_empty;
v___x_317_ = lean_obj_once(&l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__1, &l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__1_once, _init_l_Lake_LakefileConfig_loadFromEnv___lam__1___closed__1);
v___x_318_ = lean_box(0);
v___x_319_ = l_Lean_findDocString_x3f(v_env_302_, v_scriptName_305_, v___x_315_, v___x_316_, v___x_317_, v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
v___x_321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_321_, 0, v___x_311_);
lean_ctor_set(v___x_321_, 1, v_a_314_);
lean_ctor_set(v___x_321_, 2, v_a_320_);
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___y_306_);
return v___x_322_;
}
else
{
lean_object* v_a_323_; lean_object* v___x_324_; uint8_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec(v_a_314_);
lean_dec_ref(v___x_311_);
v_a_323_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_319_, 1);
v___x_324_ = lean_io_error_to_string(v_a_323_);
v___x_325_ = 3;
v___x_326_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*1, v___x_325_);
v___x_327_ = lean_array_get_size(v___y_306_);
v___x_328_ = lean_array_push(v___y_306_, v___x_326_);
v___x_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_327_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
return v___x_329_;
}
}
else
{
lean_object* v_a_330_; lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec_ref(v___x_311_);
lean_dec(v_scriptName_305_);
lean_dec_ref(v_env_302_);
v_a_330_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_313_, 1);
v___x_331_ = lean_io_error_to_string(v_a_330_);
v___x_332_ = 3;
v___x_333_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_333_, 0, v___x_331_);
lean_ctor_set_uint8(v___x_333_, sizeof(void*)*1, v___x_332_);
v___x_334_ = lean_array_get_size(v___y_306_);
v___x_335_ = lean_array_push(v___y_306_, v___x_333_);
v___x_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___lam__1___boxed(lean_object* v___x_337_, lean_object* v___x_338_, lean_object* v_env_339_, lean_object* v_opts_340_, lean_object* v___x_341_, lean_object* v_scriptName_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
uint8_t v___x_49297__boxed_345_; lean_object* v_res_346_; 
v___x_49297__boxed_345_ = lean_unbox(v___x_338_);
v_res_346_ = l_Lake_LakefileConfig_loadFromEnv___lam__1(v___x_337_, v___x_49297__boxed_345_, v_env_339_, v_opts_340_, v___x_341_, v_scriptName_342_, v___y_343_);
lean_dec(v___x_341_);
lean_dec_ref(v_opts_340_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9(lean_object* v_env_349_, lean_object* v_opts_350_, lean_object* v___x_351_, size_t v_sz_352_, size_t v_i_353_, lean_object* v_bs_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_a_358_; lean_object* v_a_359_; uint8_t v___x_361_; 
v___x_361_ = lean_usize_dec_lt(v_i_353_, v_sz_352_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec(v___x_351_);
lean_dec_ref(v_env_349_);
v___x_362_ = l_unsafeCast___redArg(v_bs_354_);
lean_dec_ref(v_bs_354_);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v___y_355_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; lean_object* v_v_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_364_ = l_Lake_instImpl_00___x40_Lake_Config_Package_1275829001____hygCtx___hyg_12_;
v_v_365_ = lean_array_uget_borrowed(v_bs_354_, v_i_353_);
v___x_366_ = l_unsafeCast___redArg(v_v_365_);
lean_inc_ref(v_env_349_);
v___x_367_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_349_, v_opts_350_, v___x_364_, v___x_366_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; uint8_t v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec_ref(v_bs_354_);
lean_dec(v___x_351_);
lean_dec_ref(v_env_349_);
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_367_, 1);
v___x_369_ = 3;
v___x_370_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_370_, 0, v_a_368_);
lean_ctor_set_uint8(v___x_370_, sizeof(void*)*1, v___x_369_);
v___x_371_ = lean_array_get_size(v___y_355_);
v___x_372_ = lean_array_push(v___y_355_, v___x_370_);
v_a_358_ = v___x_371_;
v_a_359_ = v___x_372_;
goto v___jp_357_;
}
else
{
lean_object* v_a_373_; lean_object* v_pkg_374_; lean_object* v_fn_375_; uint8_t v___x_376_; 
v_a_373_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_367_, 1);
v_pkg_374_ = lean_ctor_get(v_a_373_, 0);
lean_inc(v_pkg_374_);
v_fn_375_ = lean_ctor_get(v_a_373_, 1);
lean_inc_ref(v_fn_375_);
lean_dec(v_a_373_);
v___x_376_ = lean_name_eq(v_pkg_374_, v___x_351_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref(v_fn_375_);
lean_dec_ref(v_bs_354_);
lean_dec_ref(v_env_349_);
v___x_377_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__0));
v___x_378_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_374_, v___x_361_);
v___x_379_ = lean_string_append(v___x_377_, v___x_378_);
lean_dec_ref(v___x_378_);
v___x_380_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___closed__1));
v___x_381_ = lean_string_append(v___x_379_, v___x_380_);
v___x_382_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_351_, v___x_361_);
v___x_383_ = lean_string_append(v___x_381_, v___x_382_);
lean_dec_ref(v___x_382_);
v___x_384_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1));
v___x_385_ = lean_string_append(v___x_383_, v___x_384_);
v___x_386_ = 3;
v___x_387_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_387_, 0, v___x_385_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*1, v___x_386_);
v___x_388_ = lean_array_get_size(v___y_355_);
v___x_389_ = lean_array_push(v___y_355_, v___x_387_);
v_a_358_ = v___x_388_;
v_a_359_ = v___x_389_;
goto v___jp_357_;
}
else
{
lean_object* v___x_390_; lean_object* v_bs_x27_391_; lean_object* v___x_392_; size_t v___x_393_; size_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec(v_pkg_374_);
v___x_390_ = lean_unsigned_to_nat(0u);
v_bs_x27_391_ = lean_array_uset(v_bs_354_, v_i_353_, v___x_390_);
v___x_392_ = l_unsafeCast___redArg(v_fn_375_);
lean_dec_ref(v_fn_375_);
v___x_393_ = ((size_t)1ULL);
v___x_394_ = lean_usize_add(v_i_353_, v___x_393_);
v___x_395_ = l_unsafeCast___redArg(v___x_392_);
lean_dec(v___x_392_);
v___x_396_ = lean_array_uset(v_bs_x27_391_, v_i_353_, v___x_395_);
v_i_353_ = v___x_394_;
v_bs_354_ = v___x_396_;
goto _start;
}
}
}
v___jp_357_:
{
lean_object* v___x_360_; 
v___x_360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_360_, 0, v_a_358_);
lean_ctor_set(v___x_360_, 1, v_a_359_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___boxed(lean_object* v_env_398_, lean_object* v_opts_399_, lean_object* v___x_400_, lean_object* v_sz_401_, lean_object* v_i_402_, lean_object* v_bs_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
size_t v_sz_boxed_406_; size_t v_i_boxed_407_; lean_object* v_res_408_; 
v_sz_boxed_406_ = lean_unbox_usize(v_sz_401_);
lean_dec(v_sz_401_);
v_i_boxed_407_ = lean_unbox_usize(v_i_402_);
lean_dec(v_i_402_);
v_res_408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9(v_env_398_, v_opts_399_, v___x_400_, v_sz_boxed_406_, v_i_boxed_407_, v_bs_403_, v___y_404_);
lean_dec_ref(v_opts_399_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(lean_object* v_t_409_, lean_object* v_k_410_){
_start:
{
if (lean_obj_tag(v_t_409_) == 0)
{
lean_object* v_k_411_; lean_object* v_v_412_; lean_object* v_l_413_; lean_object* v_r_414_; uint8_t v___x_415_; 
v_k_411_ = lean_ctor_get(v_t_409_, 1);
v_v_412_ = lean_ctor_get(v_t_409_, 2);
v_l_413_ = lean_ctor_get(v_t_409_, 3);
v_r_414_ = lean_ctor_get(v_t_409_, 4);
v___x_415_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_410_, v_k_411_);
switch(v___x_415_)
{
case 0:
{
v_t_409_ = v_l_413_;
goto _start;
}
case 1:
{
lean_object* v___x_417_; 
lean_inc(v_v_412_);
v___x_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_417_, 0, v_v_412_);
return v___x_417_;
}
default: 
{
v_t_409_ = v_r_414_;
goto _start;
}
}
}
else
{
lean_object* v___x_419_; 
v___x_419_ = lean_box(0);
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg___boxed(lean_object* v_t_420_, lean_object* v_k_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_t_420_, v_k_421_);
lean_dec(v_k_421_);
lean_dec(v_t_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6(lean_object* v_a_425_, lean_object* v___x_426_, size_t v_sz_427_, size_t v_i_428_, lean_object* v_bs_429_, lean_object* v___y_430_){
_start:
{
uint8_t v___x_432_; 
v___x_432_ = lean_usize_dec_lt(v_i_428_, v_sz_427_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec_ref(v___x_426_);
lean_dec_ref(v_a_425_);
v___x_433_ = l_unsafeCast___redArg(v_bs_429_);
lean_dec_ref(v_bs_429_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v___y_430_);
return v___x_434_;
}
else
{
lean_object* v_toTreeMap_435_; lean_object* v_v_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_toTreeMap_435_ = lean_ctor_get(v_a_425_, 0);
v_v_436_ = lean_array_uget_borrowed(v_bs_429_, v_i_428_);
v___x_437_ = l_unsafeCast___redArg(v_v_436_);
v___x_438_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_toTreeMap_435_, v___x_437_);
if (lean_obj_tag(v___x_438_) == 1)
{
lean_object* v_val_439_; lean_object* v_name_440_; lean_object* v___x_441_; lean_object* v_bs_x27_442_; size_t v___x_443_; size_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec(v___x_437_);
v_val_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_val_439_);
lean_dec_ref_known(v___x_438_, 1);
v_name_440_ = lean_ctor_get(v_val_439_, 1);
lean_inc(v_name_440_);
lean_dec(v_val_439_);
v___x_441_ = lean_unsigned_to_nat(0u);
v_bs_x27_442_ = lean_array_uset(v_bs_429_, v_i_428_, v___x_441_);
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_i_428_, v___x_443_);
v___x_445_ = l_unsafeCast___redArg(v_name_440_);
lean_dec(v_name_440_);
v___x_446_ = lean_array_uset(v_bs_x27_442_, v_i_428_, v___x_445_);
v_i_428_ = v___x_444_;
v_bs_429_ = v___x_446_;
goto _start;
}
else
{
lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_464_; 
lean_dec(v___x_438_);
lean_dec_ref(v_bs_429_);
v_isSharedCheck_464_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_464_ == 0)
{
lean_object* v_unused_465_; lean_object* v_unused_466_; 
v_unused_465_ = lean_ctor_get(v_a_425_, 1);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_a_425_, 0);
lean_dec(v_unused_466_);
v___x_449_ = v_a_425_;
v_isShared_450_ = v_isSharedCheck_464_;
goto v_resetjp_448_;
}
else
{
lean_dec(v_a_425_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_464_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_451_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__0));
v___x_452_ = lean_string_append(v___x_426_, v___x_451_);
v___x_453_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_437_, v___x_432_);
v___x_454_ = lean_string_append(v___x_452_, v___x_453_);
lean_dec_ref(v___x_453_);
v___x_455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__1));
v___x_456_ = lean_string_append(v___x_454_, v___x_455_);
v___x_457_ = 3;
v___x_458_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set_uint8(v___x_458_, sizeof(void*)*1, v___x_457_);
v___x_459_ = lean_array_get_size(v___y_430_);
v___x_460_ = lean_array_push(v___y_430_, v___x_458_);
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 1);
lean_ctor_set(v___x_449_, 1, v___x_460_);
lean_ctor_set(v___x_449_, 0, v___x_459_);
v___x_462_ = v___x_449_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___boxed(lean_object* v_a_467_, lean_object* v___x_468_, lean_object* v_sz_469_, lean_object* v_i_470_, lean_object* v_bs_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
size_t v_sz_boxed_474_; size_t v_i_boxed_475_; lean_object* v_res_476_; 
v_sz_boxed_474_ = lean_unbox_usize(v_sz_469_);
lean_dec(v_sz_469_);
v_i_boxed_475_ = lean_unbox_usize(v_i_470_);
lean_dec(v_i_470_);
v_res_476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6(v_a_467_, v___x_468_, v_sz_boxed_474_, v_i_boxed_475_, v_bs_471_, v___y_472_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg(lean_object* v_f_477_, lean_object* v_as_478_, size_t v_i_479_, size_t v_stop_480_, lean_object* v_b_481_){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = lean_usize_dec_eq(v_i_479_, v_stop_480_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_array_uget_borrowed(v_as_478_, v_i_479_);
lean_inc_ref(v_f_477_);
lean_inc(v___x_483_);
v___x_484_ = lean_apply_1(v_f_477_, v___x_483_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref(v_b_481_);
lean_dec_ref(v_f_477_);
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_494_; lean_object* v___x_495_; size_t v___x_496_; size_t v___x_497_; 
v_a_493_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_484_, 1);
v___x_494_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_mkDTagMap___redArg___lam__0___closed__0));
lean_inc(v___x_483_);
v___x_495_ = l_Lake_RBArray_insert___redArg(v___x_494_, v_b_481_, v___x_483_, v_a_493_);
v___x_496_ = ((size_t)1ULL);
v___x_497_ = lean_usize_add(v_i_479_, v___x_496_);
v_i_479_ = v___x_497_;
v_b_481_ = v___x_495_;
goto _start;
}
}
else
{
lean_object* v___x_499_; 
lean_dec_ref(v_f_477_);
v___x_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_499_, 0, v_b_481_);
return v___x_499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg___boxed(lean_object* v_f_500_, lean_object* v_as_501_, lean_object* v_i_502_, lean_object* v_stop_503_, lean_object* v_b_504_){
_start:
{
size_t v_i_boxed_505_; size_t v_stop_boxed_506_; lean_object* v_res_507_; 
v_i_boxed_505_ = lean_unbox_usize(v_i_502_);
lean_dec(v_i_502_);
v_stop_boxed_506_ = lean_unbox_usize(v_stop_503_);
lean_dec(v_stop_503_);
v_res_507_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg(v_f_500_, v_as_501_, v_i_boxed_505_, v_stop_boxed_506_, v_b_504_);
lean_dec_ref(v_as_501_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg(lean_object* v_env_508_, lean_object* v_attr_509_, lean_object* v_f_510_){
_start:
{
lean_object* v_entries_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
v_entries_511_ = l_Lake_OrderedTagAttribute_getAllEntries(v_attr_509_, v_env_508_);
v___x_512_ = lean_array_get_size(v_entries_511_);
v___x_513_ = l_Lake_RBArray_mkEmpty___redArg(v___x_512_);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_nat_dec_lt(v___x_514_, v___x_512_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
lean_dec_ref(v_entries_511_);
lean_dec_ref(v_f_510_);
v___x_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_513_);
return v___x_516_;
}
else
{
size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_517_ = ((size_t)0ULL);
v___x_518_ = lean_usize_of_nat(v___x_512_);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg(v_f_510_, v_entries_511_, v___x_517_, v___x_518_, v___x_513_);
lean_dec_ref(v_entries_511_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg___boxed(lean_object* v_env_520_, lean_object* v_attr_521_, lean_object* v_f_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg(v_env_520_, v_attr_521_, v_f_522_);
lean_dec_ref(v_attr_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg(lean_object* v_f_524_, lean_object* v_as_525_, size_t v_i_526_, size_t v_stop_527_, lean_object* v_b_528_, lean_object* v___y_529_){
_start:
{
uint8_t v___x_531_; 
v___x_531_ = lean_usize_dec_eq(v_i_526_, v_stop_527_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_array_uget_borrowed(v_as_525_, v_i_526_);
lean_inc_ref(v_f_524_);
lean_inc(v___x_532_);
v___x_533_ = lean_apply_3(v_f_524_, v___x_532_, v___y_529_, lean_box(0));
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v_a_535_; lean_object* v___x_536_; size_t v___x_537_; size_t v___x_538_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
v_a_535_ = lean_ctor_get(v___x_533_, 1);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_533_, 2);
lean_inc(v___x_532_);
v___x_536_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_532_, v_a_534_, v_b_528_);
v___x_537_ = ((size_t)1ULL);
v___x_538_ = lean_usize_add(v_i_526_, v___x_537_);
v_i_526_ = v___x_538_;
v_b_528_ = v___x_536_;
v___y_529_ = v_a_535_;
goto _start;
}
else
{
lean_object* v_a_540_; lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_b_528_);
lean_dec_ref(v_f_524_);
v_a_540_ = lean_ctor_get(v___x_533_, 0);
v_a_541_ = lean_ctor_get(v___x_533_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_533_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_inc(v_a_540_);
lean_dec(v___x_533_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_540_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v___x_549_; 
lean_dec_ref(v_f_524_);
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v_b_528_);
lean_ctor_set(v___x_549_, 1, v___y_529_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg___boxed(lean_object* v_f_550_, lean_object* v_as_551_, lean_object* v_i_552_, lean_object* v_stop_553_, lean_object* v_b_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
size_t v_i_boxed_557_; size_t v_stop_boxed_558_; lean_object* v_res_559_; 
v_i_boxed_557_ = lean_unbox_usize(v_i_552_);
lean_dec(v_i_552_);
v_stop_boxed_558_ = lean_unbox_usize(v_stop_553_);
lean_dec(v_stop_553_);
v_res_559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg(v_f_550_, v_as_551_, v_i_boxed_557_, v_stop_boxed_558_, v_b_554_, v___y_555_);
lean_dec_ref(v_as_551_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg(lean_object* v_env_560_, lean_object* v_attr_561_, lean_object* v_f_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_entries_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
v_entries_565_ = l_Lake_OrderedTagAttribute_getAllEntries(v_attr_561_, v_env_560_);
v___x_566_ = lean_box(1);
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = lean_array_get_size(v_entries_565_);
v___x_569_ = lean_nat_dec_lt(v___x_567_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
lean_dec_ref(v_entries_565_);
lean_dec_ref(v_f_562_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_566_);
lean_ctor_set(v___x_570_, 1, v___y_563_);
return v___x_570_;
}
else
{
size_t v___x_571_; size_t v___x_572_; lean_object* v___x_573_; 
v___x_571_ = ((size_t)0ULL);
v___x_572_ = lean_usize_of_nat(v___x_568_);
v___x_573_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg(v_f_562_, v_entries_565_, v___x_571_, v___x_572_, v___x_566_, v___y_563_);
lean_dec_ref(v_entries_565_);
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg___boxed(lean_object* v_env_574_, lean_object* v_attr_575_, lean_object* v_f_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg(v_env_574_, v_attr_575_, v_f_576_, v___y_577_);
lean_dec_ref(v_attr_575_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4(lean_object* v___x_583_, size_t v_sz_584_, size_t v_i_585_, lean_object* v_bs_586_, lean_object* v___y_587_){
_start:
{
uint8_t v___x_589_; 
v___x_589_ = lean_usize_dec_lt(v_i_585_, v_sz_584_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; lean_object* v___x_591_; 
lean_dec(v___x_583_);
v___x_590_ = l_unsafeCast___redArg(v_bs_586_);
lean_dec_ref(v_bs_586_);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
lean_ctor_set(v___x_591_, 1, v___y_587_);
return v___x_591_;
}
else
{
lean_object* v_v_592_; lean_object* v___x_593_; lean_object* v_pkg_594_; lean_object* v_name_595_; uint8_t v___x_596_; 
v_v_592_ = lean_array_uget_borrowed(v_bs_586_, v_i_585_);
v___x_593_ = l_unsafeCast___redArg(v_v_592_);
v_pkg_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_pkg_594_);
v_name_595_ = lean_ctor_get(v___x_593_, 1);
lean_inc(v_name_595_);
v___x_596_ = lean_name_eq(v_pkg_594_, v___x_583_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
lean_dec(v___x_593_);
lean_dec_ref(v_bs_586_);
v___x_597_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__0));
v___x_598_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_595_, v___x_589_);
v___x_599_ = lean_string_append(v___x_597_, v___x_598_);
lean_dec_ref(v___x_598_);
v___x_600_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__1));
v___x_601_ = lean_string_append(v___x_599_, v___x_600_);
v___x_602_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_594_, v___x_589_);
v___x_603_ = lean_string_append(v___x_601_, v___x_602_);
lean_dec_ref(v___x_602_);
v___x_604_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___closed__2));
v___x_605_ = lean_string_append(v___x_603_, v___x_604_);
v___x_606_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_583_, v___x_589_);
v___x_607_ = lean_string_append(v___x_605_, v___x_606_);
lean_dec_ref(v___x_606_);
v___x_608_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1));
v___x_609_ = lean_string_append(v___x_607_, v___x_608_);
v___x_610_ = 3;
v___x_611_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set_uint8(v___x_611_, sizeof(void*)*1, v___x_610_);
v___x_612_ = lean_array_get_size(v___y_587_);
v___x_613_ = lean_array_push(v___y_587_, v___x_611_);
v___x_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_612_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
return v___x_614_;
}
else
{
lean_object* v___x_615_; lean_object* v_bs_x27_616_; size_t v___x_617_; size_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
lean_dec(v_name_595_);
lean_dec(v_pkg_594_);
v___x_615_ = lean_unsigned_to_nat(0u);
v_bs_x27_616_ = lean_array_uset(v_bs_586_, v_i_585_, v___x_615_);
v___x_617_ = ((size_t)1ULL);
v___x_618_ = lean_usize_add(v_i_585_, v___x_617_);
v___x_619_ = l_unsafeCast___redArg(v___x_593_);
lean_dec(v___x_593_);
v___x_620_ = lean_array_uset(v_bs_x27_616_, v_i_585_, v___x_619_);
v_i_585_ = v___x_618_;
v_bs_586_ = v___x_620_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___boxed(lean_object* v___x_622_, lean_object* v_sz_623_, lean_object* v_i_624_, lean_object* v_bs_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
size_t v_sz_boxed_628_; size_t v_i_boxed_629_; lean_object* v_res_630_; 
v_sz_boxed_628_ = lean_unbox_usize(v_sz_623_);
lean_dec(v_sz_623_);
v_i_boxed_629_ = lean_unbox_usize(v_i_624_);
lean_dec(v_i_624_);
v_res_630_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4(v___x_622_, v_sz_boxed_628_, v_i_boxed_629_, v_bs_625_, v___y_626_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__12(lean_object* v_env_631_, lean_object* v_opts_632_, lean_object* v_as_633_, size_t v_sz_634_, size_t v_i_635_, lean_object* v_b_636_){
_start:
{
uint8_t v___x_637_; 
v___x_637_ = lean_usize_dec_lt(v_i_635_, v_sz_634_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; 
lean_dec_ref(v_env_631_);
v___x_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_638_, 0, v_b_636_);
return v___x_638_;
}
else
{
lean_object* v___x_639_; lean_object* v_a_640_; lean_object* v___x_641_; 
v___x_639_ = l_Lake_instTypeNameModuleFacetDecl;
v_a_640_ = lean_array_uget_borrowed(v_as_633_, v_i_635_);
lean_inc(v_a_640_);
lean_inc_ref(v_env_631_);
v___x_641_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_631_, v_opts_632_, v___x_639_, v_a_640_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec_ref(v_b_636_);
lean_dec_ref(v_env_631_);
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_a_650_; lean_object* v_name_651_; lean_object* v_config_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_663_; 
v_a_650_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_641_, 1);
v_name_651_ = lean_ctor_get(v_a_650_, 0);
v_config_652_ = lean_ctor_get(v_a_650_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_a_650_);
if (v_isSharedCheck_663_ == 0)
{
v___x_654_ = v_a_650_;
v_isShared_655_ = v_isSharedCheck_663_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_config_652_);
lean_inc(v_name_651_);
lean_dec(v_a_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_663_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_name_651_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_config_652_);
v___x_657_ = v_reuseFailAlloc_662_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; size_t v___x_659_; size_t v___x_660_; 
v___x_658_ = lean_array_push(v_b_636_, v___x_657_);
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_add(v_i_635_, v___x_659_);
v_i_635_ = v___x_660_;
v_b_636_ = v___x_658_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__12___boxed(lean_object* v_env_664_, lean_object* v_opts_665_, lean_object* v_as_666_, lean_object* v_sz_667_, lean_object* v_i_668_, lean_object* v_b_669_){
_start:
{
size_t v_sz_boxed_670_; size_t v_i_boxed_671_; lean_object* v_res_672_; 
v_sz_boxed_670_ = lean_unbox_usize(v_sz_667_);
lean_dec(v_sz_667_);
v_i_boxed_671_ = lean_unbox_usize(v_i_668_);
lean_dec(v_i_668_);
v_res_672_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__12(v_env_664_, v_opts_665_, v_as_666_, v_sz_boxed_670_, v_i_boxed_671_, v_b_669_);
lean_dec_ref(v_as_666_);
lean_dec_ref(v_opts_665_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16(lean_object* v___x_676_, lean_object* v_as_677_, size_t v_i_678_, size_t v_stop_679_, lean_object* v_b_680_, lean_object* v___y_681_){
_start:
{
lean_object* v_a_684_; lean_object* v_a_685_; uint8_t v___x_689_; 
v___x_689_ = lean_usize_dec_eq(v_i_678_, v_stop_679_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v_name_691_; lean_object* v_kind_692_; lean_object* v_config_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_690_ = lean_array_uget_borrowed(v_as_677_, v_i_678_);
v_name_691_ = lean_ctor_get(v___x_690_, 1);
v_kind_692_ = lean_ctor_get(v___x_690_, 2);
v_config_693_ = lean_ctor_get(v___x_690_, 3);
v___x_694_ = l_Lake_LeanExe_keyword;
v___x_695_ = lean_name_eq(v_kind_692_, v___x_694_);
if (v___x_695_ == 0)
{
v_a_684_ = v_b_680_;
v_a_685_ = v___y_681_;
goto v___jp_683_;
}
else
{
lean_object* v_root_696_; lean_object* v___x_697_; 
v_root_696_ = lean_ctor_get(v_config_693_, 2);
v___x_697_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_b_680_, v_root_696_);
if (lean_obj_tag(v___x_697_) == 1)
{
lean_object* v_val_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec(v_b_680_);
v_val_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_val_698_);
lean_dec_ref_known(v___x_697_, 1);
v___x_699_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__0));
v___x_700_ = lean_string_append(v___x_676_, v___x_699_);
lean_inc(v_name_691_);
v___x_701_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_691_, v___x_695_);
v___x_702_ = lean_string_append(v___x_700_, v___x_701_);
lean_dec_ref(v___x_701_);
v___x_703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__1));
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
lean_inc(v_root_696_);
v___x_705_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_root_696_, v___x_695_);
v___x_706_ = lean_string_append(v___x_704_, v___x_705_);
lean_dec_ref(v___x_705_);
v___x_707_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___closed__2));
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
v___x_709_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_698_, v___x_695_);
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
lean_dec_ref(v___x_709_);
v___x_711_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1));
v___x_712_ = lean_string_append(v___x_710_, v___x_711_);
v___x_713_ = 3;
v___x_714_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*1, v___x_713_);
v___x_715_ = lean_array_get_size(v___y_681_);
v___x_716_ = lean_array_push(v___y_681_, v___x_714_);
v___x_717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; 
lean_dec(v___x_697_);
lean_inc(v_name_691_);
lean_inc(v_root_696_);
v___x_718_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_root_696_, v_name_691_, v_b_680_);
v_a_684_ = v___x_718_;
v_a_685_ = v___y_681_;
goto v___jp_683_;
}
}
}
else
{
lean_object* v___x_719_; 
lean_dec_ref(v___x_676_);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v_b_680_);
lean_ctor_set(v___x_719_, 1, v___y_681_);
return v___x_719_;
}
v___jp_683_:
{
size_t v___x_686_; size_t v___x_687_; 
v___x_686_ = ((size_t)1ULL);
v___x_687_ = lean_usize_add(v_i_678_, v___x_686_);
v_i_678_ = v___x_687_;
v_b_680_ = v_a_684_;
v___y_681_ = v_a_685_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16___boxed(lean_object* v___x_720_, lean_object* v_as_721_, lean_object* v_i_722_, lean_object* v_stop_723_, lean_object* v_b_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
size_t v_i_boxed_727_; size_t v_stop_boxed_728_; lean_object* v_res_729_; 
v_i_boxed_727_ = lean_unbox_usize(v_i_722_);
lean_dec(v_i_722_);
v_stop_boxed_728_ = lean_unbox_usize(v_stop_723_);
lean_dec(v_stop_723_);
v_res_729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16(v___x_720_, v_as_721_, v_i_boxed_727_, v_stop_boxed_728_, v_b_724_, v___y_725_);
lean_dec_ref(v_as_721_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11(lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v___x_734_, size_t v_sz_735_, size_t v_i_736_, lean_object* v_bs_737_, lean_object* v___y_738_){
_start:
{
uint8_t v___x_740_; 
v___x_740_ = lean_usize_dec_lt(v_i_736_, v_sz_735_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec_ref(v___x_734_);
lean_dec_ref(v_a_732_);
v___x_741_ = l_unsafeCast___redArg(v_bs_737_);
lean_dec_ref(v_bs_737_);
v___x_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___y_738_);
return v___x_742_;
}
else
{
lean_object* v_toTreeMap_743_; lean_object* v_v_744_; lean_object* v___x_745_; lean_object* v_bs_x27_746_; lean_object* v_a_748_; lean_object* v_a_749_; lean_object* v___x_755_; lean_object* v___x_756_; 
v_toTreeMap_743_ = lean_ctor_get(v_a_732_, 0);
v_v_744_ = lean_array_uget(v_bs_737_, v_i_736_);
v___x_745_ = lean_unsigned_to_nat(0u);
v_bs_x27_746_ = lean_array_uset(v_bs_737_, v_i_736_, v___x_745_);
v___x_755_ = l_unsafeCast___redArg(v_v_744_);
lean_dec(v_v_744_);
v___x_756_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_toTreeMap_743_, v___x_755_);
if (lean_obj_tag(v___x_756_) == 1)
{
lean_object* v_val_757_; lean_object* v_name_758_; 
lean_dec(v___x_755_);
v_val_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_val_757_);
lean_dec_ref_known(v___x_756_, 1);
v_name_758_ = lean_ctor_get(v_val_757_, 1);
lean_inc(v_name_758_);
lean_dec(v_val_757_);
v_a_748_ = v_name_758_;
v_a_749_ = v___y_738_;
goto v___jp_747_;
}
else
{
uint8_t v___x_759_; 
lean_dec(v___x_756_);
v___x_759_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v___x_755_, v_a_733_);
if (v___x_759_ == 0)
{
lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v_bs_x27_746_);
v_isSharedCheck_776_ = !lean_is_exclusive(v_a_732_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; lean_object* v_unused_778_; 
v_unused_777_ = lean_ctor_get(v_a_732_, 1);
lean_dec(v_unused_777_);
v_unused_778_ = lean_ctor_get(v_a_732_, 0);
lean_dec(v_unused_778_);
v___x_761_ = v_a_732_;
v_isShared_762_ = v_isSharedCheck_776_;
goto v_resetjp_760_;
}
else
{
lean_dec(v_a_732_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_776_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__0));
v___x_764_ = lean_string_append(v___x_734_, v___x_763_);
v___x_765_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_755_, v___x_740_);
v___x_766_ = lean_string_append(v___x_764_, v___x_765_);
lean_dec_ref(v___x_765_);
v___x_767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__1));
v___x_768_ = lean_string_append(v___x_766_, v___x_767_);
v___x_769_ = 3;
v___x_770_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_770_, 0, v___x_768_);
lean_ctor_set_uint8(v___x_770_, sizeof(void*)*1, v___x_769_);
v___x_771_ = lean_array_get_size(v___y_738_);
v___x_772_ = lean_array_push(v___y_738_, v___x_770_);
if (v_isShared_762_ == 0)
{
lean_ctor_set_tag(v___x_761_, 1);
lean_ctor_set(v___x_761_, 1, v___x_772_);
lean_ctor_set(v___x_761_, 0, v___x_771_);
v___x_774_ = v___x_761_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
else
{
v_a_748_ = v___x_755_;
v_a_749_ = v___y_738_;
goto v___jp_747_;
}
}
v___jp_747_:
{
size_t v___x_750_; size_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_750_ = ((size_t)1ULL);
v___x_751_ = lean_usize_add(v_i_736_, v___x_750_);
v___x_752_ = l_unsafeCast___redArg(v_a_748_);
lean_dec(v_a_748_);
v___x_753_ = lean_array_uset(v_bs_x27_746_, v_i_736_, v___x_752_);
v_i_736_ = v___x_751_;
v_bs_737_ = v___x_753_;
v___y_738_ = v_a_749_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___boxed(lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v___x_781_, lean_object* v_sz_782_, lean_object* v_i_783_, lean_object* v_bs_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
size_t v_sz_boxed_787_; size_t v_i_boxed_788_; lean_object* v_res_789_; 
v_sz_boxed_787_ = lean_unbox_usize(v_sz_782_);
lean_dec(v_sz_782_);
v_i_boxed_788_ = lean_unbox_usize(v_i_783_);
lean_dec(v_i_783_);
v_res_789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11(v_a_779_, v_a_780_, v___x_781_, v_sz_boxed_787_, v_i_boxed_788_, v_bs_784_, v___y_785_);
lean_dec(v_a_780_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15(lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v___x_793_, size_t v_sz_794_, size_t v_i_795_, lean_object* v_bs_796_, lean_object* v___y_797_){
_start:
{
uint8_t v___x_799_; 
v___x_799_ = lean_usize_dec_lt(v_i_795_, v_sz_794_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec_ref(v___x_793_);
lean_dec_ref(v_a_791_);
v___x_800_ = l_unsafeCast___redArg(v_bs_796_);
lean_dec_ref(v_bs_796_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___y_797_);
return v___x_801_;
}
else
{
lean_object* v_toTreeMap_802_; lean_object* v_v_803_; lean_object* v___x_804_; lean_object* v_bs_x27_805_; lean_object* v_a_807_; lean_object* v_a_808_; lean_object* v___x_814_; lean_object* v___x_815_; 
v_toTreeMap_802_ = lean_ctor_get(v_a_791_, 0);
v_v_803_ = lean_array_uget(v_bs_796_, v_i_795_);
v___x_804_ = lean_unsigned_to_nat(0u);
v_bs_x27_805_ = lean_array_uset(v_bs_796_, v_i_795_, v___x_804_);
v___x_814_ = l_unsafeCast___redArg(v_v_803_);
lean_dec(v_v_803_);
v___x_815_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_toTreeMap_802_, v___x_814_);
if (lean_obj_tag(v___x_815_) == 1)
{
lean_object* v_val_816_; lean_object* v_name_817_; 
lean_dec(v___x_814_);
v_val_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_val_816_);
lean_dec_ref_known(v___x_815_, 1);
v_name_817_ = lean_ctor_get(v_val_816_, 1);
lean_inc(v_name_817_);
lean_dec(v_val_816_);
v_a_807_ = v_name_817_;
v_a_808_ = v___y_797_;
goto v___jp_806_;
}
else
{
uint8_t v___x_818_; 
lean_dec(v___x_815_);
v___x_818_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v___x_814_, v_a_792_);
if (v___x_818_ == 0)
{
lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_835_; 
lean_dec_ref(v_bs_x27_805_);
v_isSharedCheck_835_ = !lean_is_exclusive(v_a_791_);
if (v_isSharedCheck_835_ == 0)
{
lean_object* v_unused_836_; lean_object* v_unused_837_; 
v_unused_836_ = lean_ctor_get(v_a_791_, 1);
lean_dec(v_unused_836_);
v_unused_837_ = lean_ctor_get(v_a_791_, 0);
lean_dec(v_unused_837_);
v___x_820_ = v_a_791_;
v_isShared_821_ = v_isSharedCheck_835_;
goto v_resetjp_819_;
}
else
{
lean_dec(v_a_791_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_835_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; uint8_t v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_822_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___closed__0));
v___x_823_ = lean_string_append(v___x_793_, v___x_822_);
v___x_824_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_814_, v___x_799_);
v___x_825_ = lean_string_append(v___x_823_, v___x_824_);
lean_dec_ref(v___x_824_);
v___x_826_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___closed__0));
v___x_827_ = lean_string_append(v___x_825_, v___x_826_);
v___x_828_ = 3;
v___x_829_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_829_, 0, v___x_827_);
lean_ctor_set_uint8(v___x_829_, sizeof(void*)*1, v___x_828_);
v___x_830_ = lean_array_get_size(v___y_797_);
v___x_831_ = lean_array_push(v___y_797_, v___x_829_);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 1);
lean_ctor_set(v___x_820_, 1, v___x_831_);
lean_ctor_set(v___x_820_, 0, v___x_830_);
v___x_833_ = v___x_820_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_830_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
v_a_807_ = v___x_814_;
v_a_808_ = v___y_797_;
goto v___jp_806_;
}
}
v___jp_806_:
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_809_ = ((size_t)1ULL);
v___x_810_ = lean_usize_add(v_i_795_, v___x_809_);
v___x_811_ = l_unsafeCast___redArg(v_a_807_);
lean_dec(v_a_807_);
v___x_812_ = lean_array_uset(v_bs_x27_805_, v_i_795_, v___x_811_);
v_i_795_ = v___x_810_;
v_bs_796_ = v___x_812_;
v___y_797_ = v_a_808_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___boxed(lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v___x_840_, lean_object* v_sz_841_, lean_object* v_i_842_, lean_object* v_bs_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
size_t v_sz_boxed_846_; size_t v_i_boxed_847_; lean_object* v_res_848_; 
v_sz_boxed_846_ = lean_unbox_usize(v_sz_841_);
lean_dec(v_sz_841_);
v_i_boxed_847_ = lean_unbox_usize(v_i_842_);
lean_dec(v_i_842_);
v_res_848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15(v_a_838_, v_a_839_, v___x_840_, v_sz_boxed_846_, v_i_boxed_847_, v_bs_843_, v___y_844_);
lean_dec(v_a_839_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8(lean_object* v_a_850_, lean_object* v___x_851_, size_t v_sz_852_, size_t v_i_853_, lean_object* v_bs_854_, lean_object* v___y_855_){
_start:
{
uint8_t v___x_857_; 
v___x_857_ = lean_usize_dec_lt(v_i_853_, v_sz_852_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec_ref(v___x_851_);
v___x_858_ = l_unsafeCast___redArg(v_bs_854_);
lean_dec_ref(v_bs_854_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
lean_ctor_set(v___x_859_, 1, v___y_855_);
return v___x_859_;
}
else
{
lean_object* v_v_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_v_860_ = lean_array_uget_borrowed(v_bs_854_, v_i_853_);
v___x_861_ = l_unsafeCast___redArg(v_v_860_);
v___x_862_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_a_850_, v___x_861_);
if (lean_obj_tag(v___x_862_) == 1)
{
lean_object* v_val_863_; lean_object* v___x_864_; lean_object* v_bs_x27_865_; size_t v___x_866_; size_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec(v___x_861_);
v_val_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_val_863_);
lean_dec_ref_known(v___x_862_, 1);
v___x_864_ = lean_unsigned_to_nat(0u);
v_bs_x27_865_ = lean_array_uset(v_bs_854_, v_i_853_, v___x_864_);
v___x_866_ = ((size_t)1ULL);
v___x_867_ = lean_usize_add(v_i_853_, v___x_866_);
v___x_868_ = l_unsafeCast___redArg(v_val_863_);
lean_dec(v_val_863_);
v___x_869_ = lean_array_uset(v_bs_x27_865_, v_i_853_, v___x_868_);
v_i_853_ = v___x_867_;
v_bs_854_ = v___x_869_;
goto _start;
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
lean_dec(v___x_862_);
lean_dec_ref(v_bs_854_);
v___x_871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___closed__0));
v___x_872_ = lean_string_append(v___x_851_, v___x_871_);
v___x_873_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_861_, v___x_857_);
v___x_874_ = lean_string_append(v___x_872_, v___x_873_);
lean_dec_ref(v___x_873_);
v___x_875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___closed__1));
v___x_876_ = lean_string_append(v___x_874_, v___x_875_);
v___x_877_ = 3;
v___x_878_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_878_, 0, v___x_876_);
lean_ctor_set_uint8(v___x_878_, sizeof(void*)*1, v___x_877_);
v___x_879_ = lean_array_get_size(v___y_855_);
v___x_880_ = lean_array_push(v___y_855_, v___x_878_);
v___x_881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
return v___x_881_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___boxed(lean_object* v_a_882_, lean_object* v___x_883_, lean_object* v_sz_884_, lean_object* v_i_885_, lean_object* v_bs_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
size_t v_sz_boxed_889_; size_t v_i_boxed_890_; lean_object* v_res_891_; 
v_sz_boxed_889_ = lean_unbox_usize(v_sz_884_);
lean_dec(v_sz_884_);
v_i_boxed_890_ = lean_unbox_usize(v_i_885_);
lean_dec(v_i_885_);
v_res_891_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8(v_a_882_, v___x_883_, v_sz_boxed_889_, v_i_boxed_890_, v_bs_886_, v___y_887_);
lean_dec(v_a_882_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__10(lean_object* v_env_892_, lean_object* v_opts_893_, size_t v_sz_894_, size_t v_i_895_, lean_object* v_bs_896_){
_start:
{
uint8_t v___x_897_; 
v___x_897_ = lean_usize_dec_lt(v_i_895_, v_sz_894_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec_ref(v_env_892_);
v___x_898_ = l_unsafeCast___redArg(v_bs_896_);
lean_dec_ref(v_bs_896_);
v___x_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
else
{
lean_object* v___x_900_; lean_object* v_v_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_900_ = l_Lake_instImpl_00___x40_Lake_Config_Dependency_35947708____hygCtx___hyg_24_;
v_v_901_ = lean_array_uget_borrowed(v_bs_896_, v_i_895_);
v___x_902_ = l_unsafeCast___redArg(v_v_901_);
lean_inc_ref(v_env_892_);
v___x_903_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_892_, v_opts_893_, v___x_900_, v___x_902_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_bs_896_);
lean_dec_ref(v_env_892_);
v_a_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_913_; lean_object* v_bs_x27_914_; size_t v___x_915_; size_t v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v_a_912_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_903_, 1);
v___x_913_ = lean_unsigned_to_nat(0u);
v_bs_x27_914_ = lean_array_uset(v_bs_896_, v_i_895_, v___x_913_);
v___x_915_ = ((size_t)1ULL);
v___x_916_ = lean_usize_add(v_i_895_, v___x_915_);
v___x_917_ = l_unsafeCast___redArg(v_a_912_);
lean_dec(v_a_912_);
v___x_918_ = lean_array_uset(v_bs_x27_914_, v_i_895_, v___x_917_);
v_i_895_ = v___x_916_;
v_bs_896_ = v___x_918_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__10___boxed(lean_object* v_env_920_, lean_object* v_opts_921_, lean_object* v_sz_922_, lean_object* v_i_923_, lean_object* v_bs_924_){
_start:
{
size_t v_sz_boxed_925_; size_t v_i_boxed_926_; lean_object* v_res_927_; 
v_sz_boxed_925_ = lean_unbox_usize(v_sz_922_);
lean_dec(v_sz_922_);
v_i_boxed_926_ = lean_unbox_usize(v_i_923_);
lean_dec(v_i_923_);
v_res_927_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__10(v_env_920_, v_opts_921_, v_sz_boxed_925_, v_i_boxed_926_, v_bs_924_);
lean_dec_ref(v_opts_921_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__13(lean_object* v_env_928_, lean_object* v_opts_929_, lean_object* v_as_930_, size_t v_sz_931_, size_t v_i_932_, lean_object* v_b_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = lean_usize_dec_lt(v_i_932_, v_sz_931_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; 
lean_dec_ref(v_env_928_);
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v_b_933_);
return v___x_935_;
}
else
{
lean_object* v___x_936_; lean_object* v_a_937_; lean_object* v___x_938_; 
v___x_936_ = l_Lake_instTypeNamePackageFacetDecl;
v_a_937_ = lean_array_uget_borrowed(v_as_930_, v_i_932_);
lean_inc(v_a_937_);
lean_inc_ref(v_env_928_);
v___x_938_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_928_, v_opts_929_, v___x_936_, v_a_937_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_dec_ref(v_b_933_);
lean_dec_ref(v_env_928_);
v_a_939_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_938_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_938_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
else
{
lean_object* v_a_947_; lean_object* v_name_948_; lean_object* v_config_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_960_; 
v_a_947_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_938_, 1);
v_name_948_ = lean_ctor_get(v_a_947_, 0);
v_config_949_ = lean_ctor_get(v_a_947_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v_a_947_);
if (v_isSharedCheck_960_ == 0)
{
v___x_951_ = v_a_947_;
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_config_949_);
lean_inc(v_name_948_);
lean_dec(v_a_947_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_name_948_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_config_949_);
v___x_954_ = v_reuseFailAlloc_959_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_955_; size_t v___x_956_; size_t v___x_957_; 
v___x_955_ = lean_array_push(v_b_933_, v___x_954_);
v___x_956_ = ((size_t)1ULL);
v___x_957_ = lean_usize_add(v_i_932_, v___x_956_);
v_i_932_ = v___x_957_;
v_b_933_ = v___x_955_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__13___boxed(lean_object* v_env_961_, lean_object* v_opts_962_, lean_object* v_as_963_, lean_object* v_sz_964_, lean_object* v_i_965_, lean_object* v_b_966_){
_start:
{
size_t v_sz_boxed_967_; size_t v_i_boxed_968_; lean_object* v_res_969_; 
v_sz_boxed_967_ = lean_unbox_usize(v_sz_964_);
lean_dec(v_sz_964_);
v_i_boxed_968_ = lean_unbox_usize(v_i_965_);
lean_dec(v_i_965_);
v_res_969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__13(v_env_961_, v_opts_962_, v_as_963_, v_sz_boxed_967_, v_i_boxed_968_, v_b_966_);
lean_dec_ref(v_as_963_);
lean_dec_ref(v_opts_962_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__14(lean_object* v_env_970_, lean_object* v_opts_971_, lean_object* v_as_972_, size_t v_sz_973_, size_t v_i_974_, lean_object* v_b_975_){
_start:
{
uint8_t v___x_976_; 
v___x_976_ = lean_usize_dec_lt(v_i_974_, v_sz_973_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; 
lean_dec_ref(v_env_970_);
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v_b_975_);
return v___x_977_;
}
else
{
lean_object* v___x_978_; lean_object* v_a_979_; lean_object* v___x_980_; 
v___x_978_ = l_Lake_instTypeNameLibraryFacetDecl;
v_a_979_ = lean_array_uget_borrowed(v_as_972_, v_i_974_);
lean_inc(v_a_979_);
lean_inc_ref(v_env_970_);
v___x_980_ = l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg(v_env_970_, v_opts_971_, v___x_978_, v_a_979_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec_ref(v_b_975_);
lean_dec_ref(v_env_970_);
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v_name_990_; lean_object* v_config_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1002_; 
v_a_989_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_980_, 1);
v_name_990_ = lean_ctor_get(v_a_989_, 0);
v_config_991_ = lean_ctor_get(v_a_989_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_a_989_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_993_ = v_a_989_;
v_isShared_994_ = v_isSharedCheck_1002_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_config_991_);
lean_inc(v_name_990_);
lean_dec(v_a_989_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1002_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_name_990_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_config_991_);
v___x_996_ = v_reuseFailAlloc_1001_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
lean_object* v___x_997_; size_t v___x_998_; size_t v___x_999_; 
v___x_997_ = lean_array_push(v_b_975_, v___x_996_);
v___x_998_ = ((size_t)1ULL);
v___x_999_ = lean_usize_add(v_i_974_, v___x_998_);
v_i_974_ = v___x_999_;
v_b_975_ = v___x_997_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__14___boxed(lean_object* v_env_1003_, lean_object* v_opts_1004_, lean_object* v_as_1005_, lean_object* v_sz_1006_, lean_object* v_i_1007_, lean_object* v_b_1008_){
_start:
{
size_t v_sz_boxed_1009_; size_t v_i_boxed_1010_; lean_object* v_res_1011_; 
v_sz_boxed_1009_ = lean_unbox_usize(v_sz_1006_);
lean_dec(v_sz_1006_);
v_i_boxed_1010_ = lean_unbox_usize(v_i_1007_);
lean_dec(v_i_1007_);
v_res_1011_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__14(v_env_1003_, v_opts_1004_, v_as_1005_, v_sz_boxed_1009_, v_i_boxed_1010_, v_b_1008_);
lean_dec_ref(v_as_1005_);
lean_dec_ref(v_opts_1004_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg(lean_object* v_t_1012_, lean_object* v_k_1013_){
_start:
{
if (lean_obj_tag(v_t_1012_) == 0)
{
lean_object* v_k_1014_; lean_object* v_v_1015_; lean_object* v_l_1016_; lean_object* v_r_1017_; uint8_t v___x_1018_; 
v_k_1014_ = lean_ctor_get(v_t_1012_, 1);
v_v_1015_ = lean_ctor_get(v_t_1012_, 2);
v_l_1016_ = lean_ctor_get(v_t_1012_, 3);
v_r_1017_ = lean_ctor_get(v_t_1012_, 4);
v___x_1018_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1013_, v_k_1014_);
switch(v___x_1018_)
{
case 0:
{
v_t_1012_ = v_l_1016_;
goto _start;
}
case 1:
{
lean_object* v___x_1020_; 
lean_inc(v_v_1015_);
v___x_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1020_, 0, v_v_1015_);
return v___x_1020_;
}
default: 
{
v_t_1012_ = v_r_1017_;
goto _start;
}
}
}
else
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_box(0);
return v___x_1022_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg___boxed(lean_object* v_t_1023_, lean_object* v_k_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg(v_t_1023_, v_k_1024_);
lean_dec(v_k_1024_);
lean_dec(v_t_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2___redArg(lean_object* v_k_1026_, lean_object* v_v_1027_, lean_object* v_t_1028_){
_start:
{
if (lean_obj_tag(v_t_1028_) == 0)
{
lean_object* v_size_1029_; lean_object* v_k_1030_; lean_object* v_v_1031_; lean_object* v_l_1032_; lean_object* v_r_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1313_; 
v_size_1029_ = lean_ctor_get(v_t_1028_, 0);
v_k_1030_ = lean_ctor_get(v_t_1028_, 1);
v_v_1031_ = lean_ctor_get(v_t_1028_, 2);
v_l_1032_ = lean_ctor_get(v_t_1028_, 3);
v_r_1033_ = lean_ctor_get(v_t_1028_, 4);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_t_1028_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1035_ = v_t_1028_;
v_isShared_1036_ = v_isSharedCheck_1313_;
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
v_isShared_1036_ = v_isSharedCheck_1313_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
uint8_t v___x_1037_; 
v___x_1037_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1026_, v_k_1030_);
switch(v___x_1037_)
{
case 0:
{
lean_object* v_impl_1038_; lean_object* v___x_1039_; 
lean_dec(v_size_1029_);
v_impl_1038_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2___redArg(v_k_1026_, v_v_1027_, v_l_1032_);
v___x_1039_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1033_) == 0)
{
lean_object* v_size_1040_; lean_object* v_size_1041_; lean_object* v_k_1042_; lean_object* v_v_1043_; lean_object* v_l_1044_; lean_object* v_r_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v_size_1040_ = lean_ctor_get(v_r_1033_, 0);
v_size_1041_ = lean_ctor_get(v_impl_1038_, 0);
lean_inc(v_size_1041_);
v_k_1042_ = lean_ctor_get(v_impl_1038_, 1);
lean_inc(v_k_1042_);
v_v_1043_ = lean_ctor_get(v_impl_1038_, 2);
lean_inc(v_v_1043_);
v_l_1044_ = lean_ctor_get(v_impl_1038_, 3);
lean_inc(v_l_1044_);
v_r_1045_ = lean_ctor_get(v_impl_1038_, 4);
lean_inc(v_r_1045_);
v___x_1046_ = lean_unsigned_to_nat(3u);
v___x_1047_ = lean_nat_mul(v___x_1046_, v_size_1040_);
v___x_1048_ = lean_nat_dec_lt(v___x_1047_, v_size_1041_);
lean_dec(v___x_1047_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
lean_dec(v_r_1045_);
lean_dec(v_l_1044_);
lean_dec(v_v_1043_);
lean_dec(v_k_1042_);
v___x_1049_ = lean_nat_add(v___x_1039_, v_size_1041_);
lean_dec(v_size_1041_);
v___x_1050_ = lean_nat_add(v___x_1049_, v_size_1040_);
lean_dec(v___x_1049_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 3, v_impl_1038_);
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
lean_ctor_set(v_reuseFailAlloc_1053_, 3, v_impl_1038_);
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
lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1119_; 
v_isSharedCheck_1119_ = !lean_is_exclusive(v_impl_1038_);
if (v_isSharedCheck_1119_ == 0)
{
lean_object* v_unused_1120_; lean_object* v_unused_1121_; lean_object* v_unused_1122_; lean_object* v_unused_1123_; lean_object* v_unused_1124_; 
v_unused_1120_ = lean_ctor_get(v_impl_1038_, 4);
lean_dec(v_unused_1120_);
v_unused_1121_ = lean_ctor_get(v_impl_1038_, 3);
lean_dec(v_unused_1121_);
v_unused_1122_ = lean_ctor_get(v_impl_1038_, 2);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_impl_1038_, 1);
lean_dec(v_unused_1123_);
v_unused_1124_ = lean_ctor_get(v_impl_1038_, 0);
lean_dec(v_unused_1124_);
v___x_1055_ = v_impl_1038_;
v_isShared_1056_ = v_isSharedCheck_1119_;
goto v_resetjp_1054_;
}
else
{
lean_dec(v_impl_1038_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1119_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v_size_1057_; lean_object* v_size_1058_; lean_object* v_k_1059_; lean_object* v_v_1060_; lean_object* v_l_1061_; lean_object* v_r_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_size_1057_ = lean_ctor_get(v_l_1044_, 0);
v_size_1058_ = lean_ctor_get(v_r_1045_, 0);
v_k_1059_ = lean_ctor_get(v_r_1045_, 1);
v_v_1060_ = lean_ctor_get(v_r_1045_, 2);
v_l_1061_ = lean_ctor_get(v_r_1045_, 3);
v_r_1062_ = lean_ctor_get(v_r_1045_, 4);
v___x_1063_ = lean_unsigned_to_nat(2u);
v___x_1064_ = lean_nat_mul(v___x_1063_, v_size_1057_);
v___x_1065_ = lean_nat_dec_lt(v_size_1058_, v___x_1064_);
lean_dec(v___x_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1094_; 
lean_inc(v_r_1062_);
lean_inc(v_l_1061_);
lean_inc(v_v_1060_);
lean_inc(v_k_1059_);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_r_1045_);
if (v_isSharedCheck_1094_ == 0)
{
lean_object* v_unused_1095_; lean_object* v_unused_1096_; lean_object* v_unused_1097_; lean_object* v_unused_1098_; lean_object* v_unused_1099_; 
v_unused_1095_ = lean_ctor_get(v_r_1045_, 4);
lean_dec(v_unused_1095_);
v_unused_1096_ = lean_ctor_get(v_r_1045_, 3);
lean_dec(v_unused_1096_);
v_unused_1097_ = lean_ctor_get(v_r_1045_, 2);
lean_dec(v_unused_1097_);
v_unused_1098_ = lean_ctor_get(v_r_1045_, 1);
lean_dec(v_unused_1098_);
v_unused_1099_ = lean_ctor_get(v_r_1045_, 0);
lean_dec(v_unused_1099_);
v___x_1067_ = v_r_1045_;
v_isShared_1068_ = v_isSharedCheck_1094_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v_r_1045_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1094_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___x_1082_; lean_object* v___y_1084_; 
v___x_1069_ = lean_nat_add(v___x_1039_, v_size_1041_);
lean_dec(v_size_1041_);
v___x_1070_ = lean_nat_add(v___x_1069_, v_size_1040_);
lean_dec(v___x_1069_);
v___x_1082_ = lean_nat_add(v___x_1039_, v_size_1057_);
if (lean_obj_tag(v_l_1061_) == 0)
{
lean_object* v_size_1092_; 
v_size_1092_ = lean_ctor_get(v_l_1061_, 0);
lean_inc(v_size_1092_);
v___y_1084_ = v_size_1092_;
goto v___jp_1083_;
}
else
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_unsigned_to_nat(0u);
v___y_1084_ = v___x_1093_;
goto v___jp_1083_;
}
v___jp_1071_:
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1075_ = lean_nat_add(v___y_1072_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec(v___y_1072_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 4, v_r_1033_);
lean_ctor_set(v___x_1067_, 3, v_r_1062_);
lean_ctor_set(v___x_1067_, 2, v_v_1031_);
lean_ctor_set(v___x_1067_, 1, v_k_1030_);
lean_ctor_set(v___x_1067_, 0, v___x_1075_);
v___x_1077_ = v___x_1067_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1081_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1081_, 3, v_r_1062_);
lean_ctor_set(v_reuseFailAlloc_1081_, 4, v_r_1033_);
v___x_1077_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
lean_object* v___x_1079_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 4, v___x_1077_);
lean_ctor_set(v___x_1055_, 3, v___y_1073_);
lean_ctor_set(v___x_1055_, 2, v_v_1060_);
lean_ctor_set(v___x_1055_, 1, v_k_1059_);
lean_ctor_set(v___x_1055_, 0, v___x_1070_);
v___x_1079_ = v___x_1055_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1070_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v_k_1059_);
lean_ctor_set(v_reuseFailAlloc_1080_, 2, v_v_1060_);
lean_ctor_set(v_reuseFailAlloc_1080_, 3, v___y_1073_);
lean_ctor_set(v_reuseFailAlloc_1080_, 4, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
v___jp_1083_:
{
lean_object* v___x_1085_; lean_object* v___x_1087_; 
v___x_1085_ = lean_nat_add(v___x_1082_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec(v___x_1082_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_l_1061_);
lean_ctor_set(v___x_1035_, 3, v_l_1044_);
lean_ctor_set(v___x_1035_, 2, v_v_1043_);
lean_ctor_set(v___x_1035_, 1, v_k_1042_);
lean_ctor_set(v___x_1035_, 0, v___x_1085_);
v___x_1087_ = v___x_1035_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_k_1042_);
lean_ctor_set(v_reuseFailAlloc_1091_, 2, v_v_1043_);
lean_ctor_set(v_reuseFailAlloc_1091_, 3, v_l_1044_);
lean_ctor_set(v_reuseFailAlloc_1091_, 4, v_l_1061_);
v___x_1087_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_nat_add(v___x_1039_, v_size_1040_);
if (lean_obj_tag(v_r_1062_) == 0)
{
lean_object* v_size_1089_; 
v_size_1089_ = lean_ctor_get(v_r_1062_, 0);
lean_inc(v_size_1089_);
v___y_1072_ = v___x_1088_;
v___y_1073_ = v___x_1087_;
v___y_1074_ = v_size_1089_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_unsigned_to_nat(0u);
v___y_1072_ = v___x_1088_;
v___y_1073_ = v___x_1087_;
v___y_1074_ = v___x_1090_;
goto v___jp_1071_;
}
}
}
}
}
else
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; 
lean_del_object(v___x_1035_);
v___x_1100_ = lean_nat_add(v___x_1039_, v_size_1041_);
lean_dec(v_size_1041_);
v___x_1101_ = lean_nat_add(v___x_1100_, v_size_1040_);
lean_dec(v___x_1100_);
v___x_1102_ = lean_nat_add(v___x_1039_, v_size_1040_);
v___x_1103_ = lean_nat_add(v___x_1102_, v_size_1058_);
lean_dec(v___x_1102_);
lean_inc_ref(v_r_1033_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 4, v_r_1033_);
lean_ctor_set(v___x_1055_, 3, v_r_1045_);
lean_ctor_set(v___x_1055_, 2, v_v_1031_);
lean_ctor_set(v___x_1055_, 1, v_k_1030_);
lean_ctor_set(v___x_1055_, 0, v___x_1103_);
v___x_1105_ = v___x_1055_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1103_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1118_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1118_, 3, v_r_1045_);
lean_ctor_set(v_reuseFailAlloc_1118_, 4, v_r_1033_);
v___x_1105_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_isSharedCheck_1112_ = !lean_is_exclusive(v_r_1033_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; lean_object* v_unused_1114_; lean_object* v_unused_1115_; lean_object* v_unused_1116_; lean_object* v_unused_1117_; 
v_unused_1113_ = lean_ctor_get(v_r_1033_, 4);
lean_dec(v_unused_1113_);
v_unused_1114_ = lean_ctor_get(v_r_1033_, 3);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v_r_1033_, 2);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v_r_1033_, 1);
lean_dec(v_unused_1116_);
v_unused_1117_ = lean_ctor_get(v_r_1033_, 0);
lean_dec(v_unused_1117_);
v___x_1107_ = v_r_1033_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_dec(v_r_1033_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 4, v___x_1105_);
lean_ctor_set(v___x_1107_, 3, v_l_1044_);
lean_ctor_set(v___x_1107_, 2, v_v_1043_);
lean_ctor_set(v___x_1107_, 1, v_k_1042_);
lean_ctor_set(v___x_1107_, 0, v___x_1101_);
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_k_1042_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_v_1043_);
lean_ctor_set(v_reuseFailAlloc_1111_, 3, v_l_1044_);
lean_ctor_set(v_reuseFailAlloc_1111_, 4, v___x_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1125_; 
v_l_1125_ = lean_ctor_get(v_impl_1038_, 3);
lean_inc(v_l_1125_);
if (lean_obj_tag(v_l_1125_) == 0)
{
lean_object* v_r_1126_; lean_object* v_k_1127_; lean_object* v_v_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1139_; 
v_r_1126_ = lean_ctor_get(v_impl_1038_, 4);
v_k_1127_ = lean_ctor_get(v_impl_1038_, 1);
v_v_1128_ = lean_ctor_get(v_impl_1038_, 2);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_impl_1038_);
if (v_isSharedCheck_1139_ == 0)
{
lean_object* v_unused_1140_; lean_object* v_unused_1141_; 
v_unused_1140_ = lean_ctor_get(v_impl_1038_, 3);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v_impl_1038_, 0);
lean_dec(v_unused_1141_);
v___x_1130_ = v_impl_1038_;
v_isShared_1131_ = v_isSharedCheck_1139_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_r_1126_);
lean_inc(v_v_1128_);
lean_inc(v_k_1127_);
lean_dec(v_impl_1038_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1139_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1134_; 
v___x_1132_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1126_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 3, v_r_1126_);
lean_ctor_set(v___x_1130_, 2, v_v_1031_);
lean_ctor_set(v___x_1130_, 1, v_k_1030_);
lean_ctor_set(v___x_1130_, 0, v___x_1039_);
v___x_1134_ = v___x_1130_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1138_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1138_, 3, v_r_1126_);
lean_ctor_set(v_reuseFailAlloc_1138_, 4, v_r_1126_);
v___x_1134_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1136_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1134_);
lean_ctor_set(v___x_1035_, 3, v_l_1125_);
lean_ctor_set(v___x_1035_, 2, v_v_1128_);
lean_ctor_set(v___x_1035_, 1, v_k_1127_);
lean_ctor_set(v___x_1035_, 0, v___x_1132_);
v___x_1136_ = v___x_1035_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1132_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_k_1127_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_v_1128_);
lean_ctor_set(v_reuseFailAlloc_1137_, 3, v_l_1125_);
lean_ctor_set(v_reuseFailAlloc_1137_, 4, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
else
{
lean_object* v_r_1142_; 
v_r_1142_ = lean_ctor_get(v_impl_1038_, 4);
lean_inc(v_r_1142_);
if (lean_obj_tag(v_r_1142_) == 0)
{
lean_object* v_k_1143_; lean_object* v_v_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1167_; 
v_k_1143_ = lean_ctor_get(v_impl_1038_, 1);
v_v_1144_ = lean_ctor_get(v_impl_1038_, 2);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_impl_1038_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; lean_object* v_unused_1169_; lean_object* v_unused_1170_; 
v_unused_1168_ = lean_ctor_get(v_impl_1038_, 4);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v_impl_1038_, 3);
lean_dec(v_unused_1169_);
v_unused_1170_ = lean_ctor_get(v_impl_1038_, 0);
lean_dec(v_unused_1170_);
v___x_1146_ = v_impl_1038_;
v_isShared_1147_ = v_isSharedCheck_1167_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_v_1144_);
lean_inc(v_k_1143_);
lean_dec(v_impl_1038_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1167_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_k_1148_; lean_object* v_v_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1163_; 
v_k_1148_ = lean_ctor_get(v_r_1142_, 1);
v_v_1149_ = lean_ctor_get(v_r_1142_, 2);
v_isSharedCheck_1163_ = !lean_is_exclusive(v_r_1142_);
if (v_isSharedCheck_1163_ == 0)
{
lean_object* v_unused_1164_; lean_object* v_unused_1165_; lean_object* v_unused_1166_; 
v_unused_1164_ = lean_ctor_get(v_r_1142_, 4);
lean_dec(v_unused_1164_);
v_unused_1165_ = lean_ctor_get(v_r_1142_, 3);
lean_dec(v_unused_1165_);
v_unused_1166_ = lean_ctor_get(v_r_1142_, 0);
lean_dec(v_unused_1166_);
v___x_1151_ = v_r_1142_;
v_isShared_1152_ = v_isSharedCheck_1163_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_v_1149_);
lean_inc(v_k_1148_);
lean_dec(v_r_1142_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1163_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1153_ = lean_unsigned_to_nat(3u);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 4, v_l_1125_);
lean_ctor_set(v___x_1151_, 3, v_l_1125_);
lean_ctor_set(v___x_1151_, 2, v_v_1144_);
lean_ctor_set(v___x_1151_, 1, v_k_1143_);
lean_ctor_set(v___x_1151_, 0, v___x_1039_);
v___x_1155_ = v___x_1151_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v_k_1143_);
lean_ctor_set(v_reuseFailAlloc_1162_, 2, v_v_1144_);
lean_ctor_set(v_reuseFailAlloc_1162_, 3, v_l_1125_);
lean_ctor_set(v_reuseFailAlloc_1162_, 4, v_l_1125_);
v___x_1155_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1157_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 4, v_l_1125_);
lean_ctor_set(v___x_1146_, 2, v_v_1031_);
lean_ctor_set(v___x_1146_, 1, v_k_1030_);
lean_ctor_set(v___x_1146_, 0, v___x_1039_);
v___x_1157_ = v___x_1146_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1161_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1161_, 3, v_l_1125_);
lean_ctor_set(v_reuseFailAlloc_1161_, 4, v_l_1125_);
v___x_1157_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1159_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1157_);
lean_ctor_set(v___x_1035_, 3, v___x_1155_);
lean_ctor_set(v___x_1035_, 2, v_v_1149_);
lean_ctor_set(v___x_1035_, 1, v_k_1148_);
lean_ctor_set(v___x_1035_, 0, v___x_1153_);
v___x_1159_ = v___x_1035_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1153_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_k_1148_);
lean_ctor_set(v_reuseFailAlloc_1160_, 2, v_v_1149_);
lean_ctor_set(v_reuseFailAlloc_1160_, 3, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1160_, 4, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1173_; 
v___x_1171_ = lean_unsigned_to_nat(2u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_r_1142_);
lean_ctor_set(v___x_1035_, 3, v_impl_1038_);
lean_ctor_set(v___x_1035_, 0, v___x_1171_);
v___x_1173_ = v___x_1035_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1174_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1174_, 3, v_impl_1038_);
lean_ctor_set(v_reuseFailAlloc_1174_, 4, v_r_1142_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1176_; 
lean_dec(v_v_1031_);
lean_dec(v_k_1030_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v_v_1027_);
lean_ctor_set(v___x_1035_, 1, v_k_1026_);
v___x_1176_ = v___x_1035_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_size_1029_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_k_1026_);
lean_ctor_set(v_reuseFailAlloc_1177_, 2, v_v_1027_);
lean_ctor_set(v_reuseFailAlloc_1177_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1177_, 4, v_r_1033_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
default: 
{
lean_object* v_impl_1178_; lean_object* v___x_1179_; 
lean_dec(v_size_1029_);
v_impl_1178_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2___redArg(v_k_1026_, v_v_1027_, v_r_1033_);
v___x_1179_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1032_) == 0)
{
lean_object* v_size_1180_; lean_object* v_size_1181_; lean_object* v_k_1182_; lean_object* v_v_1183_; lean_object* v_l_1184_; lean_object* v_r_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
v_size_1180_ = lean_ctor_get(v_l_1032_, 0);
v_size_1181_ = lean_ctor_get(v_impl_1178_, 0);
lean_inc(v_size_1181_);
v_k_1182_ = lean_ctor_get(v_impl_1178_, 1);
lean_inc(v_k_1182_);
v_v_1183_ = lean_ctor_get(v_impl_1178_, 2);
lean_inc(v_v_1183_);
v_l_1184_ = lean_ctor_get(v_impl_1178_, 3);
lean_inc(v_l_1184_);
v_r_1185_ = lean_ctor_get(v_impl_1178_, 4);
lean_inc(v_r_1185_);
v___x_1186_ = lean_unsigned_to_nat(3u);
v___x_1187_ = lean_nat_mul(v___x_1186_, v_size_1180_);
v___x_1188_ = lean_nat_dec_lt(v___x_1187_, v_size_1181_);
lean_dec(v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1192_; 
lean_dec(v_r_1185_);
lean_dec(v_l_1184_);
lean_dec(v_v_1183_);
lean_dec(v_k_1182_);
v___x_1189_ = lean_nat_add(v___x_1179_, v_size_1180_);
v___x_1190_ = lean_nat_add(v___x_1189_, v_size_1181_);
lean_dec(v_size_1181_);
lean_dec(v___x_1189_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_impl_1178_);
lean_ctor_set(v___x_1035_, 0, v___x_1190_);
v___x_1192_ = v___x_1035_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1190_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1193_, 4, v_impl_1178_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
else
{
lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1257_; 
v_isSharedCheck_1257_ = !lean_is_exclusive(v_impl_1178_);
if (v_isSharedCheck_1257_ == 0)
{
lean_object* v_unused_1258_; lean_object* v_unused_1259_; lean_object* v_unused_1260_; lean_object* v_unused_1261_; lean_object* v_unused_1262_; 
v_unused_1258_ = lean_ctor_get(v_impl_1178_, 4);
lean_dec(v_unused_1258_);
v_unused_1259_ = lean_ctor_get(v_impl_1178_, 3);
lean_dec(v_unused_1259_);
v_unused_1260_ = lean_ctor_get(v_impl_1178_, 2);
lean_dec(v_unused_1260_);
v_unused_1261_ = lean_ctor_get(v_impl_1178_, 1);
lean_dec(v_unused_1261_);
v_unused_1262_ = lean_ctor_get(v_impl_1178_, 0);
lean_dec(v_unused_1262_);
v___x_1195_ = v_impl_1178_;
v_isShared_1196_ = v_isSharedCheck_1257_;
goto v_resetjp_1194_;
}
else
{
lean_dec(v_impl_1178_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1257_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v_size_1197_; lean_object* v_k_1198_; lean_object* v_v_1199_; lean_object* v_l_1200_; lean_object* v_r_1201_; lean_object* v_size_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v_size_1197_ = lean_ctor_get(v_l_1184_, 0);
v_k_1198_ = lean_ctor_get(v_l_1184_, 1);
v_v_1199_ = lean_ctor_get(v_l_1184_, 2);
v_l_1200_ = lean_ctor_get(v_l_1184_, 3);
v_r_1201_ = lean_ctor_get(v_l_1184_, 4);
v_size_1202_ = lean_ctor_get(v_r_1185_, 0);
v___x_1203_ = lean_unsigned_to_nat(2u);
v___x_1204_ = lean_nat_mul(v___x_1203_, v_size_1202_);
v___x_1205_ = lean_nat_dec_lt(v_size_1197_, v___x_1204_);
lean_dec(v___x_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1233_; 
lean_inc(v_r_1201_);
lean_inc(v_l_1200_);
lean_inc(v_v_1199_);
lean_inc(v_k_1198_);
v_isSharedCheck_1233_ = !lean_is_exclusive(v_l_1184_);
if (v_isSharedCheck_1233_ == 0)
{
lean_object* v_unused_1234_; lean_object* v_unused_1235_; lean_object* v_unused_1236_; lean_object* v_unused_1237_; lean_object* v_unused_1238_; 
v_unused_1234_ = lean_ctor_get(v_l_1184_, 4);
lean_dec(v_unused_1234_);
v_unused_1235_ = lean_ctor_get(v_l_1184_, 3);
lean_dec(v_unused_1235_);
v_unused_1236_ = lean_ctor_get(v_l_1184_, 2);
lean_dec(v_unused_1236_);
v_unused_1237_ = lean_ctor_get(v_l_1184_, 1);
lean_dec(v_unused_1237_);
v_unused_1238_ = lean_ctor_get(v_l_1184_, 0);
lean_dec(v_unused_1238_);
v___x_1207_ = v_l_1184_;
v_isShared_1208_ = v_isSharedCheck_1233_;
goto v_resetjp_1206_;
}
else
{
lean_dec(v_l_1184_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1233_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1223_; 
v___x_1209_ = lean_nat_add(v___x_1179_, v_size_1180_);
v___x_1210_ = lean_nat_add(v___x_1209_, v_size_1181_);
lean_dec(v_size_1181_);
if (lean_obj_tag(v_l_1200_) == 0)
{
lean_object* v_size_1231_; 
v_size_1231_ = lean_ctor_get(v_l_1200_, 0);
lean_inc(v_size_1231_);
v___y_1223_ = v_size_1231_;
goto v___jp_1222_;
}
else
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_unsigned_to_nat(0u);
v___y_1223_ = v___x_1232_;
goto v___jp_1222_;
}
v___jp_1211_:
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
v___x_1215_ = lean_nat_add(v___y_1212_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec(v___y_1212_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 4, v_r_1185_);
lean_ctor_set(v___x_1207_, 3, v_r_1201_);
lean_ctor_set(v___x_1207_, 2, v_v_1183_);
lean_ctor_set(v___x_1207_, 1, v_k_1182_);
lean_ctor_set(v___x_1207_, 0, v___x_1215_);
v___x_1217_ = v___x_1207_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_k_1182_);
lean_ctor_set(v_reuseFailAlloc_1221_, 2, v_v_1183_);
lean_ctor_set(v_reuseFailAlloc_1221_, 3, v_r_1201_);
lean_ctor_set(v_reuseFailAlloc_1221_, 4, v_r_1185_);
v___x_1217_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
lean_object* v___x_1219_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 4, v___x_1217_);
lean_ctor_set(v___x_1195_, 3, v___y_1213_);
lean_ctor_set(v___x_1195_, 2, v_v_1199_);
lean_ctor_set(v___x_1195_, 1, v_k_1198_);
lean_ctor_set(v___x_1195_, 0, v___x_1210_);
v___x_1219_ = v___x_1195_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_k_1198_);
lean_ctor_set(v_reuseFailAlloc_1220_, 2, v_v_1199_);
lean_ctor_set(v_reuseFailAlloc_1220_, 3, v___y_1213_);
lean_ctor_set(v_reuseFailAlloc_1220_, 4, v___x_1217_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
v___jp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1224_ = lean_nat_add(v___x_1209_, v___y_1223_);
lean_dec(v___y_1223_);
lean_dec(v___x_1209_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_l_1200_);
lean_ctor_set(v___x_1035_, 0, v___x_1224_);
v___x_1226_ = v___x_1035_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1230_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1230_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1230_, 4, v_l_1200_);
v___x_1226_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_nat_add(v___x_1179_, v_size_1202_);
if (lean_obj_tag(v_r_1201_) == 0)
{
lean_object* v_size_1228_; 
v_size_1228_ = lean_ctor_get(v_r_1201_, 0);
lean_inc(v_size_1228_);
v___y_1212_ = v___x_1227_;
v___y_1213_ = v___x_1226_;
v___y_1214_ = v_size_1228_;
goto v___jp_1211_;
}
else
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_unsigned_to_nat(0u);
v___y_1212_ = v___x_1227_;
v___y_1213_ = v___x_1226_;
v___y_1214_ = v___x_1229_;
goto v___jp_1211_;
}
}
}
}
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1243_; 
lean_del_object(v___x_1035_);
v___x_1239_ = lean_nat_add(v___x_1179_, v_size_1180_);
v___x_1240_ = lean_nat_add(v___x_1239_, v_size_1181_);
lean_dec(v_size_1181_);
v___x_1241_ = lean_nat_add(v___x_1239_, v_size_1197_);
lean_dec(v___x_1239_);
lean_inc_ref(v_l_1032_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 4, v_l_1184_);
lean_ctor_set(v___x_1195_, 3, v_l_1032_);
lean_ctor_set(v___x_1195_, 2, v_v_1031_);
lean_ctor_set(v___x_1195_, 1, v_k_1030_);
lean_ctor_set(v___x_1195_, 0, v___x_1241_);
v___x_1243_ = v___x_1195_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1256_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1256_, 3, v_l_1032_);
lean_ctor_set(v_reuseFailAlloc_1256_, 4, v_l_1184_);
v___x_1243_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
v_isSharedCheck_1250_ = !lean_is_exclusive(v_l_1032_);
if (v_isSharedCheck_1250_ == 0)
{
lean_object* v_unused_1251_; lean_object* v_unused_1252_; lean_object* v_unused_1253_; lean_object* v_unused_1254_; lean_object* v_unused_1255_; 
v_unused_1251_ = lean_ctor_get(v_l_1032_, 4);
lean_dec(v_unused_1251_);
v_unused_1252_ = lean_ctor_get(v_l_1032_, 3);
lean_dec(v_unused_1252_);
v_unused_1253_ = lean_ctor_get(v_l_1032_, 2);
lean_dec(v_unused_1253_);
v_unused_1254_ = lean_ctor_get(v_l_1032_, 1);
lean_dec(v_unused_1254_);
v_unused_1255_ = lean_ctor_get(v_l_1032_, 0);
lean_dec(v_unused_1255_);
v___x_1245_ = v_l_1032_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_l_1032_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 4, v_r_1185_);
lean_ctor_set(v___x_1245_, 3, v___x_1243_);
lean_ctor_set(v___x_1245_, 2, v_v_1183_);
lean_ctor_set(v___x_1245_, 1, v_k_1182_);
lean_ctor_set(v___x_1245_, 0, v___x_1240_);
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_k_1182_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_v_1183_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1249_, 4, v_r_1185_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1263_; 
v_l_1263_ = lean_ctor_get(v_impl_1178_, 3);
lean_inc(v_l_1263_);
if (lean_obj_tag(v_l_1263_) == 0)
{
lean_object* v_r_1264_; lean_object* v_k_1265_; lean_object* v_v_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1289_; 
v_r_1264_ = lean_ctor_get(v_impl_1178_, 4);
v_k_1265_ = lean_ctor_get(v_impl_1178_, 1);
v_v_1266_ = lean_ctor_get(v_impl_1178_, 2);
v_isSharedCheck_1289_ = !lean_is_exclusive(v_impl_1178_);
if (v_isSharedCheck_1289_ == 0)
{
lean_object* v_unused_1290_; lean_object* v_unused_1291_; 
v_unused_1290_ = lean_ctor_get(v_impl_1178_, 3);
lean_dec(v_unused_1290_);
v_unused_1291_ = lean_ctor_get(v_impl_1178_, 0);
lean_dec(v_unused_1291_);
v___x_1268_ = v_impl_1178_;
v_isShared_1269_ = v_isSharedCheck_1289_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_r_1264_);
lean_inc(v_v_1266_);
lean_inc(v_k_1265_);
lean_dec(v_impl_1178_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1289_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v_k_1270_; lean_object* v_v_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1285_; 
v_k_1270_ = lean_ctor_get(v_l_1263_, 1);
v_v_1271_ = lean_ctor_get(v_l_1263_, 2);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_l_1263_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; lean_object* v_unused_1287_; lean_object* v_unused_1288_; 
v_unused_1286_ = lean_ctor_get(v_l_1263_, 4);
lean_dec(v_unused_1286_);
v_unused_1287_ = lean_ctor_get(v_l_1263_, 3);
lean_dec(v_unused_1287_);
v_unused_1288_ = lean_ctor_get(v_l_1263_, 0);
lean_dec(v_unused_1288_);
v___x_1273_ = v_l_1263_;
v_isShared_1274_ = v_isSharedCheck_1285_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_v_1271_);
lean_inc(v_k_1270_);
lean_dec(v_l_1263_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1285_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1275_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1264_, 2);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 4, v_r_1264_);
lean_ctor_set(v___x_1273_, 3, v_r_1264_);
lean_ctor_set(v___x_1273_, 2, v_v_1031_);
lean_ctor_set(v___x_1273_, 1, v_k_1030_);
lean_ctor_set(v___x_1273_, 0, v___x_1179_);
v___x_1277_ = v___x_1273_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1284_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1284_, 3, v_r_1264_);
lean_ctor_set(v_reuseFailAlloc_1284_, 4, v_r_1264_);
v___x_1277_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1279_; 
lean_inc(v_r_1264_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 3, v_r_1264_);
lean_ctor_set(v___x_1268_, 0, v___x_1179_);
v___x_1279_ = v___x_1268_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v_k_1265_);
lean_ctor_set(v_reuseFailAlloc_1283_, 2, v_v_1266_);
lean_ctor_set(v_reuseFailAlloc_1283_, 3, v_r_1264_);
lean_ctor_set(v_reuseFailAlloc_1283_, 4, v_r_1264_);
v___x_1279_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1281_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v___x_1279_);
lean_ctor_set(v___x_1035_, 3, v___x_1277_);
lean_ctor_set(v___x_1035_, 2, v_v_1271_);
lean_ctor_set(v___x_1035_, 1, v_k_1270_);
lean_ctor_set(v___x_1035_, 0, v___x_1275_);
v___x_1281_ = v___x_1035_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1275_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_k_1270_);
lean_ctor_set(v_reuseFailAlloc_1282_, 2, v_v_1271_);
lean_ctor_set(v_reuseFailAlloc_1282_, 3, v___x_1277_);
lean_ctor_set(v_reuseFailAlloc_1282_, 4, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
}
else
{
lean_object* v_r_1292_; 
v_r_1292_ = lean_ctor_get(v_impl_1178_, 4);
lean_inc(v_r_1292_);
if (lean_obj_tag(v_r_1292_) == 0)
{
lean_object* v_k_1293_; lean_object* v_v_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1305_; 
v_k_1293_ = lean_ctor_get(v_impl_1178_, 1);
v_v_1294_ = lean_ctor_get(v_impl_1178_, 2);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_impl_1178_);
if (v_isSharedCheck_1305_ == 0)
{
lean_object* v_unused_1306_; lean_object* v_unused_1307_; lean_object* v_unused_1308_; 
v_unused_1306_ = lean_ctor_get(v_impl_1178_, 4);
lean_dec(v_unused_1306_);
v_unused_1307_ = lean_ctor_get(v_impl_1178_, 3);
lean_dec(v_unused_1307_);
v_unused_1308_ = lean_ctor_get(v_impl_1178_, 0);
lean_dec(v_unused_1308_);
v___x_1296_ = v_impl_1178_;
v_isShared_1297_ = v_isSharedCheck_1305_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_v_1294_);
lean_inc(v_k_1293_);
lean_dec(v_impl_1178_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1305_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1298_; lean_object* v___x_1300_; 
v___x_1298_ = lean_unsigned_to_nat(3u);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 4, v_l_1263_);
lean_ctor_set(v___x_1296_, 2, v_v_1031_);
lean_ctor_set(v___x_1296_, 1, v_k_1030_);
lean_ctor_set(v___x_1296_, 0, v___x_1179_);
v___x_1300_ = v___x_1296_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1304_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1304_, 3, v_l_1263_);
lean_ctor_set(v_reuseFailAlloc_1304_, 4, v_l_1263_);
v___x_1300_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1302_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_r_1292_);
lean_ctor_set(v___x_1035_, 3, v___x_1300_);
lean_ctor_set(v___x_1035_, 2, v_v_1294_);
lean_ctor_set(v___x_1035_, 1, v_k_1293_);
lean_ctor_set(v___x_1035_, 0, v___x_1298_);
v___x_1302_ = v___x_1035_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v___x_1298_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v_k_1293_);
lean_ctor_set(v_reuseFailAlloc_1303_, 2, v_v_1294_);
lean_ctor_set(v_reuseFailAlloc_1303_, 3, v___x_1300_);
lean_ctor_set(v_reuseFailAlloc_1303_, 4, v_r_1292_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1309_ = lean_unsigned_to_nat(2u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_impl_1178_);
lean_ctor_set(v___x_1035_, 3, v_r_1292_);
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
lean_ctor_set(v_reuseFailAlloc_1312_, 3, v_r_1292_);
lean_ctor_set(v_reuseFailAlloc_1312_, 4, v_impl_1178_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
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
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_unsigned_to_nat(1u);
v___x_1315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
lean_ctor_set(v___x_1315_, 1, v_k_1026_);
lean_ctor_set(v___x_1315_, 2, v_v_1027_);
lean_ctor_set(v___x_1315_, 3, v_t_1028_);
lean_ctor_set(v___x_1315_, 4, v_t_1028_);
return v___x_1315_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg(lean_object* v___x_1319_, lean_object* v_as_1320_, size_t v_i_1321_, size_t v_stop_1322_, lean_object* v_b_1323_, lean_object* v___y_1324_){
_start:
{
uint8_t v___x_1326_; 
v___x_1326_ = lean_usize_dec_eq(v_i_1321_, v_stop_1322_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v_name_1328_; lean_object* v_kind_1329_; lean_object* v___x_1330_; 
v___x_1327_ = lean_array_uget_borrowed(v_as_1320_, v_i_1321_);
v_name_1328_ = lean_ctor_get(v___x_1327_, 1);
v_kind_1329_ = lean_ctor_get(v___x_1327_, 2);
v___x_1330_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg(v_b_1323_, v_name_1328_);
if (lean_obj_tag(v___x_1330_) == 1)
{
lean_object* v_val_1331_; lean_object* v_kind_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v_b_1323_);
v_val_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_val_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v_kind_1332_ = lean_ctor_get(v_val_1331_, 2);
lean_inc(v_kind_1332_);
lean_dec(v_val_1331_);
v___x_1333_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__0));
v___x_1334_ = lean_string_append(v___x_1319_, v___x_1333_);
v___x_1335_ = 1;
lean_inc(v_name_1328_);
v___x_1336_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1328_, v___x_1335_);
v___x_1337_ = lean_string_append(v___x_1334_, v___x_1336_);
lean_dec_ref(v___x_1336_);
v___x_1338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__1));
v___x_1339_ = lean_string_append(v___x_1337_, v___x_1338_);
v___x_1340_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1332_, v___x_1335_);
v___x_1341_ = lean_string_append(v___x_1339_, v___x_1340_);
lean_dec_ref(v___x_1340_);
v___x_1342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___closed__2));
v___x_1343_ = lean_string_append(v___x_1341_, v___x_1342_);
lean_inc(v_kind_1329_);
v___x_1344_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1329_, v___x_1335_);
v___x_1345_ = lean_string_append(v___x_1343_, v___x_1344_);
lean_dec_ref(v___x_1344_);
v___x_1346_ = ((lean_object*)(l___private_Lake_Load_Lean_Eval_0__Lake_unsafeEvalConstCheck___redArg___closed__1));
v___x_1347_ = lean_string_append(v___x_1345_, v___x_1346_);
v___x_1348_ = 3;
v___x_1349_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*1, v___x_1348_);
v___x_1350_ = lean_array_get_size(v___y_1324_);
v___x_1351_ = lean_array_push(v___y_1324_, v___x_1349_);
v___x_1352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; size_t v___x_1354_; size_t v___x_1355_; 
lean_dec(v___x_1330_);
lean_inc(v___x_1327_);
lean_inc(v_name_1328_);
v___x_1353_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2___redArg(v_name_1328_, v___x_1327_, v_b_1323_);
v___x_1354_ = ((size_t)1ULL);
v___x_1355_ = lean_usize_add(v_i_1321_, v___x_1354_);
v_i_1321_ = v___x_1355_;
v_b_1323_ = v___x_1353_;
goto _start;
}
}
else
{
lean_object* v___x_1357_; 
lean_dec_ref(v___x_1319_);
v___x_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1357_, 0, v_b_1323_);
lean_ctor_set(v___x_1357_, 1, v___y_1324_);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg___boxed(lean_object* v___x_1358_, lean_object* v_as_1359_, lean_object* v_i_1360_, lean_object* v_stop_1361_, lean_object* v_b_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
size_t v_i_boxed_1365_; size_t v_stop_boxed_1366_; lean_object* v_res_1367_; 
v_i_boxed_1365_ = lean_unbox_usize(v_i_1360_);
lean_dec(v_i_1360_);
v_stop_boxed_1366_ = lean_unbox_usize(v_stop_1361_);
lean_dec(v_stop_1361_);
v_res_1367_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg(v___x_1358_, v_as_1359_, v_i_boxed_1365_, v_stop_boxed_1366_, v_b_1362_, v___y_1363_);
lean_dec_ref(v_as_1359_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv(lean_object* v_env_1376_, lean_object* v_opts_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v_a_1381_; lean_object* v_a_1382_; lean_object* v_a_1385_; lean_object* v_a_1386_; lean_object* v___x_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1388_ = l_Lake_instImpl_00___x40_Lake_Config_ConfigDecl_1050678479____hygCtx___hyg_43_;
lean_inc_ref(v_opts_1377_);
lean_inc_ref_n(v_env_1376_, 2);
v___f_1389_ = lean_alloc_closure((void*)(l_Lake_LakefileConfig_loadFromEnv___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1389_, 0, v_env_1376_);
lean_closure_set(v___f_1389_, 1, v_opts_1377_);
lean_closure_set(v___f_1389_, 2, v___x_1388_);
v___x_1390_ = l_Lake_instTypeNameScriptFn;
v___x_1391_ = l___private_Lake_Load_Lean_Eval_0__Lake_PackageDecl_loadFromEnv(v_env_1376_, v_opts_1377_);
v___x_1392_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v___x_1391_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v_baseName_1394_; lean_object* v_keyName_1395_; lean_object* v_config_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___f_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v_baseName_1394_ = lean_ctor_get(v_a_1393_, 0);
v_keyName_1395_ = lean_ctor_get(v_a_1393_, 1);
v_config_1396_ = lean_ctor_get(v_a_1393_, 3);
v___x_1397_ = 0;
lean_inc(v_baseName_1394_);
v___x_1398_ = l_Lean_Name_toString(v_baseName_1394_, v___x_1397_);
v___x_1399_ = lean_box(v___x_1397_);
lean_inc_ref(v_opts_1377_);
lean_inc_ref_n(v_env_1376_, 2);
lean_inc_ref(v___x_1398_);
v___f_1400_ = lean_alloc_closure((void*)(l_Lake_LakefileConfig_loadFromEnv___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1400_, 0, v___x_1398_);
lean_closure_set(v___f_1400_, 1, v___x_1399_);
lean_closure_set(v___f_1400_, 2, v_env_1376_);
lean_closure_set(v___f_1400_, 3, v_opts_1377_);
lean_closure_set(v___f_1400_, 4, v___x_1390_);
v___x_1401_ = l_Lake_targetAttr;
v___x_1402_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg(v_env_1376_, v___x_1401_, v___f_1389_);
v___x_1403_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v___x_1402_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; lean_object* v_toArray_1405_; size_t v_sz_1406_; size_t v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_49066__overap_1412_; lean_object* v___x_1413_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1404_);
lean_dec_ref_known(v___x_1403_, 1);
v_toArray_1405_ = lean_ctor_get(v_a_1404_, 1);
v_sz_1406_ = lean_array_size(v_toArray_1405_);
v___x_1407_ = ((size_t)0ULL);
v___x_1408_ = l_unsafeCast___redArg(v_toArray_1405_);
v___x_1409_ = lean_box_usize(v_sz_1406_);
v___x_1410_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___boxed__const__1));
lean_inc(v_keyName_1395_);
v___x_1411_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__4___boxed), 6, 4);
lean_closure_set(v___x_1411_, 0, v_keyName_1395_);
lean_closure_set(v___x_1411_, 1, v___x_1409_);
lean_closure_set(v___x_1411_, 2, v___x_1410_);
lean_closure_set(v___x_1411_, 3, v___x_1408_);
v___x_49066__overap_1412_ = l_unsafeCast___redArg(v___x_1411_);
lean_dec_ref(v___x_1411_);
v___x_1413_ = lean_apply_2(v___x_49066__overap_1412_, v_a_1378_, lean_box(0));
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1704_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
v_a_1415_ = lean_ctor_get(v___x_1413_, 1);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1417_ = v___x_1413_;
v_isShared_1418_ = v_isSharedCheck_1704_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_inc(v_a_1414_);
lean_dec(v___x_1413_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1704_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v_a_1455_; lean_object* v_a_1456_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v_a_1480_; lean_object* v_a_1481_; lean_object* v___y_1524_; lean_object* v_a_1525_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___x_1675_; lean_object* v_a_1677_; lean_object* v_a_1678_; lean_object* v___y_1686_; uint8_t v___x_1698_; 
v___x_1445_ = lean_box(1);
v___x_1446_ = lean_unsigned_to_nat(0u);
v___x_1675_ = lean_array_get_size(v_a_1414_);
v___x_1698_ = lean_nat_dec_lt(v___x_1446_, v___x_1675_);
if (v___x_1698_ == 0)
{
v_a_1677_ = v___x_1445_;
v_a_1678_ = v_a_1415_;
goto v___jp_1676_;
}
else
{
uint8_t v___x_1699_; 
v___x_1699_ = lean_nat_dec_le(v___x_1675_, v___x_1675_);
if (v___x_1699_ == 0)
{
if (v___x_1698_ == 0)
{
v_a_1677_ = v___x_1445_;
v_a_1678_ = v_a_1415_;
goto v___jp_1676_;
}
else
{
size_t v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_usize_of_nat(v___x_1675_);
lean_inc_ref(v___x_1398_);
v___x_1701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg(v___x_1398_, v_a_1414_, v___x_1407_, v___x_1700_, v___x_1445_, v_a_1415_);
v___y_1686_ = v___x_1701_;
goto v___jp_1685_;
}
}
else
{
size_t v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_usize_of_nat(v___x_1675_);
lean_inc_ref(v___x_1398_);
v___x_1703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg(v___x_1398_, v_a_1414_, v___x_1407_, v___x_1702_, v___x_1445_, v_a_1415_);
v___y_1686_ = v___x_1703_;
goto v___jp_1685_;
}
}
v___jp_1419_:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v___y_1429_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1430_, 1);
v___x_1432_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1432_, 0, v_a_1393_);
lean_ctor_set(v___x_1432_, 1, v___y_1424_);
lean_ctor_set(v___x_1432_, 2, v_a_1431_);
lean_ctor_set(v___x_1432_, 3, v_a_1414_);
lean_ctor_set(v___x_1432_, 4, v___y_1423_);
lean_ctor_set(v___x_1432_, 5, v___y_1428_);
lean_ctor_set(v___x_1432_, 6, v___y_1425_);
lean_ctor_set(v___x_1432_, 7, v___y_1422_);
lean_ctor_set(v___x_1432_, 8, v___y_1420_);
lean_ctor_set(v___x_1432_, 9, v___y_1421_);
lean_ctor_set(v___x_1432_, 10, v___y_1427_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 1, v___y_1426_);
lean_ctor_set(v___x_1417_, 0, v___x_1432_);
v___x_1434_ = v___x_1417_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v___y_1426_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
lean_dec_ref(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v___y_1423_);
lean_dec_ref(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v_a_1414_);
lean_dec(v_a_1393_);
v_a_1436_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1430_, 1);
v___x_1437_ = lean_io_error_to_string(v_a_1436_);
v___x_1438_ = 3;
v___x_1439_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*1, v___x_1438_);
v___x_1440_ = lean_array_get_size(v___y_1426_);
v___x_1441_ = lean_array_push(v___y_1426_, v___x_1439_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set_tag(v___x_1417_, 1);
lean_ctor_set(v___x_1417_, 1, v___x_1441_);
lean_ctor_set(v___x_1417_, 0, v___x_1440_);
v___x_1443_ = v___x_1417_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
v___jp_1447_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; size_t v_sz_1460_; lean_object* v___x_1461_; 
v___x_1457_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___closed__0));
v___x_1458_ = l_Lake_moduleFacetAttr;
lean_inc_ref_n(v_env_1376_, 2);
v___x_1459_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1458_, v_env_1376_);
v_sz_1460_ = lean_array_size(v___x_1459_);
v___x_1461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__12(v_env_1376_, v_opts_1377_, v___x_1459_, v_sz_1460_, v___x_1407_, v___x_1457_);
lean_dec_ref(v___x_1459_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v___y_1420_ = v___y_1448_;
v___y_1421_ = v___y_1449_;
v___y_1422_ = v___y_1452_;
v___y_1423_ = v___y_1451_;
v___y_1424_ = v___y_1450_;
v___y_1425_ = v___y_1453_;
v___y_1426_ = v_a_1456_;
v___y_1427_ = v_a_1455_;
v___y_1428_ = v___y_1454_;
v___y_1429_ = v___x_1461_;
goto v___jp_1419_;
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; size_t v_sz_1465_; lean_object* v___x_1466_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1463_ = l_Lake_packageFacetAttr;
lean_inc_ref_n(v_env_1376_, 2);
v___x_1464_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1463_, v_env_1376_);
v_sz_1465_ = lean_array_size(v___x_1464_);
v___x_1466_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__13(v_env_1376_, v_opts_1377_, v___x_1464_, v_sz_1465_, v___x_1407_, v_a_1462_);
lean_dec_ref(v___x_1464_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v___y_1420_ = v___y_1448_;
v___y_1421_ = v___y_1449_;
v___y_1422_ = v___y_1452_;
v___y_1423_ = v___y_1451_;
v___y_1424_ = v___y_1450_;
v___y_1425_ = v___y_1453_;
v___y_1426_ = v_a_1456_;
v___y_1427_ = v_a_1455_;
v___y_1428_ = v___y_1454_;
v___y_1429_ = v___x_1466_;
goto v___jp_1419_;
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; size_t v_sz_1470_; lean_object* v___x_1471_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v___x_1468_ = l_Lake_libraryFacetAttr;
lean_inc_ref(v_env_1376_);
v___x_1469_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1468_, v_env_1376_);
v_sz_1470_ = lean_array_size(v___x_1469_);
v___x_1471_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_LakefileConfig_loadFromEnv_spec__14(v_env_1376_, v_opts_1377_, v___x_1469_, v_sz_1470_, v___x_1407_, v_a_1467_);
lean_dec_ref(v___x_1469_);
lean_dec_ref(v_opts_1377_);
v___y_1420_ = v___y_1448_;
v___y_1421_ = v___y_1449_;
v___y_1422_ = v___y_1452_;
v___y_1423_ = v___y_1451_;
v___y_1424_ = v___y_1450_;
v___y_1425_ = v___y_1453_;
v___y_1426_ = v_a_1456_;
v___y_1427_ = v_a_1455_;
v___y_1428_ = v___y_1454_;
v___y_1429_ = v___x_1471_;
goto v___jp_1419_;
}
}
}
v___jp_1472_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; size_t v_sz_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_49083__overap_1489_; lean_object* v___x_1490_; 
v___x_1482_ = l_Lake_lintDriverAttr;
lean_inc_ref(v_env_1376_);
v___x_1483_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1482_, v_env_1376_);
v_sz_1484_ = lean_array_size(v___x_1483_);
v___x_1485_ = l_unsafeCast___redArg(v___x_1483_);
lean_dec_ref(v___x_1483_);
v___x_1486_ = lean_box_usize(v_sz_1484_);
v___x_1487_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___boxed__const__1));
lean_inc_ref(v___x_1398_);
lean_inc(v___y_1477_);
v___x_1488_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__15___boxed), 8, 6);
lean_closure_set(v___x_1488_, 0, v_a_1404_);
lean_closure_set(v___x_1488_, 1, v___y_1477_);
lean_closure_set(v___x_1488_, 2, v___x_1398_);
lean_closure_set(v___x_1488_, 3, v___x_1486_);
lean_closure_set(v___x_1488_, 4, v___x_1487_);
lean_closure_set(v___x_1488_, 5, v___x_1485_);
v___x_49083__overap_1489_ = l_unsafeCast___redArg(v___x_1488_);
lean_dec_ref(v___x_1488_);
v___x_1490_ = lean_apply_2(v___x_49083__overap_1489_, v_a_1481_, lean_box(0));
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v_a_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1491_);
v_a_1492_ = lean_ctor_get(v___x_1490_, 1);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1490_, 2);
v___x_1493_ = lean_array_get_size(v_a_1491_);
v___x_1494_ = lean_nat_dec_lt(v___y_1478_, v___x_1493_);
if (v___x_1494_ == 0)
{
uint8_t v___x_1495_; 
v___x_1495_ = lean_nat_dec_lt(v___x_1446_, v___x_1493_);
if (v___x_1495_ == 0)
{
lean_object* v_lintDriver_1496_; 
lean_dec(v_a_1491_);
lean_dec_ref(v___x_1398_);
v_lintDriver_1496_ = lean_ctor_get(v_config_1396_, 14);
lean_inc_ref(v_lintDriver_1496_);
v___y_1448_ = v___y_1473_;
v___y_1449_ = v_a_1480_;
v___y_1450_ = v___y_1476_;
v___y_1451_ = v___y_1475_;
v___y_1452_ = v___y_1474_;
v___y_1453_ = v___y_1477_;
v___y_1454_ = v___y_1479_;
v_a_1455_ = v_lintDriver_1496_;
v_a_1456_ = v_a_1492_;
goto v___jp_1447_;
}
else
{
lean_object* v_lintDriver_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; 
v_lintDriver_1497_ = lean_ctor_get(v_config_1396_, 14);
v___x_1498_ = lean_string_utf8_byte_size(v_lintDriver_1497_);
v___x_1499_ = lean_nat_dec_eq(v___x_1498_, v___x_1446_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; uint8_t v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec(v_a_1491_);
lean_dec_ref(v_a_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v___x_1500_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___closed__1));
v___x_1501_ = lean_string_append(v___x_1398_, v___x_1500_);
v___x_1502_ = 3;
v___x_1503_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1503_, 0, v___x_1501_);
lean_ctor_set_uint8(v___x_1503_, sizeof(void*)*1, v___x_1502_);
v___x_1504_ = lean_array_get_size(v_a_1492_);
v___x_1505_ = lean_array_push(v_a_1492_, v___x_1503_);
v_a_1385_ = v___x_1504_;
v_a_1386_ = v___x_1505_;
goto v___jp_1384_;
}
else
{
lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec_ref(v___x_1398_);
v___x_1506_ = lean_array_fget(v_a_1491_, v___x_1446_);
lean_dec(v_a_1491_);
v___x_1507_ = l_Lean_Name_toString(v___x_1506_, v___x_1495_);
v___y_1448_ = v___y_1473_;
v___y_1449_ = v_a_1480_;
v___y_1450_ = v___y_1476_;
v___y_1451_ = v___y_1475_;
v___y_1452_ = v___y_1474_;
v___y_1453_ = v___y_1477_;
v___y_1454_ = v___y_1479_;
v_a_1455_ = v___x_1507_;
v_a_1456_ = v_a_1492_;
goto v___jp_1447_;
}
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v_a_1491_);
lean_dec_ref(v_a_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v___x_1508_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___closed__2));
v___x_1509_ = lean_string_append(v___x_1398_, v___x_1508_);
v___x_1510_ = 3;
v___x_1511_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1511_, 0, v___x_1509_);
lean_ctor_set_uint8(v___x_1511_, sizeof(void*)*1, v___x_1510_);
v___x_1512_ = lean_array_get_size(v_a_1492_);
v___x_1513_ = lean_array_push(v_a_1492_, v___x_1511_);
v_a_1385_ = v___x_1512_;
v_a_1386_ = v___x_1513_;
goto v___jp_1384_;
}
}
else
{
lean_object* v_a_1514_; lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref(v_a_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1514_ = lean_ctor_get(v___x_1490_, 0);
v_a_1515_ = lean_ctor_get(v___x_1490_, 1);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1490_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_inc(v_a_1514_);
lean_dec(v___x_1490_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1514_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
v___jp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; size_t v_sz_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_49069__overap_1533_; lean_object* v___x_1534_; 
v___x_1526_ = l_Lake_defaultTargetAttr;
lean_inc_ref(v_env_1376_);
v___x_1527_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1526_, v_env_1376_);
v_sz_1528_ = lean_array_size(v___x_1527_);
v___x_1529_ = l_unsafeCast___redArg(v___x_1527_);
lean_dec_ref(v___x_1527_);
v___x_1530_ = lean_box_usize(v_sz_1528_);
v___x_1531_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___boxed__const__1));
lean_inc_ref(v___x_1398_);
lean_inc(v_a_1404_);
v___x_1532_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__6___boxed), 7, 5);
lean_closure_set(v___x_1532_, 0, v_a_1404_);
lean_closure_set(v___x_1532_, 1, v___x_1398_);
lean_closure_set(v___x_1532_, 2, v___x_1530_);
lean_closure_set(v___x_1532_, 3, v___x_1531_);
lean_closure_set(v___x_1532_, 4, v___x_1529_);
v___x_49069__overap_1533_ = l_unsafeCast___redArg(v___x_1532_);
lean_dec_ref(v___x_1532_);
v___x_1534_ = lean_apply_2(v___x_49069__overap_1533_, v_a_1525_, lean_box(0));
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v_a_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
v_a_1536_ = lean_ctor_get(v___x_1534_, 1);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1534_, 2);
v___x_1537_ = l_Lake_scriptAttr;
lean_inc_ref(v_env_1376_);
v___x_1538_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg(v_env_1376_, v___x_1537_, v___f_1400_, v_a_1536_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v_a_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; size_t v_sz_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_49072__overap_1548_; lean_object* v___x_1549_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc_n(v_a_1539_, 2);
v_a_1540_ = lean_ctor_get(v___x_1538_, 1);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1538_, 2);
v___x_1541_ = l_Lake_defaultScriptAttr;
lean_inc_ref(v_env_1376_);
v___x_1542_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1541_, v_env_1376_);
v_sz_1543_ = lean_array_size(v___x_1542_);
v___x_1544_ = l_unsafeCast___redArg(v___x_1542_);
lean_dec_ref(v___x_1542_);
v___x_1545_ = lean_box_usize(v_sz_1543_);
v___x_1546_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___boxed__const__1));
lean_inc_ref(v___x_1398_);
v___x_1547_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__8___boxed), 7, 5);
lean_closure_set(v___x_1547_, 0, v_a_1539_);
lean_closure_set(v___x_1547_, 1, v___x_1398_);
lean_closure_set(v___x_1547_, 2, v___x_1545_);
lean_closure_set(v___x_1547_, 3, v___x_1546_);
lean_closure_set(v___x_1547_, 4, v___x_1544_);
v___x_49072__overap_1548_ = l_unsafeCast___redArg(v___x_1547_);
lean_dec_ref(v___x_1547_);
v___x_1549_ = lean_apply_2(v___x_49072__overap_1548_, v_a_1540_, lean_box(0));
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v_a_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; size_t v_sz_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_49075__overap_1559_; lean_object* v___x_1560_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
v_a_1551_ = lean_ctor_get(v___x_1549_, 1);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1549_, 2);
v___x_1552_ = l_Lake_postUpdateAttr;
lean_inc_ref_n(v_env_1376_, 2);
v___x_1553_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1552_, v_env_1376_);
v_sz_1554_ = lean_array_size(v___x_1553_);
v___x_1555_ = l_unsafeCast___redArg(v___x_1553_);
lean_dec_ref(v___x_1553_);
v___x_1556_ = lean_box_usize(v_sz_1554_);
v___x_1557_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___boxed__const__1));
lean_inc(v_keyName_1395_);
lean_inc_ref(v_opts_1377_);
v___x_1558_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__9___boxed), 8, 6);
lean_closure_set(v___x_1558_, 0, v_env_1376_);
lean_closure_set(v___x_1558_, 1, v_opts_1377_);
lean_closure_set(v___x_1558_, 2, v_keyName_1395_);
lean_closure_set(v___x_1558_, 3, v___x_1556_);
lean_closure_set(v___x_1558_, 4, v___x_1557_);
lean_closure_set(v___x_1558_, 5, v___x_1555_);
v___x_49075__overap_1559_ = l_unsafeCast___redArg(v___x_1558_);
lean_dec_ref(v___x_1558_);
v___x_1560_ = lean_apply_2(v___x_49075__overap_1559_, v_a_1551_, lean_box(0));
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1625_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
v_a_1562_ = lean_ctor_get(v___x_1560_, 1);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1564_ = v___x_1560_;
v_isShared_1565_ = v_isSharedCheck_1625_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_inc(v_a_1561_);
lean_dec(v___x_1560_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1625_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; size_t v_sz_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1566_ = l_Lake_packageDepAttr;
lean_inc_ref_n(v_env_1376_, 2);
v___x_1567_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1566_, v_env_1376_);
v_sz_1568_ = lean_array_size(v___x_1567_);
v___x_1569_ = l_unsafeCast___redArg(v___x_1567_);
lean_dec_ref(v___x_1567_);
v___x_1570_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__10(v_env_1376_, v_opts_1377_, v_sz_1568_, v___x_1407_, v___x_1569_);
v___x_1571_ = l_unsafeCast___redArg(v___x_1570_);
lean_dec_ref(v___x_1570_);
v___x_1572_ = l_IO_ofExcept___at___00Lake_LakefileConfig_loadFromEnv_spec__0___redArg(v___x_1571_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; size_t v_sz_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_49080__overap_1581_; lean_object* v___x_1582_; 
lean_del_object(v___x_1564_);
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1574_ = l_Lake_testDriverAttr;
lean_inc_ref(v_env_1376_);
v___x_1575_ = l_Lake_OrderedTagAttribute_getAllEntries(v___x_1574_, v_env_1376_);
v_sz_1576_ = lean_array_size(v___x_1575_);
v___x_1577_ = l_unsafeCast___redArg(v___x_1575_);
lean_dec_ref(v___x_1575_);
v___x_1578_ = lean_box_usize(v_sz_1576_);
v___x_1579_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___boxed__const__1));
lean_inc_ref(v___x_1398_);
lean_inc(v_a_1539_);
lean_inc(v_a_1404_);
v___x_1580_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LakefileConfig_loadFromEnv_spec__11___boxed), 8, 6);
lean_closure_set(v___x_1580_, 0, v_a_1404_);
lean_closure_set(v___x_1580_, 1, v_a_1539_);
lean_closure_set(v___x_1580_, 2, v___x_1398_);
lean_closure_set(v___x_1580_, 3, v___x_1578_);
lean_closure_set(v___x_1580_, 4, v___x_1579_);
lean_closure_set(v___x_1580_, 5, v___x_1577_);
v___x_49080__overap_1581_ = l_unsafeCast___redArg(v___x_1580_);
lean_dec_ref(v___x_1580_);
v___x_1582_ = lean_apply_2(v___x_49080__overap_1581_, v_a_1562_, lean_box(0));
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v_a_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
v_a_1584_ = lean_ctor_get(v___x_1582_, 1);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1582_, 2);
v___x_1585_ = lean_unsigned_to_nat(1u);
v___x_1586_ = lean_array_get_size(v_a_1583_);
v___x_1587_ = lean_nat_dec_lt(v___x_1585_, v___x_1586_);
if (v___x_1587_ == 0)
{
uint8_t v___x_1588_; 
v___x_1588_ = lean_nat_dec_lt(v___x_1446_, v___x_1586_);
if (v___x_1588_ == 0)
{
lean_object* v_testDriver_1589_; 
lean_dec(v_a_1583_);
v_testDriver_1589_ = lean_ctor_get(v_config_1396_, 12);
lean_inc_ref(v_testDriver_1589_);
v___y_1473_ = v_a_1561_;
v___y_1474_ = v_a_1550_;
v___y_1475_ = v___y_1524_;
v___y_1476_ = v_a_1573_;
v___y_1477_ = v_a_1539_;
v___y_1478_ = v___x_1585_;
v___y_1479_ = v_a_1535_;
v_a_1480_ = v_testDriver_1589_;
v_a_1481_ = v_a_1584_;
goto v___jp_1472_;
}
else
{
lean_object* v_testDriver_1590_; lean_object* v___x_1591_; uint8_t v___x_1592_; 
v_testDriver_1590_ = lean_ctor_get(v_config_1396_, 12);
v___x_1591_ = lean_string_utf8_byte_size(v_testDriver_1590_);
v___x_1592_ = lean_nat_dec_eq(v___x_1591_, v___x_1446_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec(v_a_1583_);
lean_dec(v_a_1573_);
lean_dec(v_a_1561_);
lean_dec(v_a_1550_);
lean_dec(v_a_1539_);
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v___x_1593_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___closed__3));
v___x_1594_ = lean_string_append(v___x_1398_, v___x_1593_);
v___x_1595_ = 3;
v___x_1596_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set_uint8(v___x_1596_, sizeof(void*)*1, v___x_1595_);
v___x_1597_ = lean_array_get_size(v_a_1584_);
v___x_1598_ = lean_array_push(v_a_1584_, v___x_1596_);
v_a_1381_ = v___x_1597_;
v_a_1382_ = v___x_1598_;
goto v___jp_1380_;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1599_ = lean_array_fget(v_a_1583_, v___x_1446_);
lean_dec(v_a_1583_);
v___x_1600_ = l_Lean_Name_toString(v___x_1599_, v___x_1588_);
v___y_1473_ = v_a_1561_;
v___y_1474_ = v_a_1550_;
v___y_1475_ = v___y_1524_;
v___y_1476_ = v_a_1573_;
v___y_1477_ = v_a_1539_;
v___y_1478_ = v___x_1585_;
v___y_1479_ = v_a_1535_;
v_a_1480_ = v___x_1600_;
v_a_1481_ = v_a_1584_;
goto v___jp_1472_;
}
}
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
lean_dec(v_a_1583_);
lean_dec(v_a_1573_);
lean_dec(v_a_1561_);
lean_dec(v_a_1550_);
lean_dec(v_a_1539_);
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v___x_1601_ = ((lean_object*)(l_Lake_LakefileConfig_loadFromEnv___closed__4));
v___x_1602_ = lean_string_append(v___x_1398_, v___x_1601_);
v___x_1603_ = 3;
v___x_1604_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1604_, 0, v___x_1602_);
lean_ctor_set_uint8(v___x_1604_, sizeof(void*)*1, v___x_1603_);
v___x_1605_ = lean_array_get_size(v_a_1584_);
v___x_1606_ = lean_array_push(v_a_1584_, v___x_1604_);
v_a_1381_ = v___x_1605_;
v_a_1382_ = v___x_1606_;
goto v___jp_1380_;
}
}
else
{
lean_object* v_a_1607_; lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v_a_1573_);
lean_dec(v_a_1561_);
lean_dec(v_a_1550_);
lean_dec(v_a_1539_);
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1607_ = lean_ctor_get(v___x_1582_, 0);
v_a_1608_ = lean_ctor_get(v___x_1582_, 1);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1582_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_inc(v_a_1607_);
lean_dec(v___x_1582_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1607_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1617_; uint8_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1623_; 
lean_dec(v_a_1561_);
lean_dec(v_a_1550_);
lean_dec(v_a_1539_);
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1616_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1617_ = lean_io_error_to_string(v_a_1616_);
v___x_1618_ = 3;
v___x_1619_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set_uint8(v___x_1619_, sizeof(void*)*1, v___x_1618_);
v___x_1620_ = lean_array_get_size(v_a_1562_);
v___x_1621_ = lean_array_push(v_a_1562_, v___x_1619_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 1);
lean_ctor_set(v___x_1564_, 1, v___x_1621_);
lean_ctor_set(v___x_1564_, 0, v___x_1620_);
v___x_1623_ = v___x_1564_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v___x_1621_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
else
{
lean_object* v_a_1626_; lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec(v_a_1550_);
lean_dec(v_a_1539_);
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1626_ = lean_ctor_get(v___x_1560_, 0);
v_a_1627_ = lean_ctor_get(v___x_1560_, 1);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1560_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_inc(v_a_1626_);
lean_dec(v___x_1560_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1626_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
else
{
lean_object* v_a_1635_; lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v_a_1539_);
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1635_ = lean_ctor_get(v___x_1549_, 0);
v_a_1636_ = lean_ctor_get(v___x_1549_, 1);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1549_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_inc(v_a_1635_);
lean_dec(v___x_1549_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1635_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v_a_1535_);
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1644_ = lean_ctor_get(v___x_1538_, 0);
v_a_1645_ = lean_ctor_get(v___x_1538_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1538_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_inc(v_a_1644_);
lean_dec(v___x_1538_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1644_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
else
{
lean_object* v_a_1653_; lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_dec(v___y_1524_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___f_1400_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1653_ = lean_ctor_get(v___x_1534_, 0);
v_a_1654_ = lean_ctor_get(v___x_1534_, 1);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1534_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_inc(v_a_1653_);
lean_dec(v___x_1534_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1653_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
v___jp_1662_:
{
if (lean_obj_tag(v___y_1664_) == 0)
{
lean_object* v_a_1665_; 
v_a_1665_ = lean_ctor_get(v___y_1664_, 1);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___y_1664_, 2);
v___y_1524_ = v___y_1663_;
v_a_1525_ = v_a_1665_;
goto v___jp_1523_;
}
else
{
lean_object* v_a_1666_; lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
lean_dec(v___y_1663_);
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___f_1400_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1666_ = lean_ctor_get(v___y_1664_, 0);
v_a_1667_ = lean_ctor_get(v___y_1664_, 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___y_1664_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___y_1664_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_inc(v_a_1666_);
lean_dec(v___y_1664_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1666_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
v___jp_1676_:
{
uint8_t v___x_1679_; 
v___x_1679_ = lean_nat_dec_lt(v___x_1446_, v___x_1675_);
if (v___x_1679_ == 0)
{
v___y_1524_ = v_a_1677_;
v_a_1525_ = v_a_1678_;
goto v___jp_1523_;
}
else
{
uint8_t v___x_1680_; 
v___x_1680_ = lean_nat_dec_le(v___x_1675_, v___x_1675_);
if (v___x_1680_ == 0)
{
if (v___x_1679_ == 0)
{
v___y_1524_ = v_a_1677_;
v_a_1525_ = v_a_1678_;
goto v___jp_1523_;
}
else
{
size_t v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lean_usize_of_nat(v___x_1675_);
lean_inc_ref(v___x_1398_);
v___x_1682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16(v___x_1398_, v_a_1414_, v___x_1407_, v___x_1681_, v___x_1445_, v_a_1678_);
v___y_1663_ = v_a_1677_;
v___y_1664_ = v___x_1682_;
goto v___jp_1662_;
}
}
else
{
size_t v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = lean_usize_of_nat(v___x_1675_);
lean_inc_ref(v___x_1398_);
v___x_1684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__16(v___x_1398_, v_a_1414_, v___x_1407_, v___x_1683_, v___x_1445_, v_a_1678_);
v___y_1663_ = v_a_1677_;
v___y_1664_ = v___x_1684_;
goto v___jp_1662_;
}
}
}
v___jp_1685_:
{
if (lean_obj_tag(v___y_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v_a_1688_; 
v_a_1687_ = lean_ctor_get(v___y_1686_, 0);
lean_inc(v_a_1687_);
v_a_1688_ = lean_ctor_get(v___y_1686_, 1);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___y_1686_, 2);
v_a_1677_ = v_a_1687_;
v_a_1678_ = v_a_1688_;
goto v___jp_1676_;
}
else
{
lean_object* v_a_1689_; lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_del_object(v___x_1417_);
lean_dec(v_a_1414_);
lean_dec(v_a_1404_);
lean_dec_ref(v___f_1400_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1689_ = lean_ctor_get(v___y_1686_, 0);
v_a_1690_ = lean_ctor_get(v___y_1686_, 1);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___y_1686_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___y_1686_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_inc(v_a_1689_);
lean_dec(v___y_1686_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1689_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
}
else
{
lean_object* v_a_1705_; lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec(v_a_1404_);
lean_dec_ref(v___f_1400_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1705_ = lean_ctor_get(v___x_1413_, 0);
v_a_1706_ = lean_ctor_get(v___x_1413_, 1);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1413_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_inc(v_a_1705_);
lean_dec(v___x_1413_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1705_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
lean_dec_ref(v___f_1400_);
lean_dec_ref(v___x_1398_);
lean_dec(v_a_1393_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1714_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1714_);
lean_dec_ref_known(v___x_1403_, 1);
v___x_1715_ = lean_io_error_to_string(v_a_1714_);
v___x_1716_ = 3;
v___x_1717_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1717_, 0, v___x_1715_);
lean_ctor_set_uint8(v___x_1717_, sizeof(void*)*1, v___x_1716_);
v___x_1718_ = lean_array_get_size(v_a_1378_);
v___x_1719_ = lean_array_push(v_a_1378_, v___x_1717_);
v___x_1720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1718_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
return v___x_1720_;
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_opts_1377_);
lean_dec_ref(v_env_1376_);
v_a_1721_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1392_, 1);
v___x_1722_ = lean_io_error_to_string(v_a_1721_);
v___x_1723_ = 3;
v___x_1724_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1724_, 0, v___x_1722_);
lean_ctor_set_uint8(v___x_1724_, sizeof(void*)*1, v___x_1723_);
v___x_1725_ = lean_array_get_size(v_a_1378_);
v___x_1726_ = lean_array_push(v_a_1378_, v___x_1724_);
v___x_1727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1725_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
return v___x_1727_;
}
v___jp_1380_:
{
lean_object* v___x_1383_; 
v___x_1383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1383_, 0, v_a_1381_);
lean_ctor_set(v___x_1383_, 1, v_a_1382_);
return v___x_1383_;
}
v___jp_1384_:
{
lean_object* v___x_1387_; 
v___x_1387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1387_, 0, v_a_1385_);
lean_ctor_set(v___x_1387_, 1, v_a_1386_);
return v___x_1387_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LakefileConfig_loadFromEnv___boxed(lean_object* v_env_1728_, lean_object* v_opts_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lake_LakefileConfig_loadFromEnv(v_env_1728_, v_opts_1729_, v_a_1730_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1(lean_object* v_00_u03b2_1733_, lean_object* v_inst_1734_, lean_object* v_t_1735_, lean_object* v_k_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___redArg(v_t_1735_, v_k_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1___boxed(lean_object* v_00_u03b2_1738_, lean_object* v_inst_1739_, lean_object* v_t_1740_, lean_object* v_k_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__1(v_00_u03b2_1738_, v_inst_1739_, v_t_1740_, v_k_1741_);
lean_dec(v_k_1741_);
lean_dec(v_t_1740_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2(lean_object* v_00_u03b2_1743_, lean_object* v_k_1744_, lean_object* v_v_1745_, lean_object* v_t_1746_, lean_object* v_hl_1747_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LakefileConfig_loadFromEnv_spec__2___redArg(v_k_1744_, v_v_1745_, v_t_1746_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3(lean_object* v_00_u03b2_1749_, lean_object* v_env_1750_, lean_object* v_attr_1751_, lean_object* v_f_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___redArg(v_env_1750_, v_attr_1751_, v_f_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3___boxed(lean_object* v_00_u03b2_1754_, lean_object* v_env_1755_, lean_object* v_attr_1756_, lean_object* v_f_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3(v_00_u03b2_1754_, v_env_1755_, v_attr_1756_, v_f_1757_);
lean_dec_ref(v_attr_1756_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5(lean_object* v_00_u03b4_1759_, lean_object* v_t_1760_, lean_object* v_k_1761_){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___redArg(v_t_1760_, v_k_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5___boxed(lean_object* v_00_u03b4_1763_, lean_object* v_t_1764_, lean_object* v_k_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_LakefileConfig_loadFromEnv_spec__5(v_00_u03b4_1763_, v_t_1764_, v_k_1765_);
lean_dec(v_k_1765_);
lean_dec(v_t_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7(lean_object* v_00_u03b2_1767_, lean_object* v_env_1768_, lean_object* v_attr_1769_, lean_object* v_f_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___redArg(v_env_1768_, v_attr_1769_, v_f_1770_, v___y_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7___boxed(lean_object* v_00_u03b2_1774_, lean_object* v_env_1775_, lean_object* v_attr_1776_, lean_object* v_f_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l___private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7(v_00_u03b2_1774_, v_env_1775_, v_attr_1776_, v_f_1777_, v___y_1778_);
lean_dec_ref(v_attr_1776_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17(lean_object* v___x_1781_, lean_object* v___x_1782_, lean_object* v_as_1783_, size_t v_i_1784_, size_t v_stop_1785_, lean_object* v_b_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___redArg(v___x_1781_, v_as_1783_, v_i_1784_, v_stop_1785_, v_b_1786_, v___y_1787_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17___boxed(lean_object* v___x_1790_, lean_object* v___x_1791_, lean_object* v_as_1792_, lean_object* v_i_1793_, lean_object* v_stop_1794_, lean_object* v_b_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_){
_start:
{
size_t v_i_boxed_1798_; size_t v_stop_boxed_1799_; lean_object* v_res_1800_; 
v_i_boxed_1798_ = lean_unbox_usize(v_i_1793_);
lean_dec(v_i_1793_);
v_stop_boxed_1799_ = lean_unbox_usize(v_stop_1794_);
lean_dec(v_stop_1794_);
v_res_1800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LakefileConfig_loadFromEnv_spec__17(v___x_1790_, v___x_1791_, v_as_1792_, v_i_boxed_1798_, v_stop_boxed_1799_, v_b_1795_, v___y_1796_);
lean_dec_ref(v_as_1792_);
lean_dec(v___x_1791_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3(lean_object* v_00_u03b2_1801_, lean_object* v_f_1802_, lean_object* v_as_1803_, size_t v_i_1804_, size_t v_stop_1805_, lean_object* v_b_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___redArg(v_f_1802_, v_as_1803_, v_i_1804_, v_stop_1805_, v_b_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3___boxed(lean_object* v_00_u03b2_1808_, lean_object* v_f_1809_, lean_object* v_as_1810_, lean_object* v_i_1811_, lean_object* v_stop_1812_, lean_object* v_b_1813_){
_start:
{
size_t v_i_boxed_1814_; size_t v_stop_boxed_1815_; lean_object* v_res_1816_; 
v_i_boxed_1814_ = lean_unbox_usize(v_i_1811_);
lean_dec(v_i_1811_);
v_stop_boxed_1815_ = lean_unbox_usize(v_stop_1812_);
lean_dec(v_stop_1812_);
v_res_1816_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkOrdTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__3_spec__3(v_00_u03b2_1808_, v_f_1809_, v_as_1810_, v_i_boxed_1814_, v_stop_boxed_1815_, v_b_1813_);
lean_dec_ref(v_as_1810_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8(lean_object* v_00_u03b2_1817_, lean_object* v_f_1818_, lean_object* v_as_1819_, size_t v_i_1820_, size_t v_stop_1821_, lean_object* v_b_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___redArg(v_f_1818_, v_as_1819_, v_i_1820_, v_stop_1821_, v_b_1822_, v___y_1823_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8___boxed(lean_object* v_00_u03b2_1826_, lean_object* v_f_1827_, lean_object* v_as_1828_, lean_object* v_i_1829_, lean_object* v_stop_1830_, lean_object* v_b_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
size_t v_i_boxed_1834_; size_t v_stop_boxed_1835_; lean_object* v_res_1836_; 
v_i_boxed_1834_ = lean_unbox_usize(v_i_1829_);
lean_dec(v_i_1829_);
v_stop_boxed_1835_ = lean_unbox_usize(v_stop_1830_);
lean_dec(v_stop_1830_);
v_res_1836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Eval_0__Lake_mkTagMap___at___00Lake_LakefileConfig_loadFromEnv_spec__7_spec__8(v_00_u03b2_1826_, v_f_1827_, v_as_1828_, v_i_boxed_1834_, v_stop_boxed_1835_, v_b_1831_, v___y_1832_);
lean_dec_ref(v_as_1828_);
return v_res_1836_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_LakefileConfig(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_AttributesCore(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Lean_Eval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LakefileConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_AttributesCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Lean_Eval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Config_LakefileConfig(uint8_t builtin);
lean_object* initialize_Lean_DocString(uint8_t builtin);
lean_object* initialize_Lake_DSL_AttributesCore(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Lean_Eval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_LakefileConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_AttributesCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Lean_Eval(builtin);
}
#ifdef __cplusplus
}
#endif

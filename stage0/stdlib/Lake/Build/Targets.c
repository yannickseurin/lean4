// Lean compiler output
// Module: Lake.Build.Targets
// Imports: public import Lake.Config.Monad public import Lake.Config.InputFile import Lake.Build.Infos
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
lean_object* l_unsafeCast___redArg___boxed(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_Module_keyword;
extern lean_object* l_Lake_LeanLib_defaultFacet;
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
extern lean_object* l_Lake_LeanExe_exeFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lake_InputDir_defaultFacet;
extern lean_object* l_Lake_InputDir_keyword;
extern lean_object* l_Lake_InputFile_defaultFacet;
extern lean_object* l_Lake_InputFile_keyword;
static const lean_string_object l_Lake_KConfigDecl_get___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "package of target '"};
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lake_KConfigDecl_get___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___closed__1 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lake_KConfigDecl_get___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "' not found in workspace"};
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___closed__2 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_KConfigDecl_get___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__1___closed__0 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lake_KConfigDecl_get___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_unsafeCast___redArg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_KConfigDecl_get___redArg___closed__0 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_TargetDecl_fetch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "package '"};
static const lean_object* l_Lake_TargetDecl_fetch___redArg___closed__0 = (const lean_object*)&l_Lake_TargetDecl_fetch___redArg___closed__0_value;
static const lean_string_object l_Lake_TargetDecl_fetch___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "' of target '"};
static const lean_object* l_Lake_TargetDecl_fetch___redArg___closed__1 = (const lean_object*)&l_Lake_TargetDecl_fetch___redArg___closed__1_value;
static const lean_string_object l_Lake_TargetDecl_fetch___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "' does not exist in workspace"};
static const lean_object* l_Lake_TargetDecl_fetch___redArg___closed__2 = (const lean_object*)&l_Lake_TargetDecl_fetch___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_LeanLib_fetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l_Lake_LeanLib_fetch___closed__0 = (const lean_object*)&l_Lake_LeanLib_fetch___closed__0_value;
static const lean_ctor_object l_Lake_LeanLib_fetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLib_fetch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l_Lake_LeanLib_fetch___closed__1 = (const lean_object*)&l_Lake_LeanLib_fetch___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0(lean_object* v_name_4_, lean_object* v_config_5_, lean_object* v_toPure_6_, lean_object* v_pkg_7_, lean_object* v_inst_8_, lean_object* v_____x_9_){
_start:
{
if (lean_obj_tag(v_____x_9_) == 1)
{
lean_object* v_val_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
lean_dec(v_inst_8_);
lean_dec(v_pkg_7_);
v_val_10_ = lean_ctor_get(v_____x_9_, 0);
lean_inc(v_val_10_);
v___x_11_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_11_, 0, v_val_10_);
lean_ctor_set(v___x_11_, 1, v_name_4_);
lean_ctor_set(v___x_11_, 2, v_config_5_);
v___x_12_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_11_);
return v___x_12_;
}
else
{
lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
lean_dec(v_toPure_6_);
lean_dec(v_config_5_);
v___x_13_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__0));
v___x_14_ = 1;
v___x_15_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_7_, v___x_14_);
v___x_16_ = lean_string_append(v___x_13_, v___x_15_);
lean_dec_ref(v___x_15_);
v___x_17_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__1));
v___x_18_ = lean_string_append(v___x_16_, v___x_17_);
v___x_19_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4_, v___x_14_);
v___x_20_ = lean_string_append(v___x_18_, v___x_19_);
lean_dec_ref(v___x_19_);
v___x_21_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__2));
v___x_22_ = lean_string_append(v___x_20_, v___x_21_);
v___x_23_ = lean_apply_2(v_inst_8_, lean_box(0), v___x_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___boxed(lean_object* v_name_24_, lean_object* v_config_25_, lean_object* v_toPure_26_, lean_object* v_pkg_27_, lean_object* v_inst_28_, lean_object* v_____x_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lake_KConfigDecl_get___redArg___lam__0(v_name_24_, v_config_25_, v_toPure_26_, v_pkg_27_, v_inst_28_, v_____x_29_);
lean_dec(v_____x_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__1(lean_object* v_pkg_32_, lean_object* v_x_33_){
_start:
{
lean_object* v_packageMap_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_packageMap_34_ = lean_ctor_get(v_x_33_, 5);
lean_inc(v_packageMap_34_);
lean_dec_ref(v_x_33_);
v___x_35_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_36_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_35_, v_packageMap_34_, v_pkg_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg(lean_object* v_inst_38_, lean_object* v_inst_39_, lean_object* v_inst_40_, lean_object* v_self_41_){
_start:
{
lean_object* v_toApplicative_42_; lean_object* v_toFunctor_43_; lean_object* v_toBind_44_; lean_object* v_toPure_45_; lean_object* v_pkg_46_; lean_object* v_name_47_; lean_object* v_config_48_; lean_object* v_map_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v_toApplicative_42_ = lean_ctor_get(v_inst_38_, 0);
lean_inc_ref(v_toApplicative_42_);
v_toFunctor_43_ = lean_ctor_get(v_toApplicative_42_, 0);
lean_inc_ref(v_toFunctor_43_);
v_toBind_44_ = lean_ctor_get(v_inst_38_, 1);
lean_inc(v_toBind_44_);
lean_dec_ref(v_inst_38_);
v_toPure_45_ = lean_ctor_get(v_toApplicative_42_, 1);
lean_inc(v_toPure_45_);
lean_dec_ref(v_toApplicative_42_);
v_pkg_46_ = lean_ctor_get(v_self_41_, 0);
lean_inc_n(v_pkg_46_, 2);
v_name_47_ = lean_ctor_get(v_self_41_, 1);
lean_inc(v_name_47_);
v_config_48_ = lean_ctor_get(v_self_41_, 3);
lean_inc(v_config_48_);
lean_dec_ref(v_self_41_);
v_map_49_ = lean_ctor_get(v_toFunctor_43_, 0);
lean_inc_n(v_map_49_, 2);
lean_dec_ref(v_toFunctor_43_);
v___f_50_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_51_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_51_, 0, v_name_47_);
lean_closure_set(v___f_51_, 1, v_config_48_);
lean_closure_set(v___f_51_, 2, v_toPure_45_);
lean_closure_set(v___f_51_, 3, v_pkg_46_);
lean_closure_set(v___f_51_, 4, v_inst_39_);
v___f_52_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_52_, 0, v_pkg_46_);
v___x_53_ = lean_apply_4(v_map_49_, lean_box(0), lean_box(0), v___f_50_, v_inst_40_);
v___x_54_ = lean_apply_4(v_map_49_, lean_box(0), lean_box(0), v___f_52_, v___x_53_);
v___x_55_ = lean_apply_4(v_toBind_44_, lean_box(0), lean_box(0), v___x_54_, v___f_51_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get(lean_object* v_m_56_, lean_object* v_kind_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_inst_60_, lean_object* v_self_61_){
_start:
{
lean_object* v_toApplicative_62_; lean_object* v_toFunctor_63_; lean_object* v_toBind_64_; lean_object* v_toPure_65_; lean_object* v_pkg_66_; lean_object* v_name_67_; lean_object* v_config_68_; lean_object* v_map_69_; lean_object* v___f_70_; lean_object* v___f_71_; lean_object* v___f_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_toApplicative_62_ = lean_ctor_get(v_inst_58_, 0);
lean_inc_ref(v_toApplicative_62_);
v_toFunctor_63_ = lean_ctor_get(v_toApplicative_62_, 0);
lean_inc_ref(v_toFunctor_63_);
v_toBind_64_ = lean_ctor_get(v_inst_58_, 1);
lean_inc(v_toBind_64_);
lean_dec_ref(v_inst_58_);
v_toPure_65_ = lean_ctor_get(v_toApplicative_62_, 1);
lean_inc(v_toPure_65_);
lean_dec_ref(v_toApplicative_62_);
v_pkg_66_ = lean_ctor_get(v_self_61_, 0);
lean_inc_n(v_pkg_66_, 2);
v_name_67_ = lean_ctor_get(v_self_61_, 1);
lean_inc(v_name_67_);
v_config_68_ = lean_ctor_get(v_self_61_, 3);
lean_inc(v_config_68_);
lean_dec_ref(v_self_61_);
v_map_69_ = lean_ctor_get(v_toFunctor_63_, 0);
lean_inc_n(v_map_69_, 2);
lean_dec_ref(v_toFunctor_63_);
v___f_70_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_71_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_71_, 0, v_name_67_);
lean_closure_set(v___f_71_, 1, v_config_68_);
lean_closure_set(v___f_71_, 2, v_toPure_65_);
lean_closure_set(v___f_71_, 3, v_pkg_66_);
lean_closure_set(v___f_71_, 4, v_inst_59_);
v___f_72_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_72_, 0, v_pkg_66_);
v___x_73_ = lean_apply_4(v_map_69_, lean_box(0), lean_box(0), v___f_70_, v_inst_60_);
v___x_74_ = lean_apply_4(v_map_69_, lean_box(0), lean_box(0), v___f_72_, v___x_73_);
v___x_75_ = lean_apply_4(v_toBind_64_, lean_box(0), lean_box(0), v___x_74_, v___f_71_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___boxed(lean_object* v_m_76_, lean_object* v_kind_77_, lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_self_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lake_KConfigDecl_get(v_m_76_, v_kind_77_, v_inst_78_, v_inst_79_, v_inst_80_, v_self_81_);
lean_dec(v_kind_77_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob(lean_object* v_self_83_, lean_object* v_target_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v_self_83_);
lean_ctor_set(v___x_92_, 1, v_target_84_);
lean_inc_ref(v_a_89_);
lean_inc(v_a_88_);
lean_inc(v_a_87_);
lean_inc(v_a_86_);
v___x_93_ = lean_apply_7(v_a_85_, v___x_92_, v_a_86_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, lean_box(0));
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_103_; 
v_a_94_ = lean_ctor_get(v___x_93_, 0);
v_a_95_ = lean_ctor_get(v___x_93_, 1);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_103_ == 0)
{
v___x_97_ = v___x_93_;
v_isShared_98_ = v_isSharedCheck_103_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_inc(v_a_94_);
lean_dec(v___x_93_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_103_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = l_Lake_Job_toOpaque___redArg(v_a_94_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_99_);
v___x_101_ = v___x_97_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v_a_95_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
else
{
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob___boxed(lean_object* v_self_104_, lean_object* v_target_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lake_Package_fetchTargetJob(v_self_104_, v_target_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
lean_dec_ref(v_a_110_);
lean_dec(v_a_109_);
lean_dec(v_a_108_);
lean_dec(v_a_107_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg(lean_object* v_self_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_pkg_125_; lean_object* v_name_126_; lean_object* v_toContext_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_packageMap_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_pkg_125_ = lean_ctor_get(v_self_117_, 0);
lean_inc_n(v_pkg_125_, 2);
v_name_126_ = lean_ctor_get(v_self_117_, 1);
lean_inc(v_name_126_);
lean_dec_ref(v_self_117_);
v_toContext_127_ = lean_ctor_get(v_a_122_, 1);
v___x_128_ = l_unsafeCast___redArg(v_toContext_127_);
v___x_129_ = l_unsafeCast___redArg(v___x_128_);
lean_dec(v___x_128_);
v___x_130_ = l_unsafeCast___redArg(v___x_129_);
lean_dec(v___x_129_);
v___x_131_ = l_unsafeCast___redArg(v___x_130_);
lean_dec(v___x_130_);
v___x_132_ = l_unsafeCast___redArg(v___x_131_);
lean_dec(v___x_131_);
v___x_133_ = l_unsafeCast___redArg(v___x_132_);
lean_dec(v___x_132_);
v___x_134_ = l_unsafeCast___redArg(v___x_133_);
lean_dec(v___x_133_);
v___x_135_ = l_unsafeCast___redArg(v___x_134_);
lean_dec(v___x_134_);
v___x_136_ = l_unsafeCast___redArg(v___x_135_);
lean_dec(v___x_135_);
v___x_137_ = l_unsafeCast___redArg(v___x_136_);
lean_dec(v___x_136_);
v___x_138_ = l_unsafeCast___redArg(v___x_137_);
lean_dec(v___x_137_);
v_packageMap_139_ = lean_ctor_get(v___x_138_, 5);
lean_inc(v_packageMap_139_);
lean_dec(v___x_138_);
v___x_140_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_141_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_140_, v_packageMap_139_, v_pkg_125_);
if (lean_obj_tag(v___x_141_) == 1)
{
lean_object* v_val_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v_pkg_125_);
v_val_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_val_142_);
lean_dec_ref_known(v___x_141_, 1);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v_val_142_);
lean_ctor_set(v___x_143_, 1, v_name_126_);
lean_inc_ref(v_a_122_);
lean_inc(v_a_121_);
lean_inc(v_a_120_);
lean_inc(v_a_119_);
v___x_144_ = lean_apply_7(v_a_118_, v___x_143_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, lean_box(0));
return v___x_144_;
}
else
{
lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
lean_dec(v___x_141_);
lean_dec_ref(v_a_118_);
v___x_145_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__0));
v___x_146_ = 1;
v___x_147_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_125_, v___x_146_);
v___x_148_ = lean_string_append(v___x_145_, v___x_147_);
lean_dec_ref(v___x_147_);
v___x_149_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__1));
v___x_150_ = lean_string_append(v___x_148_, v___x_149_);
v___x_151_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_126_, v___x_146_);
v___x_152_ = lean_string_append(v___x_150_, v___x_151_);
lean_dec_ref(v___x_151_);
v___x_153_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__2));
v___x_154_ = lean_string_append(v___x_152_, v___x_153_);
v___x_155_ = 3;
v___x_156_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_156_, 0, v___x_154_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*1, v___x_155_);
v___x_157_ = lean_array_get_size(v_a_123_);
v___x_158_ = lean_array_push(v_a_123_, v___x_156_);
v___x_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg___boxed(lean_object* v_self_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lake_TargetDecl_fetch___redArg(v_self_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_a_164_);
lean_dec(v_a_163_);
lean_dec(v_a_162_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch(lean_object* v_00_u03b1_169_, lean_object* v_self_170_, lean_object* v_inst_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lake_TargetDecl_fetch___redArg(v_self_170_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___boxed(lean_object* v_00_u03b1_180_, lean_object* v_self_181_, lean_object* v_inst_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lake_TargetDecl_fetch(v_00_u03b1_180_, v_self_181_, v_inst_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec(v_a_185_);
lean_dec(v_a_184_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(lean_object* v_t_191_, lean_object* v_k_192_){
_start:
{
if (lean_obj_tag(v_t_191_) == 0)
{
lean_object* v_k_193_; lean_object* v_v_194_; lean_object* v_l_195_; lean_object* v_r_196_; uint8_t v___x_197_; 
v_k_193_ = lean_ctor_get(v_t_191_, 1);
v_v_194_ = lean_ctor_get(v_t_191_, 2);
v_l_195_ = lean_ctor_get(v_t_191_, 3);
v_r_196_ = lean_ctor_get(v_t_191_, 4);
v___x_197_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_192_, v_k_193_);
switch(v___x_197_)
{
case 0:
{
v_t_191_ = v_l_195_;
goto _start;
}
case 1:
{
lean_object* v___x_199_; 
lean_inc(v_v_194_);
v___x_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_199_, 0, v_v_194_);
return v___x_199_;
}
default: 
{
v_t_191_ = v_r_196_;
goto _start;
}
}
}
else
{
lean_object* v___x_201_; 
v___x_201_ = lean_box(0);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg___boxed(lean_object* v_t_202_, lean_object* v_k_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(v_t_202_, v_k_203_);
lean_dec(v_k_203_);
lean_dec(v_t_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob(lean_object* v_self_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_pkg_213_; lean_object* v_name_214_; lean_object* v_toContext_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_packageMap_227_; lean_object* v___x_228_; 
v_pkg_213_ = lean_ctor_get(v_self_205_, 0);
lean_inc(v_pkg_213_);
v_name_214_ = lean_ctor_get(v_self_205_, 1);
lean_inc(v_name_214_);
lean_dec_ref(v_self_205_);
v_toContext_215_ = lean_ctor_get(v_a_210_, 1);
v___x_216_ = l_unsafeCast___redArg(v_toContext_215_);
v___x_217_ = l_unsafeCast___redArg(v___x_216_);
lean_dec(v___x_216_);
v___x_218_ = l_unsafeCast___redArg(v___x_217_);
lean_dec(v___x_217_);
v___x_219_ = l_unsafeCast___redArg(v___x_218_);
lean_dec(v___x_218_);
v___x_220_ = l_unsafeCast___redArg(v___x_219_);
lean_dec(v___x_219_);
v___x_221_ = l_unsafeCast___redArg(v___x_220_);
lean_dec(v___x_220_);
v___x_222_ = l_unsafeCast___redArg(v___x_221_);
lean_dec(v___x_221_);
v___x_223_ = l_unsafeCast___redArg(v___x_222_);
lean_dec(v___x_222_);
v___x_224_ = l_unsafeCast___redArg(v___x_223_);
lean_dec(v___x_223_);
v___x_225_ = l_unsafeCast___redArg(v___x_224_);
lean_dec(v___x_224_);
v___x_226_ = l_unsafeCast___redArg(v___x_225_);
lean_dec(v___x_225_);
v_packageMap_227_ = lean_ctor_get(v___x_226_, 5);
lean_inc(v_packageMap_227_);
lean_dec(v___x_226_);
v___x_228_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(v_packageMap_227_, v_pkg_213_);
lean_dec(v_packageMap_227_);
if (lean_obj_tag(v___x_228_) == 1)
{
lean_object* v_val_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v_pkg_213_);
v_val_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_val_229_);
lean_dec_ref_known(v___x_228_, 1);
v___x_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_230_, 0, v_val_229_);
lean_ctor_set(v___x_230_, 1, v_name_214_);
lean_inc_ref(v_a_210_);
lean_inc(v_a_209_);
lean_inc(v_a_208_);
lean_inc(v_a_207_);
v___x_231_ = lean_apply_7(v_a_206_, v___x_230_, v_a_207_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, lean_box(0));
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_241_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
v_a_233_ = lean_ctor_get(v___x_231_, 1);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_241_ == 0)
{
v___x_235_ = v___x_231_;
v_isShared_236_ = v_isSharedCheck_241_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_inc(v_a_232_);
lean_dec(v___x_231_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_241_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_237_ = l_Lake_Job_toOpaque___redArg(v_a_232_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v___x_237_);
v___x_239_ = v___x_235_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v_a_233_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
else
{
return v___x_231_;
}
}
else
{
lean_object* v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v___x_228_);
lean_dec_ref(v_a_206_);
v___x_242_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__0));
v___x_243_ = 1;
v___x_244_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_213_, v___x_243_);
v___x_245_ = lean_string_append(v___x_242_, v___x_244_);
lean_dec_ref(v___x_244_);
v___x_246_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__1));
v___x_247_ = lean_string_append(v___x_245_, v___x_246_);
v___x_248_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_214_, v___x_243_);
v___x_249_ = lean_string_append(v___x_247_, v___x_248_);
lean_dec_ref(v___x_248_);
v___x_250_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__2));
v___x_251_ = lean_string_append(v___x_249_, v___x_250_);
v___x_252_ = 3;
v___x_253_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set_uint8(v___x_253_, sizeof(void*)*1, v___x_252_);
v___x_254_ = lean_array_get_size(v_a_211_);
v___x_255_ = lean_array_push(v_a_211_, v___x_253_);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob___boxed(lean_object* v_self_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lake_TargetDecl_fetchJob(v_self_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
lean_dec_ref(v_a_262_);
lean_dec(v_a_261_);
lean_dec(v_a_260_);
lean_dec(v_a_259_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0(lean_object* v_00_u03b2_266_, lean_object* v_inst_267_, lean_object* v_t_268_, lean_object* v_k_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(v_t_268_, v_k_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___boxed(lean_object* v_00_u03b2_271_, lean_object* v_inst_272_, lean_object* v_t_273_, lean_object* v_k_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0(v_00_u03b2_271_, v_inst_272_, v_t_273_, v_k_274_);
lean_dec(v_k_274_);
lean_dec(v_t_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg(lean_object* v_pkg_276_, lean_object* v_self_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_name_285_; lean_object* v_keyName_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_name_285_ = lean_ctor_get(v_self_277_, 0);
v_keyName_286_ = lean_ctor_get(v_pkg_276_, 2);
lean_inc(v_keyName_286_);
v___x_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_287_, 0, v_keyName_286_);
v___x_288_ = l_Lake_Package_keyword;
lean_inc(v_name_285_);
v___x_289_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
lean_ctor_set(v___x_289_, 2, v_pkg_276_);
lean_ctor_set(v___x_289_, 3, v_name_285_);
lean_inc_ref(v_a_282_);
lean_inc(v_a_281_);
lean_inc(v_a_280_);
lean_inc(v_a_279_);
v___x_290_ = lean_apply_7(v_a_278_, v___x_289_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, lean_box(0));
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg___boxed(lean_object* v_pkg_291_, lean_object* v_self_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lake_PackageFacetDecl_fetch___redArg(v_pkg_291_, v_self_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_, v_a_297_, v_a_298_);
lean_dec_ref(v_a_297_);
lean_dec(v_a_296_);
lean_dec(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_self_292_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch(lean_object* v_00_u03b1_301_, lean_object* v_pkg_302_, lean_object* v_self_303_, lean_object* v_inst_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_name_312_; lean_object* v_keyName_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_name_312_ = lean_ctor_get(v_self_303_, 0);
v_keyName_313_ = lean_ctor_get(v_pkg_302_, 2);
lean_inc(v_keyName_313_);
v___x_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_314_, 0, v_keyName_313_);
v___x_315_ = l_Lake_Package_keyword;
lean_inc(v_name_312_);
v___x_316_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_316_, 0, v___x_314_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_ctor_set(v___x_316_, 2, v_pkg_302_);
lean_ctor_set(v___x_316_, 3, v_name_312_);
lean_inc_ref(v_a_309_);
lean_inc(v_a_308_);
lean_inc(v_a_307_);
lean_inc(v_a_306_);
v___x_317_ = lean_apply_7(v_a_305_, v___x_316_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, lean_box(0));
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___boxed(lean_object* v_00_u03b1_318_, lean_object* v_pkg_319_, lean_object* v_self_320_, lean_object* v_inst_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lake_PackageFacetDecl_fetch(v_00_u03b1_318_, v_pkg_319_, v_self_320_, v_inst_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec(v_a_324_);
lean_dec(v_a_323_);
lean_dec_ref(v_self_320_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob(lean_object* v_name_330_, lean_object* v_self_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_keyName_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_keyName_339_ = lean_ctor_get(v_self_331_, 2);
v___x_340_ = l_Lake_Package_keyword;
v___x_341_ = l_Lean_Name_append(v___x_340_, v_name_330_);
lean_inc(v_keyName_339_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v_keyName_339_);
v___x_343_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_340_);
lean_ctor_set(v___x_343_, 2, v_self_331_);
lean_ctor_set(v___x_343_, 3, v___x_341_);
lean_inc_ref(v_a_336_);
lean_inc(v_a_335_);
lean_inc(v_a_334_);
lean_inc(v_a_333_);
v___x_344_ = lean_apply_7(v_a_332_, v___x_343_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, lean_box(0));
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_354_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_a_346_ = lean_ctor_get(v___x_344_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_354_ == 0)
{
v___x_348_ = v___x_344_;
v_isShared_349_ = v_isSharedCheck_354_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_354_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_352_; 
v___x_350_ = l_Lake_Job_toOpaque___redArg(v_a_345_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_350_);
v___x_352_ = v___x_348_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_350_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_a_346_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
else
{
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob___boxed(lean_object* v_name_355_, lean_object* v_self_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lake_Package_fetchFacetJob(v_name_355_, v_self_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_);
lean_dec_ref(v_a_361_);
lean_dec(v_a_360_);
lean_dec(v_a_359_);
lean_dec(v_a_358_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg(lean_object* v_mod_365_, lean_object* v_self_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_lib_374_; lean_object* v_pkg_375_; lean_object* v_name_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_388_; 
v_lib_374_ = lean_ctor_get(v_mod_365_, 0);
v_pkg_375_ = lean_ctor_get(v_lib_374_, 0);
v_name_376_ = lean_ctor_get(v_self_366_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v_self_366_);
if (v_isSharedCheck_388_ == 0)
{
lean_object* v_unused_389_; 
v_unused_389_ = lean_ctor_get(v_self_366_, 1);
lean_dec(v_unused_389_);
v___x_378_ = v_self_366_;
v_isShared_379_ = v_isSharedCheck_388_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_name_376_);
lean_dec(v_self_366_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_388_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v_name_380_; lean_object* v_keyName_381_; lean_object* v___x_383_; 
v_name_380_ = lean_ctor_get(v_mod_365_, 1);
v_keyName_381_ = lean_ctor_get(v_pkg_375_, 2);
lean_inc(v_name_380_);
lean_inc(v_keyName_381_);
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 2);
lean_ctor_set(v___x_378_, 1, v_name_380_);
lean_ctor_set(v___x_378_, 0, v_keyName_381_);
v___x_383_ = v___x_378_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_keyName_381_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_name_380_);
v___x_383_ = v_reuseFailAlloc_387_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = l_Lake_Module_keyword;
v___x_385_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_385_, 0, v___x_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
lean_ctor_set(v___x_385_, 2, v_mod_365_);
lean_ctor_set(v___x_385_, 3, v_name_376_);
lean_inc_ref(v_a_371_);
lean_inc(v_a_370_);
lean_inc(v_a_369_);
lean_inc(v_a_368_);
v___x_386_ = lean_apply_7(v_a_367_, v___x_385_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, lean_box(0));
return v___x_386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg___boxed(lean_object* v_mod_390_, lean_object* v_self_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lake_ModuleFacetDecl_fetch___redArg(v_mod_390_, v_self_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_, v_a_397_);
lean_dec_ref(v_a_396_);
lean_dec(v_a_395_);
lean_dec(v_a_394_);
lean_dec(v_a_393_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch(lean_object* v_00_u03b1_400_, lean_object* v_mod_401_, lean_object* v_self_402_, lean_object* v_inst_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_lib_411_; lean_object* v_pkg_412_; lean_object* v_name_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_425_; 
v_lib_411_ = lean_ctor_get(v_mod_401_, 0);
v_pkg_412_ = lean_ctor_get(v_lib_411_, 0);
v_name_413_ = lean_ctor_get(v_self_402_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v_self_402_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v_self_402_, 1);
lean_dec(v_unused_426_);
v___x_415_ = v_self_402_;
v_isShared_416_ = v_isSharedCheck_425_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_name_413_);
lean_dec(v_self_402_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_425_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v_name_417_; lean_object* v_keyName_418_; lean_object* v___x_420_; 
v_name_417_ = lean_ctor_get(v_mod_401_, 1);
v_keyName_418_ = lean_ctor_get(v_pkg_412_, 2);
lean_inc(v_name_417_);
lean_inc(v_keyName_418_);
if (v_isShared_416_ == 0)
{
lean_ctor_set_tag(v___x_415_, 2);
lean_ctor_set(v___x_415_, 1, v_name_417_);
lean_ctor_set(v___x_415_, 0, v_keyName_418_);
v___x_420_ = v___x_415_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_keyName_418_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_name_417_);
v___x_420_ = v_reuseFailAlloc_424_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_421_ = l_Lake_Module_keyword;
v___x_422_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_422_, 0, v___x_420_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
lean_ctor_set(v___x_422_, 2, v_mod_401_);
lean_ctor_set(v___x_422_, 3, v_name_413_);
lean_inc_ref(v_a_408_);
lean_inc(v_a_407_);
lean_inc(v_a_406_);
lean_inc(v_a_405_);
v___x_423_ = lean_apply_7(v_a_404_, v___x_422_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, lean_box(0));
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___boxed(lean_object* v_00_u03b1_427_, lean_object* v_mod_428_, lean_object* v_self_429_, lean_object* v_inst_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lake_ModuleFacetDecl_fetch(v_00_u03b1_427_, v_mod_428_, v_self_429_, v_inst_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec(v_a_433_);
lean_dec(v_a_432_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob(lean_object* v_name_439_, lean_object* v_self_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_lib_448_; lean_object* v_pkg_449_; lean_object* v_name_450_; lean_object* v_keyName_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_lib_448_ = lean_ctor_get(v_self_440_, 0);
v_pkg_449_ = lean_ctor_get(v_lib_448_, 0);
v_name_450_ = lean_ctor_get(v_self_440_, 1);
v_keyName_451_ = lean_ctor_get(v_pkg_449_, 2);
v___x_452_ = l_Lake_Module_keyword;
v___x_453_ = l_Lean_Name_append(v___x_452_, v_name_439_);
lean_inc(v_name_450_);
lean_inc(v_keyName_451_);
v___x_454_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_454_, 0, v_keyName_451_);
lean_ctor_set(v___x_454_, 1, v_name_450_);
v___x_455_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_452_);
lean_ctor_set(v___x_455_, 2, v_self_440_);
lean_ctor_set(v___x_455_, 3, v___x_453_);
lean_inc_ref(v_a_445_);
lean_inc(v_a_444_);
lean_inc(v_a_443_);
lean_inc(v_a_442_);
v___x_456_ = lean_apply_7(v_a_441_, v___x_455_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, lean_box(0));
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_466_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
v_a_458_ = lean_ctor_get(v___x_456_, 1);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_466_ == 0)
{
v___x_460_ = v___x_456_;
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_inc(v_a_457_);
lean_dec(v___x_456_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_462_ = l_Lake_Job_toOpaque___redArg(v_a_457_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v_a_458_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
else
{
return v___x_456_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob___boxed(lean_object* v_name_467_, lean_object* v_self_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lake_Module_fetchFacetJob(v_name_467_, v_self_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_);
lean_dec_ref(v_a_473_);
lean_dec(v_a_472_);
lean_dec(v_a_471_);
lean_dec(v_a_470_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get___redArg(lean_object* v_self_477_, lean_object* v_inst_478_, lean_object* v_inst_479_, lean_object* v_inst_480_){
_start:
{
lean_object* v_toApplicative_481_; lean_object* v_toFunctor_482_; lean_object* v_toBind_483_; lean_object* v_toPure_484_; lean_object* v_pkg_485_; lean_object* v_name_486_; lean_object* v_config_487_; lean_object* v_map_488_; lean_object* v___f_489_; lean_object* v___f_490_; lean_object* v___f_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_toApplicative_481_ = lean_ctor_get(v_inst_478_, 0);
lean_inc_ref(v_toApplicative_481_);
v_toFunctor_482_ = lean_ctor_get(v_toApplicative_481_, 0);
lean_inc_ref(v_toFunctor_482_);
v_toBind_483_ = lean_ctor_get(v_inst_478_, 1);
lean_inc(v_toBind_483_);
lean_dec_ref(v_inst_478_);
v_toPure_484_ = lean_ctor_get(v_toApplicative_481_, 1);
lean_inc(v_toPure_484_);
lean_dec_ref(v_toApplicative_481_);
v_pkg_485_ = lean_ctor_get(v_self_477_, 0);
lean_inc_n(v_pkg_485_, 2);
v_name_486_ = lean_ctor_get(v_self_477_, 1);
lean_inc(v_name_486_);
v_config_487_ = lean_ctor_get(v_self_477_, 3);
lean_inc(v_config_487_);
lean_dec_ref(v_self_477_);
v_map_488_ = lean_ctor_get(v_toFunctor_482_, 0);
lean_inc_n(v_map_488_, 2);
lean_dec_ref(v_toFunctor_482_);
v___f_489_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_490_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_490_, 0, v_name_486_);
lean_closure_set(v___f_490_, 1, v_config_487_);
lean_closure_set(v___f_490_, 2, v_toPure_484_);
lean_closure_set(v___f_490_, 3, v_pkg_485_);
lean_closure_set(v___f_490_, 4, v_inst_479_);
v___f_491_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_491_, 0, v_pkg_485_);
v___x_492_ = lean_apply_4(v_map_488_, lean_box(0), lean_box(0), v___f_489_, v_inst_480_);
v___x_493_ = lean_apply_4(v_map_488_, lean_box(0), lean_box(0), v___f_491_, v___x_492_);
v___x_494_ = lean_apply_4(v_toBind_483_, lean_box(0), lean_box(0), v___x_493_, v___f_490_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get(lean_object* v_m_495_, lean_object* v_self_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_){
_start:
{
lean_object* v_toApplicative_500_; lean_object* v_toFunctor_501_; lean_object* v_toBind_502_; lean_object* v_toPure_503_; lean_object* v_pkg_504_; lean_object* v_name_505_; lean_object* v_config_506_; lean_object* v_map_507_; lean_object* v___f_508_; lean_object* v___f_509_; lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_toApplicative_500_ = lean_ctor_get(v_inst_497_, 0);
lean_inc_ref(v_toApplicative_500_);
v_toFunctor_501_ = lean_ctor_get(v_toApplicative_500_, 0);
lean_inc_ref(v_toFunctor_501_);
v_toBind_502_ = lean_ctor_get(v_inst_497_, 1);
lean_inc(v_toBind_502_);
lean_dec_ref(v_inst_497_);
v_toPure_503_ = lean_ctor_get(v_toApplicative_500_, 1);
lean_inc(v_toPure_503_);
lean_dec_ref(v_toApplicative_500_);
v_pkg_504_ = lean_ctor_get(v_self_496_, 0);
lean_inc_n(v_pkg_504_, 2);
v_name_505_ = lean_ctor_get(v_self_496_, 1);
lean_inc(v_name_505_);
v_config_506_ = lean_ctor_get(v_self_496_, 3);
lean_inc(v_config_506_);
lean_dec_ref(v_self_496_);
v_map_507_ = lean_ctor_get(v_toFunctor_501_, 0);
lean_inc_n(v_map_507_, 2);
lean_dec_ref(v_toFunctor_501_);
v___f_508_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_509_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_509_, 0, v_name_505_);
lean_closure_set(v___f_509_, 1, v_config_506_);
lean_closure_set(v___f_509_, 2, v_toPure_503_);
lean_closure_set(v___f_509_, 3, v_pkg_504_);
lean_closure_set(v___f_509_, 4, v_inst_498_);
v___f_510_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_510_, 0, v_pkg_504_);
v___x_511_ = lean_apply_4(v_map_507_, lean_box(0), lean_box(0), v___f_508_, v_inst_499_);
v___x_512_ = lean_apply_4(v_map_507_, lean_box(0), lean_box(0), v___f_510_, v___x_511_);
v___x_513_ = lean_apply_4(v_toBind_502_, lean_box(0), lean_box(0), v___x_512_, v___f_509_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch(lean_object* v_self_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_){
_start:
{
lean_object* v_pkg_525_; lean_object* v_name_526_; lean_object* v_keyName_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_pkg_525_ = lean_ctor_get(v_self_517_, 0);
v_name_526_ = lean_ctor_get(v_self_517_, 1);
v_keyName_527_ = lean_ctor_get(v_pkg_525_, 2);
v___x_528_ = l_Lake_LeanLib_defaultFacet;
lean_inc(v_name_526_);
lean_inc(v_keyName_527_);
v___x_529_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_529_, 0, v_keyName_527_);
lean_ctor_set(v___x_529_, 1, v_name_526_);
v___x_530_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_531_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
lean_ctor_set(v___x_531_, 2, v_self_517_);
lean_ctor_set(v___x_531_, 3, v___x_528_);
lean_inc_ref(v_a_522_);
lean_inc(v_a_521_);
lean_inc(v_a_520_);
lean_inc(v_a_519_);
v___x_532_ = lean_apply_7(v_a_518_, v___x_531_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, lean_box(0));
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch___boxed(lean_object* v_self_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lake_LeanLib_fetch(v_self_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec(v_a_536_);
lean_dec(v_a_535_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch(lean_object* v_self_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_){
_start:
{
lean_object* v_pkg_550_; lean_object* v_name_551_; lean_object* v_config_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_598_; 
v_pkg_550_ = lean_ctor_get(v_self_542_, 0);
v_name_551_ = lean_ctor_get(v_self_542_, 1);
v_config_552_ = lean_ctor_get(v_self_542_, 3);
v_isSharedCheck_598_ = !lean_is_exclusive(v_self_542_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v_self_542_, 2);
lean_dec(v_unused_599_);
v___x_554_ = v_self_542_;
v_isShared_555_ = v_isSharedCheck_598_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_config_552_);
lean_inc(v_name_551_);
lean_inc(v_pkg_550_);
lean_dec(v_self_542_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_598_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v_toContext_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_packageMap_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_toContext_556_ = lean_ctor_get(v_a_547_, 1);
v___x_557_ = l_unsafeCast___redArg(v_toContext_556_);
v___x_558_ = l_unsafeCast___redArg(v___x_557_);
lean_dec(v___x_557_);
v___x_559_ = l_unsafeCast___redArg(v___x_558_);
lean_dec(v___x_558_);
v___x_560_ = l_unsafeCast___redArg(v___x_559_);
lean_dec(v___x_559_);
v___x_561_ = l_unsafeCast___redArg(v___x_560_);
lean_dec(v___x_560_);
v___x_562_ = l_unsafeCast___redArg(v___x_561_);
lean_dec(v___x_561_);
v___x_563_ = l_unsafeCast___redArg(v___x_562_);
lean_dec(v___x_562_);
v___x_564_ = l_unsafeCast___redArg(v___x_563_);
lean_dec(v___x_563_);
v___x_565_ = l_unsafeCast___redArg(v___x_564_);
lean_dec(v___x_564_);
v___x_566_ = l_unsafeCast___redArg(v___x_565_);
lean_dec(v___x_565_);
v___x_567_ = l_unsafeCast___redArg(v___x_566_);
lean_dec(v___x_566_);
v___x_568_ = l_unsafeCast___redArg(v___x_567_);
lean_dec(v___x_567_);
v___x_569_ = l_unsafeCast___redArg(v___x_568_);
lean_dec(v___x_568_);
v_packageMap_570_ = lean_ctor_get(v___x_569_, 5);
lean_inc(v_packageMap_570_);
lean_dec(v___x_569_);
v___x_571_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
lean_inc(v_pkg_550_);
v___x_572_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_571_, v_packageMap_570_, v_pkg_550_);
if (lean_obj_tag(v___x_572_) == 1)
{
lean_object* v_val_573_; lean_object* v_keyName_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
lean_dec(v_pkg_550_);
v_val_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v___x_572_, 1);
v_keyName_574_ = lean_ctor_get(v_val_573_, 2);
lean_inc(v_keyName_574_);
v___x_575_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
lean_inc(v_name_551_);
v___x_576_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_576_, 0, v_val_573_);
lean_ctor_set(v___x_576_, 1, v_name_551_);
lean_ctor_set(v___x_576_, 2, v_config_552_);
v___x_577_ = l_Lake_LeanLib_defaultFacet;
v___x_578_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_578_, 0, v_keyName_574_);
lean_ctor_set(v___x_578_, 1, v_name_551_);
if (v_isShared_555_ == 0)
{
lean_ctor_set_tag(v___x_554_, 1);
lean_ctor_set(v___x_554_, 3, v___x_577_);
lean_ctor_set(v___x_554_, 2, v___x_576_);
lean_ctor_set(v___x_554_, 1, v___x_575_);
lean_ctor_set(v___x_554_, 0, v___x_578_);
v___x_580_ = v___x_554_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v___x_577_);
v___x_580_ = v_reuseFailAlloc_582_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; 
lean_inc_ref(v_a_547_);
lean_inc(v_a_546_);
lean_inc(v_a_545_);
lean_inc(v_a_544_);
v___x_581_ = lean_apply_7(v_a_543_, v___x_580_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, lean_box(0));
return v___x_581_;
}
}
else
{
lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec(v___x_572_);
lean_del_object(v___x_554_);
lean_dec(v_config_552_);
lean_dec_ref(v_a_543_);
v___x_583_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__0));
v___x_584_ = 1;
v___x_585_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_550_, v___x_584_);
v___x_586_ = lean_string_append(v___x_583_, v___x_585_);
lean_dec_ref(v___x_585_);
v___x_587_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__1));
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
v___x_589_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_551_, v___x_584_);
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__2));
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
v___x_593_ = 3;
v___x_594_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set_uint8(v___x_594_, sizeof(void*)*1, v___x_593_);
v___x_595_ = lean_array_get_size(v_a_548_);
v___x_596_ = lean_array_push(v_a_548_, v___x_594_);
v___x_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_595_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
return v___x_597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch___boxed(lean_object* v_self_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lake_LeanLibDecl_fetch(v_self_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec(v_a_603_);
lean_dec(v_a_602_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg(lean_object* v_lib_609_, lean_object* v_self_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_pkg_618_; lean_object* v_name_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_631_; 
v_pkg_618_ = lean_ctor_get(v_lib_609_, 0);
v_name_619_ = lean_ctor_get(v_self_610_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_self_610_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v_self_610_, 1);
lean_dec(v_unused_632_);
v___x_621_ = v_self_610_;
v_isShared_622_ = v_isSharedCheck_631_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_name_619_);
lean_dec(v_self_610_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_631_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v_name_623_; lean_object* v_keyName_624_; lean_object* v___x_626_; 
v_name_623_ = lean_ctor_get(v_lib_609_, 1);
v_keyName_624_ = lean_ctor_get(v_pkg_618_, 2);
lean_inc(v_name_623_);
lean_inc(v_keyName_624_);
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 3);
lean_ctor_set(v___x_621_, 1, v_name_623_);
lean_ctor_set(v___x_621_, 0, v_keyName_624_);
v___x_626_ = v___x_621_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_keyName_624_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_name_623_);
v___x_626_ = v_reuseFailAlloc_630_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_627_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_628_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
lean_ctor_set(v___x_628_, 2, v_lib_609_);
lean_ctor_set(v___x_628_, 3, v_name_619_);
lean_inc_ref(v_a_615_);
lean_inc(v_a_614_);
lean_inc(v_a_613_);
lean_inc(v_a_612_);
v___x_629_ = lean_apply_7(v_a_611_, v___x_628_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, lean_box(0));
return v___x_629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg___boxed(lean_object* v_lib_633_, lean_object* v_self_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lake_LibraryFacetDecl_fetch___redArg(v_lib_633_, v_self_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec(v_a_638_);
lean_dec(v_a_637_);
lean_dec(v_a_636_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch(lean_object* v_00_u03b1_643_, lean_object* v_lib_644_, lean_object* v_self_645_, lean_object* v_inst_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_pkg_654_; lean_object* v_name_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_667_; 
v_pkg_654_ = lean_ctor_get(v_lib_644_, 0);
v_name_655_ = lean_ctor_get(v_self_645_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v_self_645_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v_self_645_, 1);
lean_dec(v_unused_668_);
v___x_657_ = v_self_645_;
v_isShared_658_ = v_isSharedCheck_667_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_name_655_);
lean_dec(v_self_645_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_667_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_name_659_; lean_object* v_keyName_660_; lean_object* v___x_662_; 
v_name_659_ = lean_ctor_get(v_lib_644_, 1);
v_keyName_660_ = lean_ctor_get(v_pkg_654_, 2);
lean_inc(v_name_659_);
lean_inc(v_keyName_660_);
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 3);
lean_ctor_set(v___x_657_, 1, v_name_659_);
lean_ctor_set(v___x_657_, 0, v_keyName_660_);
v___x_662_ = v___x_657_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_keyName_660_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_name_659_);
v___x_662_ = v_reuseFailAlloc_666_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_663_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_664_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
lean_ctor_set(v___x_664_, 2, v_lib_644_);
lean_ctor_set(v___x_664_, 3, v_name_655_);
lean_inc_ref(v_a_651_);
lean_inc(v_a_650_);
lean_inc(v_a_649_);
lean_inc(v_a_648_);
v___x_665_ = lean_apply_7(v_a_647_, v___x_664_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, lean_box(0));
return v___x_665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___boxed(lean_object* v_00_u03b1_669_, lean_object* v_lib_670_, lean_object* v_self_671_, lean_object* v_inst_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lake_LibraryFacetDecl_fetch(v_00_u03b1_669_, v_lib_670_, v_self_671_, v_inst_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec(v_a_675_);
lean_dec(v_a_674_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob(lean_object* v_name_681_, lean_object* v_self_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_pkg_690_; lean_object* v_name_691_; lean_object* v_keyName_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_pkg_690_ = lean_ctor_get(v_self_682_, 0);
v_name_691_ = lean_ctor_get(v_self_682_, 1);
v_keyName_692_ = lean_ctor_get(v_pkg_690_, 2);
v___x_693_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_694_ = l_Lean_Name_append(v___x_693_, v_name_681_);
lean_inc(v_name_691_);
lean_inc(v_keyName_692_);
v___x_695_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_695_, 0, v_keyName_692_);
lean_ctor_set(v___x_695_, 1, v_name_691_);
v___x_696_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
lean_ctor_set(v___x_696_, 1, v___x_693_);
lean_ctor_set(v___x_696_, 2, v_self_682_);
lean_ctor_set(v___x_696_, 3, v___x_694_);
lean_inc_ref(v_a_687_);
lean_inc(v_a_686_);
lean_inc(v_a_685_);
lean_inc(v_a_684_);
v___x_697_ = lean_apply_7(v_a_683_, v___x_696_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, lean_box(0));
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_707_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_a_699_ = lean_ctor_get(v___x_697_, 1);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_707_ == 0)
{
v___x_701_ = v___x_697_;
v_isShared_702_ = v_isSharedCheck_707_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_707_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_703_ = l_Lake_Job_toOpaque___redArg(v_a_698_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 0, v___x_703_);
v___x_705_ = v___x_701_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_a_699_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
else
{
return v___x_697_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob___boxed(lean_object* v_name_708_, lean_object* v_self_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lake_LeanLib_fetchFacetJob(v_name_708_, v_self_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec(v_a_712_);
lean_dec(v_a_711_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get___redArg(lean_object* v_self_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_inst_721_){
_start:
{
lean_object* v_toApplicative_722_; lean_object* v_toFunctor_723_; lean_object* v_toBind_724_; lean_object* v_toPure_725_; lean_object* v_pkg_726_; lean_object* v_name_727_; lean_object* v_config_728_; lean_object* v_map_729_; lean_object* v___f_730_; lean_object* v___f_731_; lean_object* v___f_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_toApplicative_722_ = lean_ctor_get(v_inst_719_, 0);
lean_inc_ref(v_toApplicative_722_);
v_toFunctor_723_ = lean_ctor_get(v_toApplicative_722_, 0);
lean_inc_ref(v_toFunctor_723_);
v_toBind_724_ = lean_ctor_get(v_inst_719_, 1);
lean_inc(v_toBind_724_);
lean_dec_ref(v_inst_719_);
v_toPure_725_ = lean_ctor_get(v_toApplicative_722_, 1);
lean_inc(v_toPure_725_);
lean_dec_ref(v_toApplicative_722_);
v_pkg_726_ = lean_ctor_get(v_self_718_, 0);
lean_inc_n(v_pkg_726_, 2);
v_name_727_ = lean_ctor_get(v_self_718_, 1);
lean_inc(v_name_727_);
v_config_728_ = lean_ctor_get(v_self_718_, 3);
lean_inc(v_config_728_);
lean_dec_ref(v_self_718_);
v_map_729_ = lean_ctor_get(v_toFunctor_723_, 0);
lean_inc_n(v_map_729_, 2);
lean_dec_ref(v_toFunctor_723_);
v___f_730_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_731_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_731_, 0, v_name_727_);
lean_closure_set(v___f_731_, 1, v_config_728_);
lean_closure_set(v___f_731_, 2, v_toPure_725_);
lean_closure_set(v___f_731_, 3, v_pkg_726_);
lean_closure_set(v___f_731_, 4, v_inst_720_);
v___f_732_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_732_, 0, v_pkg_726_);
v___x_733_ = lean_apply_4(v_map_729_, lean_box(0), lean_box(0), v___f_730_, v_inst_721_);
v___x_734_ = lean_apply_4(v_map_729_, lean_box(0), lean_box(0), v___f_732_, v___x_733_);
v___x_735_ = lean_apply_4(v_toBind_724_, lean_box(0), lean_box(0), v___x_734_, v___f_731_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get(lean_object* v_m_736_, lean_object* v_self_737_, lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_inst_740_){
_start:
{
lean_object* v_toApplicative_741_; lean_object* v_toFunctor_742_; lean_object* v_toBind_743_; lean_object* v_toPure_744_; lean_object* v_pkg_745_; lean_object* v_name_746_; lean_object* v_config_747_; lean_object* v_map_748_; lean_object* v___f_749_; lean_object* v___f_750_; lean_object* v___f_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_toApplicative_741_ = lean_ctor_get(v_inst_738_, 0);
lean_inc_ref(v_toApplicative_741_);
v_toFunctor_742_ = lean_ctor_get(v_toApplicative_741_, 0);
lean_inc_ref(v_toFunctor_742_);
v_toBind_743_ = lean_ctor_get(v_inst_738_, 1);
lean_inc(v_toBind_743_);
lean_dec_ref(v_inst_738_);
v_toPure_744_ = lean_ctor_get(v_toApplicative_741_, 1);
lean_inc(v_toPure_744_);
lean_dec_ref(v_toApplicative_741_);
v_pkg_745_ = lean_ctor_get(v_self_737_, 0);
lean_inc_n(v_pkg_745_, 2);
v_name_746_ = lean_ctor_get(v_self_737_, 1);
lean_inc(v_name_746_);
v_config_747_ = lean_ctor_get(v_self_737_, 3);
lean_inc(v_config_747_);
lean_dec_ref(v_self_737_);
v_map_748_ = lean_ctor_get(v_toFunctor_742_, 0);
lean_inc_n(v_map_748_, 2);
lean_dec_ref(v_toFunctor_742_);
v___f_749_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_750_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_750_, 0, v_name_746_);
lean_closure_set(v___f_750_, 1, v_config_747_);
lean_closure_set(v___f_750_, 2, v_toPure_744_);
lean_closure_set(v___f_750_, 3, v_pkg_745_);
lean_closure_set(v___f_750_, 4, v_inst_739_);
v___f_751_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_751_, 0, v_pkg_745_);
v___x_752_ = lean_apply_4(v_map_748_, lean_box(0), lean_box(0), v___f_749_, v_inst_740_);
v___x_753_ = lean_apply_4(v_map_748_, lean_box(0), lean_box(0), v___f_751_, v___x_752_);
v___x_754_ = lean_apply_4(v_toBind_743_, lean_box(0), lean_box(0), v___x_753_, v___f_750_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch(lean_object* v_self_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_pkg_763_; lean_object* v_name_764_; lean_object* v_keyName_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_pkg_763_ = lean_ctor_get(v_self_755_, 0);
v_name_764_ = lean_ctor_get(v_self_755_, 1);
v_keyName_765_ = lean_ctor_get(v_pkg_763_, 2);
v___x_766_ = l_Lake_LeanExe_exeFacet;
lean_inc(v_name_764_);
lean_inc(v_keyName_765_);
v___x_767_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_767_, 0, v_keyName_765_);
lean_ctor_set(v___x_767_, 1, v_name_764_);
v___x_768_ = l_Lake_LeanExe_keyword;
v___x_769_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
lean_ctor_set(v___x_769_, 2, v_self_755_);
lean_ctor_set(v___x_769_, 3, v___x_766_);
lean_inc_ref(v_a_760_);
lean_inc(v_a_759_);
lean_inc(v_a_758_);
lean_inc(v_a_757_);
v___x_770_ = lean_apply_7(v_a_756_, v___x_769_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, lean_box(0));
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch___boxed(lean_object* v_self_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lake_LeanExe_fetch(v_self_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec(v_a_774_);
lean_dec(v_a_773_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch(lean_object* v_self_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
lean_object* v_pkg_788_; lean_object* v_name_789_; lean_object* v_config_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_836_; 
v_pkg_788_ = lean_ctor_get(v_self_780_, 0);
v_name_789_ = lean_ctor_get(v_self_780_, 1);
v_config_790_ = lean_ctor_get(v_self_780_, 3);
v_isSharedCheck_836_ = !lean_is_exclusive(v_self_780_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v_self_780_, 2);
lean_dec(v_unused_837_);
v___x_792_ = v_self_780_;
v_isShared_793_ = v_isSharedCheck_836_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_config_790_);
lean_inc(v_name_789_);
lean_inc(v_pkg_788_);
lean_dec(v_self_780_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_836_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v_toContext_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v_packageMap_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_toContext_794_ = lean_ctor_get(v_a_785_, 1);
v___x_795_ = l_unsafeCast___redArg(v_toContext_794_);
v___x_796_ = l_unsafeCast___redArg(v___x_795_);
lean_dec(v___x_795_);
v___x_797_ = l_unsafeCast___redArg(v___x_796_);
lean_dec(v___x_796_);
v___x_798_ = l_unsafeCast___redArg(v___x_797_);
lean_dec(v___x_797_);
v___x_799_ = l_unsafeCast___redArg(v___x_798_);
lean_dec(v___x_798_);
v___x_800_ = l_unsafeCast___redArg(v___x_799_);
lean_dec(v___x_799_);
v___x_801_ = l_unsafeCast___redArg(v___x_800_);
lean_dec(v___x_800_);
v___x_802_ = l_unsafeCast___redArg(v___x_801_);
lean_dec(v___x_801_);
v___x_803_ = l_unsafeCast___redArg(v___x_802_);
lean_dec(v___x_802_);
v___x_804_ = l_unsafeCast___redArg(v___x_803_);
lean_dec(v___x_803_);
v___x_805_ = l_unsafeCast___redArg(v___x_804_);
lean_dec(v___x_804_);
v___x_806_ = l_unsafeCast___redArg(v___x_805_);
lean_dec(v___x_805_);
v___x_807_ = l_unsafeCast___redArg(v___x_806_);
lean_dec(v___x_806_);
v_packageMap_808_ = lean_ctor_get(v___x_807_, 5);
lean_inc(v_packageMap_808_);
lean_dec(v___x_807_);
v___x_809_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
lean_inc(v_pkg_788_);
v___x_810_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_809_, v_packageMap_808_, v_pkg_788_);
if (lean_obj_tag(v___x_810_) == 1)
{
lean_object* v_val_811_; lean_object* v_keyName_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
lean_dec(v_pkg_788_);
v_val_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_val_811_);
lean_dec_ref_known(v___x_810_, 1);
v_keyName_812_ = lean_ctor_get(v_val_811_, 2);
lean_inc(v_keyName_812_);
v___x_813_ = l_Lake_LeanExe_keyword;
lean_inc(v_name_789_);
v___x_814_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_814_, 0, v_val_811_);
lean_ctor_set(v___x_814_, 1, v_name_789_);
lean_ctor_set(v___x_814_, 2, v_config_790_);
v___x_815_ = l_Lake_LeanExe_exeFacet;
v___x_816_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_816_, 0, v_keyName_812_);
lean_ctor_set(v___x_816_, 1, v_name_789_);
if (v_isShared_793_ == 0)
{
lean_ctor_set_tag(v___x_792_, 1);
lean_ctor_set(v___x_792_, 3, v___x_815_);
lean_ctor_set(v___x_792_, 2, v___x_814_);
lean_ctor_set(v___x_792_, 1, v___x_813_);
lean_ctor_set(v___x_792_, 0, v___x_816_);
v___x_818_ = v___x_792_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_816_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_820_, 2, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_820_, 3, v___x_815_);
v___x_818_ = v_reuseFailAlloc_820_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
lean_object* v___x_819_; 
lean_inc_ref(v_a_785_);
lean_inc(v_a_784_);
lean_inc(v_a_783_);
lean_inc(v_a_782_);
v___x_819_ = lean_apply_7(v_a_781_, v___x_818_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, lean_box(0));
return v___x_819_;
}
}
else
{
lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
lean_dec(v___x_810_);
lean_del_object(v___x_792_);
lean_dec(v_config_790_);
lean_dec_ref(v_a_781_);
v___x_821_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__0));
v___x_822_ = 1;
v___x_823_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_788_, v___x_822_);
v___x_824_ = lean_string_append(v___x_821_, v___x_823_);
lean_dec_ref(v___x_823_);
v___x_825_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__1));
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
v___x_827_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_789_, v___x_822_);
v___x_828_ = lean_string_append(v___x_826_, v___x_827_);
lean_dec_ref(v___x_827_);
v___x_829_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__2));
v___x_830_ = lean_string_append(v___x_828_, v___x_829_);
v___x_831_ = 3;
v___x_832_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*1, v___x_831_);
v___x_833_ = lean_array_get_size(v_a_786_);
v___x_834_ = lean_array_push(v_a_786_, v___x_832_);
v___x_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
return v___x_835_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch___boxed(lean_object* v_self_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lake_LeanExeDecl_fetch(v_self_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
lean_dec_ref(v_a_843_);
lean_dec(v_a_842_);
lean_dec(v_a_841_);
lean_dec(v_a_840_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch(lean_object* v_self_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_pkg_855_; lean_object* v_name_856_; lean_object* v_keyName_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_pkg_855_ = lean_ctor_get(v_self_847_, 0);
v_name_856_ = lean_ctor_get(v_self_847_, 1);
v_keyName_857_ = lean_ctor_get(v_pkg_855_, 2);
v___x_858_ = l_Lake_InputFile_defaultFacet;
lean_inc(v_name_856_);
lean_inc(v_keyName_857_);
v___x_859_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_859_, 0, v_keyName_857_);
lean_ctor_set(v___x_859_, 1, v_name_856_);
v___x_860_ = l_Lake_InputFile_keyword;
v___x_861_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_861_, 0, v___x_859_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
lean_ctor_set(v___x_861_, 2, v_self_847_);
lean_ctor_set(v___x_861_, 3, v___x_858_);
lean_inc_ref(v_a_852_);
lean_inc(v_a_851_);
lean_inc(v_a_850_);
lean_inc(v_a_849_);
v___x_862_ = lean_apply_7(v_a_848_, v___x_861_, v_a_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, lean_box(0));
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch___boxed(lean_object* v_self_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lake_InputFile_fetch(v_self_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_);
lean_dec_ref(v_a_868_);
lean_dec(v_a_867_);
lean_dec(v_a_866_);
lean_dec(v_a_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get___redArg(lean_object* v_self_872_, lean_object* v_inst_873_, lean_object* v_inst_874_, lean_object* v_inst_875_){
_start:
{
lean_object* v_toApplicative_876_; lean_object* v_toFunctor_877_; lean_object* v_toBind_878_; lean_object* v_toPure_879_; lean_object* v_pkg_880_; lean_object* v_name_881_; lean_object* v_config_882_; lean_object* v_map_883_; lean_object* v___f_884_; lean_object* v___f_885_; lean_object* v___f_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_toApplicative_876_ = lean_ctor_get(v_inst_873_, 0);
lean_inc_ref(v_toApplicative_876_);
v_toFunctor_877_ = lean_ctor_get(v_toApplicative_876_, 0);
lean_inc_ref(v_toFunctor_877_);
v_toBind_878_ = lean_ctor_get(v_inst_873_, 1);
lean_inc(v_toBind_878_);
lean_dec_ref(v_inst_873_);
v_toPure_879_ = lean_ctor_get(v_toApplicative_876_, 1);
lean_inc(v_toPure_879_);
lean_dec_ref(v_toApplicative_876_);
v_pkg_880_ = lean_ctor_get(v_self_872_, 0);
lean_inc_n(v_pkg_880_, 2);
v_name_881_ = lean_ctor_get(v_self_872_, 1);
lean_inc(v_name_881_);
v_config_882_ = lean_ctor_get(v_self_872_, 3);
lean_inc(v_config_882_);
lean_dec_ref(v_self_872_);
v_map_883_ = lean_ctor_get(v_toFunctor_877_, 0);
lean_inc_n(v_map_883_, 2);
lean_dec_ref(v_toFunctor_877_);
v___f_884_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_885_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_885_, 0, v_name_881_);
lean_closure_set(v___f_885_, 1, v_config_882_);
lean_closure_set(v___f_885_, 2, v_toPure_879_);
lean_closure_set(v___f_885_, 3, v_pkg_880_);
lean_closure_set(v___f_885_, 4, v_inst_874_);
v___f_886_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_886_, 0, v_pkg_880_);
v___x_887_ = lean_apply_4(v_map_883_, lean_box(0), lean_box(0), v___f_884_, v_inst_875_);
v___x_888_ = lean_apply_4(v_map_883_, lean_box(0), lean_box(0), v___f_886_, v___x_887_);
v___x_889_ = lean_apply_4(v_toBind_878_, lean_box(0), lean_box(0), v___x_888_, v___f_885_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get(lean_object* v_m_890_, lean_object* v_self_891_, lean_object* v_inst_892_, lean_object* v_inst_893_, lean_object* v_inst_894_){
_start:
{
lean_object* v_toApplicative_895_; lean_object* v_toFunctor_896_; lean_object* v_toBind_897_; lean_object* v_toPure_898_; lean_object* v_pkg_899_; lean_object* v_name_900_; lean_object* v_config_901_; lean_object* v_map_902_; lean_object* v___f_903_; lean_object* v___f_904_; lean_object* v___f_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v_toApplicative_895_ = lean_ctor_get(v_inst_892_, 0);
lean_inc_ref(v_toApplicative_895_);
v_toFunctor_896_ = lean_ctor_get(v_toApplicative_895_, 0);
lean_inc_ref(v_toFunctor_896_);
v_toBind_897_ = lean_ctor_get(v_inst_892_, 1);
lean_inc(v_toBind_897_);
lean_dec_ref(v_inst_892_);
v_toPure_898_ = lean_ctor_get(v_toApplicative_895_, 1);
lean_inc(v_toPure_898_);
lean_dec_ref(v_toApplicative_895_);
v_pkg_899_ = lean_ctor_get(v_self_891_, 0);
lean_inc_n(v_pkg_899_, 2);
v_name_900_ = lean_ctor_get(v_self_891_, 1);
lean_inc(v_name_900_);
v_config_901_ = lean_ctor_get(v_self_891_, 3);
lean_inc(v_config_901_);
lean_dec_ref(v_self_891_);
v_map_902_ = lean_ctor_get(v_toFunctor_896_, 0);
lean_inc_n(v_map_902_, 2);
lean_dec_ref(v_toFunctor_896_);
v___f_903_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_904_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_904_, 0, v_name_900_);
lean_closure_set(v___f_904_, 1, v_config_901_);
lean_closure_set(v___f_904_, 2, v_toPure_898_);
lean_closure_set(v___f_904_, 3, v_pkg_899_);
lean_closure_set(v___f_904_, 4, v_inst_893_);
v___f_905_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_905_, 0, v_pkg_899_);
v___x_906_ = lean_apply_4(v_map_902_, lean_box(0), lean_box(0), v___f_903_, v_inst_894_);
v___x_907_ = lean_apply_4(v_map_902_, lean_box(0), lean_box(0), v___f_905_, v___x_906_);
v___x_908_ = lean_apply_4(v_toBind_897_, lean_box(0), lean_box(0), v___x_907_, v___f_904_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch(lean_object* v_self_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_pkg_917_; lean_object* v_name_918_; lean_object* v_config_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_965_; 
v_pkg_917_ = lean_ctor_get(v_self_909_, 0);
v_name_918_ = lean_ctor_get(v_self_909_, 1);
v_config_919_ = lean_ctor_get(v_self_909_, 3);
v_isSharedCheck_965_ = !lean_is_exclusive(v_self_909_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; 
v_unused_966_ = lean_ctor_get(v_self_909_, 2);
lean_dec(v_unused_966_);
v___x_921_ = v_self_909_;
v_isShared_922_ = v_isSharedCheck_965_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_config_919_);
lean_inc(v_name_918_);
lean_inc(v_pkg_917_);
lean_dec(v_self_909_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_965_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_toContext_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v_packageMap_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_toContext_923_ = lean_ctor_get(v_a_914_, 1);
v___x_924_ = l_unsafeCast___redArg(v_toContext_923_);
v___x_925_ = l_unsafeCast___redArg(v___x_924_);
lean_dec(v___x_924_);
v___x_926_ = l_unsafeCast___redArg(v___x_925_);
lean_dec(v___x_925_);
v___x_927_ = l_unsafeCast___redArg(v___x_926_);
lean_dec(v___x_926_);
v___x_928_ = l_unsafeCast___redArg(v___x_927_);
lean_dec(v___x_927_);
v___x_929_ = l_unsafeCast___redArg(v___x_928_);
lean_dec(v___x_928_);
v___x_930_ = l_unsafeCast___redArg(v___x_929_);
lean_dec(v___x_929_);
v___x_931_ = l_unsafeCast___redArg(v___x_930_);
lean_dec(v___x_930_);
v___x_932_ = l_unsafeCast___redArg(v___x_931_);
lean_dec(v___x_931_);
v___x_933_ = l_unsafeCast___redArg(v___x_932_);
lean_dec(v___x_932_);
v___x_934_ = l_unsafeCast___redArg(v___x_933_);
lean_dec(v___x_933_);
v___x_935_ = l_unsafeCast___redArg(v___x_934_);
lean_dec(v___x_934_);
v___x_936_ = l_unsafeCast___redArg(v___x_935_);
lean_dec(v___x_935_);
v_packageMap_937_ = lean_ctor_get(v___x_936_, 5);
lean_inc(v_packageMap_937_);
lean_dec(v___x_936_);
v___x_938_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
lean_inc(v_pkg_917_);
v___x_939_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_938_, v_packageMap_937_, v_pkg_917_);
if (lean_obj_tag(v___x_939_) == 1)
{
lean_object* v_val_940_; lean_object* v_keyName_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
lean_dec(v_pkg_917_);
v_val_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_val_940_);
lean_dec_ref_known(v___x_939_, 1);
v_keyName_941_ = lean_ctor_get(v_val_940_, 2);
lean_inc(v_keyName_941_);
v___x_942_ = l_Lake_InputFile_keyword;
lean_inc(v_name_918_);
v___x_943_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_943_, 0, v_val_940_);
lean_ctor_set(v___x_943_, 1, v_name_918_);
lean_ctor_set(v___x_943_, 2, v_config_919_);
v___x_944_ = l_Lake_InputFile_defaultFacet;
v___x_945_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_945_, 0, v_keyName_941_);
lean_ctor_set(v___x_945_, 1, v_name_918_);
if (v_isShared_922_ == 0)
{
lean_ctor_set_tag(v___x_921_, 1);
lean_ctor_set(v___x_921_, 3, v___x_944_);
lean_ctor_set(v___x_921_, 2, v___x_943_);
lean_ctor_set(v___x_921_, 1, v___x_942_);
lean_ctor_set(v___x_921_, 0, v___x_945_);
v___x_947_ = v___x_921_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_949_, 2, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_949_, 3, v___x_944_);
v___x_947_ = v_reuseFailAlloc_949_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
lean_object* v___x_948_; 
lean_inc_ref(v_a_914_);
lean_inc(v_a_913_);
lean_inc(v_a_912_);
lean_inc(v_a_911_);
v___x_948_ = lean_apply_7(v_a_910_, v___x_947_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, lean_box(0));
return v___x_948_;
}
}
else
{
lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; uint8_t v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v___x_939_);
lean_del_object(v___x_921_);
lean_dec(v_config_919_);
lean_dec_ref(v_a_910_);
v___x_950_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__0));
v___x_951_ = 1;
v___x_952_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_917_, v___x_951_);
v___x_953_ = lean_string_append(v___x_950_, v___x_952_);
lean_dec_ref(v___x_952_);
v___x_954_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__1));
v___x_955_ = lean_string_append(v___x_953_, v___x_954_);
v___x_956_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_918_, v___x_951_);
v___x_957_ = lean_string_append(v___x_955_, v___x_956_);
lean_dec_ref(v___x_956_);
v___x_958_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__2));
v___x_959_ = lean_string_append(v___x_957_, v___x_958_);
v___x_960_ = 3;
v___x_961_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set_uint8(v___x_961_, sizeof(void*)*1, v___x_960_);
v___x_962_ = lean_array_get_size(v_a_915_);
v___x_963_ = lean_array_push(v_a_915_, v___x_961_);
v___x_964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_962_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
return v___x_964_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch___boxed(lean_object* v_self_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lake_InputFileDecl_fetch(v_self_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
lean_dec_ref(v_a_972_);
lean_dec(v_a_971_);
lean_dec(v_a_970_);
lean_dec(v_a_969_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch(lean_object* v_self_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_){
_start:
{
lean_object* v_pkg_984_; lean_object* v_name_985_; lean_object* v_keyName_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v_pkg_984_ = lean_ctor_get(v_self_976_, 0);
v_name_985_ = lean_ctor_get(v_self_976_, 1);
v_keyName_986_ = lean_ctor_get(v_pkg_984_, 2);
v___x_987_ = l_Lake_InputDir_defaultFacet;
lean_inc(v_name_985_);
lean_inc(v_keyName_986_);
v___x_988_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_988_, 0, v_keyName_986_);
lean_ctor_set(v___x_988_, 1, v_name_985_);
v___x_989_ = l_Lake_InputDir_keyword;
v___x_990_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
lean_ctor_set(v___x_990_, 2, v_self_976_);
lean_ctor_set(v___x_990_, 3, v___x_987_);
lean_inc_ref(v_a_981_);
lean_inc(v_a_980_);
lean_inc(v_a_979_);
lean_inc(v_a_978_);
v___x_991_ = lean_apply_7(v_a_977_, v___x_990_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, lean_box(0));
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch___boxed(lean_object* v_self_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lake_InputDir_fetch(v_self_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec(v_a_996_);
lean_dec(v_a_995_);
lean_dec(v_a_994_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get___redArg(lean_object* v_self_1001_, lean_object* v_inst_1002_, lean_object* v_inst_1003_, lean_object* v_inst_1004_){
_start:
{
lean_object* v_toApplicative_1005_; lean_object* v_toFunctor_1006_; lean_object* v_toBind_1007_; lean_object* v_toPure_1008_; lean_object* v_pkg_1009_; lean_object* v_name_1010_; lean_object* v_config_1011_; lean_object* v_map_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___f_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_toApplicative_1005_ = lean_ctor_get(v_inst_1002_, 0);
lean_inc_ref(v_toApplicative_1005_);
v_toFunctor_1006_ = lean_ctor_get(v_toApplicative_1005_, 0);
lean_inc_ref(v_toFunctor_1006_);
v_toBind_1007_ = lean_ctor_get(v_inst_1002_, 1);
lean_inc(v_toBind_1007_);
lean_dec_ref(v_inst_1002_);
v_toPure_1008_ = lean_ctor_get(v_toApplicative_1005_, 1);
lean_inc(v_toPure_1008_);
lean_dec_ref(v_toApplicative_1005_);
v_pkg_1009_ = lean_ctor_get(v_self_1001_, 0);
lean_inc_n(v_pkg_1009_, 2);
v_name_1010_ = lean_ctor_get(v_self_1001_, 1);
lean_inc(v_name_1010_);
v_config_1011_ = lean_ctor_get(v_self_1001_, 3);
lean_inc(v_config_1011_);
lean_dec_ref(v_self_1001_);
v_map_1012_ = lean_ctor_get(v_toFunctor_1006_, 0);
lean_inc_n(v_map_1012_, 2);
lean_dec_ref(v_toFunctor_1006_);
v___f_1013_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_1014_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1014_, 0, v_name_1010_);
lean_closure_set(v___f_1014_, 1, v_config_1011_);
lean_closure_set(v___f_1014_, 2, v_toPure_1008_);
lean_closure_set(v___f_1014_, 3, v_pkg_1009_);
lean_closure_set(v___f_1014_, 4, v_inst_1003_);
v___f_1015_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1015_, 0, v_pkg_1009_);
v___x_1016_ = lean_apply_4(v_map_1012_, lean_box(0), lean_box(0), v___f_1013_, v_inst_1004_);
v___x_1017_ = lean_apply_4(v_map_1012_, lean_box(0), lean_box(0), v___f_1015_, v___x_1016_);
v___x_1018_ = lean_apply_4(v_toBind_1007_, lean_box(0), lean_box(0), v___x_1017_, v___f_1014_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get(lean_object* v_m_1019_, lean_object* v_self_1020_, lean_object* v_inst_1021_, lean_object* v_inst_1022_, lean_object* v_inst_1023_){
_start:
{
lean_object* v_toApplicative_1024_; lean_object* v_toFunctor_1025_; lean_object* v_toBind_1026_; lean_object* v_toPure_1027_; lean_object* v_pkg_1028_; lean_object* v_name_1029_; lean_object* v_config_1030_; lean_object* v_map_1031_; lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___f_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v_toApplicative_1024_ = lean_ctor_get(v_inst_1021_, 0);
lean_inc_ref(v_toApplicative_1024_);
v_toFunctor_1025_ = lean_ctor_get(v_toApplicative_1024_, 0);
lean_inc_ref(v_toFunctor_1025_);
v_toBind_1026_ = lean_ctor_get(v_inst_1021_, 1);
lean_inc(v_toBind_1026_);
lean_dec_ref(v_inst_1021_);
v_toPure_1027_ = lean_ctor_get(v_toApplicative_1024_, 1);
lean_inc(v_toPure_1027_);
lean_dec_ref(v_toApplicative_1024_);
v_pkg_1028_ = lean_ctor_get(v_self_1020_, 0);
lean_inc_n(v_pkg_1028_, 2);
v_name_1029_ = lean_ctor_get(v_self_1020_, 1);
lean_inc(v_name_1029_);
v_config_1030_ = lean_ctor_get(v_self_1020_, 3);
lean_inc(v_config_1030_);
lean_dec_ref(v_self_1020_);
v_map_1031_ = lean_ctor_get(v_toFunctor_1025_, 0);
lean_inc_n(v_map_1031_, 2);
lean_dec_ref(v_toFunctor_1025_);
v___f_1032_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_1033_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1033_, 0, v_name_1029_);
lean_closure_set(v___f_1033_, 1, v_config_1030_);
lean_closure_set(v___f_1033_, 2, v_toPure_1027_);
lean_closure_set(v___f_1033_, 3, v_pkg_1028_);
lean_closure_set(v___f_1033_, 4, v_inst_1022_);
v___f_1034_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1034_, 0, v_pkg_1028_);
v___x_1035_ = lean_apply_4(v_map_1031_, lean_box(0), lean_box(0), v___f_1032_, v_inst_1023_);
v___x_1036_ = lean_apply_4(v_map_1031_, lean_box(0), lean_box(0), v___f_1034_, v___x_1035_);
v___x_1037_ = lean_apply_4(v_toBind_1026_, lean_box(0), lean_box(0), v___x_1036_, v___f_1033_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch(lean_object* v_self_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_pkg_1046_; lean_object* v_name_1047_; lean_object* v_config_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1094_; 
v_pkg_1046_ = lean_ctor_get(v_self_1038_, 0);
v_name_1047_ = lean_ctor_get(v_self_1038_, 1);
v_config_1048_ = lean_ctor_get(v_self_1038_, 3);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_self_1038_);
if (v_isSharedCheck_1094_ == 0)
{
lean_object* v_unused_1095_; 
v_unused_1095_ = lean_ctor_get(v_self_1038_, 2);
lean_dec(v_unused_1095_);
v___x_1050_ = v_self_1038_;
v_isShared_1051_ = v_isSharedCheck_1094_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_config_1048_);
lean_inc(v_name_1047_);
lean_inc(v_pkg_1046_);
lean_dec(v_self_1038_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1094_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v_toContext_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v_packageMap_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_toContext_1052_ = lean_ctor_get(v_a_1043_, 1);
v___x_1053_ = l_unsafeCast___redArg(v_toContext_1052_);
v___x_1054_ = l_unsafeCast___redArg(v___x_1053_);
lean_dec(v___x_1053_);
v___x_1055_ = l_unsafeCast___redArg(v___x_1054_);
lean_dec(v___x_1054_);
v___x_1056_ = l_unsafeCast___redArg(v___x_1055_);
lean_dec(v___x_1055_);
v___x_1057_ = l_unsafeCast___redArg(v___x_1056_);
lean_dec(v___x_1056_);
v___x_1058_ = l_unsafeCast___redArg(v___x_1057_);
lean_dec(v___x_1057_);
v___x_1059_ = l_unsafeCast___redArg(v___x_1058_);
lean_dec(v___x_1058_);
v___x_1060_ = l_unsafeCast___redArg(v___x_1059_);
lean_dec(v___x_1059_);
v___x_1061_ = l_unsafeCast___redArg(v___x_1060_);
lean_dec(v___x_1060_);
v___x_1062_ = l_unsafeCast___redArg(v___x_1061_);
lean_dec(v___x_1061_);
v___x_1063_ = l_unsafeCast___redArg(v___x_1062_);
lean_dec(v___x_1062_);
v___x_1064_ = l_unsafeCast___redArg(v___x_1063_);
lean_dec(v___x_1063_);
v___x_1065_ = l_unsafeCast___redArg(v___x_1064_);
lean_dec(v___x_1064_);
v_packageMap_1066_ = lean_ctor_get(v___x_1065_, 5);
lean_inc(v_packageMap_1066_);
lean_dec(v___x_1065_);
v___x_1067_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
lean_inc(v_pkg_1046_);
v___x_1068_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_1067_, v_packageMap_1066_, v_pkg_1046_);
if (lean_obj_tag(v___x_1068_) == 1)
{
lean_object* v_val_1069_; lean_object* v_keyName_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1076_; 
lean_dec(v_pkg_1046_);
v_val_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_val_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v_keyName_1070_ = lean_ctor_get(v_val_1069_, 2);
lean_inc(v_keyName_1070_);
v___x_1071_ = l_Lake_InputDir_keyword;
lean_inc(v_name_1047_);
v___x_1072_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1072_, 0, v_val_1069_);
lean_ctor_set(v___x_1072_, 1, v_name_1047_);
lean_ctor_set(v___x_1072_, 2, v_config_1048_);
v___x_1073_ = l_Lake_InputDir_defaultFacet;
v___x_1074_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_keyName_1070_);
lean_ctor_set(v___x_1074_, 1, v_name_1047_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set_tag(v___x_1050_, 1);
lean_ctor_set(v___x_1050_, 3, v___x_1073_);
lean_ctor_set(v___x_1050_, 2, v___x_1072_);
lean_ctor_set(v___x_1050_, 1, v___x_1071_);
lean_ctor_set(v___x_1050_, 0, v___x_1074_);
v___x_1076_ = v___x_1050_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1071_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v___x_1073_);
v___x_1076_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
lean_object* v___x_1077_; 
lean_inc_ref(v_a_1043_);
lean_inc(v_a_1042_);
lean_inc(v_a_1041_);
lean_inc(v_a_1040_);
v___x_1077_ = lean_apply_7(v_a_1039_, v___x_1076_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, lean_box(0));
return v___x_1077_;
}
}
else
{
lean_object* v___x_1079_; uint8_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_dec(v___x_1068_);
lean_del_object(v___x_1050_);
lean_dec(v_config_1048_);
lean_dec_ref(v_a_1039_);
v___x_1079_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__0));
v___x_1080_ = 1;
v___x_1081_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_1046_, v___x_1080_);
v___x_1082_ = lean_string_append(v___x_1079_, v___x_1081_);
lean_dec_ref(v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__1));
v___x_1084_ = lean_string_append(v___x_1082_, v___x_1083_);
v___x_1085_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1047_, v___x_1080_);
v___x_1086_ = lean_string_append(v___x_1084_, v___x_1085_);
lean_dec_ref(v___x_1085_);
v___x_1087_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__0___closed__2));
v___x_1088_ = lean_string_append(v___x_1086_, v___x_1087_);
v___x_1089_ = 3;
v___x_1090_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*1, v___x_1089_);
v___x_1091_ = lean_array_get_size(v_a_1044_);
v___x_1092_ = lean_array_push(v_a_1044_, v___x_1090_);
v___x_1093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
return v___x_1093_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch___boxed(lean_object* v_self_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lake_InputDirDecl_fetch(v_self_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec(v_a_1099_);
lean_dec(v_a_1098_);
return v_res_1104_;
}
}
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InputFile(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InputFile(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Targets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_InputFile(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Targets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InputFile(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Targets(builtin);
}
#ifdef __cplusplus
}
#endif

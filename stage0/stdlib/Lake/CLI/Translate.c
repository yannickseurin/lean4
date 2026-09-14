// Lean compiler output
// Module: Lake.CLI.Translate
// Imports: public import Lake.Config.Lang public import Lake.Config.Package import Lean.PrettyPrinter import Lake.CLI.Translate.Toml import Lake.CLI.Translate.Lean import Lake.Load.Lean.Elab
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lake_Toml_RBDict_empty___redArg();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lake_importModulesUsingCache(lean_object*, lean_object*, uint32_t);
lean_object* l_Lake_Package_mkLeanConfig(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Lean_PrettyPrinter_ppModule(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lake_Package_mkTomlConfig(lean_object*, lean_object*);
lean_object* l_Lake_Toml_ppTable(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Translate_0__Lake_descopeSyntax_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeSyntax(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Translate_0__Lake_descopeSyntax_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_mkConfigString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "(internal) failed to pretty print Lean configuration: "};
static const lean_object* l_Lake_Package_mkConfigString___closed__0 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__0_value;
static const lean_string_object l_Lake_Package_mkConfigString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_Package_mkConfigString___closed__1 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__1_value;
static const lean_ctor_object l_Lake_Package_mkConfigString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Package_mkConfigString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_object* l_Lake_Package_mkConfigString___closed__2 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__2_value;
static const lean_ctor_object l_Lake_Package_mkConfigString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_mkConfigString___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Package_mkConfigString___closed__3 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__3_value;
static const lean_array_object l_Lake_Package_mkConfigString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_Package_mkConfigString___closed__3_value)}};
static const lean_object* l_Lake_Package_mkConfigString___closed__4 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__4_value;
static const lean_string_object l_Lake_Package_mkConfigString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Package_mkConfigString___closed__5 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__5_value;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__6;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__7;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__8;
static const lean_string_object l_Lake_Package_mkConfigString___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lake_Package_mkConfigString___closed__9 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__9_value;
static const lean_ctor_object l_Lake_Package_mkConfigString___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Package_mkConfigString___closed__9_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lake_Package_mkConfigString___closed__10 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__10_value;
static const lean_ctor_object l_Lake_Package_mkConfigString___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_mkConfigString___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_Package_mkConfigString___closed__11 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__11_value;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__12;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__13;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__14;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__15;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__16;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__17;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__18;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__19;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__20;
static const lean_array_object l_Lake_Package_mkConfigString___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_mkConfigString___closed__21 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__21_value;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_Package_mkConfigString___closed__22;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__23;
static const lean_string_object l_Lake_Package_mkConfigString___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lake_Package_mkConfigString___closed__24 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__24_value;
static const lean_string_object l_Lake_Package_mkConfigString___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_Lake_Package_mkConfigString___closed__25 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__25_value;
static const lean_string_object l_Lake_Package_mkConfigString___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lake_Package_mkConfigString___closed__26 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__26_value;
static const lean_string_object l_Lake_Package_mkConfigString___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_Lake_Package_mkConfigString___closed__27 = (const lean_object*)&l_Lake_Package_mkConfigString___closed__27_value;
static lean_once_cell_t l_Lake_Package_mkConfigString___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_mkConfigString___closed__28;
LEAN_EXPORT lean_object* l_Lake_Package_mkConfigString(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_mkConfigString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Translate_0__Lake_descopeSyntax_spec__0(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = l_unsafeCast___redArg(v_bs_3_);
lean_dec_ref(v_bs_3_);
return v___x_5_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; size_t v___x_11_; size_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_v_6_ = lean_array_uget(v_bs_3_, v_i_2_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_7_);
v___x_9_ = l_unsafeCast___redArg(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = l___private_Lake_CLI_Translate_0__Lake_descopeSyntax(v___x_9_);
v___x_11_ = ((size_t)1ULL);
v___x_12_ = lean_usize_add(v_i_2_, v___x_11_);
v___x_13_ = l_unsafeCast___redArg(v___x_10_);
lean_dec(v___x_10_);
v___x_14_ = lean_array_uset(v_bs_x27_8_, v_i_2_, v___x_13_);
v_i_2_ = v___x_12_;
v_bs_3_ = v___x_14_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeSyntax(lean_object* v_x_16_){
_start:
{
switch(lean_obj_tag(v_x_16_))
{
case 3:
{
lean_object* v_info_17_; lean_object* v_rawVal_18_; lean_object* v_val_19_; lean_object* v_preresolved_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_28_; 
v_info_17_ = lean_ctor_get(v_x_16_, 0);
v_rawVal_18_ = lean_ctor_get(v_x_16_, 1);
v_val_19_ = lean_ctor_get(v_x_16_, 2);
v_preresolved_20_ = lean_ctor_get(v_x_16_, 3);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_28_ == 0)
{
v___x_22_ = v_x_16_;
v_isShared_23_ = v_isSharedCheck_28_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_preresolved_20_);
lean_inc(v_val_19_);
lean_inc(v_rawVal_18_);
lean_inc(v_info_17_);
lean_dec(v_x_16_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_28_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_24_ = l_Lean_Name_eraseMacroScopes(v_val_19_);
lean_dec(v_val_19_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 2, v___x_24_);
v___x_26_ = v___x_22_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_info_17_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_rawVal_18_);
lean_ctor_set(v_reuseFailAlloc_27_, 2, v___x_24_);
lean_ctor_set(v_reuseFailAlloc_27_, 3, v_preresolved_20_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
case 1:
{
lean_object* v_info_29_; lean_object* v_kind_30_; lean_object* v_args_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_43_; 
v_info_29_ = lean_ctor_get(v_x_16_, 0);
v_kind_30_ = lean_ctor_get(v_x_16_, 1);
v_args_31_ = lean_ctor_get(v_x_16_, 2);
v_isSharedCheck_43_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_43_ == 0)
{
v___x_33_ = v_x_16_;
v_isShared_34_ = v_isSharedCheck_43_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_args_31_);
lean_inc(v_kind_30_);
lean_inc(v_info_29_);
lean_dec(v_x_16_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_43_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
size_t v_sz_35_; size_t v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
v_sz_35_ = lean_array_size(v_args_31_);
v___x_36_ = ((size_t)0ULL);
v___x_37_ = l_unsafeCast___redArg(v_args_31_);
lean_dec_ref(v_args_31_);
v___x_38_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Translate_0__Lake_descopeSyntax_spec__0(v_sz_35_, v___x_36_, v___x_37_);
v___x_39_ = l_unsafeCast___redArg(v___x_38_);
lean_dec_ref(v___x_38_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 2, v___x_39_);
v___x_41_ = v___x_33_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_info_29_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_kind_30_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v___x_39_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
default: 
{
return v_x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Translate_0__Lake_descopeSyntax_spec__0___boxed(lean_object* v_sz_44_, lean_object* v_i_45_, lean_object* v_bs_46_){
_start:
{
size_t v_sz_boxed_47_; size_t v_i_boxed_48_; lean_object* v_res_49_; 
v_sz_boxed_47_ = lean_unbox_usize(v_sz_44_);
lean_dec(v_sz_44_);
v_i_boxed_48_ = lean_unbox_usize(v_i_45_);
lean_dec(v_i_45_);
v_res_49_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Translate_0__Lake_descopeSyntax_spec__0(v_sz_boxed_47_, v_i_boxed_48_, v_bs_46_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax___redArg(lean_object* v_stx_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Lake_CLI_Translate_0__Lake_descopeSyntax(v_stx_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax(lean_object* v_k_52_, lean_object* v_stx_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l___private_Lake_CLI_Translate_0__Lake_descopeSyntax(v_stx_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax___boxed(lean_object* v_k_55_, lean_object* v_stx_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l___private_Lake_CLI_Translate_0__Lake_descopeTSyntax(v_k_55_, v_stx_56_);
lean_dec(v_k_55_);
return v_res_57_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__0(lean_object* v_opts_58_, lean_object* v_opt_59_){
_start:
{
lean_object* v_name_60_; lean_object* v_defValue_61_; lean_object* v_map_62_; lean_object* v___x_63_; 
v_name_60_ = lean_ctor_get(v_opt_59_, 0);
v_defValue_61_ = lean_ctor_get(v_opt_59_, 1);
v_map_62_ = lean_ctor_get(v_opts_58_, 0);
v___x_63_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_62_, v_name_60_);
if (lean_obj_tag(v___x_63_) == 0)
{
uint8_t v___x_64_; 
v___x_64_ = lean_unbox(v_defValue_61_);
return v___x_64_;
}
else
{
lean_object* v_val_65_; 
v_val_65_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_val_65_);
lean_dec_ref_known(v___x_63_, 1);
if (lean_obj_tag(v_val_65_) == 1)
{
uint8_t v_v_66_; 
v_v_66_ = lean_ctor_get_uint8(v_val_65_, 0);
lean_dec_ref_known(v_val_65_, 0);
return v_v_66_;
}
else
{
uint8_t v___x_67_; 
lean_dec(v_val_65_);
v___x_67_ = lean_unbox(v_defValue_61_);
return v___x_67_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__0___boxed(lean_object* v_opts_68_, lean_object* v_opt_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__0(v_opts_68_, v_opt_69_);
lean_dec_ref(v_opt_69_);
lean_dec_ref(v_opts_68_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__1(lean_object* v_opts_72_, lean_object* v_opt_73_){
_start:
{
lean_object* v_name_74_; lean_object* v_defValue_75_; lean_object* v_map_76_; lean_object* v___x_77_; 
v_name_74_ = lean_ctor_get(v_opt_73_, 0);
v_defValue_75_ = lean_ctor_get(v_opt_73_, 1);
v_map_76_ = lean_ctor_get(v_opts_72_, 0);
v___x_77_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_76_, v_name_74_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_inc(v_defValue_75_);
return v_defValue_75_;
}
else
{
lean_object* v_val_78_; 
v_val_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_val_78_);
lean_dec_ref_known(v___x_77_, 1);
if (lean_obj_tag(v_val_78_) == 3)
{
lean_object* v_v_79_; 
v_v_79_ = lean_ctor_get(v_val_78_, 0);
lean_inc(v_v_79_);
lean_dec_ref_known(v_val_78_, 1);
return v_v_79_;
}
else
{
lean_dec(v_val_78_);
lean_inc(v_defValue_75_);
return v_defValue_75_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__1___boxed(lean_object* v_opts_80_, lean_object* v_opt_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__1(v_opts_80_, v_opt_81_);
lean_dec_ref(v_opt_81_);
lean_dec_ref(v_opts_80_);
return v_res_82_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__6(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_box(0);
v___x_97_ = l_unsafeCast___redArg(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__7(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = l_Lean_Options_empty;
v___x_99_ = l_Lean_Core_getMaxHeartbeats(v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__8(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_unsigned_to_nat(1u);
v___x_101_ = l_Lean_firstFrontendMacroScope;
v___x_102_ = lean_nat_add(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__12(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_109_ = lean_box(0);
v___x_110_ = lean_unsigned_to_nat(1u);
v___x_111_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__6, &l_Lake_Package_mkConfigString___closed__6_once, _init_l_Lake_Package_mkConfigString___closed__6);
v___x_112_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_110_);
lean_ctor_set(v___x_112_, 2, v___x_109_);
return v___x_112_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__13(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_unsigned_to_nat(32u);
v___x_114_ = lean_mk_empty_array_with_capacity(v___x_113_);
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__14(void){
_start:
{
size_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_116_ = ((size_t)5ULL);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_unsigned_to_nat(32u);
v___x_119_ = lean_mk_empty_array_with_capacity(v___x_118_);
v___x_120_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__13, &l_Lake_Package_mkConfigString___closed__13_once, _init_l_Lake_Package_mkConfigString___closed__13);
v___x_121_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_117_);
lean_ctor_set(v___x_121_, 3, v___x_117_);
lean_ctor_set_usize(v___x_121_, 4, v___x_116_);
return v___x_121_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__15(void){
_start:
{
lean_object* v___x_122_; uint64_t v___x_123_; lean_object* v___x_124_; 
v___x_122_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__14, &l_Lake_Package_mkConfigString___closed__14_once, _init_l_Lake_Package_mkConfigString___closed__14);
v___x_123_ = 0ULL;
v___x_124_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set_uint64(v___x_124_, sizeof(void*)*1, v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__16(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_125_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__17(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__16, &l_Lake_Package_mkConfigString___closed__16_once, _init_l_Lake_Package_mkConfigString___closed__16);
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__18(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__17, &l_Lake_Package_mkConfigString___closed__17_once, _init_l_Lake_Package_mkConfigString___closed__17);
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__19(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = l_Lean_NameSet_empty;
v___x_131_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__14, &l_Lake_Package_mkConfigString___closed__14_once, _init_l_Lake_Package_mkConfigString___closed__14);
v___x_132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
lean_ctor_set(v___x_132_, 2, v___x_130_);
return v___x_132_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__20(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; lean_object* v___x_136_; 
v___x_133_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__14, &l_Lake_Package_mkConfigString___closed__14_once, _init_l_Lake_Package_mkConfigString___closed__14);
v___x_134_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__17, &l_Lake_Package_mkConfigString___closed__17_once, _init_l_Lake_Package_mkConfigString___closed__17);
v___x_135_ = 1;
v___x_136_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_136_, 0, v___x_134_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
lean_ctor_set(v___x_136_, 2, v___x_133_);
lean_ctor_set_uint8(v___x_136_, sizeof(void*)*3, v___x_135_);
return v___x_136_;
}
}
static uint8_t _init_l_Lake_Package_mkConfigString___closed__22(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_139_ = l_Lean_diagnostics;
v___x_140_ = l_Lean_Options_empty;
v___x_141_ = l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__0(v___x_140_, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__23(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = l_Lean_maxRecDepth;
v___x_143_ = l_Lean_Options_empty;
v___x_144_ = l_Lean_Option_get___at___00Lake_Package_mkConfigString_spec__1(v___x_143_, v___x_142_);
return v___x_144_;
}
}
static lean_object* _init_l_Lake_Package_mkConfigString___closed__28(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lake_Toml_RBDict_empty___redArg();
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_mkConfigString(lean_object* v_pkg_150_, uint8_t v_lang_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_a_155_; lean_object* v_a_165_; 
if (v_lang_151_ == 0)
{
uint8_t v___x_167_; uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint32_t v___x_171_; lean_object* v___x_172_; 
v___x_167_ = 0;
v___x_168_ = 1;
v___x_169_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__4));
v___x_170_ = l_Lean_Options_empty;
v___x_171_ = 1024;
v___x_172_ = l_Lake_importModulesUsingCache(v___x_169_, v___x_170_, v___x_171_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___y_200_; lean_object* v___x_234_; uint8_t v___y_236_; lean_object* v_env_256_; uint8_t v___x_257_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_173_);
lean_dec_ref_known(v___x_172_, 1);
v___x_174_ = l_Lake_Package_mkLeanConfig(v_pkg_150_);
v___x_175_ = l___private_Lake_CLI_Translate_0__Lake_descopeSyntax(v___x_174_);
v___x_176_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__5));
v___x_177_ = l_Lean_instInhabitedFileMap_default;
v___x_178_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__6, &l_Lake_Package_mkConfigString___closed__6_once, _init_l_Lake_Package_mkConfigString___closed__6);
v___x_179_ = lean_box(0);
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__7, &l_Lake_Package_mkConfigString___closed__7_once, _init_l_Lake_Package_mkConfigString___closed__7);
v___x_182_ = l_Lean_firstFrontendMacroScope;
v___x_183_ = lean_box(0);
v___x_184_ = lean_box(0);
v___x_185_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__8, &l_Lake_Package_mkConfigString___closed__8_once, _init_l_Lake_Package_mkConfigString___closed__8);
v___x_186_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__11));
v___x_187_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__12, &l_Lake_Package_mkConfigString___closed__12_once, _init_l_Lake_Package_mkConfigString___closed__12);
v___x_188_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__15, &l_Lake_Package_mkConfigString___closed__15_once, _init_l_Lake_Package_mkConfigString___closed__15);
v___x_189_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__18, &l_Lake_Package_mkConfigString___closed__18_once, _init_l_Lake_Package_mkConfigString___closed__18);
v___x_190_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__19, &l_Lake_Package_mkConfigString___closed__19_once, _init_l_Lake_Package_mkConfigString___closed__19);
v___x_191_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__20, &l_Lake_Package_mkConfigString___closed__20_once, _init_l_Lake_Package_mkConfigString___closed__20);
v___x_192_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__21));
v___x_193_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_193_, 0, v_a_173_);
lean_ctor_set(v___x_193_, 1, v___x_185_);
lean_ctor_set(v___x_193_, 2, v___x_186_);
lean_ctor_set(v___x_193_, 3, v___x_187_);
lean_ctor_set(v___x_193_, 4, v___x_188_);
lean_ctor_set(v___x_193_, 5, v___x_189_);
lean_ctor_set(v___x_193_, 6, v___x_190_);
lean_ctor_set(v___x_193_, 7, v___x_191_);
lean_ctor_set(v___x_193_, 8, v___x_192_);
v___x_194_ = lean_io_get_num_heartbeats();
v___x_195_ = lean_st_mk_ref(v___x_193_);
v___x_196_ = l_Lean_inheritedTraceOptions;
v___x_197_ = lean_st_ref_get(v___x_196_);
v___x_198_ = lean_uint8_once(&l_Lake_Package_mkConfigString___closed__22, &l_Lake_Package_mkConfigString___closed__22_once, _init_l_Lake_Package_mkConfigString___closed__22);
v___x_234_ = lean_st_ref_get(v___x_195_);
v_env_256_ = lean_ctor_get(v___x_234_, 0);
lean_inc_ref(v_env_256_);
lean_dec(v___x_234_);
v___x_257_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_256_);
lean_dec_ref(v_env_256_);
if (v___x_198_ == 0)
{
if (v___x_257_ == 0)
{
lean_inc(v___x_195_);
v___y_200_ = v___x_195_;
goto v___jp_199_;
}
else
{
v___y_236_ = v___x_198_;
goto v___jp_235_;
}
}
else
{
v___y_236_ = v___x_257_;
goto v___jp_235_;
}
v___jp_199_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_201_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__23, &l_Lake_Package_mkConfigString___closed__23_once, _init_l_Lake_Package_mkConfigString___closed__23);
v___x_202_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_202_, 0, v___x_176_);
lean_ctor_set(v___x_202_, 1, v___x_177_);
lean_ctor_set(v___x_202_, 2, v___x_170_);
lean_ctor_set(v___x_202_, 3, v___x_201_);
lean_ctor_set(v___x_202_, 4, v___x_178_);
lean_ctor_set(v___x_202_, 5, v___x_179_);
lean_ctor_set(v___x_202_, 6, v___x_194_);
lean_ctor_set(v___x_202_, 7, v___x_181_);
lean_ctor_set(v___x_202_, 8, v___x_178_);
lean_ctor_set(v___x_202_, 9, v___x_182_);
lean_ctor_set(v___x_202_, 10, v___x_183_);
lean_ctor_set(v___x_202_, 11, v___x_197_);
v___x_203_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_180_);
lean_ctor_set(v___x_203_, 2, v___x_184_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*3, v___x_198_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*3 + 1, v___x_167_);
v___x_204_ = l_Lean_PrettyPrinter_ppModule(v___x_175_, v___x_203_, v___y_200_);
lean_dec(v___y_200_);
lean_dec_ref_known(v___x_203_, 3);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v_str_212_; lean_object* v_startInclusive_213_; lean_object* v_endExclusive_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
lean_inc(v_a_205_);
lean_dec_ref_known(v___x_204_, 1);
v___x_206_ = lean_st_ref_get(v___x_195_);
lean_dec(v___x_195_);
lean_dec(v___x_206_);
v___x_207_ = l_Std_Format_defWidth;
v___x_208_ = l_Std_Format_pretty(v_a_205_, v___x_207_, v___x_180_, v___x_180_);
v___x_209_ = lean_string_utf8_byte_size(v___x_208_);
v___x_210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_180_);
lean_ctor_set(v___x_210_, 2, v___x_209_);
v___x_211_ = l_String_Slice_trimAscii(v___x_210_);
v_str_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc_ref(v_str_212_);
v_startInclusive_213_ = lean_ctor_get(v___x_211_, 1);
lean_inc(v_startInclusive_213_);
v_endExclusive_214_ = lean_ctor_get(v___x_211_, 2);
lean_inc(v_endExclusive_214_);
lean_dec_ref(v___x_211_);
v___x_215_ = lean_string_utf8_extract_fast(v_str_212_, v_startInclusive_213_, v_endExclusive_214_);
lean_dec(v_endExclusive_214_);
lean_dec(v_startInclusive_213_);
lean_dec_ref(v_str_212_);
v___x_216_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__24));
v___x_217_ = lean_string_append(v___x_215_, v___x_216_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v_a_152_);
return v___x_218_;
}
else
{
lean_object* v_a_219_; 
lean_dec(v___x_195_);
v_a_219_ = lean_ctor_get(v___x_204_, 0);
lean_inc(v_a_219_);
lean_dec_ref_known(v___x_204_, 1);
if (lean_obj_tag(v_a_219_) == 0)
{
lean_object* v_msg_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_msg_220_ = lean_ctor_get(v_a_219_, 1);
lean_inc_ref(v_msg_220_);
lean_dec_ref_known(v_a_219_, 2);
v___x_221_ = l_Lean_MessageData_toString(v_msg_220_);
v___x_222_ = lean_mk_io_user_error(v___x_221_);
v_a_155_ = v___x_222_;
goto v___jp_154_;
}
else
{
lean_object* v_id_223_; lean_object* v___x_224_; 
v_id_223_ = lean_ctor_get(v_a_219_, 0);
lean_inc(v_id_223_);
lean_dec_ref_known(v_a_219_, 2);
v___x_224_ = l_Lean_InternalExceptionId_getName(v_id_223_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v_id_223_);
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__25));
v___x_227_ = l_Lean_Name_toString(v_a_225_, v___x_168_);
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
lean_dec_ref(v___x_227_);
v_a_165_ = v___x_228_;
goto v___jp_164_;
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
lean_dec_ref_known(v___x_224_, 1);
v___x_229_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__26));
v___x_230_ = l_Nat_reprFast(v_id_223_);
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
lean_dec_ref(v___x_230_);
v___x_232_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__27));
v___x_233_ = lean_string_append(v___x_231_, v___x_232_);
v_a_165_ = v___x_233_;
goto v___jp_164_;
}
}
}
}
v___jp_235_:
{
if (v___y_236_ == 0)
{
lean_object* v___x_237_; lean_object* v_env_238_; lean_object* v_nextMacroScope_239_; lean_object* v_ngen_240_; lean_object* v_auxDeclNGen_241_; lean_object* v_traceState_242_; lean_object* v_messages_243_; lean_object* v_infoState_244_; lean_object* v_snapshotTasks_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_254_; 
v___x_237_ = lean_st_ref_take(v___x_195_);
v_env_238_ = lean_ctor_get(v___x_237_, 0);
v_nextMacroScope_239_ = lean_ctor_get(v___x_237_, 1);
v_ngen_240_ = lean_ctor_get(v___x_237_, 2);
v_auxDeclNGen_241_ = lean_ctor_get(v___x_237_, 3);
v_traceState_242_ = lean_ctor_get(v___x_237_, 4);
v_messages_243_ = lean_ctor_get(v___x_237_, 6);
v_infoState_244_ = lean_ctor_get(v___x_237_, 7);
v_snapshotTasks_245_ = lean_ctor_get(v___x_237_, 8);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_254_ == 0)
{
lean_object* v_unused_255_; 
v_unused_255_ = lean_ctor_get(v___x_237_, 5);
lean_dec(v_unused_255_);
v___x_247_ = v___x_237_;
v_isShared_248_ = v_isSharedCheck_254_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_snapshotTasks_245_);
lean_inc(v_infoState_244_);
lean_inc(v_messages_243_);
lean_inc(v_traceState_242_);
lean_inc(v_auxDeclNGen_241_);
lean_inc(v_ngen_240_);
lean_inc(v_nextMacroScope_239_);
lean_inc(v_env_238_);
lean_dec(v___x_237_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_254_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_249_ = l_Lean_Kernel_enableDiag(v_env_238_, v___x_198_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 5, v___x_189_);
lean_ctor_set(v___x_247_, 0, v___x_249_);
v___x_251_ = v___x_247_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v_nextMacroScope_239_);
lean_ctor_set(v_reuseFailAlloc_253_, 2, v_ngen_240_);
lean_ctor_set(v_reuseFailAlloc_253_, 3, v_auxDeclNGen_241_);
lean_ctor_set(v_reuseFailAlloc_253_, 4, v_traceState_242_);
lean_ctor_set(v_reuseFailAlloc_253_, 5, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_253_, 6, v_messages_243_);
lean_ctor_set(v_reuseFailAlloc_253_, 7, v_infoState_244_);
lean_ctor_set(v_reuseFailAlloc_253_, 8, v_snapshotTasks_245_);
v___x_251_ = v_reuseFailAlloc_253_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; 
v___x_252_ = lean_st_ref_put(v___x_195_, v___x_251_);
lean_inc(v___x_195_);
v___y_200_ = v___x_195_;
goto v___jp_199_;
}
}
}
else
{
lean_inc(v___x_195_);
v___y_200_ = v___x_195_;
goto v___jp_199_;
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_259_; uint8_t v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec_ref(v_pkg_150_);
v_a_258_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_258_);
lean_dec_ref_known(v___x_172_, 1);
v___x_259_ = lean_io_error_to_string(v_a_258_);
v___x_260_ = 3;
v___x_261_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set_uint8(v___x_261_, sizeof(void*)*1, v___x_260_);
v___x_262_ = lean_array_get_size(v_a_152_);
v___x_263_ = lean_array_push(v_a_152_, v___x_261_);
v___x_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
return v___x_264_;
}
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_265_ = lean_obj_once(&l_Lake_Package_mkConfigString___closed__28, &l_Lake_Package_mkConfigString___closed__28_once, _init_l_Lake_Package_mkConfigString___closed__28);
v___x_266_ = l_Lake_Package_mkTomlConfig(v_pkg_150_, v___x_265_);
v___x_267_ = l_Lake_Toml_ppTable(v___x_266_);
lean_dec_ref(v___x_266_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v_a_152_);
return v___x_268_;
}
v___jp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_156_ = ((lean_object*)(l_Lake_Package_mkConfigString___closed__0));
v___x_157_ = lean_io_error_to_string(v_a_155_);
v___x_158_ = lean_string_append(v___x_156_, v___x_157_);
lean_dec_ref(v___x_157_);
v___x_159_ = 3;
v___x_160_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set_uint8(v___x_160_, sizeof(void*)*1, v___x_159_);
v___x_161_ = lean_array_get_size(v_a_152_);
v___x_162_ = lean_array_push(v_a_152_, v___x_160_);
v___x_163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
return v___x_163_;
}
v___jp_164_:
{
lean_object* v___x_166_; 
v___x_166_ = lean_mk_io_user_error(v_a_165_);
v_a_155_ = v___x_166_;
goto v___jp_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_mkConfigString___boxed(lean_object* v_pkg_269_, lean_object* v_lang_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
uint8_t v_lang_boxed_273_; lean_object* v_res_274_; 
v_lang_boxed_273_ = lean_unbox(v_lang_270_);
v_res_274_ = l_Lake_Package_mkConfigString(v_pkg_269_, v_lang_boxed_273_, v_a_271_);
return v_res_274_;
}
}
lean_object* runtime_initialize_Lake_Config_Lang(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Package(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lake_CLI_Translate_Toml(uint8_t builtin);
lean_object* runtime_initialize_Lake_CLI_Translate_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Elab(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Translate(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Lang(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Translate_Toml(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Translate_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Translate(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Lang(uint8_t builtin);
lean_object* initialize_Lake_Config_Package(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lake_CLI_Translate_Toml(uint8_t builtin);
lean_object* initialize_Lake_CLI_Translate_Lean(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Elab(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Translate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Lang(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_CLI_Translate_Toml(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_CLI_Translate_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Translate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Translate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Translate(builtin);
}
#ifdef __cplusplus
}
#endif

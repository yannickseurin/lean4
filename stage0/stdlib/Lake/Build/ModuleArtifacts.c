// Lean compiler output
// Module: Lake.Build.ModuleArtifacts
// Imports: public import Lake.Config.Artifact import Lake.Util.JsonObject
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
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_ArtifactDescr_fromJson_x3f(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_oleanParts(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0___boxed(lean_object*);
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__0 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__0_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__1 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__1_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__2 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__2_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__3 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__3_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__4 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__4_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__5 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__5_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__6 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__6_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rs"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__7 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_toJson(lean_object*);
static const lean_closure_object l_Lake_instToJsonModuleOutputDescrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ModuleOutputDescrs_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonModuleOutputDescrs___closed__0 = (const lean_object*)&l_Lake_instToJsonModuleOutputDescrs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonModuleOutputDescrs = (const lean_object*)&l_Lake_instToJsonModuleOutputDescrs___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0(lean_object*);
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "property not found: o"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "o: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "expected at least one 'o' (.olean) hash"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "l: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "property not found: c"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "c: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "b: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "r: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "property not found: i"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "i: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rs: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "m: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15_value;
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lake_instFromJsonModuleOutputDescrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ModuleOutputDescrs_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonModuleOutputDescrs___closed__0 = (const lean_object*)&l_Lake_instFromJsonModuleOutputDescrs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonModuleOutputDescrs = (const lean_object*)&l_Lake_instFromJsonModuleOutputDescrs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ModuleOutputArtifacts_descrs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_oleanParts(lean_object* v_self_1_){
_start:
{
lean_object* v_olean_2_; lean_object* v_oleanServer_x3f_3_; lean_object* v_oleanPrivate_x3f_4_; lean_object* v_descrs_6_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_descrs_11_; 
v_olean_2_ = lean_ctor_get(v_self_1_, 0);
lean_inc_ref(v_olean_2_);
v_oleanServer_x3f_3_ = lean_ctor_get(v_self_1_, 1);
lean_inc(v_oleanServer_x3f_3_);
v_oleanPrivate_x3f_4_ = lean_ctor_get(v_self_1_, 2);
lean_inc(v_oleanPrivate_x3f_4_);
lean_dec_ref(v_self_1_);
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_mk_empty_array_with_capacity(v___x_9_);
v_descrs_11_ = lean_array_push(v___x_10_, v_olean_2_);
if (lean_obj_tag(v_oleanServer_x3f_3_) == 1)
{
lean_object* v_val_12_; lean_object* v_descrs_13_; 
v_val_12_ = lean_ctor_get(v_oleanServer_x3f_3_, 0);
lean_inc(v_val_12_);
lean_dec_ref_known(v_oleanServer_x3f_3_, 1);
v_descrs_13_ = lean_array_push(v_descrs_11_, v_val_12_);
v_descrs_6_ = v_descrs_13_;
goto v___jp_5_;
}
else
{
lean_dec(v_oleanServer_x3f_3_);
v_descrs_6_ = v_descrs_11_;
goto v___jp_5_;
}
v___jp_5_:
{
if (lean_obj_tag(v_oleanPrivate_x3f_4_) == 1)
{
lean_object* v_val_7_; lean_object* v_descrs_8_; 
v_val_7_ = lean_ctor_get(v_oleanPrivate_x3f_4_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v_oleanPrivate_x3f_4_, 1);
v_descrs_8_ = lean_array_push(v_descrs_6_, v_val_7_);
return v_descrs_8_;
}
else
{
lean_dec(v_oleanPrivate_x3f_4_);
return v_descrs_6_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(size_t v_sz_15_, size_t v_i_16_, lean_object* v_bs_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lean_usize_dec_lt(v_i_16_, v_sz_15_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = l_unsafeCast___redArg(v_bs_17_);
lean_dec_ref(v_bs_17_);
return v___x_19_;
}
else
{
lean_object* v_v_20_; lean_object* v___x_21_; uint64_t v_hash_22_; lean_object* v_ext_23_; lean_object* v___x_24_; lean_object* v_bs_x27_25_; lean_object* v___y_27_; lean_object* v___x_34_; uint8_t v___x_35_; 
v_v_20_ = lean_array_uget_borrowed(v_bs_17_, v_i_16_);
v___x_21_ = l_unsafeCast___redArg(v_v_20_);
v_hash_22_ = lean_ctor_get_uint64(v___x_21_, sizeof(void*)*1);
v_ext_23_ = lean_ctor_get(v___x_21_, 0);
lean_inc_ref(v_ext_23_);
lean_dec(v___x_21_);
v___x_24_ = lean_unsigned_to_nat(0u);
v_bs_x27_25_ = lean_array_uset(v_bs_17_, v_i_16_, v___x_24_);
v___x_34_ = lean_string_utf8_byte_size(v_ext_23_);
v___x_35_ = lean_nat_dec_eq(v___x_34_, v___x_24_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = l_Lake_lowerHexUInt64(v_hash_22_);
v___x_37_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_38_ = lean_string_append(v___x_36_, v___x_37_);
v___x_39_ = lean_string_append(v___x_38_, v_ext_23_);
lean_dec_ref(v_ext_23_);
v___y_27_ = v___x_39_;
goto v___jp_26_;
}
else
{
lean_object* v___x_40_; 
lean_dec_ref(v_ext_23_);
v___x_40_ = l_Lake_lowerHexUInt64(v_hash_22_);
v___y_27_ = v___x_40_;
goto v___jp_26_;
}
v___jp_26_:
{
lean_object* v___x_28_; size_t v___x_29_; size_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_28_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_28_, 0, v___y_27_);
v___x_29_ = ((size_t)1ULL);
v___x_30_ = lean_usize_add(v_i_16_, v___x_29_);
v___x_31_ = l_unsafeCast___redArg(v___x_28_);
lean_dec_ref_known(v___x_28_, 1);
v___x_32_ = lean_array_uset(v_bs_x27_25_, v_i_16_, v___x_31_);
v_i_16_ = v___x_30_;
v_bs_17_ = v___x_32_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___boxed(lean_object* v_sz_41_, lean_object* v_i_42_, lean_object* v_bs_43_){
_start:
{
size_t v_sz_boxed_44_; size_t v_i_boxed_45_; lean_object* v_res_46_; 
v_sz_boxed_44_ = lean_unbox_usize(v_sz_41_);
lean_dec(v_sz_41_);
v_i_boxed_45_ = lean_unbox_usize(v_i_42_);
lean_dec(v_i_42_);
v_res_46_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(v_sz_boxed_44_, v_i_boxed_45_, v_bs_43_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(lean_object* v_a_47_){
_start:
{
size_t v_sz_48_; size_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_sz_48_ = lean_array_size(v_a_47_);
v___x_49_ = ((size_t)0ULL);
v___x_50_ = l_unsafeCast___redArg(v_a_47_);
v___x_51_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(v_sz_48_, v___x_49_, v___x_50_);
v___x_52_ = l_unsafeCast___redArg(v___x_51_);
lean_dec_ref(v___x_51_);
v___x_53_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0___boxed(lean_object* v_a_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(v_a_54_);
lean_dec_ref(v_a_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_toJson(lean_object* v_self_64_){
_start:
{
lean_object* v___y_66_; lean_object* v___y_67_; lean_object* v___y_68_; uint8_t v_isModule_72_; lean_object* v_ilean_73_; lean_object* v_irSig_x3f_74_; lean_object* v_ir_x3f_75_; lean_object* v_c_76_; lean_object* v_bc_x3f_77_; lean_object* v_ltar_x3f_78_; lean_object* v_obj_80_; lean_object* v___y_95_; lean_object* v___y_96_; lean_object* v___y_97_; lean_object* v___y_101_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v_obj_119_; lean_object* v___y_132_; lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v_obj_138_; lean_object* v___y_152_; lean_object* v___y_153_; lean_object* v___y_154_; uint64_t v_hash_157_; lean_object* v_ext_158_; lean_object* v_obj_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v_obj_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_obj_166_; lean_object* v___x_167_; lean_object* v___y_169_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v_isModule_72_ = lean_ctor_get_uint8(v_self_64_, sizeof(void*)*9);
v_ilean_73_ = lean_ctor_get(v_self_64_, 3);
v_irSig_x3f_74_ = lean_ctor_get(v_self_64_, 4);
lean_inc(v_irSig_x3f_74_);
v_ir_x3f_75_ = lean_ctor_get(v_self_64_, 5);
lean_inc(v_ir_x3f_75_);
v_c_76_ = lean_ctor_get(v_self_64_, 6);
lean_inc_ref(v_c_76_);
v_bc_x3f_77_ = lean_ctor_get(v_self_64_, 7);
lean_inc(v_bc_x3f_77_);
v_ltar_x3f_78_ = lean_ctor_get(v_self_64_, 8);
lean_inc(v_ltar_x3f_78_);
v_hash_157_ = lean_ctor_get_uint64(v_ilean_73_, sizeof(void*)*1);
v_ext_158_ = lean_ctor_get(v_ilean_73_, 0);
lean_inc_ref(v_ext_158_);
v_obj_159_ = lean_box(1);
v___x_160_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__4));
v___x_161_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_161_, 0, v_isModule_72_);
v_obj_162_ = l_Lake_JsonObject_insertJson(v_obj_159_, v___x_160_, v___x_161_);
v___x_163_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__5));
v___x_164_ = l_Lake_ModuleOutputDescrs_oleanParts(v_self_64_);
v___x_165_ = l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(v___x_164_);
lean_dec_ref(v___x_164_);
v_obj_166_ = l_Lake_JsonObject_insertJson(v_obj_162_, v___x_163_, v___x_165_);
v___x_167_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__6));
v___x_184_ = lean_string_utf8_byte_size(v_ext_158_);
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = lean_nat_dec_eq(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = l_Lake_lowerHexUInt64(v_hash_157_);
v___x_188_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_189_ = lean_string_append(v___x_187_, v___x_188_);
v___x_190_ = lean_string_append(v___x_189_, v_ext_158_);
lean_dec_ref(v_ext_158_);
v___y_169_ = v___x_190_;
goto v___jp_168_;
}
else
{
lean_object* v___x_191_; 
lean_dec_ref(v_ext_158_);
v___x_191_ = l_Lake_lowerHexUInt64(v_hash_157_);
v___y_169_ = v___x_191_;
goto v___jp_168_;
}
v___jp_65_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_69_, 0, v___y_68_);
lean_inc_ref(v___y_67_);
v___x_70_ = l_Lake_JsonObject_insertJson(v___y_66_, v___y_67_, v___x_69_);
v___x_71_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
v___jp_79_:
{
if (lean_obj_tag(v_ltar_x3f_78_) == 1)
{
lean_object* v_val_81_; uint64_t v_hash_82_; lean_object* v_ext_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v_val_81_ = lean_ctor_get(v_ltar_x3f_78_, 0);
lean_inc(v_val_81_);
lean_dec_ref_known(v_ltar_x3f_78_, 1);
v_hash_82_ = lean_ctor_get_uint64(v_val_81_, sizeof(void*)*1);
v_ext_83_ = lean_ctor_get(v_val_81_, 0);
lean_inc_ref(v_ext_83_);
lean_dec(v_val_81_);
v___x_84_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__0));
v___x_85_ = lean_string_utf8_byte_size(v_ext_83_);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_nat_dec_eq(v___x_85_, v___x_86_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_88_ = l_Lake_lowerHexUInt64(v_hash_82_);
v___x_89_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_90_ = lean_string_append(v___x_88_, v___x_89_);
v___x_91_ = lean_string_append(v___x_90_, v_ext_83_);
lean_dec_ref(v_ext_83_);
v___y_66_ = v_obj_80_;
v___y_67_ = v___x_84_;
v___y_68_ = v___x_91_;
goto v___jp_65_;
}
else
{
lean_object* v___x_92_; 
lean_dec_ref(v_ext_83_);
v___x_92_ = l_Lake_lowerHexUInt64(v_hash_82_);
v___y_66_ = v_obj_80_;
v___y_67_ = v___x_84_;
v___y_68_ = v___x_92_;
goto v___jp_65_;
}
}
else
{
lean_object* v___x_93_; 
lean_dec(v_ltar_x3f_78_);
v___x_93_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_93_, 0, v_obj_80_);
return v___x_93_;
}
}
v___jp_94_:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___y_97_);
lean_inc_ref(v___y_96_);
v___x_99_ = l_Lake_JsonObject_insertJson(v___y_95_, v___y_96_, v___x_98_);
v_obj_80_ = v___x_99_;
goto v___jp_79_;
}
v___jp_100_:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_104_, 0, v___y_103_);
lean_inc_ref(v___y_102_);
v___x_105_ = l_Lake_JsonObject_insertJson(v___y_101_, v___y_102_, v___x_104_);
if (lean_obj_tag(v_bc_x3f_77_) == 1)
{
lean_object* v_val_106_; uint64_t v_hash_107_; lean_object* v_ext_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v_val_106_ = lean_ctor_get(v_bc_x3f_77_, 0);
lean_inc(v_val_106_);
lean_dec_ref_known(v_bc_x3f_77_, 1);
v_hash_107_ = lean_ctor_get_uint64(v_val_106_, sizeof(void*)*1);
v_ext_108_ = lean_ctor_get(v_val_106_, 0);
lean_inc_ref(v_ext_108_);
lean_dec(v_val_106_);
v___x_109_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__1));
v___x_110_ = lean_string_utf8_byte_size(v_ext_108_);
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_nat_dec_eq(v___x_110_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_113_ = l_Lake_lowerHexUInt64(v_hash_107_);
v___x_114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
v___x_116_ = lean_string_append(v___x_115_, v_ext_108_);
lean_dec_ref(v_ext_108_);
v___y_95_ = v___x_105_;
v___y_96_ = v___x_109_;
v___y_97_ = v___x_116_;
goto v___jp_94_;
}
else
{
lean_object* v___x_117_; 
lean_dec_ref(v_ext_108_);
v___x_117_ = l_Lake_lowerHexUInt64(v_hash_107_);
v___y_95_ = v___x_105_;
v___y_96_ = v___x_109_;
v___y_97_ = v___x_117_;
goto v___jp_94_;
}
}
else
{
lean_dec(v_bc_x3f_77_);
v_obj_80_ = v___x_105_;
goto v___jp_79_;
}
}
v___jp_118_:
{
uint64_t v_hash_120_; lean_object* v_ext_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v_hash_120_ = lean_ctor_get_uint64(v_c_76_, sizeof(void*)*1);
v_ext_121_ = lean_ctor_get(v_c_76_, 0);
lean_inc_ref(v_ext_121_);
lean_dec_ref(v_c_76_);
v___x_122_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__2));
v___x_123_ = lean_string_utf8_byte_size(v_ext_121_);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_nat_dec_eq(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_126_ = l_Lake_lowerHexUInt64(v_hash_120_);
v___x_127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_128_ = lean_string_append(v___x_126_, v___x_127_);
v___x_129_ = lean_string_append(v___x_128_, v_ext_121_);
lean_dec_ref(v_ext_121_);
v___y_101_ = v_obj_119_;
v___y_102_ = v___x_122_;
v___y_103_ = v___x_129_;
goto v___jp_100_;
}
else
{
lean_object* v___x_130_; 
lean_dec_ref(v_ext_121_);
v___x_130_ = l_Lake_lowerHexUInt64(v_hash_120_);
v___y_101_ = v_obj_119_;
v___y_102_ = v___x_122_;
v___y_103_ = v___x_130_;
goto v___jp_100_;
}
}
v___jp_131_:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_135_, 0, v___y_134_);
lean_inc_ref(v___y_133_);
v___x_136_ = l_Lake_JsonObject_insertJson(v___y_132_, v___y_133_, v___x_135_);
v_obj_119_ = v___x_136_;
goto v___jp_118_;
}
v___jp_137_:
{
if (lean_obj_tag(v_ir_x3f_75_) == 1)
{
lean_object* v_val_139_; uint64_t v_hash_140_; lean_object* v_ext_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_val_139_ = lean_ctor_get(v_ir_x3f_75_, 0);
lean_inc(v_val_139_);
lean_dec_ref_known(v_ir_x3f_75_, 1);
v_hash_140_ = lean_ctor_get_uint64(v_val_139_, sizeof(void*)*1);
v_ext_141_ = lean_ctor_get(v_val_139_, 0);
lean_inc_ref(v_ext_141_);
lean_dec(v_val_139_);
v___x_142_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__3));
v___x_143_ = lean_string_utf8_byte_size(v_ext_141_);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = l_Lake_lowerHexUInt64(v_hash_140_);
v___x_147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_148_ = lean_string_append(v___x_146_, v___x_147_);
v___x_149_ = lean_string_append(v___x_148_, v_ext_141_);
lean_dec_ref(v_ext_141_);
v___y_132_ = v_obj_138_;
v___y_133_ = v___x_142_;
v___y_134_ = v___x_149_;
goto v___jp_131_;
}
else
{
lean_object* v___x_150_; 
lean_dec_ref(v_ext_141_);
v___x_150_ = l_Lake_lowerHexUInt64(v_hash_140_);
v___y_132_ = v_obj_138_;
v___y_133_ = v___x_142_;
v___y_134_ = v___x_150_;
goto v___jp_131_;
}
}
else
{
lean_dec(v_ir_x3f_75_);
v_obj_119_ = v_obj_138_;
goto v___jp_118_;
}
}
v___jp_151_:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_155_, 0, v___y_154_);
lean_inc_ref(v___y_152_);
v___x_156_ = l_Lake_JsonObject_insertJson(v___y_153_, v___y_152_, v___x_155_);
v_obj_138_ = v___x_156_;
goto v___jp_137_;
}
v___jp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_170_, 0, v___y_169_);
v___x_171_ = l_Lake_JsonObject_insertJson(v_obj_166_, v___x_167_, v___x_170_);
if (lean_obj_tag(v_irSig_x3f_74_) == 1)
{
lean_object* v_val_172_; uint64_t v_hash_173_; lean_object* v_ext_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v_val_172_ = lean_ctor_get(v_irSig_x3f_74_, 0);
lean_inc(v_val_172_);
lean_dec_ref_known(v_irSig_x3f_74_, 1);
v_hash_173_ = lean_ctor_get_uint64(v_val_172_, sizeof(void*)*1);
v_ext_174_ = lean_ctor_get(v_val_172_, 0);
lean_inc_ref(v_ext_174_);
lean_dec(v_val_172_);
v___x_175_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__7));
v___x_176_ = lean_string_utf8_byte_size(v_ext_174_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_nat_dec_eq(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_179_ = l_Lake_lowerHexUInt64(v_hash_173_);
v___x_180_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_181_ = lean_string_append(v___x_179_, v___x_180_);
v___x_182_ = lean_string_append(v___x_181_, v_ext_174_);
lean_dec_ref(v_ext_174_);
v___y_152_ = v___x_175_;
v___y_153_ = v___x_171_;
v___y_154_ = v___x_182_;
goto v___jp_151_;
}
else
{
lean_object* v___x_183_; 
lean_dec_ref(v_ext_174_);
v___x_183_ = l_Lake_lowerHexUInt64(v_hash_173_);
v___y_152_ = v___x_175_;
v___y_153_ = v___x_171_;
v___y_154_ = v___x_183_;
goto v___jp_151_;
}
}
else
{
lean_dec(v_irSig_x3f_74_);
v_obj_138_ = v___x_171_;
goto v___jp_137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(lean_object* v_x_196_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v___x_197_; 
v___x_197_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0));
return v___x_197_;
}
else
{
lean_object* v___x_198_; 
v___x_198_ = l_Lake_ArtifactDescr_fromJson_x3f(v_x_196_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_215_; 
v_a_207_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_215_ == 0)
{
v___x_209_ = v___x_198_;
v_isShared_210_ = v_isSharedCheck_215_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_198_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_215_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v_a_207_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v___x_211_);
v___x_213_ = v___x_209_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
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
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(lean_object* v_x_218_){
_start:
{
if (lean_obj_tag(v_x_218_) == 0)
{
lean_object* v___x_219_; 
v___x_219_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0));
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Json_getBool_x3f(v_x_218_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_220_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_220_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_237_; 
v_a_229_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_237_ == 0)
{
v___x_231_ = v___x_220_;
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_220_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v_a_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_235_ = v___x_231_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___boxed(lean_object* v_x_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(v_x_238_);
lean_dec(v_x_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(size_t v_sz_240_, size_t v_i_241_, lean_object* v_bs_242_){
_start:
{
uint8_t v___x_243_; 
v___x_243_ = lean_usize_dec_lt(v_i_241_, v_sz_240_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = l_unsafeCast___redArg(v_bs_242_);
lean_dec_ref(v_bs_242_);
v___x_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
else
{
lean_object* v_v_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_v_246_ = lean_array_uget_borrowed(v_bs_242_, v_i_241_);
v___x_247_ = l_unsafeCast___redArg(v_v_246_);
v___x_248_ = l_Lake_ArtifactDescr_fromJson_x3f(v___x_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec_ref(v_bs_242_);
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_258_; lean_object* v_bs_x27_259_; size_t v___x_260_; size_t v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_a_257_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_248_, 1);
v___x_258_ = lean_unsigned_to_nat(0u);
v_bs_x27_259_ = lean_array_uset(v_bs_242_, v_i_241_, v___x_258_);
v___x_260_ = ((size_t)1ULL);
v___x_261_ = lean_usize_add(v_i_241_, v___x_260_);
v___x_262_ = l_unsafeCast___redArg(v_a_257_);
lean_dec(v_a_257_);
v___x_263_ = lean_array_uset(v_bs_x27_259_, v_i_241_, v___x_262_);
v_i_241_ = v___x_261_;
v_bs_242_ = v___x_263_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0___boxed(lean_object* v_sz_265_, lean_object* v_i_266_, lean_object* v_bs_267_){
_start:
{
size_t v_sz_boxed_268_; size_t v_i_boxed_269_; lean_object* v_res_270_; 
v_sz_boxed_268_ = lean_unbox_usize(v_sz_265_);
lean_dec(v_sz_265_);
v_i_boxed_269_ = lean_unbox_usize(v_i_266_);
lean_dec(v_i_266_);
v_res_270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(v_sz_boxed_268_, v_i_boxed_269_, v_bs_267_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0(lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 4)
{
lean_object* v_elems_274_; size_t v_sz_275_; size_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v_elems_274_ = lean_ctor_get(v_x_273_, 0);
lean_inc_ref(v_elems_274_);
lean_dec_ref_known(v_x_273_, 1);
v_sz_275_ = lean_array_size(v_elems_274_);
v___x_276_ = ((size_t)0ULL);
v___x_277_ = l_unsafeCast___redArg(v_elems_274_);
lean_dec_ref(v_elems_274_);
v___x_278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(v_sz_275_, v___x_276_, v___x_277_);
v___x_279_ = l_unsafeCast___redArg(v___x_278_);
lean_dec_ref(v___x_278_);
return v___x_279_;
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_280_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0));
v___x_281_ = lean_unsigned_to_nat(80u);
v___x_282_ = l_Lean_Json_pretty(v_x_273_, v___x_281_);
v___x_283_ = lean_string_append(v___x_280_, v___x_282_);
lean_dec_ref(v___x_282_);
v___x_284_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1));
v___x_285_ = lean_string_append(v___x_283_, v___x_284_);
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f(lean_object* v_val_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Json_getObj_x3f(v_val_307_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_a_317_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_308_, 1);
v___x_318_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__5));
v___x_319_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v___x_320_; 
lean_dec(v_a_317_);
v___x_320_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1));
return v___x_320_;
}
else
{
lean_object* v_val_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_595_; 
v_val_321_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_595_ == 0)
{
v___x_323_ = v___x_319_;
v_isShared_324_ = v_isSharedCheck_595_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_val_321_);
lean_dec(v___x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_595_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0(v_val_321_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_335_; 
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_326_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_335_ == 0)
{
v___x_328_ = v___x_325_;
v_isShared_329_ = v_isSharedCheck_335_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_335_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_330_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2));
v___x_331_ = lean_string_append(v___x_330_, v_a_326_);
lean_dec(v_a_326_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_331_);
v___x_333_ = v___x_328_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
else
{
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_336_ = lean_ctor_get(v___x_325_, 0);
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
lean_ctor_set_tag(v___x_338_, 0);
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
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
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_594_; 
v_a_344_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_594_ == 0)
{
v___x_346_ = v___x_325_;
v_isShared_347_ = v_isSharedCheck_594_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_325_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_594_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_348_ = lean_unsigned_to_nat(0u);
v___x_349_ = lean_array_get_size(v_a_344_);
v___x_350_ = lean_nat_dec_lt(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; 
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v___x_351_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4));
return v___x_351_;
}
else
{
lean_object* v___x_352_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___y_356_; uint8_t v___y_357_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_368_; lean_object* v___y_369_; uint8_t v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_389_; uint8_t v___y_390_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v_a_403_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v_a_414_; lean_object* v___y_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v_a_443_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v_a_495_; lean_object* v_a_521_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_352_ = lean_array_fget(v_a_344_, v___x_348_);
v___x_570_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__4));
v___x_571_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v___x_572_; 
v___x_572_ = lean_box(0);
v_a_521_ = v___x_572_;
goto v___jp_520_;
}
else
{
lean_object* v_val_573_; lean_object* v___x_574_; 
v_val_573_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v___x_571_, 1);
v___x_574_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(v_val_573_);
lean_dec(v_val_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_584_; 
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_584_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_584_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_584_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_579_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15));
v___x_580_ = lean_string_append(v___x_579_, v_a_575_);
lean_dec(v_a_575_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_580_);
v___x_582_ = v___x_577_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
else
{
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_585_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_574_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_574_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set_tag(v___x_587_, 0);
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
else
{
lean_object* v_a_593_; 
v_a_593_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___x_574_, 1);
v_a_521_ = v_a_593_;
goto v___jp_520_;
}
}
}
v___jp_353_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_363_, 0, v___x_352_);
lean_ctor_set(v___x_363_, 1, v___y_356_);
lean_ctor_set(v___x_363_, 2, v___y_362_);
lean_ctor_set(v___x_363_, 3, v___y_360_);
lean_ctor_set(v___x_363_, 4, v___y_359_);
lean_ctor_set(v___x_363_, 5, v___y_358_);
lean_ctor_set(v___x_363_, 6, v___y_354_);
lean_ctor_set(v___x_363_, 7, v___y_355_);
lean_ctor_set(v___x_363_, 8, v___y_361_);
lean_ctor_set_uint8(v___x_363_, sizeof(void*)*9, v___y_357_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_363_);
v___x_365_ = v___x_346_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
v___jp_367_:
{
lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_376_ = lean_unsigned_to_nat(2u);
v___x_377_ = lean_nat_dec_lt(v___x_376_, v___x_349_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; 
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
v___x_378_ = lean_box(0);
v___y_354_ = v___y_368_;
v___y_355_ = v___y_369_;
v___y_356_ = v___y_375_;
v___y_357_ = v___y_370_;
v___y_358_ = v___y_371_;
v___y_359_ = v___y_373_;
v___y_360_ = v___y_372_;
v___y_361_ = v___y_374_;
v___y_362_ = v___x_378_;
goto v___jp_353_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_379_ = lean_array_fget(v_a_344_, v___x_376_);
lean_dec(v_a_344_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v___x_379_);
v___x_381_ = v___x_323_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
v___y_354_ = v___y_368_;
v___y_355_ = v___y_369_;
v___y_356_ = v___y_375_;
v___y_357_ = v___y_370_;
v___y_358_ = v___y_371_;
v___y_359_ = v___y_373_;
v___y_360_ = v___y_372_;
v___y_361_ = v___y_374_;
v___y_362_ = v___x_381_;
goto v___jp_353_;
}
}
}
v___jp_383_:
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = lean_nat_dec_lt(v___x_391_, v___x_349_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
v___x_393_ = lean_box(0);
v___y_368_ = v___y_384_;
v___y_369_ = v___y_385_;
v___y_370_ = v___y_390_;
v___y_371_ = v___y_386_;
v___y_372_ = v___y_388_;
v___y_373_ = v___y_387_;
v___y_374_ = v___y_389_;
v___y_375_ = v___x_393_;
goto v___jp_367_;
}
else
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_array_fget_borrowed(v_a_344_, v___x_391_);
lean_inc(v___x_394_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
v___y_368_ = v___y_384_;
v___y_369_ = v___y_385_;
v___y_370_ = v___y_390_;
v___y_371_ = v___y_386_;
v___y_372_ = v___y_388_;
v___y_373_ = v___y_387_;
v___y_374_ = v___y_389_;
v___y_375_ = v___x_395_;
goto v___jp_367_;
}
}
v___jp_396_:
{
if (lean_obj_tag(v___y_402_) == 0)
{
lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_404_ = lean_unsigned_to_nat(1u);
v___x_405_ = lean_nat_dec_lt(v___x_404_, v___x_349_);
v___y_384_ = v___y_397_;
v___y_385_ = v___y_398_;
v___y_386_ = v___y_399_;
v___y_387_ = v___y_401_;
v___y_388_ = v___y_400_;
v___y_389_ = v_a_403_;
v___y_390_ = v___x_405_;
goto v___jp_383_;
}
else
{
lean_object* v_val_406_; uint8_t v___x_407_; 
v_val_406_ = lean_ctor_get(v___y_402_, 0);
lean_inc(v_val_406_);
lean_dec_ref_known(v___y_402_, 1);
v___x_407_ = lean_unbox(v_val_406_);
lean_dec(v_val_406_);
v___y_384_ = v___y_397_;
v___y_385_ = v___y_398_;
v___y_386_ = v___y_399_;
v___y_387_ = v___y_401_;
v___y_388_ = v___y_400_;
v___y_389_ = v_a_403_;
v___y_390_ = v___x_407_;
goto v___jp_383_;
}
}
v___jp_408_:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__0));
v___x_416_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_415_);
lean_dec(v_a_317_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v___x_417_; 
v___x_417_ = lean_box(0);
v___y_397_ = v___y_409_;
v___y_398_ = v_a_414_;
v___y_399_ = v___y_410_;
v___y_400_ = v___y_412_;
v___y_401_ = v___y_411_;
v___y_402_ = v___y_413_;
v_a_403_ = v___x_417_;
goto v___jp_396_;
}
else
{
lean_object* v_val_418_; lean_object* v___x_419_; 
v_val_418_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_val_418_);
lean_dec_ref_known(v___x_416_, 1);
v___x_419_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_418_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_a_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_429_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_429_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_429_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_424_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5));
v___x_425_ = lean_string_append(v___x_424_, v_a_420_);
lean_dec(v_a_420_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_425_);
v___x_427_ = v___x_422_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
else
{
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec(v_a_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
v_a_430_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_419_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_419_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set_tag(v___x_432_, 0);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
else
{
lean_object* v_a_438_; 
v_a_438_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_419_, 1);
v___y_397_ = v___y_409_;
v___y_398_ = v_a_414_;
v___y_399_ = v___y_410_;
v___y_400_ = v___y_412_;
v___y_401_ = v___y_411_;
v___y_402_ = v___y_413_;
v_a_403_ = v_a_438_;
goto v___jp_396_;
}
}
}
}
v___jp_439_:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__2));
v___x_445_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_444_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v___x_446_; 
lean_dec(v_a_443_);
lean_dec(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v___x_446_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7));
return v___x_446_;
}
else
{
lean_object* v_val_447_; lean_object* v___x_448_; 
v_val_447_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_val_447_);
lean_dec_ref_known(v___x_445_, 1);
v___x_448_ = l_Lake_ArtifactDescr_fromJson_x3f(v_val_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_458_; 
lean_dec(v_a_443_);
lean_dec(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_449_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_458_ == 0)
{
v___x_451_ = v___x_448_;
v_isShared_452_ = v_isSharedCheck_458_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_448_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_458_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_453_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8));
v___x_454_ = lean_string_append(v___x_453_, v_a_449_);
lean_dec(v_a_449_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_454_);
v___x_456_ = v___x_451_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec(v_a_443_);
lean_dec(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_459_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_448_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_448_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
lean_ctor_set_tag(v___x_461_, 0);
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
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
lean_object* v_a_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_a_467_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_448_, 1);
v___x_468_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__1));
v___x_469_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_470_; 
v___x_470_ = lean_box(0);
v___y_409_ = v_a_467_;
v___y_410_ = v_a_443_;
v___y_411_ = v___y_441_;
v___y_412_ = v___y_440_;
v___y_413_ = v___y_442_;
v_a_414_ = v___x_470_;
goto v___jp_408_;
}
else
{
lean_object* v_val_471_; lean_object* v___x_472_; 
v_val_471_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_val_471_);
lean_dec_ref_known(v___x_469_, 1);
v___x_472_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_a_467_);
lean_dec(v_a_443_);
lean_dec(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_482_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_477_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9));
v___x_478_ = lean_string_append(v___x_477_, v_a_473_);
lean_dec(v_a_473_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_478_);
v___x_480_ = v___x_475_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
else
{
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
lean_dec(v_a_467_);
lean_dec(v_a_443_);
lean_dec(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_483_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_472_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_472_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 0);
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
else
{
lean_object* v_a_491_; 
v_a_491_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_472_, 1);
v___y_409_ = v_a_467_;
v___y_410_ = v_a_443_;
v___y_411_ = v___y_441_;
v___y_412_ = v___y_440_;
v___y_413_ = v___y_442_;
v_a_414_ = v_a_491_;
goto v___jp_408_;
}
}
}
}
}
}
}
v___jp_492_:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__3));
v___x_497_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_496_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v___x_498_; 
v___x_498_ = lean_box(0);
v___y_440_ = v___y_493_;
v___y_441_ = v_a_495_;
v___y_442_ = v___y_494_;
v_a_443_ = v___x_498_;
goto v___jp_439_;
}
else
{
lean_object* v_val_499_; lean_object* v___x_500_; 
v_val_499_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_val_499_);
lean_dec_ref_known(v___x_497_, 1);
v___x_500_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_499_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_a_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_501_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_510_ == 0)
{
v___x_503_ = v___x_500_;
v_isShared_504_ = v_isSharedCheck_510_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_500_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_510_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_505_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10));
v___x_506_ = lean_string_append(v___x_505_, v_a_501_);
lean_dec(v_a_501_);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v___x_506_);
v___x_508_ = v___x_503_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
else
{
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_a_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_511_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_500_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_500_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 0);
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
else
{
lean_object* v_a_519_; 
v_a_519_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_500_, 1);
v___y_440_ = v___y_493_;
v___y_441_ = v_a_495_;
v___y_442_ = v___y_494_;
v_a_443_ = v_a_519_;
goto v___jp_439_;
}
}
}
}
v___jp_520_:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__6));
v___x_523_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_522_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v___x_524_; 
lean_dec(v_a_521_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v___x_524_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12));
return v___x_524_;
}
else
{
lean_object* v_val_525_; lean_object* v___x_526_; 
v_val_525_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_val_525_);
lean_dec_ref_known(v___x_523_, 1);
v___x_526_ = l_Lake_ArtifactDescr_fromJson_x3f(v_val_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_a_521_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_531_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13));
v___x_532_ = lean_string_append(v___x_531_, v_a_527_);
lean_dec(v_a_527_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_532_);
v___x_534_ = v___x_529_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
else
{
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec(v_a_521_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_537_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_526_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_526_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
lean_ctor_set_tag(v___x_539_, 0);
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_a_545_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_526_, 1);
v___x_546_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__7));
v___x_547_ = l_Lake_JsonObject_getJson_x3f(v_a_317_, v___x_546_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v___x_548_; 
v___x_548_ = lean_box(0);
v___y_493_ = v_a_545_;
v___y_494_ = v_a_521_;
v_a_495_ = v___x_548_;
goto v___jp_492_;
}
else
{
lean_object* v_val_549_; lean_object* v___x_550_; 
v_val_549_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_val_549_);
lean_dec_ref_known(v___x_547_, 1);
v___x_550_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_549_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_560_; 
lean_dec(v_a_545_);
lean_dec(v_a_521_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_551_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_560_ == 0)
{
v___x_553_ = v___x_550_;
v_isShared_554_ = v_isSharedCheck_560_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_550_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_560_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_558_; 
v___x_555_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14));
v___x_556_ = lean_string_append(v___x_555_, v_a_551_);
lean_dec(v_a_551_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_556_);
v___x_558_ = v___x_553_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
else
{
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
lean_dec(v_a_545_);
lean_dec(v_a_521_);
lean_dec(v___x_352_);
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_323_);
lean_dec(v_a_317_);
v_a_561_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_550_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_550_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set_tag(v___x_563_, 0);
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
else
{
lean_object* v_a_569_; 
v_a_569_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_550_, 1);
v___y_493_ = v_a_545_;
v___y_494_ = v_a_521_;
v_a_495_ = v_a_569_;
goto v___jp_492_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleOutputArtifacts_descrs(lean_object* v_arts_598_){
_start:
{
lean_object* v_olean_599_; uint8_t v_isModule_600_; lean_object* v_oleanServer_x3f_601_; lean_object* v_oleanPrivate_x3f_602_; lean_object* v_ilean_603_; lean_object* v_irSig_x3f_604_; lean_object* v_ir_x3f_605_; lean_object* v_c_606_; lean_object* v_bc_x3f_607_; lean_object* v_ltar_x3f_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_707_; 
v_olean_599_ = lean_ctor_get(v_arts_598_, 0);
v_isModule_600_ = lean_ctor_get_uint8(v_arts_598_, sizeof(void*)*9);
v_oleanServer_x3f_601_ = lean_ctor_get(v_arts_598_, 1);
v_oleanPrivate_x3f_602_ = lean_ctor_get(v_arts_598_, 2);
v_ilean_603_ = lean_ctor_get(v_arts_598_, 3);
v_irSig_x3f_604_ = lean_ctor_get(v_arts_598_, 4);
v_ir_x3f_605_ = lean_ctor_get(v_arts_598_, 5);
v_c_606_ = lean_ctor_get(v_arts_598_, 6);
v_bc_x3f_607_ = lean_ctor_get(v_arts_598_, 7);
v_ltar_x3f_608_ = lean_ctor_get(v_arts_598_, 8);
v_isSharedCheck_707_ = !lean_is_exclusive(v_arts_598_);
if (v_isSharedCheck_707_ == 0)
{
v___x_610_ = v_arts_598_;
v_isShared_611_ = v_isSharedCheck_707_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_ltar_x3f_608_);
lean_inc(v_bc_x3f_607_);
lean_inc(v_c_606_);
lean_inc(v_ir_x3f_605_);
lean_inc(v_irSig_x3f_604_);
lean_inc(v_ilean_603_);
lean_inc(v_oleanPrivate_x3f_602_);
lean_inc(v_oleanServer_x3f_601_);
lean_inc(v_olean_599_);
lean_dec(v_arts_598_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_707_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_descr_612_; lean_object* v___y_614_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_686_; 
v_descr_612_ = lean_ctor_get(v_olean_599_, 0);
lean_inc_ref(v_descr_612_);
lean_dec_ref(v_olean_599_);
if (lean_obj_tag(v_oleanServer_x3f_601_) == 0)
{
lean_object* v___x_697_; 
v___x_697_ = lean_box(0);
v___y_686_ = v___x_697_;
goto v___jp_685_;
}
else
{
lean_object* v_val_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_706_; 
v_val_698_ = lean_ctor_get(v_oleanServer_x3f_601_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_oleanServer_x3f_601_);
if (v_isSharedCheck_706_ == 0)
{
v___x_700_ = v_oleanServer_x3f_601_;
v_isShared_701_ = v_isSharedCheck_706_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_val_698_);
lean_dec(v_oleanServer_x3f_601_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_706_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v_descr_702_; lean_object* v___x_704_; 
v_descr_702_ = lean_ctor_get(v_val_698_, 0);
lean_inc_ref(v_descr_702_);
lean_dec(v_val_698_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v_descr_702_);
v___x_704_ = v___x_700_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_descr_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
v___y_686_ = v___x_704_;
goto v___jp_685_;
}
}
}
v___jp_613_:
{
if (lean_obj_tag(v_ltar_x3f_608_) == 0)
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = lean_box(0);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 8, v___x_621_);
lean_ctor_set(v___x_610_, 7, v___y_620_);
lean_ctor_set(v___x_610_, 6, v___y_614_);
lean_ctor_set(v___x_610_, 5, v___y_615_);
lean_ctor_set(v___x_610_, 4, v___y_617_);
lean_ctor_set(v___x_610_, 3, v___y_618_);
lean_ctor_set(v___x_610_, 2, v___y_616_);
lean_ctor_set(v___x_610_, 1, v___y_619_);
lean_ctor_set(v___x_610_, 0, v_descr_612_);
v___x_623_ = v___x_610_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_descr_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___y_619_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v___y_616_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v___y_618_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v___y_617_);
lean_ctor_set(v_reuseFailAlloc_624_, 5, v___y_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 6, v___y_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 7, v___y_620_);
lean_ctor_set(v_reuseFailAlloc_624_, 8, v___x_621_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*9, v_isModule_600_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
else
{
lean_object* v_val_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_636_; 
v_val_625_ = lean_ctor_get(v_ltar_x3f_608_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v_ltar_x3f_608_);
if (v_isSharedCheck_636_ == 0)
{
v___x_627_ = v_ltar_x3f_608_;
v_isShared_628_ = v_isSharedCheck_636_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_val_625_);
lean_dec(v_ltar_x3f_608_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_636_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_descr_629_; lean_object* v___x_631_; 
v_descr_629_ = lean_ctor_get(v_val_625_, 0);
lean_inc_ref(v_descr_629_);
lean_dec(v_val_625_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v_descr_629_);
v___x_631_ = v___x_627_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_descr_629_);
v___x_631_ = v_reuseFailAlloc_635_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_633_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 8, v___x_631_);
lean_ctor_set(v___x_610_, 7, v___y_620_);
lean_ctor_set(v___x_610_, 6, v___y_614_);
lean_ctor_set(v___x_610_, 5, v___y_615_);
lean_ctor_set(v___x_610_, 4, v___y_617_);
lean_ctor_set(v___x_610_, 3, v___y_618_);
lean_ctor_set(v___x_610_, 2, v___y_616_);
lean_ctor_set(v___x_610_, 1, v___y_619_);
lean_ctor_set(v___x_610_, 0, v_descr_612_);
v___x_633_ = v___x_610_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_descr_612_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___y_619_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v___y_616_);
lean_ctor_set(v_reuseFailAlloc_634_, 3, v___y_618_);
lean_ctor_set(v_reuseFailAlloc_634_, 4, v___y_617_);
lean_ctor_set(v_reuseFailAlloc_634_, 5, v___y_615_);
lean_ctor_set(v_reuseFailAlloc_634_, 6, v___y_614_);
lean_ctor_set(v_reuseFailAlloc_634_, 7, v___y_620_);
lean_ctor_set(v_reuseFailAlloc_634_, 8, v___x_631_);
lean_ctor_set_uint8(v_reuseFailAlloc_634_, sizeof(void*)*9, v_isModule_600_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
v___jp_637_:
{
if (lean_obj_tag(v_bc_x3f_607_) == 0)
{
lean_object* v_descr_643_; lean_object* v___x_644_; 
v_descr_643_ = lean_ctor_get(v_c_606_, 0);
lean_inc_ref(v_descr_643_);
lean_dec_ref(v_c_606_);
v___x_644_ = lean_box(0);
v___y_614_ = v_descr_643_;
v___y_615_ = v___y_642_;
v___y_616_ = v___y_638_;
v___y_617_ = v___y_640_;
v___y_618_ = v___y_639_;
v___y_619_ = v___y_641_;
v___y_620_ = v___x_644_;
goto v___jp_613_;
}
else
{
lean_object* v_val_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_654_; 
v_val_645_ = lean_ctor_get(v_bc_x3f_607_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v_bc_x3f_607_);
if (v_isSharedCheck_654_ == 0)
{
v___x_647_ = v_bc_x3f_607_;
v_isShared_648_ = v_isSharedCheck_654_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_val_645_);
lean_dec(v_bc_x3f_607_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_654_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_descr_649_; lean_object* v_descr_650_; lean_object* v___x_652_; 
v_descr_649_ = lean_ctor_get(v_c_606_, 0);
lean_inc_ref(v_descr_649_);
lean_dec_ref(v_c_606_);
v_descr_650_ = lean_ctor_get(v_val_645_, 0);
lean_inc_ref(v_descr_650_);
lean_dec(v_val_645_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v_descr_650_);
v___x_652_ = v___x_647_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_descr_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
v___y_614_ = v_descr_649_;
v___y_615_ = v___y_642_;
v___y_616_ = v___y_638_;
v___y_617_ = v___y_640_;
v___y_618_ = v___y_639_;
v___y_619_ = v___y_641_;
v___y_620_ = v___x_652_;
goto v___jp_613_;
}
}
}
}
v___jp_655_:
{
if (lean_obj_tag(v_ir_x3f_605_) == 0)
{
lean_object* v___x_660_; 
v___x_660_ = lean_box(0);
v___y_638_ = v___y_656_;
v___y_639_ = v___y_657_;
v___y_640_ = v___y_659_;
v___y_641_ = v___y_658_;
v___y_642_ = v___x_660_;
goto v___jp_637_;
}
else
{
lean_object* v_val_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_669_; 
v_val_661_ = lean_ctor_get(v_ir_x3f_605_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v_ir_x3f_605_);
if (v_isSharedCheck_669_ == 0)
{
v___x_663_ = v_ir_x3f_605_;
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_val_661_);
lean_dec(v_ir_x3f_605_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v_descr_665_; lean_object* v___x_667_; 
v_descr_665_ = lean_ctor_get(v_val_661_, 0);
lean_inc_ref(v_descr_665_);
lean_dec(v_val_661_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v_descr_665_);
v___x_667_ = v___x_663_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_descr_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
v___y_638_ = v___y_656_;
v___y_639_ = v___y_657_;
v___y_640_ = v___y_659_;
v___y_641_ = v___y_658_;
v___y_642_ = v___x_667_;
goto v___jp_637_;
}
}
}
}
v___jp_670_:
{
if (lean_obj_tag(v_irSig_x3f_604_) == 0)
{
lean_object* v_descr_673_; lean_object* v___x_674_; 
v_descr_673_ = lean_ctor_get(v_ilean_603_, 0);
lean_inc_ref(v_descr_673_);
lean_dec_ref(v_ilean_603_);
v___x_674_ = lean_box(0);
v___y_656_ = v___y_672_;
v___y_657_ = v_descr_673_;
v___y_658_ = v___y_671_;
v___y_659_ = v___x_674_;
goto v___jp_655_;
}
else
{
lean_object* v_val_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_684_; 
v_val_675_ = lean_ctor_get(v_irSig_x3f_604_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v_irSig_x3f_604_);
if (v_isSharedCheck_684_ == 0)
{
v___x_677_ = v_irSig_x3f_604_;
v_isShared_678_ = v_isSharedCheck_684_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_val_675_);
lean_dec(v_irSig_x3f_604_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_684_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v_descr_679_; lean_object* v_descr_680_; lean_object* v___x_682_; 
v_descr_679_ = lean_ctor_get(v_ilean_603_, 0);
lean_inc_ref(v_descr_679_);
lean_dec_ref(v_ilean_603_);
v_descr_680_ = lean_ctor_get(v_val_675_, 0);
lean_inc_ref(v_descr_680_);
lean_dec(v_val_675_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v_descr_680_);
v___x_682_ = v___x_677_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_descr_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
v___y_656_ = v___y_672_;
v___y_657_ = v_descr_679_;
v___y_658_ = v___y_671_;
v___y_659_ = v___x_682_;
goto v___jp_655_;
}
}
}
}
v___jp_685_:
{
if (lean_obj_tag(v_oleanPrivate_x3f_602_) == 0)
{
lean_object* v___x_687_; 
v___x_687_ = lean_box(0);
v___y_671_ = v___y_686_;
v___y_672_ = v___x_687_;
goto v___jp_670_;
}
else
{
lean_object* v_val_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_696_; 
v_val_688_ = lean_ctor_get(v_oleanPrivate_x3f_602_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v_oleanPrivate_x3f_602_);
if (v_isSharedCheck_696_ == 0)
{
v___x_690_ = v_oleanPrivate_x3f_602_;
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_val_688_);
lean_dec(v_oleanPrivate_x3f_602_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_descr_692_; lean_object* v___x_694_; 
v_descr_692_ = lean_ctor_get(v_val_688_, 0);
lean_inc_ref(v_descr_692_);
lean_dec(v_val_688_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v_descr_692_);
v___x_694_ = v___x_690_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_descr_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
v___y_671_ = v___y_686_;
v___y_672_ = v___x_694_;
goto v___jp_670_;
}
}
}
}
}
}
}
lean_object* runtime_initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_ModuleArtifacts(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_ModuleArtifacts(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_ModuleArtifacts(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_ModuleArtifacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_ModuleArtifacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_ModuleArtifacts(builtin);
}
#ifdef __cplusplus
}
#endif

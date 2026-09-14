// Lean compiler output
// Module: Lake.Config.OutFormat
// Imports: public import Lean.Setup public import Init.Data.String.TakeDrop
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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_listToLines___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lake_listToLines___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_listToLines___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_listToLines___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_listToLines___redArg___closed__0 = (const lean_object*)&l_Lake_listToLines___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_listToLines(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__0 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__0_value;
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__1 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__1_value;
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__2 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__2_value;
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__3 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__3_value;
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__4 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__4_value;
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__5 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__5_value;
static const lean_closure_object l_Lake_arrayToLines___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_arrayToLines___redArg___closed__6 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__6_value;
static const lean_ctor_object l_Lake_arrayToLines___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_arrayToLines___redArg___closed__0_value),((lean_object*)&l_Lake_arrayToLines___redArg___closed__1_value)}};
static const lean_object* l_Lake_arrayToLines___redArg___closed__7 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__7_value;
static const lean_ctor_object l_Lake_arrayToLines___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_arrayToLines___redArg___closed__7_value),((lean_object*)&l_Lake_arrayToLines___redArg___closed__2_value),((lean_object*)&l_Lake_arrayToLines___redArg___closed__3_value),((lean_object*)&l_Lake_arrayToLines___redArg___closed__4_value),((lean_object*)&l_Lake_arrayToLines___redArg___closed__5_value)}};
static const lean_object* l_Lake_arrayToLines___redArg___closed__8 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__8_value;
static const lean_ctor_object l_Lake_arrayToLines___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_arrayToLines___redArg___closed__8_value),((lean_object*)&l_Lake_arrayToLines___redArg___closed__6_value)}};
static const lean_object* l_Lake_arrayToLines___redArg___closed__9 = (const lean_object*)&l_Lake_arrayToLines___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_arrayToLines___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_arrayToLines(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instToTextJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_compress, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTextJson___closed__0 = (const lean_object*)&l_Lake_instToTextJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTextJson = (const lean_object*)&l_Lake_instToTextJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instQueryText___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instQueryText___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instQueryText___redArg___closed__0 = (const lean_object*)&l_Lake_instQueryText___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg();
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryText(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextUnit___lam__0(lean_object*);
static const lean_closure_object l_Lake_instQueryTextUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instQueryTextUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instQueryTextUnit___closed__0 = (const lean_object*)&l_Lake_instQueryTextUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instQueryTextUnit = (const lean_object*)&l_Lake_instQueryTextUnit___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instQueryJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instQueryJson___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instQueryJson___redArg___closed__0 = (const lean_object*)&l_Lake_instQueryJson___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg();
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJson(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonUnit___lam__0(lean_object*);
static const lean_closure_object l_Lake_instQueryJsonUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instQueryJsonUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instQueryJsonUnit___closed__0 = (const lean_object*)&l_Lake_instQueryJsonUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instQueryJsonUnit = (const lean_object*)&l_Lake_instQueryJsonUnit___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_nullFormat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_nullFormat___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_nullFormat(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_nullFormat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ppImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "import "};
static const lean_object* l_Lake_ppImport___closed__0 = (const lean_object*)&l_Lake_ppImport___closed__0_value;
static const lean_string_object l_Lake_ppImport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "all "};
static const lean_object* l_Lake_ppImport___closed__1 = (const lean_object*)&l_Lake_ppImport___closed__1_value;
static const lean_string_object l_Lake_ppImport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "meta "};
static const lean_object* l_Lake_ppImport___closed__2 = (const lean_object*)&l_Lake_ppImport___closed__2_value;
static const lean_string_object l_Lake_ppImport___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "public "};
static const lean_object* l_Lake_ppImport___closed__3 = (const lean_object*)&l_Lake_ppImport___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_ppImport(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ppImport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ppModuleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lake_ppModuleHeader___closed__0 = (const lean_object*)&l_Lake_ppModuleHeader___closed__0_value;
static const lean_string_object l_Lake_ppModuleHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "module prelude"};
static const lean_object* l_Lake_ppModuleHeader___closed__1 = (const lean_object*)&l_Lake_ppModuleHeader___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ppModuleHeader___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0 = (const lean_object*)&l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader = (const lean_object*)&l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lake_OutFormat_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lake_OutFormat_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lake_OutFormat_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg(lean_object* v_text_22_){
_start:
{
lean_inc(v_text_22_);
return v_text_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg___boxed(lean_object* v_text_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lake_OutFormat_text_elim___redArg(v_text_23_);
lean_dec(v_text_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_text_28_){
_start:
{
lean_inc(v_text_28_);
return v_text_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_text_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lake_OutFormat_text_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_text_32_);
lean_dec(v_text_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg(lean_object* v_json_35_){
_start:
{
lean_inc(v_json_35_);
return v_json_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg___boxed(lean_object* v_json_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lake_OutFormat_json_elim___redArg(v_json_36_);
lean_dec(v_json_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_json_41_){
_start:
{
lean_inc(v_json_41_);
return v_json_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_json_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lake_OutFormat_json_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_json_45_);
lean_dec(v_json_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg(lean_object* v_inst_48_){
_start:
{
lean_inc_ref(v_inst_48_);
return v_inst_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg___boxed(lean_object* v_inst_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lake_instToTextOfToString___redArg(v_inst_49_);
lean_dec_ref(v_inst_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString(lean_object* v_00_u03b1_51_, lean_object* v_inst_52_){
_start:
{
lean_inc_ref(v_inst_52_);
return v_inst_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___boxed(lean_object* v_00_u03b1_53_, lean_object* v_inst_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lake_instToTextOfToString(v_00_u03b1_53_, v_inst_54_);
lean_dec_ref(v_inst_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg___lam__0(lean_object* v_f_57_, lean_object* v_x1_58_, lean_object* v_x2_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_apply_1(v_f_57_, v_x2_59_);
v___x_61_ = lean_string_append(v_x1_58_, v___x_60_);
lean_dec_ref(v___x_60_);
v___x_62_ = ((lean_object*)(l_Lake_listToLines___redArg___lam__0___closed__0));
v___x_63_ = lean_string_append(v___x_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg(lean_object* v_as_65_, lean_object* v_f_66_){
_start:
{
lean_object* v___f_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___f_67_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_67_, 0, v_f_66_);
v___x_68_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
v___x_69_ = l_List_foldl___redArg(v___f_67_, v___x_68_, v_as_65_);
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_string_utf8_byte_size(v___x_69_);
lean_inc(v___x_69_);
v___x_73_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_69_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_72_);
v___x_74_ = l_String_Slice_Pos_prevn(v___x_73_, v___x_72_, v___x_70_);
lean_dec_ref_known(v___x_73_, 3);
v___x_75_ = lean_string_utf8_extract_fast(v___x_69_, v___x_71_, v___x_74_);
lean_dec(v___x_74_);
lean_dec(v___x_69_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_listToLines(lean_object* v_00_u03b1_76_, lean_object* v_as_77_, lean_object* v_f_78_){
_start:
{
lean_object* v___f_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___f_79_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_79_, 0, v_f_78_);
v___x_80_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
v___x_81_ = l_List_foldl___redArg(v___f_79_, v___x_80_, v_as_77_);
v___x_82_ = lean_unsigned_to_nat(1u);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_string_utf8_byte_size(v___x_81_);
lean_inc(v___x_81_);
v___x_85_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_85_, 0, v___x_81_);
lean_ctor_set(v___x_85_, 1, v___x_83_);
lean_ctor_set(v___x_85_, 2, v___x_84_);
v___x_86_ = l_String_Slice_Pos_prevn(v___x_85_, v___x_84_, v___x_82_);
lean_dec_ref_known(v___x_85_, 3);
v___x_87_ = lean_string_utf8_extract_fast(v___x_81_, v___x_83_, v___x_86_);
lean_dec(v___x_86_);
lean_dec(v___x_81_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lake_arrayToLines___redArg(lean_object* v_as_107_, lean_object* v_f_108_){
_start:
{
lean_object* v___y_110_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_117_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_array_get_size(v_as_107_);
v___x_120_ = ((lean_object*)(l_Lake_arrayToLines___redArg___closed__9));
v___x_121_ = lean_nat_dec_lt(v___x_118_, v___x_119_);
if (v___x_121_ == 0)
{
lean_dec_ref(v_f_108_);
lean_dec_ref(v_as_107_);
v___y_110_ = v___x_117_;
goto v___jp_109_;
}
else
{
lean_object* v___f_122_; uint8_t v___x_123_; 
v___f_122_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_122_, 0, v_f_108_);
v___x_123_ = lean_nat_dec_le(v___x_119_, v___x_119_);
if (v___x_123_ == 0)
{
if (v___x_121_ == 0)
{
lean_dec_ref(v___f_122_);
lean_dec_ref(v_as_107_);
v___y_110_ = v___x_117_;
goto v___jp_109_;
}
else
{
size_t v___x_124_; size_t v___x_125_; lean_object* v___x_126_; 
v___x_124_ = ((size_t)0ULL);
v___x_125_ = lean_usize_of_nat(v___x_119_);
v___x_126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_120_, v___f_122_, v_as_107_, v___x_124_, v___x_125_, v___x_117_);
v___y_110_ = v___x_126_;
goto v___jp_109_;
}
}
else
{
size_t v___x_127_; size_t v___x_128_; lean_object* v___x_129_; 
v___x_127_ = ((size_t)0ULL);
v___x_128_ = lean_usize_of_nat(v___x_119_);
v___x_129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_120_, v___f_122_, v_as_107_, v___x_127_, v___x_128_, v___x_117_);
v___y_110_ = v___x_129_;
goto v___jp_109_;
}
}
v___jp_109_:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_111_ = lean_unsigned_to_nat(1u);
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = lean_string_utf8_byte_size(v___y_110_);
lean_inc_ref(v___y_110_);
v___x_114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_114_, 0, v___y_110_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_113_);
v___x_115_ = l_String_Slice_Pos_prevn(v___x_114_, v___x_113_, v___x_111_);
lean_dec_ref_known(v___x_114_, 3);
v___x_116_ = lean_string_utf8_extract_fast(v___y_110_, v___x_112_, v___x_115_);
lean_dec(v___x_115_);
lean_dec_ref(v___y_110_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_arrayToLines(lean_object* v_00_u03b1_130_, lean_object* v_as_131_, lean_object* v_f_132_){
_start:
{
lean_object* v___y_134_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_141_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_array_get_size(v_as_131_);
v___x_144_ = ((lean_object*)(l_Lake_arrayToLines___redArg___closed__9));
v___x_145_ = lean_nat_dec_lt(v___x_142_, v___x_143_);
if (v___x_145_ == 0)
{
lean_dec_ref(v_f_132_);
lean_dec_ref(v_as_131_);
v___y_134_ = v___x_141_;
goto v___jp_133_;
}
else
{
lean_object* v___f_146_; uint8_t v___x_147_; 
v___f_146_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_146_, 0, v_f_132_);
v___x_147_ = lean_nat_dec_le(v___x_143_, v___x_143_);
if (v___x_147_ == 0)
{
if (v___x_145_ == 0)
{
lean_dec_ref(v___f_146_);
lean_dec_ref(v_as_131_);
v___y_134_ = v___x_141_;
goto v___jp_133_;
}
else
{
size_t v___x_148_; size_t v___x_149_; lean_object* v___x_150_; 
v___x_148_ = ((size_t)0ULL);
v___x_149_ = lean_usize_of_nat(v___x_143_);
v___x_150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_144_, v___f_146_, v_as_131_, v___x_148_, v___x_149_, v___x_141_);
v___y_134_ = v___x_150_;
goto v___jp_133_;
}
}
else
{
size_t v___x_151_; size_t v___x_152_; lean_object* v___x_153_; 
v___x_151_ = ((size_t)0ULL);
v___x_152_ = lean_usize_of_nat(v___x_143_);
v___x_153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_144_, v___f_146_, v_as_131_, v___x_151_, v___x_152_, v___x_141_);
v___y_134_ = v___x_153_;
goto v___jp_133_;
}
}
v___jp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_string_utf8_byte_size(v___y_134_);
lean_inc_ref(v___y_134_);
v___x_138_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_138_, 0, v___y_134_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
lean_ctor_set(v___x_138_, 2, v___x_137_);
v___x_139_ = l_String_Slice_Pos_prevn(v___x_138_, v___x_137_, v___x_135_);
lean_dec_ref_known(v___x_138_, 3);
v___x_140_ = lean_string_utf8_extract_fast(v___y_134_, v___x_136_, v___x_139_);
lean_dec(v___x_139_);
lean_dec_ref(v___y_134_);
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__0(lean_object* v_inst_156_, lean_object* v_x1_157_, lean_object* v_x2_158_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_159_ = lean_apply_1(v_inst_156_, v_x2_158_);
v___x_160_ = lean_string_append(v_x1_157_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_161_ = ((lean_object*)(l_Lake_listToLines___redArg___lam__0___closed__0));
v___x_162_ = lean_string_append(v___x_160_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__1(lean_object* v___f_163_, lean_object* v_x_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_165_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
v___x_166_ = l_List_foldl___redArg(v___f_163_, v___x_165_, v_x_164_);
v___x_167_ = lean_unsigned_to_nat(1u);
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_169_ = lean_string_utf8_byte_size(v___x_166_);
lean_inc(v___x_166_);
v___x_170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_170_, 0, v___x_166_);
lean_ctor_set(v___x_170_, 1, v___x_168_);
lean_ctor_set(v___x_170_, 2, v___x_169_);
v___x_171_ = l_String_Slice_Pos_prevn(v___x_170_, v___x_169_, v___x_167_);
lean_dec_ref_known(v___x_170_, 3);
v___x_172_ = lean_string_utf8_extract_fast(v___x_166_, v___x_168_, v___x_171_);
lean_dec(v___x_171_);
lean_dec(v___x_166_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg(lean_object* v_inst_173_){
_start:
{
lean_object* v___f_174_; lean_object* v___f_175_; 
v___f_174_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_174_, 0, v_inst_173_);
v___f_175_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_175_, 0, v___f_174_);
return v___f_175_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList(lean_object* v_00_u03b1_176_, lean_object* v_inst_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lake_instToTextList___redArg(v_inst_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg___lam__1(lean_object* v___f_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___y_182_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_189_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_array_get_size(v_x_180_);
v___x_192_ = ((lean_object*)(l_Lake_arrayToLines___redArg___closed__9));
v___x_193_ = lean_nat_dec_lt(v___x_190_, v___x_191_);
if (v___x_193_ == 0)
{
lean_dec_ref(v_x_180_);
lean_dec_ref(v___f_179_);
v___y_182_ = v___x_189_;
goto v___jp_181_;
}
else
{
size_t v___x_194_; size_t v___x_195_; lean_object* v___x_196_; 
v___x_194_ = ((size_t)0ULL);
v___x_195_ = lean_usize_of_nat(v___x_191_);
v___x_196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_192_, v___f_179_, v_x_180_, v___x_194_, v___x_195_, v___x_189_);
v___y_182_ = v___x_196_;
goto v___jp_181_;
}
v___jp_181_:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_string_utf8_byte_size(v___y_182_);
lean_inc_ref(v___y_182_);
v___x_186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_186_, 0, v___y_182_);
lean_ctor_set(v___x_186_, 1, v___x_184_);
lean_ctor_set(v___x_186_, 2, v___x_185_);
v___x_187_ = l_String_Slice_Pos_prevn(v___x_186_, v___x_185_, v___x_183_);
lean_dec_ref_known(v___x_186_, 3);
v___x_188_ = lean_string_utf8_extract_fast(v___y_182_, v___x_184_, v___x_187_);
lean_dec(v___x_187_);
lean_dec_ref(v___y_182_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg(lean_object* v_inst_197_){
_start:
{
lean_object* v___f_198_; lean_object* v___f_199_; 
v___f_198_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_198_, 0, v_inst_197_);
v___f_199_ = lean_alloc_closure((void*)(l_Lake_instToTextArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_199_, 0, v___f_198_);
return v___f_199_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextArray(lean_object* v_00_u03b1_200_, lean_object* v_inst_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lake_instToTextArray___redArg(v_inst_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg___lam__0(lean_object* v_x_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg___lam__0___boxed(lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lake_instQueryText___redArg___lam__0(v_x_205_);
lean_dec(v_x_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg(){
_start:
{
lean_object* v___f_209_; 
v___f_209_ = ((lean_object*)(l_Lake_instQueryText___redArg___closed__0));
return v___f_209_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText___redArg___boxed(lean_object* v___dummy_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lake_instQueryText___redArg();
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText(lean_object* v_00_u03b1_212_){
_start:
{
lean_object* v___f_213_; 
v___f_213_ = ((lean_object*)(l_Lake_instQueryText___redArg___closed__0));
return v___f_213_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg(lean_object* v_inst_214_){
_start:
{
lean_inc_ref(v_inst_214_);
return v_inst_214_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg___boxed(lean_object* v_inst_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lake_instQueryTextOfToText___redArg(v_inst_215_);
lean_dec_ref(v_inst_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText(lean_object* v_00_u03b1_217_, lean_object* v_inst_218_){
_start:
{
lean_inc_ref(v_inst_218_);
return v_inst_218_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___boxed(lean_object* v_00_u03b1_219_, lean_object* v_inst_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lake_instQueryTextOfToText(v_00_u03b1_219_, v_inst_220_);
lean_dec_ref(v_inst_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextList___redArg(lean_object* v_inst_222_){
_start:
{
lean_object* v___f_223_; lean_object* v___f_224_; 
v___f_223_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_223_, 0, v_inst_222_);
v___f_224_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_224_, 0, v___f_223_);
return v___f_224_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextList(lean_object* v_00_u03b1_225_, lean_object* v_inst_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lake_instQueryTextList___redArg(v_inst_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray___redArg(lean_object* v_inst_228_){
_start:
{
lean_object* v___f_229_; lean_object* v___f_230_; 
v___f_229_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_229_, 0, v_inst_228_);
v___f_230_ = lean_alloc_closure((void*)(l_Lake_instToTextArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_230_, 0, v___f_229_);
return v___f_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray(lean_object* v_00_u03b1_231_, lean_object* v_inst_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lake_instQueryTextArray___redArg(v_inst_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextUnit___lam__0(lean_object* v_x_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg___lam__0(lean_object* v_x_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_box(0);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg___lam__0___boxed(lean_object* v_x_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lake_instQueryJson___redArg___lam__0(v_x_240_);
lean_dec(v_x_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg(){
_start:
{
lean_object* v___f_244_; 
v___f_244_ = ((lean_object*)(l_Lake_instQueryJson___redArg___closed__0));
return v___f_244_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson___redArg___boxed(lean_object* v___dummy_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lake_instQueryJson___redArg();
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson(lean_object* v_00_u03b1_247_){
_start:
{
lean_object* v___f_248_; 
v___f_248_ = ((lean_object*)(l_Lake_instQueryJson___redArg___closed__0));
return v___f_248_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg(lean_object* v_inst_249_){
_start:
{
lean_inc_ref(v_inst_249_);
return v_inst_249_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg___boxed(lean_object* v_inst_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lake_instQueryJsonOfToJson___redArg(v_inst_250_);
lean_dec_ref(v_inst_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson(lean_object* v_00_u03b1_252_, lean_object* v_inst_253_){
_start:
{
lean_inc_ref(v_inst_253_);
return v_inst_253_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___boxed(lean_object* v_00_u03b1_254_, lean_object* v_inst_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lake_instQueryJsonOfToJson(v_00_u03b1_254_, v_inst_255_);
lean_dec_ref(v_inst_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__0(lean_object* v_inst_257_, lean_object* v_x_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_apply_1(v_inst_257_, v_x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__1(lean_object* v___f_260_, lean_object* v_x_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; size_t v_sz_264_; size_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_262_ = lean_array_mk(v_x_261_);
v___x_263_ = ((lean_object*)(l_Lake_arrayToLines___redArg___closed__9));
v_sz_264_ = lean_array_size(v___x_262_);
v___x_265_ = ((size_t)0ULL);
v___x_266_ = l_unsafeCast___redArg(v___x_262_);
lean_dec_ref(v___x_262_);
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_263_, v___f_260_, v_sz_264_, v___x_265_, v___x_266_);
v___x_268_ = l_unsafeCast___redArg(v___x_267_);
lean_dec(v___x_267_);
v___x_269_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg(lean_object* v_inst_270_){
_start:
{
lean_object* v___f_271_; lean_object* v___f_272_; 
v___f_271_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_271_, 0, v_inst_270_);
v___f_272_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_272_, 0, v___f_271_);
return v___f_272_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList(lean_object* v_00_u03b1_273_, lean_object* v_inst_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = l_Lake_instQueryJsonList___redArg(v_inst_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg___lam__1(lean_object* v___f_276_, lean_object* v_x_277_){
_start:
{
lean_object* v___x_278_; size_t v_sz_279_; size_t v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_278_ = ((lean_object*)(l_Lake_arrayToLines___redArg___closed__9));
v_sz_279_ = lean_array_size(v_x_277_);
v___x_280_ = ((size_t)0ULL);
v___x_281_ = l_unsafeCast___redArg(v_x_277_);
v___x_282_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_278_, v___f_276_, v_sz_279_, v___x_280_, v___x_281_);
v___x_283_ = l_unsafeCast___redArg(v___x_282_);
lean_dec(v___x_282_);
v___x_284_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg___lam__1___boxed(lean_object* v___f_285_, lean_object* v_x_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lake_instQueryJsonArray___redArg___lam__1(v___f_285_, v_x_286_);
lean_dec_ref(v_x_286_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg(lean_object* v_inst_288_){
_start:
{
lean_object* v___f_289_; lean_object* v___f_290_; 
v___f_289_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_289_, 0, v_inst_288_);
v___f_290_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonArray___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_290_, 0, v___f_289_);
return v___f_290_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray(lean_object* v_00_u03b1_291_, lean_object* v_inst_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lake_instQueryJsonArray___redArg(v_inst_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonUnit___lam__0(lean_object* v_x_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_box(0);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson___redArg(lean_object* v_inst_298_, lean_object* v_inst_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v_inst_298_);
lean_ctor_set(v___x_300_, 1, v_inst_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson(lean_object* v_00_u03b1_301_, lean_object* v_inst_302_, lean_object* v_inst_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v_inst_302_);
lean_ctor_set(v___x_304_, 1, v_inst_303_);
return v___x_304_;
}
}
static lean_object* _init_l_Lake_nullFormat___redArg___closed__0(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_box(0);
v___x_306_ = l_Lean_Json_compress(v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg(uint8_t v_fmt_307_){
_start:
{
if (v_fmt_307_ == 0)
{
lean_object* v___x_308_; 
v___x_308_ = ((lean_object*)(l_Lake_listToLines___redArg___closed__0));
return v___x_308_;
}
else
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_once(&l_Lake_nullFormat___redArg___closed__0, &l_Lake_nullFormat___redArg___closed__0_once, _init_l_Lake_nullFormat___redArg___closed__0);
return v___x_309_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg___boxed(lean_object* v_fmt_310_){
_start:
{
uint8_t v_fmt_boxed_311_; lean_object* v_res_312_; 
v_fmt_boxed_311_ = lean_unbox(v_fmt_310_);
v_res_312_ = l_Lake_nullFormat___redArg(v_fmt_boxed_311_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat(lean_object* v_00_u03b1_313_, uint8_t v_fmt_314_, lean_object* v_x_315_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lake_nullFormat___redArg(v_fmt_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat___boxed(lean_object* v_00_u03b1_317_, lean_object* v_fmt_318_, lean_object* v_x_319_){
_start:
{
uint8_t v_fmt_boxed_320_; lean_object* v_res_321_; 
v_fmt_boxed_320_ = lean_unbox(v_fmt_318_);
v_res_321_ = l_Lake_nullFormat(v_00_u03b1_317_, v_fmt_boxed_320_, v_x_319_);
lean_dec(v_x_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg(lean_object* v_inst_322_, uint8_t v_fmt_323_, lean_object* v_a_324_){
_start:
{
if (v_fmt_323_ == 0)
{
lean_object* v_toQueryText_325_; lean_object* v___x_326_; 
v_toQueryText_325_ = lean_ctor_get(v_inst_322_, 0);
lean_inc_ref(v_toQueryText_325_);
lean_dec_ref(v_inst_322_);
v___x_326_ = lean_apply_1(v_toQueryText_325_, v_a_324_);
return v___x_326_;
}
else
{
lean_object* v_toQueryJson_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_toQueryJson_327_ = lean_ctor_get(v_inst_322_, 1);
lean_inc_ref(v_toQueryJson_327_);
lean_dec_ref(v_inst_322_);
v___x_328_ = lean_apply_1(v_toQueryJson_327_, v_a_324_);
v___x_329_ = l_Lean_Json_compress(v___x_328_);
return v___x_329_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg___boxed(lean_object* v_inst_330_, lean_object* v_fmt_331_, lean_object* v_a_332_){
_start:
{
uint8_t v_fmt_boxed_333_; lean_object* v_res_334_; 
v_fmt_boxed_333_ = lean_unbox(v_fmt_331_);
v_res_334_ = l_Lake_formatQuery___redArg(v_inst_330_, v_fmt_boxed_333_, v_a_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery(lean_object* v_00_u03b1_335_, lean_object* v_inst_336_, uint8_t v_fmt_337_, lean_object* v_a_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lake_formatQuery___redArg(v_inst_336_, v_fmt_337_, v_a_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___boxed(lean_object* v_00_u03b1_340_, lean_object* v_inst_341_, lean_object* v_fmt_342_, lean_object* v_a_343_){
_start:
{
uint8_t v_fmt_boxed_344_; lean_object* v_res_345_; 
v_fmt_boxed_344_ = lean_unbox(v_fmt_342_);
v_res_345_ = l_Lake_formatQuery(v_00_u03b1_340_, v_inst_341_, v_fmt_boxed_344_, v_a_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lake_ppImport(lean_object* v_imp_350_, uint8_t v_isModule_351_, lean_object* v_init_352_){
_start:
{
lean_object* v_s_354_; lean_object* v_s_360_; lean_object* v_s_367_; 
if (v_isModule_351_ == 0)
{
v_s_367_ = v_init_352_;
goto v___jp_366_;
}
else
{
uint8_t v_isExported_371_; 
v_isExported_371_ = lean_ctor_get_uint8(v_imp_350_, sizeof(void*)*1 + 1);
if (v_isExported_371_ == 0)
{
v_s_367_ = v_init_352_;
goto v___jp_366_;
}
else
{
lean_object* v___x_372_; lean_object* v_s_373_; 
v___x_372_ = ((lean_object*)(l_Lake_ppImport___closed__3));
v_s_373_ = lean_string_append(v_init_352_, v___x_372_);
v_s_367_ = v_s_373_;
goto v___jp_366_;
}
}
v___jp_353_:
{
lean_object* v_module_355_; uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v_s_358_; 
v_module_355_ = lean_ctor_get(v_imp_350_, 0);
lean_inc(v_module_355_);
lean_dec_ref(v_imp_350_);
v___x_356_ = 1;
v___x_357_ = l_Lean_Name_toString(v_module_355_, v___x_356_);
v_s_358_ = lean_string_append(v_s_354_, v___x_357_);
lean_dec_ref(v___x_357_);
return v_s_358_;
}
v___jp_359_:
{
uint8_t v_importAll_361_; lean_object* v___x_362_; lean_object* v_s_363_; 
v_importAll_361_ = lean_ctor_get_uint8(v_imp_350_, sizeof(void*)*1);
v___x_362_ = ((lean_object*)(l_Lake_ppImport___closed__0));
v_s_363_ = lean_string_append(v_s_360_, v___x_362_);
if (v_importAll_361_ == 0)
{
v_s_354_ = v_s_363_;
goto v___jp_353_;
}
else
{
lean_object* v___x_364_; lean_object* v_s_365_; 
v___x_364_ = ((lean_object*)(l_Lake_ppImport___closed__1));
v_s_365_ = lean_string_append(v_s_363_, v___x_364_);
v_s_354_ = v_s_365_;
goto v___jp_353_;
}
}
v___jp_366_:
{
uint8_t v_isMeta_368_; 
v_isMeta_368_ = lean_ctor_get_uint8(v_imp_350_, sizeof(void*)*1 + 2);
if (v_isMeta_368_ == 0)
{
v_s_360_ = v_s_367_;
goto v___jp_359_;
}
else
{
lean_object* v___x_369_; lean_object* v_s_370_; 
v___x_369_ = ((lean_object*)(l_Lake_ppImport___closed__2));
v_s_370_ = lean_string_append(v_s_367_, v___x_369_);
v_s_360_ = v_s_370_;
goto v___jp_359_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ppImport___boxed(lean_object* v_imp_374_, lean_object* v_isModule_375_, lean_object* v_init_376_){
_start:
{
uint8_t v_isModule_boxed_377_; lean_object* v_res_378_; 
v_isModule_boxed_377_ = lean_unbox(v_isModule_375_);
v_res_378_ = l_Lake_ppImport(v_imp_374_, v_isModule_boxed_377_, v_init_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(uint8_t v_isModule_379_, lean_object* v_as_380_, size_t v_i_381_, size_t v_stop_382_, lean_object* v_b_383_){
_start:
{
uint8_t v___x_384_; 
v___x_384_ = lean_usize_dec_eq(v_i_381_, v_stop_382_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; uint32_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; size_t v___x_389_; size_t v___x_390_; 
v___x_385_ = lean_array_uget_borrowed(v_as_380_, v_i_381_);
v___x_386_ = 10;
v___x_387_ = lean_string_push(v_b_383_, v___x_386_);
lean_inc(v___x_385_);
v___x_388_ = l_Lake_ppImport(v___x_385_, v_isModule_379_, v___x_387_);
v___x_389_ = ((size_t)1ULL);
v___x_390_ = lean_usize_add(v_i_381_, v___x_389_);
v_i_381_ = v___x_390_;
v_b_383_ = v___x_388_;
goto _start;
}
else
{
return v_b_383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0___boxed(lean_object* v_isModule_392_, lean_object* v_as_393_, lean_object* v_i_394_, lean_object* v_stop_395_, lean_object* v_b_396_){
_start:
{
uint8_t v_isModule_boxed_397_; size_t v_i_boxed_398_; size_t v_stop_boxed_399_; lean_object* v_res_400_; 
v_isModule_boxed_397_ = lean_unbox(v_isModule_392_);
v_i_boxed_398_ = lean_unbox_usize(v_i_394_);
lean_dec(v_i_394_);
v_stop_boxed_399_ = lean_unbox_usize(v_stop_395_);
lean_dec(v_stop_395_);
v_res_400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(v_isModule_boxed_397_, v_as_393_, v_i_boxed_398_, v_stop_boxed_399_, v_b_396_);
lean_dec_ref(v_as_393_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader(lean_object* v_header_403_){
_start:
{
lean_object* v_imports_404_; uint8_t v_isModule_405_; lean_object* v___y_407_; 
v_imports_404_ = lean_ctor_get(v_header_403_, 0);
v_isModule_405_ = lean_ctor_get_uint8(v_header_403_, sizeof(void*)*1);
if (v_isModule_405_ == 0)
{
lean_object* v___x_418_; 
v___x_418_ = ((lean_object*)(l_Lake_ppModuleHeader___closed__0));
v___y_407_ = v___x_418_;
goto v___jp_406_;
}
else
{
lean_object* v___x_419_; 
v___x_419_ = ((lean_object*)(l_Lake_ppModuleHeader___closed__1));
v___y_407_ = v___x_419_;
goto v___jp_406_;
}
v___jp_406_:
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_408_ = lean_unsigned_to_nat(0u);
v___x_409_ = lean_array_get_size(v_imports_404_);
v___x_410_ = lean_nat_dec_lt(v___x_408_, v___x_409_);
if (v___x_410_ == 0)
{
lean_inc_ref(v___y_407_);
return v___y_407_;
}
else
{
uint8_t v___x_411_; 
v___x_411_ = lean_nat_dec_le(v___x_409_, v___x_409_);
if (v___x_411_ == 0)
{
if (v___x_410_ == 0)
{
lean_inc_ref(v___y_407_);
return v___y_407_;
}
else
{
size_t v___x_412_; size_t v___x_413_; lean_object* v___x_414_; 
v___x_412_ = ((size_t)0ULL);
v___x_413_ = lean_usize_of_nat(v___x_409_);
lean_inc_ref(v___y_407_);
v___x_414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(v_isModule_405_, v_imports_404_, v___x_412_, v___x_413_, v___y_407_);
return v___x_414_;
}
}
else
{
size_t v___x_415_; size_t v___x_416_; lean_object* v___x_417_; 
v___x_415_ = ((size_t)0ULL);
v___x_416_ = lean_usize_of_nat(v___x_409_);
lean_inc_ref(v___y_407_);
v___x_417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(v_isModule_405_, v_imports_404_, v___x_415_, v___x_416_, v___y_407_);
return v___x_417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader___boxed(lean_object* v_header_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lake_ppModuleHeader(v_header_420_);
lean_dec_ref(v_header_420_);
return v_res_421_;
}
}
lean_object* runtime_initialize_Lean_Setup(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_OutFormat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Setup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_OutFormat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Setup(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_OutFormat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Setup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_OutFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_OutFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_OutFormat(builtin);
}
#ifdef __cplusplus
}
#endif

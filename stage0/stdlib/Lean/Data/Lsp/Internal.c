// Lean compiler output
// Module: Lean.Data.Lsp.Internal
// Imports: public import Lean.Data.Lsp.Basic public import Lean.Data.JsonRpc public import Lean.Data.DeclarationRange public import Init.Data.Array.GetLit import Init.Omega
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
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_String_compare___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_List_toJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
static const lean_string_object l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Lsp_instInhabitedImportInfo_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Lsp_instInhabitedImportInfo_default___closed__1 = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedImportInfo_default = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedImportInfo = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonImportInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonImportInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonImportInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonImportInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonImportInfo = (const lean_object*)&l_Lean_Lsp_instToJsonImportInfo___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected array, got other JSON type"};
static const lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonImportInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonImportInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonImportInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonImportInfo = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRefIdent_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRefIdent_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instBEqRefIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instBEqRefIdent_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instBEqRefIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instBEqRefIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instBEqRefIdent = (const lean_object*)&l_Lean_Lsp_instBEqRefIdent___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRefIdent_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRefIdent_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableRefIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableRefIdent_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableRefIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableRefIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableRefIdent = (const lean_object*)&l_Lean_Lsp_instHashableRefIdent___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value),((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instInhabitedRefIdent_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedRefIdent_default = (const lean_object*)&l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedRefIdent = (const lean_object*)&l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdRefIdent_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdRefIdent_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instOrdRefIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instOrdRefIdent_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instOrdRefIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instOrdRefIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instOrdRefIdent = (const lean_object*)&l_Lean_Lsp_instOrdRefIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9_value;
static const lean_array_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(14, 215, 4, 153, 96, 18, 167, 14)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13_value;
static const lean_array_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJsonRepr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJsonRepr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_RefIdent_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instFromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instFromJson = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJson___closed__0_value;
static const lean_closure_object l_Lean_Lsp_RefIdent_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instToJson___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instToJson = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeclInfo___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDeclInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDeclInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDeclInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDeclInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDeclInfo = (const lean_object*)&l_Lean_Lsp_instToJsonDeclInfo___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Expected list of length 8, not length "};
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Expected list"};
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDeclInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDeclInfo___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDeclInfo = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instEmptyCollectionDecls___aux__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_instEmptyCollectionDecls;
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__0 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__1 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__2 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__3 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__4 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__4_value;
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__5 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__5_value;
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__6 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__0_value),((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__1_value)}};
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__7 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__7_value),((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__2_value),((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__3_value),((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__4_value),((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__5_value)}};
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__8 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__8_value),((lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__6_value)}};
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo = (const lean_object*)&l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDecls___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDecls___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDecls___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDecls___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDecls___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDecls___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDecls___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDecls___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonDecls___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instToJsonDecls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDecls___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDecls___closed__1_value),((lean_object*)&l_Lean_Lsp_instToJsonDecls___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonDecls___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonDecls___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDecls = (const lean_object*)&l_Lean_Lsp_instToJsonDecls___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDecls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonDecls___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDecls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___lam__1___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDecls___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDecls___lam__1___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___lam__1___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDecls___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDecls___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__4_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__5_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDecls___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__5_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__6_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__1_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__2_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__7_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDecls___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__7_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__8_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__9_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDecls___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDecls___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__9_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonDecls___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__10_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDecls = (const lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value)}};
static const lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0 = (const lean_object*)&l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation_default = (const lean_object*)&l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation = (const lean_object*)&l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usages"};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__2, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_List_toJson, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__3_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__4_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__3, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__4_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__2_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__5 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonRefInfo = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__5_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Expected list of length 4 or 5, not "};
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRefInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Option_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__2_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__2_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__4_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRefInfo___lam__1, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__3_value),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__4_value),((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__9_value),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonRefInfo = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instEmptyCollectionModuleRefs___aux__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_instEmptyCollectionModuleRefs;
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonModuleRefs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonModuleRefs___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonModuleRefs___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonModuleRefs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonModuleRefs___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__0_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonModuleRefs___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instToJsonModuleRefs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonModuleRefs___lam__2, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonModuleRefs___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instToJsonModuleRefs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonModuleRefs___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__2_value),((lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instToJsonModuleRefs___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonModuleRefs = (const lean_object*)&l_Lean_Lsp_instToJsonModuleRefs___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonModuleRefs___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonModuleRefs___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonModuleRefs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonModuleRefs___lam__1, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonModuleRefs___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonModuleRefs___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonModuleRefs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonModuleRefs___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDecls___closed__9_value),((lean_object*)&l_Lean_Lsp_instFromJsonModuleRefs___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonModuleRefs___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonModuleRefs___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonModuleRefs = (const lean_object*)&l_Lean_Lsp_instFromJsonModuleRefs___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanILeanHeaderSetupInfoParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 71, 232, 96, 38, 120, 115, 9)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 50, 73, 160, 48, 142, 108)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "isSetupFailure"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(120, 71, 255, 216, 122, 125, 37, 209)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "directImports"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18_value),LEAN_SCALAR_PTR_LITERAL(113, 107, 65, 139, 239, 150, 173, 242)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanIleanInfoParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 203, 234, 116, 96, 81, 39, 191)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "references"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 234, 189, 66, 81, 216, 208, 197)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decls"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11_value),LEAN_SCALAR_PTR_LITERAL(44, 160, 58, 0, 137, 124, 237, 95)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanIleanInfoParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "importClosure"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanImportClosureParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(168, 46, 39, 145, 64, 232, 10, 239)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 59, 80, 112, 20, 250, 24, 1)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "staleDependency"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanStaleDependencyParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 219, 232, 96, 172, 178, 164, 179)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 114, 98, 202, 15, 244, 42, 22)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanStaleDependencyParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0(lean_object*);
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "renamed"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "allExcept"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(29, 171, 189, 33, 127, 223, 44, 88)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "exceptions"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(192, 220, 58, 79, 173, 93, 125, 104)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7_value;
static const lean_array_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5_value),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "from"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(51, 132, 19, 107, 10, 182, 190, 14)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "to"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(203, 162, 13, 215, 195, 228, 231, 139)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13_value;
static const lean_array_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11_value),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonOpenNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonOpenNamespace_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonOpenNamespace_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonOpenNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonOpenNamespace_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonOpenNamespace___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonOpenNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonOpenNamespace = (const lean_object*)&l_Lean_Lsp_instToJsonOpenNamespace___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "identifier"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanModuleQuery"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 124, 7, 179, 233, 81, 44, 231)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 30, 163, 185, 99, 139, 146, 235)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "openNamespaces"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(84, 10, 255, 246, 172, 0, 163, 196)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanModuleQuery_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery = (const lean_object*)&l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0_value;
static const lean_string_object l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "a request id needs to be a number or a string"};
static const lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0 = (const lean_object*)&l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0_value)}};
static const lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1 = (const lean_object*)&l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "sourceRequestID"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanQueryModuleParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 1, 217, 58, 51, 228, 82, 97)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 152, 164, 59, 36, 1, 26, 169)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "queries"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(67, 69, 35, 158, 6, 191, 84, 222)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanQueryModuleParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LeanIdentifier"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(186, 34, 237, 78, 120, 102, 249, 11)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(122, 197, 108, 116, 168, 105, 88, 191)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isExactMatch"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(184, 254, 2, 171, 133, 246, 126, 123)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIdentifier_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanIdentifier_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanIdentifier = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "queryResults"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanQueryModuleResponse"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(43, 4, 13, 130, 17, 133, 248, 128)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(208, 102, 170, 178, 152, 193, 48, 141)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0_value;
static const lean_array_object l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default = (const lean_object*)&l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedLeanQueryModuleResponse = (const lean_object*)&l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LeanDeclIdent"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 27, 219, 221, 117, 72, 148, 223)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanDeclIdent_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent = (const lean_object*)&l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "originSelectionRange"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LeanLocationLink"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 146, 238, 203, 212, 254, 171, 194)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "originSelectionRange\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(113, 74, 194, 55, 146, 231, 63, 35)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "targetUri"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(175, 177, 170, 233, 220, 50, 208, 212)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "targetRange"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15_value),LEAN_SCALAR_PTR_LITERAL(45, 64, 248, 134, 128, 146, 245, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "targetSelectionRange"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20_value),LEAN_SCALAR_PTR_LITERAL(152, 179, 191, 7, 212, 29, 154, 211)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ident\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26_value),LEAN_SCALAR_PTR_LITERAL(48, 54, 166, 138, 27, 67, 37, 23)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isDefault"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31_value),LEAN_SCALAR_PTR_LITERAL(109, 30, 229, 216, 225, 52, 237, 248)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanLocationLink_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanLocationLink_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanLocationLink = (const lean_object*)&l_Lean_Lsp_instToJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0(lean_object* v_info_7_){
_start:
{
lean_object* v_module_8_; uint8_t v_isPrivate_9_; uint8_t v_isAll_10_; uint8_t v_isMeta_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_module_8_ = lean_ctor_get(v_info_7_, 0);
v_isPrivate_9_ = lean_ctor_get_uint8(v_info_7_, sizeof(void*)*1);
v_isAll_10_ = lean_ctor_get_uint8(v_info_7_, sizeof(void*)*1 + 1);
v_isMeta_11_ = lean_ctor_get_uint8(v_info_7_, sizeof(void*)*1 + 2);
lean_inc_ref(v_module_8_);
v___x_12_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_12_, 0, v_module_8_);
v___x_13_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_13_, 0, v_isPrivate_9_);
v___x_14_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_14_, 0, v_isAll_10_);
v___x_15_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_15_, 0, v_isMeta_11_);
v___x_16_ = lean_unsigned_to_nat(4u);
v___x_17_ = lean_mk_empty_array_with_capacity(v___x_16_);
v___x_18_ = lean_array_push(v___x_17_, v___x_12_);
v___x_19_ = lean_array_push(v___x_18_, v___x_13_);
v___x_20_ = lean_array_push(v___x_19_, v___x_14_);
v___x_21_ = lean_array_push(v___x_20_, v___x_15_);
v___x_22_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0___boxed(lean_object* v_info_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Lsp_instToJsonImportInfo___lam__0(v_info_23_);
lean_dec_ref(v_info_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0(lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_30_) == 4)
{
lean_object* v_elems_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_elems_33_ = lean_ctor_get(v_x_30_, 0);
v___x_34_ = lean_array_get_size(v_elems_33_);
v___x_35_ = lean_unsigned_to_nat(4u);
v___x_36_ = lean_nat_dec_eq(v___x_34_, v___x_35_);
if (v___x_36_ == 0)
{
goto v___jp_31_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_array_fget_borrowed(v_elems_33_, v___x_37_);
lean_inc(v___x_38_);
v___x_39_ = l_Lean_Json_getStr_x3f(v___x_38_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_47_; 
v_a_40_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_47_ == 0)
{
v___x_42_ = v___x_39_;
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v___x_39_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_a_40_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
else
{
lean_object* v_a_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_a_48_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_a_48_);
lean_dec_ref_known(v___x_39_, 1);
v___x_49_ = lean_unsigned_to_nat(1u);
v___x_50_ = lean_array_fget_borrowed(v_elems_33_, v___x_49_);
v___x_51_ = l_Lean_Json_getBool_x3f(v___x_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
lean_dec(v_a_48_);
v_a_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
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
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_52_);
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
lean_object* v_a_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_a_60_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_60_);
lean_dec_ref_known(v___x_51_, 1);
v___x_61_ = lean_unsigned_to_nat(2u);
v___x_62_ = lean_array_fget_borrowed(v_elems_33_, v___x_61_);
v___x_63_ = l_Lean_Json_getBool_x3f(v___x_62_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_71_; 
lean_dec(v_a_60_);
lean_dec(v_a_48_);
v_a_64_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_71_ == 0)
{
v___x_66_ = v___x_63_;
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_a_64_);
lean_dec(v___x_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_69_; 
if (v_isShared_67_ == 0)
{
v___x_69_ = v___x_66_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_64_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
else
{
lean_object* v_a_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_a_72_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_a_72_);
lean_dec_ref_known(v___x_63_, 1);
v___x_73_ = lean_unsigned_to_nat(3u);
v___x_74_ = lean_array_fget_borrowed(v_elems_33_, v___x_73_);
v___x_75_ = l_Lean_Json_getBool_x3f(v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
lean_dec(v_a_72_);
lean_dec(v_a_60_);
lean_dec(v_a_48_);
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_95_; 
v_a_84_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_95_ == 0)
{
v___x_86_ = v___x_75_;
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_75_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; uint8_t v___x_89_; uint8_t v___x_90_; uint8_t v___x_91_; lean_object* v___x_93_; 
v___x_88_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_88_, 0, v_a_48_);
v___x_89_ = lean_unbox(v_a_60_);
lean_dec(v_a_60_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1, v___x_89_);
v___x_90_ = lean_unbox(v_a_72_);
lean_dec(v_a_72_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1 + 1, v___x_90_);
v___x_91_ = lean_unbox(v_a_84_);
lean_dec(v_a_84_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1 + 2, v___x_91_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_93_ = v___x_86_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_88_);
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
}
else
{
goto v___jp_31_;
}
v___jp_31_:
{
lean_object* v___x_32_; 
v___x_32_ = ((lean_object*)(l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1));
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___boxed(lean_object* v_x_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_Lsp_instFromJsonImportInfo___lam__0(v_x_96_);
lean_dec(v_x_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx(lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_unsigned_to_nat(0u);
return v___x_101_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = lean_unsigned_to_nat(1u);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx___boxed(lean_object* v_x_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Lsp_RefIdent_ctorIdx(v_x_103_);
lean_dec_ref(v_x_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___redArg(lean_object* v_t_105_, lean_object* v_k_106_){
_start:
{
lean_object* v_moduleName_107_; lean_object* v_identName_108_; lean_object* v___x_109_; 
v_moduleName_107_ = lean_ctor_get(v_t_105_, 0);
lean_inc_ref(v_moduleName_107_);
v_identName_108_ = lean_ctor_get(v_t_105_, 1);
lean_inc_ref(v_identName_108_);
lean_dec_ref(v_t_105_);
v___x_109_ = lean_apply_2(v_k_106_, v_moduleName_107_, v_identName_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim(lean_object* v_motive_110_, lean_object* v_ctorIdx_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_k_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_112_, v_k_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___boxed(lean_object* v_motive_116_, lean_object* v_ctorIdx_117_, lean_object* v_t_118_, lean_object* v_h_119_, lean_object* v_k_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_Lsp_RefIdent_ctorElim(v_motive_116_, v_ctorIdx_117_, v_t_118_, v_h_119_, v_k_120_);
lean_dec(v_ctorIdx_117_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim___redArg(lean_object* v_t_122_, lean_object* v_const_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_122_, v_const_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim(lean_object* v_motive_125_, lean_object* v_t_126_, lean_object* v_h_127_, lean_object* v_const_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_126_, v_const_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim___redArg(lean_object* v_t_130_, lean_object* v_fvar_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_130_, v_fvar_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_fvar_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_134_, v_fvar_136_);
return v___x_137_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRefIdent_beq(lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_a_141_; lean_object* v_a_142_; lean_object* v_b_143_; lean_object* v_b_144_; 
if (lean_obj_tag(v_x_138_) == 0)
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_moduleName_147_; lean_object* v_identName_148_; lean_object* v_moduleName_149_; lean_object* v_identName_150_; 
v_moduleName_147_ = lean_ctor_get(v_x_138_, 0);
v_identName_148_ = lean_ctor_get(v_x_138_, 1);
v_moduleName_149_ = lean_ctor_get(v_x_139_, 0);
v_identName_150_ = lean_ctor_get(v_x_139_, 1);
v_a_141_ = v_moduleName_147_;
v_a_142_ = v_identName_148_;
v_b_143_ = v_moduleName_149_;
v_b_144_ = v_identName_150_;
goto v___jp_140_;
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 0;
return v___x_151_;
}
}
else
{
if (lean_obj_tag(v_x_139_) == 1)
{
lean_object* v_moduleName_152_; lean_object* v_id_153_; lean_object* v_moduleName_154_; lean_object* v_id_155_; 
v_moduleName_152_ = lean_ctor_get(v_x_138_, 0);
v_id_153_ = lean_ctor_get(v_x_138_, 1);
v_moduleName_154_ = lean_ctor_get(v_x_139_, 0);
v_id_155_ = lean_ctor_get(v_x_139_, 1);
v_a_141_ = v_moduleName_152_;
v_a_142_ = v_id_153_;
v_b_143_ = v_moduleName_154_;
v_b_144_ = v_id_155_;
goto v___jp_140_;
}
else
{
uint8_t v___x_156_; 
v___x_156_ = 0;
return v___x_156_;
}
}
v___jp_140_:
{
uint8_t v___x_145_; 
v___x_145_ = lean_string_dec_eq(v_a_141_, v_b_143_);
if (v___x_145_ == 0)
{
return v___x_145_;
}
else
{
uint8_t v___x_146_; 
v___x_146_ = lean_string_dec_eq(v_a_142_, v_b_144_);
return v___x_146_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRefIdent_beq___boxed(lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = l_Lean_Lsp_instBEqRefIdent_beq(v_x_157_, v_x_158_);
lean_dec_ref(v_x_158_);
lean_dec_ref(v_x_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRefIdent_hash(lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v_moduleName_164_; lean_object* v_identName_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; uint64_t v___x_170_; 
v_moduleName_164_ = lean_ctor_get(v_x_163_, 0);
v_identName_165_ = lean_ctor_get(v_x_163_, 1);
v___x_166_ = 0ULL;
v___x_167_ = lean_string_hash(v_moduleName_164_);
v___x_168_ = lean_uint64_mix_hash(v___x_166_, v___x_167_);
v___x_169_ = lean_string_hash(v_identName_165_);
v___x_170_ = lean_uint64_mix_hash(v___x_168_, v___x_169_);
return v___x_170_;
}
else
{
lean_object* v_moduleName_171_; lean_object* v_id_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; uint64_t v___x_176_; uint64_t v___x_177_; 
v_moduleName_171_ = lean_ctor_get(v_x_163_, 0);
v_id_172_ = lean_ctor_get(v_x_163_, 1);
v___x_173_ = 1ULL;
v___x_174_ = lean_string_hash(v_moduleName_171_);
v___x_175_ = lean_uint64_mix_hash(v___x_173_, v___x_174_);
v___x_176_ = lean_string_hash(v_id_172_);
v___x_177_ = lean_uint64_mix_hash(v___x_175_, v___x_176_);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRefIdent_hash___boxed(lean_object* v_x_178_){
_start:
{
uint64_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l_Lean_Lsp_instHashableRefIdent_hash(v_x_178_);
lean_dec_ref(v_x_178_);
v_r_180_ = lean_box_uint64(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdRefIdent_ord(lean_object* v_x_187_, lean_object* v_x_188_){
_start:
{
lean_object* v_a_190_; lean_object* v_a_191_; lean_object* v_b_192_; lean_object* v_b_193_; 
if (lean_obj_tag(v_x_187_) == 0)
{
if (lean_obj_tag(v_x_188_) == 0)
{
lean_object* v_moduleName_196_; lean_object* v_identName_197_; lean_object* v_moduleName_198_; lean_object* v_identName_199_; 
v_moduleName_196_ = lean_ctor_get(v_x_187_, 0);
v_identName_197_ = lean_ctor_get(v_x_187_, 1);
v_moduleName_198_ = lean_ctor_get(v_x_188_, 0);
v_identName_199_ = lean_ctor_get(v_x_188_, 1);
v_a_190_ = v_moduleName_196_;
v_a_191_ = v_identName_197_;
v_b_192_ = v_moduleName_198_;
v_b_193_ = v_identName_199_;
goto v___jp_189_;
}
else
{
uint8_t v___x_200_; 
v___x_200_ = 0;
return v___x_200_;
}
}
else
{
if (lean_obj_tag(v_x_188_) == 0)
{
uint8_t v___x_201_; 
v___x_201_ = 2;
return v___x_201_;
}
else
{
lean_object* v_moduleName_202_; lean_object* v_id_203_; lean_object* v_moduleName_204_; lean_object* v_id_205_; 
v_moduleName_202_ = lean_ctor_get(v_x_187_, 0);
v_id_203_ = lean_ctor_get(v_x_187_, 1);
v_moduleName_204_ = lean_ctor_get(v_x_188_, 0);
v_id_205_ = lean_ctor_get(v_x_188_, 1);
v_a_190_ = v_moduleName_202_;
v_a_191_ = v_id_203_;
v_b_192_ = v_moduleName_204_;
v_b_193_ = v_id_205_;
goto v___jp_189_;
}
}
v___jp_189_:
{
uint8_t v___x_194_; 
v___x_194_ = lean_string_compare(v_a_190_, v_b_192_);
if (v___x_194_ == 1)
{
uint8_t v___x_195_; 
v___x_195_ = lean_string_compare(v_a_191_, v_b_193_);
if (v___x_195_ == 1)
{
return v___x_195_;
}
else
{
return v___x_195_;
}
}
else
{
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdRefIdent_ord___boxed(lean_object* v_x_206_, lean_object* v_x_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Lean_Lsp_instOrdRefIdent_ord(v_x_206_, v_x_207_);
lean_dec_ref(v_x_207_);
lean_dec_ref(v_x_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx(lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_213_; 
v___x_213_ = lean_unsigned_to_nat(0u);
return v___x_213_;
}
else
{
lean_object* v___x_214_; 
v___x_214_ = lean_unsigned_to_nat(1u);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx___boxed(lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx(v_x_215_);
lean_dec_ref(v_x_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(lean_object* v_t_217_, lean_object* v_k_218_){
_start:
{
lean_object* v_m_219_; lean_object* v_n_220_; lean_object* v___x_221_; 
v_m_219_ = lean_ctor_get(v_t_217_, 0);
lean_inc_ref(v_m_219_);
v_n_220_ = lean_ctor_get(v_t_217_, 1);
lean_inc_ref(v_n_220_);
lean_dec_ref(v_t_217_);
v___x_221_ = lean_apply_2(v_k_218_, v_m_219_, v_n_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim(lean_object* v_motive_222_, lean_object* v_ctorIdx_223_, lean_object* v_t_224_, lean_object* v_h_225_, lean_object* v_k_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_224_, v_k_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___boxed(lean_object* v_motive_228_, lean_object* v_ctorIdx_229_, lean_object* v_t_230_, lean_object* v_h_231_, lean_object* v_k_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim(v_motive_228_, v_ctorIdx_229_, v_t_230_, v_h_231_, v_k_232_);
lean_dec(v_ctorIdx_229_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim___redArg(lean_object* v_t_234_, lean_object* v_c_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_234_, v_c_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_c_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_238_, v_c_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim___redArg(lean_object* v_t_242_, lean_object* v_f_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_242_, v_f_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim(lean_object* v_motive_245_, lean_object* v_t_246_, lean_object* v_h_247_, lean_object* v_f_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_246_, v_f_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson(lean_object* v_json_283_){
_start:
{
lean_object* v___x_284_; 
lean_inc(v_json_283_);
v___x_284_ = l_Lean_Json_getTag_x3f(v_json_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v___x_285_; 
lean_dec(v_json_283_);
v___x_285_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1));
return v___x_285_;
}
else
{
lean_object* v_val_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_val_286_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v___x_284_, 1);
v___x_287_ = lean_box(0);
v___x_288_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2));
v___x_289_ = lean_string_dec_eq(v_val_286_, v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3));
v___x_291_ = lean_string_dec_eq(v_val_286_, v___x_290_);
lean_dec(v_val_286_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; 
lean_dec(v_json_283_);
v___x_292_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5));
return v___x_292_;
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_unsigned_to_nat(2u);
v___x_294_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11));
v___x_295_ = l_Lean_Json_parseCtorFields(v_json_283_, v___x_290_, v___x_293_, v___x_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_a_304_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_295_, 1);
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_array_get_borrowed(v___x_287_, v_a_304_, v___x_305_);
lean_inc(v___x_306_);
v___x_307_ = l_Lean_Json_getStr_x3f(v___x_306_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v_a_304_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_a_316_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_307_, 1);
v___x_317_ = lean_unsigned_to_nat(1u);
v___x_318_ = lean_array_get(v___x_287_, v_a_304_, v___x_317_);
lean_dec(v_a_304_);
v___x_319_ = l_Lean_Json_getStr_x3f(v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_316_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
v_a_328_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_336_ == 0)
{
v___x_330_ = v___x_319_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_319_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v_a_316_);
lean_ctor_set(v___x_332_, 1, v_a_328_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_332_);
v___x_334_ = v___x_330_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_332_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec(v_val_286_);
v___x_337_ = lean_unsigned_to_nat(2u);
v___x_338_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15));
v___x_339_ = l_Lean_Json_parseCtorFields(v_json_283_, v___x_288_, v___x_337_, v___x_338_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_a_348_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_348_);
lean_dec_ref_known(v___x_339_, 1);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_array_get_borrowed(v___x_287_, v_a_348_, v___x_349_);
lean_inc(v___x_350_);
v___x_351_ = l_Lean_Json_getStr_x3f(v___x_350_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec(v_a_348_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_360_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_351_, 1);
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = lean_array_get(v___x_287_, v_a_348_, v___x_361_);
lean_dec(v_a_348_);
v___x_363_ = l_Lean_Json_getStr_x3f(v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_a_360_);
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_363_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_380_; 
v_a_372_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_380_ == 0)
{
v___x_374_ = v___x_363_;
v_isShared_375_ = v_isSharedCheck_380_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_363_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_380_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_376_, 0, v_a_360_);
lean_ctor_set(v___x_376_, 1, v_a_372_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_376_);
v___x_378_ = v___x_374_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson(lean_object* v_x_383_){
_start:
{
if (lean_obj_tag(v_x_383_) == 0)
{
lean_object* v_m_384_; lean_object* v_n_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_405_; 
v_m_384_ = lean_ctor_get(v_x_383_, 0);
v_n_385_ = lean_ctor_get(v_x_383_, 1);
v_isSharedCheck_405_ = !lean_is_exclusive(v_x_383_);
if (v_isSharedCheck_405_ == 0)
{
v___x_387_ = v_x_383_;
v_isShared_388_ = v_isSharedCheck_405_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_n_385_);
lean_inc(v_m_384_);
lean_dec(v_x_383_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_405_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_389_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3));
v___x_390_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6));
v___x_391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_391_, 0, v_m_384_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_391_);
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_391_);
v___x_393_ = v_reuseFailAlloc_404_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_394_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8));
v___x_395_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_395_, 0, v_n_385_);
v___x_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = lean_box(0);
v___x_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_393_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = l_Lean_Json_mkObj(v___x_399_);
lean_dec_ref_known(v___x_399_, 2);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_389_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___x_397_);
v___x_403_ = l_Lean_Json_mkObj(v___x_402_);
lean_dec_ref_known(v___x_402_, 2);
return v___x_403_;
}
}
}
else
{
lean_object* v_m_406_; lean_object* v_i_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_427_; 
v_m_406_ = lean_ctor_get(v_x_383_, 0);
v_i_407_ = lean_ctor_get(v_x_383_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_383_);
if (v_isSharedCheck_427_ == 0)
{
v___x_409_ = v_x_383_;
v_isShared_410_ = v_isSharedCheck_427_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_i_407_);
lean_inc(v_m_406_);
lean_dec(v_x_383_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_427_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_411_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2));
v___x_412_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6));
v___x_413_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_413_, 0, v_m_406_);
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 0);
lean_ctor_set(v___x_409_, 1, v___x_413_);
lean_ctor_set(v___x_409_, 0, v___x_412_);
v___x_415_ = v___x_409_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v___x_413_);
v___x_415_ = v_reuseFailAlloc_426_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_416_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12));
v___x_417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_417_, 0, v_i_407_);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_box(0);
v___x_420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
v___x_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_415_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = l_Lean_Json_mkObj(v___x_421_);
lean_dec_ref_known(v___x_421_, 2);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_411_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_419_);
v___x_425_ = l_Lean_Json_mkObj(v___x_424_);
lean_dec_ref_known(v___x_424_, 2);
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJsonRepr(lean_object* v_x_430_){
_start:
{
if (lean_obj_tag(v_x_430_) == 0)
{
lean_object* v_moduleName_431_; lean_object* v_identName_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_moduleName_431_ = lean_ctor_get(v_x_430_, 0);
v_identName_432_ = lean_ctor_get(v_x_430_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_430_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v_x_430_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_identName_432_);
lean_inc(v_moduleName_431_);
lean_dec(v_x_430_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_moduleName_431_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_identName_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
else
{
lean_object* v_moduleName_440_; lean_object* v_id_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_moduleName_440_ = lean_ctor_get(v_x_430_, 0);
v_id_441_ = lean_ctor_get(v_x_430_, 1);
v_isSharedCheck_448_ = !lean_is_exclusive(v_x_430_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v_x_430_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_id_441_);
lean_inc(v_moduleName_440_);
lean_dec(v_x_430_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_moduleName_440_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v_id_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJsonRepr(lean_object* v_x_449_){
_start:
{
if (lean_obj_tag(v_x_449_) == 0)
{
lean_object* v_m_450_; lean_object* v_n_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_m_450_ = lean_ctor_get(v_x_449_, 0);
v_n_451_ = lean_ctor_get(v_x_449_, 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_449_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v_x_449_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_n_451_);
lean_inc(v_m_450_);
lean_dec(v_x_449_);
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
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_m_450_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_n_451_);
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
lean_object* v_m_459_; lean_object* v_i_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_m_459_ = lean_ctor_get(v_x_449_, 0);
v_i_460_ = lean_ctor_get(v_x_449_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_449_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v_x_449_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_i_460_);
lean_inc(v_m_459_);
lean_dec(v_x_449_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_m_459_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_i_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJson_x3f(lean_object* v_s_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson(v_s_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_486_; 
v_a_478_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_486_ == 0)
{
v___x_480_ = v___x_469_;
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_469_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_482_ = l_Lean_Lsp_RefIdent_fromJsonRepr(v_a_478_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_482_);
v___x_484_ = v___x_480_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJson(lean_object* v_id_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = l_Lean_Lsp_RefIdent_toJsonRepr(v_id_487_);
v___x_489_ = l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges(lean_object* v_r_494_){
_start:
{
lean_object* v_range_495_; lean_object* v_pos_496_; lean_object* v_endPos_497_; lean_object* v_selectionRange_498_; lean_object* v_pos_499_; lean_object* v_endPos_500_; lean_object* v_charUtf16_501_; lean_object* v_endCharUtf16_502_; lean_object* v_line_503_; lean_object* v_line_504_; lean_object* v_charUtf16_505_; lean_object* v_endCharUtf16_506_; lean_object* v_line_507_; lean_object* v_line_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_range_495_ = lean_ctor_get(v_r_494_, 0);
v_pos_496_ = lean_ctor_get(v_range_495_, 0);
v_endPos_497_ = lean_ctor_get(v_range_495_, 2);
v_selectionRange_498_ = lean_ctor_get(v_r_494_, 1);
v_pos_499_ = lean_ctor_get(v_selectionRange_498_, 0);
v_endPos_500_ = lean_ctor_get(v_selectionRange_498_, 2);
v_charUtf16_501_ = lean_ctor_get(v_range_495_, 1);
v_endCharUtf16_502_ = lean_ctor_get(v_range_495_, 3);
v_line_503_ = lean_ctor_get(v_pos_496_, 0);
v_line_504_ = lean_ctor_get(v_endPos_497_, 0);
v_charUtf16_505_ = lean_ctor_get(v_selectionRange_498_, 1);
v_endCharUtf16_506_ = lean_ctor_get(v_selectionRange_498_, 3);
v_line_507_ = lean_ctor_get(v_pos_499_, 0);
v_line_508_ = lean_ctor_get(v_endPos_500_, 0);
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = lean_nat_sub(v_line_503_, v___x_509_);
v___x_511_ = lean_nat_sub(v_line_504_, v___x_509_);
v___x_512_ = lean_nat_sub(v_line_507_, v___x_509_);
v___x_513_ = lean_nat_sub(v_line_508_, v___x_509_);
lean_inc(v_endCharUtf16_506_);
lean_inc(v_charUtf16_505_);
lean_inc(v_endCharUtf16_502_);
lean_inc(v_charUtf16_501_);
v___x_514_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_514_, 0, v___x_510_);
lean_ctor_set(v___x_514_, 1, v_charUtf16_501_);
lean_ctor_set(v___x_514_, 2, v___x_511_);
lean_ctor_set(v___x_514_, 3, v_endCharUtf16_502_);
lean_ctor_set(v___x_514_, 4, v___x_512_);
lean_ctor_set(v___x_514_, 5, v_charUtf16_505_);
lean_ctor_set(v___x_514_, 6, v___x_513_);
lean_ctor_set(v___x_514_, 7, v_endCharUtf16_506_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges___boxed(lean_object* v_r_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_Lsp_DeclInfo_ofDeclarationRanges(v_r_515_);
lean_dec_ref(v_r_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range(lean_object* v_i_517_){
_start:
{
lean_object* v_rangeStartPosLine_518_; lean_object* v_rangeStartPosCharacter_519_; lean_object* v_rangeEndPosLine_520_; lean_object* v_rangeEndPosCharacter_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v_rangeStartPosLine_518_ = lean_ctor_get(v_i_517_, 0);
v_rangeStartPosCharacter_519_ = lean_ctor_get(v_i_517_, 1);
v_rangeEndPosLine_520_ = lean_ctor_get(v_i_517_, 2);
v_rangeEndPosCharacter_521_ = lean_ctor_get(v_i_517_, 3);
lean_inc(v_rangeStartPosCharacter_519_);
lean_inc(v_rangeStartPosLine_518_);
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v_rangeStartPosLine_518_);
lean_ctor_set(v___x_522_, 1, v_rangeStartPosCharacter_519_);
lean_inc(v_rangeEndPosCharacter_521_);
lean_inc(v_rangeEndPosLine_520_);
v___x_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_523_, 0, v_rangeEndPosLine_520_);
lean_ctor_set(v___x_523_, 1, v_rangeEndPosCharacter_521_);
v___x_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range___boxed(lean_object* v_i_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Lsp_DeclInfo_range(v_i_525_);
lean_dec_ref(v_i_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange(lean_object* v_i_527_){
_start:
{
lean_object* v_selectionRangeStartPosLine_528_; lean_object* v_selectionRangeStartPosCharacter_529_; lean_object* v_selectionRangeEndPosLine_530_; lean_object* v_selectionRangeEndPosCharacter_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_selectionRangeStartPosLine_528_ = lean_ctor_get(v_i_527_, 4);
v_selectionRangeStartPosCharacter_529_ = lean_ctor_get(v_i_527_, 5);
v_selectionRangeEndPosLine_530_ = lean_ctor_get(v_i_527_, 6);
v_selectionRangeEndPosCharacter_531_ = lean_ctor_get(v_i_527_, 7);
lean_inc(v_selectionRangeStartPosCharacter_529_);
lean_inc(v_selectionRangeStartPosLine_528_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v_selectionRangeStartPosLine_528_);
lean_ctor_set(v___x_532_, 1, v_selectionRangeStartPosCharacter_529_);
lean_inc(v_selectionRangeEndPosCharacter_531_);
lean_inc(v_selectionRangeEndPosLine_530_);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v_selectionRangeEndPosLine_530_);
lean_ctor_set(v___x_533_, 1, v_selectionRangeEndPosCharacter_531_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange___boxed(lean_object* v_i_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lean_Lsp_DeclInfo_selectionRange(v_i_535_);
lean_dec_ref(v_i_535_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeclInfo___lam__0(lean_object* v_i_537_){
_start:
{
lean_object* v_rangeStartPosLine_538_; lean_object* v_rangeStartPosCharacter_539_; lean_object* v_rangeEndPosLine_540_; lean_object* v_rangeEndPosCharacter_541_; lean_object* v_selectionRangeStartPosLine_542_; lean_object* v_selectionRangeStartPosCharacter_543_; lean_object* v_selectionRangeEndPosLine_544_; lean_object* v_selectionRangeEndPosCharacter_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_rangeStartPosLine_538_ = lean_ctor_get(v_i_537_, 0);
lean_inc(v_rangeStartPosLine_538_);
v_rangeStartPosCharacter_539_ = lean_ctor_get(v_i_537_, 1);
lean_inc(v_rangeStartPosCharacter_539_);
v_rangeEndPosLine_540_ = lean_ctor_get(v_i_537_, 2);
lean_inc(v_rangeEndPosLine_540_);
v_rangeEndPosCharacter_541_ = lean_ctor_get(v_i_537_, 3);
lean_inc(v_rangeEndPosCharacter_541_);
v_selectionRangeStartPosLine_542_ = lean_ctor_get(v_i_537_, 4);
lean_inc(v_selectionRangeStartPosLine_542_);
v_selectionRangeStartPosCharacter_543_ = lean_ctor_get(v_i_537_, 5);
lean_inc(v_selectionRangeStartPosCharacter_543_);
v_selectionRangeEndPosLine_544_ = lean_ctor_get(v_i_537_, 6);
lean_inc(v_selectionRangeEndPosLine_544_);
v_selectionRangeEndPosCharacter_545_ = lean_ctor_get(v_i_537_, 7);
lean_inc(v_selectionRangeEndPosCharacter_545_);
lean_dec_ref(v_i_537_);
v___x_546_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_538_);
v___x_547_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
v___x_548_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_539_);
v___x_549_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
v___x_550_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_540_);
v___x_551_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
v___x_552_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_541_);
v___x_553_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
v___x_554_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_542_);
v___x_555_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
v___x_556_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_543_);
v___x_557_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
v___x_558_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_544_);
v___x_559_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
v___x_560_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_545_);
v___x_561_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
v___x_562_ = lean_unsigned_to_nat(8u);
v___x_563_ = lean_mk_empty_array_with_capacity(v___x_562_);
v___x_564_ = lean_array_push(v___x_563_, v___x_547_);
v___x_565_ = lean_array_push(v___x_564_, v___x_549_);
v___x_566_ = lean_array_push(v___x_565_, v___x_551_);
v___x_567_ = lean_array_push(v___x_566_, v___x_553_);
v___x_568_ = lean_array_push(v___x_567_, v___x_555_);
v___x_569_ = lean_array_push(v___x_568_, v___x_557_);
v___x_570_ = lean_array_push(v___x_569_, v___x_559_);
v___x_571_ = lean_array_push(v___x_570_, v___x_561_);
v___x_572_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0(lean_object* v___x_579_, lean_object* v_x_580_){
_start:
{
if (lean_obj_tag(v_x_580_) == 4)
{
lean_object* v_elems_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_698_; 
v_elems_581_ = lean_ctor_get(v_x_580_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v_x_580_);
if (v_isSharedCheck_698_ == 0)
{
v___x_583_ = v_x_580_;
v_isShared_584_ = v_isSharedCheck_698_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_elems_581_);
lean_dec(v_x_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_698_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lean_array_get_size(v_elems_581_);
v___x_586_ = lean_unsigned_to_nat(8u);
v___x_587_ = lean_nat_dec_eq(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_592_; 
lean_dec_ref(v_elems_581_);
v___x_588_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0));
v___x_589_ = l_Nat_reprFast(v___x_585_);
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
lean_dec_ref(v___x_589_);
if (v_isShared_584_ == 0)
{
lean_ctor_set_tag(v___x_583_, 0);
lean_ctor_set(v___x_583_, 0, v___x_590_);
v___x_592_ = v___x_583_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
lean_del_object(v___x_583_);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_594_);
lean_inc(v___x_595_);
v___x_596_ = l_Lean_Json_getNat_x3f(v___x_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec_ref(v_elems_581_);
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_a_605_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_596_, 1);
v___x_606_ = lean_unsigned_to_nat(1u);
v___x_607_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_606_);
lean_inc(v___x_607_);
v___x_608_ = l_Lean_Json_getNat_x3f(v___x_607_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_609_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_608_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_608_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_a_617_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_608_, 1);
v___x_618_ = lean_unsigned_to_nat(2u);
v___x_619_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_618_);
lean_inc(v___x_619_);
v___x_620_ = l_Lean_Json_getNat_x3f(v___x_619_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
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
lean_object* v_a_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_a_629_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_620_, 1);
v___x_630_ = lean_unsigned_to_nat(3u);
v___x_631_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_630_);
lean_inc(v___x_631_);
v___x_632_ = l_Lean_Json_getNat_x3f(v___x_631_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_633_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_632_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_632_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v_a_641_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_632_, 1);
v___x_642_ = lean_unsigned_to_nat(4u);
v___x_643_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_642_);
lean_inc(v___x_643_);
v___x_644_ = l_Lean_Json_getNat_x3f(v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_653_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_644_, 1);
v___x_654_ = lean_unsigned_to_nat(5u);
v___x_655_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_654_);
lean_inc(v___x_655_);
v___x_656_ = l_Lean_Json_getNat_x3f(v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v_a_653_);
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_665_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_656_, 1);
v___x_666_ = lean_unsigned_to_nat(6u);
v___x_667_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_666_);
lean_inc(v___x_667_);
v___x_668_ = l_Lean_Json_getNat_x3f(v___x_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_a_665_);
lean_dec(v_a_653_);
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_a_677_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_668_, 1);
v___x_678_ = lean_unsigned_to_nat(7u);
v___x_679_ = lean_array_get(v___x_579_, v_elems_581_, v___x_678_);
lean_dec_ref(v_elems_581_);
v___x_680_ = l_Lean_Json_getNat_x3f(v___x_679_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec(v_a_677_);
lean_dec(v_a_665_);
lean_dec(v_a_653_);
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
v_a_681_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_680_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_680_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_697_; 
v_a_689_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_697_ == 0)
{
v___x_691_ = v___x_680_;
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_680_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_693_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_693_, 0, v_a_605_);
lean_ctor_set(v___x_693_, 1, v_a_617_);
lean_ctor_set(v___x_693_, 2, v_a_629_);
lean_ctor_set(v___x_693_, 3, v_a_641_);
lean_ctor_set(v___x_693_, 4, v_a_653_);
lean_ctor_set(v___x_693_, 5, v_a_665_);
lean_ctor_set(v___x_693_, 6, v_a_677_);
lean_ctor_set(v___x_693_, 7, v_a_689_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v___x_693_);
v___x_695_ = v___x_691_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
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
else
{
lean_object* v___x_699_; 
lean_dec(v_x_580_);
v___x_699_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2));
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___boxed(lean_object* v___x_700_, lean_object* v_x_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_Lsp_instFromJsonDeclInfo___lam__0(v___x_700_, v_x_701_);
lean_dec(v___x_700_);
return v_res_702_;
}
}
static lean_object* _init_l_Lean_Lsp_instEmptyCollectionDecls___aux__1(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_box(1);
return v___x_706_;
}
}
static lean_object* _init_l_Lean_Lsp_instEmptyCollectionDecls(void){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = lean_box(1);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___lam__0(lean_object* v_f_708_, lean_object* v_a_709_, lean_object* v_b_710_, lean_object* v_c_711_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_a_709_);
lean_ctor_set(v___x_712_, 1, v_b_710_);
v___x_713_ = lean_apply_2(v_f_708_, v___x_712_, v_c_711_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg(lean_object* v_m_733_, lean_object* v_init_734_, lean_object* v_f_735_){
_start:
{
lean_object* v___f_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v_a_739_; 
v___f_736_ = lean_alloc_closure((void*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_736_, 0, v_f_735_);
v___x_737_ = ((lean_object*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9));
v___x_738_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v___x_737_, v___f_736_, v_init_734_, v_m_733_);
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec(v___x_738_);
return v_a_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1(lean_object* v_00_u03b2_740_, lean_object* v_m_741_, lean_object* v_init_742_, lean_object* v_f_743_){
_start:
{
lean_object* v___f_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v_a_747_; 
v___f_744_ = lean_alloc_closure((void*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_744_, 0, v_f_743_);
v___x_745_ = ((lean_object*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9));
v___x_746_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v___x_745_, v___f_744_, v_init_742_, v_m_741_);
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec(v___x_746_);
return v_a_747_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg(lean_object* v___y_748_, lean_object* v_init_749_, lean_object* v_x_750_){
_start:
{
if (lean_obj_tag(v_x_750_) == 0)
{
lean_object* v_k_751_; lean_object* v_v_752_; lean_object* v_l_753_; lean_object* v_r_754_; lean_object* v___x_755_; 
v_k_751_ = lean_ctor_get(v_x_750_, 1);
v_v_752_ = lean_ctor_get(v_x_750_, 2);
v_l_753_ = lean_ctor_get(v_x_750_, 3);
v_r_754_ = lean_ctor_get(v_x_750_, 4);
lean_inc_ref(v___y_748_);
v___x_755_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg(v___y_748_, v_init_749_, v_l_753_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_dec_ref(v___y_748_);
return v___x_755_;
}
else
{
lean_object* v_a_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_755_, 1);
lean_inc(v_v_752_);
lean_inc(v_k_751_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v_k_751_);
lean_ctor_set(v___x_757_, 1, v_v_752_);
lean_inc_ref(v___y_748_);
v___x_758_ = lean_apply_2(v___y_748_, v___x_757_, v_a_756_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_dec_ref(v___y_748_);
return v___x_758_;
}
else
{
lean_object* v_a_759_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v_init_749_ = v_a_759_;
v_x_750_ = v_r_754_;
goto _start;
}
}
}
else
{
lean_object* v___x_761_; 
lean_dec_ref(v___y_748_);
v___x_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_761_, 0, v_init_749_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg___boxed(lean_object* v___y_762_, lean_object* v_init_763_, lean_object* v_x_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg(v___y_762_, v_init_763_, v_x_764_);
lean_dec(v_x_764_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___lam__0(lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_770_; lean_object* v_a_771_; 
v___x_770_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg(v___y_769_, v___y_768_, v___y_767_);
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref(v___x_770_);
return v_a_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___lam__0___boxed(lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___lam__0(v___y_772_, v___y_773_, v___y_774_, v___y_775_);
lean_dec(v___y_773_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0(lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v_init_781_, lean_object* v_x_782_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___redArg(v___y_780_, v_init_781_, v_x_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0___boxed(lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v_init_786_, lean_object* v_x_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_instForInIdDeclsProdStringDeclInfo_spec__0(v___y_784_, v___y_785_, v_init_786_, v_x_787_);
lean_dec(v_x_787_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDecls___lam__0(lean_object* v_x_789_){
_start:
{
lean_object* v_snd_790_; lean_object* v_fst_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_833_; 
v_snd_790_ = lean_ctor_get(v_x_789_, 1);
v_fst_791_ = lean_ctor_get(v_x_789_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v_x_789_);
if (v_isSharedCheck_833_ == 0)
{
v___x_793_ = v_x_789_;
v_isShared_794_ = v_isSharedCheck_833_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_snd_790_);
lean_inc(v_fst_791_);
lean_dec(v_x_789_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_833_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v_rangeStartPosLine_795_; lean_object* v_rangeStartPosCharacter_796_; lean_object* v_rangeEndPosLine_797_; lean_object* v_rangeEndPosCharacter_798_; lean_object* v_selectionRangeStartPosLine_799_; lean_object* v_selectionRangeStartPosCharacter_800_; lean_object* v_selectionRangeEndPosLine_801_; lean_object* v_selectionRangeEndPosCharacter_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_831_; 
v_rangeStartPosLine_795_ = lean_ctor_get(v_snd_790_, 0);
lean_inc(v_rangeStartPosLine_795_);
v_rangeStartPosCharacter_796_ = lean_ctor_get(v_snd_790_, 1);
lean_inc(v_rangeStartPosCharacter_796_);
v_rangeEndPosLine_797_ = lean_ctor_get(v_snd_790_, 2);
lean_inc(v_rangeEndPosLine_797_);
v_rangeEndPosCharacter_798_ = lean_ctor_get(v_snd_790_, 3);
lean_inc(v_rangeEndPosCharacter_798_);
v_selectionRangeStartPosLine_799_ = lean_ctor_get(v_snd_790_, 4);
lean_inc(v_selectionRangeStartPosLine_799_);
v_selectionRangeStartPosCharacter_800_ = lean_ctor_get(v_snd_790_, 5);
lean_inc(v_selectionRangeStartPosCharacter_800_);
v_selectionRangeEndPosLine_801_ = lean_ctor_get(v_snd_790_, 6);
lean_inc(v_selectionRangeEndPosLine_801_);
v_selectionRangeEndPosCharacter_802_ = lean_ctor_get(v_snd_790_, 7);
lean_inc(v_selectionRangeEndPosCharacter_802_);
lean_dec(v_snd_790_);
v___x_803_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_795_);
v___x_804_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
v___x_805_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_796_);
v___x_806_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
v___x_807_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_797_);
v___x_808_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
v___x_809_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_798_);
v___x_810_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
v___x_811_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_799_);
v___x_812_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
v___x_813_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_800_);
v___x_814_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
v___x_815_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_801_);
v___x_816_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
v___x_817_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_802_);
v___x_818_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
v___x_819_ = lean_unsigned_to_nat(8u);
v___x_820_ = lean_mk_empty_array_with_capacity(v___x_819_);
v___x_821_ = lean_array_push(v___x_820_, v___x_804_);
v___x_822_ = lean_array_push(v___x_821_, v___x_806_);
v___x_823_ = lean_array_push(v___x_822_, v___x_808_);
v___x_824_ = lean_array_push(v___x_823_, v___x_810_);
v___x_825_ = lean_array_push(v___x_824_, v___x_812_);
v___x_826_ = lean_array_push(v___x_825_, v___x_814_);
v___x_827_ = lean_array_push(v___x_826_, v___x_816_);
v___x_828_ = lean_array_push(v___x_827_, v___x_818_);
v___x_829_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 1, v___x_829_);
v___x_831_ = v___x_793_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_fst_791_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDecls___lam__1(lean_object* v_x1_834_, lean_object* v_x2_835_, lean_object* v_x3_836_){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v_x1_834_);
lean_ctor_set(v___x_837_, 1, v_x2_835_);
v___x_838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
lean_ctor_set(v___x_838_, 1, v_x3_836_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDecls___lam__2(lean_object* v___f_839_, lean_object* v___f_840_, lean_object* v_m_841_){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_842_ = lean_box(0);
v___x_843_ = ((lean_object*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9));
v___x_844_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_843_, v___f_839_, v___x_842_, v_m_841_);
v___x_845_ = l_List_mapTR_loop___redArg(v___f_840_, v___x_844_, v___x_842_);
v___x_846_ = l_Lean_Json_mkObj(v___x_845_);
lean_dec(v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDecls___lam__0(lean_object* v___x_855_, lean_object* v_m_856_, lean_object* v_k_857_, lean_object* v_v_858_){
_start:
{
if (lean_obj_tag(v_v_858_) == 4)
{
lean_object* v_elems_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_978_; 
v_elems_859_ = lean_ctor_get(v_v_858_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v_v_858_);
if (v_isSharedCheck_978_ == 0)
{
v___x_861_ = v_v_858_;
v_isShared_862_ = v_isSharedCheck_978_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_elems_859_);
lean_dec(v_v_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_978_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_863_ = lean_array_get_size(v_elems_859_);
v___x_864_ = lean_unsigned_to_nat(8u);
v___x_865_ = lean_nat_dec_eq(v___x_863_, v___x_864_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_870_; 
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v___x_866_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0));
v___x_867_ = l_Nat_reprFast(v___x_863_);
v___x_868_ = lean_string_append(v___x_866_, v___x_867_);
lean_dec_ref(v___x_867_);
if (v_isShared_862_ == 0)
{
lean_ctor_set_tag(v___x_861_, 0);
lean_ctor_set(v___x_861_, 0, v___x_868_);
v___x_870_ = v___x_861_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_868_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
lean_del_object(v___x_861_);
v___x_872_ = lean_box(0);
v___x_873_ = lean_unsigned_to_nat(0u);
v___x_874_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_873_);
lean_inc(v___x_874_);
v___x_875_ = l_Lean_Json_getNat_x3f(v___x_874_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
else
{
lean_object* v_a_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_a_884_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_875_, 1);
v___x_885_ = lean_unsigned_to_nat(1u);
v___x_886_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_885_);
lean_inc(v___x_886_);
v___x_887_ = l_Lean_Json_getNat_x3f(v___x_886_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v_a_884_);
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_a_896_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_887_, 1);
v___x_897_ = lean_unsigned_to_nat(2u);
v___x_898_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_897_);
lean_inc(v___x_898_);
v___x_899_ = l_Lean_Json_getNat_x3f(v___x_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
lean_dec(v_a_896_);
lean_dec(v_a_884_);
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_900_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_899_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_a_908_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v___x_899_, 1);
v___x_909_ = lean_unsigned_to_nat(3u);
v___x_910_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_909_);
lean_inc(v___x_910_);
v___x_911_ = l_Lean_Json_getNat_x3f(v___x_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec(v_a_908_);
lean_dec(v_a_896_);
lean_dec(v_a_884_);
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_911_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_920_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_911_, 1);
v___x_921_ = lean_unsigned_to_nat(4u);
v___x_922_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_921_);
lean_inc(v___x_922_);
v___x_923_ = l_Lean_Json_getNat_x3f(v___x_922_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_a_920_);
lean_dec(v_a_908_);
lean_dec(v_a_896_);
lean_dec(v_a_884_);
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v_a_932_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_932_);
lean_dec_ref_known(v___x_923_, 1);
v___x_933_ = lean_unsigned_to_nat(5u);
v___x_934_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_933_);
lean_inc(v___x_934_);
v___x_935_ = l_Lean_Json_getNat_x3f(v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec(v_a_932_);
lean_dec(v_a_920_);
lean_dec(v_a_908_);
lean_dec(v_a_896_);
lean_dec(v_a_884_);
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_935_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_a_944_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_935_, 1);
v___x_945_ = lean_unsigned_to_nat(6u);
v___x_946_ = lean_array_get_borrowed(v___x_872_, v_elems_859_, v___x_945_);
lean_inc(v___x_946_);
v___x_947_ = l_Lean_Json_getNat_x3f(v___x_946_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec(v_a_944_);
lean_dec(v_a_932_);
lean_dec(v_a_920_);
lean_dec(v_a_908_);
lean_dec(v_a_896_);
lean_dec(v_a_884_);
lean_dec_ref(v_elems_859_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_948_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_947_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_947_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v_a_956_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_947_, 1);
v___x_957_ = lean_unsigned_to_nat(7u);
v___x_958_ = lean_array_get(v___x_872_, v_elems_859_, v___x_957_);
lean_dec_ref(v_elems_859_);
v___x_959_ = l_Lean_Json_getNat_x3f(v___x_958_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
lean_dec(v_a_956_);
lean_dec(v_a_944_);
lean_dec(v_a_932_);
lean_dec(v_a_920_);
lean_dec(v_a_908_);
lean_dec(v_a_896_);
lean_dec(v_a_884_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_977_; 
v_a_968_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_977_ == 0)
{
v___x_970_ = v___x_959_;
v_isShared_971_ = v_isSharedCheck_977_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_959_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_977_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_972_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_972_, 0, v_a_884_);
lean_ctor_set(v___x_972_, 1, v_a_896_);
lean_ctor_set(v___x_972_, 2, v_a_908_);
lean_ctor_set(v___x_972_, 3, v_a_920_);
lean_ctor_set(v___x_972_, 4, v_a_932_);
lean_ctor_set(v___x_972_, 5, v_a_944_);
lean_ctor_set(v___x_972_, 6, v_a_956_);
lean_ctor_set(v___x_972_, 7, v_a_968_);
v___x_973_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_855_, v_k_857_, v___x_972_, v_m_856_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v___x_973_);
v___x_975_ = v___x_970_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
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
else
{
lean_object* v___x_979_; 
lean_dec(v_v_858_);
lean_dec_ref(v_k_857_);
lean_dec(v_m_856_);
lean_dec_ref(v___x_855_);
v___x_979_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDecls___lam__0___closed__0));
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDecls___lam__1(lean_object* v___x_983_, lean_object* v_j_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_Json_getObj_x3f(v_j_984_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec_ref(v___x_983_);
v_a_986_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_985_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_985_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___f_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v_a_994_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_985_, 1);
v___f_995_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDecls___lam__1___closed__1));
v___x_996_ = lean_box(1);
v___x_997_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v___x_983_, v___f_995_, v___x_996_, v_a_994_);
return v___x_997_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk(lean_object* v_range_1025_, lean_object* v_parentDecl_x3f_1026_){
_start:
{
if (lean_obj_tag(v_parentDecl_x3f_1026_) == 0)
{
lean_object* v_start_1027_; lean_object* v_end_1028_; lean_object* v_line_1029_; lean_object* v_character_1030_; lean_object* v_line_1031_; lean_object* v_character_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_start_1027_ = lean_ctor_get(v_range_1025_, 0);
v_end_1028_ = lean_ctor_get(v_range_1025_, 1);
v_line_1029_ = lean_ctor_get(v_start_1027_, 0);
v_character_1030_ = lean_ctor_get(v_start_1027_, 1);
v_line_1031_ = lean_ctor_get(v_end_1028_, 0);
v_character_1032_ = lean_ctor_get(v_end_1028_, 1);
v___x_1033_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
lean_inc(v_character_1032_);
lean_inc(v_line_1031_);
lean_inc(v_character_1030_);
lean_inc(v_line_1029_);
v___x_1034_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1034_, 0, v_line_1029_);
lean_ctor_set(v___x_1034_, 1, v_character_1030_);
lean_ctor_set(v___x_1034_, 2, v_line_1031_);
lean_ctor_set(v___x_1034_, 3, v_character_1032_);
lean_ctor_set(v___x_1034_, 4, v___x_1033_);
return v___x_1034_;
}
else
{
lean_object* v_start_1035_; lean_object* v_end_1036_; lean_object* v_line_1037_; lean_object* v_character_1038_; lean_object* v_line_1039_; lean_object* v_character_1040_; lean_object* v_val_1041_; lean_object* v___x_1042_; 
v_start_1035_ = lean_ctor_get(v_range_1025_, 0);
v_end_1036_ = lean_ctor_get(v_range_1025_, 1);
v_line_1037_ = lean_ctor_get(v_start_1035_, 0);
v_character_1038_ = lean_ctor_get(v_start_1035_, 1);
v_line_1039_ = lean_ctor_get(v_end_1036_, 0);
v_character_1040_ = lean_ctor_get(v_end_1036_, 1);
v_val_1041_ = lean_ctor_get(v_parentDecl_x3f_1026_, 0);
lean_inc(v_val_1041_);
lean_inc(v_character_1040_);
lean_inc(v_line_1039_);
lean_inc(v_character_1038_);
lean_inc(v_line_1037_);
v___x_1042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1042_, 0, v_line_1037_);
lean_ctor_set(v___x_1042_, 1, v_character_1038_);
lean_ctor_set(v___x_1042_, 2, v_line_1039_);
lean_ctor_set(v___x_1042_, 3, v_character_1040_);
lean_ctor_set(v___x_1042_, 4, v_val_1041_);
return v___x_1042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk___boxed(lean_object* v_range_1043_, lean_object* v_parentDecl_x3f_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_Lsp_RefInfo_Location_mk(v_range_1043_, v_parentDecl_x3f_1044_);
lean_dec(v_parentDecl_x3f_1044_);
lean_dec_ref(v_range_1043_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range(lean_object* v_l_1046_){
_start:
{
lean_object* v_startPosLine_1047_; lean_object* v_startPosCharacter_1048_; lean_object* v_endPosLine_1049_; lean_object* v_endPosCharacter_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v_startPosLine_1047_ = lean_ctor_get(v_l_1046_, 0);
v_startPosCharacter_1048_ = lean_ctor_get(v_l_1046_, 1);
v_endPosLine_1049_ = lean_ctor_get(v_l_1046_, 2);
v_endPosCharacter_1050_ = lean_ctor_get(v_l_1046_, 3);
lean_inc(v_startPosCharacter_1048_);
lean_inc(v_startPosLine_1047_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_startPosLine_1047_);
lean_ctor_set(v___x_1051_, 1, v_startPosCharacter_1048_);
lean_inc(v_endPosCharacter_1050_);
lean_inc(v_endPosLine_1049_);
v___x_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1052_, 0, v_endPosLine_1049_);
lean_ctor_set(v___x_1052_, 1, v_endPosCharacter_1050_);
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1051_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range___boxed(lean_object* v_l_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_Lsp_RefInfo_Location_range(v_l_1054_);
lean_dec_ref(v_l_1054_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(lean_object* v_l_1056_){
_start:
{
lean_object* v_parentDecl_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v_parentDecl_1057_ = lean_ctor_get(v_l_1056_, 4);
v___x_1058_ = lean_string_utf8_byte_size(v_parentDecl_1057_);
v___x_1059_ = lean_unsigned_to_nat(0u);
v___x_1060_ = lean_nat_dec_eq(v___x_1058_, v___x_1059_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_inc_ref(v_parentDecl_1057_);
v___x_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1061_, 0, v_parentDecl_1057_);
return v___x_1061_;
}
else
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_box(0);
return v___x_1062_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f___boxed(lean_object* v_l_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_l_1063_);
lean_dec_ref(v_l_1063_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__0(lean_object* v_n_1065_){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = l_Lean_JsonNumber_fromNat(v_n_1065_);
v___x_1067_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1(lean_object* v___f_1068_, lean_object* v_l_1069_){
_start:
{
lean_object* v_startPosLine_1070_; lean_object* v_startPosCharacter_1071_; lean_object* v_endPosLine_1072_; lean_object* v_endPosCharacter_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v_range_1079_; lean_object* v___x_1080_; 
v_startPosLine_1070_ = lean_ctor_get(v_l_1069_, 0);
v_startPosCharacter_1071_ = lean_ctor_get(v_l_1069_, 1);
v_endPosLine_1072_ = lean_ctor_get(v_l_1069_, 2);
v_endPosCharacter_1073_ = lean_ctor_get(v_l_1069_, 3);
v___x_1074_ = lean_box(0);
lean_inc(v_endPosCharacter_1073_);
v___x_1075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_endPosCharacter_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
lean_inc(v_endPosLine_1072_);
v___x_1076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1076_, 0, v_endPosLine_1072_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
lean_inc(v_startPosCharacter_1071_);
v___x_1077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1077_, 0, v_startPosCharacter_1071_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
lean_inc(v_startPosLine_1070_);
v___x_1078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1078_, 0, v_startPosLine_1070_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v_range_1079_ = l_List_mapTR_loop___redArg(v___f_1068_, v___x_1078_, v___x_1074_);
v___x_1080_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_l_1069_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = l_List_appendTR___redArg(v_range_1079_, v___x_1074_);
return v___x_1081_;
}
else
{
lean_object* v_val_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1091_; 
v_val_1082_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1084_ = v___x_1080_;
v_isShared_1085_ = v_isSharedCheck_1091_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_val_1082_);
lean_dec(v___x_1080_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1091_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
lean_ctor_set_tag(v___x_1084_, 3);
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_val_1082_);
v___x_1087_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v___x_1074_);
v___x_1089_ = l_List_appendTR___redArg(v_range_1079_, v___x_1088_);
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1___boxed(lean_object* v___f_1092_, lean_object* v_l_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_Lsp_instToJsonRefInfo___lam__1(v___f_1092_, v_l_1093_);
lean_dec_ref(v_l_1093_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__2(lean_object* v_locationToList_1095_, lean_object* v_x_1096_){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_apply_1(v_locationToList_1095_, v_x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3(lean_object* v___x_1100_, lean_object* v___f_1101_, lean_object* v_locationToList_1102_, lean_object* v_i_1103_){
_start:
{
lean_object* v_definition_x3f_1104_; lean_object* v_usages_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1139_; 
v_definition_x3f_1104_ = lean_ctor_get(v_i_1103_, 0);
v_usages_1105_ = lean_ctor_get(v_i_1103_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_i_1103_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1107_ = v_i_1103_;
v_isShared_1108_ = v_isSharedCheck_1139_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_usages_1105_);
lean_inc(v_definition_x3f_1104_);
lean_dec(v_i_1103_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1139_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; lean_object* v___y_1111_; 
v___x_1109_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
if (lean_obj_tag(v_definition_x3f_1104_) == 0)
{
lean_object* v___x_1129_; 
lean_dec_ref(v_locationToList_1102_);
v___x_1129_ = lean_box(0);
v___y_1111_ = v___x_1129_;
goto v___jp_1110_;
}
else
{
lean_object* v_val_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1138_; 
v_val_1130_ = lean_ctor_get(v_definition_x3f_1104_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_definition_x3f_1104_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1132_ = v_definition_x3f_1104_;
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_val_1130_);
lean_dec(v_definition_x3f_1104_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1134_ = lean_apply_1(v_locationToList_1102_, v_val_1130_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v___x_1134_);
v___x_1136_ = v___x_1132_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
v___y_1111_ = v___x_1136_;
goto v___jp_1110_;
}
}
}
v___jp_1110_:
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
lean_inc_ref(v___x_1100_);
v___x_1112_ = l_Lean_Option_toJson___redArg(v___x_1100_, v___y_1111_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 1, v___x_1112_);
lean_ctor_set(v___x_1107_, 0, v___x_1109_);
v___x_1114_ = v___x_1107_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; size_t v_sz_1117_; size_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1115_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_1116_ = ((lean_object*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9));
v_sz_1117_ = lean_array_size(v_usages_1105_);
v___x_1118_ = ((size_t)0ULL);
v___x_1119_ = l_unsafeCast___redArg(v_usages_1105_);
lean_dec_ref(v_usages_1105_);
v___x_1120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1116_, v___f_1101_, v_sz_1117_, v___x_1118_, v___x_1119_);
v___x_1121_ = l_unsafeCast___redArg(v___x_1120_);
lean_dec(v___x_1120_);
v___x_1122_ = l_Lean_Array_toJson___redArg(v___x_1100_, v___x_1121_);
lean_dec(v___x_1121_);
v___x_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1115_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = lean_box(0);
v___x_1125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1123_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1114_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = l_Lean_Json_mkObj(v___x_1126_);
lean_dec_ref_known(v___x_1126_, 2);
return v___x_1127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0(lean_object* v_a_1154_){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; uint8_t v___y_1158_; uint8_t v___y_1237_; uint8_t v___y_1238_; uint8_t v___y_1239_; uint8_t v___y_1245_; uint8_t v___x_1250_; 
v___x_1155_ = lean_array_get_size(v_a_1154_);
v___x_1156_ = lean_unsigned_to_nat(4u);
v___x_1250_ = lean_nat_dec_eq(v___x_1155_, v___x_1156_);
if (v___x_1250_ == 0)
{
uint8_t v___x_1251_; 
v___x_1251_ = 1;
v___y_1245_ = v___x_1251_;
goto v___jp_1244_;
}
else
{
uint8_t v___x_1252_; 
v___x_1252_ = 0;
v___y_1245_ = v___x_1252_;
goto v___jp_1244_;
}
v___jp_1157_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_unsigned_to_nat(0u);
v___x_1160_ = lean_array_fget_borrowed(v_a_1154_, v___x_1159_);
lean_inc(v___x_1160_);
v___x_1161_ = l_Lean_Json_getNat_x3f(v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_a_1170_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1161_, 1);
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = lean_array_fget_borrowed(v_a_1154_, v___x_1171_);
lean_inc(v___x_1172_);
v___x_1173_ = l_Lean_Json_getNat_x3f(v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_dec(v_a_1170_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_a_1182_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1173_, 1);
v___x_1183_ = lean_unsigned_to_nat(2u);
v___x_1184_ = lean_array_fget_borrowed(v_a_1154_, v___x_1183_);
lean_inc(v___x_1184_);
v___x_1185_ = l_Lean_Json_getNat_x3f(v___x_1184_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec(v_a_1182_);
lean_dec(v_a_1170_);
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v_a_1194_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1194_);
lean_dec_ref_known(v___x_1185_, 1);
v___x_1195_ = lean_unsigned_to_nat(3u);
v___x_1196_ = lean_array_fget_borrowed(v_a_1154_, v___x_1195_);
lean_inc(v___x_1196_);
v___x_1197_ = l_Lean_Json_getNat_x3f(v___x_1196_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec(v_a_1194_);
lean_dec(v_a_1182_);
lean_dec(v_a_1170_);
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1197_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1197_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
else
{
if (v___y_1158_ == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1215_; 
v_a_1206_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1208_ = v___x_1197_;
v_isShared_1209_ = v_isSharedCheck_1215_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1197_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1215_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; 
v___x_1210_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_1211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1211_, 0, v_a_1170_);
lean_ctor_set(v___x_1211_, 1, v_a_1182_);
lean_ctor_set(v___x_1211_, 2, v_a_1194_);
lean_ctor_set(v___x_1211_, 3, v_a_1206_);
lean_ctor_set(v___x_1211_, 4, v___x_1210_);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v___x_1211_);
v___x_1213_ = v___x_1208_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v_a_1216_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1217_ = lean_array_fget_borrowed(v_a_1154_, v___x_1156_);
lean_inc(v___x_1217_);
v___x_1218_ = l_Lean_Json_getStr_x3f(v___x_1217_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec(v_a_1216_);
lean_dec(v_a_1194_);
lean_dec(v_a_1182_);
lean_dec(v_a_1170_);
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1218_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1218_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1235_; 
v_a_1227_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1229_ = v___x_1218_;
v_isShared_1230_ = v_isSharedCheck_1235_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1218_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1235_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1231_, 0, v_a_1170_);
lean_ctor_set(v___x_1231_, 1, v_a_1182_);
lean_ctor_set(v___x_1231_, 2, v_a_1194_);
lean_ctor_set(v___x_1231_, 3, v_a_1216_);
lean_ctor_set(v___x_1231_, 4, v_a_1227_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1231_);
v___x_1233_ = v___x_1229_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
}
}
}
}
v___jp_1236_:
{
if (v___y_1238_ == 0)
{
v___y_1158_ = v___y_1237_;
goto v___jp_1157_;
}
else
{
if (v___y_1239_ == 0)
{
v___y_1158_ = v___y_1237_;
goto v___jp_1157_;
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1240_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_1241_ = l_Nat_reprFast(v___x_1155_);
v___x_1242_ = lean_string_append(v___x_1240_, v___x_1241_);
lean_dec_ref(v___x_1241_);
v___x_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
return v___x_1243_;
}
}
}
v___jp_1244_:
{
lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = lean_unsigned_to_nat(5u);
v___x_1247_ = lean_nat_dec_eq(v___x_1155_, v___x_1246_);
if (v___x_1247_ == 0)
{
uint8_t v___x_1248_; 
v___x_1248_ = 1;
v___y_1237_ = v___x_1247_;
v___y_1238_ = v___y_1245_;
v___y_1239_ = v___x_1248_;
goto v___jp_1236_;
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = 0;
v___y_1237_ = v___x_1247_;
v___y_1238_ = v___y_1245_;
v___y_1239_ = v___x_1249_;
goto v___jp_1236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0___boxed(lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_Lsp_instFromJsonRefInfo___lam__0(v_a_1253_);
lean_dec_ref(v_a_1253_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__1(lean_object* v___x_1255_, lean_object* v___x_1256_, lean_object* v___x_1257_, lean_object* v_toLocation_1258_, lean_object* v_j_1259_){
_start:
{
lean_object* v_definition_x3f_1261_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
lean_inc(v_j_1259_);
v___x_1296_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1259_, v___x_1255_, v___x_1295_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec(v_j_1259_);
lean_dec_ref(v_toLocation_1258_);
lean_dec_ref(v___x_1257_);
lean_dec_ref(v___x_1256_);
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
lean_object* v_a_1305_; 
v_a_1305_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1305_);
lean_dec_ref_known(v___x_1296_, 1);
if (lean_obj_tag(v_a_1305_) == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_box(0);
v_definition_x3f_1261_ = v___x_1306_;
goto v___jp_1260_;
}
else
{
lean_object* v_val_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1324_; 
v_val_1307_ = lean_ctor_get(v_a_1305_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_a_1305_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1309_ = v_a_1305_;
v_isShared_1310_ = v_isSharedCheck_1324_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_val_1307_);
lean_dec(v_a_1305_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1324_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; 
lean_inc_ref(v_toLocation_1258_);
v___x_1311_ = lean_apply_1(v_toLocation_1258_, v_val_1307_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_del_object(v___x_1309_);
lean_dec(v_j_1259_);
lean_dec_ref(v_toLocation_1258_);
lean_dec_ref(v___x_1257_);
lean_dec_ref(v___x_1256_);
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; 
v_a_1320_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1311_, 1);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 0, v_a_1320_);
v___x_1322_ = v___x_1309_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
v_definition_x3f_1261_ = v___x_1322_;
goto v___jp_1260_;
}
}
}
}
}
v___jp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_1263_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1259_, v___x_1256_, v___x_1262_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec(v_definition_x3f_1261_);
lean_dec_ref(v_toLocation_1258_);
lean_dec_ref(v___x_1257_);
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
else
{
lean_object* v_a_1272_; size_t v_sz_1273_; size_t v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v_a_1272_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1272_);
lean_dec_ref_known(v___x_1263_, 1);
v_sz_1273_ = lean_array_size(v_a_1272_);
v___x_1274_ = ((size_t)0ULL);
v___x_1275_ = l_unsafeCast___redArg(v_a_1272_);
lean_dec(v_a_1272_);
v___x_1276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1257_, v_toLocation_1258_, v_sz_1273_, v___x_1274_, v___x_1275_);
v___x_1277_ = l_unsafeCast___redArg(v___x_1276_);
lean_dec(v___x_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec(v_definition_x3f_1261_);
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1277_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1277_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1294_; 
v_a_1286_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1288_ = v___x_1277_;
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1277_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1290_, 0, v_definition_x3f_1261_);
lean_ctor_set(v___x_1290_, 1, v_a_1286_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1290_);
v___x_1292_ = v___x_1288_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1290_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Lsp_instEmptyCollectionModuleRefs___aux__1(void){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_box(1);
return v___x_1339_;
}
}
static lean_object* _init_l_Lean_Lsp_instEmptyCollectionModuleRefs(void){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_box(1);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__0(lean_object* v_f_1341_, lean_object* v_a_1342_, lean_object* v_b_1343_, lean_object* v_c_1344_){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1345_, 0, v_a_1342_);
lean_ctor_set(v___x_1345_, 1, v_b_1343_);
v___x_1346_ = lean_apply_2(v_f_1341_, v___x_1345_, v_c_1344_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__1(lean_object* v_toPure_1347_, lean_object* v_____do__lift_1348_){
_start:
{
lean_object* v_a_1349_; lean_object* v___x_1350_; 
v_a_1349_ = lean_ctor_get(v_____do__lift_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref(v_____do__lift_1348_);
v___x_1350_ = lean_apply_2(v_toPure_1347_, lean_box(0), v_a_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__2(lean_object* v_inst_1351_, lean_object* v_00_u03b2_1352_, lean_object* v_map_1353_, lean_object* v_init_1354_, lean_object* v_f_1355_){
_start:
{
lean_object* v_toApplicative_1356_; lean_object* v_toBind_1357_; lean_object* v_toPure_1358_; lean_object* v___f_1359_; lean_object* v___x_1360_; lean_object* v___f_1361_; lean_object* v___x_1362_; 
v_toApplicative_1356_ = lean_ctor_get(v_inst_1351_, 0);
v_toBind_1357_ = lean_ctor_get(v_inst_1351_, 1);
lean_inc(v_toBind_1357_);
v_toPure_1358_ = lean_ctor_get(v_toApplicative_1356_, 1);
lean_inc(v_toPure_1358_);
v___f_1359_ = lean_alloc_closure((void*)(l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1359_, 0, v_f_1355_);
v___x_1360_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_1351_, v___f_1359_, v_init_1354_, v_map_1353_);
v___f_1361_ = lean_alloc_closure((void*)(l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1361_, 0, v_toPure_1358_);
v___x_1362_ = lean_apply_4(v_toBind_1357_, lean_box(0), lean_box(0), v___x_1360_, v___f_1361_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg(lean_object* v_inst_1363_){
_start:
{
lean_object* v___f_1364_; 
v___f_1364_ = lean_alloc_closure((void*)(l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1364_, 0, v_inst_1363_);
return v___f_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad(lean_object* v_m_1365_, lean_object* v_inst_1366_){
_start:
{
lean_object* v___f_1367_; 
v___f_1367_ = lean_alloc_closure((void*)(l_Lean_Lsp_instForInModuleRefsProdRefIdentRefInfoOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1367_, 0, v_inst_1366_);
return v___f_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__1(lean_object* v___f_1368_, lean_object* v_x_1369_){
_start:
{
lean_object* v_startPosLine_1370_; lean_object* v_startPosCharacter_1371_; lean_object* v_endPosLine_1372_; lean_object* v_endPosCharacter_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v_range_1379_; lean_object* v___x_1380_; 
v_startPosLine_1370_ = lean_ctor_get(v_x_1369_, 0);
v_startPosCharacter_1371_ = lean_ctor_get(v_x_1369_, 1);
v_endPosLine_1372_ = lean_ctor_get(v_x_1369_, 2);
v_endPosCharacter_1373_ = lean_ctor_get(v_x_1369_, 3);
v___x_1374_ = lean_box(0);
lean_inc(v_endPosCharacter_1373_);
v___x_1375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1375_, 0, v_endPosCharacter_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
lean_inc(v_endPosLine_1372_);
v___x_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1376_, 0, v_endPosLine_1372_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
lean_inc(v_startPosCharacter_1371_);
v___x_1377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1377_, 0, v_startPosCharacter_1371_);
lean_ctor_set(v___x_1377_, 1, v___x_1376_);
lean_inc(v_startPosLine_1370_);
v___x_1378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1378_, 0, v_startPosLine_1370_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
v_range_1379_ = l_List_mapTR_loop___redArg(v___f_1368_, v___x_1378_, v___x_1374_);
v___x_1380_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_x_1369_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = l_List_appendTR___redArg(v_range_1379_, v___x_1374_);
return v___x_1381_;
}
else
{
lean_object* v_val_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1391_; 
v_val_1382_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1384_ = v___x_1380_;
v_isShared_1385_ = v_isSharedCheck_1391_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_val_1382_);
lean_dec(v___x_1380_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1391_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 3);
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_val_1382_);
v___x_1387_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
lean_ctor_set(v___x_1388_, 1, v___x_1374_);
v___x_1389_ = l_List_appendTR___redArg(v_range_1379_, v___x_1388_);
return v___x_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__1___boxed(lean_object* v___f_1392_, lean_object* v_x_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Lean_Lsp_instToJsonModuleRefs___lam__1(v___f_1392_, v_x_1393_);
lean_dec_ref(v_x_1393_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__0(lean_object* v___f_1395_, lean_object* v___f_1396_, lean_object* v_x_1397_){
_start:
{
lean_object* v_snd_1398_; lean_object* v_fst_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1462_; 
v_snd_1398_ = lean_ctor_get(v_x_1397_, 1);
v_fst_1399_ = lean_ctor_get(v_x_1397_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v_x_1397_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1401_ = v_x_1397_;
v_isShared_1402_ = v_isSharedCheck_1462_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_snd_1398_);
lean_inc(v_fst_1399_);
lean_dec(v_x_1397_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1462_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v_definition_x3f_1403_; lean_object* v_usages_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1461_; 
v_definition_x3f_1403_ = lean_ctor_get(v_snd_1398_, 0);
v_usages_1404_ = lean_ctor_get(v_snd_1398_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_snd_1398_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1406_ = v_snd_1398_;
v_isShared_1407_ = v_isSharedCheck_1461_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_usages_1404_);
lean_inc(v_definition_x3f_1403_);
lean_dec(v_snd_1398_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1461_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___y_1413_; lean_object* v___y_1435_; 
v___x_1408_ = l_Lean_Lsp_RefIdent_toJson(v_fst_1399_);
v___x_1409_ = l_Lean_Json_compress(v___x_1408_);
v___x_1410_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___closed__4));
v___x_1411_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
if (lean_obj_tag(v_definition_x3f_1403_) == 0)
{
lean_object* v___x_1437_; 
lean_dec_ref(v___f_1396_);
v___x_1437_ = lean_box(0);
v___y_1413_ = v___x_1437_;
goto v___jp_1412_;
}
else
{
lean_object* v_val_1438_; lean_object* v_startPosLine_1439_; lean_object* v_startPosCharacter_1440_; lean_object* v_endPosLine_1441_; lean_object* v_endPosCharacter_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v_range_1448_; lean_object* v___x_1449_; 
v_val_1438_ = lean_ctor_get(v_definition_x3f_1403_, 0);
lean_inc(v_val_1438_);
lean_dec_ref_known(v_definition_x3f_1403_, 1);
v_startPosLine_1439_ = lean_ctor_get(v_val_1438_, 0);
v_startPosCharacter_1440_ = lean_ctor_get(v_val_1438_, 1);
v_endPosLine_1441_ = lean_ctor_get(v_val_1438_, 2);
v_endPosCharacter_1442_ = lean_ctor_get(v_val_1438_, 3);
v___x_1443_ = lean_box(0);
lean_inc(v_endPosCharacter_1442_);
v___x_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1444_, 0, v_endPosCharacter_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
lean_inc(v_endPosLine_1441_);
v___x_1445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1445_, 0, v_endPosLine_1441_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
lean_inc(v_startPosCharacter_1440_);
v___x_1446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_startPosCharacter_1440_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
lean_inc(v_startPosLine_1439_);
v___x_1447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1447_, 0, v_startPosLine_1439_);
lean_ctor_set(v___x_1447_, 1, v___x_1446_);
v_range_1448_ = l_List_mapTR_loop___redArg(v___f_1396_, v___x_1447_, v___x_1443_);
v___x_1449_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_1438_);
lean_dec(v_val_1438_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = l_List_appendTR___redArg(v_range_1448_, v___x_1443_);
v___y_1435_ = v___x_1450_;
goto v___jp_1434_;
}
else
{
lean_object* v_val_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1460_; 
v_val_1451_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1453_ = v___x_1449_;
v_isShared_1454_ = v_isSharedCheck_1460_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_val_1451_);
lean_dec(v___x_1449_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1460_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
lean_ctor_set_tag(v___x_1453_, 3);
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_val_1451_);
v___x_1456_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1456_);
lean_ctor_set(v___x_1457_, 1, v___x_1443_);
v___x_1458_ = l_List_appendTR___redArg(v_range_1448_, v___x_1457_);
v___y_1435_ = v___x_1458_;
goto v___jp_1434_;
}
}
}
}
v___jp_1412_:
{
lean_object* v___x_1414_; lean_object* v___x_1416_; 
v___x_1414_ = l_Lean_Option_toJson___redArg(v___x_1410_, v___y_1413_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 1, v___x_1414_);
lean_ctor_set(v___x_1401_, 0, v___x_1411_);
v___x_1416_ = v___x_1401_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; size_t v_sz_1419_; size_t v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1426_; 
v___x_1417_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_1418_ = ((lean_object*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9));
v_sz_1419_ = lean_array_size(v_usages_1404_);
v___x_1420_ = ((size_t)0ULL);
v___x_1421_ = l_unsafeCast___redArg(v_usages_1404_);
lean_dec_ref(v_usages_1404_);
v___x_1422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1418_, v___f_1395_, v_sz_1419_, v___x_1420_, v___x_1421_);
v___x_1423_ = l_unsafeCast___redArg(v___x_1422_);
lean_dec(v___x_1422_);
v___x_1424_ = l_Lean_Array_toJson___redArg(v___x_1410_, v___x_1423_);
lean_dec(v___x_1423_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 1, v___x_1424_);
lean_ctor_set(v___x_1406_, 0, v___x_1417_);
v___x_1426_ = v___x_1406_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1417_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1427_ = lean_box(0);
v___x_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1416_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
v___x_1430_ = l_Lean_Json_mkObj(v___x_1429_);
lean_dec_ref_known(v___x_1429_, 2);
v___x_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1409_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
return v___x_1431_;
}
}
}
v___jp_1434_:
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___y_1435_);
v___y_1413_ = v___x_1436_;
goto v___jp_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__2(lean_object* v_x1_1463_, lean_object* v_x2_1464_, lean_object* v_x3_1465_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1466_, 0, v_x1_1463_);
lean_ctor_set(v___x_1466_, 1, v_x2_1464_);
v___x_1467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v_x3_1465_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonModuleRefs___lam__3(lean_object* v___f_1468_, lean_object* v___f_1469_, lean_object* v_m_1470_){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1471_ = lean_box(0);
v___x_1472_ = ((lean_object*)(l_Lean_Lsp_instForInIdDeclsProdStringDeclInfo___aux__1___redArg___closed__9));
v___x_1473_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_1472_, v___f_1468_, v___x_1471_, v_m_1470_);
v___x_1474_ = l_List_mapTR_loop___redArg(v___f_1469_, v___x_1473_, v___x_1471_);
v___x_1475_ = l_Lean_Json_mkObj(v___x_1474_);
lean_dec(v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonModuleRefs___lam__1(lean_object* v_toLocation_1486_, lean_object* v_m_1487_, lean_object* v_k_1488_, lean_object* v_v_1489_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lean_Json_parse(v_k_1488_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1490_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1490_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1500_; 
v_a_1499_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1490_, 1);
v___x_1500_ = l_Lean_Lsp_RefIdent_fromJson_x3f(v_a_1499_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1500_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1500_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v_a_1509_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1500_, 1);
v___x_1510_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDecls___closed__9));
v___x_1511_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___closed__3));
v___x_1512_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
lean_inc(v_v_1489_);
v___x_1513_ = l_Lean_Json_getObjValAs_x3f___redArg(v_v_1489_, v___x_1511_, v___x_1512_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1655_; 
v_a_1522_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1524_ = v___x_1513_;
v_isShared_1525_ = v_isSharedCheck_1655_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1513_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1655_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v_definition_x3f_1528_; lean_object* v_a_1565_; 
v___x_1526_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___closed__4));
if (lean_obj_tag(v_a_1522_) == 0)
{
lean_object* v___x_1567_; 
lean_del_object(v___x_1524_);
v___x_1567_ = lean_box(0);
v_definition_x3f_1528_ = v___x_1567_;
goto v___jp_1527_;
}
else
{
lean_object* v_val_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___y_1572_; uint8_t v___y_1637_; uint8_t v___y_1638_; uint8_t v___y_1639_; uint8_t v___y_1647_; uint8_t v___x_1652_; 
v_val_1568_ = lean_ctor_get(v_a_1522_, 0);
lean_inc(v_val_1568_);
lean_dec_ref_known(v_a_1522_, 1);
v___x_1569_ = lean_array_get_size(v_val_1568_);
v___x_1570_ = lean_unsigned_to_nat(4u);
v___x_1652_ = lean_nat_dec_eq(v___x_1569_, v___x_1570_);
if (v___x_1652_ == 0)
{
uint8_t v___x_1653_; 
v___x_1653_ = 1;
v___y_1647_ = v___x_1653_;
goto v___jp_1646_;
}
else
{
uint8_t v___x_1654_; 
v___x_1654_ = 0;
v___y_1647_ = v___x_1654_;
goto v___jp_1646_;
}
v___jp_1571_:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1573_ = lean_unsigned_to_nat(0u);
v___x_1574_ = lean_array_fget_borrowed(v_val_1568_, v___x_1573_);
lean_inc(v___x_1574_);
v___x_1575_ = l_Lean_Json_getNat_x3f(v___x_1574_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_dec(v_val_1568_);
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v_a_1584_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1575_, 1);
v___x_1585_ = lean_unsigned_to_nat(1u);
v___x_1586_ = lean_array_fget_borrowed(v_val_1568_, v___x_1585_);
lean_inc(v___x_1586_);
v___x_1587_ = l_Lean_Json_getNat_x3f(v___x_1586_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
lean_dec(v_a_1584_);
lean_dec(v_val_1568_);
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1590_ = v___x_1587_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1588_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v_a_1596_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1596_);
lean_dec_ref_known(v___x_1587_, 1);
v___x_1597_ = lean_unsigned_to_nat(2u);
v___x_1598_ = lean_array_fget_borrowed(v_val_1568_, v___x_1597_);
lean_inc(v___x_1598_);
v___x_1599_ = l_Lean_Json_getNat_x3f(v___x_1598_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
lean_dec(v_a_1596_);
lean_dec(v_a_1584_);
lean_dec(v_val_1568_);
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v_a_1608_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1599_, 1);
v___x_1609_ = lean_unsigned_to_nat(3u);
v___x_1610_ = lean_array_fget_borrowed(v_val_1568_, v___x_1609_);
lean_inc(v___x_1610_);
v___x_1611_ = l_Lean_Json_getNat_x3f(v___x_1610_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec(v_a_1608_);
lean_dec(v_a_1596_);
lean_dec(v_a_1584_);
lean_dec(v_val_1568_);
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1611_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1611_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
else
{
if (v___y_1572_ == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
lean_dec(v_val_1568_);
v_a_1620_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1621_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_1622_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1622_, 0, v_a_1584_);
lean_ctor_set(v___x_1622_, 1, v_a_1596_);
lean_ctor_set(v___x_1622_, 2, v_a_1608_);
lean_ctor_set(v___x_1622_, 3, v_a_1620_);
lean_ctor_set(v___x_1622_, 4, v___x_1621_);
v_a_1565_ = v___x_1622_;
goto v___jp_1564_;
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v_a_1623_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1623_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1624_ = lean_array_fget(v_val_1568_, v___x_1570_);
lean_dec(v_val_1568_);
v___x_1625_ = l_Lean_Json_getStr_x3f(v___x_1624_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
lean_dec(v_a_1623_);
lean_dec(v_a_1608_);
lean_dec(v_a_1596_);
lean_dec(v_a_1584_);
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1635_; 
v_a_1634_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1625_, 1);
v___x_1635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1635_, 0, v_a_1584_);
lean_ctor_set(v___x_1635_, 1, v_a_1596_);
lean_ctor_set(v___x_1635_, 2, v_a_1608_);
lean_ctor_set(v___x_1635_, 3, v_a_1623_);
lean_ctor_set(v___x_1635_, 4, v_a_1634_);
v_a_1565_ = v___x_1635_;
goto v___jp_1564_;
}
}
}
}
}
}
}
v___jp_1636_:
{
if (v___y_1637_ == 0)
{
lean_del_object(v___x_1524_);
v___y_1572_ = v___y_1638_;
goto v___jp_1571_;
}
else
{
if (v___y_1639_ == 0)
{
lean_del_object(v___x_1524_);
v___y_1572_ = v___y_1638_;
goto v___jp_1571_;
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1644_; 
lean_dec(v_val_1568_);
lean_dec(v_a_1509_);
lean_dec(v_v_1489_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v___x_1640_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_1641_ = l_Nat_reprFast(v___x_1569_);
v___x_1642_ = lean_string_append(v___x_1640_, v___x_1641_);
lean_dec_ref(v___x_1641_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set_tag(v___x_1524_, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1642_);
v___x_1644_ = v___x_1524_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
v___jp_1646_:
{
lean_object* v___x_1648_; uint8_t v___x_1649_; 
v___x_1648_ = lean_unsigned_to_nat(5u);
v___x_1649_ = lean_nat_dec_eq(v___x_1569_, v___x_1648_);
if (v___x_1649_ == 0)
{
uint8_t v___x_1650_; 
v___x_1650_ = 1;
v___y_1637_ = v___y_1647_;
v___y_1638_ = v___x_1649_;
v___y_1639_ = v___x_1650_;
goto v___jp_1636_;
}
else
{
uint8_t v___x_1651_; 
v___x_1651_ = 0;
v___y_1637_ = v___y_1647_;
v___y_1638_ = v___x_1649_;
v___y_1639_ = v___x_1651_;
goto v___jp_1636_;
}
}
}
v___jp_1527_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_1530_ = l_Lean_Json_getObjValAs_x3f___redArg(v_v_1489_, v___x_1526_, v___x_1529_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec(v_definition_x3f_1528_);
lean_dec(v_a_1509_);
lean_dec(v_m_1487_);
lean_dec_ref(v_toLocation_1486_);
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1530_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1530_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
else
{
lean_object* v_a_1539_; size_t v_sz_1540_; size_t v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_a_1539_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1530_, 1);
v_sz_1540_ = lean_array_size(v_a_1539_);
v___x_1541_ = ((size_t)0ULL);
v___x_1542_ = l_unsafeCast___redArg(v_a_1539_);
lean_dec(v_a_1539_);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1510_, v_toLocation_1486_, v_sz_1540_, v___x_1541_, v___x_1542_);
v___x_1544_ = l_unsafeCast___redArg(v___x_1543_);
lean_dec(v___x_1543_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec(v_definition_x3f_1528_);
lean_dec(v_a_1509_);
lean_dec(v_m_1487_);
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1544_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1544_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1563_; 
v_a_1553_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1555_ = v___x_1544_;
v_isShared_1556_ = v_isSharedCheck_1563_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1544_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1563_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1561_; 
v___x_1557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1557_, 0, v_definition_x3f_1528_);
lean_ctor_set(v___x_1557_, 1, v_a_1553_);
v___x_1558_ = ((lean_object*)(l_Lean_Lsp_instOrdRefIdent___closed__0));
v___x_1559_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_1558_, v_a_1509_, v___x_1557_, v_m_1487_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v___x_1559_);
v___x_1561_ = v___x_1555_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1559_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
v___jp_1564_:
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1566_, 0, v_a_1565_);
v_definition_x3f_1528_ = v___x_1566_;
goto v___jp_1527_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonModuleRefs___lam__0(lean_object* v___x_1656_, lean_object* v___f_1657_, lean_object* v_j_1658_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lean_Json_getObj_x3f(v_j_1658_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec_ref(v___f_1657_);
lean_dec_ref(v___x_1656_);
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v_a_1668_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1669_ = lean_box(1);
v___x_1670_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v___x_1656_, v___f_1657_, v___x_1669_, v_a_1668_);
return v___x_1670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(lean_object* v_j_1677_, lean_object* v_k_1678_){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = l_Lean_Json_getObjValD(v_j_1677_, v_k_1678_);
v___x_1680_ = l_Lean_Json_getNat_x3f(v___x_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0___boxed(lean_object* v_j_1681_, lean_object* v_k_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(v_j_1681_, v_k_1682_);
lean_dec_ref(v_k_1682_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(lean_object* v_j_1684_, lean_object* v_k_1685_){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = l_Lean_Json_getObjValD(v_j_1684_, v_k_1685_);
v___x_1687_ = l_Lean_Json_getBool_x3f(v___x_1686_);
lean_dec(v___x_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1___boxed(lean_object* v_j_1688_, lean_object* v_k_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_j_1688_, v_k_1689_);
lean_dec_ref(v_k_1689_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(size_t v_sz_1693_, size_t v_i_1694_, lean_object* v_bs_1695_){
_start:
{
uint8_t v___x_1698_; 
v___x_1698_ = lean_usize_dec_lt(v_i_1694_, v_sz_1693_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = l_unsafeCast___redArg(v_bs_1695_);
lean_dec_ref(v_bs_1695_);
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
return v___x_1700_;
}
else
{
lean_object* v_v_1701_; lean_object* v___x_1702_; 
v_v_1701_ = lean_array_uget_borrowed(v_bs_1695_, v_i_1694_);
v___x_1702_ = l_unsafeCast___redArg(v_v_1701_);
if (lean_obj_tag(v___x_1702_) == 4)
{
lean_object* v_elems_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; uint8_t v___x_1706_; 
v_elems_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc_ref(v_elems_1703_);
lean_dec_ref_known(v___x_1702_, 1);
v___x_1704_ = lean_array_get_size(v_elems_1703_);
v___x_1705_ = lean_unsigned_to_nat(4u);
v___x_1706_ = lean_nat_dec_eq(v___x_1704_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_dec_ref(v_elems_1703_);
lean_dec_ref(v_bs_1695_);
goto v___jp_1696_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_unsigned_to_nat(0u);
v___x_1708_ = lean_array_fget_borrowed(v_elems_1703_, v___x_1707_);
lean_inc(v___x_1708_);
v___x_1709_ = l_Lean_Json_getStr_x3f(v___x_1708_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec_ref(v_elems_1703_);
lean_dec_ref(v_bs_1695_);
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1709_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1709_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v_a_1718_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1718_);
lean_dec_ref_known(v___x_1709_, 1);
v___x_1719_ = lean_unsigned_to_nat(1u);
v___x_1720_ = lean_array_fget_borrowed(v_elems_1703_, v___x_1719_);
v___x_1721_ = l_Lean_Json_getBool_x3f(v___x_1720_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_a_1718_);
lean_dec_ref(v_elems_1703_);
lean_dec_ref(v_bs_1695_);
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1721_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1721_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_a_1730_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1721_, 1);
v___x_1731_ = lean_unsigned_to_nat(2u);
v___x_1732_ = lean_array_fget_borrowed(v_elems_1703_, v___x_1731_);
v___x_1733_ = l_Lean_Json_getBool_x3f(v___x_1732_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec(v_a_1730_);
lean_dec(v_a_1718_);
lean_dec_ref(v_elems_1703_);
lean_dec_ref(v_bs_1695_);
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1733_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_a_1742_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1733_, 1);
v___x_1743_ = lean_unsigned_to_nat(3u);
v___x_1744_ = lean_array_fget(v_elems_1703_, v___x_1743_);
lean_dec_ref(v_elems_1703_);
v___x_1745_ = l_Lean_Json_getBool_x3f(v___x_1744_);
lean_dec(v___x_1744_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec(v_a_1742_);
lean_dec(v_a_1730_);
lean_dec(v_a_1718_);
lean_dec_ref(v_bs_1695_);
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1745_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1745_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
else
{
lean_object* v_a_1754_; lean_object* v_bs_x27_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; uint8_t v___x_1758_; uint8_t v___x_1759_; size_t v___x_1760_; size_t v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v_a_1754_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1745_, 1);
v_bs_x27_1755_ = lean_array_uset(v_bs_1695_, v_i_1694_, v___x_1707_);
v___x_1756_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1756_, 0, v_a_1718_);
v___x_1757_ = lean_unbox(v_a_1730_);
lean_dec(v_a_1730_);
lean_ctor_set_uint8(v___x_1756_, sizeof(void*)*1, v___x_1757_);
v___x_1758_ = lean_unbox(v_a_1742_);
lean_dec(v_a_1742_);
lean_ctor_set_uint8(v___x_1756_, sizeof(void*)*1 + 1, v___x_1758_);
v___x_1759_ = lean_unbox(v_a_1754_);
lean_dec(v_a_1754_);
lean_ctor_set_uint8(v___x_1756_, sizeof(void*)*1 + 2, v___x_1759_);
v___x_1760_ = ((size_t)1ULL);
v___x_1761_ = lean_usize_add(v_i_1694_, v___x_1760_);
v___x_1762_ = l_unsafeCast___redArg(v___x_1756_);
lean_dec_ref_known(v___x_1756_, 1);
v___x_1763_ = lean_array_uset(v_bs_x27_1755_, v_i_1694_, v___x_1762_);
v_i_1694_ = v___x_1761_;
v_bs_1695_ = v___x_1763_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec(v___x_1702_);
lean_dec_ref(v_bs_1695_);
goto v___jp_1696_;
}
}
v___jp_1696_:
{
lean_object* v___x_1697_; 
v___x_1697_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0));
return v___x_1697_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_1765_, lean_object* v_i_1766_, lean_object* v_bs_1767_){
_start:
{
size_t v_sz_boxed_1768_; size_t v_i_boxed_1769_; lean_object* v_res_1770_; 
v_sz_boxed_1768_ = lean_unbox_usize(v_sz_1765_);
lean_dec(v_sz_1765_);
v_i_boxed_1769_ = lean_unbox_usize(v_i_1766_);
lean_dec(v_i_1766_);
v_res_1770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(v_sz_boxed_1768_, v_i_boxed_1769_, v_bs_1767_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2(lean_object* v_x_1773_){
_start:
{
if (lean_obj_tag(v_x_1773_) == 4)
{
lean_object* v_elems_1774_; size_t v_sz_1775_; size_t v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v_elems_1774_ = lean_ctor_get(v_x_1773_, 0);
lean_inc_ref(v_elems_1774_);
lean_dec_ref_known(v_x_1773_, 1);
v_sz_1775_ = lean_array_size(v_elems_1774_);
v___x_1776_ = ((size_t)0ULL);
v___x_1777_ = l_unsafeCast___redArg(v_elems_1774_);
lean_dec_ref(v_elems_1774_);
v___x_1778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(v_sz_1775_, v___x_1776_, v___x_1777_);
v___x_1779_ = l_unsafeCast___redArg(v___x_1778_);
lean_dec_ref(v___x_1778_);
return v___x_1779_;
}
else
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1780_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_1781_ = lean_unsigned_to_nat(80u);
v___x_1782_ = l_Lean_Json_pretty(v_x_1773_, v___x_1781_);
v___x_1783_ = lean_string_append(v___x_1780_, v___x_1782_);
lean_dec_ref(v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_1785_ = lean_string_append(v___x_1783_, v___x_1784_);
v___x_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1785_);
return v___x_1786_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(lean_object* v_j_1787_, lean_object* v_k_1788_){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = l_Lean_Json_getObjValD(v_j_1787_, v_k_1788_);
v___x_1790_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2(v___x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2___boxed(lean_object* v_j_1791_, lean_object* v_k_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(v_j_1791_, v_k_1792_);
lean_dec_ref(v_k_1792_);
return v_res_1793_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = 1;
v___x_1803_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4));
v___x_1804_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1803_, v___x_1802_);
return v___x_1804_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1806_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_1807_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5);
v___x_1808_ = lean_string_append(v___x_1807_, v___x_1806_);
return v___x_1808_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = 1;
v___x_1812_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8));
v___x_1813_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1812_, v___x_1811_);
return v___x_1813_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1814_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9);
v___x_1815_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7);
v___x_1816_ = lean_string_append(v___x_1815_, v___x_1814_);
return v___x_1816_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1818_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_1819_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10);
v___x_1820_ = lean_string_append(v___x_1819_, v___x_1818_);
return v___x_1820_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15(void){
_start:
{
uint8_t v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = 1;
v___x_1825_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14));
v___x_1826_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1825_, v___x_1824_);
return v___x_1826_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15);
v___x_1828_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7);
v___x_1829_ = lean_string_append(v___x_1828_, v___x_1827_);
return v___x_1829_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1830_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_1831_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16);
v___x_1832_ = lean_string_append(v___x_1831_, v___x_1830_);
return v___x_1832_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20(void){
_start:
{
uint8_t v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = 1;
v___x_1837_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19));
v___x_1838_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1837_, v___x_1836_);
return v___x_1838_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21(void){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1839_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20);
v___x_1840_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7);
v___x_1841_ = lean_string_append(v___x_1840_, v___x_1839_);
return v___x_1841_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_1843_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21);
v___x_1844_ = lean_string_append(v___x_1843_, v___x_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson(lean_object* v_json_1845_){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
lean_inc(v_json_1845_);
v___x_1847_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(v_json_1845_, v___x_1846_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v_json_1845_);
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1850_ = v___x_1847_;
v_isShared_1851_ = v_isSharedCheck_1857_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1847_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1857_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1852_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12);
v___x_1853_ = lean_string_append(v___x_1852_, v_a_1848_);
lean_dec(v_a_1848_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 0, v___x_1853_);
v___x_1855_ = v___x_1850_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1853_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
else
{
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_dec(v_json_1845_);
v_a_1858_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1847_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1847_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
lean_ctor_set_tag(v___x_1860_, 0);
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v_a_1866_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1847_, 1);
v___x_1867_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13));
lean_inc(v_json_1845_);
v___x_1868_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_json_1845_, v___x_1867_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1878_; 
lean_dec(v_a_1866_);
lean_dec(v_json_1845_);
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1871_ = v___x_1868_;
v_isShared_1872_ = v_isSharedCheck_1878_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1878_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1876_; 
v___x_1873_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17);
v___x_1874_ = lean_string_append(v___x_1873_, v_a_1869_);
lean_dec(v_a_1869_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1874_);
v___x_1876_ = v___x_1871_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1874_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
else
{
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
lean_dec(v_a_1866_);
lean_dec(v_json_1845_);
v_a_1879_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___x_1868_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1868_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
lean_ctor_set_tag(v___x_1881_, 0);
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_a_1887_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_a_1887_);
lean_dec_ref_known(v___x_1868_, 1);
v___x_1888_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18));
v___x_1889_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(v_json_1845_, v___x_1888_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1899_; 
lean_dec(v_a_1887_);
lean_dec(v_a_1866_);
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1892_ = v___x_1889_;
v_isShared_1893_ = v_isSharedCheck_1899_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1899_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1894_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22);
v___x_1895_ = lean_string_append(v___x_1894_, v_a_1890_);
lean_dec(v_a_1890_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 0, v___x_1895_);
v___x_1897_ = v___x_1892_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
else
{
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec(v_a_1887_);
lean_dec(v_a_1866_);
v_a_1900_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1889_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1889_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
lean_ctor_set_tag(v___x_1902_, 0);
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1917_; 
v_a_1908_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1910_ = v___x_1889_;
v_isShared_1911_ = v_isSharedCheck_1917_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1889_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1917_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1912_; uint8_t v___x_1913_; lean_object* v___x_1915_; 
v___x_1912_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1912_, 0, v_a_1866_);
lean_ctor_set(v___x_1912_, 1, v_a_1908_);
v___x_1913_ = lean_unbox(v_a_1887_);
lean_dec(v_a_1887_);
lean_ctor_set_uint8(v___x_1912_, sizeof(void*)*2, v___x_1913_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1912_);
v___x_1915_ = v___x_1910_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1912_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(size_t v_sz_1920_, size_t v_i_1921_, lean_object* v_bs_1922_){
_start:
{
uint8_t v___x_1923_; 
v___x_1923_ = lean_usize_dec_lt(v_i_1921_, v_sz_1920_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; 
v___x_1924_ = l_unsafeCast___redArg(v_bs_1922_);
lean_dec_ref(v_bs_1922_);
return v___x_1924_;
}
else
{
lean_object* v_v_1925_; lean_object* v___x_1926_; lean_object* v_module_1927_; uint8_t v_isPrivate_1928_; uint8_t v_isAll_1929_; uint8_t v_isMeta_1930_; lean_object* v___x_1931_; lean_object* v_bs_x27_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; size_t v___x_1944_; size_t v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_v_1925_ = lean_array_uget_borrowed(v_bs_1922_, v_i_1921_);
v___x_1926_ = l_unsafeCast___redArg(v_v_1925_);
v_module_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc_ref(v_module_1927_);
v_isPrivate_1928_ = lean_ctor_get_uint8(v___x_1926_, sizeof(void*)*1);
v_isAll_1929_ = lean_ctor_get_uint8(v___x_1926_, sizeof(void*)*1 + 1);
v_isMeta_1930_ = lean_ctor_get_uint8(v___x_1926_, sizeof(void*)*1 + 2);
lean_dec(v___x_1926_);
v___x_1931_ = lean_unsigned_to_nat(0u);
v_bs_x27_1932_ = lean_array_uset(v_bs_1922_, v_i_1921_, v___x_1931_);
v___x_1933_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1933_, 0, v_module_1927_);
v___x_1934_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1934_, 0, v_isPrivate_1928_);
v___x_1935_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1935_, 0, v_isAll_1929_);
v___x_1936_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1936_, 0, v_isMeta_1930_);
v___x_1937_ = lean_unsigned_to_nat(4u);
v___x_1938_ = lean_mk_empty_array_with_capacity(v___x_1937_);
v___x_1939_ = lean_array_push(v___x_1938_, v___x_1933_);
v___x_1940_ = lean_array_push(v___x_1939_, v___x_1934_);
v___x_1941_ = lean_array_push(v___x_1940_, v___x_1935_);
v___x_1942_ = lean_array_push(v___x_1941_, v___x_1936_);
v___x_1943_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
v___x_1944_ = ((size_t)1ULL);
v___x_1945_ = lean_usize_add(v_i_1921_, v___x_1944_);
v___x_1946_ = l_unsafeCast___redArg(v___x_1943_);
lean_dec_ref_known(v___x_1943_, 1);
v___x_1947_ = lean_array_uset(v_bs_x27_1932_, v_i_1921_, v___x_1946_);
v_i_1921_ = v___x_1945_;
v_bs_1922_ = v___x_1947_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1949_, lean_object* v_i_1950_, lean_object* v_bs_1951_){
_start:
{
size_t v_sz_boxed_1952_; size_t v_i_boxed_1953_; lean_object* v_res_1954_; 
v_sz_boxed_1952_ = lean_unbox_usize(v_sz_1949_);
lean_dec(v_sz_1949_);
v_i_boxed_1953_ = lean_unbox_usize(v_i_1950_);
lean_dec(v_i_1950_);
v_res_1954_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(v_sz_boxed_1952_, v_i_boxed_1953_, v_bs_1951_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(lean_object* v_a_1955_){
_start:
{
size_t v_sz_1956_; size_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v_sz_1956_ = lean_array_size(v_a_1955_);
v___x_1957_ = ((size_t)0ULL);
v___x_1958_ = l_unsafeCast___redArg(v_a_1955_);
v___x_1959_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(v_sz_1956_, v___x_1957_, v___x_1958_);
v___x_1960_ = l_unsafeCast___redArg(v___x_1959_);
lean_dec_ref(v___x_1959_);
v___x_1961_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0___boxed(lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(v_a_1962_);
lean_dec_ref(v_a_1962_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(lean_object* v_a_1964_, lean_object* v_a_1965_){
_start:
{
if (lean_obj_tag(v_a_1964_) == 0)
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_array_to_list(v_a_1965_);
return v___x_1966_;
}
else
{
lean_object* v_head_1967_; lean_object* v_tail_1968_; lean_object* v___x_1969_; 
v_head_1967_ = lean_ctor_get(v_a_1964_, 0);
lean_inc(v_head_1967_);
v_tail_1968_ = lean_ctor_get(v_a_1964_, 1);
lean_inc(v_tail_1968_);
lean_dec_ref_known(v_a_1964_, 2);
v___x_1969_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1965_, v_head_1967_);
v_a_1964_ = v_tail_1968_;
v_a_1965_ = v___x_1969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson(lean_object* v_x_1973_){
_start:
{
lean_object* v_version_1974_; uint8_t v_isSetupFailure_1975_; lean_object* v_directImports_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v_version_1974_ = lean_ctor_get(v_x_1973_, 0);
lean_inc(v_version_1974_);
v_isSetupFailure_1975_ = lean_ctor_get_uint8(v_x_1973_, sizeof(void*)*2);
v_directImports_1976_ = lean_ctor_get(v_x_1973_, 1);
lean_inc_ref(v_directImports_1976_);
lean_dec_ref(v_x_1973_);
v___x_1977_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
v___x_1978_ = l_Lean_JsonNumber_fromNat(v_version_1974_);
v___x_1979_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1977_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_box(0);
v___x_1982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1980_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13));
v___x_1984_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1984_, 0, v_isSetupFailure_1975_);
v___x_1985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1983_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
v___x_1986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1985_);
lean_ctor_set(v___x_1986_, 1, v___x_1981_);
v___x_1987_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18));
v___x_1988_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(v_directImports_1976_);
lean_dec_ref(v_directImports_1976_);
v___x_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1987_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
v___x_1990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1989_);
lean_ctor_set(v___x_1990_, 1, v___x_1981_);
v___x_1991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1990_);
lean_ctor_set(v___x_1991_, 1, v___x_1981_);
v___x_1992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1986_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
v___x_1993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1982_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
v___x_1994_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_1995_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_1993_, v___x_1994_);
v___x_1996_ = l_Lean_Json_mkObj(v___x_1995_);
lean_dec(v___x_1995_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6___redArg(lean_object* v_k_1999_, lean_object* v_v_2000_, lean_object* v_t_2001_){
_start:
{
if (lean_obj_tag(v_t_2001_) == 0)
{
lean_object* v_size_2002_; lean_object* v_k_2003_; lean_object* v_v_2004_; lean_object* v_l_2005_; lean_object* v_r_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2286_; 
v_size_2002_ = lean_ctor_get(v_t_2001_, 0);
v_k_2003_ = lean_ctor_get(v_t_2001_, 1);
v_v_2004_ = lean_ctor_get(v_t_2001_, 2);
v_l_2005_ = lean_ctor_get(v_t_2001_, 3);
v_r_2006_ = lean_ctor_get(v_t_2001_, 4);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_t_2001_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2008_ = v_t_2001_;
v_isShared_2009_ = v_isSharedCheck_2286_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_r_2006_);
lean_inc(v_l_2005_);
lean_inc(v_v_2004_);
lean_inc(v_k_2003_);
lean_inc(v_size_2002_);
lean_dec(v_t_2001_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2286_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
uint8_t v___x_2010_; 
v___x_2010_ = lean_string_compare(v_k_1999_, v_k_2003_);
switch(v___x_2010_)
{
case 0:
{
lean_object* v_impl_2011_; lean_object* v___x_2012_; 
lean_dec(v_size_2002_);
v_impl_2011_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6___redArg(v_k_1999_, v_v_2000_, v_l_2005_);
v___x_2012_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2006_) == 0)
{
lean_object* v_size_2013_; lean_object* v_size_2014_; lean_object* v_k_2015_; lean_object* v_v_2016_; lean_object* v_l_2017_; lean_object* v_r_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
v_size_2013_ = lean_ctor_get(v_r_2006_, 0);
v_size_2014_ = lean_ctor_get(v_impl_2011_, 0);
lean_inc(v_size_2014_);
v_k_2015_ = lean_ctor_get(v_impl_2011_, 1);
lean_inc(v_k_2015_);
v_v_2016_ = lean_ctor_get(v_impl_2011_, 2);
lean_inc(v_v_2016_);
v_l_2017_ = lean_ctor_get(v_impl_2011_, 3);
lean_inc(v_l_2017_);
v_r_2018_ = lean_ctor_get(v_impl_2011_, 4);
lean_inc(v_r_2018_);
v___x_2019_ = lean_unsigned_to_nat(3u);
v___x_2020_ = lean_nat_mul(v___x_2019_, v_size_2013_);
v___x_2021_ = lean_nat_dec_lt(v___x_2020_, v_size_2014_);
lean_dec(v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2025_; 
lean_dec(v_r_2018_);
lean_dec(v_l_2017_);
lean_dec(v_v_2016_);
lean_dec(v_k_2015_);
v___x_2022_ = lean_nat_add(v___x_2012_, v_size_2014_);
lean_dec(v_size_2014_);
v___x_2023_ = lean_nat_add(v___x_2022_, v_size_2013_);
lean_dec(v___x_2022_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 3, v_impl_2011_);
lean_ctor_set(v___x_2008_, 0, v___x_2023_);
v___x_2025_ = v___x_2008_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2023_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2026_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2026_, 3, v_impl_2011_);
lean_ctor_set(v_reuseFailAlloc_2026_, 4, v_r_2006_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
else
{
lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2092_; 
v_isSharedCheck_2092_ = !lean_is_exclusive(v_impl_2011_);
if (v_isSharedCheck_2092_ == 0)
{
lean_object* v_unused_2093_; lean_object* v_unused_2094_; lean_object* v_unused_2095_; lean_object* v_unused_2096_; lean_object* v_unused_2097_; 
v_unused_2093_ = lean_ctor_get(v_impl_2011_, 4);
lean_dec(v_unused_2093_);
v_unused_2094_ = lean_ctor_get(v_impl_2011_, 3);
lean_dec(v_unused_2094_);
v_unused_2095_ = lean_ctor_get(v_impl_2011_, 2);
lean_dec(v_unused_2095_);
v_unused_2096_ = lean_ctor_get(v_impl_2011_, 1);
lean_dec(v_unused_2096_);
v_unused_2097_ = lean_ctor_get(v_impl_2011_, 0);
lean_dec(v_unused_2097_);
v___x_2028_ = v_impl_2011_;
v_isShared_2029_ = v_isSharedCheck_2092_;
goto v_resetjp_2027_;
}
else
{
lean_dec(v_impl_2011_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2092_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v_size_2030_; lean_object* v_size_2031_; lean_object* v_k_2032_; lean_object* v_v_2033_; lean_object* v_l_2034_; lean_object* v_r_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; uint8_t v___x_2038_; 
v_size_2030_ = lean_ctor_get(v_l_2017_, 0);
v_size_2031_ = lean_ctor_get(v_r_2018_, 0);
v_k_2032_ = lean_ctor_get(v_r_2018_, 1);
v_v_2033_ = lean_ctor_get(v_r_2018_, 2);
v_l_2034_ = lean_ctor_get(v_r_2018_, 3);
v_r_2035_ = lean_ctor_get(v_r_2018_, 4);
v___x_2036_ = lean_unsigned_to_nat(2u);
v___x_2037_ = lean_nat_mul(v___x_2036_, v_size_2030_);
v___x_2038_ = lean_nat_dec_lt(v_size_2031_, v___x_2037_);
lean_dec(v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2067_; 
lean_inc(v_r_2035_);
lean_inc(v_l_2034_);
lean_inc(v_v_2033_);
lean_inc(v_k_2032_);
v_isSharedCheck_2067_ = !lean_is_exclusive(v_r_2018_);
if (v_isSharedCheck_2067_ == 0)
{
lean_object* v_unused_2068_; lean_object* v_unused_2069_; lean_object* v_unused_2070_; lean_object* v_unused_2071_; lean_object* v_unused_2072_; 
v_unused_2068_ = lean_ctor_get(v_r_2018_, 4);
lean_dec(v_unused_2068_);
v_unused_2069_ = lean_ctor_get(v_r_2018_, 3);
lean_dec(v_unused_2069_);
v_unused_2070_ = lean_ctor_get(v_r_2018_, 2);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_r_2018_, 1);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_r_2018_, 0);
lean_dec(v_unused_2072_);
v___x_2040_ = v_r_2018_;
v_isShared_2041_ = v_isSharedCheck_2067_;
goto v_resetjp_2039_;
}
else
{
lean_dec(v_r_2018_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2067_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___x_2055_; lean_object* v___y_2057_; 
v___x_2042_ = lean_nat_add(v___x_2012_, v_size_2014_);
lean_dec(v_size_2014_);
v___x_2043_ = lean_nat_add(v___x_2042_, v_size_2013_);
lean_dec(v___x_2042_);
v___x_2055_ = lean_nat_add(v___x_2012_, v_size_2030_);
if (lean_obj_tag(v_l_2034_) == 0)
{
lean_object* v_size_2065_; 
v_size_2065_ = lean_ctor_get(v_l_2034_, 0);
lean_inc(v_size_2065_);
v___y_2057_ = v_size_2065_;
goto v___jp_2056_;
}
else
{
lean_object* v___x_2066_; 
v___x_2066_ = lean_unsigned_to_nat(0u);
v___y_2057_ = v___x_2066_;
goto v___jp_2056_;
}
v___jp_2044_:
{
lean_object* v___x_2048_; lean_object* v___x_2050_; 
v___x_2048_ = lean_nat_add(v___y_2045_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec(v___y_2045_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 4, v_r_2006_);
lean_ctor_set(v___x_2040_, 3, v_r_2035_);
lean_ctor_set(v___x_2040_, 2, v_v_2004_);
lean_ctor_set(v___x_2040_, 1, v_k_2003_);
lean_ctor_set(v___x_2040_, 0, v___x_2048_);
v___x_2050_ = v___x_2040_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2048_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2054_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2054_, 3, v_r_2035_);
lean_ctor_set(v_reuseFailAlloc_2054_, 4, v_r_2006_);
v___x_2050_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2052_; 
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 4, v___x_2050_);
lean_ctor_set(v___x_2028_, 3, v___y_2046_);
lean_ctor_set(v___x_2028_, 2, v_v_2033_);
lean_ctor_set(v___x_2028_, 1, v_k_2032_);
lean_ctor_set(v___x_2028_, 0, v___x_2043_);
v___x_2052_ = v___x_2028_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_k_2032_);
lean_ctor_set(v_reuseFailAlloc_2053_, 2, v_v_2033_);
lean_ctor_set(v_reuseFailAlloc_2053_, 3, v___y_2046_);
lean_ctor_set(v_reuseFailAlloc_2053_, 4, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
v___jp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2058_ = lean_nat_add(v___x_2055_, v___y_2057_);
lean_dec(v___y_2057_);
lean_dec(v___x_2055_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v_l_2034_);
lean_ctor_set(v___x_2008_, 3, v_l_2017_);
lean_ctor_set(v___x_2008_, 2, v_v_2016_);
lean_ctor_set(v___x_2008_, 1, v_k_2015_);
lean_ctor_set(v___x_2008_, 0, v___x_2058_);
v___x_2060_ = v___x_2008_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2058_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_k_2015_);
lean_ctor_set(v_reuseFailAlloc_2064_, 2, v_v_2016_);
lean_ctor_set(v_reuseFailAlloc_2064_, 3, v_l_2017_);
lean_ctor_set(v_reuseFailAlloc_2064_, 4, v_l_2034_);
v___x_2060_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2061_; 
v___x_2061_ = lean_nat_add(v___x_2012_, v_size_2013_);
if (lean_obj_tag(v_r_2035_) == 0)
{
lean_object* v_size_2062_; 
v_size_2062_ = lean_ctor_get(v_r_2035_, 0);
lean_inc(v_size_2062_);
v___y_2045_ = v___x_2061_;
v___y_2046_ = v___x_2060_;
v___y_2047_ = v_size_2062_;
goto v___jp_2044_;
}
else
{
lean_object* v___x_2063_; 
v___x_2063_ = lean_unsigned_to_nat(0u);
v___y_2045_ = v___x_2061_;
v___y_2046_ = v___x_2060_;
v___y_2047_ = v___x_2063_;
goto v___jp_2044_;
}
}
}
}
}
else
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
lean_del_object(v___x_2008_);
v___x_2073_ = lean_nat_add(v___x_2012_, v_size_2014_);
lean_dec(v_size_2014_);
v___x_2074_ = lean_nat_add(v___x_2073_, v_size_2013_);
lean_dec(v___x_2073_);
v___x_2075_ = lean_nat_add(v___x_2012_, v_size_2013_);
v___x_2076_ = lean_nat_add(v___x_2075_, v_size_2031_);
lean_dec(v___x_2075_);
lean_inc_ref(v_r_2006_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 4, v_r_2006_);
lean_ctor_set(v___x_2028_, 3, v_r_2018_);
lean_ctor_set(v___x_2028_, 2, v_v_2004_);
lean_ctor_set(v___x_2028_, 1, v_k_2003_);
lean_ctor_set(v___x_2028_, 0, v___x_2076_);
v___x_2078_ = v___x_2028_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2076_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2091_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2091_, 3, v_r_2018_);
lean_ctor_set(v_reuseFailAlloc_2091_, 4, v_r_2006_);
v___x_2078_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
v_isSharedCheck_2085_ = !lean_is_exclusive(v_r_2006_);
if (v_isSharedCheck_2085_ == 0)
{
lean_object* v_unused_2086_; lean_object* v_unused_2087_; lean_object* v_unused_2088_; lean_object* v_unused_2089_; lean_object* v_unused_2090_; 
v_unused_2086_ = lean_ctor_get(v_r_2006_, 4);
lean_dec(v_unused_2086_);
v_unused_2087_ = lean_ctor_get(v_r_2006_, 3);
lean_dec(v_unused_2087_);
v_unused_2088_ = lean_ctor_get(v_r_2006_, 2);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v_r_2006_, 1);
lean_dec(v_unused_2089_);
v_unused_2090_ = lean_ctor_get(v_r_2006_, 0);
lean_dec(v_unused_2090_);
v___x_2080_ = v_r_2006_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_dec(v_r_2006_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 4, v___x_2078_);
lean_ctor_set(v___x_2080_, 3, v_l_2017_);
lean_ctor_set(v___x_2080_, 2, v_v_2016_);
lean_ctor_set(v___x_2080_, 1, v_k_2015_);
lean_ctor_set(v___x_2080_, 0, v___x_2074_);
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v_k_2015_);
lean_ctor_set(v_reuseFailAlloc_2084_, 2, v_v_2016_);
lean_ctor_set(v_reuseFailAlloc_2084_, 3, v_l_2017_);
lean_ctor_set(v_reuseFailAlloc_2084_, 4, v___x_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2098_; 
v_l_2098_ = lean_ctor_get(v_impl_2011_, 3);
lean_inc(v_l_2098_);
if (lean_obj_tag(v_l_2098_) == 0)
{
lean_object* v_r_2099_; lean_object* v_k_2100_; lean_object* v_v_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2112_; 
v_r_2099_ = lean_ctor_get(v_impl_2011_, 4);
v_k_2100_ = lean_ctor_get(v_impl_2011_, 1);
v_v_2101_ = lean_ctor_get(v_impl_2011_, 2);
v_isSharedCheck_2112_ = !lean_is_exclusive(v_impl_2011_);
if (v_isSharedCheck_2112_ == 0)
{
lean_object* v_unused_2113_; lean_object* v_unused_2114_; 
v_unused_2113_ = lean_ctor_get(v_impl_2011_, 3);
lean_dec(v_unused_2113_);
v_unused_2114_ = lean_ctor_get(v_impl_2011_, 0);
lean_dec(v_unused_2114_);
v___x_2103_ = v_impl_2011_;
v_isShared_2104_ = v_isSharedCheck_2112_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_r_2099_);
lean_inc(v_v_2101_);
lean_inc(v_k_2100_);
lean_dec(v_impl_2011_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2112_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2105_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2099_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 3, v_r_2099_);
lean_ctor_set(v___x_2103_, 2, v_v_2004_);
lean_ctor_set(v___x_2103_, 1, v_k_2003_);
lean_ctor_set(v___x_2103_, 0, v___x_2012_);
v___x_2107_ = v___x_2103_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2111_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2111_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2111_, 3, v_r_2099_);
lean_ctor_set(v_reuseFailAlloc_2111_, 4, v_r_2099_);
v___x_2107_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
lean_object* v___x_2109_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v___x_2107_);
lean_ctor_set(v___x_2008_, 3, v_l_2098_);
lean_ctor_set(v___x_2008_, 2, v_v_2101_);
lean_ctor_set(v___x_2008_, 1, v_k_2100_);
lean_ctor_set(v___x_2008_, 0, v___x_2105_);
v___x_2109_ = v___x_2008_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2105_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v_k_2100_);
lean_ctor_set(v_reuseFailAlloc_2110_, 2, v_v_2101_);
lean_ctor_set(v_reuseFailAlloc_2110_, 3, v_l_2098_);
lean_ctor_set(v_reuseFailAlloc_2110_, 4, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
else
{
lean_object* v_r_2115_; 
v_r_2115_ = lean_ctor_get(v_impl_2011_, 4);
lean_inc(v_r_2115_);
if (lean_obj_tag(v_r_2115_) == 0)
{
lean_object* v_k_2116_; lean_object* v_v_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2140_; 
v_k_2116_ = lean_ctor_get(v_impl_2011_, 1);
v_v_2117_ = lean_ctor_get(v_impl_2011_, 2);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_impl_2011_);
if (v_isSharedCheck_2140_ == 0)
{
lean_object* v_unused_2141_; lean_object* v_unused_2142_; lean_object* v_unused_2143_; 
v_unused_2141_ = lean_ctor_get(v_impl_2011_, 4);
lean_dec(v_unused_2141_);
v_unused_2142_ = lean_ctor_get(v_impl_2011_, 3);
lean_dec(v_unused_2142_);
v_unused_2143_ = lean_ctor_get(v_impl_2011_, 0);
lean_dec(v_unused_2143_);
v___x_2119_ = v_impl_2011_;
v_isShared_2120_ = v_isSharedCheck_2140_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_v_2117_);
lean_inc(v_k_2116_);
lean_dec(v_impl_2011_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2140_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v_k_2121_; lean_object* v_v_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2136_; 
v_k_2121_ = lean_ctor_get(v_r_2115_, 1);
v_v_2122_ = lean_ctor_get(v_r_2115_, 2);
v_isSharedCheck_2136_ = !lean_is_exclusive(v_r_2115_);
if (v_isSharedCheck_2136_ == 0)
{
lean_object* v_unused_2137_; lean_object* v_unused_2138_; lean_object* v_unused_2139_; 
v_unused_2137_ = lean_ctor_get(v_r_2115_, 4);
lean_dec(v_unused_2137_);
v_unused_2138_ = lean_ctor_get(v_r_2115_, 3);
lean_dec(v_unused_2138_);
v_unused_2139_ = lean_ctor_get(v_r_2115_, 0);
lean_dec(v_unused_2139_);
v___x_2124_ = v_r_2115_;
v_isShared_2125_ = v_isSharedCheck_2136_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_v_2122_);
lean_inc(v_k_2121_);
lean_dec(v_r_2115_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2136_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2126_ = lean_unsigned_to_nat(3u);
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 4, v_l_2098_);
lean_ctor_set(v___x_2124_, 3, v_l_2098_);
lean_ctor_set(v___x_2124_, 2, v_v_2117_);
lean_ctor_set(v___x_2124_, 1, v_k_2116_);
lean_ctor_set(v___x_2124_, 0, v___x_2012_);
v___x_2128_ = v___x_2124_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v_k_2116_);
lean_ctor_set(v_reuseFailAlloc_2135_, 2, v_v_2117_);
lean_ctor_set(v_reuseFailAlloc_2135_, 3, v_l_2098_);
lean_ctor_set(v_reuseFailAlloc_2135_, 4, v_l_2098_);
v___x_2128_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2130_; 
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 4, v_l_2098_);
lean_ctor_set(v___x_2119_, 2, v_v_2004_);
lean_ctor_set(v___x_2119_, 1, v_k_2003_);
lean_ctor_set(v___x_2119_, 0, v___x_2012_);
v___x_2130_ = v___x_2119_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2134_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2134_, 3, v_l_2098_);
lean_ctor_set(v_reuseFailAlloc_2134_, 4, v_l_2098_);
v___x_2130_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2132_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v___x_2130_);
lean_ctor_set(v___x_2008_, 3, v___x_2128_);
lean_ctor_set(v___x_2008_, 2, v_v_2122_);
lean_ctor_set(v___x_2008_, 1, v_k_2121_);
lean_ctor_set(v___x_2008_, 0, v___x_2126_);
v___x_2132_ = v___x_2008_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_k_2121_);
lean_ctor_set(v_reuseFailAlloc_2133_, 2, v_v_2122_);
lean_ctor_set(v_reuseFailAlloc_2133_, 3, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2133_, 4, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
}
}
else
{
lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2144_ = lean_unsigned_to_nat(2u);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v_r_2115_);
lean_ctor_set(v___x_2008_, 3, v_impl_2011_);
lean_ctor_set(v___x_2008_, 0, v___x_2144_);
v___x_2146_ = v___x_2008_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2147_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2147_, 3, v_impl_2011_);
lean_ctor_set(v_reuseFailAlloc_2147_, 4, v_r_2115_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
}
case 1:
{
lean_object* v___x_2149_; 
lean_dec(v_v_2004_);
lean_dec(v_k_2003_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 2, v_v_2000_);
lean_ctor_set(v___x_2008_, 1, v_k_1999_);
v___x_2149_ = v___x_2008_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_size_2002_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v_k_1999_);
lean_ctor_set(v_reuseFailAlloc_2150_, 2, v_v_2000_);
lean_ctor_set(v_reuseFailAlloc_2150_, 3, v_l_2005_);
lean_ctor_set(v_reuseFailAlloc_2150_, 4, v_r_2006_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
default: 
{
lean_object* v_impl_2151_; lean_object* v___x_2152_; 
lean_dec(v_size_2002_);
v_impl_2151_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6___redArg(v_k_1999_, v_v_2000_, v_r_2006_);
v___x_2152_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2005_) == 0)
{
lean_object* v_size_2153_; lean_object* v_size_2154_; lean_object* v_k_2155_; lean_object* v_v_2156_; lean_object* v_l_2157_; lean_object* v_r_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; uint8_t v___x_2161_; 
v_size_2153_ = lean_ctor_get(v_l_2005_, 0);
v_size_2154_ = lean_ctor_get(v_impl_2151_, 0);
lean_inc(v_size_2154_);
v_k_2155_ = lean_ctor_get(v_impl_2151_, 1);
lean_inc(v_k_2155_);
v_v_2156_ = lean_ctor_get(v_impl_2151_, 2);
lean_inc(v_v_2156_);
v_l_2157_ = lean_ctor_get(v_impl_2151_, 3);
lean_inc(v_l_2157_);
v_r_2158_ = lean_ctor_get(v_impl_2151_, 4);
lean_inc(v_r_2158_);
v___x_2159_ = lean_unsigned_to_nat(3u);
v___x_2160_ = lean_nat_mul(v___x_2159_, v_size_2153_);
v___x_2161_ = lean_nat_dec_lt(v___x_2160_, v_size_2154_);
lean_dec(v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2165_; 
lean_dec(v_r_2158_);
lean_dec(v_l_2157_);
lean_dec(v_v_2156_);
lean_dec(v_k_2155_);
v___x_2162_ = lean_nat_add(v___x_2152_, v_size_2153_);
v___x_2163_ = lean_nat_add(v___x_2162_, v_size_2154_);
lean_dec(v_size_2154_);
lean_dec(v___x_2162_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v_impl_2151_);
lean_ctor_set(v___x_2008_, 0, v___x_2163_);
v___x_2165_ = v___x_2008_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2166_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2166_, 3, v_l_2005_);
lean_ctor_set(v_reuseFailAlloc_2166_, 4, v_impl_2151_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
else
{
lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2230_; 
v_isSharedCheck_2230_ = !lean_is_exclusive(v_impl_2151_);
if (v_isSharedCheck_2230_ == 0)
{
lean_object* v_unused_2231_; lean_object* v_unused_2232_; lean_object* v_unused_2233_; lean_object* v_unused_2234_; lean_object* v_unused_2235_; 
v_unused_2231_ = lean_ctor_get(v_impl_2151_, 4);
lean_dec(v_unused_2231_);
v_unused_2232_ = lean_ctor_get(v_impl_2151_, 3);
lean_dec(v_unused_2232_);
v_unused_2233_ = lean_ctor_get(v_impl_2151_, 2);
lean_dec(v_unused_2233_);
v_unused_2234_ = lean_ctor_get(v_impl_2151_, 1);
lean_dec(v_unused_2234_);
v_unused_2235_ = lean_ctor_get(v_impl_2151_, 0);
lean_dec(v_unused_2235_);
v___x_2168_ = v_impl_2151_;
v_isShared_2169_ = v_isSharedCheck_2230_;
goto v_resetjp_2167_;
}
else
{
lean_dec(v_impl_2151_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2230_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v_size_2170_; lean_object* v_k_2171_; lean_object* v_v_2172_; lean_object* v_l_2173_; lean_object* v_r_2174_; lean_object* v_size_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; uint8_t v___x_2178_; 
v_size_2170_ = lean_ctor_get(v_l_2157_, 0);
v_k_2171_ = lean_ctor_get(v_l_2157_, 1);
v_v_2172_ = lean_ctor_get(v_l_2157_, 2);
v_l_2173_ = lean_ctor_get(v_l_2157_, 3);
v_r_2174_ = lean_ctor_get(v_l_2157_, 4);
v_size_2175_ = lean_ctor_get(v_r_2158_, 0);
v___x_2176_ = lean_unsigned_to_nat(2u);
v___x_2177_ = lean_nat_mul(v___x_2176_, v_size_2175_);
v___x_2178_ = lean_nat_dec_lt(v_size_2170_, v___x_2177_);
lean_dec(v___x_2177_);
if (v___x_2178_ == 0)
{
lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2206_; 
lean_inc(v_r_2174_);
lean_inc(v_l_2173_);
lean_inc(v_v_2172_);
lean_inc(v_k_2171_);
v_isSharedCheck_2206_ = !lean_is_exclusive(v_l_2157_);
if (v_isSharedCheck_2206_ == 0)
{
lean_object* v_unused_2207_; lean_object* v_unused_2208_; lean_object* v_unused_2209_; lean_object* v_unused_2210_; lean_object* v_unused_2211_; 
v_unused_2207_ = lean_ctor_get(v_l_2157_, 4);
lean_dec(v_unused_2207_);
v_unused_2208_ = lean_ctor_get(v_l_2157_, 3);
lean_dec(v_unused_2208_);
v_unused_2209_ = lean_ctor_get(v_l_2157_, 2);
lean_dec(v_unused_2209_);
v_unused_2210_ = lean_ctor_get(v_l_2157_, 1);
lean_dec(v_unused_2210_);
v_unused_2211_ = lean_ctor_get(v_l_2157_, 0);
lean_dec(v_unused_2211_);
v___x_2180_ = v_l_2157_;
v_isShared_2181_ = v_isSharedCheck_2206_;
goto v_resetjp_2179_;
}
else
{
lean_dec(v_l_2157_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2206_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___y_2185_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2196_; 
v___x_2182_ = lean_nat_add(v___x_2152_, v_size_2153_);
v___x_2183_ = lean_nat_add(v___x_2182_, v_size_2154_);
lean_dec(v_size_2154_);
if (lean_obj_tag(v_l_2173_) == 0)
{
lean_object* v_size_2204_; 
v_size_2204_ = lean_ctor_get(v_l_2173_, 0);
lean_inc(v_size_2204_);
v___y_2196_ = v_size_2204_;
goto v___jp_2195_;
}
else
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_unsigned_to_nat(0u);
v___y_2196_ = v___x_2205_;
goto v___jp_2195_;
}
v___jp_2184_:
{
lean_object* v___x_2188_; lean_object* v___x_2190_; 
v___x_2188_ = lean_nat_add(v___y_2185_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec(v___y_2185_);
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 4, v_r_2158_);
lean_ctor_set(v___x_2180_, 3, v_r_2174_);
lean_ctor_set(v___x_2180_, 2, v_v_2156_);
lean_ctor_set(v___x_2180_, 1, v_k_2155_);
lean_ctor_set(v___x_2180_, 0, v___x_2188_);
v___x_2190_ = v___x_2180_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v_k_2155_);
lean_ctor_set(v_reuseFailAlloc_2194_, 2, v_v_2156_);
lean_ctor_set(v_reuseFailAlloc_2194_, 3, v_r_2174_);
lean_ctor_set(v_reuseFailAlloc_2194_, 4, v_r_2158_);
v___x_2190_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2192_; 
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 4, v___x_2190_);
lean_ctor_set(v___x_2168_, 3, v___y_2186_);
lean_ctor_set(v___x_2168_, 2, v_v_2172_);
lean_ctor_set(v___x_2168_, 1, v_k_2171_);
lean_ctor_set(v___x_2168_, 0, v___x_2183_);
v___x_2192_ = v___x_2168_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2183_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_k_2171_);
lean_ctor_set(v_reuseFailAlloc_2193_, 2, v_v_2172_);
lean_ctor_set(v_reuseFailAlloc_2193_, 3, v___y_2186_);
lean_ctor_set(v_reuseFailAlloc_2193_, 4, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
v___jp_2195_:
{
lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2197_ = lean_nat_add(v___x_2182_, v___y_2196_);
lean_dec(v___y_2196_);
lean_dec(v___x_2182_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v_l_2173_);
lean_ctor_set(v___x_2008_, 0, v___x_2197_);
v___x_2199_ = v___x_2008_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2197_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2203_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2203_, 3, v_l_2005_);
lean_ctor_set(v_reuseFailAlloc_2203_, 4, v_l_2173_);
v___x_2199_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_nat_add(v___x_2152_, v_size_2175_);
if (lean_obj_tag(v_r_2174_) == 0)
{
lean_object* v_size_2201_; 
v_size_2201_ = lean_ctor_get(v_r_2174_, 0);
lean_inc(v_size_2201_);
v___y_2185_ = v___x_2200_;
v___y_2186_ = v___x_2199_;
v___y_2187_ = v_size_2201_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_unsigned_to_nat(0u);
v___y_2185_ = v___x_2200_;
v___y_2186_ = v___x_2199_;
v___y_2187_ = v___x_2202_;
goto v___jp_2184_;
}
}
}
}
}
else
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2216_; 
lean_del_object(v___x_2008_);
v___x_2212_ = lean_nat_add(v___x_2152_, v_size_2153_);
v___x_2213_ = lean_nat_add(v___x_2212_, v_size_2154_);
lean_dec(v_size_2154_);
v___x_2214_ = lean_nat_add(v___x_2212_, v_size_2170_);
lean_dec(v___x_2212_);
lean_inc_ref(v_l_2005_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 4, v_l_2157_);
lean_ctor_set(v___x_2168_, 3, v_l_2005_);
lean_ctor_set(v___x_2168_, 2, v_v_2004_);
lean_ctor_set(v___x_2168_, 1, v_k_2003_);
lean_ctor_set(v___x_2168_, 0, v___x_2214_);
v___x_2216_ = v___x_2168_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2214_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2229_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2229_, 3, v_l_2005_);
lean_ctor_set(v_reuseFailAlloc_2229_, 4, v_l_2157_);
v___x_2216_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
v_isSharedCheck_2223_ = !lean_is_exclusive(v_l_2005_);
if (v_isSharedCheck_2223_ == 0)
{
lean_object* v_unused_2224_; lean_object* v_unused_2225_; lean_object* v_unused_2226_; lean_object* v_unused_2227_; lean_object* v_unused_2228_; 
v_unused_2224_ = lean_ctor_get(v_l_2005_, 4);
lean_dec(v_unused_2224_);
v_unused_2225_ = lean_ctor_get(v_l_2005_, 3);
lean_dec(v_unused_2225_);
v_unused_2226_ = lean_ctor_get(v_l_2005_, 2);
lean_dec(v_unused_2226_);
v_unused_2227_ = lean_ctor_get(v_l_2005_, 1);
lean_dec(v_unused_2227_);
v_unused_2228_ = lean_ctor_get(v_l_2005_, 0);
lean_dec(v_unused_2228_);
v___x_2218_ = v_l_2005_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_dec(v_l_2005_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
lean_ctor_set(v___x_2218_, 4, v_r_2158_);
lean_ctor_set(v___x_2218_, 3, v___x_2216_);
lean_ctor_set(v___x_2218_, 2, v_v_2156_);
lean_ctor_set(v___x_2218_, 1, v_k_2155_);
lean_ctor_set(v___x_2218_, 0, v___x_2213_);
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2213_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_k_2155_);
lean_ctor_set(v_reuseFailAlloc_2222_, 2, v_v_2156_);
lean_ctor_set(v_reuseFailAlloc_2222_, 3, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2222_, 4, v_r_2158_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2236_; 
v_l_2236_ = lean_ctor_get(v_impl_2151_, 3);
lean_inc(v_l_2236_);
if (lean_obj_tag(v_l_2236_) == 0)
{
lean_object* v_r_2237_; lean_object* v_k_2238_; lean_object* v_v_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2262_; 
v_r_2237_ = lean_ctor_get(v_impl_2151_, 4);
v_k_2238_ = lean_ctor_get(v_impl_2151_, 1);
v_v_2239_ = lean_ctor_get(v_impl_2151_, 2);
v_isSharedCheck_2262_ = !lean_is_exclusive(v_impl_2151_);
if (v_isSharedCheck_2262_ == 0)
{
lean_object* v_unused_2263_; lean_object* v_unused_2264_; 
v_unused_2263_ = lean_ctor_get(v_impl_2151_, 3);
lean_dec(v_unused_2263_);
v_unused_2264_ = lean_ctor_get(v_impl_2151_, 0);
lean_dec(v_unused_2264_);
v___x_2241_ = v_impl_2151_;
v_isShared_2242_ = v_isSharedCheck_2262_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_r_2237_);
lean_inc(v_v_2239_);
lean_inc(v_k_2238_);
lean_dec(v_impl_2151_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2262_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v_k_2243_; lean_object* v_v_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2258_; 
v_k_2243_ = lean_ctor_get(v_l_2236_, 1);
v_v_2244_ = lean_ctor_get(v_l_2236_, 2);
v_isSharedCheck_2258_ = !lean_is_exclusive(v_l_2236_);
if (v_isSharedCheck_2258_ == 0)
{
lean_object* v_unused_2259_; lean_object* v_unused_2260_; lean_object* v_unused_2261_; 
v_unused_2259_ = lean_ctor_get(v_l_2236_, 4);
lean_dec(v_unused_2259_);
v_unused_2260_ = lean_ctor_get(v_l_2236_, 3);
lean_dec(v_unused_2260_);
v_unused_2261_ = lean_ctor_get(v_l_2236_, 0);
lean_dec(v_unused_2261_);
v___x_2246_ = v_l_2236_;
v_isShared_2247_ = v_isSharedCheck_2258_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_v_2244_);
lean_inc(v_k_2243_);
lean_dec(v_l_2236_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2258_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2248_; lean_object* v___x_2250_; 
v___x_2248_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2237_, 2);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 4, v_r_2237_);
lean_ctor_set(v___x_2246_, 3, v_r_2237_);
lean_ctor_set(v___x_2246_, 2, v_v_2004_);
lean_ctor_set(v___x_2246_, 1, v_k_2003_);
lean_ctor_set(v___x_2246_, 0, v___x_2152_);
v___x_2250_ = v___x_2246_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2257_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2257_, 3, v_r_2237_);
lean_ctor_set(v_reuseFailAlloc_2257_, 4, v_r_2237_);
v___x_2250_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
lean_object* v___x_2252_; 
lean_inc(v_r_2237_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 3, v_r_2237_);
lean_ctor_set(v___x_2241_, 0, v___x_2152_);
v___x_2252_ = v___x_2241_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_k_2238_);
lean_ctor_set(v_reuseFailAlloc_2256_, 2, v_v_2239_);
lean_ctor_set(v_reuseFailAlloc_2256_, 3, v_r_2237_);
lean_ctor_set(v_reuseFailAlloc_2256_, 4, v_r_2237_);
v___x_2252_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
lean_object* v___x_2254_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v___x_2252_);
lean_ctor_set(v___x_2008_, 3, v___x_2250_);
lean_ctor_set(v___x_2008_, 2, v_v_2244_);
lean_ctor_set(v___x_2008_, 1, v_k_2243_);
lean_ctor_set(v___x_2008_, 0, v___x_2248_);
v___x_2254_ = v___x_2008_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_k_2243_);
lean_ctor_set(v_reuseFailAlloc_2255_, 2, v_v_2244_);
lean_ctor_set(v_reuseFailAlloc_2255_, 3, v___x_2250_);
lean_ctor_set(v_reuseFailAlloc_2255_, 4, v___x_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
}
else
{
lean_object* v_r_2265_; 
v_r_2265_ = lean_ctor_get(v_impl_2151_, 4);
lean_inc(v_r_2265_);
if (lean_obj_tag(v_r_2265_) == 0)
{
lean_object* v_k_2266_; lean_object* v_v_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2278_; 
v_k_2266_ = lean_ctor_get(v_impl_2151_, 1);
v_v_2267_ = lean_ctor_get(v_impl_2151_, 2);
v_isSharedCheck_2278_ = !lean_is_exclusive(v_impl_2151_);
if (v_isSharedCheck_2278_ == 0)
{
lean_object* v_unused_2279_; lean_object* v_unused_2280_; lean_object* v_unused_2281_; 
v_unused_2279_ = lean_ctor_get(v_impl_2151_, 4);
lean_dec(v_unused_2279_);
v_unused_2280_ = lean_ctor_get(v_impl_2151_, 3);
lean_dec(v_unused_2280_);
v_unused_2281_ = lean_ctor_get(v_impl_2151_, 0);
lean_dec(v_unused_2281_);
v___x_2269_ = v_impl_2151_;
v_isShared_2270_ = v_isSharedCheck_2278_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_v_2267_);
lean_inc(v_k_2266_);
lean_dec(v_impl_2151_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2278_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v___x_2273_; 
v___x_2271_ = lean_unsigned_to_nat(3u);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 4, v_l_2236_);
lean_ctor_set(v___x_2269_, 2, v_v_2004_);
lean_ctor_set(v___x_2269_, 1, v_k_2003_);
lean_ctor_set(v___x_2269_, 0, v___x_2152_);
v___x_2273_ = v___x_2269_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2277_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2277_, 3, v_l_2236_);
lean_ctor_set(v_reuseFailAlloc_2277_, 4, v_l_2236_);
v___x_2273_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2275_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v_r_2265_);
lean_ctor_set(v___x_2008_, 3, v___x_2273_);
lean_ctor_set(v___x_2008_, 2, v_v_2267_);
lean_ctor_set(v___x_2008_, 1, v_k_2266_);
lean_ctor_set(v___x_2008_, 0, v___x_2271_);
v___x_2275_ = v___x_2008_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2271_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v_k_2266_);
lean_ctor_set(v_reuseFailAlloc_2276_, 2, v_v_2267_);
lean_ctor_set(v_reuseFailAlloc_2276_, 3, v___x_2273_);
lean_ctor_set(v_reuseFailAlloc_2276_, 4, v_r_2265_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
}
else
{
lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2282_ = lean_unsigned_to_nat(2u);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 4, v_impl_2151_);
lean_ctor_set(v___x_2008_, 3, v_r_2265_);
lean_ctor_set(v___x_2008_, 0, v___x_2282_);
v___x_2284_ = v___x_2008_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_k_2003_);
lean_ctor_set(v_reuseFailAlloc_2285_, 2, v_v_2004_);
lean_ctor_set(v_reuseFailAlloc_2285_, 3, v_r_2265_);
lean_ctor_set(v_reuseFailAlloc_2285_, 4, v_impl_2151_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
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
lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2287_ = lean_unsigned_to_nat(1u);
v___x_2288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
lean_ctor_set(v___x_2288_, 1, v_k_1999_);
lean_ctor_set(v___x_2288_, 2, v_v_2000_);
lean_ctor_set(v___x_2288_, 3, v_t_2001_);
lean_ctor_set(v___x_2288_, 4, v_t_2001_);
return v___x_2288_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__7(lean_object* v_init_2289_, lean_object* v_x_2290_){
_start:
{
if (lean_obj_tag(v_x_2290_) == 0)
{
lean_object* v_k_2291_; lean_object* v_v_2292_; lean_object* v_l_2293_; lean_object* v_r_2294_; lean_object* v___x_2295_; 
v_k_2291_ = lean_ctor_get(v_x_2290_, 1);
lean_inc(v_k_2291_);
v_v_2292_ = lean_ctor_get(v_x_2290_, 2);
lean_inc(v_v_2292_);
v_l_2293_ = lean_ctor_get(v_x_2290_, 3);
lean_inc(v_l_2293_);
v_r_2294_ = lean_ctor_get(v_x_2290_, 4);
lean_inc(v_r_2294_);
lean_dec_ref_known(v_x_2290_, 5);
v___x_2295_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__7(v_init_2289_, v_l_2293_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_dec(v_r_2294_);
lean_dec(v_v_2292_);
lean_dec(v_k_2291_);
return v___x_2295_;
}
else
{
if (lean_obj_tag(v_v_2292_) == 4)
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2410_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2298_ = v___x_2295_;
v_isShared_2299_ = v_isSharedCheck_2410_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2295_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2410_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v_elems_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; uint8_t v___x_2303_; 
v_elems_2300_ = lean_ctor_get(v_v_2292_, 0);
lean_inc_ref(v_elems_2300_);
lean_dec_ref_known(v_v_2292_, 1);
v___x_2301_ = lean_array_get_size(v_elems_2300_);
v___x_2302_ = lean_unsigned_to_nat(8u);
v___x_2303_ = lean_nat_dec_eq(v___x_2301_, v___x_2302_);
if (v___x_2303_ == 0)
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2308_; 
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v___x_2304_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0));
v___x_2305_ = l_Nat_reprFast(v___x_2301_);
v___x_2306_ = lean_string_append(v___x_2304_, v___x_2305_);
lean_dec_ref(v___x_2305_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set_tag(v___x_2298_, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2306_);
v___x_2308_ = v___x_2298_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
else
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
lean_del_object(v___x_2298_);
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2311_);
lean_inc(v___x_2312_);
v___x_2313_ = l_Lean_Json_getNat_x3f(v___x_2312_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v_a_2322_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2313_, 1);
v___x_2323_ = lean_unsigned_to_nat(1u);
v___x_2324_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2323_);
lean_inc(v___x_2324_);
v___x_2325_ = l_Lean_Json_getNat_x3f(v___x_2324_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
lean_dec(v_a_2322_);
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2328_ = v___x_2325_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2325_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
else
{
lean_object* v_a_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v_a_2334_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2325_, 1);
v___x_2335_ = lean_unsigned_to_nat(2u);
v___x_2336_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2335_);
lean_inc(v___x_2336_);
v___x_2337_ = l_Lean_Json_getNat_x3f(v___x_2336_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec(v_a_2334_);
lean_dec(v_a_2322_);
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2337_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2337_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_a_2346_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2337_, 1);
v___x_2347_ = lean_unsigned_to_nat(3u);
v___x_2348_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2347_);
lean_inc(v___x_2348_);
v___x_2349_ = l_Lean_Json_getNat_x3f(v___x_2348_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v_a_2346_);
lean_dec(v_a_2334_);
lean_dec(v_a_2322_);
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2349_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2349_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
v_a_2358_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2358_);
lean_dec_ref_known(v___x_2349_, 1);
v___x_2359_ = lean_unsigned_to_nat(4u);
v___x_2360_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2359_);
lean_inc(v___x_2360_);
v___x_2361_ = l_Lean_Json_getNat_x3f(v___x_2360_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
lean_dec(v_a_2358_);
lean_dec(v_a_2346_);
lean_dec(v_a_2334_);
lean_dec(v_a_2322_);
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v___x_2361_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2361_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2362_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v_a_2370_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2361_, 1);
v___x_2371_ = lean_unsigned_to_nat(5u);
v___x_2372_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2371_);
lean_inc(v___x_2372_);
v___x_2373_ = l_Lean_Json_getNat_x3f(v___x_2372_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_dec(v_a_2370_);
lean_dec(v_a_2358_);
lean_dec(v_a_2346_);
lean_dec(v_a_2334_);
lean_dec(v_a_2322_);
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v_a_2382_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2373_, 1);
v___x_2383_ = lean_unsigned_to_nat(6u);
v___x_2384_ = lean_array_get_borrowed(v___x_2310_, v_elems_2300_, v___x_2383_);
lean_inc(v___x_2384_);
v___x_2385_ = l_Lean_Json_getNat_x3f(v___x_2384_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_a_2382_);
lean_dec(v_a_2370_);
lean_dec(v_a_2358_);
lean_dec(v_a_2346_);
lean_dec(v_a_2334_);
lean_dec(v_a_2322_);
lean_dec_ref(v_elems_2300_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2385_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2385_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_a_2394_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2395_ = lean_unsigned_to_nat(7u);
v___x_2396_ = lean_array_get(v___x_2310_, v_elems_2300_, v___x_2395_);
lean_dec_ref(v_elems_2300_);
v___x_2397_ = l_Lean_Json_getNat_x3f(v___x_2396_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
lean_dec(v_a_2394_);
lean_dec(v_a_2382_);
lean_dec(v_a_2370_);
lean_dec(v_a_2358_);
lean_dec(v_a_2346_);
lean_dec(v_a_2334_);
lean_dec(v_a_2322_);
lean_dec(v_a_2296_);
lean_dec(v_r_2294_);
lean_dec(v_k_2291_);
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v_a_2406_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2397_, 1);
v___x_2407_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2407_, 0, v_a_2322_);
lean_ctor_set(v___x_2407_, 1, v_a_2334_);
lean_ctor_set(v___x_2407_, 2, v_a_2346_);
lean_ctor_set(v___x_2407_, 3, v_a_2358_);
lean_ctor_set(v___x_2407_, 4, v_a_2370_);
lean_ctor_set(v___x_2407_, 5, v_a_2382_);
lean_ctor_set(v___x_2407_, 6, v_a_2394_);
lean_ctor_set(v___x_2407_, 7, v_a_2406_);
v___x_2408_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6___redArg(v_k_2291_, v___x_2407_, v_a_2296_);
v_init_2289_ = v___x_2408_;
v_x_2290_ = v_r_2294_;
goto _start;
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
lean_object* v___x_2411_; 
lean_dec_ref_known(v___x_2295_, 1);
lean_dec(v_r_2294_);
lean_dec(v_v_2292_);
lean_dec(v_k_2291_);
v___x_2411_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDecls___lam__0___closed__0));
return v___x_2411_;
}
}
}
else
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2412_, 0, v_init_2289_);
return v___x_2412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(lean_object* v_j_2413_, lean_object* v_k_2414_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = l_Lean_Json_getObjValD(v_j_2413_, v_k_2414_);
v___x_2416_ = l_Lean_Json_getObj_x3f(v___x_2415_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2416_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2416_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v_a_2425_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2425_);
lean_dec_ref_known(v___x_2416_, 1);
v___x_2426_ = lean_box(1);
v___x_2427_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__7(v___x_2426_, v_a_2425_);
return v___x_2427_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1___boxed(lean_object* v_j_2428_, lean_object* v_k_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(v_j_2428_, v_k_2429_);
lean_dec_ref(v_k_2429_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__10(size_t v_sz_2431_, size_t v_i_2432_, lean_object* v_bs_2433_){
_start:
{
uint8_t v___x_2434_; 
v___x_2434_ = lean_usize_dec_lt(v_i_2432_, v_sz_2431_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = l_unsafeCast___redArg(v_bs_2433_);
lean_dec_ref(v_bs_2433_);
v___x_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
return v___x_2436_;
}
else
{
lean_object* v_v_2437_; lean_object* v___x_2438_; lean_object* v_bs_x27_2439_; lean_object* v___x_2440_; size_t v___x_2441_; size_t v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v_v_2437_ = lean_array_uget(v_bs_2433_, v_i_2432_);
v___x_2438_ = lean_unsigned_to_nat(0u);
v_bs_x27_2439_ = lean_array_uset(v_bs_2433_, v_i_2432_, v___x_2438_);
v___x_2440_ = l_unsafeCast___redArg(v_v_2437_);
lean_dec(v_v_2437_);
v___x_2441_ = ((size_t)1ULL);
v___x_2442_ = lean_usize_add(v_i_2432_, v___x_2441_);
v___x_2443_ = l_unsafeCast___redArg(v___x_2440_);
lean_dec(v___x_2440_);
v___x_2444_ = lean_array_uset(v_bs_x27_2439_, v_i_2432_, v___x_2443_);
v_i_2432_ = v___x_2442_;
v_bs_2433_ = v___x_2444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__10___boxed(lean_object* v_sz_2446_, lean_object* v_i_2447_, lean_object* v_bs_2448_){
_start:
{
size_t v_sz_boxed_2449_; size_t v_i_boxed_2450_; lean_object* v_res_2451_; 
v_sz_boxed_2449_ = lean_unbox_usize(v_sz_2446_);
lean_dec(v_sz_2446_);
v_i_boxed_2450_ = lean_unbox_usize(v_i_2447_);
lean_dec(v_i_2447_);
v_res_2451_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__10(v_sz_boxed_2449_, v_i_boxed_2450_, v_bs_2448_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_2452_){
_start:
{
if (lean_obj_tag(v_x_2452_) == 4)
{
lean_object* v_elems_2453_; size_t v_sz_2454_; size_t v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v_elems_2453_ = lean_ctor_get(v_x_2452_, 0);
lean_inc_ref(v_elems_2453_);
lean_dec_ref_known(v_x_2452_, 1);
v_sz_2454_ = lean_array_size(v_elems_2453_);
v___x_2455_ = ((size_t)0ULL);
v___x_2456_ = l_unsafeCast___redArg(v_elems_2453_);
lean_dec_ref(v_elems_2453_);
v___x_2457_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__10(v_sz_2454_, v___x_2455_, v___x_2456_);
v___x_2458_ = l_unsafeCast___redArg(v___x_2457_);
lean_dec_ref(v___x_2457_);
return v___x_2458_;
}
else
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2459_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_2460_ = lean_unsigned_to_nat(80u);
v___x_2461_ = l_Lean_Json_pretty(v_x_2452_, v___x_2460_);
v___x_2462_ = lean_string_append(v___x_2459_, v___x_2461_);
lean_dec_ref(v___x_2461_);
v___x_2463_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_2464_ = lean_string_append(v___x_2462_, v___x_2463_);
v___x_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
return v___x_2465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5(lean_object* v_x_2468_){
_start:
{
if (lean_obj_tag(v_x_2468_) == 0)
{
lean_object* v___x_2469_; 
v___x_2469_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5___closed__0));
return v___x_2469_;
}
else
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(v_x_2468_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2470_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2470_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2487_; 
v_a_2479_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2481_ = v___x_2470_;
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2470_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; lean_object* v___x_2485_; 
v___x_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2483_, 0, v_a_2479_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 0, v___x_2483_);
v___x_2485_ = v___x_2481_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(lean_object* v_j_2488_, lean_object* v_k_2489_){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2490_ = l_Lean_Json_getObjValD(v_j_2488_, v_k_2489_);
v___x_2491_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3_spec__5(v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3___boxed(lean_object* v_j_2492_, lean_object* v_k_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(v_j_2492_, v_k_2493_);
lean_dec_ref(v_k_2493_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___redArg(lean_object* v_k_2495_, lean_object* v_v_2496_, lean_object* v_t_2497_){
_start:
{
if (lean_obj_tag(v_t_2497_) == 0)
{
lean_object* v_size_2498_; lean_object* v_k_2499_; lean_object* v_v_2500_; lean_object* v_l_2501_; lean_object* v_r_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2782_; 
v_size_2498_ = lean_ctor_get(v_t_2497_, 0);
v_k_2499_ = lean_ctor_get(v_t_2497_, 1);
v_v_2500_ = lean_ctor_get(v_t_2497_, 2);
v_l_2501_ = lean_ctor_get(v_t_2497_, 3);
v_r_2502_ = lean_ctor_get(v_t_2497_, 4);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_t_2497_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2504_ = v_t_2497_;
v_isShared_2505_ = v_isSharedCheck_2782_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_r_2502_);
lean_inc(v_l_2501_);
lean_inc(v_v_2500_);
lean_inc(v_k_2499_);
lean_inc(v_size_2498_);
lean_dec(v_t_2497_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2782_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
uint8_t v___x_2506_; 
v___x_2506_ = l_Lean_Lsp_instOrdRefIdent_ord(v_k_2495_, v_k_2499_);
switch(v___x_2506_)
{
case 0:
{
lean_object* v_impl_2507_; lean_object* v___x_2508_; 
lean_dec(v_size_2498_);
v_impl_2507_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___redArg(v_k_2495_, v_v_2496_, v_l_2501_);
v___x_2508_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2502_) == 0)
{
lean_object* v_size_2509_; lean_object* v_size_2510_; lean_object* v_k_2511_; lean_object* v_v_2512_; lean_object* v_l_2513_; lean_object* v_r_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; uint8_t v___x_2517_; 
v_size_2509_ = lean_ctor_get(v_r_2502_, 0);
v_size_2510_ = lean_ctor_get(v_impl_2507_, 0);
lean_inc(v_size_2510_);
v_k_2511_ = lean_ctor_get(v_impl_2507_, 1);
lean_inc(v_k_2511_);
v_v_2512_ = lean_ctor_get(v_impl_2507_, 2);
lean_inc(v_v_2512_);
v_l_2513_ = lean_ctor_get(v_impl_2507_, 3);
lean_inc(v_l_2513_);
v_r_2514_ = lean_ctor_get(v_impl_2507_, 4);
lean_inc(v_r_2514_);
v___x_2515_ = lean_unsigned_to_nat(3u);
v___x_2516_ = lean_nat_mul(v___x_2515_, v_size_2509_);
v___x_2517_ = lean_nat_dec_lt(v___x_2516_, v_size_2510_);
lean_dec(v___x_2516_);
if (v___x_2517_ == 0)
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2521_; 
lean_dec(v_r_2514_);
lean_dec(v_l_2513_);
lean_dec(v_v_2512_);
lean_dec(v_k_2511_);
v___x_2518_ = lean_nat_add(v___x_2508_, v_size_2510_);
lean_dec(v_size_2510_);
v___x_2519_ = lean_nat_add(v___x_2518_, v_size_2509_);
lean_dec(v___x_2518_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 3, v_impl_2507_);
lean_ctor_set(v___x_2504_, 0, v___x_2519_);
v___x_2521_ = v___x_2504_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2519_);
lean_ctor_set(v_reuseFailAlloc_2522_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2522_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2522_, 3, v_impl_2507_);
lean_ctor_set(v_reuseFailAlloc_2522_, 4, v_r_2502_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
else
{
lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2588_; 
v_isSharedCheck_2588_ = !lean_is_exclusive(v_impl_2507_);
if (v_isSharedCheck_2588_ == 0)
{
lean_object* v_unused_2589_; lean_object* v_unused_2590_; lean_object* v_unused_2591_; lean_object* v_unused_2592_; lean_object* v_unused_2593_; 
v_unused_2589_ = lean_ctor_get(v_impl_2507_, 4);
lean_dec(v_unused_2589_);
v_unused_2590_ = lean_ctor_get(v_impl_2507_, 3);
lean_dec(v_unused_2590_);
v_unused_2591_ = lean_ctor_get(v_impl_2507_, 2);
lean_dec(v_unused_2591_);
v_unused_2592_ = lean_ctor_get(v_impl_2507_, 1);
lean_dec(v_unused_2592_);
v_unused_2593_ = lean_ctor_get(v_impl_2507_, 0);
lean_dec(v_unused_2593_);
v___x_2524_ = v_impl_2507_;
v_isShared_2525_ = v_isSharedCheck_2588_;
goto v_resetjp_2523_;
}
else
{
lean_dec(v_impl_2507_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2588_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v_size_2526_; lean_object* v_size_2527_; lean_object* v_k_2528_; lean_object* v_v_2529_; lean_object* v_l_2530_; lean_object* v_r_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; uint8_t v___x_2534_; 
v_size_2526_ = lean_ctor_get(v_l_2513_, 0);
v_size_2527_ = lean_ctor_get(v_r_2514_, 0);
v_k_2528_ = lean_ctor_get(v_r_2514_, 1);
v_v_2529_ = lean_ctor_get(v_r_2514_, 2);
v_l_2530_ = lean_ctor_get(v_r_2514_, 3);
v_r_2531_ = lean_ctor_get(v_r_2514_, 4);
v___x_2532_ = lean_unsigned_to_nat(2u);
v___x_2533_ = lean_nat_mul(v___x_2532_, v_size_2526_);
v___x_2534_ = lean_nat_dec_lt(v_size_2527_, v___x_2533_);
lean_dec(v___x_2533_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2563_; 
lean_inc(v_r_2531_);
lean_inc(v_l_2530_);
lean_inc(v_v_2529_);
lean_inc(v_k_2528_);
v_isSharedCheck_2563_ = !lean_is_exclusive(v_r_2514_);
if (v_isSharedCheck_2563_ == 0)
{
lean_object* v_unused_2564_; lean_object* v_unused_2565_; lean_object* v_unused_2566_; lean_object* v_unused_2567_; lean_object* v_unused_2568_; 
v_unused_2564_ = lean_ctor_get(v_r_2514_, 4);
lean_dec(v_unused_2564_);
v_unused_2565_ = lean_ctor_get(v_r_2514_, 3);
lean_dec(v_unused_2565_);
v_unused_2566_ = lean_ctor_get(v_r_2514_, 2);
lean_dec(v_unused_2566_);
v_unused_2567_ = lean_ctor_get(v_r_2514_, 1);
lean_dec(v_unused_2567_);
v_unused_2568_ = lean_ctor_get(v_r_2514_, 0);
lean_dec(v_unused_2568_);
v___x_2536_ = v_r_2514_;
v_isShared_2537_ = v_isSharedCheck_2563_;
goto v_resetjp_2535_;
}
else
{
lean_dec(v_r_2514_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2563_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___x_2551_; lean_object* v___y_2553_; 
v___x_2538_ = lean_nat_add(v___x_2508_, v_size_2510_);
lean_dec(v_size_2510_);
v___x_2539_ = lean_nat_add(v___x_2538_, v_size_2509_);
lean_dec(v___x_2538_);
v___x_2551_ = lean_nat_add(v___x_2508_, v_size_2526_);
if (lean_obj_tag(v_l_2530_) == 0)
{
lean_object* v_size_2561_; 
v_size_2561_ = lean_ctor_get(v_l_2530_, 0);
lean_inc(v_size_2561_);
v___y_2553_ = v_size_2561_;
goto v___jp_2552_;
}
else
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_unsigned_to_nat(0u);
v___y_2553_ = v___x_2562_;
goto v___jp_2552_;
}
v___jp_2540_:
{
lean_object* v___x_2544_; lean_object* v___x_2546_; 
v___x_2544_ = lean_nat_add(v___y_2541_, v___y_2543_);
lean_dec(v___y_2543_);
lean_dec(v___y_2541_);
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 4, v_r_2502_);
lean_ctor_set(v___x_2536_, 3, v_r_2531_);
lean_ctor_set(v___x_2536_, 2, v_v_2500_);
lean_ctor_set(v___x_2536_, 1, v_k_2499_);
lean_ctor_set(v___x_2536_, 0, v___x_2544_);
v___x_2546_ = v___x_2536_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v___x_2544_);
lean_ctor_set(v_reuseFailAlloc_2550_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2550_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2550_, 3, v_r_2531_);
lean_ctor_set(v_reuseFailAlloc_2550_, 4, v_r_2502_);
v___x_2546_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
lean_object* v___x_2548_; 
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 4, v___x_2546_);
lean_ctor_set(v___x_2524_, 3, v___y_2542_);
lean_ctor_set(v___x_2524_, 2, v_v_2529_);
lean_ctor_set(v___x_2524_, 1, v_k_2528_);
lean_ctor_set(v___x_2524_, 0, v___x_2539_);
v___x_2548_ = v___x_2524_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v___x_2539_);
lean_ctor_set(v_reuseFailAlloc_2549_, 1, v_k_2528_);
lean_ctor_set(v_reuseFailAlloc_2549_, 2, v_v_2529_);
lean_ctor_set(v_reuseFailAlloc_2549_, 3, v___y_2542_);
lean_ctor_set(v_reuseFailAlloc_2549_, 4, v___x_2546_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
v___jp_2552_:
{
lean_object* v___x_2554_; lean_object* v___x_2556_; 
v___x_2554_ = lean_nat_add(v___x_2551_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec(v___x_2551_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_l_2530_);
lean_ctor_set(v___x_2504_, 3, v_l_2513_);
lean_ctor_set(v___x_2504_, 2, v_v_2512_);
lean_ctor_set(v___x_2504_, 1, v_k_2511_);
lean_ctor_set(v___x_2504_, 0, v___x_2554_);
v___x_2556_ = v___x_2504_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2554_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_k_2511_);
lean_ctor_set(v_reuseFailAlloc_2560_, 2, v_v_2512_);
lean_ctor_set(v_reuseFailAlloc_2560_, 3, v_l_2513_);
lean_ctor_set(v_reuseFailAlloc_2560_, 4, v_l_2530_);
v___x_2556_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_nat_add(v___x_2508_, v_size_2509_);
if (lean_obj_tag(v_r_2531_) == 0)
{
lean_object* v_size_2558_; 
v_size_2558_ = lean_ctor_get(v_r_2531_, 0);
lean_inc(v_size_2558_);
v___y_2541_ = v___x_2557_;
v___y_2542_ = v___x_2556_;
v___y_2543_ = v_size_2558_;
goto v___jp_2540_;
}
else
{
lean_object* v___x_2559_; 
v___x_2559_ = lean_unsigned_to_nat(0u);
v___y_2541_ = v___x_2557_;
v___y_2542_ = v___x_2556_;
v___y_2543_ = v___x_2559_;
goto v___jp_2540_;
}
}
}
}
}
else
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2574_; 
lean_del_object(v___x_2504_);
v___x_2569_ = lean_nat_add(v___x_2508_, v_size_2510_);
lean_dec(v_size_2510_);
v___x_2570_ = lean_nat_add(v___x_2569_, v_size_2509_);
lean_dec(v___x_2569_);
v___x_2571_ = lean_nat_add(v___x_2508_, v_size_2509_);
v___x_2572_ = lean_nat_add(v___x_2571_, v_size_2527_);
lean_dec(v___x_2571_);
lean_inc_ref(v_r_2502_);
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 4, v_r_2502_);
lean_ctor_set(v___x_2524_, 3, v_r_2514_);
lean_ctor_set(v___x_2524_, 2, v_v_2500_);
lean_ctor_set(v___x_2524_, 1, v_k_2499_);
lean_ctor_set(v___x_2524_, 0, v___x_2572_);
v___x_2574_ = v___x_2524_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2572_);
lean_ctor_set(v_reuseFailAlloc_2587_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2587_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2587_, 3, v_r_2514_);
lean_ctor_set(v_reuseFailAlloc_2587_, 4, v_r_2502_);
v___x_2574_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
v_isSharedCheck_2581_ = !lean_is_exclusive(v_r_2502_);
if (v_isSharedCheck_2581_ == 0)
{
lean_object* v_unused_2582_; lean_object* v_unused_2583_; lean_object* v_unused_2584_; lean_object* v_unused_2585_; lean_object* v_unused_2586_; 
v_unused_2582_ = lean_ctor_get(v_r_2502_, 4);
lean_dec(v_unused_2582_);
v_unused_2583_ = lean_ctor_get(v_r_2502_, 3);
lean_dec(v_unused_2583_);
v_unused_2584_ = lean_ctor_get(v_r_2502_, 2);
lean_dec(v_unused_2584_);
v_unused_2585_ = lean_ctor_get(v_r_2502_, 1);
lean_dec(v_unused_2585_);
v_unused_2586_ = lean_ctor_get(v_r_2502_, 0);
lean_dec(v_unused_2586_);
v___x_2576_ = v_r_2502_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_dec(v_r_2502_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
lean_ctor_set(v___x_2576_, 4, v___x_2574_);
lean_ctor_set(v___x_2576_, 3, v_l_2513_);
lean_ctor_set(v___x_2576_, 2, v_v_2512_);
lean_ctor_set(v___x_2576_, 1, v_k_2511_);
lean_ctor_set(v___x_2576_, 0, v___x_2570_);
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2570_);
lean_ctor_set(v_reuseFailAlloc_2580_, 1, v_k_2511_);
lean_ctor_set(v_reuseFailAlloc_2580_, 2, v_v_2512_);
lean_ctor_set(v_reuseFailAlloc_2580_, 3, v_l_2513_);
lean_ctor_set(v_reuseFailAlloc_2580_, 4, v___x_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2594_; 
v_l_2594_ = lean_ctor_get(v_impl_2507_, 3);
lean_inc(v_l_2594_);
if (lean_obj_tag(v_l_2594_) == 0)
{
lean_object* v_r_2595_; lean_object* v_k_2596_; lean_object* v_v_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2608_; 
v_r_2595_ = lean_ctor_get(v_impl_2507_, 4);
v_k_2596_ = lean_ctor_get(v_impl_2507_, 1);
v_v_2597_ = lean_ctor_get(v_impl_2507_, 2);
v_isSharedCheck_2608_ = !lean_is_exclusive(v_impl_2507_);
if (v_isSharedCheck_2608_ == 0)
{
lean_object* v_unused_2609_; lean_object* v_unused_2610_; 
v_unused_2609_ = lean_ctor_get(v_impl_2507_, 3);
lean_dec(v_unused_2609_);
v_unused_2610_ = lean_ctor_get(v_impl_2507_, 0);
lean_dec(v_unused_2610_);
v___x_2599_ = v_impl_2507_;
v_isShared_2600_ = v_isSharedCheck_2608_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_r_2595_);
lean_inc(v_v_2597_);
lean_inc(v_k_2596_);
lean_dec(v_impl_2507_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2608_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2601_; lean_object* v___x_2603_; 
v___x_2601_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2595_);
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 3, v_r_2595_);
lean_ctor_set(v___x_2599_, 2, v_v_2500_);
lean_ctor_set(v___x_2599_, 1, v_k_2499_);
lean_ctor_set(v___x_2599_, 0, v___x_2508_);
v___x_2603_ = v___x_2599_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2607_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2607_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2607_, 3, v_r_2595_);
lean_ctor_set(v_reuseFailAlloc_2607_, 4, v_r_2595_);
v___x_2603_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
lean_object* v___x_2605_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v___x_2603_);
lean_ctor_set(v___x_2504_, 3, v_l_2594_);
lean_ctor_set(v___x_2504_, 2, v_v_2597_);
lean_ctor_set(v___x_2504_, 1, v_k_2596_);
lean_ctor_set(v___x_2504_, 0, v___x_2601_);
v___x_2605_ = v___x_2504_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2601_);
lean_ctor_set(v_reuseFailAlloc_2606_, 1, v_k_2596_);
lean_ctor_set(v_reuseFailAlloc_2606_, 2, v_v_2597_);
lean_ctor_set(v_reuseFailAlloc_2606_, 3, v_l_2594_);
lean_ctor_set(v_reuseFailAlloc_2606_, 4, v___x_2603_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
else
{
lean_object* v_r_2611_; 
v_r_2611_ = lean_ctor_get(v_impl_2507_, 4);
lean_inc(v_r_2611_);
if (lean_obj_tag(v_r_2611_) == 0)
{
lean_object* v_k_2612_; lean_object* v_v_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2636_; 
v_k_2612_ = lean_ctor_get(v_impl_2507_, 1);
v_v_2613_ = lean_ctor_get(v_impl_2507_, 2);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_impl_2507_);
if (v_isSharedCheck_2636_ == 0)
{
lean_object* v_unused_2637_; lean_object* v_unused_2638_; lean_object* v_unused_2639_; 
v_unused_2637_ = lean_ctor_get(v_impl_2507_, 4);
lean_dec(v_unused_2637_);
v_unused_2638_ = lean_ctor_get(v_impl_2507_, 3);
lean_dec(v_unused_2638_);
v_unused_2639_ = lean_ctor_get(v_impl_2507_, 0);
lean_dec(v_unused_2639_);
v___x_2615_ = v_impl_2507_;
v_isShared_2616_ = v_isSharedCheck_2636_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_v_2613_);
lean_inc(v_k_2612_);
lean_dec(v_impl_2507_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2636_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v_k_2617_; lean_object* v_v_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2632_; 
v_k_2617_ = lean_ctor_get(v_r_2611_, 1);
v_v_2618_ = lean_ctor_get(v_r_2611_, 2);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_r_2611_);
if (v_isSharedCheck_2632_ == 0)
{
lean_object* v_unused_2633_; lean_object* v_unused_2634_; lean_object* v_unused_2635_; 
v_unused_2633_ = lean_ctor_get(v_r_2611_, 4);
lean_dec(v_unused_2633_);
v_unused_2634_ = lean_ctor_get(v_r_2611_, 3);
lean_dec(v_unused_2634_);
v_unused_2635_ = lean_ctor_get(v_r_2611_, 0);
lean_dec(v_unused_2635_);
v___x_2620_ = v_r_2611_;
v_isShared_2621_ = v_isSharedCheck_2632_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_v_2618_);
lean_inc(v_k_2617_);
lean_dec(v_r_2611_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2632_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2622_; lean_object* v___x_2624_; 
v___x_2622_ = lean_unsigned_to_nat(3u);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 4, v_l_2594_);
lean_ctor_set(v___x_2620_, 3, v_l_2594_);
lean_ctor_set(v___x_2620_, 2, v_v_2613_);
lean_ctor_set(v___x_2620_, 1, v_k_2612_);
lean_ctor_set(v___x_2620_, 0, v___x_2508_);
v___x_2624_ = v___x_2620_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_k_2612_);
lean_ctor_set(v_reuseFailAlloc_2631_, 2, v_v_2613_);
lean_ctor_set(v_reuseFailAlloc_2631_, 3, v_l_2594_);
lean_ctor_set(v_reuseFailAlloc_2631_, 4, v_l_2594_);
v___x_2624_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
lean_object* v___x_2626_; 
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 4, v_l_2594_);
lean_ctor_set(v___x_2615_, 2, v_v_2500_);
lean_ctor_set(v___x_2615_, 1, v_k_2499_);
lean_ctor_set(v___x_2615_, 0, v___x_2508_);
v___x_2626_ = v___x_2615_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2630_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2630_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2630_, 3, v_l_2594_);
lean_ctor_set(v_reuseFailAlloc_2630_, 4, v_l_2594_);
v___x_2626_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2628_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v___x_2626_);
lean_ctor_set(v___x_2504_, 3, v___x_2624_);
lean_ctor_set(v___x_2504_, 2, v_v_2618_);
lean_ctor_set(v___x_2504_, 1, v_k_2617_);
lean_ctor_set(v___x_2504_, 0, v___x_2622_);
v___x_2628_ = v___x_2504_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v___x_2622_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v_k_2617_);
lean_ctor_set(v_reuseFailAlloc_2629_, 2, v_v_2618_);
lean_ctor_set(v_reuseFailAlloc_2629_, 3, v___x_2624_);
lean_ctor_set(v_reuseFailAlloc_2629_, 4, v___x_2626_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
}
}
else
{
lean_object* v___x_2640_; lean_object* v___x_2642_; 
v___x_2640_ = lean_unsigned_to_nat(2u);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_r_2611_);
lean_ctor_set(v___x_2504_, 3, v_impl_2507_);
lean_ctor_set(v___x_2504_, 0, v___x_2640_);
v___x_2642_ = v___x_2504_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v___x_2640_);
lean_ctor_set(v_reuseFailAlloc_2643_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2643_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2643_, 3, v_impl_2507_);
lean_ctor_set(v_reuseFailAlloc_2643_, 4, v_r_2611_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
}
case 1:
{
lean_object* v___x_2645_; 
lean_dec(v_v_2500_);
lean_dec(v_k_2499_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 2, v_v_2496_);
lean_ctor_set(v___x_2504_, 1, v_k_2495_);
v___x_2645_ = v___x_2504_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_size_2498_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v_k_2495_);
lean_ctor_set(v_reuseFailAlloc_2646_, 2, v_v_2496_);
lean_ctor_set(v_reuseFailAlloc_2646_, 3, v_l_2501_);
lean_ctor_set(v_reuseFailAlloc_2646_, 4, v_r_2502_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
default: 
{
lean_object* v_impl_2647_; lean_object* v___x_2648_; 
lean_dec(v_size_2498_);
v_impl_2647_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___redArg(v_k_2495_, v_v_2496_, v_r_2502_);
v___x_2648_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2501_) == 0)
{
lean_object* v_size_2649_; lean_object* v_size_2650_; lean_object* v_k_2651_; lean_object* v_v_2652_; lean_object* v_l_2653_; lean_object* v_r_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; 
v_size_2649_ = lean_ctor_get(v_l_2501_, 0);
v_size_2650_ = lean_ctor_get(v_impl_2647_, 0);
lean_inc(v_size_2650_);
v_k_2651_ = lean_ctor_get(v_impl_2647_, 1);
lean_inc(v_k_2651_);
v_v_2652_ = lean_ctor_get(v_impl_2647_, 2);
lean_inc(v_v_2652_);
v_l_2653_ = lean_ctor_get(v_impl_2647_, 3);
lean_inc(v_l_2653_);
v_r_2654_ = lean_ctor_get(v_impl_2647_, 4);
lean_inc(v_r_2654_);
v___x_2655_ = lean_unsigned_to_nat(3u);
v___x_2656_ = lean_nat_mul(v___x_2655_, v_size_2649_);
v___x_2657_ = lean_nat_dec_lt(v___x_2656_, v_size_2650_);
lean_dec(v___x_2656_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2661_; 
lean_dec(v_r_2654_);
lean_dec(v_l_2653_);
lean_dec(v_v_2652_);
lean_dec(v_k_2651_);
v___x_2658_ = lean_nat_add(v___x_2648_, v_size_2649_);
v___x_2659_ = lean_nat_add(v___x_2658_, v_size_2650_);
lean_dec(v_size_2650_);
lean_dec(v___x_2658_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_impl_2647_);
lean_ctor_set(v___x_2504_, 0, v___x_2659_);
v___x_2661_ = v___x_2504_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___x_2659_);
lean_ctor_set(v_reuseFailAlloc_2662_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2662_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2662_, 3, v_l_2501_);
lean_ctor_set(v_reuseFailAlloc_2662_, 4, v_impl_2647_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
else
{
lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2726_; 
v_isSharedCheck_2726_ = !lean_is_exclusive(v_impl_2647_);
if (v_isSharedCheck_2726_ == 0)
{
lean_object* v_unused_2727_; lean_object* v_unused_2728_; lean_object* v_unused_2729_; lean_object* v_unused_2730_; lean_object* v_unused_2731_; 
v_unused_2727_ = lean_ctor_get(v_impl_2647_, 4);
lean_dec(v_unused_2727_);
v_unused_2728_ = lean_ctor_get(v_impl_2647_, 3);
lean_dec(v_unused_2728_);
v_unused_2729_ = lean_ctor_get(v_impl_2647_, 2);
lean_dec(v_unused_2729_);
v_unused_2730_ = lean_ctor_get(v_impl_2647_, 1);
lean_dec(v_unused_2730_);
v_unused_2731_ = lean_ctor_get(v_impl_2647_, 0);
lean_dec(v_unused_2731_);
v___x_2664_ = v_impl_2647_;
v_isShared_2665_ = v_isSharedCheck_2726_;
goto v_resetjp_2663_;
}
else
{
lean_dec(v_impl_2647_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2726_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v_size_2666_; lean_object* v_k_2667_; lean_object* v_v_2668_; lean_object* v_l_2669_; lean_object* v_r_2670_; lean_object* v_size_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; uint8_t v___x_2674_; 
v_size_2666_ = lean_ctor_get(v_l_2653_, 0);
v_k_2667_ = lean_ctor_get(v_l_2653_, 1);
v_v_2668_ = lean_ctor_get(v_l_2653_, 2);
v_l_2669_ = lean_ctor_get(v_l_2653_, 3);
v_r_2670_ = lean_ctor_get(v_l_2653_, 4);
v_size_2671_ = lean_ctor_get(v_r_2654_, 0);
v___x_2672_ = lean_unsigned_to_nat(2u);
v___x_2673_ = lean_nat_mul(v___x_2672_, v_size_2671_);
v___x_2674_ = lean_nat_dec_lt(v_size_2666_, v___x_2673_);
lean_dec(v___x_2673_);
if (v___x_2674_ == 0)
{
lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2702_; 
lean_inc(v_r_2670_);
lean_inc(v_l_2669_);
lean_inc(v_v_2668_);
lean_inc(v_k_2667_);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_l_2653_);
if (v_isSharedCheck_2702_ == 0)
{
lean_object* v_unused_2703_; lean_object* v_unused_2704_; lean_object* v_unused_2705_; lean_object* v_unused_2706_; lean_object* v_unused_2707_; 
v_unused_2703_ = lean_ctor_get(v_l_2653_, 4);
lean_dec(v_unused_2703_);
v_unused_2704_ = lean_ctor_get(v_l_2653_, 3);
lean_dec(v_unused_2704_);
v_unused_2705_ = lean_ctor_get(v_l_2653_, 2);
lean_dec(v_unused_2705_);
v_unused_2706_ = lean_ctor_get(v_l_2653_, 1);
lean_dec(v_unused_2706_);
v_unused_2707_ = lean_ctor_get(v_l_2653_, 0);
lean_dec(v_unused_2707_);
v___x_2676_ = v_l_2653_;
v_isShared_2677_ = v_isSharedCheck_2702_;
goto v_resetjp_2675_;
}
else
{
lean_dec(v_l_2653_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2702_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2692_; 
v___x_2678_ = lean_nat_add(v___x_2648_, v_size_2649_);
v___x_2679_ = lean_nat_add(v___x_2678_, v_size_2650_);
lean_dec(v_size_2650_);
if (lean_obj_tag(v_l_2669_) == 0)
{
lean_object* v_size_2700_; 
v_size_2700_ = lean_ctor_get(v_l_2669_, 0);
lean_inc(v_size_2700_);
v___y_2692_ = v_size_2700_;
goto v___jp_2691_;
}
else
{
lean_object* v___x_2701_; 
v___x_2701_ = lean_unsigned_to_nat(0u);
v___y_2692_ = v___x_2701_;
goto v___jp_2691_;
}
v___jp_2680_:
{
lean_object* v___x_2684_; lean_object* v___x_2686_; 
v___x_2684_ = lean_nat_add(v___y_2681_, v___y_2683_);
lean_dec(v___y_2683_);
lean_dec(v___y_2681_);
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 4, v_r_2654_);
lean_ctor_set(v___x_2676_, 3, v_r_2670_);
lean_ctor_set(v___x_2676_, 2, v_v_2652_);
lean_ctor_set(v___x_2676_, 1, v_k_2651_);
lean_ctor_set(v___x_2676_, 0, v___x_2684_);
v___x_2686_ = v___x_2676_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2684_);
lean_ctor_set(v_reuseFailAlloc_2690_, 1, v_k_2651_);
lean_ctor_set(v_reuseFailAlloc_2690_, 2, v_v_2652_);
lean_ctor_set(v_reuseFailAlloc_2690_, 3, v_r_2670_);
lean_ctor_set(v_reuseFailAlloc_2690_, 4, v_r_2654_);
v___x_2686_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2688_; 
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 4, v___x_2686_);
lean_ctor_set(v___x_2664_, 3, v___y_2682_);
lean_ctor_set(v___x_2664_, 2, v_v_2668_);
lean_ctor_set(v___x_2664_, 1, v_k_2667_);
lean_ctor_set(v___x_2664_, 0, v___x_2679_);
v___x_2688_ = v___x_2664_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2679_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_k_2667_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v_v_2668_);
lean_ctor_set(v_reuseFailAlloc_2689_, 3, v___y_2682_);
lean_ctor_set(v_reuseFailAlloc_2689_, 4, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
v___jp_2691_:
{
lean_object* v___x_2693_; lean_object* v___x_2695_; 
v___x_2693_ = lean_nat_add(v___x_2678_, v___y_2692_);
lean_dec(v___y_2692_);
lean_dec(v___x_2678_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_l_2669_);
lean_ctor_set(v___x_2504_, 0, v___x_2693_);
v___x_2695_ = v___x_2504_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2693_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2699_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2699_, 3, v_l_2501_);
lean_ctor_set(v_reuseFailAlloc_2699_, 4, v_l_2669_);
v___x_2695_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_object* v___x_2696_; 
v___x_2696_ = lean_nat_add(v___x_2648_, v_size_2671_);
if (lean_obj_tag(v_r_2670_) == 0)
{
lean_object* v_size_2697_; 
v_size_2697_ = lean_ctor_get(v_r_2670_, 0);
lean_inc(v_size_2697_);
v___y_2681_ = v___x_2696_;
v___y_2682_ = v___x_2695_;
v___y_2683_ = v_size_2697_;
goto v___jp_2680_;
}
else
{
lean_object* v___x_2698_; 
v___x_2698_ = lean_unsigned_to_nat(0u);
v___y_2681_ = v___x_2696_;
v___y_2682_ = v___x_2695_;
v___y_2683_ = v___x_2698_;
goto v___jp_2680_;
}
}
}
}
}
else
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
lean_del_object(v___x_2504_);
v___x_2708_ = lean_nat_add(v___x_2648_, v_size_2649_);
v___x_2709_ = lean_nat_add(v___x_2708_, v_size_2650_);
lean_dec(v_size_2650_);
v___x_2710_ = lean_nat_add(v___x_2708_, v_size_2666_);
lean_dec(v___x_2708_);
lean_inc_ref(v_l_2501_);
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 4, v_l_2653_);
lean_ctor_set(v___x_2664_, 3, v_l_2501_);
lean_ctor_set(v___x_2664_, 2, v_v_2500_);
lean_ctor_set(v___x_2664_, 1, v_k_2499_);
lean_ctor_set(v___x_2664_, 0, v___x_2710_);
v___x_2712_ = v___x_2664_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2710_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2725_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2725_, 3, v_l_2501_);
lean_ctor_set(v_reuseFailAlloc_2725_, 4, v_l_2653_);
v___x_2712_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
v_isSharedCheck_2719_ = !lean_is_exclusive(v_l_2501_);
if (v_isSharedCheck_2719_ == 0)
{
lean_object* v_unused_2720_; lean_object* v_unused_2721_; lean_object* v_unused_2722_; lean_object* v_unused_2723_; lean_object* v_unused_2724_; 
v_unused_2720_ = lean_ctor_get(v_l_2501_, 4);
lean_dec(v_unused_2720_);
v_unused_2721_ = lean_ctor_get(v_l_2501_, 3);
lean_dec(v_unused_2721_);
v_unused_2722_ = lean_ctor_get(v_l_2501_, 2);
lean_dec(v_unused_2722_);
v_unused_2723_ = lean_ctor_get(v_l_2501_, 1);
lean_dec(v_unused_2723_);
v_unused_2724_ = lean_ctor_get(v_l_2501_, 0);
lean_dec(v_unused_2724_);
v___x_2714_ = v_l_2501_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_dec(v_l_2501_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 4, v_r_2654_);
lean_ctor_set(v___x_2714_, 3, v___x_2712_);
lean_ctor_set(v___x_2714_, 2, v_v_2652_);
lean_ctor_set(v___x_2714_, 1, v_k_2651_);
lean_ctor_set(v___x_2714_, 0, v___x_2709_);
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2709_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_k_2651_);
lean_ctor_set(v_reuseFailAlloc_2718_, 2, v_v_2652_);
lean_ctor_set(v_reuseFailAlloc_2718_, 3, v___x_2712_);
lean_ctor_set(v_reuseFailAlloc_2718_, 4, v_r_2654_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2732_; 
v_l_2732_ = lean_ctor_get(v_impl_2647_, 3);
lean_inc(v_l_2732_);
if (lean_obj_tag(v_l_2732_) == 0)
{
lean_object* v_r_2733_; lean_object* v_k_2734_; lean_object* v_v_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2758_; 
v_r_2733_ = lean_ctor_get(v_impl_2647_, 4);
v_k_2734_ = lean_ctor_get(v_impl_2647_, 1);
v_v_2735_ = lean_ctor_get(v_impl_2647_, 2);
v_isSharedCheck_2758_ = !lean_is_exclusive(v_impl_2647_);
if (v_isSharedCheck_2758_ == 0)
{
lean_object* v_unused_2759_; lean_object* v_unused_2760_; 
v_unused_2759_ = lean_ctor_get(v_impl_2647_, 3);
lean_dec(v_unused_2759_);
v_unused_2760_ = lean_ctor_get(v_impl_2647_, 0);
lean_dec(v_unused_2760_);
v___x_2737_ = v_impl_2647_;
v_isShared_2738_ = v_isSharedCheck_2758_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_r_2733_);
lean_inc(v_v_2735_);
lean_inc(v_k_2734_);
lean_dec(v_impl_2647_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2758_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v_k_2739_; lean_object* v_v_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2754_; 
v_k_2739_ = lean_ctor_get(v_l_2732_, 1);
v_v_2740_ = lean_ctor_get(v_l_2732_, 2);
v_isSharedCheck_2754_ = !lean_is_exclusive(v_l_2732_);
if (v_isSharedCheck_2754_ == 0)
{
lean_object* v_unused_2755_; lean_object* v_unused_2756_; lean_object* v_unused_2757_; 
v_unused_2755_ = lean_ctor_get(v_l_2732_, 4);
lean_dec(v_unused_2755_);
v_unused_2756_ = lean_ctor_get(v_l_2732_, 3);
lean_dec(v_unused_2756_);
v_unused_2757_ = lean_ctor_get(v_l_2732_, 0);
lean_dec(v_unused_2757_);
v___x_2742_ = v_l_2732_;
v_isShared_2743_ = v_isSharedCheck_2754_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_v_2740_);
lean_inc(v_k_2739_);
lean_dec(v_l_2732_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2754_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2744_; lean_object* v___x_2746_; 
v___x_2744_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2733_, 2);
if (v_isShared_2743_ == 0)
{
lean_ctor_set(v___x_2742_, 4, v_r_2733_);
lean_ctor_set(v___x_2742_, 3, v_r_2733_);
lean_ctor_set(v___x_2742_, 2, v_v_2500_);
lean_ctor_set(v___x_2742_, 1, v_k_2499_);
lean_ctor_set(v___x_2742_, 0, v___x_2648_);
v___x_2746_ = v___x_2742_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2753_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2753_, 3, v_r_2733_);
lean_ctor_set(v_reuseFailAlloc_2753_, 4, v_r_2733_);
v___x_2746_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2748_; 
lean_inc(v_r_2733_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 3, v_r_2733_);
lean_ctor_set(v___x_2737_, 0, v___x_2648_);
v___x_2748_ = v___x_2737_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2752_, 1, v_k_2734_);
lean_ctor_set(v_reuseFailAlloc_2752_, 2, v_v_2735_);
lean_ctor_set(v_reuseFailAlloc_2752_, 3, v_r_2733_);
lean_ctor_set(v_reuseFailAlloc_2752_, 4, v_r_2733_);
v___x_2748_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
lean_object* v___x_2750_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v___x_2748_);
lean_ctor_set(v___x_2504_, 3, v___x_2746_);
lean_ctor_set(v___x_2504_, 2, v_v_2740_);
lean_ctor_set(v___x_2504_, 1, v_k_2739_);
lean_ctor_set(v___x_2504_, 0, v___x_2744_);
v___x_2750_ = v___x_2504_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2744_);
lean_ctor_set(v_reuseFailAlloc_2751_, 1, v_k_2739_);
lean_ctor_set(v_reuseFailAlloc_2751_, 2, v_v_2740_);
lean_ctor_set(v_reuseFailAlloc_2751_, 3, v___x_2746_);
lean_ctor_set(v_reuseFailAlloc_2751_, 4, v___x_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
}
}
else
{
lean_object* v_r_2761_; 
v_r_2761_ = lean_ctor_get(v_impl_2647_, 4);
lean_inc(v_r_2761_);
if (lean_obj_tag(v_r_2761_) == 0)
{
lean_object* v_k_2762_; lean_object* v_v_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2774_; 
v_k_2762_ = lean_ctor_get(v_impl_2647_, 1);
v_v_2763_ = lean_ctor_get(v_impl_2647_, 2);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_impl_2647_);
if (v_isSharedCheck_2774_ == 0)
{
lean_object* v_unused_2775_; lean_object* v_unused_2776_; lean_object* v_unused_2777_; 
v_unused_2775_ = lean_ctor_get(v_impl_2647_, 4);
lean_dec(v_unused_2775_);
v_unused_2776_ = lean_ctor_get(v_impl_2647_, 3);
lean_dec(v_unused_2776_);
v_unused_2777_ = lean_ctor_get(v_impl_2647_, 0);
lean_dec(v_unused_2777_);
v___x_2765_ = v_impl_2647_;
v_isShared_2766_ = v_isSharedCheck_2774_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_v_2763_);
lean_inc(v_k_2762_);
lean_dec(v_impl_2647_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2774_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2767_; lean_object* v___x_2769_; 
v___x_2767_ = lean_unsigned_to_nat(3u);
if (v_isShared_2766_ == 0)
{
lean_ctor_set(v___x_2765_, 4, v_l_2732_);
lean_ctor_set(v___x_2765_, 2, v_v_2500_);
lean_ctor_set(v___x_2765_, 1, v_k_2499_);
lean_ctor_set(v___x_2765_, 0, v___x_2648_);
v___x_2769_ = v___x_2765_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2773_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2773_, 3, v_l_2732_);
lean_ctor_set(v_reuseFailAlloc_2773_, 4, v_l_2732_);
v___x_2769_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
lean_object* v___x_2771_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_r_2761_);
lean_ctor_set(v___x_2504_, 3, v___x_2769_);
lean_ctor_set(v___x_2504_, 2, v_v_2763_);
lean_ctor_set(v___x_2504_, 1, v_k_2762_);
lean_ctor_set(v___x_2504_, 0, v___x_2767_);
v___x_2771_ = v___x_2504_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2767_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v_k_2762_);
lean_ctor_set(v_reuseFailAlloc_2772_, 2, v_v_2763_);
lean_ctor_set(v_reuseFailAlloc_2772_, 3, v___x_2769_);
lean_ctor_set(v_reuseFailAlloc_2772_, 4, v_r_2761_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v___x_2778_; lean_object* v___x_2780_; 
v___x_2778_ = lean_unsigned_to_nat(2u);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_impl_2647_);
lean_ctor_set(v___x_2504_, 3, v_r_2761_);
lean_ctor_set(v___x_2504_, 0, v___x_2778_);
v___x_2780_ = v___x_2504_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2778_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_k_2499_);
lean_ctor_set(v_reuseFailAlloc_2781_, 2, v_v_2500_);
lean_ctor_set(v_reuseFailAlloc_2781_, 3, v_r_2761_);
lean_ctor_set(v_reuseFailAlloc_2781_, 4, v_impl_2647_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
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
lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = lean_unsigned_to_nat(1u);
v___x_2784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
lean_ctor_set(v___x_2784_, 1, v_k_2495_);
lean_ctor_set(v___x_2784_, 2, v_v_2496_);
lean_ctor_set(v___x_2784_, 3, v_t_2497_);
lean_ctor_set(v___x_2784_, 4, v_t_2497_);
return v___x_2784_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(size_t v_sz_2785_, size_t v_i_2786_, lean_object* v_bs_2787_){
_start:
{
uint8_t v___x_2788_; 
v___x_2788_ = lean_usize_dec_lt(v_i_2786_, v_sz_2785_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = l_unsafeCast___redArg(v_bs_2787_);
lean_dec_ref(v_bs_2787_);
v___x_2790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
return v___x_2790_;
}
else
{
lean_object* v_v_2791_; lean_object* v___x_2792_; lean_object* v_bs_x27_2793_; lean_object* v_a_2795_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; uint8_t v___y_2805_; uint8_t v___y_2869_; uint8_t v___y_2870_; uint8_t v___y_2871_; uint8_t v___y_2877_; uint8_t v___x_2881_; 
v_v_2791_ = lean_array_uget(v_bs_2787_, v_i_2786_);
v___x_2792_ = lean_unsigned_to_nat(0u);
v_bs_x27_2793_ = lean_array_uset(v_bs_2787_, v_i_2786_, v___x_2792_);
v___x_2801_ = l_unsafeCast___redArg(v_v_2791_);
lean_dec(v_v_2791_);
v___x_2802_ = lean_array_get_size(v___x_2801_);
v___x_2803_ = lean_unsigned_to_nat(4u);
v___x_2881_ = lean_nat_dec_eq(v___x_2802_, v___x_2803_);
if (v___x_2881_ == 0)
{
v___y_2877_ = v___x_2788_;
goto v___jp_2876_;
}
else
{
uint8_t v___x_2882_; 
v___x_2882_ = 0;
v___y_2877_ = v___x_2882_;
goto v___jp_2876_;
}
v___jp_2794_:
{
size_t v___x_2796_; size_t v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2796_ = ((size_t)1ULL);
v___x_2797_ = lean_usize_add(v_i_2786_, v___x_2796_);
v___x_2798_ = l_unsafeCast___redArg(v_a_2795_);
lean_dec_ref(v_a_2795_);
v___x_2799_ = lean_array_uset(v_bs_x27_2793_, v_i_2786_, v___x_2798_);
v_i_2786_ = v___x_2797_;
v_bs_2787_ = v___x_2799_;
goto _start;
}
v___jp_2804_:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = lean_array_fget(v___x_2801_, v___x_2792_);
v___x_2807_ = l_Lean_Json_getNat_x3f(v___x_2806_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
lean_dec(v___x_2801_);
lean_dec_ref(v_bs_x27_2793_);
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2807_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2807_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v_a_2816_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2817_ = lean_unsigned_to_nat(1u);
v___x_2818_ = lean_array_fget(v___x_2801_, v___x_2817_);
v___x_2819_ = l_Lean_Json_getNat_x3f(v___x_2818_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec(v_a_2816_);
lean_dec(v___x_2801_);
lean_dec_ref(v_bs_x27_2793_);
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2819_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2819_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v_a_2828_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2828_);
lean_dec_ref_known(v___x_2819_, 1);
v___x_2829_ = lean_unsigned_to_nat(2u);
v___x_2830_ = lean_array_fget(v___x_2801_, v___x_2829_);
v___x_2831_ = l_Lean_Json_getNat_x3f(v___x_2830_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_dec(v_a_2828_);
lean_dec(v_a_2816_);
lean_dec(v___x_2801_);
lean_dec_ref(v_bs_x27_2793_);
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2831_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2831_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v_a_2840_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2840_);
lean_dec_ref_known(v___x_2831_, 1);
v___x_2841_ = lean_unsigned_to_nat(3u);
v___x_2842_ = lean_array_fget(v___x_2801_, v___x_2841_);
v___x_2843_ = l_Lean_Json_getNat_x3f(v___x_2842_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_dec(v_a_2840_);
lean_dec(v_a_2828_);
lean_dec(v_a_2816_);
lean_dec(v___x_2801_);
lean_dec_ref(v_bs_x27_2793_);
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2843_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2843_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
else
{
if (v___y_2805_ == 0)
{
lean_object* v_a_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
lean_dec(v___x_2801_);
v_a_2852_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2852_);
lean_dec_ref_known(v___x_2843_, 1);
v___x_2853_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_2854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2854_, 0, v_a_2816_);
lean_ctor_set(v___x_2854_, 1, v_a_2828_);
lean_ctor_set(v___x_2854_, 2, v_a_2840_);
lean_ctor_set(v___x_2854_, 3, v_a_2852_);
lean_ctor_set(v___x_2854_, 4, v___x_2853_);
v_a_2795_ = v___x_2854_;
goto v___jp_2794_;
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v_a_2855_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2855_);
lean_dec_ref_known(v___x_2843_, 1);
v___x_2856_ = lean_array_fget(v___x_2801_, v___x_2803_);
lean_dec(v___x_2801_);
v___x_2857_ = l_Lean_Json_getStr_x3f(v___x_2856_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2865_; 
lean_dec(v_a_2855_);
lean_dec(v_a_2840_);
lean_dec(v_a_2828_);
lean_dec(v_a_2816_);
lean_dec_ref(v_bs_x27_2793_);
v_a_2858_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2860_ = v___x_2857_;
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v___x_2857_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
if (v_isShared_2861_ == 0)
{
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_a_2858_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2867_; 
v_a_2866_ = lean_ctor_get(v___x_2857_, 0);
lean_inc(v_a_2866_);
lean_dec_ref_known(v___x_2857_, 1);
v___x_2867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2867_, 0, v_a_2816_);
lean_ctor_set(v___x_2867_, 1, v_a_2828_);
lean_ctor_set(v___x_2867_, 2, v_a_2840_);
lean_ctor_set(v___x_2867_, 3, v_a_2855_);
lean_ctor_set(v___x_2867_, 4, v_a_2866_);
v_a_2795_ = v___x_2867_;
goto v___jp_2794_;
}
}
}
}
}
}
}
v___jp_2868_:
{
if (v___y_2869_ == 0)
{
v___y_2805_ = v___y_2870_;
goto v___jp_2804_;
}
else
{
if (v___y_2871_ == 0)
{
v___y_2805_ = v___y_2870_;
goto v___jp_2804_;
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
lean_dec(v___x_2801_);
lean_dec_ref(v_bs_x27_2793_);
v___x_2872_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_2873_ = l_Nat_reprFast(v___x_2802_);
v___x_2874_ = lean_string_append(v___x_2872_, v___x_2873_);
lean_dec_ref(v___x_2873_);
v___x_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
return v___x_2875_;
}
}
}
v___jp_2876_:
{
lean_object* v___x_2878_; uint8_t v___x_2879_; 
v___x_2878_ = lean_unsigned_to_nat(5u);
v___x_2879_ = lean_nat_dec_eq(v___x_2802_, v___x_2878_);
if (v___x_2879_ == 0)
{
v___y_2869_ = v___y_2877_;
v___y_2870_ = v___x_2879_;
v___y_2871_ = v___x_2788_;
goto v___jp_2868_;
}
else
{
uint8_t v___x_2880_; 
v___x_2880_ = 0;
v___y_2869_ = v___y_2877_;
v___y_2870_ = v___x_2879_;
v___y_2871_ = v___x_2880_;
goto v___jp_2868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1___boxed(lean_object* v_sz_2883_, lean_object* v_i_2884_, lean_object* v_bs_2885_){
_start:
{
size_t v_sz_boxed_2886_; size_t v_i_boxed_2887_; lean_object* v_res_2888_; 
v_sz_boxed_2886_ = lean_unbox_usize(v_sz_2883_);
lean_dec(v_sz_2883_);
v_i_boxed_2887_ = lean_unbox_usize(v_i_2884_);
lean_dec(v_i_2884_);
v_res_2888_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(v_sz_boxed_2886_, v_i_boxed_2887_, v_bs_2885_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(size_t v_sz_2889_, size_t v_i_2890_, lean_object* v_bs_2891_){
_start:
{
uint8_t v___x_2892_; 
v___x_2892_ = lean_usize_dec_lt(v_i_2890_, v_sz_2889_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2893_ = l_unsafeCast___redArg(v_bs_2891_);
lean_dec_ref(v_bs_2891_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
else
{
lean_object* v_v_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v_v_2895_ = lean_array_uget_borrowed(v_bs_2891_, v_i_2890_);
v___x_2896_ = l_unsafeCast___redArg(v_v_2895_);
v___x_2897_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(v___x_2896_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2905_; 
lean_dec_ref(v_bs_2891_);
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2900_ = v___x_2897_;
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2897_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v_a_2898_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2907_; lean_object* v_bs_x27_2908_; size_t v___x_2909_; size_t v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_a_2906_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2897_, 1);
v___x_2907_ = lean_unsigned_to_nat(0u);
v_bs_x27_2908_ = lean_array_uset(v_bs_2891_, v_i_2890_, v___x_2907_);
v___x_2909_ = ((size_t)1ULL);
v___x_2910_ = lean_usize_add(v_i_2890_, v___x_2909_);
v___x_2911_ = l_unsafeCast___redArg(v_a_2906_);
lean_dec(v_a_2906_);
v___x_2912_ = lean_array_uset(v_bs_x27_2908_, v_i_2890_, v___x_2911_);
v_i_2890_ = v___x_2910_;
v_bs_2891_ = v___x_2912_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_sz_2914_, lean_object* v_i_2915_, lean_object* v_bs_2916_){
_start:
{
size_t v_sz_boxed_2917_; size_t v_i_boxed_2918_; lean_object* v_res_2919_; 
v_sz_boxed_2917_ = lean_unbox_usize(v_sz_2914_);
lean_dec(v_sz_2914_);
v_i_boxed_2918_ = lean_unbox_usize(v_i_2915_);
lean_dec(v_i_2915_);
v_res_2919_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_boxed_2917_, v_i_boxed_2918_, v_bs_2916_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_2920_){
_start:
{
if (lean_obj_tag(v_x_2920_) == 4)
{
lean_object* v_elems_2921_; size_t v_sz_2922_; size_t v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; 
v_elems_2921_ = lean_ctor_get(v_x_2920_, 0);
lean_inc_ref(v_elems_2921_);
lean_dec_ref_known(v_x_2920_, 1);
v_sz_2922_ = lean_array_size(v_elems_2921_);
v___x_2923_ = ((size_t)0ULL);
v___x_2924_ = l_unsafeCast___redArg(v_elems_2921_);
lean_dec_ref(v_elems_2921_);
v___x_2925_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_2922_, v___x_2923_, v___x_2924_);
v___x_2926_ = l_unsafeCast___redArg(v___x_2925_);
lean_dec_ref(v___x_2925_);
return v___x_2926_;
}
else
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2927_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_2928_ = lean_unsigned_to_nat(80u);
v___x_2929_ = l_Lean_Json_pretty(v_x_2920_, v___x_2928_);
v___x_2930_ = lean_string_append(v___x_2927_, v___x_2929_);
lean_dec_ref(v___x_2929_);
v___x_2931_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_2932_ = lean_string_append(v___x_2930_, v___x_2931_);
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
return v___x_2933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(lean_object* v_j_2934_, lean_object* v_k_2935_){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2936_ = l_Lean_Json_getObjValD(v_j_2934_, v_k_2935_);
v___x_2937_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1(v___x_2936_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0___boxed(lean_object* v_j_2938_, lean_object* v_k_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(v_j_2938_, v_k_2939_);
lean_dec_ref(v_k_2939_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__4(lean_object* v_init_2941_, lean_object* v_x_2942_){
_start:
{
if (lean_obj_tag(v_x_2942_) == 0)
{
lean_object* v_k_2943_; lean_object* v_v_2944_; lean_object* v_l_2945_; lean_object* v_r_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_3118_; 
v_k_2943_ = lean_ctor_get(v_x_2942_, 1);
v_v_2944_ = lean_ctor_get(v_x_2942_, 2);
v_l_2945_ = lean_ctor_get(v_x_2942_, 3);
v_r_2946_ = lean_ctor_get(v_x_2942_, 4);
v_isSharedCheck_3118_ = !lean_is_exclusive(v_x_2942_);
if (v_isSharedCheck_3118_ == 0)
{
lean_object* v_unused_3119_; 
v_unused_3119_ = lean_ctor_get(v_x_2942_, 0);
lean_dec(v_unused_3119_);
v___x_2948_ = v_x_2942_;
v_isShared_2949_ = v_isSharedCheck_3118_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_r_2946_);
lean_inc(v_l_2945_);
lean_inc(v_v_2944_);
lean_inc(v_k_2943_);
lean_dec(v_x_2942_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_3118_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2950_; 
v___x_2950_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__4(v_init_2941_, v_l_2945_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
lean_dec(v_k_2943_);
return v___x_2950_;
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_3117_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_2953_ = v___x_2950_;
v_isShared_2954_ = v_isSharedCheck_3117_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2950_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_3117_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_Lean_Json_parse(v_k_2943_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2955_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2955_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2965_; 
v_a_2964_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2955_, 1);
v___x_2965_ = l_Lean_Lsp_RefIdent_fromJson_x3f(v_a_2964_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2968_ = v___x_2965_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2965_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v_definition_x3f_2976_; lean_object* v_a_3006_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_a_2974_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_3010_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
lean_inc(v_v_2944_);
v___x_3011_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(v_v_2944_, v___x_3010_);
if (lean_obj_tag(v___x_3011_) == 0)
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_3012_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_3011_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_3011_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3116_; 
v_a_3020_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3022_ = v___x_3011_;
v_isShared_3023_ = v_isSharedCheck_3116_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_3011_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3116_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
if (lean_obj_tag(v_a_3020_) == 0)
{
lean_object* v___x_3024_; 
lean_del_object(v___x_3022_);
lean_del_object(v___x_2953_);
lean_del_object(v___x_2948_);
v___x_3024_ = lean_box(0);
v_definition_x3f_2976_ = v___x_3024_;
goto v___jp_2975_;
}
else
{
lean_object* v_val_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; uint8_t v___y_3029_; uint8_t v___y_3098_; uint8_t v___y_3099_; uint8_t v___y_3100_; uint8_t v___y_3108_; uint8_t v___x_3113_; 
v_val_3025_ = lean_ctor_get(v_a_3020_, 0);
lean_inc(v_val_3025_);
lean_dec_ref_known(v_a_3020_, 1);
v___x_3026_ = lean_array_get_size(v_val_3025_);
v___x_3027_ = lean_unsigned_to_nat(4u);
v___x_3113_ = lean_nat_dec_eq(v___x_3026_, v___x_3027_);
if (v___x_3113_ == 0)
{
uint8_t v___x_3114_; 
v___x_3114_ = 1;
v___y_3108_ = v___x_3114_;
goto v___jp_3107_;
}
else
{
uint8_t v___x_3115_; 
v___x_3115_ = 0;
v___y_3108_ = v___x_3115_;
goto v___jp_3107_;
}
v___jp_3028_:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3030_ = lean_unsigned_to_nat(0u);
v___x_3031_ = lean_array_fget_borrowed(v_val_3025_, v___x_3030_);
lean_inc(v___x_3031_);
v___x_3032_ = l_Lean_Json_getNat_x3f(v___x_3031_);
if (lean_obj_tag(v___x_3032_) == 0)
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec(v_val_3025_);
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_3033_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_3032_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3032_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
else
{
lean_object* v_a_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v_a_3041_ = lean_ctor_get(v___x_3032_, 0);
lean_inc(v_a_3041_);
lean_dec_ref_known(v___x_3032_, 1);
v___x_3042_ = lean_unsigned_to_nat(1u);
v___x_3043_ = lean_array_fget_borrowed(v_val_3025_, v___x_3042_);
lean_inc(v___x_3043_);
v___x_3044_ = l_Lean_Json_getNat_x3f(v___x_3043_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
lean_dec(v_a_3041_);
lean_dec(v_val_3025_);
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_3044_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3044_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v_a_3053_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3053_);
lean_dec_ref_known(v___x_3044_, 1);
v___x_3054_ = lean_unsigned_to_nat(2u);
v___x_3055_ = lean_array_fget_borrowed(v_val_3025_, v___x_3054_);
lean_inc(v___x_3055_);
v___x_3056_ = l_Lean_Json_getNat_x3f(v___x_3055_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec(v_a_3053_);
lean_dec(v_a_3041_);
lean_dec(v_val_3025_);
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_3056_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3056_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v_a_3065_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3066_ = lean_unsigned_to_nat(3u);
v___x_3067_ = lean_array_fget_borrowed(v_val_3025_, v___x_3066_);
lean_inc(v___x_3067_);
v___x_3068_ = l_Lean_Json_getNat_x3f(v___x_3067_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
lean_dec(v_a_3065_);
lean_dec(v_a_3053_);
lean_dec(v_a_3041_);
lean_dec(v_val_3025_);
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_3068_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3068_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
else
{
if (v___y_3029_ == 0)
{
lean_object* v_a_3077_; lean_object* v___x_3078_; lean_object* v___x_3080_; 
lean_dec(v_val_3025_);
v_a_3077_ = lean_ctor_get(v___x_3068_, 0);
lean_inc(v_a_3077_);
lean_dec_ref_known(v___x_3068_, 1);
v___x_3078_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 4, v___x_3078_);
lean_ctor_set(v___x_2948_, 3, v_a_3077_);
lean_ctor_set(v___x_2948_, 2, v_a_3065_);
lean_ctor_set(v___x_2948_, 1, v_a_3053_);
lean_ctor_set(v___x_2948_, 0, v_a_3041_);
v___x_3080_ = v___x_2948_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3041_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_a_3053_);
lean_ctor_set(v_reuseFailAlloc_3081_, 2, v_a_3065_);
lean_ctor_set(v_reuseFailAlloc_3081_, 3, v_a_3077_);
lean_ctor_set(v_reuseFailAlloc_3081_, 4, v___x_3078_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
v_a_3006_ = v___x_3080_;
goto v___jp_3005_;
}
}
else
{
lean_object* v_a_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
v_a_3082_ = lean_ctor_get(v___x_3068_, 0);
lean_inc(v_a_3082_);
lean_dec_ref_known(v___x_3068_, 1);
v___x_3083_ = lean_array_fget(v_val_3025_, v___x_3027_);
lean_dec(v_val_3025_);
v___x_3084_ = l_Lean_Json_getStr_x3f(v___x_3083_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec(v_a_3082_);
lean_dec(v_a_3065_);
lean_dec(v_a_3053_);
lean_dec(v_a_3041_);
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3084_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3084_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; 
v_a_3093_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3093_);
lean_dec_ref_known(v___x_3084_, 1);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 4, v_a_3093_);
lean_ctor_set(v___x_2948_, 3, v_a_3082_);
lean_ctor_set(v___x_2948_, 2, v_a_3065_);
lean_ctor_set(v___x_2948_, 1, v_a_3053_);
lean_ctor_set(v___x_2948_, 0, v_a_3041_);
v___x_3095_ = v___x_2948_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3041_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v_a_3053_);
lean_ctor_set(v_reuseFailAlloc_3096_, 2, v_a_3065_);
lean_ctor_set(v_reuseFailAlloc_3096_, 3, v_a_3082_);
lean_ctor_set(v_reuseFailAlloc_3096_, 4, v_a_3093_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
v_a_3006_ = v___x_3095_;
goto v___jp_3005_;
}
}
}
}
}
}
}
}
v___jp_3097_:
{
if (v___y_3099_ == 0)
{
lean_del_object(v___x_3022_);
v___y_3029_ = v___y_3098_;
goto v___jp_3028_;
}
else
{
if (v___y_3100_ == 0)
{
lean_del_object(v___x_3022_);
v___y_3029_ = v___y_3098_;
goto v___jp_3028_;
}
else
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3105_; 
lean_dec(v_val_3025_);
lean_dec(v_a_2974_);
lean_del_object(v___x_2953_);
lean_dec(v_a_2951_);
lean_del_object(v___x_2948_);
lean_dec(v_r_2946_);
lean_dec(v_v_2944_);
v___x_3101_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_3102_ = l_Nat_reprFast(v___x_3026_);
v___x_3103_ = lean_string_append(v___x_3101_, v___x_3102_);
lean_dec_ref(v___x_3102_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set_tag(v___x_3022_, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3103_);
v___x_3105_ = v___x_3022_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3103_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
v___jp_3107_:
{
lean_object* v___x_3109_; uint8_t v___x_3110_; 
v___x_3109_ = lean_unsigned_to_nat(5u);
v___x_3110_ = lean_nat_dec_eq(v___x_3026_, v___x_3109_);
if (v___x_3110_ == 0)
{
uint8_t v___x_3111_; 
v___x_3111_ = 1;
v___y_3098_ = v___x_3110_;
v___y_3099_ = v___y_3108_;
v___y_3100_ = v___x_3111_;
goto v___jp_3097_;
}
else
{
uint8_t v___x_3112_; 
v___x_3112_ = 0;
v___y_3098_ = v___x_3110_;
v___y_3099_ = v___y_3108_;
v___y_3100_ = v___x_3112_;
goto v___jp_3097_;
}
}
}
}
}
v___jp_2975_:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_2978_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(v_v_2944_, v___x_2977_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2986_; 
lean_dec(v_definition_x3f_2976_);
lean_dec(v_a_2974_);
lean_dec(v_a_2951_);
lean_dec(v_r_2946_);
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2981_ = v___x_2978_;
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2978_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2984_; 
if (v_isShared_2982_ == 0)
{
v___x_2984_ = v___x_2981_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2979_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
else
{
lean_object* v_a_2987_; size_t v_sz_2988_; size_t v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v_a_2987_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2978_, 1);
v_sz_2988_ = lean_array_size(v_a_2987_);
v___x_2989_ = ((size_t)0ULL);
v___x_2990_ = l_unsafeCast___redArg(v_a_2987_);
lean_dec(v_a_2987_);
v___x_2991_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(v_sz_2988_, v___x_2989_, v___x_2990_);
v___x_2992_ = l_unsafeCast___redArg(v___x_2991_);
lean_dec_ref(v___x_2991_);
if (lean_obj_tag(v___x_2992_) == 0)
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec(v_definition_x3f_2976_);
lean_dec(v_a_2974_);
lean_dec(v_a_2951_);
lean_dec(v_r_2946_);
v_a_2993_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2992_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2992_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v_a_3001_ = lean_ctor_get(v___x_2992_, 0);
lean_inc(v_a_3001_);
lean_dec_ref_known(v___x_2992_, 1);
v___x_3002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3002_, 0, v_definition_x3f_2976_);
lean_ctor_set(v___x_3002_, 1, v_a_3001_);
v___x_3003_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___redArg(v_a_2974_, v___x_3002_, v_a_2951_);
v_init_2941_ = v___x_3003_;
v_x_2942_ = v_r_2946_;
goto _start;
}
}
}
v___jp_3005_:
{
lean_object* v___x_3008_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 0, v_a_3006_);
v___x_3008_ = v___x_2953_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3006_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
v_definition_x3f_2976_ = v___x_3008_;
goto v___jp_2975_;
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
lean_object* v___x_3120_; 
v___x_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3120_, 0, v_init_2941_);
return v___x_3120_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(lean_object* v_j_3121_, lean_object* v_k_3122_){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = l_Lean_Json_getObjValD(v_j_3121_, v_k_3122_);
v___x_3124_ = l_Lean_Json_getObj_x3f(v___x_3123_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_a_3133_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3124_, 1);
v___x_3134_ = lean_box(1);
v___x_3135_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__4(v___x_3134_, v_a_3133_);
return v___x_3135_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0___boxed(lean_object* v_j_3136_, lean_object* v_k_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(v_j_3136_, v_k_3137_);
lean_dec_ref(v_k_3137_);
return v_res_3138_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3144_ = 1;
v___x_3145_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1));
v___x_3146_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3145_, v___x_3144_);
return v___x_3146_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_3148_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2);
v___x_3149_ = lean_string_append(v___x_3148_, v___x_3147_);
return v___x_3149_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3150_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9);
v___x_3151_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3);
v___x_3152_ = lean_string_append(v___x_3151_, v___x_3150_);
return v___x_3152_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3153_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3154_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4);
v___x_3155_ = lean_string_append(v___x_3154_, v___x_3153_);
return v___x_3155_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8(void){
_start:
{
uint8_t v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3159_ = 1;
v___x_3160_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7));
v___x_3161_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3160_, v___x_3159_);
return v___x_3161_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3162_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8);
v___x_3163_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3);
v___x_3164_ = lean_string_append(v___x_3163_, v___x_3162_);
return v___x_3164_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10(void){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3165_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3166_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9);
v___x_3167_ = lean_string_append(v___x_3166_, v___x_3165_);
return v___x_3167_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13(void){
_start:
{
uint8_t v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3171_ = 1;
v___x_3172_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12));
v___x_3173_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3172_, v___x_3171_);
return v___x_3173_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3174_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13);
v___x_3175_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3);
v___x_3176_ = lean_string_append(v___x_3175_, v___x_3174_);
return v___x_3176_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15(void){
_start:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3177_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3178_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14);
v___x_3179_ = lean_string_append(v___x_3178_, v___x_3177_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson(lean_object* v_json_3180_){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3181_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
lean_inc(v_json_3180_);
v___x_3182_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(v_json_3180_, v___x_3181_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3192_; 
lean_dec(v_json_3180_);
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3185_ = v___x_3182_;
v_isShared_3186_ = v_isSharedCheck_3192_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3182_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3192_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3190_; 
v___x_3187_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5);
v___x_3188_ = lean_string_append(v___x_3187_, v_a_3183_);
lean_dec(v_a_3183_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 0, v___x_3188_);
v___x_3190_ = v___x_3185_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v___x_3188_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
else
{
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
lean_dec(v_json_3180_);
v_a_3193_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3195_ = v___x_3182_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3182_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
lean_ctor_set_tag(v___x_3195_, 0);
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3193_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_a_3201_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3182_, 1);
v___x_3202_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6));
lean_inc(v_json_3180_);
v___x_3203_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(v_json_3180_, v___x_3202_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3213_; 
lean_dec(v_a_3201_);
lean_dec(v_json_3180_);
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3206_ = v___x_3203_;
v_isShared_3207_ = v_isSharedCheck_3213_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3203_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3213_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3211_; 
v___x_3208_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10);
v___x_3209_ = lean_string_append(v___x_3208_, v_a_3204_);
lean_dec(v_a_3204_);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 0, v___x_3209_);
v___x_3211_ = v___x_3206_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3209_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
else
{
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec(v_a_3201_);
lean_dec(v_json_3180_);
v_a_3214_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3203_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3203_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
lean_ctor_set_tag(v___x_3216_, 0);
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v_a_3222_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3203_, 1);
v___x_3223_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11));
v___x_3224_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(v_json_3180_, v___x_3223_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3234_; 
lean_dec(v_a_3222_);
lean_dec(v_a_3201_);
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3227_ = v___x_3224_;
v_isShared_3228_ = v_isSharedCheck_3234_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3224_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3234_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3232_; 
v___x_3229_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15);
v___x_3230_ = lean_string_append(v___x_3229_, v_a_3225_);
lean_dec(v_a_3225_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v___x_3230_);
v___x_3232_ = v___x_3227_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
else
{
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_a_3222_);
lean_dec(v_a_3201_);
v_a_3235_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3224_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3224_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
lean_ctor_set_tag(v___x_3237_, 0);
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3251_; 
v_a_3243_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3245_ = v___x_3224_;
v_isShared_3246_ = v_isSharedCheck_3251_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3224_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3251_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3247_, 0, v_a_3201_);
lean_ctor_set(v___x_3247_, 1, v_a_3222_);
lean_ctor_set(v___x_3247_, 2, v_a_3243_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3247_);
v___x_3249_ = v___x_3245_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
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
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2(lean_object* v_00_u03b2_3252_, lean_object* v_k_3253_, lean_object* v_v_3254_, lean_object* v_t_3255_, lean_object* v_hl_3256_){
_start:
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___redArg(v_k_3253_, v_v_3254_, v_t_3255_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6(lean_object* v_00_u03b2_3258_, lean_object* v_k_3259_, lean_object* v_v_3260_, lean_object* v_t_3261_, lean_object* v_hl_3262_){
_start:
{
lean_object* v___x_3263_; 
v___x_3263_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__6___redArg(v_k_3259_, v_v_3260_, v_t_3261_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6(lean_object* v_init_3266_, lean_object* v_x_3267_){
_start:
{
if (lean_obj_tag(v_x_3267_) == 0)
{
lean_object* v_k_3268_; lean_object* v_v_3269_; lean_object* v_l_3270_; lean_object* v_r_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v_k_3268_ = lean_ctor_get(v_x_3267_, 1);
v_v_3269_ = lean_ctor_get(v_x_3267_, 2);
v_l_3270_ = lean_ctor_get(v_x_3267_, 3);
v_r_3271_ = lean_ctor_get(v_x_3267_, 4);
v___x_3272_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6(v_init_3266_, v_r_3271_);
lean_inc(v_v_3269_);
lean_inc(v_k_3268_);
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v_k_3268_);
lean_ctor_set(v___x_3273_, 1, v_v_3269_);
v___x_3274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3273_);
lean_ctor_set(v___x_3274_, 1, v___x_3272_);
v_init_3266_ = v___x_3274_;
v_x_3267_ = v_l_3270_;
goto _start;
}
else
{
return v_init_3266_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6___boxed(lean_object* v_init_3276_, lean_object* v_x_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6(v_init_3276_, v_x_3277_);
lean_dec(v_x_3277_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__9(size_t v_sz_3279_, size_t v_i_3280_, lean_object* v_bs_3281_){
_start:
{
uint8_t v___x_3282_; 
v___x_3282_ = lean_usize_dec_lt(v_i_3280_, v_sz_3279_);
if (v___x_3282_ == 0)
{
lean_object* v___x_3283_; 
v___x_3283_ = l_unsafeCast___redArg(v_bs_3281_);
lean_dec_ref(v_bs_3281_);
return v___x_3283_;
}
else
{
lean_object* v_v_3284_; lean_object* v___x_3285_; lean_object* v_bs_x27_3286_; lean_object* v___x_3287_; size_t v___x_3288_; size_t v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v_v_3284_ = lean_array_uget(v_bs_3281_, v_i_3280_);
v___x_3285_ = lean_unsigned_to_nat(0u);
v_bs_x27_3286_ = lean_array_uset(v_bs_3281_, v_i_3280_, v___x_3285_);
v___x_3287_ = l_unsafeCast___redArg(v_v_3284_);
lean_dec(v_v_3284_);
v___x_3288_ = ((size_t)1ULL);
v___x_3289_ = lean_usize_add(v_i_3280_, v___x_3288_);
v___x_3290_ = l_unsafeCast___redArg(v___x_3287_);
lean_dec(v___x_3287_);
v___x_3291_ = lean_array_uset(v_bs_x27_3286_, v_i_3280_, v___x_3290_);
v_i_3280_ = v___x_3289_;
v_bs_3281_ = v___x_3291_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__9___boxed(lean_object* v_sz_3293_, lean_object* v_i_3294_, lean_object* v_bs_3295_){
_start:
{
size_t v_sz_boxed_3296_; size_t v_i_boxed_3297_; lean_object* v_res_3298_; 
v_sz_boxed_3296_ = lean_unbox_usize(v_sz_3293_);
lean_dec(v_sz_3293_);
v_i_boxed_3297_ = lean_unbox_usize(v_i_3294_);
lean_dec(v_i_3294_);
v_res_3298_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__9(v_sz_boxed_3296_, v_i_boxed_3297_, v_bs_3295_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(lean_object* v_a_3299_){
_start:
{
size_t v_sz_3300_; size_t v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; 
v_sz_3300_ = lean_array_size(v_a_3299_);
v___x_3301_ = ((size_t)0ULL);
v___x_3302_ = l_unsafeCast___redArg(v_a_3299_);
v___x_3303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__9(v_sz_3300_, v___x_3301_, v___x_3302_);
v___x_3304_ = l_unsafeCast___redArg(v___x_3303_);
lean_dec_ref(v___x_3303_);
v___x_3305_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2___boxed(lean_object* v_a_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(v_a_3306_);
lean_dec_ref(v_a_3306_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(lean_object* v_a_3308_){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_array_mk(v_a_3308_);
v___x_3310_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(v___x_3309_);
lean_dec_ref(v___x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1(lean_object* v_x_3311_){
_start:
{
if (lean_obj_tag(v_x_3311_) == 0)
{
lean_object* v___x_3312_; 
v___x_3312_ = lean_box(0);
return v___x_3312_;
}
else
{
lean_object* v_val_3313_; lean_object* v___x_3314_; 
v_val_3313_ = lean_ctor_get(v_x_3311_, 0);
lean_inc(v_val_3313_);
lean_dec_ref_known(v_x_3311_, 1);
v___x_3314_ = l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(v_val_3313_);
return v___x_3314_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(lean_object* v_a_3315_, lean_object* v_a_3316_){
_start:
{
if (lean_obj_tag(v_a_3315_) == 0)
{
lean_object* v___x_3317_; 
v___x_3317_ = l_List_reverse___redArg(v_a_3316_);
return v___x_3317_;
}
else
{
lean_object* v_head_3318_; lean_object* v_tail_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3329_; 
v_head_3318_ = lean_ctor_get(v_a_3315_, 0);
v_tail_3319_ = lean_ctor_get(v_a_3315_, 1);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_a_3315_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3321_ = v_a_3315_;
v_isShared_3322_ = v_isSharedCheck_3329_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_tail_3319_);
lean_inc(v_head_3318_);
lean_dec(v_a_3315_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3329_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3326_; 
v___x_3323_ = l_Lean_JsonNumber_fromNat(v_head_3318_);
v___x_3324_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 1, v_a_3316_);
lean_ctor_set(v___x_3321_, 0, v___x_3324_);
v___x_3326_ = v___x_3321_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v_a_3316_);
v___x_3326_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
v_a_3315_ = v_tail_3319_;
v_a_3316_ = v___x_3326_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(size_t v_sz_3330_, size_t v_i_3331_, lean_object* v_bs_3332_){
_start:
{
uint8_t v___x_3333_; 
v___x_3333_ = lean_usize_dec_lt(v_i_3331_, v_sz_3330_);
if (v___x_3333_ == 0)
{
lean_object* v___x_3334_; 
v___x_3334_ = l_unsafeCast___redArg(v_bs_3332_);
lean_dec_ref(v_bs_3332_);
return v___x_3334_;
}
else
{
lean_object* v_v_3335_; lean_object* v___x_3336_; lean_object* v_startPosLine_3337_; lean_object* v_startPosCharacter_3338_; lean_object* v_endPosLine_3339_; lean_object* v_endPosCharacter_3340_; lean_object* v___x_3341_; lean_object* v_bs_x27_3342_; lean_object* v___y_3344_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v_range_3355_; lean_object* v___x_3356_; 
v_v_3335_ = lean_array_uget_borrowed(v_bs_3332_, v_i_3331_);
v___x_3336_ = l_unsafeCast___redArg(v_v_3335_);
v_startPosLine_3337_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_startPosLine_3337_);
v_startPosCharacter_3338_ = lean_ctor_get(v___x_3336_, 1);
lean_inc(v_startPosCharacter_3338_);
v_endPosLine_3339_ = lean_ctor_get(v___x_3336_, 2);
lean_inc(v_endPosLine_3339_);
v_endPosCharacter_3340_ = lean_ctor_get(v___x_3336_, 3);
lean_inc(v_endPosCharacter_3340_);
v___x_3341_ = lean_unsigned_to_nat(0u);
v_bs_x27_3342_ = lean_array_uset(v_bs_3332_, v_i_3331_, v___x_3341_);
v___x_3350_ = lean_box(0);
v___x_3351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3351_, 0, v_endPosCharacter_3340_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3352_, 0, v_endPosLine_3339_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3353_, 0, v_startPosCharacter_3338_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3354_, 0, v_startPosLine_3337_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
v_range_3355_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(v___x_3354_, v___x_3350_);
v___x_3356_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v___x_3336_);
lean_dec(v___x_3336_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v___x_3357_; 
v___x_3357_ = l_List_appendTR___redArg(v_range_3355_, v___x_3350_);
v___y_3344_ = v___x_3357_;
goto v___jp_3343_;
}
else
{
lean_object* v_val_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3367_; 
v_val_3358_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3360_ = v___x_3356_;
v_isShared_3361_ = v_isSharedCheck_3367_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_val_3358_);
lean_dec(v___x_3356_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3367_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3363_; 
if (v_isShared_3361_ == 0)
{
lean_ctor_set_tag(v___x_3360_, 3);
v___x_3363_ = v___x_3360_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_val_3358_);
v___x_3363_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
lean_ctor_set(v___x_3364_, 1, v___x_3350_);
v___x_3365_ = l_List_appendTR___redArg(v_range_3355_, v___x_3364_);
v___y_3344_ = v___x_3365_;
goto v___jp_3343_;
}
}
}
v___jp_3343_:
{
size_t v___x_3345_; size_t v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3345_ = ((size_t)1ULL);
v___x_3346_ = lean_usize_add(v_i_3331_, v___x_3345_);
v___x_3347_ = l_unsafeCast___redArg(v___y_3344_);
lean_dec(v___y_3344_);
v___x_3348_ = lean_array_uset(v_bs_x27_3342_, v_i_3331_, v___x_3347_);
v_i_3331_ = v___x_3346_;
v_bs_3332_ = v___x_3348_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2___boxed(lean_object* v_sz_3368_, lean_object* v_i_3369_, lean_object* v_bs_3370_){
_start:
{
size_t v_sz_boxed_3371_; size_t v_i_boxed_3372_; lean_object* v_res_3373_; 
v_sz_boxed_3371_ = lean_unbox_usize(v_sz_3368_);
lean_dec(v_sz_3368_);
v_i_boxed_3372_ = lean_unbox_usize(v_i_3369_);
lean_dec(v_i_3369_);
v_res_3373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(v_sz_boxed_3371_, v_i_boxed_3372_, v_bs_3370_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(size_t v_sz_3374_, size_t v_i_3375_, lean_object* v_bs_3376_){
_start:
{
uint8_t v___x_3377_; 
v___x_3377_ = lean_usize_dec_lt(v_i_3375_, v_sz_3374_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; 
v___x_3378_ = l_unsafeCast___redArg(v_bs_3376_);
lean_dec_ref(v_bs_3376_);
return v___x_3378_;
}
else
{
lean_object* v_v_3379_; lean_object* v___x_3380_; lean_object* v_bs_x27_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; size_t v___x_3384_; size_t v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v_v_3379_ = lean_array_uget(v_bs_3376_, v_i_3375_);
v___x_3380_ = lean_unsigned_to_nat(0u);
v_bs_x27_3381_ = lean_array_uset(v_bs_3376_, v_i_3375_, v___x_3380_);
v___x_3382_ = l_unsafeCast___redArg(v_v_3379_);
lean_dec(v_v_3379_);
v___x_3383_ = l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(v___x_3382_);
v___x_3384_ = ((size_t)1ULL);
v___x_3385_ = lean_usize_add(v_i_3375_, v___x_3384_);
v___x_3386_ = l_unsafeCast___redArg(v___x_3383_);
lean_dec(v___x_3383_);
v___x_3387_ = lean_array_uset(v_bs_x27_3381_, v_i_3375_, v___x_3386_);
v_i_3375_ = v___x_3385_;
v_bs_3376_ = v___x_3387_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4___boxed(lean_object* v_sz_3389_, lean_object* v_i_3390_, lean_object* v_bs_3391_){
_start:
{
size_t v_sz_boxed_3392_; size_t v_i_boxed_3393_; lean_object* v_res_3394_; 
v_sz_boxed_3392_ = lean_unbox_usize(v_sz_3389_);
lean_dec(v_sz_3389_);
v_i_boxed_3393_ = lean_unbox_usize(v_i_3390_);
lean_dec(v_i_3390_);
v_res_3394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(v_sz_boxed_3392_, v_i_boxed_3393_, v_bs_3391_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(lean_object* v_a_3395_){
_start:
{
size_t v_sz_3396_; size_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v_sz_3396_ = lean_array_size(v_a_3395_);
v___x_3397_ = ((size_t)0ULL);
v___x_3398_ = l_unsafeCast___redArg(v_a_3395_);
v___x_3399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(v_sz_3396_, v___x_3397_, v___x_3398_);
v___x_3400_ = l_unsafeCast___redArg(v___x_3399_);
lean_dec_ref(v___x_3399_);
v___x_3401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3___boxed(lean_object* v_a_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(v_a_3402_);
lean_dec_ref(v_a_3402_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__5(lean_object* v_a_3404_, lean_object* v_a_3405_){
_start:
{
if (lean_obj_tag(v_a_3404_) == 0)
{
lean_object* v___x_3406_; 
v___x_3406_ = l_List_reverse___redArg(v_a_3405_);
return v___x_3406_;
}
else
{
lean_object* v_head_3407_; lean_object* v_snd_3408_; lean_object* v_tail_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3480_; 
v_head_3407_ = lean_ctor_get(v_a_3404_, 0);
lean_inc(v_head_3407_);
v_snd_3408_ = lean_ctor_get(v_head_3407_, 1);
lean_inc(v_snd_3408_);
v_tail_3409_ = lean_ctor_get(v_a_3404_, 1);
v_isSharedCheck_3480_ = !lean_is_exclusive(v_a_3404_);
if (v_isSharedCheck_3480_ == 0)
{
lean_object* v_unused_3481_; 
v_unused_3481_ = lean_ctor_get(v_a_3404_, 0);
lean_dec(v_unused_3481_);
v___x_3411_ = v_a_3404_;
v_isShared_3412_ = v_isSharedCheck_3480_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_tail_3409_);
lean_dec(v_a_3404_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3480_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v_fst_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3478_; 
v_fst_3413_ = lean_ctor_get(v_head_3407_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v_head_3407_);
if (v_isSharedCheck_3478_ == 0)
{
lean_object* v_unused_3479_; 
v_unused_3479_ = lean_ctor_get(v_head_3407_, 1);
lean_dec(v_unused_3479_);
v___x_3415_ = v_head_3407_;
v_isShared_3416_ = v_isSharedCheck_3478_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_fst_3413_);
lean_dec(v_head_3407_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3478_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v_definition_x3f_3417_; lean_object* v_usages_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3477_; 
v_definition_x3f_3417_ = lean_ctor_get(v_snd_3408_, 0);
v_usages_3418_ = lean_ctor_get(v_snd_3408_, 1);
v_isSharedCheck_3477_ = !lean_is_exclusive(v_snd_3408_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3420_ = v_snd_3408_;
v_isShared_3421_ = v_isSharedCheck_3477_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_usages_3418_);
lean_inc(v_definition_x3f_3417_);
lean_dec(v_snd_3408_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3477_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___y_3426_; lean_object* v___y_3451_; 
v___x_3422_ = l_Lean_Lsp_RefIdent_toJson(v_fst_3413_);
v___x_3423_ = l_Lean_Json_compress(v___x_3422_);
v___x_3424_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
if (lean_obj_tag(v_definition_x3f_3417_) == 0)
{
lean_object* v___x_3453_; 
v___x_3453_ = lean_box(0);
v___y_3426_ = v___x_3453_;
goto v___jp_3425_;
}
else
{
lean_object* v_val_3454_; lean_object* v_startPosLine_3455_; lean_object* v_startPosCharacter_3456_; lean_object* v_endPosLine_3457_; lean_object* v_endPosCharacter_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v_range_3464_; lean_object* v___x_3465_; 
v_val_3454_ = lean_ctor_get(v_definition_x3f_3417_, 0);
lean_inc(v_val_3454_);
lean_dec_ref_known(v_definition_x3f_3417_, 1);
v_startPosLine_3455_ = lean_ctor_get(v_val_3454_, 0);
v_startPosCharacter_3456_ = lean_ctor_get(v_val_3454_, 1);
v_endPosLine_3457_ = lean_ctor_get(v_val_3454_, 2);
v_endPosCharacter_3458_ = lean_ctor_get(v_val_3454_, 3);
v___x_3459_ = lean_box(0);
lean_inc(v_endPosCharacter_3458_);
v___x_3460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3460_, 0, v_endPosCharacter_3458_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
lean_inc(v_endPosLine_3457_);
v___x_3461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3461_, 0, v_endPosLine_3457_);
lean_ctor_set(v___x_3461_, 1, v___x_3460_);
lean_inc(v_startPosCharacter_3456_);
v___x_3462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3462_, 0, v_startPosCharacter_3456_);
lean_ctor_set(v___x_3462_, 1, v___x_3461_);
lean_inc(v_startPosLine_3455_);
v___x_3463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3463_, 0, v_startPosLine_3455_);
lean_ctor_set(v___x_3463_, 1, v___x_3462_);
v_range_3464_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(v___x_3463_, v___x_3459_);
v___x_3465_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_3454_);
lean_dec(v_val_3454_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v___x_3466_; 
v___x_3466_ = l_List_appendTR___redArg(v_range_3464_, v___x_3459_);
v___y_3451_ = v___x_3466_;
goto v___jp_3450_;
}
else
{
lean_object* v_val_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3476_; 
v_val_3467_ = lean_ctor_get(v___x_3465_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3469_ = v___x_3465_;
v_isShared_3470_ = v_isSharedCheck_3476_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_val_3467_);
lean_dec(v___x_3465_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3476_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set_tag(v___x_3469_, 3);
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_val_3467_);
v___x_3472_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3472_);
lean_ctor_set(v___x_3473_, 1, v___x_3459_);
v___x_3474_ = l_List_appendTR___redArg(v_range_3464_, v___x_3473_);
v___y_3451_ = v___x_3474_;
goto v___jp_3450_;
}
}
}
}
v___jp_3425_:
{
lean_object* v___x_3427_; lean_object* v___x_3429_; 
v___x_3427_ = l_Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1(v___y_3426_);
if (v_isShared_3416_ == 0)
{
lean_ctor_set(v___x_3415_, 1, v___x_3427_);
lean_ctor_set(v___x_3415_, 0, v___x_3424_);
v___x_3429_ = v___x_3415_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3424_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v___x_3427_);
v___x_3429_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3430_; size_t v_sz_3431_; size_t v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3438_; 
v___x_3430_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v_sz_3431_ = lean_array_size(v_usages_3418_);
v___x_3432_ = ((size_t)0ULL);
v___x_3433_ = l_unsafeCast___redArg(v_usages_3418_);
lean_dec_ref(v_usages_3418_);
v___x_3434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(v_sz_3431_, v___x_3432_, v___x_3433_);
v___x_3435_ = l_unsafeCast___redArg(v___x_3434_);
lean_dec_ref(v___x_3434_);
v___x_3436_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(v___x_3435_);
lean_dec(v___x_3435_);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 1, v___x_3436_);
lean_ctor_set(v___x_3420_, 0, v___x_3430_);
v___x_3438_ = v___x_3420_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v___x_3430_);
lean_ctor_set(v_reuseFailAlloc_3448_, 1, v___x_3436_);
v___x_3438_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
lean_object* v___x_3439_; lean_object* v___x_3441_; 
v___x_3439_ = lean_box(0);
if (v_isShared_3412_ == 0)
{
lean_ctor_set(v___x_3411_, 1, v___x_3439_);
lean_ctor_set(v___x_3411_, 0, v___x_3438_);
v___x_3441_ = v___x_3411_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v___x_3438_);
lean_ctor_set(v_reuseFailAlloc_3447_, 1, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3429_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = l_Lean_Json_mkObj(v___x_3442_);
lean_dec_ref_known(v___x_3442_, 2);
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3423_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
lean_ctor_set(v___x_3445_, 1, v_a_3405_);
v_a_3404_ = v_tail_3409_;
v_a_3405_ = v___x_3445_;
goto _start;
}
}
}
}
v___jp_3450_:
{
lean_object* v___x_3452_; 
v___x_3452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3452_, 0, v___y_3451_);
v___y_3426_ = v___x_3452_;
goto v___jp_3425_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__7(lean_object* v_a_3482_, lean_object* v_a_3483_){
_start:
{
if (lean_obj_tag(v_a_3482_) == 0)
{
lean_object* v___x_3484_; 
v___x_3484_ = l_List_reverse___redArg(v_a_3483_);
return v___x_3484_;
}
else
{
lean_object* v_head_3485_; lean_object* v_snd_3486_; lean_object* v_tail_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3539_; 
v_head_3485_ = lean_ctor_get(v_a_3482_, 0);
lean_inc(v_head_3485_);
v_snd_3486_ = lean_ctor_get(v_head_3485_, 1);
lean_inc(v_snd_3486_);
v_tail_3487_ = lean_ctor_get(v_a_3482_, 1);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_a_3482_);
if (v_isSharedCheck_3539_ == 0)
{
lean_object* v_unused_3540_; 
v_unused_3540_ = lean_ctor_get(v_a_3482_, 0);
lean_dec(v_unused_3540_);
v___x_3489_ = v_a_3482_;
v_isShared_3490_ = v_isSharedCheck_3539_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_tail_3487_);
lean_dec(v_a_3482_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3539_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v_fst_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3537_; 
v_fst_3491_ = lean_ctor_get(v_head_3485_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v_head_3485_);
if (v_isSharedCheck_3537_ == 0)
{
lean_object* v_unused_3538_; 
v_unused_3538_ = lean_ctor_get(v_head_3485_, 1);
lean_dec(v_unused_3538_);
v___x_3493_ = v_head_3485_;
v_isShared_3494_ = v_isSharedCheck_3537_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_fst_3491_);
lean_dec(v_head_3485_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3537_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v_rangeStartPosLine_3495_; lean_object* v_rangeStartPosCharacter_3496_; lean_object* v_rangeEndPosLine_3497_; lean_object* v_rangeEndPosCharacter_3498_; lean_object* v_selectionRangeStartPosLine_3499_; lean_object* v_selectionRangeStartPosCharacter_3500_; lean_object* v_selectionRangeEndPosLine_3501_; lean_object* v_selectionRangeEndPosCharacter_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
v_rangeStartPosLine_3495_ = lean_ctor_get(v_snd_3486_, 0);
lean_inc(v_rangeStartPosLine_3495_);
v_rangeStartPosCharacter_3496_ = lean_ctor_get(v_snd_3486_, 1);
lean_inc(v_rangeStartPosCharacter_3496_);
v_rangeEndPosLine_3497_ = lean_ctor_get(v_snd_3486_, 2);
lean_inc(v_rangeEndPosLine_3497_);
v_rangeEndPosCharacter_3498_ = lean_ctor_get(v_snd_3486_, 3);
lean_inc(v_rangeEndPosCharacter_3498_);
v_selectionRangeStartPosLine_3499_ = lean_ctor_get(v_snd_3486_, 4);
lean_inc(v_selectionRangeStartPosLine_3499_);
v_selectionRangeStartPosCharacter_3500_ = lean_ctor_get(v_snd_3486_, 5);
lean_inc(v_selectionRangeStartPosCharacter_3500_);
v_selectionRangeEndPosLine_3501_ = lean_ctor_get(v_snd_3486_, 6);
lean_inc(v_selectionRangeEndPosLine_3501_);
v_selectionRangeEndPosCharacter_3502_ = lean_ctor_get(v_snd_3486_, 7);
lean_inc(v_selectionRangeEndPosCharacter_3502_);
lean_dec(v_snd_3486_);
v___x_3503_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_3495_);
v___x_3504_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
v___x_3505_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_3496_);
v___x_3506_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
v___x_3507_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_3497_);
v___x_3508_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
v___x_3509_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_3498_);
v___x_3510_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
v___x_3511_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_3499_);
v___x_3512_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
v___x_3513_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_3500_);
v___x_3514_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3513_);
v___x_3515_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_3501_);
v___x_3516_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
v___x_3517_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_3502_);
v___x_3518_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
v___x_3519_ = lean_unsigned_to_nat(8u);
v___x_3520_ = lean_mk_empty_array_with_capacity(v___x_3519_);
v___x_3521_ = lean_array_push(v___x_3520_, v___x_3504_);
v___x_3522_ = lean_array_push(v___x_3521_, v___x_3506_);
v___x_3523_ = lean_array_push(v___x_3522_, v___x_3508_);
v___x_3524_ = lean_array_push(v___x_3523_, v___x_3510_);
v___x_3525_ = lean_array_push(v___x_3524_, v___x_3512_);
v___x_3526_ = lean_array_push(v___x_3525_, v___x_3514_);
v___x_3527_ = lean_array_push(v___x_3526_, v___x_3516_);
v___x_3528_ = lean_array_push(v___x_3527_, v___x_3518_);
v___x_3529_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 1, v___x_3529_);
v___x_3531_ = v___x_3493_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_fst_3491_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v___x_3529_);
v___x_3531_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
lean_object* v___x_3533_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v_a_3483_);
lean_ctor_set(v___x_3489_, 0, v___x_3531_);
v___x_3533_ = v___x_3489_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___x_3531_);
lean_ctor_set(v_reuseFailAlloc_3535_, 1, v_a_3483_);
v___x_3533_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
v_a_3482_ = v_tail_3487_;
v_a_3483_ = v___x_3533_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(lean_object* v_init_3541_, lean_object* v_x_3542_){
_start:
{
if (lean_obj_tag(v_x_3542_) == 0)
{
lean_object* v_k_3543_; lean_object* v_v_3544_; lean_object* v_l_3545_; lean_object* v_r_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v_k_3543_ = lean_ctor_get(v_x_3542_, 1);
v_v_3544_ = lean_ctor_get(v_x_3542_, 2);
v_l_3545_ = lean_ctor_get(v_x_3542_, 3);
v_r_3546_ = lean_ctor_get(v_x_3542_, 4);
v___x_3547_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(v_init_3541_, v_r_3546_);
lean_inc(v_v_3544_);
lean_inc(v_k_3543_);
v___x_3548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3548_, 0, v_k_3543_);
lean_ctor_set(v___x_3548_, 1, v_v_3544_);
v___x_3549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
lean_ctor_set(v___x_3549_, 1, v___x_3547_);
v_init_3541_ = v___x_3549_;
v_x_3542_ = v_l_3545_;
goto _start;
}
else
{
return v_init_3541_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4___boxed(lean_object* v_init_3551_, lean_object* v_x_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(v_init_3551_, v_x_3552_);
lean_dec(v_x_3552_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams_toJson(lean_object* v_x_3554_){
_start:
{
lean_object* v_version_3555_; lean_object* v_references_3556_; lean_object* v_decls_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v_version_3555_ = lean_ctor_get(v_x_3554_, 0);
lean_inc(v_version_3555_);
v_references_3556_ = lean_ctor_get(v_x_3554_, 1);
lean_inc(v_references_3556_);
v_decls_3557_ = lean_ctor_get(v_x_3554_, 2);
lean_inc(v_decls_3557_);
lean_dec_ref(v_x_3554_);
v___x_3558_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
v___x_3559_ = l_Lean_JsonNumber_fromNat(v_version_3555_);
v___x_3560_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
v___x_3561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3558_);
lean_ctor_set(v___x_3561_, 1, v___x_3560_);
v___x_3562_ = lean_box(0);
v___x_3563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3561_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6));
v___x_3565_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(v___x_3562_, v_references_3556_);
lean_dec(v_references_3556_);
v___x_3566_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__5(v___x_3565_, v___x_3562_);
v___x_3567_ = l_Lean_Json_mkObj(v___x_3566_);
lean_dec(v___x_3566_);
v___x_3568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3564_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3568_);
lean_ctor_set(v___x_3569_, 1, v___x_3562_);
v___x_3570_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11));
v___x_3571_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__6(v___x_3562_, v_decls_3557_);
lean_dec(v_decls_3557_);
v___x_3572_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__7(v___x_3571_, v___x_3562_);
v___x_3573_ = l_Lean_Json_mkObj(v___x_3572_);
lean_dec(v___x_3572_);
v___x_3574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3570_);
lean_ctor_set(v___x_3574_, 1, v___x_3573_);
v___x_3575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3574_);
lean_ctor_set(v___x_3575_, 1, v___x_3562_);
v___x_3576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
lean_ctor_set(v___x_3576_, 1, v___x_3562_);
v___x_3577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3569_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3563_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_3580_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_3578_, v___x_3579_);
v___x_3581_ = l_Lean_Json_mkObj(v___x_3580_);
lean_dec(v___x_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(size_t v_sz_3584_, size_t v_i_3585_, lean_object* v_bs_3586_){
_start:
{
uint8_t v___x_3587_; 
v___x_3587_ = lean_usize_dec_lt(v_i_3585_, v_sz_3584_);
if (v___x_3587_ == 0)
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = l_unsafeCast___redArg(v_bs_3586_);
lean_dec_ref(v_bs_3586_);
v___x_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
else
{
lean_object* v_v_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v_v_3590_ = lean_array_uget_borrowed(v_bs_3586_, v_i_3585_);
v___x_3591_ = l_unsafeCast___redArg(v_v_3590_);
v___x_3592_ = l_Lean_Json_getStr_x3f(v___x_3591_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
lean_dec_ref(v_bs_3586_);
v_a_3593_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3595_ = v___x_3592_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3592_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3593_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
return v___x_3598_;
}
}
}
else
{
lean_object* v_a_3601_; lean_object* v___x_3602_; lean_object* v_bs_x27_3603_; size_t v___x_3604_; size_t v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_a_3601_ = lean_ctor_get(v___x_3592_, 0);
lean_inc(v_a_3601_);
lean_dec_ref_known(v___x_3592_, 1);
v___x_3602_ = lean_unsigned_to_nat(0u);
v_bs_x27_3603_ = lean_array_uset(v_bs_3586_, v_i_3585_, v___x_3602_);
v___x_3604_ = ((size_t)1ULL);
v___x_3605_ = lean_usize_add(v_i_3585_, v___x_3604_);
v___x_3606_ = l_unsafeCast___redArg(v_a_3601_);
lean_dec(v_a_3601_);
v___x_3607_ = lean_array_uset(v_bs_x27_3603_, v_i_3585_, v___x_3606_);
v_i_3585_ = v___x_3605_;
v_bs_3586_ = v___x_3607_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3609_, lean_object* v_i_3610_, lean_object* v_bs_3611_){
_start:
{
size_t v_sz_boxed_3612_; size_t v_i_boxed_3613_; lean_object* v_res_3614_; 
v_sz_boxed_3612_ = lean_unbox_usize(v_sz_3609_);
lean_dec(v_sz_3609_);
v_i_boxed_3613_ = lean_unbox_usize(v_i_3610_);
lean_dec(v_i_3610_);
v_res_3614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_3612_, v_i_boxed_3613_, v_bs_3611_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0(lean_object* v_x_3615_){
_start:
{
if (lean_obj_tag(v_x_3615_) == 4)
{
lean_object* v_elems_3616_; size_t v_sz_3617_; size_t v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v_elems_3616_ = lean_ctor_get(v_x_3615_, 0);
lean_inc_ref(v_elems_3616_);
lean_dec_ref_known(v_x_3615_, 1);
v_sz_3617_ = lean_array_size(v_elems_3616_);
v___x_3618_ = ((size_t)0ULL);
v___x_3619_ = l_unsafeCast___redArg(v_elems_3616_);
lean_dec_ref(v_elems_3616_);
v___x_3620_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(v_sz_3617_, v___x_3618_, v___x_3619_);
v___x_3621_ = l_unsafeCast___redArg(v___x_3620_);
lean_dec_ref(v___x_3620_);
return v___x_3621_;
}
else
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3622_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_3623_ = lean_unsigned_to_nat(80u);
v___x_3624_ = l_Lean_Json_pretty(v_x_3615_, v___x_3623_);
v___x_3625_ = lean_string_append(v___x_3622_, v___x_3624_);
lean_dec_ref(v___x_3624_);
v___x_3626_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_3627_ = lean_string_append(v___x_3625_, v___x_3626_);
v___x_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
return v___x_3628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(lean_object* v_j_3629_, lean_object* v_k_3630_){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = l_Lean_Json_getObjValD(v_j_3629_, v_k_3630_);
v___x_3632_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0(v___x_3631_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0___boxed(lean_object* v_j_3633_, lean_object* v_k_3634_){
_start:
{
lean_object* v_res_3635_; 
v_res_3635_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(v_j_3633_, v_k_3634_);
lean_dec_ref(v_k_3634_);
return v_res_3635_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3(void){
_start:
{
uint8_t v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3642_ = 1;
v___x_3643_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2));
v___x_3644_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3643_, v___x_3642_);
return v___x_3644_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3645_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_3646_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3);
v___x_3647_ = lean_string_append(v___x_3646_, v___x_3645_);
return v___x_3647_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3650_ = 1;
v___x_3651_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5));
v___x_3652_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3651_, v___x_3650_);
return v___x_3652_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3653_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6);
v___x_3654_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4);
v___x_3655_ = lean_string_append(v___x_3654_, v___x_3653_);
return v___x_3655_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3656_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3657_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7);
v___x_3658_ = lean_string_append(v___x_3657_, v___x_3656_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson(lean_object* v_json_3659_){
_start:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3660_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0));
v___x_3661_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(v_json_3659_, v___x_3660_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3671_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3671_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3671_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3669_; 
v___x_3666_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8);
v___x_3667_ = lean_string_append(v___x_3666_, v_a_3662_);
lean_dec(v_a_3662_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 0, v___x_3667_);
v___x_3669_ = v___x_3664_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3667_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
else
{
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
v_a_3672_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3661_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3661_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
lean_ctor_set_tag(v___x_3674_, 0);
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
v_a_3680_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3661_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3661_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(size_t v_sz_3690_, size_t v_i_3691_, lean_object* v_bs_3692_){
_start:
{
uint8_t v___x_3693_; 
v___x_3693_ = lean_usize_dec_lt(v_i_3691_, v_sz_3690_);
if (v___x_3693_ == 0)
{
lean_object* v___x_3694_; 
v___x_3694_ = l_unsafeCast___redArg(v_bs_3692_);
lean_dec_ref(v_bs_3692_);
return v___x_3694_;
}
else
{
lean_object* v_v_3695_; lean_object* v___x_3696_; lean_object* v_bs_x27_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; size_t v___x_3700_; size_t v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v_v_3695_ = lean_array_uget(v_bs_3692_, v_i_3691_);
v___x_3696_ = lean_unsigned_to_nat(0u);
v_bs_x27_3697_ = lean_array_uset(v_bs_3692_, v_i_3691_, v___x_3696_);
v___x_3698_ = l_unsafeCast___redArg(v_v_3695_);
lean_dec(v_v_3695_);
v___x_3699_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
v___x_3700_ = ((size_t)1ULL);
v___x_3701_ = lean_usize_add(v_i_3691_, v___x_3700_);
v___x_3702_ = l_unsafeCast___redArg(v___x_3699_);
lean_dec_ref_known(v___x_3699_, 1);
v___x_3703_ = lean_array_uset(v_bs_x27_3697_, v_i_3691_, v___x_3702_);
v_i_3691_ = v___x_3701_;
v_bs_3692_ = v___x_3703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_3705_, lean_object* v_i_3706_, lean_object* v_bs_3707_){
_start:
{
size_t v_sz_boxed_3708_; size_t v_i_boxed_3709_; lean_object* v_res_3710_; 
v_sz_boxed_3708_ = lean_unbox_usize(v_sz_3705_);
lean_dec(v_sz_3705_);
v_i_boxed_3709_ = lean_unbox_usize(v_i_3706_);
lean_dec(v_i_3706_);
v_res_3710_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(v_sz_boxed_3708_, v_i_boxed_3709_, v_bs_3707_);
return v_res_3710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(lean_object* v_a_3711_){
_start:
{
size_t v_sz_3712_; size_t v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v_sz_3712_ = lean_array_size(v_a_3711_);
v___x_3713_ = ((size_t)0ULL);
v___x_3714_ = l_unsafeCast___redArg(v_a_3711_);
v___x_3715_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(v_sz_3712_, v___x_3713_, v___x_3714_);
v___x_3716_ = l_unsafeCast___redArg(v___x_3715_);
lean_dec_ref(v___x_3715_);
v___x_3717_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0___boxed(lean_object* v_a_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(v_a_3718_);
lean_dec_ref(v_a_3718_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson(lean_object* v_x_3720_){
_start:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3721_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0));
v___x_3722_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(v_x_3720_);
v___x_3723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3721_);
lean_ctor_set(v___x_3723_, 1, v___x_3722_);
v___x_3724_ = lean_box(0);
v___x_3725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3723_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3725_);
lean_ctor_set(v___x_3726_, 1, v___x_3724_);
v___x_3727_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_3728_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_3726_, v___x_3727_);
v___x_3729_ = l_Lean_Json_mkObj(v___x_3728_);
lean_dec(v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson___boxed(lean_object* v_x_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson(v_x_3730_);
lean_dec_ref(v_x_3730_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(lean_object* v_j_3734_, lean_object* v_k_3735_){
_start:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3736_ = l_Lean_Json_getObjValD(v_j_3734_, v_k_3735_);
v___x_3737_ = l_Lean_Json_getStr_x3f(v___x_3736_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0___boxed(lean_object* v_j_3738_, lean_object* v_k_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_j_3738_, v_k_3739_);
lean_dec_ref(v_k_3739_);
return v_res_3740_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3(void){
_start:
{
uint8_t v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3747_ = 1;
v___x_3748_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2));
v___x_3749_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3748_, v___x_3747_);
return v___x_3749_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3750_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_3751_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3);
v___x_3752_ = lean_string_append(v___x_3751_, v___x_3750_);
return v___x_3752_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3755_ = 1;
v___x_3756_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5));
v___x_3757_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3756_, v___x_3755_);
return v___x_3757_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3758_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6);
v___x_3759_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4);
v___x_3760_ = lean_string_append(v___x_3759_, v___x_3758_);
return v___x_3760_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3761_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3762_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7);
v___x_3763_ = lean_string_append(v___x_3762_, v___x_3761_);
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson(lean_object* v_json_3764_){
_start:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0));
v___x_3766_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_json_3764_, v___x_3765_);
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3776_; 
v_a_3767_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3769_ = v___x_3766_;
v_isShared_3770_ = v_isSharedCheck_3776_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3776_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3774_; 
v___x_3771_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8);
v___x_3772_ = lean_string_append(v___x_3771_, v_a_3767_);
lean_dec(v_a_3767_);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 0, v___x_3772_);
v___x_3774_ = v___x_3769_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3772_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
else
{
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
v_a_3777_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3766_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3766_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
lean_ctor_set_tag(v___x_3779_, 0);
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
v_a_3785_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3766_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3766_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams_toJson(lean_object* v_x_3795_){
_start:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3796_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0));
v___x_3797_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3797_, 0, v_x_3795_);
v___x_3798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3796_);
lean_ctor_set(v___x_3798_, 1, v___x_3797_);
v___x_3799_ = lean_box(0);
v___x_3800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3798_);
lean_ctor_set(v___x_3800_, 1, v___x_3799_);
v___x_3801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
lean_ctor_set(v___x_3801_, 1, v___x_3799_);
v___x_3802_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_3803_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_3801_, v___x_3802_);
v___x_3804_ = l_Lean_Json_mkObj(v___x_3803_);
lean_dec(v___x_3803_);
return v___x_3804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx(lean_object* v_x_3807_){
_start:
{
if (lean_obj_tag(v_x_3807_) == 0)
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_unsigned_to_nat(0u);
return v___x_3808_;
}
else
{
lean_object* v___x_3809_; 
v___x_3809_ = lean_unsigned_to_nat(1u);
return v___x_3809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx___boxed(lean_object* v_x_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lean_Lsp_OpenNamespace_ctorIdx(v_x_3810_);
lean_dec_ref(v_x_3810_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___redArg(lean_object* v_t_3812_, lean_object* v_k_3813_){
_start:
{
if (lean_obj_tag(v_t_3812_) == 0)
{
lean_object* v_namespace_3814_; lean_object* v_exceptions_3815_; lean_object* v___x_3816_; 
v_namespace_3814_ = lean_ctor_get(v_t_3812_, 0);
lean_inc(v_namespace_3814_);
v_exceptions_3815_ = lean_ctor_get(v_t_3812_, 1);
lean_inc_ref(v_exceptions_3815_);
lean_dec_ref_known(v_t_3812_, 2);
v___x_3816_ = lean_apply_2(v_k_3813_, v_namespace_3814_, v_exceptions_3815_);
return v___x_3816_;
}
else
{
lean_object* v_from_3817_; lean_object* v_to_3818_; lean_object* v___x_3819_; 
v_from_3817_ = lean_ctor_get(v_t_3812_, 0);
lean_inc(v_from_3817_);
v_to_3818_ = lean_ctor_get(v_t_3812_, 1);
lean_inc(v_to_3818_);
lean_dec_ref_known(v_t_3812_, 2);
v___x_3819_ = lean_apply_2(v_k_3813_, v_from_3817_, v_to_3818_);
return v___x_3819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim(lean_object* v_motive_3820_, lean_object* v_ctorIdx_3821_, lean_object* v_t_3822_, lean_object* v_h_3823_, lean_object* v_k_3824_){
_start:
{
lean_object* v___x_3825_; 
v___x_3825_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3822_, v_k_3824_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___boxed(lean_object* v_motive_3826_, lean_object* v_ctorIdx_3827_, lean_object* v_t_3828_, lean_object* v_h_3829_, lean_object* v_k_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_Lean_Lsp_OpenNamespace_ctorElim(v_motive_3826_, v_ctorIdx_3827_, v_t_3828_, v_h_3829_, v_k_3830_);
lean_dec(v_ctorIdx_3827_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim___redArg(lean_object* v_t_3832_, lean_object* v_allExcept_3833_){
_start:
{
lean_object* v___x_3834_; 
v___x_3834_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3832_, v_allExcept_3833_);
return v___x_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim(lean_object* v_motive_3835_, lean_object* v_t_3836_, lean_object* v_h_3837_, lean_object* v_allExcept_3838_){
_start:
{
lean_object* v___x_3839_; 
v___x_3839_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3836_, v_allExcept_3838_);
return v___x_3839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim___redArg(lean_object* v_t_3840_, lean_object* v_renamed_3841_){
_start:
{
lean_object* v___x_3842_; 
v___x_3842_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3840_, v_renamed_3841_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim(lean_object* v_motive_3843_, lean_object* v_t_3844_, lean_object* v_h_3845_, lean_object* v_renamed_3846_){
_start:
{
lean_object* v___x_3847_; 
v___x_3847_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3844_, v_renamed_3846_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(size_t v_sz_3848_, size_t v_i_3849_, lean_object* v_bs_3850_){
_start:
{
uint8_t v___x_3851_; 
v___x_3851_ = lean_usize_dec_lt(v_i_3849_, v_sz_3848_);
if (v___x_3851_ == 0)
{
lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3852_ = l_unsafeCast___redArg(v_bs_3850_);
lean_dec_ref(v_bs_3850_);
v___x_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3852_);
return v___x_3853_;
}
else
{
lean_object* v_v_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
v_v_3854_ = lean_array_uget_borrowed(v_bs_3850_, v_i_3849_);
v___x_3855_ = l_unsafeCast___redArg(v_v_3854_);
v___x_3856_ = l_Lean_Name_fromJson_x3f(v___x_3855_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3864_; 
lean_dec_ref(v_bs_3850_);
v_a_3857_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3859_ = v___x_3856_;
v_isShared_3860_ = v_isSharedCheck_3864_;
goto v_resetjp_3858_;
}
else
{
lean_inc(v_a_3857_);
lean_dec(v___x_3856_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3864_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
lean_object* v___x_3862_; 
if (v_isShared_3860_ == 0)
{
v___x_3862_ = v___x_3859_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v_a_3857_);
v___x_3862_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
return v___x_3862_;
}
}
}
else
{
lean_object* v_a_3865_; lean_object* v___x_3866_; lean_object* v_bs_x27_3867_; size_t v___x_3868_; size_t v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v_a_3865_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v___x_3856_, 1);
v___x_3866_ = lean_unsigned_to_nat(0u);
v_bs_x27_3867_ = lean_array_uset(v_bs_3850_, v_i_3849_, v___x_3866_);
v___x_3868_ = ((size_t)1ULL);
v___x_3869_ = lean_usize_add(v_i_3849_, v___x_3868_);
v___x_3870_ = l_unsafeCast___redArg(v_a_3865_);
lean_dec(v_a_3865_);
v___x_3871_ = lean_array_uset(v_bs_x27_3867_, v_i_3849_, v___x_3870_);
v_i_3849_ = v___x_3869_;
v_bs_3850_ = v___x_3871_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0___boxed(lean_object* v_sz_3873_, lean_object* v_i_3874_, lean_object* v_bs_3875_){
_start:
{
size_t v_sz_boxed_3876_; size_t v_i_boxed_3877_; lean_object* v_res_3878_; 
v_sz_boxed_3876_ = lean_unbox_usize(v_sz_3873_);
lean_dec(v_sz_3873_);
v_i_boxed_3877_ = lean_unbox_usize(v_i_3874_);
lean_dec(v_i_3874_);
v_res_3878_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(v_sz_boxed_3876_, v_i_boxed_3877_, v_bs_3875_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0(lean_object* v_x_3879_){
_start:
{
if (lean_obj_tag(v_x_3879_) == 4)
{
lean_object* v_elems_3880_; size_t v_sz_3881_; size_t v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v_elems_3880_ = lean_ctor_get(v_x_3879_, 0);
lean_inc_ref(v_elems_3880_);
lean_dec_ref_known(v_x_3879_, 1);
v_sz_3881_ = lean_array_size(v_elems_3880_);
v___x_3882_ = ((size_t)0ULL);
v___x_3883_ = l_unsafeCast___redArg(v_elems_3880_);
lean_dec_ref(v_elems_3880_);
v___x_3884_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(v_sz_3881_, v___x_3882_, v___x_3883_);
v___x_3885_ = l_unsafeCast___redArg(v___x_3884_);
lean_dec_ref(v___x_3884_);
return v___x_3885_;
}
else
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3886_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_3887_ = lean_unsigned_to_nat(80u);
v___x_3888_ = l_Lean_Json_pretty(v_x_3879_, v___x_3887_);
v___x_3889_ = lean_string_append(v___x_3886_, v___x_3888_);
lean_dec_ref(v___x_3888_);
v___x_3890_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_3891_ = lean_string_append(v___x_3889_, v___x_3890_);
v___x_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
return v___x_3892_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson(lean_object* v_json_3927_){
_start:
{
lean_object* v___x_3928_; 
lean_inc(v_json_3927_);
v___x_3928_ = l_Lean_Json_getTag_x3f(v_json_3927_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v___x_3929_; 
lean_dec(v_json_3927_);
v___x_3929_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0));
return v___x_3929_;
}
else
{
lean_object* v_val_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; uint8_t v___x_3933_; 
v_val_3930_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_val_3930_);
lean_dec_ref_known(v___x_3928_, 1);
v___x_3931_ = lean_box(0);
v___x_3932_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1));
v___x_3933_ = lean_string_dec_eq(v_val_3930_, v___x_3932_);
if (v___x_3933_ == 0)
{
lean_object* v___x_3934_; uint8_t v___x_3935_; 
v___x_3934_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2));
v___x_3935_ = lean_string_dec_eq(v_val_3930_, v___x_3934_);
lean_dec(v_val_3930_);
if (v___x_3935_ == 0)
{
lean_object* v___x_3936_; 
lean_dec(v_json_3927_);
v___x_3936_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3));
return v___x_3936_;
}
else
{
lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3937_ = lean_unsigned_to_nat(2u);
v___x_3938_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9));
v___x_3939_ = l_Lean_Json_parseCtorFields(v_json_3927_, v___x_3934_, v___x_3937_, v___x_3938_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3939_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3939_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_a_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v_a_3948_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3948_);
lean_dec_ref_known(v___x_3939_, 1);
v___x_3949_ = lean_unsigned_to_nat(0u);
v___x_3950_ = lean_array_get_borrowed(v___x_3931_, v_a_3948_, v___x_3949_);
lean_inc(v___x_3950_);
v___x_3951_ = l_Lean_Name_fromJson_x3f(v___x_3950_);
if (lean_obj_tag(v___x_3951_) == 0)
{
lean_object* v_a_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3959_; 
lean_dec(v_a_3948_);
v_a_3952_ = lean_ctor_get(v___x_3951_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3951_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3954_ = v___x_3951_;
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_a_3952_);
lean_dec(v___x_3951_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3957_; 
if (v_isShared_3955_ == 0)
{
v___x_3957_ = v___x_3954_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_a_3952_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
else
{
lean_object* v_a_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v_a_3960_ = lean_ctor_get(v___x_3951_, 0);
lean_inc(v_a_3960_);
lean_dec_ref_known(v___x_3951_, 1);
v___x_3961_ = lean_unsigned_to_nat(1u);
v___x_3962_ = lean_array_get(v___x_3931_, v_a_3948_, v___x_3961_);
lean_dec(v_a_3948_);
v___x_3963_ = l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0(v___x_3962_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3971_; 
lean_dec(v_a_3960_);
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3966_ = v___x_3963_;
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3963_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3969_; 
if (v_isShared_3967_ == 0)
{
v___x_3969_ = v___x_3966_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_a_3964_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
}
else
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3980_; 
v_a_3972_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3974_ = v___x_3963_;
v_isShared_3975_ = v_isSharedCheck_3980_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3963_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3980_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3976_; lean_object* v___x_3978_; 
v___x_3976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3976_, 0, v_a_3960_);
lean_ctor_set(v___x_3976_, 1, v_a_3972_);
if (v_isShared_3975_ == 0)
{
lean_ctor_set(v___x_3974_, 0, v___x_3976_);
v___x_3978_ = v___x_3974_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v___x_3976_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; 
lean_dec(v_val_3930_);
v___x_3981_ = lean_unsigned_to_nat(2u);
v___x_3982_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15));
v___x_3983_ = l_Lean_Json_parseCtorFields(v_json_3927_, v___x_3932_, v___x_3981_, v___x_3982_);
if (lean_obj_tag(v___x_3983_) == 0)
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3991_; 
v_a_3984_ = lean_ctor_get(v___x_3983_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v___x_3983_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3986_ = v___x_3983_;
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v___x_3983_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
return v___x_3989_;
}
}
}
else
{
lean_object* v_a_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; 
v_a_3992_ = lean_ctor_get(v___x_3983_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3983_, 1);
v___x_3993_ = lean_unsigned_to_nat(0u);
v___x_3994_ = lean_array_get_borrowed(v___x_3931_, v_a_3992_, v___x_3993_);
lean_inc(v___x_3994_);
v___x_3995_ = l_Lean_Name_fromJson_x3f(v___x_3994_);
if (lean_obj_tag(v___x_3995_) == 0)
{
lean_object* v_a_3996_; lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4003_; 
lean_dec(v_a_3992_);
v_a_3996_ = lean_ctor_get(v___x_3995_, 0);
v_isSharedCheck_4003_ = !lean_is_exclusive(v___x_3995_);
if (v_isSharedCheck_4003_ == 0)
{
v___x_3998_ = v___x_3995_;
v_isShared_3999_ = v_isSharedCheck_4003_;
goto v_resetjp_3997_;
}
else
{
lean_inc(v_a_3996_);
lean_dec(v___x_3995_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4003_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
lean_object* v___x_4001_; 
if (v_isShared_3999_ == 0)
{
v___x_4001_ = v___x_3998_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_a_3996_);
v___x_4001_ = v_reuseFailAlloc_4002_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
return v___x_4001_;
}
}
}
else
{
lean_object* v_a_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
v_a_4004_ = lean_ctor_get(v___x_3995_, 0);
lean_inc(v_a_4004_);
lean_dec_ref_known(v___x_3995_, 1);
v___x_4005_ = lean_unsigned_to_nat(1u);
v___x_4006_ = lean_array_get(v___x_3931_, v_a_3992_, v___x_4005_);
lean_dec(v_a_3992_);
v___x_4007_ = l_Lean_Name_fromJson_x3f(v___x_4006_);
if (lean_obj_tag(v___x_4007_) == 0)
{
lean_object* v_a_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4015_; 
lean_dec(v_a_4004_);
v_a_4008_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4010_ = v___x_4007_;
v_isShared_4011_ = v_isSharedCheck_4015_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_a_4008_);
lean_dec(v___x_4007_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4015_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4013_; 
if (v_isShared_4011_ == 0)
{
v___x_4013_ = v___x_4010_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_a_4008_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
else
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4024_; 
v_a_4016_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4018_ = v___x_4007_;
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_4007_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4020_; lean_object* v___x_4022_; 
v___x_4020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4020_, 0, v_a_4004_);
lean_ctor_set(v___x_4020_, 1, v_a_4016_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4020_);
v___x_4022_ = v___x_4018_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v___x_4020_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(size_t v_sz_4027_, size_t v_i_4028_, lean_object* v_bs_4029_){
_start:
{
uint8_t v___x_4030_; 
v___x_4030_ = lean_usize_dec_lt(v_i_4028_, v_sz_4027_);
if (v___x_4030_ == 0)
{
lean_object* v___x_4031_; 
v___x_4031_ = l_unsafeCast___redArg(v_bs_4029_);
lean_dec_ref(v_bs_4029_);
return v___x_4031_;
}
else
{
lean_object* v_v_4032_; lean_object* v___x_4033_; lean_object* v_bs_x27_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; size_t v___x_4038_; size_t v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v_v_4032_ = lean_array_uget(v_bs_4029_, v_i_4028_);
v___x_4033_ = lean_unsigned_to_nat(0u);
v_bs_x27_4034_ = lean_array_uset(v_bs_4029_, v_i_4028_, v___x_4033_);
v___x_4035_ = l_unsafeCast___redArg(v_v_4032_);
lean_dec(v_v_4032_);
v___x_4036_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4035_, v___x_4030_);
v___x_4037_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
v___x_4038_ = ((size_t)1ULL);
v___x_4039_ = lean_usize_add(v_i_4028_, v___x_4038_);
v___x_4040_ = l_unsafeCast___redArg(v___x_4037_);
lean_dec_ref_known(v___x_4037_, 1);
v___x_4041_ = lean_array_uset(v_bs_x27_4034_, v_i_4028_, v___x_4040_);
v_i_4028_ = v___x_4039_;
v_bs_4029_ = v___x_4041_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4043_, lean_object* v_i_4044_, lean_object* v_bs_4045_){
_start:
{
size_t v_sz_boxed_4046_; size_t v_i_boxed_4047_; lean_object* v_res_4048_; 
v_sz_boxed_4046_ = lean_unbox_usize(v_sz_4043_);
lean_dec(v_sz_4043_);
v_i_boxed_4047_ = lean_unbox_usize(v_i_4044_);
lean_dec(v_i_4044_);
v_res_4048_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(v_sz_boxed_4046_, v_i_boxed_4047_, v_bs_4045_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(lean_object* v_a_4049_){
_start:
{
size_t v_sz_4050_; size_t v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; 
v_sz_4050_ = lean_array_size(v_a_4049_);
v___x_4051_ = ((size_t)0ULL);
v___x_4052_ = l_unsafeCast___redArg(v_a_4049_);
v___x_4053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(v_sz_4050_, v___x_4051_, v___x_4052_);
v___x_4054_ = l_unsafeCast___redArg(v___x_4053_);
lean_dec_ref(v___x_4053_);
v___x_4055_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4054_);
return v___x_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0___boxed(lean_object* v_a_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(v_a_4056_);
lean_dec_ref(v_a_4056_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonOpenNamespace_toJson(lean_object* v_x_4058_){
_start:
{
if (lean_obj_tag(v_x_4058_) == 0)
{
lean_object* v_namespace_4059_; lean_object* v_exceptions_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4082_; 
v_namespace_4059_ = lean_ctor_get(v_x_4058_, 0);
v_exceptions_4060_ = lean_ctor_get(v_x_4058_, 1);
v_isSharedCheck_4082_ = !lean_is_exclusive(v_x_4058_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4062_ = v_x_4058_;
v_isShared_4063_ = v_isSharedCheck_4082_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_exceptions_4060_);
lean_inc(v_namespace_4059_);
lean_dec(v_x_4058_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4082_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; uint8_t v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4070_; 
v___x_4064_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2));
v___x_4065_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4));
v___x_4066_ = 1;
v___x_4067_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_namespace_4059_, v___x_4066_);
v___x_4068_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4067_);
if (v_isShared_4063_ == 0)
{
lean_ctor_set(v___x_4062_, 1, v___x_4068_);
lean_ctor_set(v___x_4062_, 0, v___x_4065_);
v___x_4070_ = v___x_4062_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v___x_4065_);
lean_ctor_set(v_reuseFailAlloc_4081_, 1, v___x_4068_);
v___x_4070_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v___x_4071_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6));
v___x_4072_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(v_exceptions_4060_);
lean_dec_ref(v_exceptions_4060_);
v___x_4073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4073_, 0, v___x_4071_);
lean_ctor_set(v___x_4073_, 1, v___x_4072_);
v___x_4074_ = lean_box(0);
v___x_4075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4073_);
lean_ctor_set(v___x_4075_, 1, v___x_4074_);
v___x_4076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4070_);
lean_ctor_set(v___x_4076_, 1, v___x_4075_);
v___x_4077_ = l_Lean_Json_mkObj(v___x_4076_);
lean_dec_ref_known(v___x_4076_, 2);
v___x_4078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4064_);
lean_ctor_set(v___x_4078_, 1, v___x_4077_);
v___x_4079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4079_, 0, v___x_4078_);
lean_ctor_set(v___x_4079_, 1, v___x_4074_);
v___x_4080_ = l_Lean_Json_mkObj(v___x_4079_);
lean_dec_ref_known(v___x_4079_, 2);
return v___x_4080_;
}
}
}
else
{
lean_object* v_from_4083_; lean_object* v_to_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4107_; 
v_from_4083_ = lean_ctor_get(v_x_4058_, 0);
v_to_4084_ = lean_ctor_get(v_x_4058_, 1);
v_isSharedCheck_4107_ = !lean_is_exclusive(v_x_4058_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4086_ = v_x_4058_;
v_isShared_4087_ = v_isSharedCheck_4107_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_to_4084_);
lean_inc(v_from_4083_);
lean_dec(v_x_4058_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4107_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; uint8_t v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4094_; 
v___x_4088_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1));
v___x_4089_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10));
v___x_4090_ = 1;
v___x_4091_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_from_4083_, v___x_4090_);
v___x_4092_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4092_, 0, v___x_4091_);
if (v_isShared_4087_ == 0)
{
lean_ctor_set_tag(v___x_4086_, 0);
lean_ctor_set(v___x_4086_, 1, v___x_4092_);
lean_ctor_set(v___x_4086_, 0, v___x_4089_);
v___x_4094_ = v___x_4086_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v___x_4089_);
lean_ctor_set(v_reuseFailAlloc_4106_, 1, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4095_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12));
v___x_4096_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_to_4084_, v___x_4090_);
v___x_4097_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4096_);
v___x_4098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4095_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
v___x_4099_ = lean_box(0);
v___x_4100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4098_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4094_);
lean_ctor_set(v___x_4101_, 1, v___x_4100_);
v___x_4102_ = l_Lean_Json_mkObj(v___x_4101_);
lean_dec_ref_known(v___x_4101_, 2);
v___x_4103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4088_);
lean_ctor_set(v___x_4103_, 1, v___x_4102_);
v___x_4104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
lean_ctor_set(v___x_4104_, 1, v___x_4099_);
v___x_4105_ = l_Lean_Json_mkObj(v___x_4104_);
lean_dec_ref_known(v___x_4104_, 2);
return v___x_4105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(size_t v_sz_4110_, size_t v_i_4111_, lean_object* v_bs_4112_){
_start:
{
uint8_t v___x_4113_; 
v___x_4113_ = lean_usize_dec_lt(v_i_4111_, v_sz_4110_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4114_ = l_unsafeCast___redArg(v_bs_4112_);
lean_dec_ref(v_bs_4112_);
v___x_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
return v___x_4115_;
}
else
{
lean_object* v_v_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v_v_4116_ = lean_array_uget_borrowed(v_bs_4112_, v_i_4111_);
v___x_4117_ = l_unsafeCast___redArg(v_v_4116_);
v___x_4118_ = l_Lean_Lsp_instFromJsonOpenNamespace_fromJson(v___x_4117_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4126_; 
lean_dec_ref(v_bs_4112_);
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4126_ == 0)
{
v___x_4121_ = v___x_4118_;
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v___x_4118_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4124_; 
if (v_isShared_4122_ == 0)
{
v___x_4124_ = v___x_4121_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v_a_4119_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
}
else
{
lean_object* v_a_4127_; lean_object* v___x_4128_; lean_object* v_bs_x27_4129_; size_t v___x_4130_; size_t v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; 
v_a_4127_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4118_, 1);
v___x_4128_ = lean_unsigned_to_nat(0u);
v_bs_x27_4129_ = lean_array_uset(v_bs_4112_, v_i_4111_, v___x_4128_);
v___x_4130_ = ((size_t)1ULL);
v___x_4131_ = lean_usize_add(v_i_4111_, v___x_4130_);
v___x_4132_ = l_unsafeCast___redArg(v_a_4127_);
lean_dec(v_a_4127_);
v___x_4133_ = lean_array_uset(v_bs_x27_4129_, v_i_4111_, v___x_4132_);
v_i_4111_ = v___x_4131_;
v_bs_4112_ = v___x_4133_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4135_, lean_object* v_i_4136_, lean_object* v_bs_4137_){
_start:
{
size_t v_sz_boxed_4138_; size_t v_i_boxed_4139_; lean_object* v_res_4140_; 
v_sz_boxed_4138_ = lean_unbox_usize(v_sz_4135_);
lean_dec(v_sz_4135_);
v_i_boxed_4139_ = lean_unbox_usize(v_i_4136_);
lean_dec(v_i_4136_);
v_res_4140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_4138_, v_i_boxed_4139_, v_bs_4137_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0(lean_object* v_x_4141_){
_start:
{
if (lean_obj_tag(v_x_4141_) == 4)
{
lean_object* v_elems_4142_; size_t v_sz_4143_; size_t v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
v_elems_4142_ = lean_ctor_get(v_x_4141_, 0);
lean_inc_ref(v_elems_4142_);
lean_dec_ref_known(v_x_4141_, 1);
v_sz_4143_ = lean_array_size(v_elems_4142_);
v___x_4144_ = ((size_t)0ULL);
v___x_4145_ = l_unsafeCast___redArg(v_elems_4142_);
lean_dec_ref(v_elems_4142_);
v___x_4146_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(v_sz_4143_, v___x_4144_, v___x_4145_);
v___x_4147_ = l_unsafeCast___redArg(v___x_4146_);
lean_dec_ref(v___x_4146_);
return v___x_4147_;
}
else
{
lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4148_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4149_ = lean_unsigned_to_nat(80u);
v___x_4150_ = l_Lean_Json_pretty(v_x_4141_, v___x_4149_);
v___x_4151_ = lean_string_append(v___x_4148_, v___x_4150_);
lean_dec_ref(v___x_4150_);
v___x_4152_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4153_ = lean_string_append(v___x_4151_, v___x_4152_);
v___x_4154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
return v___x_4154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(lean_object* v_j_4155_, lean_object* v_k_4156_){
_start:
{
lean_object* v___x_4157_; lean_object* v___x_4158_; 
v___x_4157_ = l_Lean_Json_getObjValD(v_j_4155_, v_k_4156_);
v___x_4158_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0(v___x_4157_);
return v___x_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0___boxed(lean_object* v_j_4159_, lean_object* v_k_4160_){
_start:
{
lean_object* v_res_4161_; 
v_res_4161_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(v_j_4159_, v_k_4160_);
lean_dec_ref(v_k_4160_);
return v_res_4161_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4168_ = 1;
v___x_4169_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2));
v___x_4170_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4169_, v___x_4168_);
return v___x_4170_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4171_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4172_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3);
v___x_4173_ = lean_string_append(v___x_4172_, v___x_4171_);
return v___x_4173_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4176_ = 1;
v___x_4177_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5));
v___x_4178_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4177_, v___x_4176_);
return v___x_4178_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; 
v___x_4179_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6);
v___x_4180_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4);
v___x_4181_ = lean_string_append(v___x_4180_, v___x_4179_);
return v___x_4181_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
v___x_4182_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4183_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7);
v___x_4184_ = lean_string_append(v___x_4183_, v___x_4182_);
return v___x_4184_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11(void){
_start:
{
uint8_t v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4188_ = 1;
v___x_4189_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10));
v___x_4190_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4189_, v___x_4188_);
return v___x_4190_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12(void){
_start:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4191_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11);
v___x_4192_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4);
v___x_4193_ = lean_string_append(v___x_4192_, v___x_4191_);
return v___x_4193_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13(void){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v___x_4194_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4195_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12);
v___x_4196_ = lean_string_append(v___x_4195_, v___x_4194_);
return v___x_4196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson(lean_object* v_json_4197_){
_start:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; 
v___x_4198_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0));
lean_inc(v_json_4197_);
v___x_4199_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_json_4197_, v___x_4198_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4209_; 
lean_dec(v_json_4197_);
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4202_ = v___x_4199_;
v_isShared_4203_ = v_isSharedCheck_4209_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4199_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4209_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4207_; 
v___x_4204_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8);
v___x_4205_ = lean_string_append(v___x_4204_, v_a_4200_);
lean_dec(v_a_4200_);
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 0, v___x_4205_);
v___x_4207_ = v___x_4202_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v___x_4205_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
else
{
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4217_; 
lean_dec(v_json_4197_);
v_a_4210_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4212_ = v___x_4199_;
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4199_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4213_ == 0)
{
lean_ctor_set_tag(v___x_4212_, 0);
v___x_4215_ = v___x_4212_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
}
else
{
lean_object* v_a_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v_a_4218_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4218_);
lean_dec_ref_known(v___x_4199_, 1);
v___x_4219_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9));
v___x_4220_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(v_json_4197_, v___x_4219_);
if (lean_obj_tag(v___x_4220_) == 0)
{
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4230_; 
lean_dec(v_a_4218_);
v_a_4221_ = lean_ctor_get(v___x_4220_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4223_ = v___x_4220_;
v_isShared_4224_ = v_isSharedCheck_4230_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4220_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4230_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4228_; 
v___x_4225_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13);
v___x_4226_ = lean_string_append(v___x_4225_, v_a_4221_);
lean_dec(v_a_4221_);
if (v_isShared_4224_ == 0)
{
lean_ctor_set(v___x_4223_, 0, v___x_4226_);
v___x_4228_ = v___x_4223_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v___x_4226_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
else
{
if (lean_obj_tag(v___x_4220_) == 0)
{
lean_object* v_a_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4238_; 
lean_dec(v_a_4218_);
v_a_4231_ = lean_ctor_get(v___x_4220_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4233_ = v___x_4220_;
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_a_4231_);
lean_dec(v___x_4220_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v___x_4236_; 
if (v_isShared_4234_ == 0)
{
lean_ctor_set_tag(v___x_4233_, 0);
v___x_4236_ = v___x_4233_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_a_4231_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
return v___x_4236_;
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4247_; 
v_a_4239_ = lean_ctor_get(v___x_4220_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4241_ = v___x_4220_;
v_isShared_4242_ = v_isSharedCheck_4247_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v___x_4220_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4247_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4243_; lean_object* v___x_4245_; 
v___x_4243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4243_, 0, v_a_4218_);
lean_ctor_set(v___x_4243_, 1, v_a_4239_);
if (v_isShared_4242_ == 0)
{
lean_ctor_set(v___x_4241_, 0, v___x_4243_);
v___x_4245_ = v___x_4241_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v___x_4243_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(size_t v_sz_4250_, size_t v_i_4251_, lean_object* v_bs_4252_){
_start:
{
uint8_t v___x_4253_; 
v___x_4253_ = lean_usize_dec_lt(v_i_4251_, v_sz_4250_);
if (v___x_4253_ == 0)
{
lean_object* v___x_4254_; 
v___x_4254_ = l_unsafeCast___redArg(v_bs_4252_);
lean_dec_ref(v_bs_4252_);
return v___x_4254_;
}
else
{
lean_object* v_v_4255_; lean_object* v___x_4256_; lean_object* v_bs_x27_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; size_t v___x_4260_; size_t v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; 
v_v_4255_ = lean_array_uget(v_bs_4252_, v_i_4251_);
v___x_4256_ = lean_unsigned_to_nat(0u);
v_bs_x27_4257_ = lean_array_uset(v_bs_4252_, v_i_4251_, v___x_4256_);
v___x_4258_ = l_unsafeCast___redArg(v_v_4255_);
lean_dec(v_v_4255_);
v___x_4259_ = l_Lean_Lsp_instToJsonOpenNamespace_toJson(v___x_4258_);
v___x_4260_ = ((size_t)1ULL);
v___x_4261_ = lean_usize_add(v_i_4251_, v___x_4260_);
v___x_4262_ = l_unsafeCast___redArg(v___x_4259_);
lean_dec(v___x_4259_);
v___x_4263_ = lean_array_uset(v_bs_x27_4257_, v_i_4251_, v___x_4262_);
v_i_4251_ = v___x_4261_;
v_bs_4252_ = v___x_4263_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4265_, lean_object* v_i_4266_, lean_object* v_bs_4267_){
_start:
{
size_t v_sz_boxed_4268_; size_t v_i_boxed_4269_; lean_object* v_res_4270_; 
v_sz_boxed_4268_ = lean_unbox_usize(v_sz_4265_);
lean_dec(v_sz_4265_);
v_i_boxed_4269_ = lean_unbox_usize(v_i_4266_);
lean_dec(v_i_4266_);
v_res_4270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(v_sz_boxed_4268_, v_i_boxed_4269_, v_bs_4267_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(lean_object* v_a_4271_){
_start:
{
size_t v_sz_4272_; size_t v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v_sz_4272_ = lean_array_size(v_a_4271_);
v___x_4273_ = ((size_t)0ULL);
v___x_4274_ = l_unsafeCast___redArg(v_a_4271_);
v___x_4275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(v_sz_4272_, v___x_4273_, v___x_4274_);
v___x_4276_ = l_unsafeCast___redArg(v___x_4275_);
lean_dec_ref(v___x_4275_);
v___x_4277_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4277_, 0, v___x_4276_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0___boxed(lean_object* v_a_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(v_a_4278_);
lean_dec_ref(v_a_4278_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery_toJson(lean_object* v_x_4280_){
_start:
{
lean_object* v_identifier_4281_; lean_object* v_openNamespaces_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4302_; 
v_identifier_4281_ = lean_ctor_get(v_x_4280_, 0);
v_openNamespaces_4282_ = lean_ctor_get(v_x_4280_, 1);
v_isSharedCheck_4302_ = !lean_is_exclusive(v_x_4280_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4284_ = v_x_4280_;
v_isShared_4285_ = v_isSharedCheck_4302_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_openNamespaces_4282_);
lean_inc(v_identifier_4281_);
lean_dec(v_x_4280_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4302_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4289_; 
v___x_4286_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0));
v___x_4287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4287_, 0, v_identifier_4281_);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 1, v___x_4287_);
lean_ctor_set(v___x_4284_, 0, v___x_4286_);
v___x_4289_ = v___x_4284_;
goto v_reusejp_4288_;
}
else
{
lean_object* v_reuseFailAlloc_4301_; 
v_reuseFailAlloc_4301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4301_, 0, v___x_4286_);
lean_ctor_set(v_reuseFailAlloc_4301_, 1, v___x_4287_);
v___x_4289_ = v_reuseFailAlloc_4301_;
goto v_reusejp_4288_;
}
v_reusejp_4288_:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4290_ = lean_box(0);
v___x_4291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4289_);
lean_ctor_set(v___x_4291_, 1, v___x_4290_);
v___x_4292_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9));
v___x_4293_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(v_openNamespaces_4282_);
lean_dec_ref(v_openNamespaces_4282_);
v___x_4294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4292_);
lean_ctor_set(v___x_4294_, 1, v___x_4293_);
v___x_4295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set(v___x_4295_, 1, v___x_4290_);
v___x_4296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4296_, 0, v___x_4295_);
lean_ctor_set(v___x_4296_, 1, v___x_4290_);
v___x_4297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4291_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4299_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4297_, v___x_4298_);
v___x_4300_ = l_Lean_Json_mkObj(v___x_4299_);
lean_dec(v___x_4299_);
return v___x_4300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(lean_object* v_j_4308_, lean_object* v_k_4309_){
_start:
{
lean_object* v___x_4310_; 
v___x_4310_ = l_Lean_Json_getObjValD(v_j_4308_, v_k_4309_);
switch(lean_obj_tag(v___x_4310_))
{
case 3:
{
lean_object* v_s_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4319_; 
v_s_4311_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4313_ = v___x_4310_;
v_isShared_4314_ = v_isSharedCheck_4319_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_s_4311_);
lean_dec(v___x_4310_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4319_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
lean_ctor_set_tag(v___x_4313_, 0);
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_s_4311_);
v___x_4316_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
lean_object* v___x_4317_; 
v___x_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4317_, 0, v___x_4316_);
return v___x_4317_;
}
}
}
case 2:
{
lean_object* v_n_4320_; lean_object* v___x_4322_; uint8_t v_isShared_4323_; uint8_t v_isSharedCheck_4328_; 
v_n_4320_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4322_ = v___x_4310_;
v_isShared_4323_ = v_isSharedCheck_4328_;
goto v_resetjp_4321_;
}
else
{
lean_inc(v_n_4320_);
lean_dec(v___x_4310_);
v___x_4322_ = lean_box(0);
v_isShared_4323_ = v_isSharedCheck_4328_;
goto v_resetjp_4321_;
}
v_resetjp_4321_:
{
lean_object* v___x_4325_; 
if (v_isShared_4323_ == 0)
{
lean_ctor_set_tag(v___x_4322_, 1);
v___x_4325_ = v___x_4322_;
goto v_reusejp_4324_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v_n_4320_);
v___x_4325_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4324_;
}
v_reusejp_4324_:
{
lean_object* v___x_4326_; 
v___x_4326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4326_, 0, v___x_4325_);
return v___x_4326_;
}
}
}
default: 
{
lean_object* v___x_4329_; 
lean_dec(v___x_4310_);
v___x_4329_ = ((lean_object*)(l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1));
return v___x_4329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___boxed(lean_object* v_j_4330_, lean_object* v_k_4331_){
_start:
{
lean_object* v_res_4332_; 
v_res_4332_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(v_j_4330_, v_k_4331_);
lean_dec_ref(v_k_4331_);
return v_res_4332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(size_t v_sz_4333_, size_t v_i_4334_, lean_object* v_bs_4335_){
_start:
{
uint8_t v___x_4336_; 
v___x_4336_ = lean_usize_dec_lt(v_i_4334_, v_sz_4333_);
if (v___x_4336_ == 0)
{
lean_object* v___x_4337_; lean_object* v___x_4338_; 
v___x_4337_ = l_unsafeCast___redArg(v_bs_4335_);
lean_dec_ref(v_bs_4335_);
v___x_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4338_, 0, v___x_4337_);
return v___x_4338_;
}
else
{
lean_object* v_v_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; 
v_v_4339_ = lean_array_uget_borrowed(v_bs_4335_, v_i_4334_);
v___x_4340_ = l_unsafeCast___redArg(v_v_4339_);
v___x_4341_ = l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson(v___x_4340_);
if (lean_obj_tag(v___x_4341_) == 0)
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
lean_dec_ref(v_bs_4335_);
v_a_4342_ = lean_ctor_get(v___x_4341_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4341_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v___x_4341_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4341_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
else
{
lean_object* v_a_4350_; lean_object* v___x_4351_; lean_object* v_bs_x27_4352_; size_t v___x_4353_; size_t v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v_a_4350_ = lean_ctor_get(v___x_4341_, 0);
lean_inc(v_a_4350_);
lean_dec_ref_known(v___x_4341_, 1);
v___x_4351_ = lean_unsigned_to_nat(0u);
v_bs_x27_4352_ = lean_array_uset(v_bs_4335_, v_i_4334_, v___x_4351_);
v___x_4353_ = ((size_t)1ULL);
v___x_4354_ = lean_usize_add(v_i_4334_, v___x_4353_);
v___x_4355_ = l_unsafeCast___redArg(v_a_4350_);
lean_dec(v_a_4350_);
v___x_4356_ = lean_array_uset(v_bs_x27_4352_, v_i_4334_, v___x_4355_);
v_i_4334_ = v___x_4354_;
v_bs_4335_ = v___x_4356_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_4358_, lean_object* v_i_4359_, lean_object* v_bs_4360_){
_start:
{
size_t v_sz_boxed_4361_; size_t v_i_boxed_4362_; lean_object* v_res_4363_; 
v_sz_boxed_4361_ = lean_unbox_usize(v_sz_4358_);
lean_dec(v_sz_4358_);
v_i_boxed_4362_ = lean_unbox_usize(v_i_4359_);
lean_dec(v_i_4359_);
v_res_4363_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_4361_, v_i_boxed_4362_, v_bs_4360_);
return v_res_4363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1(lean_object* v_x_4364_){
_start:
{
if (lean_obj_tag(v_x_4364_) == 4)
{
lean_object* v_elems_4365_; size_t v_sz_4366_; size_t v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v_elems_4365_ = lean_ctor_get(v_x_4364_, 0);
lean_inc_ref(v_elems_4365_);
lean_dec_ref_known(v_x_4364_, 1);
v_sz_4366_ = lean_array_size(v_elems_4365_);
v___x_4367_ = ((size_t)0ULL);
v___x_4368_ = l_unsafeCast___redArg(v_elems_4365_);
lean_dec_ref(v_elems_4365_);
v___x_4369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(v_sz_4366_, v___x_4367_, v___x_4368_);
v___x_4370_ = l_unsafeCast___redArg(v___x_4369_);
lean_dec_ref(v___x_4369_);
return v___x_4370_;
}
else
{
lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4371_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4372_ = lean_unsigned_to_nat(80u);
v___x_4373_ = l_Lean_Json_pretty(v_x_4364_, v___x_4372_);
v___x_4374_ = lean_string_append(v___x_4371_, v___x_4373_);
lean_dec_ref(v___x_4373_);
v___x_4375_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4376_ = lean_string_append(v___x_4374_, v___x_4375_);
v___x_4377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4376_);
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(lean_object* v_j_4378_, lean_object* v_k_4379_){
_start:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4380_ = l_Lean_Json_getObjValD(v_j_4378_, v_k_4379_);
v___x_4381_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1(v___x_4380_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1___boxed(lean_object* v_j_4382_, lean_object* v_k_4383_){
_start:
{
lean_object* v_res_4384_; 
v_res_4384_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(v_j_4382_, v_k_4383_);
lean_dec_ref(v_k_4383_);
return v_res_4384_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4391_ = 1;
v___x_4392_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2));
v___x_4393_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4392_, v___x_4391_);
return v___x_4393_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; 
v___x_4394_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4395_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3);
v___x_4396_ = lean_string_append(v___x_4395_, v___x_4394_);
return v___x_4396_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4399_ = 1;
v___x_4400_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5));
v___x_4401_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4400_, v___x_4399_);
return v___x_4401_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4402_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6);
v___x_4403_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4);
v___x_4404_ = lean_string_append(v___x_4403_, v___x_4402_);
return v___x_4404_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4405_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4406_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7);
v___x_4407_ = lean_string_append(v___x_4406_, v___x_4405_);
return v___x_4407_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11(void){
_start:
{
uint8_t v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; 
v___x_4411_ = 1;
v___x_4412_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10));
v___x_4413_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4412_, v___x_4411_);
return v___x_4413_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4414_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11);
v___x_4415_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4);
v___x_4416_ = lean_string_append(v___x_4415_, v___x_4414_);
return v___x_4416_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13(void){
_start:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4417_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4418_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12);
v___x_4419_ = lean_string_append(v___x_4418_, v___x_4417_);
return v___x_4419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson(lean_object* v_json_4420_){
_start:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4421_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0));
lean_inc(v_json_4420_);
v___x_4422_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(v_json_4420_, v___x_4421_);
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v_a_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4432_; 
lean_dec(v_json_4420_);
v_a_4423_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4432_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4432_ == 0)
{
v___x_4425_ = v___x_4422_;
v_isShared_4426_ = v_isSharedCheck_4432_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_a_4423_);
lean_dec(v___x_4422_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4432_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4430_; 
v___x_4427_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8);
v___x_4428_ = lean_string_append(v___x_4427_, v_a_4423_);
lean_dec(v_a_4423_);
if (v_isShared_4426_ == 0)
{
lean_ctor_set(v___x_4425_, 0, v___x_4428_);
v___x_4430_ = v___x_4425_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v___x_4428_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
return v___x_4430_;
}
}
}
else
{
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v_a_4433_; lean_object* v___x_4435_; uint8_t v_isShared_4436_; uint8_t v_isSharedCheck_4440_; 
lean_dec(v_json_4420_);
v_a_4433_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4435_ = v___x_4422_;
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
else
{
lean_inc(v_a_4433_);
lean_dec(v___x_4422_);
v___x_4435_ = lean_box(0);
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
v_resetjp_4434_:
{
lean_object* v___x_4438_; 
if (v_isShared_4436_ == 0)
{
lean_ctor_set_tag(v___x_4435_, 0);
v___x_4438_ = v___x_4435_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v_a_4433_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
return v___x_4438_;
}
}
}
else
{
lean_object* v_a_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v_a_4441_ = lean_ctor_get(v___x_4422_, 0);
lean_inc(v_a_4441_);
lean_dec_ref_known(v___x_4422_, 1);
v___x_4442_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9));
v___x_4443_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(v_json_4420_, v___x_4442_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v_a_4444_; lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4453_; 
lean_dec(v_a_4441_);
v_a_4444_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4446_ = v___x_4443_;
v_isShared_4447_ = v_isSharedCheck_4453_;
goto v_resetjp_4445_;
}
else
{
lean_inc(v_a_4444_);
lean_dec(v___x_4443_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4453_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4451_; 
v___x_4448_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13);
v___x_4449_ = lean_string_append(v___x_4448_, v_a_4444_);
lean_dec(v_a_4444_);
if (v_isShared_4447_ == 0)
{
lean_ctor_set(v___x_4446_, 0, v___x_4449_);
v___x_4451_ = v___x_4446_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v___x_4449_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
}
else
{
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_dec(v_a_4441_);
v_a_4454_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4443_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4443_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set_tag(v___x_4456_, 0);
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
else
{
lean_object* v_a_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4470_; 
v_a_4462_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4464_ = v___x_4443_;
v_isShared_4465_ = v_isSharedCheck_4470_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_a_4462_);
lean_dec(v___x_4443_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4470_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4466_; lean_object* v___x_4468_; 
v___x_4466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4466_, 0, v_a_4441_);
lean_ctor_set(v___x_4466_, 1, v_a_4462_);
if (v_isShared_4465_ == 0)
{
lean_ctor_set(v___x_4464_, 0, v___x_4466_);
v___x_4468_ = v___x_4464_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v___x_4466_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(size_t v_sz_4473_, size_t v_i_4474_, lean_object* v_bs_4475_){
_start:
{
uint8_t v___x_4476_; 
v___x_4476_ = lean_usize_dec_lt(v_i_4474_, v_sz_4473_);
if (v___x_4476_ == 0)
{
lean_object* v___x_4477_; 
v___x_4477_ = l_unsafeCast___redArg(v_bs_4475_);
lean_dec_ref(v_bs_4475_);
return v___x_4477_;
}
else
{
lean_object* v_v_4478_; lean_object* v___x_4479_; lean_object* v_bs_x27_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; size_t v___x_4483_; size_t v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v_v_4478_ = lean_array_uget(v_bs_4475_, v_i_4474_);
v___x_4479_ = lean_unsigned_to_nat(0u);
v_bs_x27_4480_ = lean_array_uset(v_bs_4475_, v_i_4474_, v___x_4479_);
v___x_4481_ = l_unsafeCast___redArg(v_v_4478_);
lean_dec(v_v_4478_);
v___x_4482_ = l_Lean_Lsp_instToJsonLeanModuleQuery_toJson(v___x_4481_);
v___x_4483_ = ((size_t)1ULL);
v___x_4484_ = lean_usize_add(v_i_4474_, v___x_4483_);
v___x_4485_ = l_unsafeCast___redArg(v___x_4482_);
lean_dec(v___x_4482_);
v___x_4486_ = lean_array_uset(v_bs_x27_4480_, v_i_4474_, v___x_4485_);
v_i_4474_ = v___x_4484_;
v_bs_4475_ = v___x_4486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4488_, lean_object* v_i_4489_, lean_object* v_bs_4490_){
_start:
{
size_t v_sz_boxed_4491_; size_t v_i_boxed_4492_; lean_object* v_res_4493_; 
v_sz_boxed_4491_ = lean_unbox_usize(v_sz_4488_);
lean_dec(v_sz_4488_);
v_i_boxed_4492_ = lean_unbox_usize(v_i_4489_);
lean_dec(v_i_4489_);
v_res_4493_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(v_sz_boxed_4491_, v_i_boxed_4492_, v_bs_4490_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(lean_object* v_a_4494_){
_start:
{
size_t v_sz_4495_; size_t v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v_sz_4495_ = lean_array_size(v_a_4494_);
v___x_4496_ = ((size_t)0ULL);
v___x_4497_ = l_unsafeCast___redArg(v_a_4494_);
v___x_4498_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(v_sz_4495_, v___x_4496_, v___x_4497_);
v___x_4499_ = l_unsafeCast___redArg(v___x_4498_);
lean_dec_ref(v___x_4498_);
v___x_4500_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4500_, 0, v___x_4499_);
return v___x_4500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0___boxed(lean_object* v_a_4501_){
_start:
{
lean_object* v_res_4502_; 
v_res_4502_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(v_a_4501_);
lean_dec_ref(v_a_4501_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams_toJson(lean_object* v_x_4503_){
_start:
{
lean_object* v_sourceRequestID_4504_; lean_object* v_queries_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4543_; 
v_sourceRequestID_4504_ = lean_ctor_get(v_x_4503_, 0);
v_queries_4505_ = lean_ctor_get(v_x_4503_, 1);
v_isSharedCheck_4543_ = !lean_is_exclusive(v_x_4503_);
if (v_isSharedCheck_4543_ == 0)
{
v___x_4507_ = v_x_4503_;
v_isShared_4508_ = v_isSharedCheck_4543_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_queries_4505_);
lean_inc(v_sourceRequestID_4504_);
lean_dec(v_x_4503_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4543_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v___x_4509_; lean_object* v___y_4511_; 
v___x_4509_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0));
switch(lean_obj_tag(v_sourceRequestID_4504_))
{
case 0:
{
lean_object* v_s_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4533_; 
v_s_4526_ = lean_ctor_get(v_sourceRequestID_4504_, 0);
v_isSharedCheck_4533_ = !lean_is_exclusive(v_sourceRequestID_4504_);
if (v_isSharedCheck_4533_ == 0)
{
v___x_4528_ = v_sourceRequestID_4504_;
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_s_4526_);
lean_dec(v_sourceRequestID_4504_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4531_; 
if (v_isShared_4529_ == 0)
{
lean_ctor_set_tag(v___x_4528_, 3);
v___x_4531_ = v___x_4528_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v_s_4526_);
v___x_4531_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
v___y_4511_ = v___x_4531_;
goto v___jp_4510_;
}
}
}
case 1:
{
lean_object* v_n_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4541_; 
v_n_4534_ = lean_ctor_get(v_sourceRequestID_4504_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v_sourceRequestID_4504_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4536_ = v_sourceRequestID_4504_;
v_isShared_4537_ = v_isSharedCheck_4541_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_n_4534_);
lean_dec(v_sourceRequestID_4504_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4541_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
lean_object* v___x_4539_; 
if (v_isShared_4537_ == 0)
{
lean_ctor_set_tag(v___x_4536_, 2);
v___x_4539_ = v___x_4536_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v_n_4534_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
v___y_4511_ = v___x_4539_;
goto v___jp_4510_;
}
}
}
default: 
{
lean_object* v___x_4542_; 
v___x_4542_ = lean_box(0);
v___y_4511_ = v___x_4542_;
goto v___jp_4510_;
}
}
v___jp_4510_:
{
lean_object* v___x_4513_; 
if (v_isShared_4508_ == 0)
{
lean_ctor_set(v___x_4507_, 1, v___y_4511_);
lean_ctor_set(v___x_4507_, 0, v___x_4509_);
v___x_4513_ = v___x_4507_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4525_; 
v_reuseFailAlloc_4525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4525_, 0, v___x_4509_);
lean_ctor_set(v_reuseFailAlloc_4525_, 1, v___y_4511_);
v___x_4513_ = v_reuseFailAlloc_4525_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4514_ = lean_box(0);
v___x_4515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4513_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
v___x_4516_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9));
v___x_4517_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(v_queries_4505_);
lean_dec_ref(v_queries_4505_);
v___x_4518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4516_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
v___x_4519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
lean_ctor_set(v___x_4519_, 1, v___x_4514_);
v___x_4520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4519_);
lean_ctor_set(v___x_4520_, 1, v___x_4514_);
v___x_4521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4515_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4523_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4521_, v___x_4522_);
v___x_4524_ = l_Lean_Json_mkObj(v___x_4523_);
lean_dec(v___x_4523_);
return v___x_4524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(lean_object* v_j_4546_, lean_object* v_k_4547_){
_start:
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4548_ = l_Lean_Json_getObjValD(v_j_4546_, v_k_4547_);
v___x_4549_ = l_Lean_Name_fromJson_x3f(v___x_4548_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0___boxed(lean_object* v_j_4550_, lean_object* v_k_4551_){
_start:
{
lean_object* v_res_4552_; 
v_res_4552_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_j_4550_, v_k_4551_);
lean_dec_ref(v_k_4551_);
return v_res_4552_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
v___x_4559_ = 1;
v___x_4560_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2));
v___x_4561_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4560_, v___x_4559_);
return v___x_4561_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4562_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4563_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3);
v___x_4564_ = lean_string_append(v___x_4563_, v___x_4562_);
return v___x_4564_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4567_ = 1;
v___x_4568_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5));
v___x_4569_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4568_, v___x_4567_);
return v___x_4569_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v___x_4570_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6);
v___x_4571_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4);
v___x_4572_ = lean_string_append(v___x_4571_, v___x_4570_);
return v___x_4572_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___x_4573_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4574_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7);
v___x_4575_ = lean_string_append(v___x_4574_, v___x_4573_);
return v___x_4575_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11(void){
_start:
{
uint8_t v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; 
v___x_4579_ = 1;
v___x_4580_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10));
v___x_4581_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4580_, v___x_4579_);
return v___x_4581_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12(void){
_start:
{
lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v___x_4582_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11);
v___x_4583_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4);
v___x_4584_ = lean_string_append(v___x_4583_, v___x_4582_);
return v___x_4584_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13(void){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4585_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4586_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12);
v___x_4587_ = lean_string_append(v___x_4586_, v___x_4585_);
return v___x_4587_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16(void){
_start:
{
uint8_t v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4591_ = 1;
v___x_4592_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15));
v___x_4593_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4592_, v___x_4591_);
return v___x_4593_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17(void){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4594_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16);
v___x_4595_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4);
v___x_4596_ = lean_string_append(v___x_4595_, v___x_4594_);
return v___x_4596_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18(void){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4597_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4598_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17);
v___x_4599_ = lean_string_append(v___x_4598_, v___x_4597_);
return v___x_4599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson(lean_object* v_json_4600_){
_start:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4601_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
lean_inc(v_json_4600_);
v___x_4602_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_4600_, v___x_4601_);
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_object* v_a_4603_; lean_object* v___x_4605_; uint8_t v_isShared_4606_; uint8_t v_isSharedCheck_4612_; 
lean_dec(v_json_4600_);
v_a_4603_ = lean_ctor_get(v___x_4602_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4602_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4605_ = v___x_4602_;
v_isShared_4606_ = v_isSharedCheck_4612_;
goto v_resetjp_4604_;
}
else
{
lean_inc(v_a_4603_);
lean_dec(v___x_4602_);
v___x_4605_ = lean_box(0);
v_isShared_4606_ = v_isSharedCheck_4612_;
goto v_resetjp_4604_;
}
v_resetjp_4604_:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4607_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8);
v___x_4608_ = lean_string_append(v___x_4607_, v_a_4603_);
lean_dec(v_a_4603_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 0, v___x_4608_);
v___x_4610_ = v___x_4605_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v___x_4608_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
else
{
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4620_; 
lean_dec(v_json_4600_);
v_a_4613_ = lean_ctor_get(v___x_4602_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4602_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4615_ = v___x_4602_;
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4602_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v___x_4618_; 
if (v_isShared_4616_ == 0)
{
lean_ctor_set_tag(v___x_4615_, 0);
v___x_4618_ = v___x_4615_;
goto v_reusejp_4617_;
}
else
{
lean_object* v_reuseFailAlloc_4619_; 
v_reuseFailAlloc_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4619_, 0, v_a_4613_);
v___x_4618_ = v_reuseFailAlloc_4619_;
goto v_reusejp_4617_;
}
v_reusejp_4617_:
{
return v___x_4618_;
}
}
}
else
{
lean_object* v_a_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v_a_4621_ = lean_ctor_get(v___x_4602_, 0);
lean_inc(v_a_4621_);
lean_dec_ref_known(v___x_4602_, 1);
v___x_4622_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
lean_inc(v_json_4600_);
v___x_4623_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_4600_, v___x_4622_);
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4633_; 
lean_dec(v_a_4621_);
lean_dec(v_json_4600_);
v_a_4624_ = lean_ctor_get(v___x_4623_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4623_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4626_ = v___x_4623_;
v_isShared_4627_ = v_isSharedCheck_4633_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4623_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4633_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4631_; 
v___x_4628_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13);
v___x_4629_ = lean_string_append(v___x_4628_, v_a_4624_);
lean_dec(v_a_4624_);
if (v_isShared_4627_ == 0)
{
lean_ctor_set(v___x_4626_, 0, v___x_4629_);
v___x_4631_ = v___x_4626_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v___x_4629_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
else
{
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4641_; 
lean_dec(v_a_4621_);
lean_dec(v_json_4600_);
v_a_4634_ = lean_ctor_get(v___x_4623_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4623_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4636_ = v___x_4623_;
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v___x_4623_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
lean_ctor_set_tag(v___x_4636_, 0);
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
else
{
lean_object* v_a_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v_a_4642_ = lean_ctor_get(v___x_4623_, 0);
lean_inc(v_a_4642_);
lean_dec_ref_known(v___x_4623_, 1);
v___x_4643_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14));
v___x_4644_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_json_4600_, v___x_4643_);
if (lean_obj_tag(v___x_4644_) == 0)
{
lean_object* v_a_4645_; lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4654_; 
lean_dec(v_a_4642_);
lean_dec(v_a_4621_);
v_a_4645_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4654_ == 0)
{
v___x_4647_ = v___x_4644_;
v_isShared_4648_ = v_isSharedCheck_4654_;
goto v_resetjp_4646_;
}
else
{
lean_inc(v_a_4645_);
lean_dec(v___x_4644_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4654_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4652_; 
v___x_4649_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18);
v___x_4650_ = lean_string_append(v___x_4649_, v_a_4645_);
lean_dec(v_a_4645_);
if (v_isShared_4648_ == 0)
{
lean_ctor_set(v___x_4647_, 0, v___x_4650_);
v___x_4652_ = v___x_4647_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v___x_4650_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
return v___x_4652_;
}
}
}
else
{
if (lean_obj_tag(v___x_4644_) == 0)
{
lean_object* v_a_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4662_; 
lean_dec(v_a_4642_);
lean_dec(v_a_4621_);
v_a_4655_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4662_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4657_ = v___x_4644_;
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_a_4655_);
lean_dec(v___x_4644_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v___x_4660_; 
if (v_isShared_4658_ == 0)
{
lean_ctor_set_tag(v___x_4657_, 0);
v___x_4660_ = v___x_4657_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v_a_4655_);
v___x_4660_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
return v___x_4660_;
}
}
}
else
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4672_; 
v_a_4663_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4665_ = v___x_4644_;
v_isShared_4666_ = v_isSharedCheck_4672_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v___x_4644_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4672_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4667_; uint8_t v___x_4668_; lean_object* v___x_4670_; 
v___x_4667_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4667_, 0, v_a_4621_);
lean_ctor_set(v___x_4667_, 1, v_a_4642_);
v___x_4668_ = lean_unbox(v_a_4663_);
lean_dec(v_a_4663_);
lean_ctor_set_uint8(v___x_4667_, sizeof(void*)*2, v___x_4668_);
if (v_isShared_4666_ == 0)
{
lean_ctor_set(v___x_4665_, 0, v___x_4667_);
v___x_4670_ = v___x_4665_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v___x_4667_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIdentifier_toJson(lean_object* v_x_4675_){
_start:
{
lean_object* v_module_4676_; lean_object* v_decl_4677_; uint8_t v_isExactMatch_4678_; lean_object* v___x_4679_; uint8_t v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
v_module_4676_ = lean_ctor_get(v_x_4675_, 0);
lean_inc(v_module_4676_);
v_decl_4677_ = lean_ctor_get(v_x_4675_, 1);
lean_inc(v_decl_4677_);
v_isExactMatch_4678_ = lean_ctor_get_uint8(v_x_4675_, sizeof(void*)*2);
lean_dec_ref(v_x_4675_);
v___x_4679_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
v___x_4680_ = 1;
v___x_4681_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_4676_, v___x_4680_);
v___x_4682_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4682_, 0, v___x_4681_);
v___x_4683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4683_, 0, v___x_4679_);
lean_ctor_set(v___x_4683_, 1, v___x_4682_);
v___x_4684_ = lean_box(0);
v___x_4685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4683_);
lean_ctor_set(v___x_4685_, 1, v___x_4684_);
v___x_4686_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
v___x_4687_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_4677_, v___x_4680_);
v___x_4688_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4687_);
v___x_4689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4686_);
lean_ctor_set(v___x_4689_, 1, v___x_4688_);
v___x_4690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4689_);
lean_ctor_set(v___x_4690_, 1, v___x_4684_);
v___x_4691_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14));
v___x_4692_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4692_, 0, v_isExactMatch_4678_);
v___x_4693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4691_);
lean_ctor_set(v___x_4693_, 1, v___x_4692_);
v___x_4694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4694_, 0, v___x_4693_);
lean_ctor_set(v___x_4694_, 1, v___x_4684_);
v___x_4695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4694_);
lean_ctor_set(v___x_4695_, 1, v___x_4684_);
v___x_4696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4690_);
lean_ctor_set(v___x_4696_, 1, v___x_4695_);
v___x_4697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4697_, 0, v___x_4685_);
lean_ctor_set(v___x_4697_, 1, v___x_4696_);
v___x_4698_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4699_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4697_, v___x_4698_);
v___x_4700_ = l_Lean_Json_mkObj(v___x_4699_);
lean_dec(v___x_4699_);
return v___x_4700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(size_t v_sz_4703_, size_t v_i_4704_, lean_object* v_bs_4705_){
_start:
{
uint8_t v___x_4706_; 
v___x_4706_ = lean_usize_dec_lt(v_i_4704_, v_sz_4703_);
if (v___x_4706_ == 0)
{
lean_object* v___x_4707_; lean_object* v___x_4708_; 
v___x_4707_ = l_unsafeCast___redArg(v_bs_4705_);
lean_dec_ref(v_bs_4705_);
v___x_4708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4708_, 0, v___x_4707_);
return v___x_4708_;
}
else
{
lean_object* v_v_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; 
v_v_4709_ = lean_array_uget_borrowed(v_bs_4705_, v_i_4704_);
v___x_4710_ = l_unsafeCast___redArg(v_v_4709_);
v___x_4711_ = l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson(v___x_4710_);
if (lean_obj_tag(v___x_4711_) == 0)
{
lean_object* v_a_4712_; lean_object* v___x_4714_; uint8_t v_isShared_4715_; uint8_t v_isSharedCheck_4719_; 
lean_dec_ref(v_bs_4705_);
v_a_4712_ = lean_ctor_get(v___x_4711_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v___x_4711_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4714_ = v___x_4711_;
v_isShared_4715_ = v_isSharedCheck_4719_;
goto v_resetjp_4713_;
}
else
{
lean_inc(v_a_4712_);
lean_dec(v___x_4711_);
v___x_4714_ = lean_box(0);
v_isShared_4715_ = v_isSharedCheck_4719_;
goto v_resetjp_4713_;
}
v_resetjp_4713_:
{
lean_object* v___x_4717_; 
if (v_isShared_4715_ == 0)
{
v___x_4717_ = v___x_4714_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v_a_4712_);
v___x_4717_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
return v___x_4717_;
}
}
}
else
{
lean_object* v_a_4720_; lean_object* v___x_4721_; lean_object* v_bs_x27_4722_; size_t v___x_4723_; size_t v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; 
v_a_4720_ = lean_ctor_get(v___x_4711_, 0);
lean_inc(v_a_4720_);
lean_dec_ref_known(v___x_4711_, 1);
v___x_4721_ = lean_unsigned_to_nat(0u);
v_bs_x27_4722_ = lean_array_uset(v_bs_4705_, v_i_4704_, v___x_4721_);
v___x_4723_ = ((size_t)1ULL);
v___x_4724_ = lean_usize_add(v_i_4704_, v___x_4723_);
v___x_4725_ = l_unsafeCast___redArg(v_a_4720_);
lean_dec(v_a_4720_);
v___x_4726_ = lean_array_uset(v_bs_x27_4722_, v_i_4704_, v___x_4725_);
v_i_4704_ = v___x_4724_;
v_bs_4705_ = v___x_4726_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_4728_, lean_object* v_i_4729_, lean_object* v_bs_4730_){
_start:
{
size_t v_sz_boxed_4731_; size_t v_i_boxed_4732_; lean_object* v_res_4733_; 
v_sz_boxed_4731_ = lean_unbox_usize(v_sz_4728_);
lean_dec(v_sz_4728_);
v_i_boxed_4732_ = lean_unbox_usize(v_i_4729_);
lean_dec(v_i_4729_);
v_res_4733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_4731_, v_i_boxed_4732_, v_bs_4730_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_4734_){
_start:
{
if (lean_obj_tag(v_x_4734_) == 4)
{
lean_object* v_elems_4735_; size_t v_sz_4736_; size_t v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; 
v_elems_4735_ = lean_ctor_get(v_x_4734_, 0);
lean_inc_ref(v_elems_4735_);
lean_dec_ref_known(v_x_4734_, 1);
v_sz_4736_ = lean_array_size(v_elems_4735_);
v___x_4737_ = ((size_t)0ULL);
v___x_4738_ = l_unsafeCast___redArg(v_elems_4735_);
lean_dec_ref(v_elems_4735_);
v___x_4739_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_4736_, v___x_4737_, v___x_4738_);
v___x_4740_ = l_unsafeCast___redArg(v___x_4739_);
lean_dec_ref(v___x_4739_);
return v___x_4740_;
}
else
{
lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; 
v___x_4741_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4742_ = lean_unsigned_to_nat(80u);
v___x_4743_ = l_Lean_Json_pretty(v_x_4734_, v___x_4742_);
v___x_4744_ = lean_string_append(v___x_4741_, v___x_4743_);
lean_dec_ref(v___x_4743_);
v___x_4745_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4746_ = lean_string_append(v___x_4744_, v___x_4745_);
v___x_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4746_);
return v___x_4747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(size_t v_sz_4748_, size_t v_i_4749_, lean_object* v_bs_4750_){
_start:
{
uint8_t v___x_4751_; 
v___x_4751_ = lean_usize_dec_lt(v_i_4749_, v_sz_4748_);
if (v___x_4751_ == 0)
{
lean_object* v___x_4752_; lean_object* v___x_4753_; 
v___x_4752_ = l_unsafeCast___redArg(v_bs_4750_);
lean_dec_ref(v_bs_4750_);
v___x_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4753_, 0, v___x_4752_);
return v___x_4753_;
}
else
{
lean_object* v_v_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; 
v_v_4754_ = lean_array_uget_borrowed(v_bs_4750_, v_i_4749_);
v___x_4755_ = l_unsafeCast___redArg(v_v_4754_);
v___x_4756_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1(v___x_4755_);
if (lean_obj_tag(v___x_4756_) == 0)
{
lean_object* v_a_4757_; lean_object* v___x_4759_; uint8_t v_isShared_4760_; uint8_t v_isSharedCheck_4764_; 
lean_dec_ref(v_bs_4750_);
v_a_4757_ = lean_ctor_get(v___x_4756_, 0);
v_isSharedCheck_4764_ = !lean_is_exclusive(v___x_4756_);
if (v_isSharedCheck_4764_ == 0)
{
v___x_4759_ = v___x_4756_;
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
else
{
lean_inc(v_a_4757_);
lean_dec(v___x_4756_);
v___x_4759_ = lean_box(0);
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
v_resetjp_4758_:
{
lean_object* v___x_4762_; 
if (v_isShared_4760_ == 0)
{
v___x_4762_ = v___x_4759_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v_a_4757_);
v___x_4762_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
return v___x_4762_;
}
}
}
else
{
lean_object* v_a_4765_; lean_object* v___x_4766_; lean_object* v_bs_x27_4767_; size_t v___x_4768_; size_t v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; 
v_a_4765_ = lean_ctor_get(v___x_4756_, 0);
lean_inc(v_a_4765_);
lean_dec_ref_known(v___x_4756_, 1);
v___x_4766_ = lean_unsigned_to_nat(0u);
v_bs_x27_4767_ = lean_array_uset(v_bs_4750_, v_i_4749_, v___x_4766_);
v___x_4768_ = ((size_t)1ULL);
v___x_4769_ = lean_usize_add(v_i_4749_, v___x_4768_);
v___x_4770_ = l_unsafeCast___redArg(v_a_4765_);
lean_dec(v_a_4765_);
v___x_4771_ = lean_array_uset(v_bs_x27_4767_, v_i_4749_, v___x_4770_);
v_i_4749_ = v___x_4769_;
v_bs_4750_ = v___x_4771_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2___boxed(lean_object* v_sz_4773_, lean_object* v_i_4774_, lean_object* v_bs_4775_){
_start:
{
size_t v_sz_boxed_4776_; size_t v_i_boxed_4777_; lean_object* v_res_4778_; 
v_sz_boxed_4776_ = lean_unbox_usize(v_sz_4773_);
lean_dec(v_sz_4773_);
v_i_boxed_4777_ = lean_unbox_usize(v_i_4774_);
lean_dec(v_i_4774_);
v_res_4778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(v_sz_boxed_4776_, v_i_boxed_4777_, v_bs_4775_);
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0(lean_object* v_x_4779_){
_start:
{
if (lean_obj_tag(v_x_4779_) == 4)
{
lean_object* v_elems_4780_; size_t v_sz_4781_; size_t v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; 
v_elems_4780_ = lean_ctor_get(v_x_4779_, 0);
lean_inc_ref(v_elems_4780_);
lean_dec_ref_known(v_x_4779_, 1);
v_sz_4781_ = lean_array_size(v_elems_4780_);
v___x_4782_ = ((size_t)0ULL);
v___x_4783_ = l_unsafeCast___redArg(v_elems_4780_);
lean_dec_ref(v_elems_4780_);
v___x_4784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(v_sz_4781_, v___x_4782_, v___x_4783_);
v___x_4785_ = l_unsafeCast___redArg(v___x_4784_);
lean_dec_ref(v___x_4784_);
return v___x_4785_;
}
else
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4786_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4787_ = lean_unsigned_to_nat(80u);
v___x_4788_ = l_Lean_Json_pretty(v_x_4779_, v___x_4787_);
v___x_4789_ = lean_string_append(v___x_4786_, v___x_4788_);
lean_dec_ref(v___x_4788_);
v___x_4790_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4791_ = lean_string_append(v___x_4789_, v___x_4790_);
v___x_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4792_, 0, v___x_4791_);
return v___x_4792_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(lean_object* v_j_4793_, lean_object* v_k_4794_){
_start:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4795_ = l_Lean_Json_getObjValD(v_j_4793_, v_k_4794_);
v___x_4796_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0(v___x_4795_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0___boxed(lean_object* v_j_4797_, lean_object* v_k_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(v_j_4797_, v_k_4798_);
lean_dec_ref(v_k_4798_);
return v_res_4799_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4806_ = 1;
v___x_4807_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2));
v___x_4808_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4807_, v___x_4806_);
return v___x_4808_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4809_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4810_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3);
v___x_4811_ = lean_string_append(v___x_4810_, v___x_4809_);
return v___x_4811_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; 
v___x_4814_ = 1;
v___x_4815_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5));
v___x_4816_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4815_, v___x_4814_);
return v___x_4816_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; 
v___x_4817_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6);
v___x_4818_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4);
v___x_4819_ = lean_string_append(v___x_4818_, v___x_4817_);
return v___x_4819_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4820_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4821_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7);
v___x_4822_ = lean_string_append(v___x_4821_, v___x_4820_);
return v___x_4822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson(lean_object* v_json_4823_){
_start:
{
lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4824_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0));
v___x_4825_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(v_json_4823_, v___x_4824_);
if (lean_obj_tag(v___x_4825_) == 0)
{
lean_object* v_a_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4835_; 
v_a_4826_ = lean_ctor_get(v___x_4825_, 0);
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4825_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4828_ = v___x_4825_;
v_isShared_4829_ = v_isSharedCheck_4835_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_a_4826_);
lean_dec(v___x_4825_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4835_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4833_; 
v___x_4830_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8);
v___x_4831_ = lean_string_append(v___x_4830_, v_a_4826_);
lean_dec(v_a_4826_);
if (v_isShared_4829_ == 0)
{
lean_ctor_set(v___x_4828_, 0, v___x_4831_);
v___x_4833_ = v___x_4828_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v___x_4831_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
else
{
if (lean_obj_tag(v___x_4825_) == 0)
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
v_a_4836_ = lean_ctor_get(v___x_4825_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4825_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4825_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4825_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4839_ == 0)
{
lean_ctor_set_tag(v___x_4838_, 0);
v___x_4841_ = v___x_4838_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
v_a_4844_ = lean_ctor_get(v___x_4825_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4825_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4825_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4825_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(size_t v_sz_4854_, size_t v_i_4855_, lean_object* v_bs_4856_){
_start:
{
uint8_t v___x_4857_; 
v___x_4857_ = lean_usize_dec_lt(v_i_4855_, v_sz_4854_);
if (v___x_4857_ == 0)
{
lean_object* v___x_4858_; 
v___x_4858_ = l_unsafeCast___redArg(v_bs_4856_);
lean_dec_ref(v_bs_4856_);
return v___x_4858_;
}
else
{
lean_object* v_v_4859_; lean_object* v___x_4860_; lean_object* v_bs_x27_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; size_t v___x_4864_; size_t v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; 
v_v_4859_ = lean_array_uget(v_bs_4856_, v_i_4855_);
v___x_4860_ = lean_unsigned_to_nat(0u);
v_bs_x27_4861_ = lean_array_uset(v_bs_4856_, v_i_4855_, v___x_4860_);
v___x_4862_ = l_unsafeCast___redArg(v_v_4859_);
lean_dec(v_v_4859_);
v___x_4863_ = l_Lean_Lsp_instToJsonLeanIdentifier_toJson(v___x_4862_);
v___x_4864_ = ((size_t)1ULL);
v___x_4865_ = lean_usize_add(v_i_4855_, v___x_4864_);
v___x_4866_ = l_unsafeCast___redArg(v___x_4863_);
lean_dec(v___x_4863_);
v___x_4867_ = lean_array_uset(v_bs_x27_4861_, v_i_4855_, v___x_4866_);
v_i_4855_ = v___x_4865_;
v_bs_4856_ = v___x_4867_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4869_, lean_object* v_i_4870_, lean_object* v_bs_4871_){
_start:
{
size_t v_sz_boxed_4872_; size_t v_i_boxed_4873_; lean_object* v_res_4874_; 
v_sz_boxed_4872_ = lean_unbox_usize(v_sz_4869_);
lean_dec(v_sz_4869_);
v_i_boxed_4873_ = lean_unbox_usize(v_i_4870_);
lean_dec(v_i_4870_);
v_res_4874_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(v_sz_boxed_4872_, v_i_boxed_4873_, v_bs_4871_);
return v_res_4874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(lean_object* v_a_4875_){
_start:
{
size_t v_sz_4876_; size_t v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; 
v_sz_4876_ = lean_array_size(v_a_4875_);
v___x_4877_ = ((size_t)0ULL);
v___x_4878_ = l_unsafeCast___redArg(v_a_4875_);
v___x_4879_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(v_sz_4876_, v___x_4877_, v___x_4878_);
v___x_4880_ = l_unsafeCast___redArg(v___x_4879_);
lean_dec_ref(v___x_4879_);
v___x_4881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4881_, 0, v___x_4880_);
return v___x_4881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0___boxed(lean_object* v_a_4882_){
_start:
{
lean_object* v_res_4883_; 
v_res_4883_ = l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(v_a_4882_);
lean_dec_ref(v_a_4882_);
return v_res_4883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(size_t v_sz_4884_, size_t v_i_4885_, lean_object* v_bs_4886_){
_start:
{
uint8_t v___x_4887_; 
v___x_4887_ = lean_usize_dec_lt(v_i_4885_, v_sz_4884_);
if (v___x_4887_ == 0)
{
lean_object* v___x_4888_; 
v___x_4888_ = l_unsafeCast___redArg(v_bs_4886_);
lean_dec_ref(v_bs_4886_);
return v___x_4888_;
}
else
{
lean_object* v_v_4889_; lean_object* v___x_4890_; lean_object* v_bs_x27_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; size_t v___x_4894_; size_t v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; 
v_v_4889_ = lean_array_uget(v_bs_4886_, v_i_4885_);
v___x_4890_ = lean_unsigned_to_nat(0u);
v_bs_x27_4891_ = lean_array_uset(v_bs_4886_, v_i_4885_, v___x_4890_);
v___x_4892_ = l_unsafeCast___redArg(v_v_4889_);
lean_dec(v_v_4889_);
v___x_4893_ = l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(v___x_4892_);
lean_dec(v___x_4892_);
v___x_4894_ = ((size_t)1ULL);
v___x_4895_ = lean_usize_add(v_i_4885_, v___x_4894_);
v___x_4896_ = l_unsafeCast___redArg(v___x_4893_);
lean_dec(v___x_4893_);
v___x_4897_ = lean_array_uset(v_bs_x27_4891_, v_i_4885_, v___x_4896_);
v_i_4885_ = v___x_4895_;
v_bs_4886_ = v___x_4897_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1___boxed(lean_object* v_sz_4899_, lean_object* v_i_4900_, lean_object* v_bs_4901_){
_start:
{
size_t v_sz_boxed_4902_; size_t v_i_boxed_4903_; lean_object* v_res_4904_; 
v_sz_boxed_4902_ = lean_unbox_usize(v_sz_4899_);
lean_dec(v_sz_4899_);
v_i_boxed_4903_ = lean_unbox_usize(v_i_4900_);
lean_dec(v_i_4900_);
v_res_4904_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(v_sz_boxed_4902_, v_i_boxed_4903_, v_bs_4901_);
return v_res_4904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(lean_object* v_a_4905_){
_start:
{
size_t v_sz_4906_; size_t v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v_sz_4906_ = lean_array_size(v_a_4905_);
v___x_4907_ = ((size_t)0ULL);
v___x_4908_ = l_unsafeCast___redArg(v_a_4905_);
v___x_4909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(v_sz_4906_, v___x_4907_, v___x_4908_);
v___x_4910_ = l_unsafeCast___redArg(v___x_4909_);
lean_dec_ref(v___x_4909_);
v___x_4911_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4911_, 0, v___x_4910_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0___boxed(lean_object* v_a_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(v_a_4912_);
lean_dec_ref(v_a_4912_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson(lean_object* v_x_4914_){
_start:
{
lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
v___x_4915_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0));
v___x_4916_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(v_x_4914_);
v___x_4917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4917_, 0, v___x_4915_);
lean_ctor_set(v___x_4917_, 1, v___x_4916_);
v___x_4918_ = lean_box(0);
v___x_4919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4919_, 0, v___x_4917_);
lean_ctor_set(v___x_4919_, 1, v___x_4918_);
v___x_4920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4920_, 0, v___x_4919_);
lean_ctor_set(v___x_4920_, 1, v___x_4918_);
v___x_4921_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4922_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4920_, v___x_4921_);
v___x_4923_ = l_Lean_Json_mkObj(v___x_4922_);
lean_dec(v___x_4922_);
return v___x_4923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson___boxed(lean_object* v_x_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson(v_x_4924_);
lean_dec_ref(v_x_4924_);
return v_res_4925_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4937_ = 1;
v___x_4938_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1));
v___x_4939_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4938_, v___x_4937_);
return v___x_4939_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4940_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4941_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2);
v___x_4942_ = lean_string_append(v___x_4941_, v___x_4940_);
return v___x_4942_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4943_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6);
v___x_4944_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3);
v___x_4945_ = lean_string_append(v___x_4944_, v___x_4943_);
return v___x_4945_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5(void){
_start:
{
lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; 
v___x_4946_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4947_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4);
v___x_4948_ = lean_string_append(v___x_4947_, v___x_4946_);
return v___x_4948_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6(void){
_start:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; 
v___x_4949_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11);
v___x_4950_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3);
v___x_4951_ = lean_string_append(v___x_4950_, v___x_4949_);
return v___x_4951_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4952_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4953_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6);
v___x_4954_ = lean_string_append(v___x_4953_, v___x_4952_);
return v___x_4954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson(lean_object* v_json_4955_){
_start:
{
lean_object* v___x_4956_; lean_object* v___x_4957_; 
v___x_4956_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
lean_inc(v_json_4955_);
v___x_4957_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_4955_, v___x_4956_);
if (lean_obj_tag(v___x_4957_) == 0)
{
lean_object* v_a_4958_; lean_object* v___x_4960_; uint8_t v_isShared_4961_; uint8_t v_isSharedCheck_4967_; 
lean_dec(v_json_4955_);
v_a_4958_ = lean_ctor_get(v___x_4957_, 0);
v_isSharedCheck_4967_ = !lean_is_exclusive(v___x_4957_);
if (v_isSharedCheck_4967_ == 0)
{
v___x_4960_ = v___x_4957_;
v_isShared_4961_ = v_isSharedCheck_4967_;
goto v_resetjp_4959_;
}
else
{
lean_inc(v_a_4958_);
lean_dec(v___x_4957_);
v___x_4960_ = lean_box(0);
v_isShared_4961_ = v_isSharedCheck_4967_;
goto v_resetjp_4959_;
}
v_resetjp_4959_:
{
lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4965_; 
v___x_4962_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5);
v___x_4963_ = lean_string_append(v___x_4962_, v_a_4958_);
lean_dec(v_a_4958_);
if (v_isShared_4961_ == 0)
{
lean_ctor_set(v___x_4960_, 0, v___x_4963_);
v___x_4965_ = v___x_4960_;
goto v_reusejp_4964_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v___x_4963_);
v___x_4965_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4964_;
}
v_reusejp_4964_:
{
return v___x_4965_;
}
}
}
else
{
if (lean_obj_tag(v___x_4957_) == 0)
{
lean_object* v_a_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4975_; 
lean_dec(v_json_4955_);
v_a_4968_ = lean_ctor_get(v___x_4957_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4957_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4970_ = v___x_4957_;
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_a_4968_);
lean_dec(v___x_4957_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4973_; 
if (v_isShared_4971_ == 0)
{
lean_ctor_set_tag(v___x_4970_, 0);
v___x_4973_ = v___x_4970_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v_a_4968_);
v___x_4973_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
return v___x_4973_;
}
}
}
else
{
lean_object* v_a_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v_a_4976_ = lean_ctor_get(v___x_4957_, 0);
lean_inc(v_a_4976_);
lean_dec_ref_known(v___x_4957_, 1);
v___x_4977_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
v___x_4978_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_4955_, v___x_4977_);
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v_a_4979_; lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4988_; 
lean_dec(v_a_4976_);
v_a_4979_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_4988_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4981_ = v___x_4978_;
v_isShared_4982_ = v_isSharedCheck_4988_;
goto v_resetjp_4980_;
}
else
{
lean_inc(v_a_4979_);
lean_dec(v___x_4978_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4988_;
goto v_resetjp_4980_;
}
v_resetjp_4980_:
{
lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4986_; 
v___x_4983_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7);
v___x_4984_ = lean_string_append(v___x_4983_, v_a_4979_);
lean_dec(v_a_4979_);
if (v_isShared_4982_ == 0)
{
lean_ctor_set(v___x_4981_, 0, v___x_4984_);
v___x_4986_ = v___x_4981_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v___x_4984_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
return v___x_4986_;
}
}
}
else
{
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v_a_4989_; lean_object* v___x_4991_; uint8_t v_isShared_4992_; uint8_t v_isSharedCheck_4996_; 
lean_dec(v_a_4976_);
v_a_4989_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_4996_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4991_ = v___x_4978_;
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
else
{
lean_inc(v_a_4989_);
lean_dec(v___x_4978_);
v___x_4991_ = lean_box(0);
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
v_resetjp_4990_:
{
lean_object* v___x_4994_; 
if (v_isShared_4992_ == 0)
{
lean_ctor_set_tag(v___x_4991_, 0);
v___x_4994_ = v___x_4991_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v_a_4989_);
v___x_4994_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
return v___x_4994_;
}
}
}
else
{
lean_object* v_a_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5005_; 
v_a_4997_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_5005_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_5005_ == 0)
{
v___x_4999_ = v___x_4978_;
v_isShared_5000_ = v_isSharedCheck_5005_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_a_4997_);
lean_dec(v___x_4978_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5005_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5001_; lean_object* v___x_5003_; 
v___x_5001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5001_, 0, v_a_4976_);
lean_ctor_set(v___x_5001_, 1, v_a_4997_);
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 0, v___x_5001_);
v___x_5003_ = v___x_4999_;
goto v_reusejp_5002_;
}
else
{
lean_object* v_reuseFailAlloc_5004_; 
v_reuseFailAlloc_5004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5004_, 0, v___x_5001_);
v___x_5003_ = v_reuseFailAlloc_5004_;
goto v_reusejp_5002_;
}
v_reusejp_5002_:
{
return v___x_5003_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent_toJson(lean_object* v_x_5008_){
_start:
{
lean_object* v_module_5009_; lean_object* v_decl_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5033_; 
v_module_5009_ = lean_ctor_get(v_x_5008_, 0);
v_decl_5010_ = lean_ctor_get(v_x_5008_, 1);
v_isSharedCheck_5033_ = !lean_is_exclusive(v_x_5008_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5012_ = v_x_5008_;
v_isShared_5013_ = v_isSharedCheck_5033_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_decl_5010_);
lean_inc(v_module_5009_);
lean_dec(v_x_5008_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5033_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5014_; uint8_t v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5019_; 
v___x_5014_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
v___x_5015_ = 1;
v___x_5016_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_5009_, v___x_5015_);
v___x_5017_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5017_, 0, v___x_5016_);
if (v_isShared_5013_ == 0)
{
lean_ctor_set(v___x_5012_, 1, v___x_5017_);
lean_ctor_set(v___x_5012_, 0, v___x_5014_);
v___x_5019_ = v___x_5012_;
goto v_reusejp_5018_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v___x_5014_);
lean_ctor_set(v_reuseFailAlloc_5032_, 1, v___x_5017_);
v___x_5019_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; 
v___x_5020_ = lean_box(0);
v___x_5021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5021_, 0, v___x_5019_);
lean_ctor_set(v___x_5021_, 1, v___x_5020_);
v___x_5022_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
v___x_5023_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_5010_, v___x_5015_);
v___x_5024_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5024_, 0, v___x_5023_);
v___x_5025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5025_, 0, v___x_5022_);
lean_ctor_set(v___x_5025_, 1, v___x_5024_);
v___x_5026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5026_, 0, v___x_5025_);
lean_ctor_set(v___x_5026_, 1, v___x_5020_);
v___x_5027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5027_, 0, v___x_5026_);
lean_ctor_set(v___x_5027_, 1, v___x_5020_);
v___x_5028_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5028_, 0, v___x_5021_);
lean_ctor_set(v___x_5028_, 1, v___x_5027_);
v___x_5029_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_5030_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_5028_, v___x_5029_);
v___x_5031_ = l_Lean_Json_mkObj(v___x_5030_);
lean_dec(v___x_5030_);
return v___x_5031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(lean_object* v_j_5036_, lean_object* v_k_5037_){
_start:
{
lean_object* v___x_5038_; lean_object* v___x_5039_; 
v___x_5038_ = l_Lean_Json_getObjValD(v_j_5036_, v_k_5037_);
v___x_5039_ = l_Lean_Lsp_instFromJsonRange_fromJson(v___x_5038_);
return v___x_5039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1___boxed(lean_object* v_j_5040_, lean_object* v_k_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_j_5040_, v_k_5041_);
lean_dec_ref(v_k_5041_);
return v_res_5042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3(lean_object* v_x_5045_){
_start:
{
if (lean_obj_tag(v_x_5045_) == 0)
{
lean_object* v___x_5046_; 
v___x_5046_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0));
return v___x_5046_;
}
else
{
lean_object* v___x_5047_; 
v___x_5047_ = l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson(v_x_5045_);
if (lean_obj_tag(v___x_5047_) == 0)
{
lean_object* v_a_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5055_; 
v_a_5048_ = lean_ctor_get(v___x_5047_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5047_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5050_ = v___x_5047_;
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_a_5048_);
lean_dec(v___x_5047_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v___x_5053_; 
if (v_isShared_5051_ == 0)
{
v___x_5053_ = v___x_5050_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_a_5048_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
else
{
lean_object* v_a_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5064_; 
v_a_5056_ = lean_ctor_get(v___x_5047_, 0);
v_isSharedCheck_5064_ = !lean_is_exclusive(v___x_5047_);
if (v_isSharedCheck_5064_ == 0)
{
v___x_5058_ = v___x_5047_;
v_isShared_5059_ = v_isSharedCheck_5064_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_a_5056_);
lean_dec(v___x_5047_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5064_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
lean_object* v___x_5060_; lean_object* v___x_5062_; 
v___x_5060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5060_, 0, v_a_5056_);
if (v_isShared_5059_ == 0)
{
lean_ctor_set(v___x_5058_, 0, v___x_5060_);
v___x_5062_ = v___x_5058_;
goto v_reusejp_5061_;
}
else
{
lean_object* v_reuseFailAlloc_5063_; 
v_reuseFailAlloc_5063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5063_, 0, v___x_5060_);
v___x_5062_ = v_reuseFailAlloc_5063_;
goto v_reusejp_5061_;
}
v_reusejp_5061_:
{
return v___x_5062_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(lean_object* v_j_5065_, lean_object* v_k_5066_){
_start:
{
lean_object* v___x_5067_; lean_object* v___x_5068_; 
v___x_5067_ = l_Lean_Json_getObjValD(v_j_5065_, v_k_5066_);
v___x_5068_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3(v___x_5067_);
return v___x_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2___boxed(lean_object* v_j_5069_, lean_object* v_k_5070_){
_start:
{
lean_object* v_res_5071_; 
v_res_5071_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(v_j_5069_, v_k_5070_);
lean_dec_ref(v_k_5070_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0(lean_object* v_x_5074_){
_start:
{
if (lean_obj_tag(v_x_5074_) == 0)
{
lean_object* v___x_5075_; 
v___x_5075_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0));
return v___x_5075_;
}
else
{
lean_object* v___x_5076_; 
v___x_5076_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_x_5074_);
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_a_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5084_; 
v_a_5077_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5084_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5079_ = v___x_5076_;
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_a_5077_);
lean_dec(v___x_5076_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___x_5082_; 
if (v_isShared_5080_ == 0)
{
v___x_5082_ = v___x_5079_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v_a_5077_);
v___x_5082_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
return v___x_5082_;
}
}
}
else
{
lean_object* v_a_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5093_; 
v_a_5085_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5087_ = v___x_5076_;
v_isShared_5088_ = v_isSharedCheck_5093_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_a_5085_);
lean_dec(v___x_5076_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5093_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v___x_5089_; lean_object* v___x_5091_; 
v___x_5089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5089_, 0, v_a_5085_);
if (v_isShared_5088_ == 0)
{
lean_ctor_set(v___x_5087_, 0, v___x_5089_);
v___x_5091_ = v___x_5087_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v___x_5089_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(lean_object* v_j_5094_, lean_object* v_k_5095_){
_start:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; 
v___x_5096_ = l_Lean_Json_getObjValD(v_j_5094_, v_k_5095_);
v___x_5097_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0(v___x_5096_);
return v___x_5097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0___boxed(lean_object* v_j_5098_, lean_object* v_k_5099_){
_start:
{
lean_object* v_res_5100_; 
v_res_5100_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(v_j_5098_, v_k_5099_);
lean_dec_ref(v_k_5099_);
return v_res_5100_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3(void){
_start:
{
uint8_t v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v___x_5107_ = 1;
v___x_5108_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2));
v___x_5109_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5108_, v___x_5107_);
return v___x_5109_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4(void){
_start:
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; 
v___x_5110_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_5111_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3);
v___x_5112_ = lean_string_append(v___x_5111_, v___x_5110_);
return v___x_5112_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7(void){
_start:
{
uint8_t v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; 
v___x_5116_ = 1;
v___x_5117_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6));
v___x_5118_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5117_, v___x_5116_);
return v___x_5118_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8(void){
_start:
{
lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5119_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7);
v___x_5120_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5121_ = lean_string_append(v___x_5120_, v___x_5119_);
return v___x_5121_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9(void){
_start:
{
lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; 
v___x_5122_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5123_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8);
v___x_5124_ = lean_string_append(v___x_5123_, v___x_5122_);
return v___x_5124_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12(void){
_start:
{
uint8_t v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; 
v___x_5128_ = 1;
v___x_5129_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11));
v___x_5130_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5129_, v___x_5128_);
return v___x_5130_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13(void){
_start:
{
lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; 
v___x_5131_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12);
v___x_5132_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5133_ = lean_string_append(v___x_5132_, v___x_5131_);
return v___x_5133_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14(void){
_start:
{
lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___x_5134_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5135_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13);
v___x_5136_ = lean_string_append(v___x_5135_, v___x_5134_);
return v___x_5136_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17(void){
_start:
{
uint8_t v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v___x_5140_ = 1;
v___x_5141_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16));
v___x_5142_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5141_, v___x_5140_);
return v___x_5142_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18(void){
_start:
{
lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5143_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17);
v___x_5144_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5145_ = lean_string_append(v___x_5144_, v___x_5143_);
return v___x_5145_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19(void){
_start:
{
lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v___x_5146_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5147_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18);
v___x_5148_ = lean_string_append(v___x_5147_, v___x_5146_);
return v___x_5148_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22(void){
_start:
{
uint8_t v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5152_ = 1;
v___x_5153_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21));
v___x_5154_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5153_, v___x_5152_);
return v___x_5154_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23(void){
_start:
{
lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; 
v___x_5155_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22);
v___x_5156_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5157_ = lean_string_append(v___x_5156_, v___x_5155_);
return v___x_5157_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24(void){
_start:
{
lean_object* v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; 
v___x_5158_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5159_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23);
v___x_5160_ = lean_string_append(v___x_5159_, v___x_5158_);
return v___x_5160_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28(void){
_start:
{
uint8_t v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; 
v___x_5165_ = 1;
v___x_5166_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27));
v___x_5167_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5166_, v___x_5165_);
return v___x_5167_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29(void){
_start:
{
lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; 
v___x_5168_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28);
v___x_5169_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5170_ = lean_string_append(v___x_5169_, v___x_5168_);
return v___x_5170_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30(void){
_start:
{
lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; 
v___x_5171_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5172_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29);
v___x_5173_ = lean_string_append(v___x_5172_, v___x_5171_);
return v___x_5173_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33(void){
_start:
{
uint8_t v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; 
v___x_5177_ = 1;
v___x_5178_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32));
v___x_5179_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5178_, v___x_5177_);
return v___x_5179_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34(void){
_start:
{
lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; 
v___x_5180_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33);
v___x_5181_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5182_ = lean_string_append(v___x_5181_, v___x_5180_);
return v___x_5182_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35(void){
_start:
{
lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; 
v___x_5183_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5184_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34);
v___x_5185_ = lean_string_append(v___x_5184_, v___x_5183_);
return v___x_5185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson(lean_object* v_json_5186_){
_start:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5187_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0));
lean_inc(v_json_5186_);
v___x_5188_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(v_json_5186_, v___x_5187_);
if (lean_obj_tag(v___x_5188_) == 0)
{
lean_object* v_a_5189_; lean_object* v___x_5191_; uint8_t v_isShared_5192_; uint8_t v_isSharedCheck_5198_; 
lean_dec(v_json_5186_);
v_a_5189_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5198_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5198_ == 0)
{
v___x_5191_ = v___x_5188_;
v_isShared_5192_ = v_isSharedCheck_5198_;
goto v_resetjp_5190_;
}
else
{
lean_inc(v_a_5189_);
lean_dec(v___x_5188_);
v___x_5191_ = lean_box(0);
v_isShared_5192_ = v_isSharedCheck_5198_;
goto v_resetjp_5190_;
}
v_resetjp_5190_:
{
lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5196_; 
v___x_5193_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9);
v___x_5194_ = lean_string_append(v___x_5193_, v_a_5189_);
lean_dec(v_a_5189_);
if (v_isShared_5192_ == 0)
{
lean_ctor_set(v___x_5191_, 0, v___x_5194_);
v___x_5196_ = v___x_5191_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v___x_5194_);
v___x_5196_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
return v___x_5196_;
}
}
}
else
{
if (lean_obj_tag(v___x_5188_) == 0)
{
lean_object* v_a_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5206_; 
lean_dec(v_json_5186_);
v_a_5199_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5201_ = v___x_5188_;
v_isShared_5202_ = v_isSharedCheck_5206_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_a_5199_);
lean_dec(v___x_5188_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5206_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5204_; 
if (v_isShared_5202_ == 0)
{
lean_ctor_set_tag(v___x_5201_, 0);
v___x_5204_ = v___x_5201_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_a_5199_);
v___x_5204_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
return v___x_5204_;
}
}
}
else
{
lean_object* v_a_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; 
v_a_5207_ = lean_ctor_get(v___x_5188_, 0);
lean_inc(v_a_5207_);
lean_dec_ref_known(v___x_5188_, 1);
v___x_5208_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10));
lean_inc(v_json_5186_);
v___x_5209_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_json_5186_, v___x_5208_);
if (lean_obj_tag(v___x_5209_) == 0)
{
lean_object* v_a_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5219_; 
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5210_ = lean_ctor_get(v___x_5209_, 0);
v_isSharedCheck_5219_ = !lean_is_exclusive(v___x_5209_);
if (v_isSharedCheck_5219_ == 0)
{
v___x_5212_ = v___x_5209_;
v_isShared_5213_ = v_isSharedCheck_5219_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_a_5210_);
lean_dec(v___x_5209_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5219_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5217_; 
v___x_5214_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14);
v___x_5215_ = lean_string_append(v___x_5214_, v_a_5210_);
lean_dec(v_a_5210_);
if (v_isShared_5213_ == 0)
{
lean_ctor_set(v___x_5212_, 0, v___x_5215_);
v___x_5217_ = v___x_5212_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v___x_5215_);
v___x_5217_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
return v___x_5217_;
}
}
}
else
{
if (lean_obj_tag(v___x_5209_) == 0)
{
lean_object* v_a_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5227_; 
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5220_ = lean_ctor_get(v___x_5209_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v___x_5209_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5222_ = v___x_5209_;
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
else
{
lean_inc(v_a_5220_);
lean_dec(v___x_5209_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
lean_object* v___x_5225_; 
if (v_isShared_5223_ == 0)
{
lean_ctor_set_tag(v___x_5222_, 0);
v___x_5225_ = v___x_5222_;
goto v_reusejp_5224_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v_a_5220_);
v___x_5225_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5224_;
}
v_reusejp_5224_:
{
return v___x_5225_;
}
}
}
else
{
lean_object* v_a_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v_a_5228_ = lean_ctor_get(v___x_5209_, 0);
lean_inc(v_a_5228_);
lean_dec_ref_known(v___x_5209_, 1);
v___x_5229_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15));
lean_inc(v_json_5186_);
v___x_5230_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_json_5186_, v___x_5229_);
if (lean_obj_tag(v___x_5230_) == 0)
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5240_; 
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5231_ = lean_ctor_get(v___x_5230_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5230_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5233_ = v___x_5230_;
v_isShared_5234_ = v_isSharedCheck_5240_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5230_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5240_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5238_; 
v___x_5235_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19);
v___x_5236_ = lean_string_append(v___x_5235_, v_a_5231_);
lean_dec(v_a_5231_);
if (v_isShared_5234_ == 0)
{
lean_ctor_set(v___x_5233_, 0, v___x_5236_);
v___x_5238_ = v___x_5233_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v___x_5236_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
return v___x_5238_;
}
}
}
else
{
if (lean_obj_tag(v___x_5230_) == 0)
{
lean_object* v_a_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5248_; 
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5241_ = lean_ctor_get(v___x_5230_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5230_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5243_ = v___x_5230_;
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_a_5241_);
lean_dec(v___x_5230_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v___x_5246_; 
if (v_isShared_5244_ == 0)
{
lean_ctor_set_tag(v___x_5243_, 0);
v___x_5246_ = v___x_5243_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_a_5241_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
return v___x_5246_;
}
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; 
v_a_5249_ = lean_ctor_get(v___x_5230_, 0);
lean_inc(v_a_5249_);
lean_dec_ref_known(v___x_5230_, 1);
v___x_5250_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20));
lean_inc(v_json_5186_);
v___x_5251_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_json_5186_, v___x_5250_);
if (lean_obj_tag(v___x_5251_) == 0)
{
lean_object* v_a_5252_; lean_object* v___x_5254_; uint8_t v_isShared_5255_; uint8_t v_isSharedCheck_5261_; 
lean_dec(v_a_5249_);
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5252_ = lean_ctor_get(v___x_5251_, 0);
v_isSharedCheck_5261_ = !lean_is_exclusive(v___x_5251_);
if (v_isSharedCheck_5261_ == 0)
{
v___x_5254_ = v___x_5251_;
v_isShared_5255_ = v_isSharedCheck_5261_;
goto v_resetjp_5253_;
}
else
{
lean_inc(v_a_5252_);
lean_dec(v___x_5251_);
v___x_5254_ = lean_box(0);
v_isShared_5255_ = v_isSharedCheck_5261_;
goto v_resetjp_5253_;
}
v_resetjp_5253_:
{
lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5259_; 
v___x_5256_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24);
v___x_5257_ = lean_string_append(v___x_5256_, v_a_5252_);
lean_dec(v_a_5252_);
if (v_isShared_5255_ == 0)
{
lean_ctor_set(v___x_5254_, 0, v___x_5257_);
v___x_5259_ = v___x_5254_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v___x_5257_);
v___x_5259_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
return v___x_5259_;
}
}
}
else
{
if (lean_obj_tag(v___x_5251_) == 0)
{
lean_object* v_a_5262_; lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5269_; 
lean_dec(v_a_5249_);
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5262_ = lean_ctor_get(v___x_5251_, 0);
v_isSharedCheck_5269_ = !lean_is_exclusive(v___x_5251_);
if (v_isSharedCheck_5269_ == 0)
{
v___x_5264_ = v___x_5251_;
v_isShared_5265_ = v_isSharedCheck_5269_;
goto v_resetjp_5263_;
}
else
{
lean_inc(v_a_5262_);
lean_dec(v___x_5251_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5269_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5267_; 
if (v_isShared_5265_ == 0)
{
lean_ctor_set_tag(v___x_5264_, 0);
v___x_5267_ = v___x_5264_;
goto v_reusejp_5266_;
}
else
{
lean_object* v_reuseFailAlloc_5268_; 
v_reuseFailAlloc_5268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5268_, 0, v_a_5262_);
v___x_5267_ = v_reuseFailAlloc_5268_;
goto v_reusejp_5266_;
}
v_reusejp_5266_:
{
return v___x_5267_;
}
}
}
else
{
lean_object* v_a_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; 
v_a_5270_ = lean_ctor_get(v___x_5251_, 0);
lean_inc(v_a_5270_);
lean_dec_ref_known(v___x_5251_, 1);
v___x_5271_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25));
lean_inc(v_json_5186_);
v___x_5272_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(v_json_5186_, v___x_5271_);
if (lean_obj_tag(v___x_5272_) == 0)
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5282_; 
lean_dec(v_a_5270_);
lean_dec(v_a_5249_);
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5273_ = lean_ctor_get(v___x_5272_, 0);
v_isSharedCheck_5282_ = !lean_is_exclusive(v___x_5272_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5275_ = v___x_5272_;
v_isShared_5276_ = v_isSharedCheck_5282_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5272_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5282_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5280_; 
v___x_5277_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30);
v___x_5278_ = lean_string_append(v___x_5277_, v_a_5273_);
lean_dec(v_a_5273_);
if (v_isShared_5276_ == 0)
{
lean_ctor_set(v___x_5275_, 0, v___x_5278_);
v___x_5280_ = v___x_5275_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v___x_5278_);
v___x_5280_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
return v___x_5280_;
}
}
}
else
{
if (lean_obj_tag(v___x_5272_) == 0)
{
lean_object* v_a_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5290_; 
lean_dec(v_a_5270_);
lean_dec(v_a_5249_);
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
lean_dec(v_json_5186_);
v_a_5283_ = lean_ctor_get(v___x_5272_, 0);
v_isSharedCheck_5290_ = !lean_is_exclusive(v___x_5272_);
if (v_isSharedCheck_5290_ == 0)
{
v___x_5285_ = v___x_5272_;
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_a_5283_);
lean_dec(v___x_5272_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
lean_object* v___x_5288_; 
if (v_isShared_5286_ == 0)
{
lean_ctor_set_tag(v___x_5285_, 0);
v___x_5288_ = v___x_5285_;
goto v_reusejp_5287_;
}
else
{
lean_object* v_reuseFailAlloc_5289_; 
v_reuseFailAlloc_5289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5289_, 0, v_a_5283_);
v___x_5288_ = v_reuseFailAlloc_5289_;
goto v_reusejp_5287_;
}
v_reusejp_5287_:
{
return v___x_5288_;
}
}
}
else
{
lean_object* v_a_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; 
v_a_5291_ = lean_ctor_get(v___x_5272_, 0);
lean_inc(v_a_5291_);
lean_dec_ref_known(v___x_5272_, 1);
v___x_5292_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31));
v___x_5293_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_json_5186_, v___x_5292_);
if (lean_obj_tag(v___x_5293_) == 0)
{
lean_object* v_a_5294_; lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5303_; 
lean_dec(v_a_5291_);
lean_dec(v_a_5270_);
lean_dec(v_a_5249_);
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
v_a_5294_ = lean_ctor_get(v___x_5293_, 0);
v_isSharedCheck_5303_ = !lean_is_exclusive(v___x_5293_);
if (v_isSharedCheck_5303_ == 0)
{
v___x_5296_ = v___x_5293_;
v_isShared_5297_ = v_isSharedCheck_5303_;
goto v_resetjp_5295_;
}
else
{
lean_inc(v_a_5294_);
lean_dec(v___x_5293_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5303_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5301_; 
v___x_5298_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35);
v___x_5299_ = lean_string_append(v___x_5298_, v_a_5294_);
lean_dec(v_a_5294_);
if (v_isShared_5297_ == 0)
{
lean_ctor_set(v___x_5296_, 0, v___x_5299_);
v___x_5301_ = v___x_5296_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v___x_5299_);
v___x_5301_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
return v___x_5301_;
}
}
}
else
{
if (lean_obj_tag(v___x_5293_) == 0)
{
lean_object* v_a_5304_; lean_object* v___x_5306_; uint8_t v_isShared_5307_; uint8_t v_isSharedCheck_5311_; 
lean_dec(v_a_5291_);
lean_dec(v_a_5270_);
lean_dec(v_a_5249_);
lean_dec(v_a_5228_);
lean_dec(v_a_5207_);
v_a_5304_ = lean_ctor_get(v___x_5293_, 0);
v_isSharedCheck_5311_ = !lean_is_exclusive(v___x_5293_);
if (v_isSharedCheck_5311_ == 0)
{
v___x_5306_ = v___x_5293_;
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
else
{
lean_inc(v_a_5304_);
lean_dec(v___x_5293_);
v___x_5306_ = lean_box(0);
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
v_resetjp_5305_:
{
lean_object* v___x_5309_; 
if (v_isShared_5307_ == 0)
{
lean_ctor_set_tag(v___x_5306_, 0);
v___x_5309_ = v___x_5306_;
goto v_reusejp_5308_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v_a_5304_);
v___x_5309_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5308_;
}
v_reusejp_5308_:
{
return v___x_5309_;
}
}
}
else
{
lean_object* v_a_5312_; lean_object* v___x_5314_; uint8_t v_isShared_5315_; uint8_t v_isSharedCheck_5322_; 
v_a_5312_ = lean_ctor_get(v___x_5293_, 0);
v_isSharedCheck_5322_ = !lean_is_exclusive(v___x_5293_);
if (v_isSharedCheck_5322_ == 0)
{
v___x_5314_ = v___x_5293_;
v_isShared_5315_ = v_isSharedCheck_5322_;
goto v_resetjp_5313_;
}
else
{
lean_inc(v_a_5312_);
lean_dec(v___x_5293_);
v___x_5314_ = lean_box(0);
v_isShared_5315_ = v_isSharedCheck_5322_;
goto v_resetjp_5313_;
}
v_resetjp_5313_:
{
lean_object* v___x_5316_; lean_object* v___x_5317_; uint8_t v___x_5318_; lean_object* v___x_5320_; 
v___x_5316_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5316_, 0, v_a_5207_);
lean_ctor_set(v___x_5316_, 1, v_a_5228_);
lean_ctor_set(v___x_5316_, 2, v_a_5249_);
lean_ctor_set(v___x_5316_, 3, v_a_5270_);
v___x_5317_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5317_, 0, v___x_5316_);
lean_ctor_set(v___x_5317_, 1, v_a_5291_);
v___x_5318_ = lean_unbox(v_a_5312_);
lean_dec(v_a_5312_);
lean_ctor_set_uint8(v___x_5317_, sizeof(void*)*2, v___x_5318_);
if (v_isShared_5315_ == 0)
{
lean_ctor_set(v___x_5314_, 0, v___x_5317_);
v___x_5320_ = v___x_5314_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v___x_5317_);
v___x_5320_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
return v___x_5320_;
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
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__0(lean_object* v_k_5325_, lean_object* v_x_5326_){
_start:
{
if (lean_obj_tag(v_x_5326_) == 0)
{
lean_object* v___x_5327_; 
lean_dec_ref(v_k_5325_);
v___x_5327_ = lean_box(0);
return v___x_5327_;
}
else
{
lean_object* v_val_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; 
v_val_5328_ = lean_ctor_get(v_x_5326_, 0);
lean_inc(v_val_5328_);
lean_dec_ref_known(v_x_5326_, 1);
v___x_5329_ = l_Lean_Lsp_instToJsonRange_toJson(v_val_5328_);
v___x_5330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5330_, 0, v_k_5325_);
lean_ctor_set(v___x_5330_, 1, v___x_5329_);
v___x_5331_ = lean_box(0);
v___x_5332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5330_);
lean_ctor_set(v___x_5332_, 1, v___x_5331_);
return v___x_5332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__1(lean_object* v_k_5333_, lean_object* v_x_5334_){
_start:
{
if (lean_obj_tag(v_x_5334_) == 0)
{
lean_object* v___x_5335_; 
lean_dec_ref(v_k_5333_);
v___x_5335_ = lean_box(0);
return v___x_5335_;
}
else
{
lean_object* v_val_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; 
v_val_5336_ = lean_ctor_get(v_x_5334_, 0);
lean_inc(v_val_5336_);
lean_dec_ref_known(v_x_5334_, 1);
v___x_5337_ = l_Lean_Lsp_instToJsonLeanDeclIdent_toJson(v_val_5336_);
v___x_5338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5338_, 0, v_k_5333_);
lean_ctor_set(v___x_5338_, 1, v___x_5337_);
v___x_5339_ = lean_box(0);
v___x_5340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5338_);
lean_ctor_set(v___x_5340_, 1, v___x_5339_);
return v___x_5340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanLocationLink_toJson(lean_object* v_x_5341_){
_start:
{
lean_object* v_toLocationLink_5342_; lean_object* v_ident_x3f_5343_; uint8_t v_isDefault_5344_; lean_object* v_originSelectionRange_x3f_5345_; lean_object* v_targetUri_5346_; lean_object* v_targetRange_5347_; lean_object* v_targetSelectionRange_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; 
v_toLocationLink_5342_ = lean_ctor_get(v_x_5341_, 0);
lean_inc_ref(v_toLocationLink_5342_);
v_ident_x3f_5343_ = lean_ctor_get(v_x_5341_, 1);
lean_inc(v_ident_x3f_5343_);
v_isDefault_5344_ = lean_ctor_get_uint8(v_x_5341_, sizeof(void*)*2);
lean_dec_ref(v_x_5341_);
v_originSelectionRange_x3f_5345_ = lean_ctor_get(v_toLocationLink_5342_, 0);
lean_inc(v_originSelectionRange_x3f_5345_);
v_targetUri_5346_ = lean_ctor_get(v_toLocationLink_5342_, 1);
lean_inc_ref(v_targetUri_5346_);
v_targetRange_5347_ = lean_ctor_get(v_toLocationLink_5342_, 2);
lean_inc_ref(v_targetRange_5347_);
v_targetSelectionRange_5348_ = lean_ctor_get(v_toLocationLink_5342_, 3);
lean_inc_ref(v_targetSelectionRange_5348_);
lean_dec_ref(v_toLocationLink_5342_);
v___x_5349_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0));
v___x_5350_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__0(v___x_5349_, v_originSelectionRange_x3f_5345_);
v___x_5351_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10));
v___x_5352_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5352_, 0, v_targetUri_5346_);
v___x_5353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5353_, 0, v___x_5351_);
lean_ctor_set(v___x_5353_, 1, v___x_5352_);
v___x_5354_ = lean_box(0);
v___x_5355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5355_, 0, v___x_5353_);
lean_ctor_set(v___x_5355_, 1, v___x_5354_);
v___x_5356_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15));
v___x_5357_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetRange_5347_);
v___x_5358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5358_, 0, v___x_5356_);
lean_ctor_set(v___x_5358_, 1, v___x_5357_);
v___x_5359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5359_, 0, v___x_5358_);
lean_ctor_set(v___x_5359_, 1, v___x_5354_);
v___x_5360_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20));
v___x_5361_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetSelectionRange_5348_);
v___x_5362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5362_, 0, v___x_5360_);
lean_ctor_set(v___x_5362_, 1, v___x_5361_);
v___x_5363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5363_, 0, v___x_5362_);
lean_ctor_set(v___x_5363_, 1, v___x_5354_);
v___x_5364_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25));
v___x_5365_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__1(v___x_5364_, v_ident_x3f_5343_);
v___x_5366_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31));
v___x_5367_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5367_, 0, v_isDefault_5344_);
v___x_5368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5368_, 0, v___x_5366_);
lean_ctor_set(v___x_5368_, 1, v___x_5367_);
v___x_5369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5369_, 0, v___x_5368_);
lean_ctor_set(v___x_5369_, 1, v___x_5354_);
v___x_5370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5370_, 0, v___x_5369_);
lean_ctor_set(v___x_5370_, 1, v___x_5354_);
v___x_5371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5371_, 0, v___x_5365_);
lean_ctor_set(v___x_5371_, 1, v___x_5370_);
v___x_5372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5372_, 0, v___x_5363_);
lean_ctor_set(v___x_5372_, 1, v___x_5371_);
v___x_5373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5373_, 0, v___x_5359_);
lean_ctor_set(v___x_5373_, 1, v___x_5372_);
v___x_5374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5374_, 0, v___x_5355_);
lean_ctor_set(v___x_5374_, 1, v___x_5373_);
v___x_5375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5350_);
lean_ctor_set(v___x_5375_, 1, v___x_5374_);
v___x_5376_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_5377_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_5375_, v___x_5376_);
v___x_5378_ = l_Lean_Json_mkObj(v___x_5377_);
lean_dec(v___x_5377_);
return v___x_5378_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_JsonRpc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_Internal(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_JsonRpc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instEmptyCollectionDecls___aux__1 = _init_l_Lean_Lsp_instEmptyCollectionDecls___aux__1();
lean_mark_persistent(l_Lean_Lsp_instEmptyCollectionDecls___aux__1);
l_Lean_Lsp_instEmptyCollectionDecls = _init_l_Lean_Lsp_instEmptyCollectionDecls();
lean_mark_persistent(l_Lean_Lsp_instEmptyCollectionDecls);
l_Lean_Lsp_instEmptyCollectionModuleRefs___aux__1 = _init_l_Lean_Lsp_instEmptyCollectionModuleRefs___aux__1();
lean_mark_persistent(l_Lean_Lsp_instEmptyCollectionModuleRefs___aux__1);
l_Lean_Lsp_instEmptyCollectionModuleRefs = _init_l_Lean_Lsp_instEmptyCollectionModuleRefs();
lean_mark_persistent(l_Lean_Lsp_instEmptyCollectionModuleRefs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_Internal(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_JsonRpc(uint8_t builtin);
lean_object* initialize_Lean_Data_DeclarationRange(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Internal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_JsonRpc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_Internal(builtin);
}
#ifdef __cplusplus
}
#endif

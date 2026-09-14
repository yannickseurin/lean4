// Lean compiler output
// Module: Lean.Data.Lsp.TextSync
// Imports: public import Lean.Data.Lsp.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unknown TextDocumentSyncKind"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentSyncKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncKind___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__0;
static lean_once_cell_t l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1;
static lean_once_cell_t l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__2;
static lean_once_cell_t l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3;
static lean_once_cell_t l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__4;
static lean_once_cell_t l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentSyncKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncKind___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "textDocument"};
static const lean_object* l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0_value;
static const lean_array_object l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDidOpenTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDidOpenTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDidOpenTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDidOpenTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instToJsonDidOpenTextDocumentParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "DidOpenTextDocumentParams"};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(97, 184, 77, 155, 136, 131, 169, 24)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__6;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 223, 21, 223, 122, 31, 128, 254)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "documentSelector"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "TextDocumentChangeRegistrationOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 116, 66, 201, 97, 133, 37, 241)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "documentSelector\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(91, 242, 138, 38, 210, 232, 124, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "syncKind"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(234, 21, 134, 62, 235, 164, 85, 135)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__14;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_rangeChange_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_rangeChange_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_fullChange_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_fullChange_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRange_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getStr_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__1_value),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___closed__0 = (const lean_object*)&l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson = (const lean_object*)&l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "contentChanges"};
static const lean_object* l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDidChangeTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDidChangeTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDidChangeTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDidChangeTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instToJsonDidChangeTextDocumentParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "DidChangeTextDocumentParams"};
static const lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 72, 203, 218, 154, 80, 141, 249)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 65, 175, 11, 18, 214, 36, 239)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__9;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDidSaveTextDocumentParams_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidSaveTextDocumentParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDidSaveTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDidSaveTextDocumentParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDidSaveTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDidSaveTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDidSaveTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instToJsonDidSaveTextDocumentParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "DidSaveTextDocumentParams"};
static const lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 170, 20, 102, 195, 2, 175, 174)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "text\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(119, 11, 87, 192, 206, 66, 232, 28)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__10;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonSaveOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "includeText"};
static const lean_object* l_Lean_Lsp_instToJsonSaveOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonSaveOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSaveOptions_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSaveOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonSaveOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonSaveOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonSaveOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonSaveOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonSaveOptions = (const lean_object*)&l_Lean_Lsp_instToJsonSaveOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "SaveOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 145, 122, 153, 142, 193, 12, 135)}};
static const lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonSaveOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 230, 220, 117, 153, 35, 49, 211)}};
static const lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonSaveOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonSaveOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonSaveOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonSaveOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonSaveOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidCloseTextDocumentParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDidCloseTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDidCloseTextDocumentParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDidCloseTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDidCloseTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDidCloseTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instToJsonDidCloseTextDocumentParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "DidCloseTextDocumentParams"};
static const lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 113, 132, 107, 175, 106, 71, 4)}};
static const lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__5;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams = (const lean_object*)&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "openClose"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "change"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "willSave"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "willSaveWaitUntil"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "save"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentSyncOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "TextDocumentSyncOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 117, 158, 168, 238, 135, 208, 68)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 9, 47, 109, 206, 249, 195, 126)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(125, 120, 133, 160, 129, 235, 229, 190)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__11;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(84, 40, 145, 117, 81, 143, 125, 178)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__15;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(122, 131, 138, 36, 151, 11, 76, 221)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__16 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__19;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "save\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__20 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__20_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__20_value),LEAN_SCALAR_PTR_LITERAL(172, 42, 97, 221, 226, 169, 49, 167)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__21 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__21_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__22;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__23;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__24;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentSyncOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_Lsp_TextDocumentSyncKind_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Lsp_TextDocumentSyncKind_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_Lsp_TextDocumentSyncKind_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim___redArg(lean_object* v_none_23_){
_start:
{
lean_inc(v_none_23_);
return v_none_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim___redArg___boxed(lean_object* v_none_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Lsp_TextDocumentSyncKind_none_elim___redArg(v_none_24_);
lean_dec(v_none_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_none_29_){
_start:
{
lean_inc(v_none_29_);
return v_none_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_none_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_none_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_Lsp_TextDocumentSyncKind_none_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_none_33_);
lean_dec(v_none_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim___redArg(lean_object* v_full_36_){
_start:
{
lean_inc(v_full_36_);
return v_full_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim___redArg___boxed(lean_object* v_full_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Lsp_TextDocumentSyncKind_full_elim___redArg(v_full_37_);
lean_dec(v_full_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_full_42_){
_start:
{
lean_inc(v_full_42_);
return v_full_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_full_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_full_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_Lsp_TextDocumentSyncKind_full_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_full_46_);
lean_dec(v_full_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___redArg(lean_object* v_incremental_49_){
_start:
{
lean_inc(v_incremental_49_);
return v_incremental_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___redArg___boxed(lean_object* v_incremental_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___redArg(v_incremental_50_);
lean_dec(v_incremental_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_incremental_55_){
_start:
{
lean_inc(v_incremental_55_);
return v_incremental_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentSyncKind_incremental_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_incremental_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_Lsp_TextDocumentSyncKind_incremental_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_incremental_59_);
lean_dec(v_incremental_59_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0(lean_object* v_j_74_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Json_getNat_x3f(v_j_74_);
if (lean_obj_tag(v___x_77_) == 1)
{
lean_object* v_a_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_a_78_);
lean_dec_ref_known(v___x_77_, 1);
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_nat_dec_eq(v_a_78_, v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = lean_nat_dec_eq(v_a_78_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(2u);
v___x_84_ = lean_nat_dec_eq(v_a_78_, v___x_83_);
lean_dec(v_a_78_);
if (v___x_84_ == 0)
{
goto v___jp_75_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__2));
return v___x_85_;
}
}
else
{
lean_object* v___x_86_; 
lean_dec(v_a_78_);
v___x_86_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__3));
return v___x_86_;
}
}
else
{
lean_object* v___x_87_; 
lean_dec(v_a_78_);
v___x_87_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__4));
return v___x_87_;
}
}
else
{
lean_dec_ref(v___x_77_);
goto v___jp_75_;
}
v___jp_75_:
{
lean_object* v___x_76_; 
v___x_76_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__1));
return v___x_76_;
}
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = l_Lean_JsonNumber_fromNat(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__0, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__0_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__0);
v___x_93_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__2(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = l_Lean_JsonNumber_fromNat(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__2, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__2_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__2);
v___x_97_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__4(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(2u);
v___x_99_ = l_Lean_JsonNumber_fromNat(v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__4, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__4_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__4);
v___x_101_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0(uint8_t v_x_102_){
_start:
{
switch(v_x_102_)
{
case 0:
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1);
return v___x_103_;
}
case 1:
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3);
return v___x_104_;
}
default: 
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5);
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___boxed(lean_object* v_x_106_){
_start:
{
uint8_t v_x_81__boxed_107_; lean_object* v_res_108_; 
v_x_81__boxed_107_ = lean_unbox(v_x_106_);
v_res_108_ = l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0(v_x_81__boxed_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
if (lean_obj_tag(v_a_111_) == 0)
{
lean_object* v___x_113_; 
v___x_113_ = lean_array_to_list(v_a_112_);
return v___x_113_;
}
else
{
lean_object* v_head_114_; lean_object* v_tail_115_; lean_object* v___x_116_; 
v_head_114_ = lean_ctor_get(v_a_111_, 0);
lean_inc(v_head_114_);
v_tail_115_ = lean_ctor_get(v_a_111_, 1);
lean_inc(v_tail_115_);
lean_dec_ref_known(v_a_111_, 2);
v___x_116_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_112_, v_head_114_);
v_a_111_ = v_tail_115_;
v_a_112_ = v___x_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson(lean_object* v_x_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_122_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
v___x_123_ = l_Lean_Lsp_instToJsonTextDocumentItem_toJson(v_x_121_);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = lean_box(0);
v___x_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_124_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v___x_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___x_125_);
v___x_128_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1));
v___x_129_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(v___x_127_, v___x_128_);
v___x_130_ = l_Lean_Json_mkObj(v___x_129_);
lean_dec(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson_spec__0(lean_object* v_j_133_, lean_object* v_k_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = l_Lean_Json_getObjValD(v_j_133_, v_k_134_);
v___x_136_ = l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson(v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson_spec__0___boxed(lean_object* v_j_137_, lean_object* v_k_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson_spec__0(v_j_137_, v_k_138_);
lean_dec_ref(v_k_138_);
return v_res_139_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__4(void){
_start:
{
uint8_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = 1;
v___x_148_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__3));
v___x_149_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_148_, v___x_147_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__6(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_152_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__4);
v___x_153_ = lean_string_append(v___x_152_, v___x_151_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8(void){
_start:
{
uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = 1;
v___x_157_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__7));
v___x_158_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8);
v___x_160_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__6);
v___x_161_ = lean_string_append(v___x_160_, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__11(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_164_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__9);
v___x_165_ = lean_string_append(v___x_164_, v___x_163_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson(lean_object* v_json_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
v___x_168_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson_spec__0(v_json_166_, v___x_167_);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_178_; 
v_a_169_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_178_ == 0)
{
v___x_171_ = v___x_168_;
v_isShared_172_ = v_isSharedCheck_178_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_168_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_178_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_173_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__11, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__11);
v___x_174_ = lean_string_append(v___x_173_, v_a_169_);
lean_dec(v_a_169_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_174_);
v___x_176_ = v___x_171_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
else
{
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
v_a_179_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_168_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_168_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set_tag(v___x_181_, 0);
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_168_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_168_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1(lean_object* v_j_197_, lean_object* v_k_198_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = l_Lean_Json_getObjValD(v_j_197_, v_k_198_);
v___x_202_ = l_Lean_Json_getNat_x3f(v___x_201_);
if (lean_obj_tag(v___x_202_) == 1)
{
lean_object* v_a_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_nat_dec_eq(v_a_203_, v___x_204_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(1u);
v___x_207_ = lean_nat_dec_eq(v_a_203_, v___x_206_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(2u);
v___x_209_ = lean_nat_dec_eq(v_a_203_, v___x_208_);
lean_dec(v_a_203_);
if (v___x_209_ == 0)
{
goto v___jp_199_;
}
else
{
lean_object* v___x_210_; 
v___x_210_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__2));
return v___x_210_;
}
}
else
{
lean_object* v___x_211_; 
lean_dec(v_a_203_);
v___x_211_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__3));
return v___x_211_;
}
}
else
{
lean_object* v___x_212_; 
lean_dec(v_a_203_);
v___x_212_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__4));
return v___x_212_;
}
}
else
{
lean_dec_ref(v___x_202_);
goto v___jp_199_;
}
v___jp_199_:
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncKind___lam__0___closed__1));
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1___boxed(lean_object* v_j_213_, lean_object* v_k_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1(v_j_213_, v_k_214_);
lean_dec_ref(v_k_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2_spec__3(size_t v_sz_216_, size_t v_i_217_, lean_object* v_bs_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = lean_usize_dec_lt(v_i_217_, v_sz_216_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = l_unsafeCast___redArg(v_bs_218_);
lean_dec_ref(v_bs_218_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
else
{
lean_object* v_v_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_v_222_ = lean_array_uget_borrowed(v_bs_218_, v_i_217_);
v___x_223_ = l_unsafeCast___redArg(v_v_222_);
v___x_224_ = l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(v___x_223_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec_ref(v_bs_218_);
v_a_225_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_224_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_224_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_234_; lean_object* v_bs_x27_235_; size_t v___x_236_; size_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_a_233_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_224_, 1);
v___x_234_ = lean_unsigned_to_nat(0u);
v_bs_x27_235_ = lean_array_uset(v_bs_218_, v_i_217_, v___x_234_);
v___x_236_ = ((size_t)1ULL);
v___x_237_ = lean_usize_add(v_i_217_, v___x_236_);
v___x_238_ = l_unsafeCast___redArg(v_a_233_);
lean_dec(v_a_233_);
v___x_239_ = lean_array_uset(v_bs_x27_235_, v_i_217_, v___x_238_);
v_i_217_ = v___x_237_;
v_bs_218_ = v___x_239_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_sz_241_, lean_object* v_i_242_, lean_object* v_bs_243_){
_start:
{
size_t v_sz_boxed_244_; size_t v_i_boxed_245_; lean_object* v_res_246_; 
v_sz_boxed_244_ = lean_unbox_usize(v_sz_241_);
lean_dec(v_sz_241_);
v_i_boxed_245_ = lean_unbox_usize(v_i_242_);
lean_dec(v_i_242_);
v_res_246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2_spec__3(v_sz_boxed_244_, v_i_boxed_245_, v_bs_243_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2(lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 4)
{
lean_object* v_elems_250_; size_t v_sz_251_; size_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_elems_250_ = lean_ctor_get(v_x_249_, 0);
lean_inc_ref(v_elems_250_);
lean_dec_ref_known(v_x_249_, 1);
v_sz_251_ = lean_array_size(v_elems_250_);
v___x_252_ = ((size_t)0ULL);
v___x_253_ = l_unsafeCast___redArg(v_elems_250_);
lean_dec_ref(v_elems_250_);
v___x_254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2_spec__3(v_sz_251_, v___x_252_, v___x_253_);
v___x_255_ = l_unsafeCast___redArg(v___x_254_);
lean_dec_ref(v___x_254_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_256_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__0));
v___x_257_ = lean_unsigned_to_nat(80u);
v___x_258_ = l_Lean_Json_pretty(v_x_249_, v___x_257_);
v___x_259_ = lean_string_append(v___x_256_, v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__1));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0(lean_object* v_x_265_){
_start:
{
if (lean_obj_tag(v_x_265_) == 0)
{
lean_object* v___x_266_; 
v___x_266_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0___closed__0));
return v___x_266_;
}
else
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2(v_x_265_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_267_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
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
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_284_; 
v_a_276_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_284_ == 0)
{
v___x_278_ = v___x_267_;
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_267_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v_a_276_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_280_);
v___x_282_ = v___x_278_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0(lean_object* v_j_285_, lean_object* v_k_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = l_Lean_Json_getObjValD(v_j_285_, v_k_286_);
v___x_288_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0(v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0___boxed(lean_object* v_j_289_, lean_object* v_k_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0(v_j_289_, v_k_290_);
lean_dec_ref(v_k_290_);
return v_res_291_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__3(void){
_start:
{
uint8_t v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = 1;
v___x_299_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__2));
v___x_300_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_299_, v___x_298_);
return v___x_300_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_302_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__3);
v___x_303_ = lean_string_append(v___x_302_, v___x_301_);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__7(void){
_start:
{
uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_307_ = 1;
v___x_308_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__6));
v___x_309_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_308_, v___x_307_);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__7);
v___x_311_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4);
v___x_312_ = lean_string_append(v___x_311_, v___x_310_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__9(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_314_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__8);
v___x_315_ = lean_string_append(v___x_314_, v___x_313_);
return v___x_315_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__12(void){
_start:
{
uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = 1;
v___x_320_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__11));
v___x_321_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_320_, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__13(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__12, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__12);
v___x_323_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__4);
v___x_324_ = lean_string_append(v___x_323_, v___x_322_);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__14(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_326_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__13);
v___x_327_ = lean_string_append(v___x_326_, v___x_325_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson(lean_object* v_json_328_){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__0));
lean_inc(v_json_328_);
v___x_330_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0(v_json_328_, v___x_329_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_340_; 
lean_dec(v_json_328_);
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_340_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_340_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_340_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_335_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__9);
v___x_336_ = lean_string_append(v___x_335_, v_a_331_);
lean_dec(v_a_331_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_336_);
v___x_338_ = v___x_333_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_336_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
else
{
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec(v_json_328_);
v_a_341_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_330_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_330_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 0);
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
else
{
lean_object* v_a_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_a_349_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_349_);
lean_dec_ref_known(v___x_330_, 1);
v___x_350_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__10));
v___x_351_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1(v_json_328_, v___x_350_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_a_349_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_361_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_361_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_361_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_356_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__14, &l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson___closed__14);
v___x_357_ = lean_string_append(v___x_356_, v_a_352_);
lean_dec(v_a_352_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_357_);
v___x_359_ = v___x_354_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
else
{
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v_a_349_);
v_a_362_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_351_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_351_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 0);
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_379_; 
v_a_370_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_379_ == 0)
{
v___x_372_ = v___x_351_;
v_isShared_373_ = v_isSharedCheck_379_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_351_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_379_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; uint8_t v___x_375_; lean_object* v___x_377_; 
v___x_374_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_374_, 0, v_a_349_);
v___x_375_ = lean_unbox(v_a_370_);
lean_dec(v_a_370_);
lean_ctor_set_uint8(v___x_374_, sizeof(void*)*1, v___x_375_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_374_);
v___x_377_ = v___x_372_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_374_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorIdx(lean_object* v_x_382_){
_start:
{
if (lean_obj_tag(v_x_382_) == 0)
{
lean_object* v___x_383_; 
v___x_383_ = lean_unsigned_to_nat(0u);
return v___x_383_;
}
else
{
lean_object* v___x_384_; 
v___x_384_ = lean_unsigned_to_nat(1u);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorIdx___boxed(lean_object* v_x_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorIdx(v_x_385_);
lean_dec_ref(v_x_385_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(lean_object* v_t_387_, lean_object* v_k_388_){
_start:
{
if (lean_obj_tag(v_t_387_) == 0)
{
lean_object* v_range_389_; lean_object* v_text_390_; lean_object* v___x_391_; 
v_range_389_ = lean_ctor_get(v_t_387_, 0);
lean_inc_ref(v_range_389_);
v_text_390_ = lean_ctor_get(v_t_387_, 1);
lean_inc_ref(v_text_390_);
lean_dec_ref_known(v_t_387_, 2);
v___x_391_ = lean_apply_2(v_k_388_, v_range_389_, v_text_390_);
return v___x_391_;
}
else
{
lean_object* v_text_392_; lean_object* v___x_393_; 
v_text_392_ = lean_ctor_get(v_t_387_, 0);
lean_inc_ref(v_text_392_);
lean_dec_ref_known(v_t_387_, 1);
v___x_393_ = lean_apply_1(v_k_388_, v_text_392_);
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim(lean_object* v_motive_394_, lean_object* v_ctorIdx_395_, lean_object* v_t_396_, lean_object* v_h_397_, lean_object* v_k_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(v_t_396_, v_k_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___boxed(lean_object* v_motive_400_, lean_object* v_ctorIdx_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_k_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim(v_motive_400_, v_ctorIdx_401_, v_t_402_, v_h_403_, v_k_404_);
lean_dec(v_ctorIdx_401_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_rangeChange_elim___redArg(lean_object* v_t_406_, lean_object* v_rangeChange_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(v_t_406_, v_rangeChange_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_rangeChange_elim(lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_rangeChange_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(v_t_410_, v_rangeChange_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_fullChange_elim___redArg(lean_object* v_t_414_, lean_object* v_fullChange_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(v_t_414_, v_fullChange_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_fullChange_elim(lean_object* v_motive_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_fullChange_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_Lsp_TextDocumentContentChangeEvent_ctorElim___redArg(v_t_418_, v_fullChange_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0(lean_object* v___x_424_, lean_object* v___x_425_, lean_object* v_j_426_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1));
lean_inc(v_j_426_);
v___x_448_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_426_, v___x_425_, v___x_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_dec_ref_known(v___x_448_, 1);
goto v___jp_427_;
}
else
{
lean_object* v_a_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
v___x_450_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
lean_inc_ref(v___x_424_);
lean_inc(v_j_426_);
v___x_451_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_426_, v___x_424_, v___x_450_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_dec_ref_known(v___x_451_, 1);
lean_dec(v_a_449_);
goto v___jp_427_;
}
else
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_460_; 
lean_dec(v_j_426_);
lean_dec_ref(v___x_424_);
v_a_452_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_460_ == 0)
{
v___x_454_ = v___x_451_;
v_isShared_455_ = v_isSharedCheck_460_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_451_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_460_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_458_; 
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v_a_449_);
lean_ctor_set(v___x_456_, 1, v_a_452_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_456_);
v___x_458_ = v___x_454_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
v___jp_427_:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
v___x_429_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_426_, v___x_424_, v___x_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
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
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_446_; 
v_a_438_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_446_ == 0)
{
v___x_440_ = v___x_429_;
v_isShared_441_ = v_isSharedCheck_446_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_429_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_446_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_442_, 0, v_a_438_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_442_);
v___x_444_ = v___x_440_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_TextDocumentContentChangeEvent_hasToJson___lam__0(lean_object* v_o_467_){
_start:
{
if (lean_obj_tag(v_o_467_) == 0)
{
lean_object* v_range_468_; lean_object* v_text_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_485_; 
v_range_468_ = lean_ctor_get(v_o_467_, 0);
v_text_469_ = lean_ctor_get(v_o_467_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v_o_467_);
if (v_isSharedCheck_485_ == 0)
{
v___x_471_ = v_o_467_;
v_isShared_472_ = v_isSharedCheck_485_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_text_469_);
lean_inc(v_range_468_);
lean_dec(v_o_467_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_485_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1));
v___x_474_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_468_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 1, v___x_474_);
lean_ctor_set(v___x_471_, 0, v___x_473_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v___x_474_);
v___x_476_ = v_reuseFailAlloc_484_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_477_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
v___x_478_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_478_, 0, v_text_469_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = lean_box(0);
v___x_481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_476_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___x_483_ = l_Lean_Json_mkObj(v___x_482_);
lean_dec_ref_known(v___x_482_, 2);
return v___x_483_;
}
}
}
else
{
lean_object* v_text_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_498_; 
v_text_486_ = lean_ctor_get(v_o_467_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v_o_467_);
if (v_isSharedCheck_498_ == 0)
{
v___x_488_ = v_o_467_;
v_isShared_489_ = v_isSharedCheck_498_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_text_486_);
lean_dec(v_o_467_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_498_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_490_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 3);
v___x_492_ = v___x_488_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_text_486_);
v___x_492_ = v_reuseFailAlloc_497_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_490_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = l_Lean_Json_mkObj(v___x_495_);
lean_dec_ref_known(v___x_495_, 2);
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0_spec__0(size_t v_sz_501_, size_t v_i_502_, lean_object* v_bs_503_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_lt(v_i_502_, v_sz_501_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
v___x_505_ = l_unsafeCast___redArg(v_bs_503_);
lean_dec_ref(v_bs_503_);
return v___x_505_;
}
else
{
lean_object* v_v_506_; lean_object* v___x_507_; lean_object* v_bs_x27_508_; lean_object* v___y_510_; lean_object* v___x_516_; 
v_v_506_ = lean_array_uget(v_bs_503_, v_i_502_);
v___x_507_ = lean_unsigned_to_nat(0u);
v_bs_x27_508_ = lean_array_uset(v_bs_503_, v_i_502_, v___x_507_);
v___x_516_ = l_unsafeCast___redArg(v_v_506_);
lean_dec(v_v_506_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_range_517_; lean_object* v_text_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_534_; 
v_range_517_ = lean_ctor_get(v___x_516_, 0);
v_text_518_ = lean_ctor_get(v___x_516_, 1);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_534_ == 0)
{
v___x_520_ = v___x_516_;
v_isShared_521_ = v_isSharedCheck_534_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_text_518_);
lean_inc(v_range_517_);
lean_dec(v___x_516_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_534_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_522_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1));
v___x_523_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_517_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_523_);
lean_ctor_set(v___x_520_, 0, v___x_522_);
v___x_525_ = v___x_520_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___x_523_);
v___x_525_ = v_reuseFailAlloc_533_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_526_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
v___x_527_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_527_, 0, v_text_518_);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = lean_box(0);
v___x_530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_525_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = l_Lean_Json_mkObj(v___x_531_);
lean_dec_ref_known(v___x_531_, 2);
v___y_510_ = v___x_532_;
goto v___jp_509_;
}
}
}
else
{
lean_object* v_text_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_547_; 
v_text_535_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_547_ == 0)
{
v___x_537_ = v___x_516_;
v_isShared_538_ = v_isSharedCheck_547_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_text_535_);
lean_dec(v___x_516_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_547_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
if (v_isShared_538_ == 0)
{
lean_ctor_set_tag(v___x_537_, 3);
v___x_541_ = v___x_537_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_text_535_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_539_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = lean_box(0);
v___x_544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = l_Lean_Json_mkObj(v___x_544_);
lean_dec_ref_known(v___x_544_, 2);
v___y_510_ = v___x_545_;
goto v___jp_509_;
}
}
}
v___jp_509_:
{
size_t v___x_511_; size_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_511_ = ((size_t)1ULL);
v___x_512_ = lean_usize_add(v_i_502_, v___x_511_);
v___x_513_ = l_unsafeCast___redArg(v___y_510_);
lean_dec(v___y_510_);
v___x_514_ = lean_array_uset(v_bs_x27_508_, v_i_502_, v___x_513_);
v_i_502_ = v___x_512_;
v_bs_503_ = v___x_514_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_548_, lean_object* v_i_549_, lean_object* v_bs_550_){
_start:
{
size_t v_sz_boxed_551_; size_t v_i_boxed_552_; lean_object* v_res_553_; 
v_sz_boxed_551_ = lean_unbox_usize(v_sz_548_);
lean_dec(v_sz_548_);
v_i_boxed_552_ = lean_unbox_usize(v_i_549_);
lean_dec(v_i_549_);
v_res_553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0_spec__0(v_sz_boxed_551_, v_i_boxed_552_, v_bs_550_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0(lean_object* v_a_554_){
_start:
{
size_t v_sz_555_; size_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_sz_555_ = lean_array_size(v_a_554_);
v___x_556_ = ((size_t)0ULL);
v___x_557_ = l_unsafeCast___redArg(v_a_554_);
v___x_558_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0_spec__0(v_sz_555_, v___x_556_, v___x_557_);
v___x_559_ = l_unsafeCast___redArg(v___x_558_);
lean_dec_ref(v___x_558_);
v___x_560_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0___boxed(lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0(v_a_561_);
lean_dec_ref(v_a_561_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson(lean_object* v_x_564_){
_start:
{
lean_object* v_textDocument_565_; lean_object* v_contentChanges_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_586_; 
v_textDocument_565_ = lean_ctor_get(v_x_564_, 0);
v_contentChanges_566_ = lean_ctor_get(v_x_564_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_x_564_);
if (v_isSharedCheck_586_ == 0)
{
v___x_568_ = v_x_564_;
v_isShared_569_ = v_isSharedCheck_586_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_contentChanges_566_);
lean_inc(v_textDocument_565_);
lean_dec(v_x_564_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_586_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_570_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
v___x_571_ = l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(v_textDocument_565_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 1, v___x_571_);
lean_ctor_set(v___x_568_, 0, v___x_570_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_571_);
v___x_573_ = v_reuseFailAlloc_585_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson___closed__0));
v___x_577_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson_spec__0(v_contentChanges_566_);
lean_dec_ref(v_contentChanges_566_);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
lean_ctor_set(v___x_579_, 1, v___x_574_);
v___x_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v___x_574_);
v___x_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_575_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1));
v___x_583_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(v___x_581_, v___x_582_);
v___x_584_ = l_Lean_Json_mkObj(v___x_583_);
lean_dec(v___x_583_);
return v___x_584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__0(lean_object* v_j_589_, lean_object* v_k_590_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = l_Lean_Json_getObjValD(v_j_589_, v_k_590_);
v___x_592_ = l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(v___x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__0___boxed(lean_object* v_j_593_, lean_object* v_k_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__0(v_j_593_, v_k_594_);
lean_dec_ref(v_k_594_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__3(lean_object* v_j_596_, lean_object* v_k_597_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = l_Lean_Json_getObjValD(v_j_596_, v_k_597_);
v___x_599_ = l_Lean_Lsp_instFromJsonRange_fromJson(v___x_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__3___boxed(lean_object* v_j_600_, lean_object* v_k_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__3(v_j_600_, v_k_601_);
lean_dec_ref(v_k_601_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2(lean_object* v_j_603_, lean_object* v_k_604_){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = l_Lean_Json_getObjValD(v_j_603_, v_k_604_);
v___x_606_ = l_Lean_Json_getStr_x3f(v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_j_607_, lean_object* v_k_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2(v_j_607_, v_k_608_);
lean_dec_ref(v_k_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__4(size_t v_sz_610_, size_t v_i_611_, lean_object* v_bs_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = lean_usize_dec_lt(v_i_611_, v_sz_610_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = l_unsafeCast___redArg(v_bs_612_);
lean_dec_ref(v_bs_612_);
v___x_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v_v_616_; lean_object* v___x_617_; lean_object* v_bs_x27_618_; lean_object* v_a_620_; lean_object* v___x_626_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_v_616_ = lean_array_uget(v_bs_612_, v_i_611_);
v___x_617_ = lean_unsigned_to_nat(0u);
v_bs_x27_618_ = lean_array_uset(v_bs_612_, v_i_611_, v___x_617_);
v___x_626_ = l_unsafeCast___redArg(v_v_616_);
lean_dec(v_v_616_);
v___x_640_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__1));
lean_inc(v___x_626_);
v___x_641_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__3(v___x_626_, v___x_640_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_dec_ref_known(v___x_641_, 1);
goto v___jp_627_;
}
else
{
lean_object* v_a_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v___x_641_, 1);
v___x_643_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
lean_inc(v___x_626_);
v___x_644_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2(v___x_626_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_dec_ref_known(v___x_644_, 1);
lean_dec(v_a_642_);
goto v___jp_627_;
}
else
{
lean_object* v_a_645_; lean_object* v___x_646_; 
lean_dec(v___x_626_);
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v_a_642_);
lean_ctor_set(v___x_646_, 1, v_a_645_);
v_a_620_ = v___x_646_;
goto v___jp_619_;
}
}
v___jp_619_:
{
size_t v___x_621_; size_t v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_621_ = ((size_t)1ULL);
v___x_622_ = lean_usize_add(v_i_611_, v___x_621_);
v___x_623_ = l_unsafeCast___redArg(v_a_620_);
lean_dec_ref(v_a_620_);
v___x_624_ = lean_array_uset(v_bs_x27_618_, v_i_611_, v___x_623_);
v_i_611_ = v___x_622_;
v_bs_612_ = v___x_624_;
goto _start;
}
v___jp_627_:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
v___x_629_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__2(v___x_626_, v___x_628_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec_ref(v_bs_x27_618_);
v_a_630_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_629_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_629_);
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
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_639_; 
v_a_638_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_629_, 1);
v___x_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_639_, 0, v_a_638_);
v_a_620_ = v___x_639_;
goto v___jp_619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__4___boxed(lean_object* v_sz_647_, lean_object* v_i_648_, lean_object* v_bs_649_){
_start:
{
size_t v_sz_boxed_650_; size_t v_i_boxed_651_; lean_object* v_res_652_; 
v_sz_boxed_650_ = lean_unbox_usize(v_sz_647_);
lean_dec(v_sz_647_);
v_i_boxed_651_ = lean_unbox_usize(v_i_648_);
lean_dec(v_i_648_);
v_res_652_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__4(v_sz_boxed_650_, v_i_boxed_651_, v_bs_649_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1(lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 4)
{
lean_object* v_elems_654_; size_t v_sz_655_; size_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_elems_654_ = lean_ctor_get(v_x_653_, 0);
lean_inc_ref(v_elems_654_);
lean_dec_ref_known(v_x_653_, 1);
v_sz_655_ = lean_array_size(v_elems_654_);
v___x_656_ = ((size_t)0ULL);
v___x_657_ = l_unsafeCast___redArg(v_elems_654_);
lean_dec_ref(v_elems_654_);
v___x_658_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1_spec__4(v_sz_655_, v___x_656_, v___x_657_);
v___x_659_ = l_unsafeCast___redArg(v___x_658_);
lean_dec_ref(v___x_658_);
return v___x_659_;
}
else
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_660_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__0));
v___x_661_ = lean_unsigned_to_nat(80u);
v___x_662_ = l_Lean_Json_pretty(v_x_653_, v___x_661_);
v___x_663_ = lean_string_append(v___x_660_, v___x_662_);
lean_dec_ref(v___x_662_);
v___x_664_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__0_spec__0_spec__2___closed__1));
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1(lean_object* v_j_667_, lean_object* v_k_668_){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = l_Lean_Json_getObjValD(v_j_667_, v_k_668_);
v___x_670_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1_spec__1(v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1___boxed(lean_object* v_j_671_, lean_object* v_k_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1(v_j_671_, v_k_672_);
lean_dec_ref(v_k_672_);
return v_res_673_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = 1;
v___x_680_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__1));
v___x_681_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_680_, v___x_679_);
return v___x_681_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_683_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__2);
v___x_684_ = lean_string_append(v___x_683_, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8);
v___x_686_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3);
v___x_687_ = lean_string_append(v___x_686_, v___x_685_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_689_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__4);
v___x_690_ = lean_string_append(v___x_689_, v___x_688_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__7(void){
_start:
{
uint8_t v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = 1;
v___x_694_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__6));
v___x_695_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_694_, v___x_693_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__7);
v___x_697_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__3);
v___x_698_ = lean_string_append(v___x_697_, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_700_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__8);
v___x_701_ = lean_string_append(v___x_700_, v___x_699_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson(lean_object* v_json_702_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
lean_inc(v_json_702_);
v___x_704_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__0(v_json_702_, v___x_703_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_714_; 
lean_dec(v_json_702_);
v_a_705_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_714_ == 0)
{
v___x_707_ = v___x_704_;
v_isShared_708_ = v_isSharedCheck_714_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_704_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_714_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__5);
v___x_710_ = lean_string_append(v___x_709_, v_a_705_);
lean_dec(v_a_705_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v___x_710_);
v___x_712_ = v___x_707_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
else
{
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec(v_json_702_);
v_a_715_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_704_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_704_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 0);
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_a_723_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_723_);
lean_dec_ref_known(v___x_704_, 1);
v___x_724_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidChangeTextDocumentParams_toJson___closed__0));
v___x_725_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson_spec__1(v_json_702_, v___x_724_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_735_; 
lean_dec(v_a_723_);
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_735_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_735_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_735_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_730_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonDidChangeTextDocumentParams_fromJson___closed__9);
v___x_731_ = lean_string_append(v___x_730_, v_a_726_);
lean_dec(v_a_726_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_731_);
v___x_733_ = v___x_728_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
else
{
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_dec(v_a_723_);
v_a_736_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_725_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_725_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
lean_ctor_set_tag(v___x_738_, 0);
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_752_; 
v_a_744_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_752_ == 0)
{
v___x_746_ = v___x_725_;
v_isShared_747_ = v_isSharedCheck_752_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_725_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_752_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v_a_723_);
lean_ctor_set(v___x_748_, 1, v_a_744_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_748_);
v___x_750_ = v___x_746_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDidSaveTextDocumentParams_toJson_spec__0(lean_object* v_k_755_, lean_object* v_x_756_){
_start:
{
if (lean_obj_tag(v_x_756_) == 0)
{
lean_object* v___x_757_; 
lean_dec_ref(v_k_755_);
v___x_757_ = lean_box(0);
return v___x_757_;
}
else
{
lean_object* v_val_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_768_; 
v_val_758_ = lean_ctor_get(v_x_756_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v_x_756_);
if (v_isSharedCheck_768_ == 0)
{
v___x_760_ = v_x_756_;
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_val_758_);
lean_dec(v_x_756_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set_tag(v___x_760_, 3);
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_val_758_);
v___x_763_ = v_reuseFailAlloc_767_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_764_, 0, v_k_755_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = lean_box(0);
v___x_766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
return v___x_766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidSaveTextDocumentParams_toJson(lean_object* v_x_769_){
_start:
{
lean_object* v_textDocument_770_; lean_object* v_text_x3f_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_789_; 
v_textDocument_770_ = lean_ctor_get(v_x_769_, 0);
v_text_x3f_771_ = lean_ctor_get(v_x_769_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_x_769_);
if (v_isSharedCheck_789_ == 0)
{
v___x_773_ = v_x_769_;
v_isShared_774_ = v_isSharedCheck_789_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_text_x3f_771_);
lean_inc(v_textDocument_770_);
lean_dec(v_x_769_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_789_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
v___x_775_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
v___x_776_ = l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(v_textDocument_770_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 1, v___x_776_);
lean_ctor_set(v___x_773_, 0, v___x_775_);
v___x_778_ = v___x_773_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v___x_776_);
v___x_778_ = v_reuseFailAlloc_788_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_779_ = lean_box(0);
v___x_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
v___x_782_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDidSaveTextDocumentParams_toJson_spec__0(v___x_781_, v_text_x3f_771_);
v___x_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v___x_779_);
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_780_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1));
v___x_786_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(v___x_784_, v___x_785_);
v___x_787_ = l_Lean_Json_mkObj(v___x_786_);
lean_dec(v___x_786_);
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0(lean_object* v_j_792_, lean_object* v_k_793_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = l_Lean_Json_getObjValD(v_j_792_, v_k_793_);
v___x_795_ = l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0___boxed(lean_object* v_j_796_, lean_object* v_k_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0(v_j_796_, v_k_797_);
lean_dec_ref(v_k_797_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1(lean_object* v_x_801_){
_start:
{
if (lean_obj_tag(v_x_801_) == 0)
{
lean_object* v___x_802_; 
v___x_802_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1___closed__0));
return v___x_802_;
}
else
{
lean_object* v___x_803_; 
v___x_803_ = l_Lean_Json_getStr_x3f(v_x_801_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_820_; 
v_a_812_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_820_ == 0)
{
v___x_814_ = v___x_803_;
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_803_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_816_, 0, v_a_812_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1(lean_object* v_j_821_, lean_object* v_k_822_){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = l_Lean_Json_getObjValD(v_j_821_, v_k_822_);
v___x_824_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1_spec__1(v___x_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1___boxed(lean_object* v_j_825_, lean_object* v_k_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1(v_j_825_, v_k_826_);
lean_dec_ref(v_k_826_);
return v_res_827_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = 1;
v___x_834_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__1));
v___x_835_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_834_, v___x_833_);
return v___x_835_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_837_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__2);
v___x_838_ = lean_string_append(v___x_837_, v___x_836_);
return v___x_838_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_839_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8);
v___x_840_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3);
v___x_841_ = lean_string_append(v___x_840_, v___x_839_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_843_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__4);
v___x_844_ = lean_string_append(v___x_843_, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__8(void){
_start:
{
uint8_t v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = 1;
v___x_849_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__7));
v___x_850_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_849_, v___x_848_);
return v___x_850_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__8);
v___x_852_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__3);
v___x_853_ = lean_string_append(v___x_852_, v___x_851_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__10(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_855_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__9);
v___x_856_ = lean_string_append(v___x_855_, v___x_854_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson(lean_object* v_json_857_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
lean_inc(v_json_857_);
v___x_859_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0(v_json_857_, v___x_858_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_869_; 
lean_dec(v_json_857_);
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_869_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_869_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_869_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_864_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__5);
v___x_865_ = lean_string_append(v___x_864_, v_a_860_);
lean_dec(v_a_860_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_865_);
v___x_867_ = v___x_862_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
else
{
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_dec(v_json_857_);
v_a_870_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_859_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_859_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set_tag(v___x_872_, 0);
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_a_878_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_859_, 1);
v___x_879_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentContentChangeEvent___lam__0___closed__0));
v___x_880_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__1(v_json_857_, v___x_879_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_890_; 
lean_dec(v_a_878_);
v_a_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_890_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_890_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_890_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_885_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson___closed__10);
v___x_886_ = lean_string_append(v___x_885_, v_a_881_);
lean_dec(v_a_881_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
else
{
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec(v_a_878_);
v_a_891_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_880_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_880_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set_tag(v___x_893_, 0);
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_907_; 
v_a_899_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_907_ == 0)
{
v___x_901_ = v___x_880_;
v_isShared_902_ = v_isSharedCheck_907_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_880_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_907_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_903_, 0, v_a_878_);
lean_ctor_set(v___x_903_, 1, v_a_899_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 0, v___x_903_);
v___x_905_ = v___x_901_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSaveOptions_toJson(uint8_t v_x_911_){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_912_ = ((lean_object*)(l_Lean_Lsp_instToJsonSaveOptions_toJson___closed__0));
v___x_913_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_913_, 0, v_x_911_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_box(0);
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
lean_ctor_set(v___x_917_, 1, v___x_915_);
v___x_918_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1));
v___x_919_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(v___x_917_, v___x_918_);
v___x_920_ = l_Lean_Json_mkObj(v___x_919_);
lean_dec(v___x_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSaveOptions_toJson___boxed(lean_object* v_x_921_){
_start:
{
uint8_t v_x_29__boxed_922_; lean_object* v_res_923_; 
v_x_29__boxed_922_ = lean_unbox(v_x_921_);
v_res_923_ = l_Lean_Lsp_instToJsonSaveOptions_toJson(v_x_29__boxed_922_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(lean_object* v_j_926_, lean_object* v_k_927_){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = l_Lean_Json_getObjValD(v_j_926_, v_k_927_);
v___x_929_ = l_Lean_Json_getBool_x3f(v___x_928_);
lean_dec(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0___boxed(lean_object* v_j_930_, lean_object* v_k_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(v_j_930_, v_k_931_);
lean_dec_ref(v_k_931_);
return v_res_932_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_938_ = 1;
v___x_939_ = ((lean_object*)(l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__1));
v___x_940_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_939_, v___x_938_);
return v___x_940_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_941_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_942_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__2);
v___x_943_ = lean_string_append(v___x_942_, v___x_941_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__5(void){
_start:
{
uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = 1;
v___x_947_ = ((lean_object*)(l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__4));
v___x_948_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_947_, v___x_946_);
return v___x_948_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__6(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_949_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__5, &l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__5);
v___x_950_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__3);
v___x_951_ = lean_string_append(v___x_950_, v___x_949_);
return v___x_951_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_952_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_953_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__6);
v___x_954_ = lean_string_append(v___x_953_, v___x_952_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonSaveOptions_fromJson(lean_object* v_json_955_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = ((lean_object*)(l_Lean_Lsp_instToJsonSaveOptions_toJson___closed__0));
v___x_957_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(v_json_955_, v___x_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_967_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_967_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_967_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_967_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_962_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonSaveOptions_fromJson___closed__7);
v___x_963_ = lean_string_append(v___x_962_, v_a_958_);
lean_dec(v_a_958_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_963_);
v___x_965_ = v___x_960_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
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
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
v_a_968_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_957_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_957_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
lean_ctor_set_tag(v___x_970_, 0);
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
v_a_976_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_957_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_957_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDidCloseTextDocumentParams_toJson(lean_object* v_x_986_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_987_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
v___x_988_ = l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(v_x_986_);
v___x_989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_box(0);
v___x_991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v___x_990_);
v___x_993_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1));
v___x_994_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(v___x_992_, v___x_993_);
v___x_995_ = l_Lean_Json_mkObj(v___x_994_);
lean_dec(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = 1;
v___x_1004_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__1));
v___x_1005_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1004_, v___x_1003_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_1007_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__2);
v___x_1008_ = lean_string_append(v___x_1007_, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__8);
v___x_1010_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__3);
v___x_1011_ = lean_string_append(v___x_1010_, v___x_1009_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_1013_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__4);
v___x_1014_ = lean_string_append(v___x_1013_, v___x_1012_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson(lean_object* v_json_1015_){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__0));
v___x_1017_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDidSaveTextDocumentParams_fromJson_spec__0(v_json_1015_, v___x_1016_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1027_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1020_ = v___x_1017_;
v_isShared_1021_ = v_isSharedCheck_1027_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1017_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1027_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
v___x_1022_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonDidCloseTextDocumentParams_fromJson___closed__5);
v___x_1023_ = lean_string_append(v___x_1022_, v_a_1018_);
lean_dec(v_a_1018_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1023_);
v___x_1025_ = v___x_1020_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
else
{
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
v_a_1028_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1017_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1017_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 0);
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
v_a_1036_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1017_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1017_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson_spec__0(lean_object* v_k_1046_, lean_object* v_x_1047_){
_start:
{
if (lean_obj_tag(v_x_1047_) == 0)
{
lean_object* v___x_1048_; 
lean_dec_ref(v_k_1046_);
v___x_1048_ = lean_box(0);
return v___x_1048_;
}
else
{
lean_object* v_val_1049_; uint8_t v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_val_1049_ = lean_ctor_get(v_x_1047_, 0);
v___x_1050_ = lean_unbox(v_val_1049_);
v___x_1051_ = l_Lean_Lsp_instToJsonSaveOptions_toJson(v___x_1050_);
v___x_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1052_, 0, v_k_1046_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_box(0);
v___x_1054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson_spec__0___boxed(lean_object* v_k_1055_, lean_object* v_x_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson_spec__0(v_k_1055_, v_x_1056_);
lean_dec(v_x_1056_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson(lean_object* v_x_1063_){
_start:
{
uint8_t v_openClose_1064_; uint8_t v_change_1065_; uint8_t v_willSave_1066_; uint8_t v_willSaveWaitUntil_1067_; lean_object* v_save_x3f_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___y_1076_; 
v_openClose_1064_ = lean_ctor_get_uint8(v_x_1063_, sizeof(void*)*1);
v_change_1065_ = lean_ctor_get_uint8(v_x_1063_, sizeof(void*)*1 + 1);
v_willSave_1066_ = lean_ctor_get_uint8(v_x_1063_, sizeof(void*)*1 + 2);
v_willSaveWaitUntil_1067_ = lean_ctor_get_uint8(v_x_1063_, sizeof(void*)*1 + 3);
v_save_x3f_1068_ = lean_ctor_get(v_x_1063_, 0);
v___x_1069_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__0));
v___x_1070_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1070_, 0, v_openClose_1064_);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_box(0);
v___x_1073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__1));
switch(v_change_1065_)
{
case 0:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__1);
v___y_1076_ = v___x_1097_;
goto v___jp_1075_;
}
case 1:
{
lean_object* v___x_1098_; 
v___x_1098_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__3);
v___y_1076_ = v___x_1098_;
goto v___jp_1075_;
}
default: 
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_obj_once(&l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5, &l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5_once, _init_l_Lean_Lsp_instToJsonTextDocumentSyncKind___lam__0___closed__5);
v___y_1076_ = v___x_1099_;
goto v___jp_1075_;
}
}
v___jp_1075_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
lean_inc(v___y_1076_);
v___x_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1074_);
lean_ctor_set(v___x_1077_, 1, v___y_1076_);
v___x_1078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1072_);
v___x_1079_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__2));
v___x_1080_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1080_, 0, v_willSave_1066_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v___x_1072_);
v___x_1083_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__3));
v___x_1084_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1084_, 0, v_willSaveWaitUntil_1067_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v___x_1072_);
v___x_1087_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__4));
v___x_1088_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson_spec__0(v___x_1087_, v_save_x3f_1068_);
v___x_1089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v___x_1072_);
v___x_1090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1086_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1082_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1078_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1073_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = ((lean_object*)(l_Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson___closed__1));
v___x_1095_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonDidOpenTextDocumentParams_toJson_spec__0(v___x_1093_, v___x_1094_);
v___x_1096_ = l_Lean_Json_mkObj(v___x_1095_);
lean_dec(v___x_1095_);
return v___x_1096_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___boxed(lean_object* v_x_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson(v_x_1100_);
lean_dec_ref(v_x_1100_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0(lean_object* v_x_1106_){
_start:
{
if (lean_obj_tag(v_x_1106_) == 0)
{
lean_object* v___x_1107_; 
v___x_1107_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0___closed__0));
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Lean_Lsp_instFromJsonSaveOptions_fromJson(v_x_1106_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1125_; 
v_a_1117_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1119_ = v___x_1108_;
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1108_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1121_, 0, v_a_1117_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v___x_1121_);
v___x_1123_ = v___x_1119_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0(lean_object* v_j_1126_, lean_object* v_k_1127_){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = l_Lean_Json_getObjValD(v_j_1126_, v_k_1127_);
v___x_1129_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0_spec__0(v___x_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0___boxed(lean_object* v_j_1130_, lean_object* v_k_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0(v_j_1130_, v_k_1131_);
lean_dec_ref(v_k_1131_);
return v_res_1132_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = 1;
v___x_1139_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__1));
v___x_1140_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1139_, v___x_1138_);
return v___x_1140_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__5));
v___x_1142_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__2);
v___x_1143_ = lean_string_append(v___x_1142_, v___x_1141_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = 1;
v___x_1147_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__4));
v___x_1148_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1147_, v___x_1146_);
return v___x_1148_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__5);
v___x_1150_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3);
v___x_1151_ = lean_string_append(v___x_1150_, v___x_1149_);
return v___x_1151_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1152_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_1153_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__6);
v___x_1154_ = lean_string_append(v___x_1153_, v___x_1152_);
return v___x_1154_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = 1;
v___x_1158_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__8));
v___x_1159_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1158_, v___x_1157_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1160_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__9);
v___x_1161_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3);
v___x_1162_ = lean_string_append(v___x_1161_, v___x_1160_);
return v___x_1162_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1163_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_1164_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__10, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__10);
v___x_1165_ = lean_string_append(v___x_1164_, v___x_1163_);
return v___x_1165_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__13(void){
_start:
{
uint8_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = 1;
v___x_1169_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__12));
v___x_1170_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1169_, v___x_1168_);
return v___x_1170_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__14(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__13);
v___x_1172_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3);
v___x_1173_ = lean_string_append(v___x_1172_, v___x_1171_);
return v___x_1173_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__15(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_1175_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__14, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__14);
v___x_1176_ = lean_string_append(v___x_1175_, v___x_1174_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__17(void){
_start:
{
uint8_t v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = 1;
v___x_1180_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__16));
v___x_1181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1180_, v___x_1179_);
return v___x_1181_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__18(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__17);
v___x_1183_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3);
v___x_1184_ = lean_string_append(v___x_1183_, v___x_1182_);
return v___x_1184_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__19(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_1186_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__18, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__18);
v___x_1187_ = lean_string_append(v___x_1186_, v___x_1185_);
return v___x_1187_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__22(void){
_start:
{
uint8_t v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1191_ = 1;
v___x_1192_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__21));
v___x_1193_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1192_, v___x_1191_);
return v___x_1193_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__23(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1194_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__22, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__22_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__22);
v___x_1195_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__3);
v___x_1196_ = lean_string_append(v___x_1195_, v___x_1194_);
return v___x_1196_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__24(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDidOpenTextDocumentParams_fromJson___closed__10));
v___x_1198_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__23, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__23_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__23);
v___x_1199_ = lean_string_append(v___x_1198_, v___x_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson(lean_object* v_json_1200_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__0));
lean_inc(v_json_1200_);
v___x_1202_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(v_json_1200_, v___x_1201_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1212_; 
lean_dec(v_json_1200_);
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1212_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1212_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1207_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__7);
v___x_1208_ = lean_string_append(v___x_1207_, v_a_1203_);
lean_dec(v_a_1203_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1208_);
v___x_1210_ = v___x_1205_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
else
{
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
lean_dec(v_json_1200_);
v_a_1213_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1202_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1202_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set_tag(v___x_1215_, 0);
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v_a_1221_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1221_);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1222_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__1));
lean_inc(v_json_1200_);
v___x_1223_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentChangeRegistrationOptions_fromJson_spec__1(v_json_1200_, v___x_1222_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1233_; 
lean_dec(v_a_1221_);
lean_dec(v_json_1200_);
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1226_ = v___x_1223_;
v_isShared_1227_ = v_isSharedCheck_1233_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1223_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1233_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1231_; 
v___x_1228_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__11, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__11);
v___x_1229_ = lean_string_append(v___x_1228_, v_a_1224_);
lean_dec(v_a_1224_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 0, v___x_1229_);
v___x_1231_ = v___x_1226_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
else
{
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec(v_a_1221_);
lean_dec(v_json_1200_);
v_a_1234_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1223_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1223_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set_tag(v___x_1236_, 0);
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_a_1242_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1223_, 1);
v___x_1243_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__2));
lean_inc(v_json_1200_);
v___x_1244_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(v_json_1200_, v___x_1243_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_a_1242_);
lean_dec(v_a_1221_);
lean_dec(v_json_1200_);
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1247_ = v___x_1244_;
v_isShared_1248_ = v_isSharedCheck_1254_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1254_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1252_; 
v___x_1249_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__15, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__15);
v___x_1250_ = lean_string_append(v___x_1249_, v_a_1245_);
lean_dec(v_a_1245_);
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___x_1250_);
v___x_1252_ = v___x_1247_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
else
{
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
lean_dec(v_a_1242_);
lean_dec(v_a_1221_);
lean_dec(v_json_1200_);
v_a_1255_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1244_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1244_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set_tag(v___x_1257_, 0);
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v_a_1263_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1263_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1264_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__3));
lean_inc(v_json_1200_);
v___x_1265_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSaveOptions_fromJson_spec__0(v_json_1200_, v___x_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1275_; 
lean_dec(v_a_1263_);
lean_dec(v_a_1242_);
lean_dec(v_a_1221_);
lean_dec(v_json_1200_);
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1275_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1275_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1273_; 
v___x_1270_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__19, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__19);
v___x_1271_ = lean_string_append(v___x_1270_, v_a_1266_);
lean_dec(v_a_1266_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1271_);
v___x_1273_ = v___x_1268_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec(v_a_1263_);
lean_dec(v_a_1242_);
lean_dec(v_a_1221_);
lean_dec(v_json_1200_);
v_a_1276_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1265_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1265_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set_tag(v___x_1278_, 0);
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_a_1284_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1265_, 1);
v___x_1285_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson___closed__4));
v___x_1286_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson_spec__0(v_json_1200_, v___x_1285_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1296_; 
lean_dec(v_a_1284_);
lean_dec(v_a_1263_);
lean_dec(v_a_1242_);
lean_dec(v_a_1221_);
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1289_ = v___x_1286_;
v_isShared_1290_ = v_isSharedCheck_1296_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1286_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1296_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1291_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__24, &l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__24_once, _init_l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson___closed__24);
v___x_1292_ = lean_string_append(v___x_1291_, v_a_1287_);
lean_dec(v_a_1287_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v___x_1292_);
v___x_1294_ = v___x_1289_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
else
{
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec(v_a_1284_);
lean_dec(v_a_1263_);
lean_dec(v_a_1242_);
lean_dec(v_a_1221_);
v_a_1297_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1286_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1286_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set_tag(v___x_1299_, 0);
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
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1317_; 
v_a_1305_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1307_ = v___x_1286_;
v_isShared_1308_ = v_isSharedCheck_1317_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1286_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1317_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; uint8_t v___x_1310_; uint8_t v___x_1311_; uint8_t v___x_1312_; uint8_t v___x_1313_; lean_object* v___x_1315_; 
v___x_1309_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1309_, 0, v_a_1305_);
v___x_1310_ = lean_unbox(v_a_1221_);
lean_dec(v_a_1221_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*1, v___x_1310_);
v___x_1311_ = lean_unbox(v_a_1242_);
lean_dec(v_a_1242_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*1 + 1, v___x_1311_);
v___x_1312_ = lean_unbox(v_a_1263_);
lean_dec(v_a_1263_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*1 + 2, v___x_1312_);
v___x_1313_ = lean_unbox(v_a_1284_);
lean_dec(v_a_1284_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*1 + 3, v___x_1313_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1309_);
v___x_1315_ = v___x_1307_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1309_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
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
lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_TextSync(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_TextSync(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_TextSync(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_TextSync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_TextSync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_TextSync(builtin);
}
#ifdef __cplusplus
}
#endif

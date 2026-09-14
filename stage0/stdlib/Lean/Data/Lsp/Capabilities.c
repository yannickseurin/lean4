// Lean compiler output
// Module: Lean.Data.Lsp.Capabilities
// Imports: public import Lean.Data.JsonRpc public import Lean.Data.Lsp.LanguageFeatures public import Lean.Data.Lsp.CodeActions public import Lean.Data.Lsp.Extra
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
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Lsp_instToJsonModuleHierarchyOptions_toJson___redArg();
lean_object* l_Lean_Lsp_instToJsonRpcOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCompletionOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRenameOptions_toJson(uint8_t);
lean_object* l_Lean_Lsp_instToJsonSemanticTokensOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCodeActionOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonInlayHintOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonSignatureHelpOptions_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentColorOptions_toJson(uint8_t);
lean_object* l_Lean_Lsp_instFromJsonModuleHierarchyOptions_fromJson___redArg();
lean_object* l_Lean_Lsp_instFromJsonRpcOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonInlayHintOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCodeActionClientCapabilities_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonInlayHintClientCapabilities_fromJson(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson(uint8_t);
lean_object* l_Lean_Lsp_instFromJsonCompletionOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCodeActionOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRenameOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCodeActionClientCapabilities_toJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDocumentColorOptions_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonInlayHintClientCapabilities_toJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSignatureHelpOptions_fromJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "insertReplaceSupport"};
static const lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__0_value;
static const lean_array_object l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonCompletionItemCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionItemCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionItemCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "CompletionItemCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(168, 162, 232, 103, 213, 167, 93, 242)}};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__6;
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "insertReplaceSupport\?"};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__7_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__7_value),LEAN_SCALAR_PTR_LITERAL(124, 17, 86, 160, 119, 199, 142, 57)}};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__10;
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__12;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonCompletionItemCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionClientCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "completionItem"};
static const lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonCompletionClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonCompletionClientCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "CompletionClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 114, 84, 111, 206, 242, 23, 210)}};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "completionItem\?"};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(148, 88, 72, 80, 247, 45, 226, 68)}};
static const lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonCompletionClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonCompletionClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "completion"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "codeAction"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inlayHint"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentClientCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "TextDocumentClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 8, 128, 198, 36, 63, 158, 219)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "completion\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 102, 236, 80, 129, 50, 133, 33)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "codeAction\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(32, 9, 147, 242, 55, 207, 156, 149)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "inlayHint\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(64, 110, 171, 197, 31, 169, 250, 121)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "support"};
static const lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonShowDocumentClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonShowDocumentClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonShowDocumentClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ShowDocumentClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 227, 102, 228, 63, 67, 171, 158)}};
static const lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 49, 93, 70, 185, 187, 252, 212)}};
static const lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWindowClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWindowClientCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "showDocument"};
static const lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWindowClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWindowClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonWindowClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "WindowClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 16, 77, 211, 20, 177, 36, 236)}};
static const lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "showDocument\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(100, 183, 142, 163, 171, 83, 242, 42)}};
static const lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWindowClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonWindowClientCapabilities___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "groupsOnLabel"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonChangeAnnotationSupport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotationSupport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotationSupport___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ChangeAnnotationSupport"};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 205, 129, 68, 169, 88, 116, 77)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "groupsOnLabel\?"};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(82, 95, 251, 98, 216, 224, 97, 227)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonChangeAnnotationSupport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotationSupport___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "documentChanges"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "changeAnnotationSupport"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "resourceOperations"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "WorkspaceEditClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 114, 2, 101, 88, 119, 192, 111)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "documentChanges\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 237, 212, 122, 169, 183, 78, 106)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "changeAnnotationSupport\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(102, 156, 73, 199, 112, 229, 110, 9)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "resourceOperations\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(130, 35, 108, 92, 58, 215, 10, 58)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "applyEdit"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "workspaceEdit"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkspaceClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkspaceClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceClientCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "WorkspaceClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 74, 183, 61, 37, 225, 182, 245)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "applyEdit\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 129, 200, 120, 123, 107, 28, 164)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "workspaceEdit\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(9, 88, 0, 64, 220, 57, 86, 230)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__13;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanClientCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "incrementalDiagnosticSupport"};
static const lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "silentDiagnosticSupport"};
static const lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "rpcWireFormat"};
static const lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonLeanClientCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 254, 182, 222, 136, 163, 126, 10)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "incrementalDiagnosticSupport\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(197, 194, 208, 52, 121, 207, 90, 171)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "silentDiagnosticSupport\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(109, 58, 227, 208, 126, 204, 178, 31)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "rpcWireFormat\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(102, 166, 72, 226, 0, 98, 21, 166)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanClientCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "textDocument"};
static const lean_object* l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "window"};
static const lean_object* l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "workspace"};
static const lean_object* l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonClientCapabilities_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonClientCapabilities_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonClientCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonClientCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ClientCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 225, 118, 144, 36, 222, 122, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "textDocument\?"};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(66, 233, 112, 24, 125, 205, 254, 24)}};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "window\?"};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(95, 45, 82, 31, 231, 205, 122, 91)}};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "workspace\?"};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(3, 114, 21, 18, 79, 3, 28, 205)}};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__18;
static const lean_string_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean\?"};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__19 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__19_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__19_value),LEAN_SCALAR_PTR_LITERAL(113, 97, 121, 84, 79, 57, 27, 198)}};
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__20 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__20_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__21;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__22;
static lean_once_cell_t l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__23;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonClientCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonClientCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonClientCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonClientCapabilities___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_ClientCapabilities_incrementalDiagnosticSupport(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ClientCapabilities_incrementalDiagnosticSupport___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_ClientCapabilities_silentDiagnosticSupport(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ClientCapabilities_silentDiagnosticSupport___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_ClientCapabilities_rpcWireFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ClientCapabilities_rpcWireFormat___boxed(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "moduleHierarchyProvider"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanServerCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(184, 251, 61, 158, 232, 172, 150, 12)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "moduleHierarchyProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(90, 222, 123, 123, 145, 81, 54, 103)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rpcProvider"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__10_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rpcProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__11_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__11_value),LEAN_SCALAR_PTR_LITERAL(236, 165, 216, 88, 94, 154, 224, 77)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanServerCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanServerCapabilities___closed__0_value;
static lean_once_cell_t l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanServerCapabilities_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanServerCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanServerCapabilities_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanServerCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanServerCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanServerCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonLeanServerCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__8(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "textDocumentSync"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "completionProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "hoverProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "documentHighlightProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "documentSymbolProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__4_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "definitionProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__5_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "declarationProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__6_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "typeDefinitionProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__7_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "referencesProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__8_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "callHierarchyProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__9_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "renameProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__10_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "workspaceSymbolProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__11_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "foldingRangeProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__12_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "semanticTokensProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__13_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "codeActionProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__14_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "inlayHintProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__15_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "signatureHelpProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__16 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__16_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "colorProvider"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__17 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__17_value;
static const lean_string_object l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "experimental"};
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__18 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonServerCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonServerCapabilities_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonServerCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonServerCapabilities = (const lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7_spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ServerCapabilities"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 191, 235, 206, 233, 176, 101, 87)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "textDocumentSync\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(241, 190, 21, 208, 74, 247, 24, 209)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "completionProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(76, 106, 184, 243, 136, 68, 189, 54)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__13;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 116, 162, 118, 12, 180, 32, 251)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__17;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(227, 162, 97, 82, 134, 176, 214, 16)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__18 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__18_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__19;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__20;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__21;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 176, 178, 113, 20, 18, 128, 223)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__22 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__22_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__23;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__24;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__25;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(38, 38, 131, 11, 63, 211, 60, 55)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__26 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__26_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__27;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__28;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__29;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(82, 237, 5, 103, 95, 207, 170, 187)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__30 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__30_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__31;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__32;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__33;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__7_value),LEAN_SCALAR_PTR_LITERAL(157, 141, 45, 168, 21, 140, 9, 158)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__34 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__34_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__35;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__36;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__37;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__8_value),LEAN_SCALAR_PTR_LITERAL(90, 96, 212, 155, 169, 220, 22, 175)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__38 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__38_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__39;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__40;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__41;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(252, 184, 155, 207, 133, 165, 237, 217)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__42 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__42_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__43;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__44;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__45;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "renameProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__46 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__46_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__46_value),LEAN_SCALAR_PTR_LITERAL(163, 183, 148, 169, 44, 156, 33, 113)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__47 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__47_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__48;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__49;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__50;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__11_value),LEAN_SCALAR_PTR_LITERAL(141, 55, 171, 62, 182, 165, 37, 21)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__51 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__51_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__52;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__53;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__54;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(140, 106, 30, 254, 164, 67, 13, 4)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__55 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__55_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__56;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__57;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__58;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "semanticTokensProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__59 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__59_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__59_value),LEAN_SCALAR_PTR_LITERAL(111, 91, 196, 13, 189, 147, 87, 200)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__60 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__60_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__61;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__62;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__63;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "codeActionProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__64 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__64_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__64_value),LEAN_SCALAR_PTR_LITERAL(58, 117, 200, 140, 213, 200, 118, 98)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__65 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__65_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__66;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__67;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__68;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "inlayHintProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__69 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__69_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__69_value),LEAN_SCALAR_PTR_LITERAL(157, 78, 18, 190, 89, 32, 129, 179)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__70 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__70_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__71;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__72;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__73;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "signatureHelpProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__74 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__74_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__74_value),LEAN_SCALAR_PTR_LITERAL(1, 207, 74, 244, 176, 203, 217, 6)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__75 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__75_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__76;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__77;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__78;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "colorProvider\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__79 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__79_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__79_value),LEAN_SCALAR_PTR_LITERAL(118, 33, 223, 81, 109, 180, 161, 194)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__80 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__80_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__81;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__82;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__83;
static const lean_string_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "experimental\?"};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__84 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__84_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__84_value),LEAN_SCALAR_PTR_LITERAL(97, 31, 210, 10, 133, 196, 228, 90)}};
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__85 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__85_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__86;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__87;
static lean_once_cell_t l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__88;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonServerCapabilities___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonServerCapabilities_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonServerCapabilities = (const lean_object*)&l_Lean_Lsp_instFromJsonServerCapabilities___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(lean_object* v_k_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; 
lean_dec_ref(v_k_1_);
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
lean_object* v_val_4_; lean_object* v___x_5_; uint8_t v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_val_4_ = lean_ctor_get(v_x_2_, 0);
v___x_5_ = lean_alloc_ctor(1, 0, 1);
v___x_6_ = lean_unbox(v_val_4_);
lean_ctor_set_uint8(v___x_5_, 0, v___x_6_);
v___x_7_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7_, 0, v_k_1_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
v___x_8_ = lean_box(0);
v___x_9_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_9_, 0, v___x_7_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0___boxed(lean_object* v_k_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v_k_10_, v_x_11_);
lean_dec(v_x_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
if (lean_obj_tag(v_a_13_) == 0)
{
lean_object* v___x_15_; 
v___x_15_ = lean_array_to_list(v_a_14_);
return v___x_15_;
}
else
{
lean_object* v_head_16_; lean_object* v_tail_17_; lean_object* v___x_18_; 
v_head_16_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_head_16_);
v_tail_17_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_tail_17_);
lean_dec_ref_known(v_a_13_, 2);
v___x_18_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_14_, v_head_16_);
v_a_13_ = v_tail_17_;
v_a_14_ = v___x_18_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson(lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_24_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__0));
v___x_25_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v___x_24_, v_x_23_);
v___x_26_ = lean_box(0);
v___x_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_25_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
v___x_28_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_29_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_27_, v___x_28_);
v___x_30_ = l_Lean_Json_mkObj(v___x_29_);
lean_dec(v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___boxed(lean_object* v_x_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson(v_x_31_);
lean_dec(v_x_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_38_;
}
else
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Json_getBool_x3f(v_x_37_);
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
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_56_; 
v_a_48_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_56_ == 0)
{
v___x_50_ = v___x_39_;
v_isShared_51_ = v_isSharedCheck_56_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_39_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_56_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_52_; lean_object* v___x_54_; 
v___x_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_52_, 0, v_a_48_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 0, v___x_52_);
v___x_54_ = v___x_50_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___boxed(lean_object* v_x_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0(v_x_57_);
lean_dec(v_x_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(lean_object* v_j_59_, lean_object* v_k_60_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = l_Lean_Json_getObjValD(v_j_59_, v_k_60_);
v___x_62_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0(v___x_61_);
lean_dec(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0___boxed(lean_object* v_j_63_, lean_object* v_k_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_j_63_, v_k_64_);
lean_dec_ref(v_k_64_);
return v_res_65_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__4(void){
_start:
{
uint8_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = 1;
v___x_74_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__3));
v___x_75_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__6(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_78_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__4, &l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__4);
v___x_79_ = lean_string_append(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__9(void){
_start:
{
uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = 1;
v___x_84_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__8));
v___x_85_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_84_, v___x_83_);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__10(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__9, &l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__9);
v___x_87_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__6);
v___x_88_ = lean_string_append(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_91_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__10, &l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__10);
v___x_92_ = lean_string_append(v___x_91_, v___x_90_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson(lean_object* v_json_93_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__0));
v___x_95_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_json_93_, v___x_94_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_105_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_105_ == 0)
{
v___x_98_ = v___x_95_;
v_isShared_99_ = v_isSharedCheck_105_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_105_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_100_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__12);
v___x_101_ = lean_string_append(v___x_100_, v_a_96_);
lean_dec(v_a_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 0, v___x_101_);
v___x_103_ = v___x_98_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
else
{
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_95_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_95_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
lean_ctor_set_tag(v___x_108_, 0);
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v_a_114_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_95_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_95_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionClientCapabilities_toJson_spec__0(lean_object* v_k_124_, lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
lean_object* v___x_126_; 
lean_dec_ref(v_k_124_);
v___x_126_ = lean_box(0);
return v___x_126_;
}
else
{
lean_object* v_val_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_val_127_ = lean_ctor_get(v_x_125_, 0);
v___x_128_ = l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson(v_val_127_);
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v_k_124_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_box(0);
v___x_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionClientCapabilities_toJson_spec__0___boxed(lean_object* v_k_132_, lean_object* v_x_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionClientCapabilities_toJson_spec__0(v_k_132_, v_x_133_);
lean_dec(v_x_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson(lean_object* v_x_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_137_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___closed__0));
v___x_138_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionClientCapabilities_toJson_spec__0(v___x_137_, v_x_136_);
v___x_139_ = lean_box(0);
v___x_140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_142_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_140_, v___x_141_);
v___x_143_ = l_Lean_Json_mkObj(v___x_142_);
lean_dec(v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___boxed(lean_object* v_x_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson(v_x_144_);
lean_dec(v_x_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
lean_object* v___x_151_; 
v___x_151_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_151_;
}
else
{
lean_object* v___x_152_; 
v___x_152_ = l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson(v_x_150_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
v_a_153_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_152_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_152_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
else
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_a_161_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v___x_152_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_152_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_165_, 0, v_a_161_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0(lean_object* v_j_170_, lean_object* v_k_171_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = l_Lean_Json_getObjValD(v_j_170_, v_k_171_);
v___x_173_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_174_, lean_object* v_k_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0(v_j_174_, v_k_175_);
lean_dec_ref(v_k_175_);
return v_res_176_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = 1;
v___x_183_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__1));
v___x_184_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_186_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__2);
v___x_187_ = lean_string_append(v___x_186_, v___x_185_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = 1;
v___x_192_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__5));
v___x_193_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_192_, v___x_191_);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__6);
v___x_195_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__3);
v___x_196_ = lean_string_append(v___x_195_, v___x_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_198_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__7);
v___x_199_ = lean_string_append(v___x_198_, v___x_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson(lean_object* v_json_200_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson___closed__0));
v___x_202_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0(v_json_200_, v___x_201_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_212_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_212_ == 0)
{
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_212_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_212_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_207_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson___closed__8);
v___x_208_ = lean_string_append(v___x_207_, v_a_203_);
lean_dec(v_a_203_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_208_);
v___x_210_ = v___x_205_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
else
{
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_202_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_202_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
lean_ctor_set_tag(v___x_215_, 0);
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
v_a_221_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_202_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_202_);
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
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__0(lean_object* v_k_231_, lean_object* v_x_232_){
_start:
{
if (lean_obj_tag(v_x_232_) == 0)
{
lean_object* v___x_233_; 
lean_dec_ref(v_k_231_);
v___x_233_ = lean_box(0);
return v___x_233_;
}
else
{
lean_object* v_val_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_val_234_ = lean_ctor_get(v_x_232_, 0);
v___x_235_ = l_Lean_Lsp_instToJsonCompletionClientCapabilities_toJson(v_val_234_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v_k_231_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_box(0);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__0___boxed(lean_object* v_k_239_, lean_object* v_x_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__0(v_k_239_, v_x_240_);
lean_dec(v_x_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__1(lean_object* v_k_242_, lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_object* v___x_244_; 
lean_dec_ref(v_k_242_);
v___x_244_ = lean_box(0);
return v___x_244_;
}
else
{
lean_object* v_val_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_val_245_ = lean_ctor_get(v_x_243_, 0);
v___x_246_ = l_Lean_Lsp_instToJsonCodeActionClientCapabilities_toJson(v_val_245_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v_k_242_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_box(0);
v___x_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__1___boxed(lean_object* v_k_250_, lean_object* v_x_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__1(v_k_250_, v_x_251_);
lean_dec(v_x_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__2(lean_object* v_k_253_, lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
lean_object* v___x_255_; 
lean_dec_ref(v_k_253_);
v___x_255_ = lean_box(0);
return v___x_255_;
}
else
{
lean_object* v_val_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_val_256_ = lean_ctor_get(v_x_254_, 0);
lean_inc(v_val_256_);
lean_dec_ref_known(v_x_254_, 1);
v___x_257_ = l_Lean_Lsp_instToJsonInlayHintClientCapabilities_toJson(v_val_256_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v_k_253_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_258_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson(lean_object* v_x_264_){
_start:
{
lean_object* v_completion_x3f_265_; lean_object* v_codeAction_x3f_266_; lean_object* v_inlayHint_x3f_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_completion_x3f_265_ = lean_ctor_get(v_x_264_, 0);
lean_inc(v_completion_x3f_265_);
v_codeAction_x3f_266_ = lean_ctor_get(v_x_264_, 1);
lean_inc(v_codeAction_x3f_266_);
v_inlayHint_x3f_267_ = lean_ctor_get(v_x_264_, 2);
lean_inc(v_inlayHint_x3f_267_);
lean_dec_ref(v_x_264_);
v___x_268_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__0));
v___x_269_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__0(v___x_268_, v_completion_x3f_265_);
lean_dec(v_completion_x3f_265_);
v___x_270_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__1));
v___x_271_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__1(v___x_270_, v_codeAction_x3f_266_);
lean_dec(v_codeAction_x3f_266_);
v___x_272_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__2));
v___x_273_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson_spec__2(v___x_272_, v_inlayHint_x3f_267_);
v___x_274_ = lean_box(0);
v___x_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_271_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_269_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_279_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_277_, v___x_278_);
v___x_280_ = l_Lean_Json_mkObj(v___x_279_);
lean_dec(v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2(lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_285_) == 0)
{
lean_object* v___x_286_; 
v___x_286_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2___closed__0));
return v___x_286_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Lsp_instFromJsonCodeActionClientCapabilities_fromJson(v_x_285_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_304_; 
v_a_296_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_304_ == 0)
{
v___x_298_ = v___x_287_;
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_287_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_300_, 0, v_a_296_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_300_);
v___x_302_ = v___x_298_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1(lean_object* v_j_305_, lean_object* v_k_306_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = l_Lean_Json_getObjValD(v_j_305_, v_k_306_);
v___x_308_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1_spec__2(v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1___boxed(lean_object* v_j_309_, lean_object* v_k_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1(v_j_309_, v_k_310_);
lean_dec_ref(v_k_310_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 0)
{
lean_object* v___x_315_; 
v___x_315_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_315_;
}
else
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson(v_x_314_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_333_; 
v_a_325_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_333_ == 0)
{
v___x_327_ = v___x_316_;
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_316_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_329_, 0, v_a_325_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_329_);
v___x_331_ = v___x_327_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0(lean_object* v_j_334_, lean_object* v_k_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = l_Lean_Json_getObjValD(v_j_334_, v_k_335_);
v___x_337_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0_spec__0(v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_338_, lean_object* v_k_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0(v_j_338_, v_k_339_);
lean_dec_ref(v_k_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4(lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v___x_344_; 
v___x_344_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4___closed__0));
return v___x_344_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_Lsp_instFromJsonInlayHintClientCapabilities_fromJson(v_x_343_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_362_; 
v_a_354_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_362_ == 0)
{
v___x_356_ = v___x_345_;
v_isShared_357_ = v_isSharedCheck_362_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_345_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_362_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v_a_354_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_358_);
v___x_360_ = v___x_356_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2(lean_object* v_j_363_, lean_object* v_k_364_){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = l_Lean_Json_getObjValD(v_j_363_, v_k_364_);
v___x_366_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2_spec__4(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2___boxed(lean_object* v_j_367_, lean_object* v_k_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2(v_j_367_, v_k_368_);
lean_dec_ref(v_k_368_);
return v_res_369_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_375_ = 1;
v___x_376_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__1));
v___x_377_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_376_, v___x_375_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_379_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__2);
v___x_380_ = lean_string_append(v___x_379_, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = 1;
v___x_385_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__5));
v___x_386_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_385_, v___x_384_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__6);
v___x_388_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3);
v___x_389_ = lean_string_append(v___x_388_, v___x_387_);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_391_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__7);
v___x_392_ = lean_string_append(v___x_391_, v___x_390_);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__11(void){
_start:
{
uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = 1;
v___x_397_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__10));
v___x_398_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_397_, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__11, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__11);
v___x_400_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3);
v___x_401_ = lean_string_append(v___x_400_, v___x_399_);
return v___x_401_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__13(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_403_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__12);
v___x_404_ = lean_string_append(v___x_403_, v___x_402_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__16(void){
_start:
{
uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_408_ = 1;
v___x_409_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__15));
v___x_410_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_409_, v___x_408_);
return v___x_410_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__17(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__16, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__16);
v___x_412_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__3);
v___x_413_ = lean_string_append(v___x_412_, v___x_411_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__18(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_415_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__17);
v___x_416_ = lean_string_append(v___x_415_, v___x_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson(lean_object* v_json_417_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__0));
lean_inc(v_json_417_);
v___x_419_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__0(v_json_417_, v___x_418_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_json_417_);
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
v___x_424_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__8);
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
lean_dec(v_json_417_);
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
lean_object* v_a_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_a_438_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_419_, 1);
v___x_439_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__1));
lean_inc(v_json_417_);
v___x_440_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__1(v_json_417_, v___x_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_450_; 
lean_dec(v_a_438_);
lean_dec(v_json_417_);
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_450_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_450_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_450_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_445_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__13);
v___x_446_ = lean_string_append(v___x_445_, v_a_441_);
lean_dec(v_a_441_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_446_);
v___x_448_ = v___x_443_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec(v_a_438_);
lean_dec(v_json_417_);
v_a_451_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_440_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_440_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
lean_ctor_set_tag(v___x_453_, 0);
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
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
lean_object* v_a_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_a_459_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_440_, 1);
v___x_460_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson___closed__2));
v___x_461_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson_spec__2(v_json_417_, v___x_460_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_471_; 
lean_dec(v_a_459_);
lean_dec(v_a_438_);
v_a_462_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_471_ == 0)
{
v___x_464_ = v___x_461_;
v_isShared_465_ = v_isSharedCheck_471_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_461_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_471_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_466_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__18, &l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson___closed__18);
v___x_467_ = lean_string_append(v___x_466_, v_a_462_);
lean_dec(v_a_462_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 0, v___x_467_);
v___x_469_ = v___x_464_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
else
{
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v_a_459_);
lean_dec(v_a_438_);
v_a_472_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_461_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_461_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 0);
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_488_; 
v_a_480_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_488_ == 0)
{
v___x_482_ = v___x_461_;
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_461_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_484_, 0, v_a_438_);
lean_ctor_set(v___x_484_, 1, v_a_459_);
lean_ctor_set(v___x_484_, 2, v_a_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_484_);
v___x_486_ = v___x_482_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson(uint8_t v_x_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_493_ = ((lean_object*)(l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___closed__0));
v___x_494_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_494_, 0, v_x_492_);
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = lean_box(0);
v___x_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
lean_ctor_set(v___x_498_, 1, v___x_496_);
v___x_499_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_500_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_498_, v___x_499_);
v___x_501_ = l_Lean_Json_mkObj(v___x_500_);
lean_dec(v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___boxed(lean_object* v_x_502_){
_start:
{
uint8_t v_x_29__boxed_503_; lean_object* v_res_504_; 
v_x_29__boxed_503_ = lean_unbox(v_x_502_);
v_res_504_ = l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson(v_x_29__boxed_503_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(lean_object* v_j_507_, lean_object* v_k_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = l_Lean_Json_getObjValD(v_j_507_, v_k_508_);
v___x_510_ = l_Lean_Json_getBool_x3f(v___x_509_);
lean_dec(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_511_, lean_object* v_k_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_j_511_, v_k_512_);
lean_dec_ref(v_k_512_);
return v_res_513_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = 1;
v___x_520_ = ((lean_object*)(l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__1));
v___x_521_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_520_, v___x_519_);
return v___x_521_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_522_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_523_ = lean_obj_once(&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__2);
v___x_524_ = lean_string_append(v___x_523_, v___x_522_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__5(void){
_start:
{
uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_527_ = 1;
v___x_528_ = ((lean_object*)(l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__4));
v___x_529_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_528_, v___x_527_);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__6(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = lean_obj_once(&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__5, &l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__5);
v___x_531_ = lean_obj_once(&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__3);
v___x_532_ = lean_string_append(v___x_531_, v___x_530_);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_534_ = lean_obj_once(&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__6);
v___x_535_ = lean_string_append(v___x_534_, v___x_533_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson(lean_object* v_json_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = ((lean_object*)(l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson___closed__0));
v___x_538_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_536_, v___x_537_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_548_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_548_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_548_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_548_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_543_ = lean_obj_once(&l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson___closed__7);
v___x_544_ = lean_string_append(v___x_543_, v_a_539_);
lean_dec(v_a_539_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_544_);
v___x_546_ = v___x_541_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
else
{
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
v_a_549_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_538_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_538_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
lean_ctor_set_tag(v___x_551_, 0);
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
v_a_557_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_538_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_538_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWindowClientCapabilities_toJson_spec__0(lean_object* v_k_567_, lean_object* v_x_568_){
_start:
{
if (lean_obj_tag(v_x_568_) == 0)
{
lean_object* v___x_569_; 
lean_dec_ref(v_k_567_);
v___x_569_ = lean_box(0);
return v___x_569_;
}
else
{
lean_object* v_val_570_; uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_val_570_ = lean_ctor_get(v_x_568_, 0);
v___x_571_ = lean_unbox(v_val_570_);
v___x_572_ = l_Lean_Lsp_instToJsonShowDocumentClientCapabilities_toJson(v___x_571_);
v___x_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_573_, 0, v_k_567_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWindowClientCapabilities_toJson_spec__0___boxed(lean_object* v_k_576_, lean_object* v_x_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWindowClientCapabilities_toJson_spec__0(v_k_576_, v_x_577_);
lean_dec(v_x_577_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson(lean_object* v_x_580_){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_581_ = ((lean_object*)(l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___closed__0));
v___x_582_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWindowClientCapabilities_toJson_spec__0(v___x_581_, v_x_580_);
v___x_583_ = lean_box(0);
v___x_584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_586_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_584_, v___x_585_);
v___x_587_ = l_Lean_Json_mkObj(v___x_586_);
lean_dec(v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___boxed(lean_object* v_x_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson(v_x_588_);
lean_dec(v_x_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_592_){
_start:
{
if (lean_obj_tag(v_x_592_) == 0)
{
lean_object* v___x_593_; 
v___x_593_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_593_;
}
else
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson(v_x_592_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_594_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_594_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_611_; 
v_a_603_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_611_ == 0)
{
v___x_605_ = v___x_594_;
v_isShared_606_ = v_isSharedCheck_611_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_594_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_611_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_607_, 0, v_a_603_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_607_);
v___x_609_ = v___x_605_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0(lean_object* v_j_612_, lean_object* v_k_613_){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = l_Lean_Json_getObjValD(v_j_612_, v_k_613_);
v___x_615_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0_spec__0(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_616_, lean_object* v_k_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0(v_j_616_, v_k_617_);
lean_dec_ref(v_k_617_);
return v_res_618_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = 1;
v___x_625_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__1));
v___x_626_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_625_, v___x_624_);
return v___x_626_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_627_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_628_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__2);
v___x_629_ = lean_string_append(v___x_628_, v___x_627_);
return v___x_629_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = 1;
v___x_634_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__5));
v___x_635_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_634_, v___x_633_);
return v___x_635_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__6);
v___x_637_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__3);
v___x_638_ = lean_string_append(v___x_637_, v___x_636_);
return v___x_638_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_639_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_640_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__7);
v___x_641_ = lean_string_append(v___x_640_, v___x_639_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson(lean_object* v_json_642_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = ((lean_object*)(l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson___closed__0));
v___x_644_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson_spec__0(v_json_642_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_654_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_654_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_654_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_654_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_649_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson___closed__8);
v___x_650_ = lean_string_append(v___x_649_, v_a_645_);
lean_dec(v_a_645_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_650_);
v___x_652_ = v___x_647_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
else
{
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
v_a_655_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_644_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_644_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 0);
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_644_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_644_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson(lean_object* v_x_674_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_675_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___closed__0));
v___x_676_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v___x_675_, v_x_674_);
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_676_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_680_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_678_, v___x_679_);
v___x_681_ = l_Lean_Json_mkObj(v___x_680_);
lean_dec(v___x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___boxed(lean_object* v_x_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson(v_x_682_);
lean_dec(v_x_682_);
return v_res_683_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__2(void){
_start:
{
uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_691_ = 1;
v___x_692_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__1));
v___x_693_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_692_, v___x_691_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__3(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_694_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_695_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__2, &l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__2);
v___x_696_ = lean_string_append(v___x_695_, v___x_694_);
return v___x_696_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__6(void){
_start:
{
uint8_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_700_ = 1;
v___x_701_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__5));
v___x_702_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_701_, v___x_700_);
return v___x_702_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__7(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__6, &l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__6);
v___x_704_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__3);
v___x_705_ = lean_string_append(v___x_704_, v___x_703_);
return v___x_705_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__8(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_706_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_707_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__7, &l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__7);
v___x_708_ = lean_string_append(v___x_707_, v___x_706_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson(lean_object* v_json_709_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson___closed__0));
v___x_711_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_json_709_, v___x_710_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_721_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_721_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_721_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_721_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_716_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__8, &l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson___closed__8);
v___x_717_ = lean_string_append(v___x_716_, v_a_712_);
lean_dec(v_a_712_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_717_);
v___x_719_ = v___x_714_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
else
{
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
v_a_722_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_711_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_711_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
lean_ctor_set_tag(v___x_724_, 0);
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_711_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_711_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__0(lean_object* v_k_740_, lean_object* v_x_741_){
_start:
{
if (lean_obj_tag(v_x_741_) == 0)
{
lean_object* v___x_742_; 
lean_dec_ref(v_k_740_);
v___x_742_ = lean_box(0);
return v___x_742_;
}
else
{
lean_object* v_val_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v_val_743_ = lean_ctor_get(v_x_741_, 0);
v___x_744_ = l_Lean_Lsp_instToJsonChangeAnnotationSupport_toJson(v_val_743_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v_k_740_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_box(0);
v___x_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_745_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__0___boxed(lean_object* v_k_748_, lean_object* v_x_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__0(v_k_748_, v_x_749_);
lean_dec(v_x_749_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1_spec__2(size_t v_sz_751_, size_t v_i_752_, lean_object* v_bs_753_){
_start:
{
uint8_t v___x_754_; 
v___x_754_ = lean_usize_dec_lt(v_i_752_, v_sz_751_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; 
v___x_755_ = l_unsafeCast___redArg(v_bs_753_);
lean_dec_ref(v_bs_753_);
return v___x_755_;
}
else
{
lean_object* v_v_756_; lean_object* v___x_757_; lean_object* v_bs_x27_758_; lean_object* v___x_759_; lean_object* v___x_760_; size_t v___x_761_; size_t v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_v_756_ = lean_array_uget(v_bs_753_, v_i_752_);
v___x_757_ = lean_unsigned_to_nat(0u);
v_bs_x27_758_ = lean_array_uset(v_bs_753_, v_i_752_, v___x_757_);
v___x_759_ = l_unsafeCast___redArg(v_v_756_);
lean_dec(v_v_756_);
v___x_760_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
v___x_761_ = ((size_t)1ULL);
v___x_762_ = lean_usize_add(v_i_752_, v___x_761_);
v___x_763_ = l_unsafeCast___redArg(v___x_760_);
lean_dec_ref_known(v___x_760_, 1);
v___x_764_ = lean_array_uset(v_bs_x27_758_, v_i_752_, v___x_763_);
v_i_752_ = v___x_762_;
v_bs_753_ = v___x_764_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_766_, lean_object* v_i_767_, lean_object* v_bs_768_){
_start:
{
size_t v_sz_boxed_769_; size_t v_i_boxed_770_; lean_object* v_res_771_; 
v_sz_boxed_769_ = lean_unbox_usize(v_sz_766_);
lean_dec(v_sz_766_);
v_i_boxed_770_ = lean_unbox_usize(v_i_767_);
lean_dec(v_i_767_);
v_res_771_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1_spec__2(v_sz_boxed_769_, v_i_boxed_770_, v_bs_768_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1(lean_object* v_a_772_){
_start:
{
size_t v_sz_773_; size_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_sz_773_ = lean_array_size(v_a_772_);
v___x_774_ = ((size_t)0ULL);
v___x_775_ = l_unsafeCast___redArg(v_a_772_);
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1_spec__2(v_sz_773_, v___x_774_, v___x_775_);
v___x_777_ = l_unsafeCast___redArg(v___x_776_);
lean_dec_ref(v___x_776_);
v___x_778_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1___boxed(lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1(v_a_779_);
lean_dec_ref(v_a_779_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1(lean_object* v_k_781_, lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_x_782_) == 0)
{
lean_object* v___x_783_; 
lean_dec_ref(v_k_781_);
v___x_783_ = lean_box(0);
return v___x_783_;
}
else
{
lean_object* v_val_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v_val_784_ = lean_ctor_get(v_x_782_, 0);
v___x_785_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1_spec__1(v_val_784_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v_k_781_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = lean_box(0);
v___x_788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1___boxed(lean_object* v_k_789_, lean_object* v_x_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1(v_k_789_, v_x_790_);
lean_dec(v_x_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson(lean_object* v_x_795_){
_start:
{
lean_object* v_documentChanges_x3f_796_; lean_object* v_changeAnnotationSupport_x3f_797_; lean_object* v_resourceOperations_x3f_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_documentChanges_x3f_796_ = lean_ctor_get(v_x_795_, 0);
v_changeAnnotationSupport_x3f_797_ = lean_ctor_get(v_x_795_, 1);
v_resourceOperations_x3f_798_ = lean_ctor_get(v_x_795_, 2);
v___x_799_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__0));
v___x_800_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v___x_799_, v_documentChanges_x3f_796_);
v___x_801_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__1));
v___x_802_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__0(v___x_801_, v_changeAnnotationSupport_x3f_797_);
v___x_803_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__2));
v___x_804_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson_spec__1(v___x_803_, v_resourceOperations_x3f_798_);
v___x_805_ = lean_box(0);
v___x_806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_802_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_800_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_810_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_808_, v___x_809_);
v___x_811_ = l_Lean_Json_mkObj(v___x_810_);
lean_dec(v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___boxed(lean_object* v_x_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson(v_x_812_);
lean_dec_ref(v_x_812_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3_spec__4(size_t v_sz_816_, size_t v_i_817_, lean_object* v_bs_818_){
_start:
{
uint8_t v___x_819_; 
v___x_819_ = lean_usize_dec_lt(v_i_817_, v_sz_816_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = l_unsafeCast___redArg(v_bs_818_);
lean_dec_ref(v_bs_818_);
v___x_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
return v___x_821_;
}
else
{
lean_object* v_v_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v_v_822_ = lean_array_uget_borrowed(v_bs_818_, v_i_817_);
v___x_823_ = l_unsafeCast___redArg(v_v_822_);
v___x_824_ = l_Lean_Json_getStr_x3f(v___x_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
lean_dec_ref(v_bs_818_);
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_832_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_834_; lean_object* v_bs_x27_835_; size_t v___x_836_; size_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v_a_833_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_824_, 1);
v___x_834_ = lean_unsigned_to_nat(0u);
v_bs_x27_835_ = lean_array_uset(v_bs_818_, v_i_817_, v___x_834_);
v___x_836_ = ((size_t)1ULL);
v___x_837_ = lean_usize_add(v_i_817_, v___x_836_);
v___x_838_ = l_unsafeCast___redArg(v_a_833_);
lean_dec(v_a_833_);
v___x_839_ = lean_array_uset(v_bs_x27_835_, v_i_817_, v___x_838_);
v_i_817_ = v___x_837_;
v_bs_818_ = v___x_839_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_841_, lean_object* v_i_842_, lean_object* v_bs_843_){
_start:
{
size_t v_sz_boxed_844_; size_t v_i_boxed_845_; lean_object* v_res_846_; 
v_sz_boxed_844_ = lean_unbox_usize(v_sz_841_);
lean_dec(v_sz_841_);
v_i_boxed_845_ = lean_unbox_usize(v_i_842_);
lean_dec(v_i_842_);
v_res_846_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_844_, v_i_boxed_845_, v_bs_843_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3(lean_object* v_x_849_){
_start:
{
if (lean_obj_tag(v_x_849_) == 4)
{
lean_object* v_elems_850_; size_t v_sz_851_; size_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_elems_850_ = lean_ctor_get(v_x_849_, 0);
lean_inc_ref(v_elems_850_);
lean_dec_ref_known(v_x_849_, 1);
v_sz_851_ = lean_array_size(v_elems_850_);
v___x_852_ = ((size_t)0ULL);
v___x_853_ = l_unsafeCast___redArg(v_elems_850_);
lean_dec_ref(v_elems_850_);
v___x_854_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3_spec__4(v_sz_851_, v___x_852_, v___x_853_);
v___x_855_ = l_unsafeCast___redArg(v___x_854_);
lean_dec_ref(v___x_854_);
return v___x_855_;
}
else
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_856_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__0));
v___x_857_ = lean_unsigned_to_nat(80u);
v___x_858_ = l_Lean_Json_pretty(v_x_849_, v___x_857_);
v___x_859_ = lean_string_append(v___x_856_, v___x_858_);
lean_dec_ref(v___x_858_);
v___x_860_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3___closed__1));
v___x_861_ = lean_string_append(v___x_859_, v___x_860_);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
return v___x_862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2(lean_object* v_x_865_){
_start:
{
if (lean_obj_tag(v_x_865_) == 0)
{
lean_object* v___x_866_; 
v___x_866_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2___closed__0));
return v___x_866_;
}
else
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2_spec__3(v_x_865_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_884_; 
v_a_876_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_884_ == 0)
{
v___x_878_ = v___x_867_;
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_867_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v_a_876_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v___x_880_);
v___x_882_ = v___x_878_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1(lean_object* v_j_885_, lean_object* v_k_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = l_Lean_Json_getObjValD(v_j_885_, v_k_886_);
v___x_888_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1_spec__2(v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1___boxed(lean_object* v_j_889_, lean_object* v_k_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1(v_j_889_, v_k_890_);
lean_dec_ref(v_k_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_892_){
_start:
{
if (lean_obj_tag(v_x_892_) == 0)
{
lean_object* v___x_893_; 
v___x_893_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_893_;
}
else
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Lsp_instFromJsonChangeAnnotationSupport_fromJson(v_x_892_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_911_; 
v_a_903_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_911_ == 0)
{
v___x_905_ = v___x_894_;
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_894_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_907_, 0, v_a_903_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_907_);
v___x_909_ = v___x_905_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0(lean_object* v_j_912_, lean_object* v_k_913_){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = l_Lean_Json_getObjValD(v_j_912_, v_k_913_);
v___x_915_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0_spec__0(v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_916_, lean_object* v_k_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0(v_j_916_, v_k_917_);
lean_dec_ref(v_k_917_);
return v_res_918_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_924_ = 1;
v___x_925_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__1));
v___x_926_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_925_, v___x_924_);
return v___x_926_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_927_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_928_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__2);
v___x_929_ = lean_string_append(v___x_928_, v___x_927_);
return v___x_929_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_933_ = 1;
v___x_934_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__5));
v___x_935_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_934_, v___x_933_);
return v___x_935_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_936_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__6);
v___x_937_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3);
v___x_938_ = lean_string_append(v___x_937_, v___x_936_);
return v___x_938_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_939_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_940_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__7);
v___x_941_ = lean_string_append(v___x_940_, v___x_939_);
return v___x_941_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__11(void){
_start:
{
uint8_t v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_945_ = 1;
v___x_946_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__10));
v___x_947_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_946_, v___x_945_);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__11, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__11);
v___x_949_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3);
v___x_950_ = lean_string_append(v___x_949_, v___x_948_);
return v___x_950_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__13(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_952_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__12);
v___x_953_ = lean_string_append(v___x_952_, v___x_951_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__16(void){
_start:
{
uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = 1;
v___x_958_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__15));
v___x_959_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_958_, v___x_957_);
return v___x_959_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__17(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_960_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__16, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__16);
v___x_961_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__3);
v___x_962_ = lean_string_append(v___x_961_, v___x_960_);
return v___x_962_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__18(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_964_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__17, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__17);
v___x_965_ = lean_string_append(v___x_964_, v___x_963_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson(lean_object* v_json_966_){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__0));
lean_inc(v_json_966_);
v___x_968_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_json_966_, v___x_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_978_; 
lean_dec(v_json_966_);
v_a_969_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_978_ == 0)
{
v___x_971_ = v___x_968_;
v_isShared_972_ = v_isSharedCheck_978_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_968_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_978_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_973_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__8);
v___x_974_ = lean_string_append(v___x_973_, v_a_969_);
lean_dec(v_a_969_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_974_);
v___x_976_ = v___x_971_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
else
{
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_dec(v_json_966_);
v_a_979_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_968_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_968_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 0);
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_a_987_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_987_);
lean_dec_ref_known(v___x_968_, 1);
v___x_988_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__1));
lean_inc(v_json_966_);
v___x_989_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__0(v_json_966_, v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_999_; 
lean_dec(v_a_987_);
lean_dec(v_json_966_);
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_999_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_999_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_999_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_994_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__13);
v___x_995_ = lean_string_append(v___x_994_, v_a_990_);
lean_dec(v_a_990_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_995_);
v___x_997_ = v___x_992_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
else
{
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_a_987_);
lean_dec(v_json_966_);
v_a_1000_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_989_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_989_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set_tag(v___x_1002_, 0);
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_a_1008_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_989_, 1);
v___x_1009_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson___closed__2));
v___x_1010_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson_spec__1(v_json_966_, v___x_1009_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v_a_1008_);
lean_dec(v_a_987_);
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1013_ = v___x_1010_;
v_isShared_1014_ = v_isSharedCheck_1020_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1020_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1015_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__18, &l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson___closed__18);
v___x_1016_ = lean_string_append(v___x_1015_, v_a_1011_);
lean_dec(v_a_1011_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v___x_1016_);
v___x_1018_ = v___x_1013_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
else
{
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v_a_1008_);
lean_dec(v_a_987_);
v_a_1021_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1010_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1010_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set_tag(v___x_1023_, 0);
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1037_; 
v_a_1029_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1031_ = v___x_1010_;
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1010_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1033_, 0, v_a_987_);
lean_ctor_set(v___x_1033_, 1, v_a_1008_);
lean_ctor_set(v___x_1033_, 2, v_a_1029_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1033_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
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
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson_spec__0(lean_object* v_k_1040_, lean_object* v_x_1041_){
_start:
{
if (lean_obj_tag(v_x_1041_) == 0)
{
lean_object* v___x_1042_; 
lean_dec_ref(v_k_1040_);
v___x_1042_ = lean_box(0);
return v___x_1042_;
}
else
{
lean_object* v_val_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_val_1043_ = lean_ctor_get(v_x_1041_, 0);
v___x_1044_ = l_Lean_Lsp_instToJsonWorkspaceEditClientCapabilities_toJson(v_val_1043_);
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v_k_1040_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson_spec__0___boxed(lean_object* v_k_1048_, lean_object* v_x_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson_spec__0(v_k_1048_, v_x_1049_);
lean_dec(v_x_1049_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson(lean_object* v_x_1053_){
_start:
{
lean_object* v_applyEdit_x3f_1054_; lean_object* v_workspaceEdit_x3f_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1071_; 
v_applyEdit_x3f_1054_ = lean_ctor_get(v_x_1053_, 0);
v_workspaceEdit_x3f_1055_ = lean_ctor_get(v_x_1053_, 1);
v_isSharedCheck_1071_ = !lean_is_exclusive(v_x_1053_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1057_ = v_x_1053_;
v_isShared_1058_ = v_isSharedCheck_1071_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_workspaceEdit_x3f_1055_);
lean_inc(v_applyEdit_x3f_1054_);
lean_dec(v_x_1053_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1071_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1059_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__0));
v___x_1060_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v___x_1059_, v_applyEdit_x3f_1054_);
lean_dec(v_applyEdit_x3f_1054_);
v___x_1061_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__1));
v___x_1062_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson_spec__0(v___x_1061_, v_workspaceEdit_x3f_1055_);
lean_dec(v_workspaceEdit_x3f_1055_);
v___x_1063_ = lean_box(0);
if (v_isShared_1058_ == 0)
{
lean_ctor_set_tag(v___x_1057_, 1);
lean_ctor_set(v___x_1057_, 1, v___x_1063_);
lean_ctor_set(v___x_1057_, 0, v___x_1062_);
v___x_1065_ = v___x_1057_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1060_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_1068_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_1066_, v___x_1067_);
v___x_1069_ = l_Lean_Json_mkObj(v___x_1068_);
lean_dec(v___x_1068_);
return v___x_1069_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_1076_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 0)
{
lean_object* v___x_1077_; 
v___x_1077_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lean_Lsp_instFromJsonWorkspaceEditClientCapabilities_fromJson(v_x_1076_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1095_; 
v_a_1087_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1089_ = v___x_1078_;
v_isShared_1090_ = v_isSharedCheck_1095_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1078_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1095_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1091_, 0, v_a_1087_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1091_);
v___x_1093_ = v___x_1089_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0(lean_object* v_j_1096_, lean_object* v_k_1097_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = l_Lean_Json_getObjValD(v_j_1096_, v_k_1097_);
v___x_1099_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0_spec__0(v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_1100_, lean_object* v_k_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0(v_j_1100_, v_k_1101_);
lean_dec_ref(v_k_1101_);
return v_res_1102_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1108_ = 1;
v___x_1109_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__1));
v___x_1110_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1109_, v___x_1108_);
return v___x_1110_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1111_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_1112_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__2);
v___x_1113_ = lean_string_append(v___x_1112_, v___x_1111_);
return v___x_1113_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1117_ = 1;
v___x_1118_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__5));
v___x_1119_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1118_, v___x_1117_);
return v___x_1119_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1120_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__6);
v___x_1121_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3);
v___x_1122_ = lean_string_append(v___x_1121_, v___x_1120_);
return v___x_1122_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1124_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__7);
v___x_1125_ = lean_string_append(v___x_1124_, v___x_1123_);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__11(void){
_start:
{
uint8_t v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = 1;
v___x_1130_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__10));
v___x_1131_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1130_, v___x_1129_);
return v___x_1131_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__11, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__11);
v___x_1133_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__3);
v___x_1134_ = lean_string_append(v___x_1133_, v___x_1132_);
return v___x_1134_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__13(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1136_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__12);
v___x_1137_ = lean_string_append(v___x_1136_, v___x_1135_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson(lean_object* v_json_1138_){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__0));
lean_inc(v_json_1138_);
v___x_1140_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_json_1138_, v___x_1139_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1150_; 
lean_dec(v_json_1138_);
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1143_ = v___x_1140_;
v_isShared_1144_ = v_isSharedCheck_1150_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1140_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1150_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1145_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__8);
v___x_1146_ = lean_string_append(v___x_1145_, v_a_1141_);
lean_dec(v_a_1141_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1146_);
v___x_1148_ = v___x_1143_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1146_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_json_1138_);
v_a_1151_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1140_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1140_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
lean_ctor_set_tag(v___x_1153_, 0);
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_a_1159_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1140_, 1);
v___x_1160_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson___closed__1));
v___x_1161_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson_spec__0(v_json_1138_, v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1159_);
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1171_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1171_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1166_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson___closed__13);
v___x_1167_ = lean_string_append(v___x_1166_, v_a_1162_);
lean_dec(v_a_1162_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1167_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
else
{
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_a_1159_);
v_a_1172_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1161_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1161_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
lean_ctor_set_tag(v___x_1174_, 0);
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1188_; 
v_a_1180_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1182_ = v___x_1161_;
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1161_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v_a_1159_);
lean_ctor_set(v___x_1184_, 1, v_a_1180_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1186_ = v___x_1182_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanClientCapabilities_toJson_spec__0(lean_object* v_k_1191_, lean_object* v_x_1192_){
_start:
{
if (lean_obj_tag(v_x_1192_) == 0)
{
lean_object* v___x_1193_; 
lean_dec_ref(v_k_1191_);
v___x_1193_ = lean_box(0);
return v___x_1193_;
}
else
{
lean_object* v_val_1194_; uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_val_1194_ = lean_ctor_get(v_x_1192_, 0);
v___x_1195_ = lean_unbox(v_val_1194_);
v___x_1196_ = l_Lean_Lsp_instToJsonRpcWireFormat_toJson(v___x_1195_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v_k_1191_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_box(0);
v___x_1199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
return v___x_1199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanClientCapabilities_toJson_spec__0___boxed(lean_object* v_k_1200_, lean_object* v_x_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanClientCapabilities_toJson_spec__0(v_k_1200_, v_x_1201_);
lean_dec(v_x_1201_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson(lean_object* v_x_1206_){
_start:
{
lean_object* v_incrementalDiagnosticSupport_x3f_1207_; lean_object* v_silentDiagnosticSupport_x3f_1208_; lean_object* v_rpcWireFormat_x3f_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_incrementalDiagnosticSupport_x3f_1207_ = lean_ctor_get(v_x_1206_, 0);
v_silentDiagnosticSupport_x3f_1208_ = lean_ctor_get(v_x_1206_, 1);
v_rpcWireFormat_x3f_1209_ = lean_ctor_get(v_x_1206_, 2);
v___x_1210_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__0));
v___x_1211_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v___x_1210_, v_incrementalDiagnosticSupport_x3f_1207_);
v___x_1212_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__1));
v___x_1213_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__0(v___x_1212_, v_silentDiagnosticSupport_x3f_1208_);
v___x_1214_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__2));
v___x_1215_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanClientCapabilities_toJson_spec__0(v___x_1214_, v_rpcWireFormat_x3f_1209_);
v___x_1216_ = lean_box(0);
v___x_1217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1213_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1211_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_1221_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_1219_, v___x_1220_);
v___x_1222_ = l_Lean_Json_mkObj(v___x_1221_);
lean_dec(v___x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___boxed(lean_object* v_x_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson(v_x_1223_);
lean_dec_ref(v_x_1223_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_1229_){
_start:
{
if (lean_obj_tag(v_x_1229_) == 0)
{
lean_object* v___x_1230_; 
v___x_1230_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_1230_;
}
else
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson(v_x_1229_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1248_; 
v_a_1240_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1242_ = v___x_1231_;
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1231_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; lean_object* v___x_1246_; 
v___x_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_a_1240_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1244_);
v___x_1246_ = v___x_1242_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1244_);
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
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0(lean_object* v_j_1249_, lean_object* v_k_1250_){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = l_Lean_Json_getObjValD(v_j_1249_, v_k_1250_);
v___x_1252_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0_spec__0(v___x_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_1253_, lean_object* v_k_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0(v_j_1253_, v_k_1254_);
lean_dec_ref(v_k_1254_);
return v_res_1255_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = 1;
v___x_1262_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__1));
v___x_1263_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1262_, v___x_1261_);
return v___x_1263_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_1265_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__2);
v___x_1266_ = lean_string_append(v___x_1265_, v___x_1264_);
return v___x_1266_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1270_ = 1;
v___x_1271_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__5));
v___x_1272_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1271_, v___x_1270_);
return v___x_1272_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__6);
v___x_1274_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3);
v___x_1275_ = lean_string_append(v___x_1274_, v___x_1273_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1276_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1277_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__7);
v___x_1278_ = lean_string_append(v___x_1277_, v___x_1276_);
return v___x_1278_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__11(void){
_start:
{
uint8_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1282_ = 1;
v___x_1283_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__10));
v___x_1284_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1283_, v___x_1282_);
return v___x_1284_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1285_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__11);
v___x_1286_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3);
v___x_1287_ = lean_string_append(v___x_1286_, v___x_1285_);
return v___x_1287_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__13(void){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1289_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__12);
v___x_1290_ = lean_string_append(v___x_1289_, v___x_1288_);
return v___x_1290_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__16(void){
_start:
{
uint8_t v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1294_ = 1;
v___x_1295_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__15));
v___x_1296_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1295_, v___x_1294_);
return v___x_1296_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1297_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__16);
v___x_1298_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__3);
v___x_1299_ = lean_string_append(v___x_1298_, v___x_1297_);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__18(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1301_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__17);
v___x_1302_ = lean_string_append(v___x_1301_, v___x_1300_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson(lean_object* v_json_1303_){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__0));
lean_inc(v_json_1303_);
v___x_1305_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_json_1303_, v___x_1304_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1315_; 
lean_dec(v_json_1303_);
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1315_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1315_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1310_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__8);
v___x_1311_ = lean_string_append(v___x_1310_, v_a_1306_);
lean_dec(v_a_1306_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v___x_1311_);
v___x_1313_ = v___x_1308_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
else
{
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec(v_json_1303_);
v_a_1316_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1305_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1305_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
lean_ctor_set_tag(v___x_1318_, 0);
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v_a_1324_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1325_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__1));
lean_inc(v_json_1303_);
v___x_1326_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0(v_json_1303_, v___x_1325_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1336_; 
lean_dec(v_a_1324_);
lean_dec(v_json_1303_);
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1336_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1336_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1331_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__13);
v___x_1332_ = lean_string_append(v___x_1331_, v_a_1327_);
lean_dec(v_a_1327_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 0, v___x_1332_);
v___x_1334_ = v___x_1329_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v_a_1324_);
lean_dec(v_json_1303_);
v_a_1337_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1326_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1326_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 0);
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v_a_1345_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1346_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson___closed__2));
v___x_1347_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson_spec__0(v_json_1303_, v___x_1346_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1357_; 
lean_dec(v_a_1345_);
lean_dec(v_a_1324_);
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1357_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1357_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1352_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson___closed__18);
v___x_1353_ = lean_string_append(v___x_1352_, v_a_1348_);
lean_dec(v_a_1348_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1353_);
v___x_1355_ = v___x_1350_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
else
{
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_dec(v_a_1345_);
lean_dec(v_a_1324_);
v_a_1358_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1347_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1347_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
lean_ctor_set_tag(v___x_1360_, 0);
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1374_; 
v_a_1366_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1368_ = v___x_1347_;
v_isShared_1369_ = v_isSharedCheck_1374_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1347_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1374_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1370_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1370_, 0, v_a_1324_);
lean_ctor_set(v___x_1370_, 1, v_a_1345_);
lean_ctor_set(v___x_1370_, 2, v_a_1366_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 0, v___x_1370_);
v___x_1372_ = v___x_1368_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
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
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__0(lean_object* v_k_1377_, lean_object* v_x_1378_){
_start:
{
if (lean_obj_tag(v_x_1378_) == 0)
{
lean_object* v___x_1379_; 
lean_dec_ref(v_k_1377_);
v___x_1379_ = lean_box(0);
return v___x_1379_;
}
else
{
lean_object* v_val_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v_val_1380_ = lean_ctor_get(v_x_1378_, 0);
lean_inc(v_val_1380_);
lean_dec_ref_known(v_x_1378_, 1);
v___x_1381_ = l_Lean_Lsp_instToJsonTextDocumentClientCapabilities_toJson(v_val_1380_);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_k_1377_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_box(0);
v___x_1384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
return v___x_1384_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__1(lean_object* v_k_1385_, lean_object* v_x_1386_){
_start:
{
if (lean_obj_tag(v_x_1386_) == 0)
{
lean_object* v___x_1387_; 
lean_dec_ref(v_k_1385_);
v___x_1387_ = lean_box(0);
return v___x_1387_;
}
else
{
lean_object* v_val_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v_val_1388_ = lean_ctor_get(v_x_1386_, 0);
v___x_1389_ = l_Lean_Lsp_instToJsonWindowClientCapabilities_toJson(v_val_1388_);
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v_k_1385_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v___x_1391_ = lean_box(0);
v___x_1392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1390_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__1___boxed(lean_object* v_k_1393_, lean_object* v_x_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__1(v_k_1393_, v_x_1394_);
lean_dec(v_x_1394_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__2(lean_object* v_k_1396_, lean_object* v_x_1397_){
_start:
{
if (lean_obj_tag(v_x_1397_) == 0)
{
lean_object* v___x_1398_; 
lean_dec_ref(v_k_1396_);
v___x_1398_ = lean_box(0);
return v___x_1398_;
}
else
{
lean_object* v_val_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_val_1399_ = lean_ctor_get(v_x_1397_, 0);
lean_inc(v_val_1399_);
lean_dec_ref_known(v_x_1397_, 1);
v___x_1400_ = l_Lean_Lsp_instToJsonWorkspaceClientCapabilities_toJson(v_val_1399_);
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_k_1396_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = lean_box(0);
v___x_1403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1401_);
lean_ctor_set(v___x_1403_, 1, v___x_1402_);
return v___x_1403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__3(lean_object* v_k_1404_, lean_object* v_x_1405_){
_start:
{
if (lean_obj_tag(v_x_1405_) == 0)
{
lean_object* v___x_1406_; 
lean_dec_ref(v_k_1404_);
v___x_1406_ = lean_box(0);
return v___x_1406_;
}
else
{
lean_object* v_val_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_val_1407_ = lean_ctor_get(v_x_1405_, 0);
v___x_1408_ = l_Lean_Lsp_instToJsonLeanClientCapabilities_toJson(v_val_1407_);
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v_k_1404_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = lean_box(0);
v___x_1411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
return v___x_1411_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__3___boxed(lean_object* v_k_1412_, lean_object* v_x_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__3(v_k_1412_, v_x_1413_);
lean_dec(v_x_1413_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonClientCapabilities_toJson(lean_object* v_x_1419_){
_start:
{
lean_object* v_textDocument_x3f_1420_; lean_object* v_window_x3f_1421_; lean_object* v_workspace_x3f_1422_; lean_object* v_lean_x3f_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v_textDocument_x3f_1420_ = lean_ctor_get(v_x_1419_, 0);
lean_inc(v_textDocument_x3f_1420_);
v_window_x3f_1421_ = lean_ctor_get(v_x_1419_, 1);
lean_inc(v_window_x3f_1421_);
v_workspace_x3f_1422_ = lean_ctor_get(v_x_1419_, 2);
lean_inc(v_workspace_x3f_1422_);
v_lean_x3f_1423_ = lean_ctor_get(v_x_1419_, 3);
lean_inc(v_lean_x3f_1423_);
lean_dec_ref(v_x_1419_);
v___x_1424_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__0));
v___x_1425_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__0(v___x_1424_, v_textDocument_x3f_1420_);
v___x_1426_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__1));
v___x_1427_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__1(v___x_1426_, v_window_x3f_1421_);
lean_dec(v_window_x3f_1421_);
v___x_1428_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__2));
v___x_1429_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__2(v___x_1428_, v_workspace_x3f_1422_);
v___x_1430_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__3));
v___x_1431_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonClientCapabilities_toJson_spec__3(v___x_1430_, v_lean_x3f_1423_);
lean_dec(v_lean_x3f_1423_);
v___x_1432_ = lean_box(0);
v___x_1433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1429_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1427_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
v___x_1436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1425_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_1438_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_1436_, v___x_1437_);
v___x_1439_ = l_Lean_Json_mkObj(v___x_1438_);
lean_dec(v___x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4(lean_object* v_x_1444_){
_start:
{
if (lean_obj_tag(v_x_1444_) == 0)
{
lean_object* v___x_1445_; 
v___x_1445_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4___closed__0));
return v___x_1445_;
}
else
{
lean_object* v___x_1446_; 
v___x_1446_ = l_Lean_Lsp_instFromJsonWorkspaceClientCapabilities_fromJson(v_x_1444_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1463_; 
v_a_1455_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1457_ = v___x_1446_;
v_isShared_1458_ = v_isSharedCheck_1463_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1446_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1463_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1461_; 
v___x_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_a_1455_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1459_);
v___x_1461_ = v___x_1457_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1459_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2(lean_object* v_j_1464_, lean_object* v_k_1465_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = l_Lean_Json_getObjValD(v_j_1464_, v_k_1465_);
v___x_1467_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2_spec__4(v___x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2___boxed(lean_object* v_j_1468_, lean_object* v_k_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2(v_j_1468_, v_k_1469_);
lean_dec_ref(v_k_1469_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6(lean_object* v_x_1473_){
_start:
{
if (lean_obj_tag(v_x_1473_) == 0)
{
lean_object* v___x_1474_; 
v___x_1474_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6___closed__0));
return v___x_1474_;
}
else
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_Lsp_instFromJsonLeanClientCapabilities_fromJson(v_x_1473_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1475_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1475_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
else
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1492_; 
v_a_1484_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1486_ = v___x_1475_;
v_isShared_1487_ = v_isSharedCheck_1492_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1475_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1492_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; lean_object* v___x_1490_; 
v___x_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1488_, 0, v_a_1484_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 0, v___x_1488_);
v___x_1490_ = v___x_1486_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3(lean_object* v_j_1493_, lean_object* v_k_1494_){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = l_Lean_Json_getObjValD(v_j_1493_, v_k_1494_);
v___x_1496_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3_spec__6(v___x_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3___boxed(lean_object* v_j_1497_, lean_object* v_k_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3(v_j_1497_, v_k_1498_);
lean_dec_ref(v_k_1498_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1_spec__2(lean_object* v_x_1500_){
_start:
{
if (lean_obj_tag(v_x_1500_) == 0)
{
lean_object* v___x_1501_; 
v___x_1501_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_1501_;
}
else
{
lean_object* v___x_1502_; 
v___x_1502_ = l_Lean_Lsp_instFromJsonWindowClientCapabilities_fromJson(v_x_1500_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1502_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1519_; 
v_a_1511_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1513_ = v___x_1502_;
v_isShared_1514_ = v_isSharedCheck_1519_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1502_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1519_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1515_, 0, v_a_1511_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1515_);
v___x_1517_ = v___x_1513_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1(lean_object* v_j_1520_, lean_object* v_k_1521_){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = l_Lean_Json_getObjValD(v_j_1520_, v_k_1521_);
v___x_1523_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1_spec__2(v___x_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1___boxed(lean_object* v_j_1524_, lean_object* v_k_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1(v_j_1524_, v_k_1525_);
lean_dec_ref(v_k_1525_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_1529_){
_start:
{
if (lean_obj_tag(v_x_1529_) == 0)
{
lean_object* v___x_1530_; 
v___x_1530_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_1530_;
}
else
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_Lsp_instFromJsonTextDocumentClientCapabilities_fromJson(v_x_1529_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1548_; 
v_a_1540_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1542_ = v___x_1531_;
v_isShared_1543_ = v_isSharedCheck_1548_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1531_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1548_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1544_; lean_object* v___x_1546_; 
v___x_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1540_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1544_);
v___x_1546_ = v___x_1542_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0(lean_object* v_j_1549_, lean_object* v_k_1550_){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = l_Lean_Json_getObjValD(v_j_1549_, v_k_1550_);
v___x_1552_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0_spec__0(v___x_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0___boxed(lean_object* v_j_1553_, lean_object* v_k_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0(v_j_1553_, v_k_1554_);
lean_dec_ref(v_k_1554_);
return v_res_1555_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1561_ = 1;
v___x_1562_ = ((lean_object*)(l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__1));
v___x_1563_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1562_, v___x_1561_);
return v___x_1563_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1564_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_1565_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__2);
v___x_1566_ = lean_string_append(v___x_1565_, v___x_1564_);
return v___x_1566_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1570_ = 1;
v___x_1571_ = ((lean_object*)(l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__5));
v___x_1572_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1571_, v___x_1570_);
return v___x_1572_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1573_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__6);
v___x_1574_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3);
v___x_1575_ = lean_string_append(v___x_1574_, v___x_1573_);
return v___x_1575_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1576_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1577_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__7);
v___x_1578_ = lean_string_append(v___x_1577_, v___x_1576_);
return v___x_1578_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__11(void){
_start:
{
uint8_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1582_ = 1;
v___x_1583_ = ((lean_object*)(l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__10));
v___x_1584_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1583_, v___x_1582_);
return v___x_1584_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1585_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__11, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__11);
v___x_1586_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3);
v___x_1587_ = lean_string_append(v___x_1586_, v___x_1585_);
return v___x_1587_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__13(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1589_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__12);
v___x_1590_ = lean_string_append(v___x_1589_, v___x_1588_);
return v___x_1590_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__16(void){
_start:
{
uint8_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = 1;
v___x_1595_ = ((lean_object*)(l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__15));
v___x_1596_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1595_, v___x_1594_);
return v___x_1596_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1597_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__16, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__16);
v___x_1598_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3);
v___x_1599_ = lean_string_append(v___x_1598_, v___x_1597_);
return v___x_1599_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__18(void){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1601_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__17, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__17);
v___x_1602_ = lean_string_append(v___x_1601_, v___x_1600_);
return v___x_1602_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__21(void){
_start:
{
uint8_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1606_ = 1;
v___x_1607_ = ((lean_object*)(l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__20));
v___x_1608_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1607_, v___x_1606_);
return v___x_1608_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__22(void){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1609_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__21, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__21_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__21);
v___x_1610_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__3);
v___x_1611_ = lean_string_append(v___x_1610_, v___x_1609_);
return v___x_1611_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__23(void){
_start:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1613_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__22, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__22_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__22);
v___x_1614_ = lean_string_append(v___x_1613_, v___x_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonClientCapabilities_fromJson(lean_object* v_json_1615_){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__0));
lean_inc(v_json_1615_);
v___x_1617_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__0(v_json_1615_, v___x_1616_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1627_; 
lean_dec(v_json_1615_);
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1627_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1627_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1622_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__8);
v___x_1623_ = lean_string_append(v___x_1622_, v_a_1618_);
lean_dec(v_a_1618_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 0, v___x_1623_);
v___x_1625_ = v___x_1620_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
else
{
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec(v_json_1615_);
v_a_1628_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1617_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1617_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set_tag(v___x_1630_, 0);
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v_a_1636_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1636_);
lean_dec_ref_known(v___x_1617_, 1);
v___x_1637_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__1));
lean_inc(v_json_1615_);
v___x_1638_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__1(v_json_1615_, v___x_1637_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1648_; 
lean_dec(v_a_1636_);
lean_dec(v_json_1615_);
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1648_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1648_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1646_; 
v___x_1643_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__13);
v___x_1644_ = lean_string_append(v___x_1643_, v_a_1639_);
lean_dec(v_a_1639_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v___x_1644_);
v___x_1646_ = v___x_1641_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
else
{
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec(v_a_1636_);
lean_dec(v_json_1615_);
v_a_1649_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1638_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1638_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
lean_ctor_set_tag(v___x_1651_, 0);
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v_a_1657_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1638_, 1);
v___x_1658_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__2));
lean_inc(v_json_1615_);
v___x_1659_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__2(v_json_1615_, v___x_1658_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_a_1657_);
lean_dec(v_a_1636_);
lean_dec(v_json_1615_);
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1669_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1669_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
v___x_1664_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__18, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__18);
v___x_1665_ = lean_string_append(v___x_1664_, v_a_1660_);
lean_dec(v_a_1660_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 0, v___x_1665_);
v___x_1667_ = v___x_1662_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
else
{
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec(v_a_1657_);
lean_dec(v_a_1636_);
lean_dec(v_json_1615_);
v_a_1670_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1659_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1659_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set_tag(v___x_1672_, 0);
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_a_1678_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1678_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1679_ = ((lean_object*)(l_Lean_Lsp_instToJsonClientCapabilities_toJson___closed__3));
v___x_1680_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientCapabilities_fromJson_spec__3(v_json_1615_, v___x_1679_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1690_; 
lean_dec(v_a_1678_);
lean_dec(v_a_1657_);
lean_dec(v_a_1636_);
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1683_ = v___x_1680_;
v_isShared_1684_ = v_isSharedCheck_1690_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1680_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1690_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1688_; 
v___x_1685_ = lean_obj_once(&l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__23, &l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__23_once, _init_l_Lean_Lsp_instFromJsonClientCapabilities_fromJson___closed__23);
v___x_1686_ = lean_string_append(v___x_1685_, v_a_1681_);
lean_dec(v_a_1681_);
if (v_isShared_1684_ == 0)
{
lean_ctor_set(v___x_1683_, 0, v___x_1686_);
v___x_1688_ = v___x_1683_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v___x_1686_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
else
{
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
lean_dec(v_a_1678_);
lean_dec(v_a_1657_);
lean_dec(v_a_1636_);
v_a_1691_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v___x_1680_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v___x_1680_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
lean_ctor_set_tag(v___x_1693_, 0);
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1707_; 
v_a_1699_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1701_ = v___x_1680_;
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1680_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1703_; lean_object* v___x_1705_; 
v___x_1703_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1703_, 0, v_a_1636_);
lean_ctor_set(v___x_1703_, 1, v_a_1657_);
lean_ctor_set(v___x_1703_, 2, v_a_1678_);
lean_ctor_set(v___x_1703_, 3, v_a_1699_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1703_);
v___x_1705_ = v___x_1701_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
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
LEAN_EXPORT uint8_t l_Lean_Lsp_ClientCapabilities_incrementalDiagnosticSupport(lean_object* v_c_1710_){
_start:
{
lean_object* v_lean_x3f_1711_; 
v_lean_x3f_1711_ = lean_ctor_get(v_c_1710_, 3);
if (lean_obj_tag(v_lean_x3f_1711_) == 1)
{
lean_object* v_val_1712_; lean_object* v_incrementalDiagnosticSupport_x3f_1713_; 
v_val_1712_ = lean_ctor_get(v_lean_x3f_1711_, 0);
v_incrementalDiagnosticSupport_x3f_1713_ = lean_ctor_get(v_val_1712_, 0);
if (lean_obj_tag(v_incrementalDiagnosticSupport_x3f_1713_) == 1)
{
lean_object* v_val_1714_; uint8_t v___x_1715_; 
v_val_1714_ = lean_ctor_get(v_incrementalDiagnosticSupport_x3f_1713_, 0);
v___x_1715_ = lean_unbox(v_val_1714_);
return v___x_1715_;
}
else
{
uint8_t v___x_1716_; 
v___x_1716_ = 0;
return v___x_1716_;
}
}
else
{
uint8_t v___x_1717_; 
v___x_1717_ = 0;
return v___x_1717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ClientCapabilities_incrementalDiagnosticSupport___boxed(lean_object* v_c_1718_){
_start:
{
uint8_t v_res_1719_; lean_object* v_r_1720_; 
v_res_1719_ = l_Lean_Lsp_ClientCapabilities_incrementalDiagnosticSupport(v_c_1718_);
lean_dec_ref(v_c_1718_);
v_r_1720_ = lean_box(v_res_1719_);
return v_r_1720_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ClientCapabilities_silentDiagnosticSupport(lean_object* v_c_1721_){
_start:
{
lean_object* v_lean_x3f_1722_; 
v_lean_x3f_1722_ = lean_ctor_get(v_c_1721_, 3);
if (lean_obj_tag(v_lean_x3f_1722_) == 1)
{
lean_object* v_val_1723_; lean_object* v_silentDiagnosticSupport_x3f_1724_; 
v_val_1723_ = lean_ctor_get(v_lean_x3f_1722_, 0);
v_silentDiagnosticSupport_x3f_1724_ = lean_ctor_get(v_val_1723_, 1);
if (lean_obj_tag(v_silentDiagnosticSupport_x3f_1724_) == 1)
{
lean_object* v_val_1725_; uint8_t v___x_1726_; 
v_val_1725_ = lean_ctor_get(v_silentDiagnosticSupport_x3f_1724_, 0);
v___x_1726_ = lean_unbox(v_val_1725_);
return v___x_1726_;
}
else
{
uint8_t v___x_1727_; 
v___x_1727_ = 0;
return v___x_1727_;
}
}
else
{
uint8_t v___x_1728_; 
v___x_1728_ = 0;
return v___x_1728_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ClientCapabilities_silentDiagnosticSupport___boxed(lean_object* v_c_1729_){
_start:
{
uint8_t v_res_1730_; lean_object* v_r_1731_; 
v_res_1730_ = l_Lean_Lsp_ClientCapabilities_silentDiagnosticSupport(v_c_1729_);
lean_dec_ref(v_c_1729_);
v_r_1731_ = lean_box(v_res_1730_);
return v_r_1731_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ClientCapabilities_rpcWireFormat(lean_object* v_c_1732_){
_start:
{
lean_object* v_lean_x3f_1733_; 
v_lean_x3f_1733_ = lean_ctor_get(v_c_1732_, 3);
if (lean_obj_tag(v_lean_x3f_1733_) == 1)
{
lean_object* v_val_1734_; lean_object* v_rpcWireFormat_x3f_1735_; 
v_val_1734_ = lean_ctor_get(v_lean_x3f_1733_, 0);
v_rpcWireFormat_x3f_1735_ = lean_ctor_get(v_val_1734_, 2);
if (lean_obj_tag(v_rpcWireFormat_x3f_1735_) == 1)
{
lean_object* v_val_1736_; uint8_t v___x_1737_; 
v_val_1736_ = lean_ctor_get(v_rpcWireFormat_x3f_1735_, 0);
v___x_1737_ = lean_unbox(v_val_1736_);
return v___x_1737_;
}
else
{
uint8_t v___x_1738_; 
v___x_1738_ = 0;
return v___x_1738_;
}
}
else
{
uint8_t v___x_1739_; 
v___x_1739_ = 0;
return v___x_1739_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ClientCapabilities_rpcWireFormat___boxed(lean_object* v_c_1740_){
_start:
{
uint8_t v_res_1741_; lean_object* v_r_1742_; 
v_res_1741_ = l_Lean_Lsp_ClientCapabilities_rpcWireFormat(v_c_1740_);
lean_dec_ref(v_c_1740_);
v_r_1742_ = lean_box(v_res_1741_);
return v_r_1742_;
}
}
static lean_object* _init_l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_Lsp_instFromJsonModuleHierarchyOptions_fromJson___redArg();
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_1746_){
_start:
{
if (lean_obj_tag(v_x_1746_) == 0)
{
lean_object* v___x_1747_; 
v___x_1747_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_1747_;
}
else
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_obj_once(&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__1, &l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__1_once, _init_l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___closed__1);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
v___x_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1750_, 0, v_a_1749_);
return v___x_1750_;
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_a_1751_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1751_);
v___x_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1752_, 0, v_a_1751_);
v___x_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
return v___x_1753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0___boxed(lean_object* v_x_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0(v_x_1754_);
lean_dec(v_x_1754_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0(lean_object* v_j_1756_, lean_object* v_k_1757_){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = l_Lean_Json_getObjValD(v_j_1756_, v_k_1757_);
v___x_1759_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0_spec__0(v___x_1758_);
lean_dec(v___x_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0___boxed(lean_object* v_j_1760_, lean_object* v_k_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0(v_j_1760_, v_k_1761_);
lean_dec_ref(v_k_1761_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2(lean_object* v_x_1765_){
_start:
{
if (lean_obj_tag(v_x_1765_) == 0)
{
lean_object* v___x_1766_; 
v___x_1766_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2___closed__0));
return v___x_1766_;
}
else
{
lean_object* v___x_1767_; 
v___x_1767_ = l_Lean_Lsp_instFromJsonRpcOptions_fromJson(v_x_1765_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1767_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1767_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1784_; 
v_a_1776_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1778_ = v___x_1767_;
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1767_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1782_; 
v___x_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1780_, 0, v_a_1776_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1780_);
v___x_1782_ = v___x_1778_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1(lean_object* v_j_1785_, lean_object* v_k_1786_){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = l_Lean_Json_getObjValD(v_j_1785_, v_k_1786_);
v___x_1788_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1_spec__2(v___x_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1___boxed(lean_object* v_j_1789_, lean_object* v_k_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1(v_j_1789_, v_k_1790_);
lean_dec_ref(v_k_1790_);
return v_res_1791_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__3(void){
_start:
{
uint8_t v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = 1;
v___x_1799_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__2));
v___x_1800_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1799_, v___x_1798_);
return v___x_1800_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1801_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_1802_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__3);
v___x_1803_ = lean_string_append(v___x_1802_, v___x_1801_);
return v___x_1803_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__7(void){
_start:
{
uint8_t v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1807_ = 1;
v___x_1808_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__6));
v___x_1809_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1808_, v___x_1807_);
return v___x_1809_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1810_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__7);
v___x_1811_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4);
v___x_1812_ = lean_string_append(v___x_1811_, v___x_1810_);
return v___x_1812_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__9(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1814_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__8);
v___x_1815_ = lean_string_append(v___x_1814_, v___x_1813_);
return v___x_1815_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__13(void){
_start:
{
uint8_t v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1820_ = 1;
v___x_1821_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__12));
v___x_1822_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1821_, v___x_1820_);
return v___x_1822_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__14(void){
_start:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1823_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__13);
v___x_1824_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__4);
v___x_1825_ = lean_string_append(v___x_1824_, v___x_1823_);
return v___x_1825_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__15(void){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1826_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_1827_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__14);
v___x_1828_ = lean_string_append(v___x_1827_, v___x_1826_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson(lean_object* v_json_1829_){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__0));
lean_inc(v_json_1829_);
v___x_1831_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__0(v_json_1829_, v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1841_; 
lean_dec(v_json_1829_);
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1834_ = v___x_1831_;
v_isShared_1835_ = v_isSharedCheck_1841_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1841_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1836_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__9);
v___x_1837_ = lean_string_append(v___x_1836_, v_a_1832_);
lean_dec(v_a_1832_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1837_);
v___x_1839_ = v___x_1834_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1837_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
else
{
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_dec(v_json_1829_);
v_a_1842_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1831_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1831_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set_tag(v___x_1844_, 0);
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v_a_1850_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1831_, 1);
v___x_1851_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__10));
v___x_1852_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson_spec__1(v_json_1829_, v___x_1851_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1862_; 
lean_dec(v_a_1850_);
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1862_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1862_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1857_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__15);
v___x_1858_ = lean_string_append(v___x_1857_, v_a_1853_);
lean_dec(v_a_1853_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1858_);
v___x_1860_ = v___x_1855_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
else
{
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec(v_a_1850_);
v_a_1863_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1852_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1852_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
lean_ctor_set_tag(v___x_1865_, 0);
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1879_; 
v_a_1871_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1873_ = v___x_1852_;
v_isShared_1874_ = v_isSharedCheck_1879_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1852_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1879_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v___x_1877_; 
v___x_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1875_, 0, v_a_1850_);
lean_ctor_set(v___x_1875_, 1, v_a_1871_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 0, v___x_1875_);
v___x_1877_ = v___x_1873_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Lean_Lsp_instToJsonModuleHierarchyOptions_toJson___redArg();
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0(lean_object* v_k_1883_, lean_object* v_x_1884_){
_start:
{
if (lean_obj_tag(v_x_1884_) == 0)
{
lean_object* v___x_1885_; 
lean_dec_ref(v_k_1883_);
v___x_1885_ = lean_box(0);
return v___x_1885_;
}
else
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1886_ = lean_obj_once(&l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___closed__0, &l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___closed__0_once, _init_l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___closed__0);
v___x_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1887_, 0, v_k_1883_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = lean_box(0);
v___x_1889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1887_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0___boxed(lean_object* v_k_1890_, lean_object* v_x_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0(v_k_1890_, v_x_1891_);
lean_dec(v_x_1891_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__1(lean_object* v_k_1893_, lean_object* v_x_1894_){
_start:
{
if (lean_obj_tag(v_x_1894_) == 0)
{
lean_object* v___x_1895_; 
lean_dec_ref(v_k_1893_);
v___x_1895_ = lean_box(0);
return v___x_1895_;
}
else
{
lean_object* v_val_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v_val_1896_ = lean_ctor_get(v_x_1894_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v_x_1894_, 1);
v___x_1897_ = l_Lean_Lsp_instToJsonRpcOptions_toJson(v_val_1896_);
v___x_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1898_, 0, v_k_1893_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
v___x_1899_ = lean_box(0);
v___x_1900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanServerCapabilities_toJson(lean_object* v_x_1901_){
_start:
{
lean_object* v_moduleHierarchyProvider_x3f_1902_; lean_object* v_rpcProvider_x3f_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1919_; 
v_moduleHierarchyProvider_x3f_1902_ = lean_ctor_get(v_x_1901_, 0);
v_rpcProvider_x3f_1903_ = lean_ctor_get(v_x_1901_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_x_1901_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1905_ = v_x_1901_;
v_isShared_1906_ = v_isSharedCheck_1919_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_rpcProvider_x3f_1903_);
lean_inc(v_moduleHierarchyProvider_x3f_1902_);
lean_dec(v_x_1901_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1919_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1907_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__0));
v___x_1908_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__0(v___x_1907_, v_moduleHierarchyProvider_x3f_1902_);
lean_dec(v_moduleHierarchyProvider_x3f_1902_);
v___x_1909_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson___closed__10));
v___x_1910_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanServerCapabilities_toJson_spec__1(v___x_1909_, v_rpcProvider_x3f_1903_);
v___x_1911_ = lean_box(0);
if (v_isShared_1906_ == 0)
{
lean_ctor_set_tag(v___x_1905_, 1);
lean_ctor_set(v___x_1905_, 1, v___x_1911_);
lean_ctor_set(v___x_1905_, 0, v___x_1910_);
v___x_1913_ = v___x_1905_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1910_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1908_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_1916_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_1914_, v___x_1915_);
v___x_1917_ = l_Lean_Json_mkObj(v___x_1916_);
lean_dec(v___x_1916_);
return v___x_1917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__0(lean_object* v_k_1922_, lean_object* v_x_1923_){
_start:
{
if (lean_obj_tag(v_x_1923_) == 0)
{
lean_object* v___x_1924_; 
lean_dec_ref(v_k_1922_);
v___x_1924_ = lean_box(0);
return v___x_1924_;
}
else
{
lean_object* v_val_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_val_1925_ = lean_ctor_get(v_x_1923_, 0);
v___x_1926_ = l_Lean_Lsp_instToJsonTextDocumentSyncOptions_toJson(v_val_1925_);
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_k_1922_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_box(0);
v___x_1929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1927_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
return v___x_1929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__0___boxed(lean_object* v_k_1930_, lean_object* v_x_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__0(v_k_1930_, v_x_1931_);
lean_dec(v_x_1931_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__1(lean_object* v_k_1933_, lean_object* v_x_1934_){
_start:
{
if (lean_obj_tag(v_x_1934_) == 0)
{
lean_object* v___x_1935_; 
lean_dec_ref(v_k_1933_);
v___x_1935_ = lean_box(0);
return v___x_1935_;
}
else
{
lean_object* v_val_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_val_1936_ = lean_ctor_get(v_x_1934_, 0);
v___x_1937_ = l_Lean_Lsp_instToJsonCompletionOptions_toJson(v_val_1936_);
v___x_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1938_, 0, v_k_1933_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lean_box(0);
v___x_1940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1938_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
return v___x_1940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__1___boxed(lean_object* v_k_1941_, lean_object* v_x_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__1(v_k_1941_, v_x_1942_);
lean_dec(v_x_1942_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__2(lean_object* v_k_1944_, lean_object* v_x_1945_){
_start:
{
if (lean_obj_tag(v_x_1945_) == 0)
{
lean_object* v___x_1946_; 
lean_dec_ref(v_k_1944_);
v___x_1946_ = lean_box(0);
return v___x_1946_;
}
else
{
lean_object* v_val_1947_; uint8_t v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v_val_1947_ = lean_ctor_get(v_x_1945_, 0);
v___x_1948_ = lean_unbox(v_val_1947_);
v___x_1949_ = l_Lean_Lsp_instToJsonRenameOptions_toJson(v___x_1948_);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v_k_1944_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_box(0);
v___x_1952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
return v___x_1952_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__2___boxed(lean_object* v_k_1953_, lean_object* v_x_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__2(v_k_1953_, v_x_1954_);
lean_dec(v_x_1954_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__3(lean_object* v_k_1956_, lean_object* v_x_1957_){
_start:
{
if (lean_obj_tag(v_x_1957_) == 0)
{
lean_object* v___x_1958_; 
lean_dec_ref(v_k_1956_);
v___x_1958_ = lean_box(0);
return v___x_1958_;
}
else
{
lean_object* v_val_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v_val_1959_ = lean_ctor_get(v_x_1957_, 0);
lean_inc(v_val_1959_);
lean_dec_ref_known(v_x_1957_, 1);
v___x_1960_ = l_Lean_Lsp_instToJsonSemanticTokensOptions_toJson(v_val_1959_);
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_k_1956_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = lean_box(0);
v___x_1963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1961_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
return v___x_1963_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__4(lean_object* v_k_1964_, lean_object* v_x_1965_){
_start:
{
if (lean_obj_tag(v_x_1965_) == 0)
{
lean_object* v___x_1966_; 
lean_dec_ref(v_k_1964_);
v___x_1966_ = lean_box(0);
return v___x_1966_;
}
else
{
lean_object* v_val_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_val_1967_ = lean_ctor_get(v_x_1965_, 0);
v___x_1968_ = l_Lean_Lsp_instToJsonCodeActionOptions_toJson(v_val_1967_);
v___x_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1969_, 0, v_k_1964_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = lean_box(0);
v___x_1971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1969_);
lean_ctor_set(v___x_1971_, 1, v___x_1970_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__4___boxed(lean_object* v_k_1972_, lean_object* v_x_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__4(v_k_1972_, v_x_1973_);
lean_dec(v_x_1973_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__5(lean_object* v_k_1975_, lean_object* v_x_1976_){
_start:
{
if (lean_obj_tag(v_x_1976_) == 0)
{
lean_object* v___x_1977_; 
lean_dec_ref(v_k_1975_);
v___x_1977_ = lean_box(0);
return v___x_1977_;
}
else
{
lean_object* v_val_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v_val_1978_ = lean_ctor_get(v_x_1976_, 0);
v___x_1979_ = l_Lean_Lsp_instToJsonInlayHintOptions_toJson(v_val_1978_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_k_1975_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_box(0);
v___x_1982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1980_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
return v___x_1982_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__5___boxed(lean_object* v_k_1983_, lean_object* v_x_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__5(v_k_1983_, v_x_1984_);
lean_dec(v_x_1984_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__6(lean_object* v_k_1986_, lean_object* v_x_1987_){
_start:
{
if (lean_obj_tag(v_x_1987_) == 0)
{
lean_object* v___x_1988_; 
lean_dec_ref(v_k_1986_);
v___x_1988_ = lean_box(0);
return v___x_1988_;
}
else
{
lean_object* v_val_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v_val_1989_ = lean_ctor_get(v_x_1987_, 0);
v___x_1990_ = l_Lean_Lsp_instToJsonSignatureHelpOptions_toJson(v_val_1989_);
v___x_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1991_, 0, v_k_1986_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = lean_box(0);
v___x_1993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
return v___x_1993_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__6___boxed(lean_object* v_k_1994_, lean_object* v_x_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__6(v_k_1994_, v_x_1995_);
lean_dec(v_x_1995_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__7(lean_object* v_k_1997_, lean_object* v_x_1998_){
_start:
{
if (lean_obj_tag(v_x_1998_) == 0)
{
lean_object* v___x_1999_; 
lean_dec_ref(v_k_1997_);
v___x_1999_ = lean_box(0);
return v___x_1999_;
}
else
{
lean_object* v_val_2000_; uint8_t v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v_val_2000_ = lean_ctor_get(v_x_1998_, 0);
v___x_2001_ = lean_unbox(v_val_2000_);
v___x_2002_ = l_Lean_Lsp_instToJsonDocumentColorOptions_toJson(v___x_2001_);
v___x_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2003_, 0, v_k_1997_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
v___x_2004_ = lean_box(0);
v___x_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2003_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
return v___x_2005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__7___boxed(lean_object* v_k_2006_, lean_object* v_x_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__7(v_k_2006_, v_x_2007_);
lean_dec(v_x_2007_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__8(lean_object* v_k_2009_, lean_object* v_x_2010_){
_start:
{
if (lean_obj_tag(v_x_2010_) == 0)
{
lean_object* v___x_2011_; 
lean_dec_ref(v_k_2009_);
v___x_2011_ = lean_box(0);
return v___x_2011_;
}
else
{
lean_object* v_val_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v_val_2012_ = lean_ctor_get(v_x_2010_, 0);
lean_inc(v_val_2012_);
lean_dec_ref_known(v_x_2010_, 1);
v___x_2013_ = l_Lean_Lsp_instToJsonLeanServerCapabilities_toJson(v_val_2012_);
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v_k_2009_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v___x_2015_ = lean_box(0);
v___x_2016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2014_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
return v___x_2016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonServerCapabilities_toJson(lean_object* v_x_2036_){
_start:
{
lean_object* v_textDocumentSync_x3f_2037_; lean_object* v_completionProvider_x3f_2038_; uint8_t v_hoverProvider_2039_; uint8_t v_documentHighlightProvider_2040_; uint8_t v_documentSymbolProvider_2041_; uint8_t v_definitionProvider_2042_; uint8_t v_declarationProvider_2043_; uint8_t v_typeDefinitionProvider_2044_; uint8_t v_referencesProvider_2045_; uint8_t v_callHierarchyProvider_2046_; lean_object* v_renameProvider_x3f_2047_; uint8_t v_workspaceSymbolProvider_2048_; uint8_t v_foldingRangeProvider_2049_; lean_object* v_semanticTokensProvider_x3f_2050_; lean_object* v_codeActionProvider_x3f_2051_; lean_object* v_inlayHintProvider_x3f_2052_; lean_object* v_signatureHelpProvider_x3f_2053_; lean_object* v_colorProvider_x3f_2054_; lean_object* v_experimental_x3f_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v_textDocumentSync_x3f_2037_ = lean_ctor_get(v_x_2036_, 0);
lean_inc(v_textDocumentSync_x3f_2037_);
v_completionProvider_x3f_2038_ = lean_ctor_get(v_x_2036_, 1);
lean_inc(v_completionProvider_x3f_2038_);
v_hoverProvider_2039_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9);
v_documentHighlightProvider_2040_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 1);
v_documentSymbolProvider_2041_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 2);
v_definitionProvider_2042_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 3);
v_declarationProvider_2043_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 4);
v_typeDefinitionProvider_2044_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 5);
v_referencesProvider_2045_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 6);
v_callHierarchyProvider_2046_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 7);
v_renameProvider_x3f_2047_ = lean_ctor_get(v_x_2036_, 2);
lean_inc(v_renameProvider_x3f_2047_);
v_workspaceSymbolProvider_2048_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 8);
v_foldingRangeProvider_2049_ = lean_ctor_get_uint8(v_x_2036_, sizeof(void*)*9 + 9);
v_semanticTokensProvider_x3f_2050_ = lean_ctor_get(v_x_2036_, 3);
lean_inc(v_semanticTokensProvider_x3f_2050_);
v_codeActionProvider_x3f_2051_ = lean_ctor_get(v_x_2036_, 4);
lean_inc(v_codeActionProvider_x3f_2051_);
v_inlayHintProvider_x3f_2052_ = lean_ctor_get(v_x_2036_, 5);
lean_inc(v_inlayHintProvider_x3f_2052_);
v_signatureHelpProvider_x3f_2053_ = lean_ctor_get(v_x_2036_, 6);
lean_inc(v_signatureHelpProvider_x3f_2053_);
v_colorProvider_x3f_2054_ = lean_ctor_get(v_x_2036_, 7);
lean_inc(v_colorProvider_x3f_2054_);
v_experimental_x3f_2055_ = lean_ctor_get(v_x_2036_, 8);
lean_inc(v_experimental_x3f_2055_);
lean_dec_ref(v_x_2036_);
v___x_2056_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__0));
v___x_2057_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__0(v___x_2056_, v_textDocumentSync_x3f_2037_);
lean_dec(v_textDocumentSync_x3f_2037_);
v___x_2058_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__1));
v___x_2059_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__1(v___x_2058_, v_completionProvider_x3f_2038_);
lean_dec(v_completionProvider_x3f_2038_);
v___x_2060_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__2));
v___x_2061_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2061_, 0, v_hoverProvider_2039_);
v___x_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = lean_box(0);
v___x_2064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__3));
v___x_2066_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2066_, 0, v_documentHighlightProvider_2040_);
v___x_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2065_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v___x_2068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
lean_ctor_set(v___x_2068_, 1, v___x_2063_);
v___x_2069_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__4));
v___x_2070_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2070_, 0, v_documentSymbolProvider_2041_);
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2069_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
lean_ctor_set(v___x_2072_, 1, v___x_2063_);
v___x_2073_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__5));
v___x_2074_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2074_, 0, v_definitionProvider_2042_);
v___x_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2073_);
lean_ctor_set(v___x_2075_, 1, v___x_2074_);
v___x_2076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
lean_ctor_set(v___x_2076_, 1, v___x_2063_);
v___x_2077_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__6));
v___x_2078_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2078_, 0, v_declarationProvider_2043_);
v___x_2079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2077_);
lean_ctor_set(v___x_2079_, 1, v___x_2078_);
v___x_2080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
lean_ctor_set(v___x_2080_, 1, v___x_2063_);
v___x_2081_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__7));
v___x_2082_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2082_, 0, v_typeDefinitionProvider_2044_);
v___x_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2081_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
lean_ctor_set(v___x_2084_, 1, v___x_2063_);
v___x_2085_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__8));
v___x_2086_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2086_, 0, v_referencesProvider_2045_);
v___x_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2085_);
lean_ctor_set(v___x_2087_, 1, v___x_2086_);
v___x_2088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
lean_ctor_set(v___x_2088_, 1, v___x_2063_);
v___x_2089_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__9));
v___x_2090_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2090_, 0, v_callHierarchyProvider_2046_);
v___x_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2089_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
lean_ctor_set(v___x_2092_, 1, v___x_2063_);
v___x_2093_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__10));
v___x_2094_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__2(v___x_2093_, v_renameProvider_x3f_2047_);
lean_dec(v_renameProvider_x3f_2047_);
v___x_2095_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__11));
v___x_2096_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2096_, 0, v_workspaceSymbolProvider_2048_);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2095_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v___x_2098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v___x_2063_);
v___x_2099_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__12));
v___x_2100_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2100_, 0, v_foldingRangeProvider_2049_);
v___x_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2099_);
lean_ctor_set(v___x_2101_, 1, v___x_2100_);
v___x_2102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
lean_ctor_set(v___x_2102_, 1, v___x_2063_);
v___x_2103_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__13));
v___x_2104_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__3(v___x_2103_, v_semanticTokensProvider_x3f_2050_);
v___x_2105_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__14));
v___x_2106_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__4(v___x_2105_, v_codeActionProvider_x3f_2051_);
lean_dec(v_codeActionProvider_x3f_2051_);
v___x_2107_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__15));
v___x_2108_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__5(v___x_2107_, v_inlayHintProvider_x3f_2052_);
lean_dec(v_inlayHintProvider_x3f_2052_);
v___x_2109_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__16));
v___x_2110_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__6(v___x_2109_, v_signatureHelpProvider_x3f_2053_);
lean_dec(v_signatureHelpProvider_x3f_2053_);
v___x_2111_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__17));
v___x_2112_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__7(v___x_2111_, v_colorProvider_x3f_2054_);
lean_dec(v_colorProvider_x3f_2054_);
v___x_2113_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__18));
v___x_2114_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonServerCapabilities_toJson_spec__8(v___x_2113_, v_experimental_x3f_2055_);
v___x_2115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2114_);
lean_ctor_set(v___x_2115_, 1, v___x_2063_);
v___x_2116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2112_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2110_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2108_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
v___x_2119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2106_);
lean_ctor_set(v___x_2119_, 1, v___x_2118_);
v___x_2120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2104_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2102_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2098_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2094_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2092_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2088_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2084_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2080_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2076_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2072_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2068_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2064_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2059_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2057_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = ((lean_object*)(l_Lean_Lsp_instToJsonCompletionItemCapabilities_toJson___closed__1));
v___x_2135_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonCompletionItemCapabilities_toJson_spec__1(v___x_2133_, v___x_2134_);
v___x_2136_ = l_Lean_Json_mkObj(v___x_2135_);
lean_dec(v___x_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10(lean_object* v_x_2141_){
_start:
{
if (lean_obj_tag(v_x_2141_) == 0)
{
lean_object* v___x_2142_; 
v___x_2142_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10___closed__0));
return v___x_2142_;
}
else
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Lsp_instFromJsonInlayHintOptions_fromJson(v_x_2141_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2151_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2146_ = v___x_2143_;
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_a_2144_);
lean_dec(v___x_2143_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2149_; 
if (v_isShared_2147_ == 0)
{
v___x_2149_ = v___x_2146_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_a_2144_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
else
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2160_; 
v_a_2152_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2154_ = v___x_2143_;
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2143_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
v___x_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2156_, 0, v_a_2152_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2156_);
v___x_2158_ = v___x_2154_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5(lean_object* v_j_2161_, lean_object* v_k_2162_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = l_Lean_Json_getObjValD(v_j_2161_, v_k_2162_);
v___x_2164_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5_spec__10(v___x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5___boxed(lean_object* v_j_2165_, lean_object* v_k_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5(v_j_2165_, v_k_2166_);
lean_dec_ref(v_k_2166_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8(lean_object* v_x_2170_){
_start:
{
if (lean_obj_tag(v_x_2170_) == 0)
{
lean_object* v___x_2171_; 
v___x_2171_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8___closed__0));
return v___x_2171_;
}
else
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_Lsp_instFromJsonCodeActionOptions_fromJson(v_x_2170_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2172_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2172_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2189_; 
v_a_2181_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2183_ = v___x_2172_;
v_isShared_2184_ = v_isSharedCheck_2189_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2172_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2189_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_a_2181_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 0, v___x_2185_);
v___x_2187_ = v___x_2183_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4(lean_object* v_j_2190_, lean_object* v_k_2191_){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = l_Lean_Json_getObjValD(v_j_2190_, v_k_2191_);
v___x_2193_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4_spec__8(v___x_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4___boxed(lean_object* v_j_2194_, lean_object* v_k_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4(v_j_2194_, v_k_2195_);
lean_dec_ref(v_k_2195_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16(lean_object* v_x_2199_){
_start:
{
if (lean_obj_tag(v_x_2199_) == 0)
{
lean_object* v___x_2200_; 
v___x_2200_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16___closed__0));
return v___x_2200_;
}
else
{
lean_object* v___x_2201_; 
v___x_2201_ = l_Lean_Lsp_instFromJsonLeanServerCapabilities_fromJson(v_x_2199_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2201_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2218_; 
v_a_2210_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2212_ = v___x_2201_;
v_isShared_2213_ = v_isSharedCheck_2218_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2201_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2218_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2214_; lean_object* v___x_2216_; 
v___x_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2214_, 0, v_a_2210_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2214_);
v___x_2216_ = v___x_2212_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8(lean_object* v_j_2219_, lean_object* v_k_2220_){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = l_Lean_Json_getObjValD(v_j_2219_, v_k_2220_);
v___x_2222_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8_spec__16(v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8___boxed(lean_object* v_j_2223_, lean_object* v_k_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8(v_j_2223_, v_k_2224_);
lean_dec_ref(v_k_2224_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12(lean_object* v_x_2228_){
_start:
{
if (lean_obj_tag(v_x_2228_) == 0)
{
lean_object* v___x_2229_; 
v___x_2229_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12___closed__0));
return v___x_2229_;
}
else
{
lean_object* v___x_2230_; 
v___x_2230_ = l_Lean_Lsp_instFromJsonSignatureHelpOptions_fromJson(v_x_2228_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2230_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2230_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2247_; 
v_a_2239_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2241_ = v___x_2230_;
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2230_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2243_; lean_object* v___x_2245_; 
v___x_2243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2243_, 0, v_a_2239_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v___x_2243_);
v___x_2245_ = v___x_2241_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2243_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6(lean_object* v_j_2248_, lean_object* v_k_2249_){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = l_Lean_Json_getObjValD(v_j_2248_, v_k_2249_);
v___x_2251_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6_spec__12(v___x_2250_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6___boxed(lean_object* v_j_2252_, lean_object* v_k_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6(v_j_2252_, v_k_2253_);
lean_dec_ref(v_k_2253_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0(lean_object* v_x_2257_){
_start:
{
if (lean_obj_tag(v_x_2257_) == 0)
{
lean_object* v___x_2258_; 
v___x_2258_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_2258_;
}
else
{
lean_object* v___x_2259_; 
v___x_2259_ = l_Lean_Lsp_instFromJsonTextDocumentSyncOptions_fromJson(v_x_2257_);
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2276_; 
v_a_2268_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2270_ = v___x_2259_;
v_isShared_2271_ = v_isSharedCheck_2276_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2259_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2276_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2272_; lean_object* v___x_2274_; 
v___x_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2272_, 0, v_a_2268_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v___x_2272_);
v___x_2274_ = v___x_2270_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2272_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0(lean_object* v_j_2277_, lean_object* v_k_2278_){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2279_ = l_Lean_Json_getObjValD(v_j_2277_, v_k_2278_);
v___x_2280_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0_spec__0(v___x_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0___boxed(lean_object* v_j_2281_, lean_object* v_k_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0(v_j_2281_, v_k_2282_);
lean_dec_ref(v_k_2282_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2(lean_object* v_x_2286_){
_start:
{
if (lean_obj_tag(v_x_2286_) == 0)
{
lean_object* v___x_2287_; 
v___x_2287_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2___closed__0));
return v___x_2287_;
}
else
{
lean_object* v___x_2288_; 
v___x_2288_ = l_Lean_Lsp_instFromJsonCompletionOptions_fromJson(v_x_2286_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2288_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2288_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2305_; 
v_a_2297_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2299_ = v___x_2288_;
v_isShared_2300_ = v_isSharedCheck_2305_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2288_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2305_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; lean_object* v___x_2303_; 
v___x_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2301_, 0, v_a_2297_);
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 0, v___x_2301_);
v___x_2303_ = v___x_2299_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v___x_2301_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1(lean_object* v_j_2306_, lean_object* v_k_2307_){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = l_Lean_Json_getObjValD(v_j_2306_, v_k_2307_);
v___x_2309_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1_spec__2(v___x_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1___boxed(lean_object* v_j_2310_, lean_object* v_k_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1(v_j_2310_, v_k_2311_);
lean_dec_ref(v_k_2311_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7_spec__14(lean_object* v_x_2313_){
_start:
{
if (lean_obj_tag(v_x_2313_) == 0)
{
lean_object* v___x_2314_; 
v___x_2314_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_2314_;
}
else
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lean_Lsp_instFromJsonDocumentColorOptions_fromJson(v_x_2313_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2315_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2315_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2332_; 
v_a_2324_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2326_ = v___x_2315_;
v_isShared_2327_ = v_isSharedCheck_2332_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2315_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2332_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2328_; lean_object* v___x_2330_; 
v___x_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2328_, 0, v_a_2324_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2328_);
v___x_2330_ = v___x_2326_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7(lean_object* v_j_2333_, lean_object* v_k_2334_){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = l_Lean_Json_getObjValD(v_j_2333_, v_k_2334_);
v___x_2336_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7_spec__14(v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7___boxed(lean_object* v_j_2337_, lean_object* v_k_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7(v_j_2337_, v_k_2338_);
lean_dec_ref(v_k_2338_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6(lean_object* v_x_2342_){
_start:
{
if (lean_obj_tag(v_x_2342_) == 0)
{
lean_object* v___x_2343_; 
v___x_2343_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6___closed__0));
return v___x_2343_;
}
else
{
lean_object* v___x_2344_; 
v___x_2344_ = l_Lean_Lsp_instFromJsonSemanticTokensOptions_fromJson(v_x_2342_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2344_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2344_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_a_2345_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2361_; 
v_a_2353_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2355_ = v___x_2344_;
v_isShared_2356_ = v_isSharedCheck_2361_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2344_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2361_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; lean_object* v___x_2359_; 
v___x_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_a_2353_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2357_);
v___x_2359_ = v___x_2355_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3(lean_object* v_j_2362_, lean_object* v_k_2363_){
_start:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2364_ = l_Lean_Json_getObjValD(v_j_2362_, v_k_2363_);
v___x_2365_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3_spec__6(v___x_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3___boxed(lean_object* v_j_2366_, lean_object* v_k_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3(v_j_2366_, v_k_2367_);
lean_dec_ref(v_k_2367_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2_spec__4(lean_object* v_x_2369_){
_start:
{
if (lean_obj_tag(v_x_2369_) == 0)
{
lean_object* v___x_2370_; 
v___x_2370_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson_spec__0_spec__0___closed__0));
return v___x_2370_;
}
else
{
lean_object* v___x_2371_; 
v___x_2371_ = l_Lean_Lsp_instFromJsonRenameOptions_fromJson(v_x_2369_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2371_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2371_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2388_; 
v_a_2380_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2382_ = v___x_2371_;
v_isShared_2383_ = v_isSharedCheck_2388_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2371_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2388_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2384_; lean_object* v___x_2386_; 
v___x_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2384_, 0, v_a_2380_);
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 0, v___x_2384_);
v___x_2386_ = v___x_2382_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2384_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2(lean_object* v_j_2389_, lean_object* v_k_2390_){
_start:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2391_ = l_Lean_Json_getObjValD(v_j_2389_, v_k_2390_);
v___x_2392_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2_spec__4(v___x_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2___boxed(lean_object* v_j_2393_, lean_object* v_k_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2(v_j_2393_, v_k_2394_);
lean_dec_ref(v_k_2394_);
return v_res_2395_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__2(void){
_start:
{
uint8_t v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2401_ = 1;
v___x_2402_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__1));
v___x_2403_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2402_, v___x_2401_);
return v___x_2403_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2404_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__5));
v___x_2405_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__2, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__2);
v___x_2406_ = lean_string_append(v___x_2405_, v___x_2404_);
return v___x_2406_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__6(void){
_start:
{
uint8_t v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2410_ = 1;
v___x_2411_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__5));
v___x_2412_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2411_, v___x_2410_);
return v___x_2412_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2413_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__6, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__6);
v___x_2414_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2415_ = lean_string_append(v___x_2414_, v___x_2413_);
return v___x_2415_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__8(void){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2416_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2417_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__7, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__7);
v___x_2418_ = lean_string_append(v___x_2417_, v___x_2416_);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__11(void){
_start:
{
uint8_t v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = 1;
v___x_2423_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__10));
v___x_2424_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2423_, v___x_2422_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__11, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__11);
v___x_2426_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2427_ = lean_string_append(v___x_2426_, v___x_2425_);
return v___x_2427_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__13(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2428_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2429_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__12, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__12);
v___x_2430_ = lean_string_append(v___x_2429_, v___x_2428_);
return v___x_2430_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__15(void){
_start:
{
uint8_t v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2433_ = 1;
v___x_2434_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__14));
v___x_2435_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2434_, v___x_2433_);
return v___x_2435_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__16(void){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2436_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__15, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__15);
v___x_2437_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2438_ = lean_string_append(v___x_2437_, v___x_2436_);
return v___x_2438_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__17(void){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2439_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2440_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__16, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__16);
v___x_2441_ = lean_string_append(v___x_2440_, v___x_2439_);
return v___x_2441_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__19(void){
_start:
{
uint8_t v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2444_ = 1;
v___x_2445_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__18));
v___x_2446_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2445_, v___x_2444_);
return v___x_2446_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__20(void){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__19, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__19);
v___x_2448_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2449_ = lean_string_append(v___x_2448_, v___x_2447_);
return v___x_2449_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__21(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2451_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__20, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__20_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__20);
v___x_2452_ = lean_string_append(v___x_2451_, v___x_2450_);
return v___x_2452_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__23(void){
_start:
{
uint8_t v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2455_ = 1;
v___x_2456_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__22));
v___x_2457_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2456_, v___x_2455_);
return v___x_2457_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__24(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2458_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__23, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__23_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__23);
v___x_2459_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2460_ = lean_string_append(v___x_2459_, v___x_2458_);
return v___x_2460_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__25(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2462_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__24, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__24_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__24);
v___x_2463_ = lean_string_append(v___x_2462_, v___x_2461_);
return v___x_2463_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__27(void){
_start:
{
uint8_t v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = 1;
v___x_2467_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__26));
v___x_2468_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2467_, v___x_2466_);
return v___x_2468_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__28(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2469_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__27, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__27_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__27);
v___x_2470_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2471_ = lean_string_append(v___x_2470_, v___x_2469_);
return v___x_2471_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__29(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2472_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2473_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__28, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__28_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__28);
v___x_2474_ = lean_string_append(v___x_2473_, v___x_2472_);
return v___x_2474_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__31(void){
_start:
{
uint8_t v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2477_ = 1;
v___x_2478_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__30));
v___x_2479_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2478_, v___x_2477_);
return v___x_2479_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__32(void){
_start:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2480_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__31, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__31_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__31);
v___x_2481_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2482_ = lean_string_append(v___x_2481_, v___x_2480_);
return v___x_2482_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__33(void){
_start:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2484_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__32, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__32_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__32);
v___x_2485_ = lean_string_append(v___x_2484_, v___x_2483_);
return v___x_2485_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__35(void){
_start:
{
uint8_t v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = 1;
v___x_2489_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__34));
v___x_2490_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2489_, v___x_2488_);
return v___x_2490_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__36(void){
_start:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2491_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__35, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__35_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__35);
v___x_2492_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2493_ = lean_string_append(v___x_2492_, v___x_2491_);
return v___x_2493_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__37(void){
_start:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2494_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2495_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__36, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__36_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__36);
v___x_2496_ = lean_string_append(v___x_2495_, v___x_2494_);
return v___x_2496_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__39(void){
_start:
{
uint8_t v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2499_ = 1;
v___x_2500_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__38));
v___x_2501_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2500_, v___x_2499_);
return v___x_2501_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__40(void){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2502_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__39, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__39_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__39);
v___x_2503_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2504_ = lean_string_append(v___x_2503_, v___x_2502_);
return v___x_2504_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__41(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2505_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2506_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__40, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__40_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__40);
v___x_2507_ = lean_string_append(v___x_2506_, v___x_2505_);
return v___x_2507_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__43(void){
_start:
{
uint8_t v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2510_ = 1;
v___x_2511_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__42));
v___x_2512_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2511_, v___x_2510_);
return v___x_2512_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__44(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2513_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__43, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__43_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__43);
v___x_2514_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2515_ = lean_string_append(v___x_2514_, v___x_2513_);
return v___x_2515_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__45(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2516_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2517_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__44, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__44_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__44);
v___x_2518_ = lean_string_append(v___x_2517_, v___x_2516_);
return v___x_2518_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__48(void){
_start:
{
uint8_t v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2522_ = 1;
v___x_2523_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__47));
v___x_2524_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2523_, v___x_2522_);
return v___x_2524_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__49(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2525_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__48, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__48_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__48);
v___x_2526_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2527_ = lean_string_append(v___x_2526_, v___x_2525_);
return v___x_2527_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__50(void){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2529_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__49, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__49_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__49);
v___x_2530_ = lean_string_append(v___x_2529_, v___x_2528_);
return v___x_2530_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__52(void){
_start:
{
uint8_t v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2533_ = 1;
v___x_2534_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__51));
v___x_2535_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2534_, v___x_2533_);
return v___x_2535_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__53(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2536_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__52, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__52_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__52);
v___x_2537_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2538_ = lean_string_append(v___x_2537_, v___x_2536_);
return v___x_2538_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__54(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2539_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2540_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__53, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__53_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__53);
v___x_2541_ = lean_string_append(v___x_2540_, v___x_2539_);
return v___x_2541_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__56(void){
_start:
{
uint8_t v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = 1;
v___x_2545_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__55));
v___x_2546_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2545_, v___x_2544_);
return v___x_2546_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__57(void){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2547_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__56, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__56_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__56);
v___x_2548_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2549_ = lean_string_append(v___x_2548_, v___x_2547_);
return v___x_2549_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__58(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2551_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__57, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__57_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__57);
v___x_2552_ = lean_string_append(v___x_2551_, v___x_2550_);
return v___x_2552_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__61(void){
_start:
{
uint8_t v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2556_ = 1;
v___x_2557_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__60));
v___x_2558_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2557_, v___x_2556_);
return v___x_2558_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__62(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2559_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__61, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__61_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__61);
v___x_2560_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2561_ = lean_string_append(v___x_2560_, v___x_2559_);
return v___x_2561_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__63(void){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2563_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__62, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__62_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__62);
v___x_2564_ = lean_string_append(v___x_2563_, v___x_2562_);
return v___x_2564_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__66(void){
_start:
{
uint8_t v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2568_ = 1;
v___x_2569_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__65));
v___x_2570_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2569_, v___x_2568_);
return v___x_2570_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__67(void){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2571_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__66, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__66_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__66);
v___x_2572_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2573_ = lean_string_append(v___x_2572_, v___x_2571_);
return v___x_2573_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__68(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2574_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2575_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__67, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__67_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__67);
v___x_2576_ = lean_string_append(v___x_2575_, v___x_2574_);
return v___x_2576_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__71(void){
_start:
{
uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2580_ = 1;
v___x_2581_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__70));
v___x_2582_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2581_, v___x_2580_);
return v___x_2582_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__72(void){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2583_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__71, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__71_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__71);
v___x_2584_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2585_ = lean_string_append(v___x_2584_, v___x_2583_);
return v___x_2585_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__73(void){
_start:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2586_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2587_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__72, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__72_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__72);
v___x_2588_ = lean_string_append(v___x_2587_, v___x_2586_);
return v___x_2588_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__76(void){
_start:
{
uint8_t v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2592_ = 1;
v___x_2593_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__75));
v___x_2594_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2593_, v___x_2592_);
return v___x_2594_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__77(void){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2595_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__76, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__76_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__76);
v___x_2596_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2597_ = lean_string_append(v___x_2596_, v___x_2595_);
return v___x_2597_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__78(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2599_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__77, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__77_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__77);
v___x_2600_ = lean_string_append(v___x_2599_, v___x_2598_);
return v___x_2600_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__81(void){
_start:
{
uint8_t v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2604_ = 1;
v___x_2605_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__80));
v___x_2606_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2605_, v___x_2604_);
return v___x_2606_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__82(void){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2607_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__81, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__81_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__81);
v___x_2608_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2609_ = lean_string_append(v___x_2608_, v___x_2607_);
return v___x_2609_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__83(void){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2611_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__82, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__82_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__82);
v___x_2612_ = lean_string_append(v___x_2611_, v___x_2610_);
return v___x_2612_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__86(void){
_start:
{
uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = 1;
v___x_2617_ = ((lean_object*)(l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__85));
v___x_2618_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2617_, v___x_2616_);
return v___x_2618_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__87(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2619_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__86, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__86_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__86);
v___x_2620_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__3);
v___x_2621_ = lean_string_append(v___x_2620_, v___x_2619_);
return v___x_2621_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__88(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2622_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCompletionItemCapabilities_fromJson___closed__11));
v___x_2623_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__87, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__87_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__87);
v___x_2624_ = lean_string_append(v___x_2623_, v___x_2622_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonServerCapabilities_fromJson(lean_object* v_json_2625_){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2626_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__0));
lean_inc(v_json_2625_);
v___x_2627_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__0(v_json_2625_, v___x_2626_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2637_; 
lean_dec(v_json_2625_);
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2630_ = v___x_2627_;
v_isShared_2631_ = v_isSharedCheck_2637_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2627_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2637_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
v___x_2632_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__8, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__8);
v___x_2633_ = lean_string_append(v___x_2632_, v_a_2628_);
lean_dec(v_a_2628_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 0, v___x_2633_);
v___x_2635_ = v___x_2630_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2633_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
else
{
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec(v_json_2625_);
v_a_2638_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2627_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2627_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
lean_ctor_set_tag(v___x_2640_, 0);
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v_a_2646_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2627_, 1);
v___x_2647_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__1));
lean_inc(v_json_2625_);
v___x_2648_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__1(v_json_2625_, v___x_2647_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2658_; 
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2651_ = v___x_2648_;
v_isShared_2652_ = v_isSharedCheck_2658_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2648_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2658_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2656_; 
v___x_2653_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__13, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__13);
v___x_2654_ = lean_string_append(v___x_2653_, v_a_2649_);
lean_dec(v_a_2649_);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2654_);
v___x_2656_ = v___x_2651_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2654_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
else
{
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2659_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2648_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2648_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set_tag(v___x_2661_, 0);
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
v_a_2667_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2667_);
lean_dec_ref_known(v___x_2648_, 1);
v___x_2668_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__2));
lean_inc(v_json_2625_);
v___x_2669_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2668_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2672_ = v___x_2669_;
v_isShared_2673_ = v_isSharedCheck_2679_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2669_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2679_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2674_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__17, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__17);
v___x_2675_ = lean_string_append(v___x_2674_, v_a_2670_);
lean_dec(v_a_2670_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 0, v___x_2675_);
v___x_2677_ = v___x_2672_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
else
{
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2680_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2669_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2669_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set_tag(v___x_2682_, 0);
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_a_2688_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2669_, 1);
v___x_2689_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__3));
lean_inc(v_json_2625_);
v___x_2690_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2700_; 
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2700_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2700_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2698_; 
v___x_2695_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__21, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__21_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__21);
v___x_2696_ = lean_string_append(v___x_2695_, v_a_2691_);
lean_dec(v_a_2691_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2696_);
v___x_2698_ = v___x_2693_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
else
{
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2701_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2690_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2690_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
lean_ctor_set_tag(v___x_2703_, 0);
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_a_2709_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2690_, 1);
v___x_2710_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__4));
lean_inc(v_json_2625_);
v___x_2711_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2710_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2721_; 
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2714_ = v___x_2711_;
v_isShared_2715_ = v_isSharedCheck_2721_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2711_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2721_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2716_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__25, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__25_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__25);
v___x_2717_ = lean_string_append(v___x_2716_, v_a_2712_);
lean_dec(v_a_2712_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 0, v___x_2717_);
v___x_2719_ = v___x_2714_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
else
{
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2729_; 
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2722_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2724_ = v___x_2711_;
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_a_2722_);
lean_dec(v___x_2711_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2727_; 
if (v_isShared_2725_ == 0)
{
lean_ctor_set_tag(v___x_2724_, 0);
v___x_2727_ = v___x_2724_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_a_2722_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
v_a_2730_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___x_2711_, 1);
v___x_2731_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__5));
lean_inc(v_json_2625_);
v___x_2732_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2731_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2742_; 
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__29, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__29_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__29);
v___x_2738_ = lean_string_append(v___x_2737_, v_a_2733_);
lean_dec(v_a_2733_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2738_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
else
{
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2743_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2732_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2732_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set_tag(v___x_2745_, 0);
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v_a_2751_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2732_, 1);
v___x_2752_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__6));
lean_inc(v_json_2625_);
v___x_2753_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2763_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2763_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v___x_2758_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__33, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__33_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__33);
v___x_2759_ = lean_string_append(v___x_2758_, v_a_2754_);
lean_dec(v_a_2754_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2759_);
v___x_2761_ = v___x_2756_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
else
{
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2764_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2753_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2753_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
lean_ctor_set_tag(v___x_2766_, 0);
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v_a_2772_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2772_);
lean_dec_ref_known(v___x_2753_, 1);
v___x_2773_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__7));
lean_inc(v_json_2625_);
v___x_2774_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2773_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2784_; 
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2777_ = v___x_2774_;
v_isShared_2778_ = v_isSharedCheck_2784_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2774_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2784_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2782_; 
v___x_2779_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__37, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__37_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__37);
v___x_2780_ = lean_string_append(v___x_2779_, v_a_2775_);
lean_dec(v_a_2775_);
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v___x_2780_);
v___x_2782_ = v___x_2777_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
else
{
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2785_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2774_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2774_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set_tag(v___x_2787_, 0);
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v_a_2793_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2774_, 1);
v___x_2794_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__8));
lean_inc(v_json_2625_);
v___x_2795_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2794_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2805_; 
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2805_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2805_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2800_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__41, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__41_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__41);
v___x_2801_ = lean_string_append(v___x_2800_, v_a_2796_);
lean_dec(v_a_2796_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 0, v___x_2801_);
v___x_2803_ = v___x_2798_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
else
{
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2806_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2795_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2795_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set_tag(v___x_2808_, 0);
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v_a_2814_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2815_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__9));
lean_inc(v_json_2625_);
v___x_2816_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2815_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2819_ = v___x_2816_;
v_isShared_2820_ = v_isSharedCheck_2826_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2826_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
v___x_2821_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__45, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__45_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__45);
v___x_2822_ = lean_string_append(v___x_2821_, v_a_2817_);
lean_dec(v_a_2817_);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2822_);
v___x_2824_ = v___x_2819_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
else
{
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2827_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2816_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2816_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
lean_ctor_set_tag(v___x_2829_, 0);
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
v_a_2835_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2816_, 1);
v___x_2836_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__10));
lean_inc(v_json_2625_);
v___x_2837_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__2(v_json_2625_, v___x_2836_);
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2847_; 
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2838_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2840_ = v___x_2837_;
v_isShared_2841_ = v_isSharedCheck_2847_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2837_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2847_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2845_; 
v___x_2842_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__50, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__50_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__50);
v___x_2843_ = lean_string_append(v___x_2842_, v_a_2838_);
lean_dec(v_a_2838_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 0, v___x_2843_);
v___x_2845_ = v___x_2840_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2843_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
else
{
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2848_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2837_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2837_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set_tag(v___x_2850_, 0);
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v_a_2856_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_a_2856_);
lean_dec_ref_known(v___x_2837_, 1);
v___x_2857_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__11));
lean_inc(v_json_2625_);
v___x_2858_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2857_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2868_; 
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2861_ = v___x_2858_;
v_isShared_2862_ = v_isSharedCheck_2868_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2858_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2868_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
v___x_2863_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__54, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__54_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__54);
v___x_2864_ = lean_string_append(v___x_2863_, v_a_2859_);
lean_dec(v_a_2859_);
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 0, v___x_2864_);
v___x_2866_ = v___x_2861_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
else
{
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2869_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2858_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2858_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
lean_ctor_set_tag(v___x_2871_, 0);
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_a_2877_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2858_, 1);
v___x_2878_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__12));
lean_inc(v_json_2625_);
v___x_2879_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonShowDocumentClientCapabilities_fromJson_spec__0(v_json_2625_, v___x_2878_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2889_; 
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2882_ = v___x_2879_;
v_isShared_2883_ = v_isSharedCheck_2889_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_a_2880_);
lean_dec(v___x_2879_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2889_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2887_; 
v___x_2884_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__58, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__58_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__58);
v___x_2885_ = lean_string_append(v___x_2884_, v_a_2880_);
lean_dec(v_a_2880_);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 0, v___x_2885_);
v___x_2887_ = v___x_2882_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2885_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
else
{
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2890_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2879_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2879_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
lean_ctor_set_tag(v___x_2892_, 0);
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_a_2898_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2898_);
lean_dec_ref_known(v___x_2879_, 1);
v___x_2899_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__13));
lean_inc(v_json_2625_);
v___x_2900_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__3(v_json_2625_, v___x_2899_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2910_; 
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2903_ = v___x_2900_;
v_isShared_2904_ = v_isSharedCheck_2910_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2900_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2910_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2905_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__63, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__63_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__63);
v___x_2906_ = lean_string_append(v___x_2905_, v_a_2901_);
lean_dec(v_a_2901_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v___x_2906_);
v___x_2908_ = v___x_2903_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
else
{
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2911_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___x_2900_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___x_2900_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
lean_ctor_set_tag(v___x_2913_, 0);
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v_a_2919_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2900_, 1);
v___x_2920_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__14));
lean_inc(v_json_2625_);
v___x_2921_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__4(v_json_2625_, v___x_2920_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2931_; 
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2924_ = v___x_2921_;
v_isShared_2925_ = v_isSharedCheck_2931_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2921_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2931_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2926_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__68, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__68_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__68);
v___x_2927_ = lean_string_append(v___x_2926_, v_a_2922_);
lean_dec(v_a_2922_);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v___x_2927_);
v___x_2929_ = v___x_2924_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
else
{
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2932_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2921_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2921_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set_tag(v___x_2934_, 0);
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v_a_2940_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2921_, 1);
v___x_2941_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__15));
lean_inc(v_json_2625_);
v___x_2942_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__5(v_json_2625_, v___x_2941_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2952_; 
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2945_ = v___x_2942_;
v_isShared_2946_ = v_isSharedCheck_2952_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2952_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2950_; 
v___x_2947_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__73, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__73_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__73);
v___x_2948_ = lean_string_append(v___x_2947_, v_a_2943_);
lean_dec(v_a_2943_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v___x_2948_);
v___x_2950_ = v___x_2945_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2948_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
}
else
{
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2953_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2942_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2942_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set_tag(v___x_2955_, 0);
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
else
{
lean_object* v_a_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v_a_2961_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2962_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__16));
lean_inc(v_json_2625_);
v___x_2963_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__6(v_json_2625_, v___x_2962_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2973_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2966_ = v___x_2963_;
v_isShared_2967_ = v_isSharedCheck_2973_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2963_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2973_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2971_; 
v___x_2968_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__78, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__78_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__78);
v___x_2969_ = lean_string_append(v___x_2968_, v_a_2964_);
lean_dec(v_a_2964_);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 0, v___x_2969_);
v___x_2971_ = v___x_2966_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2969_);
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
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2974_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2963_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2963_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
lean_ctor_set_tag(v___x_2976_, 0);
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v_a_2982_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2963_, 1);
v___x_2983_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__17));
lean_inc(v_json_2625_);
v___x_2984_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__7(v_json_2625_, v___x_2983_);
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2994_; 
lean_dec(v_a_2982_);
lean_dec(v_a_2961_);
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_2994_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2994_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2992_; 
v___x_2989_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__83, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__83_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__83);
v___x_2990_ = lean_string_append(v___x_2989_, v_a_2985_);
lean_dec(v_a_2985_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 0, v___x_2990_);
v___x_2992_ = v___x_2987_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v___x_2990_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
else
{
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3002_; 
lean_dec(v_a_2982_);
lean_dec(v_a_2961_);
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
lean_dec(v_json_2625_);
v_a_2995_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2997_ = v___x_2984_;
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2984_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2998_ == 0)
{
lean_ctor_set_tag(v___x_2997_, 0);
v___x_3000_ = v___x_2997_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v_a_3003_ = lean_ctor_get(v___x_2984_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_2984_, 1);
v___x_3004_ = ((lean_object*)(l_Lean_Lsp_instToJsonServerCapabilities_toJson___closed__18));
v___x_3005_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonServerCapabilities_fromJson_spec__8(v_json_2625_, v___x_3004_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3015_; 
lean_dec(v_a_3003_);
lean_dec(v_a_2982_);
lean_dec(v_a_2961_);
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3015_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3015_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3013_; 
v___x_3010_ = lean_obj_once(&l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__88, &l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__88_once, _init_l_Lean_Lsp_instFromJsonServerCapabilities_fromJson___closed__88);
v___x_3011_ = lean_string_append(v___x_3010_, v_a_3006_);
lean_dec(v_a_3006_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 0, v___x_3011_);
v___x_3013_ = v___x_3008_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v___x_3011_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
else
{
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec(v_a_3003_);
lean_dec(v_a_2982_);
lean_dec(v_a_2961_);
lean_dec(v_a_2940_);
lean_dec(v_a_2919_);
lean_dec(v_a_2898_);
lean_dec(v_a_2877_);
lean_dec(v_a_2856_);
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_a_2667_);
lean_dec(v_a_2646_);
v_a_3016_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_3005_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_3005_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
lean_ctor_set_tag(v___x_3018_, 0);
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3042_; 
v_a_3024_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3026_ = v___x_3005_;
v_isShared_3027_ = v_isSharedCheck_3042_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3005_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3042_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3028_; uint8_t v___x_3029_; uint8_t v___x_3030_; uint8_t v___x_3031_; uint8_t v___x_3032_; uint8_t v___x_3033_; uint8_t v___x_3034_; uint8_t v___x_3035_; uint8_t v___x_3036_; uint8_t v___x_3037_; uint8_t v___x_3038_; lean_object* v___x_3040_; 
v___x_3028_ = lean_alloc_ctor(0, 9, 10);
lean_ctor_set(v___x_3028_, 0, v_a_2646_);
lean_ctor_set(v___x_3028_, 1, v_a_2667_);
lean_ctor_set(v___x_3028_, 2, v_a_2856_);
lean_ctor_set(v___x_3028_, 3, v_a_2919_);
lean_ctor_set(v___x_3028_, 4, v_a_2940_);
lean_ctor_set(v___x_3028_, 5, v_a_2961_);
lean_ctor_set(v___x_3028_, 6, v_a_2982_);
lean_ctor_set(v___x_3028_, 7, v_a_3003_);
lean_ctor_set(v___x_3028_, 8, v_a_3024_);
v___x_3029_ = lean_unbox(v_a_2688_);
lean_dec(v_a_2688_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9, v___x_3029_);
v___x_3030_ = lean_unbox(v_a_2709_);
lean_dec(v_a_2709_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 1, v___x_3030_);
v___x_3031_ = lean_unbox(v_a_2730_);
lean_dec(v_a_2730_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 2, v___x_3031_);
v___x_3032_ = lean_unbox(v_a_2751_);
lean_dec(v_a_2751_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 3, v___x_3032_);
v___x_3033_ = lean_unbox(v_a_2772_);
lean_dec(v_a_2772_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 4, v___x_3033_);
v___x_3034_ = lean_unbox(v_a_2793_);
lean_dec(v_a_2793_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 5, v___x_3034_);
v___x_3035_ = lean_unbox(v_a_2814_);
lean_dec(v_a_2814_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 6, v___x_3035_);
v___x_3036_ = lean_unbox(v_a_2835_);
lean_dec(v_a_2835_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 7, v___x_3036_);
v___x_3037_ = lean_unbox(v_a_2877_);
lean_dec(v_a_2877_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 8, v___x_3037_);
v___x_3038_ = lean_unbox(v_a_2898_);
lean_dec(v_a_2898_);
lean_ctor_set_uint8(v___x_3028_, sizeof(void*)*9 + 9, v___x_3038_);
if (v_isShared_3027_ == 0)
{
lean_ctor_set(v___x_3026_, 0, v___x_3028_);
v___x_3040_ = v___x_3026_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3028_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
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
lean_object* runtime_initialize_Lean_Data_JsonRpc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_LanguageFeatures(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_CodeActions(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_Extra(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_Capabilities(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_JsonRpc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_LanguageFeatures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_CodeActions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_Capabilities(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_JsonRpc(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_LanguageFeatures(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_CodeActions(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Capabilities(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_JsonRpc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_LanguageFeatures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_CodeActions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Capabilities(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_Capabilities(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_Capabilities(builtin);
}
#ifdef __cplusplus
}
#endif

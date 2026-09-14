// Lean compiler output
// Module: Lean.Data.Lsp.Ipc
// Imports: public import Lean.Data.Lsp.Communication public import Lean.Data.Lsp.Diagnostics public import Lean.Data.Lsp.Extra import Init.Data.List.Sort.Basic public import Lean.Data.Lsp.LanguageFeatures import Init.While
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_Lean_IO_FS_Stream_writeLspMessage(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonCallHierarchyOutgoingCallsParams_toJson(lean_object*);
lean_object* l_Lean_Json_Structured_fromJson_x3f(lean_object*);
lean_object* l_Lean_IO_FS_Stream_readLspMessage(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t l_Lean_JsonRpc_instBEqRequestID_beq(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCallHierarchyOutgoingCall_fromJson(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonLeanImport_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCallHierarchyIncomingCallsParams_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonLeanPrepareModuleHierarchyParams_toJson(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonLeanModuleHierarchyImportedByParams_toJson(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCallHierarchyItem_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCallHierarchyPrepareParams_toJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonLeanModule_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonLeanModuleHierarchyImportsParams_toJson(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Lsp_instToJsonLeanImport_toJson(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Json_isNull(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCallHierarchyIncomingCall_fromJson(lean_object*);
lean_object* l_Lean_IO_FS_Stream_readLspRequestAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonWaitForILeansParams_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonWaitForDiagnosticsParams_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCallHierarchyItem_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* l_Lean_IO_FS_Stream_writeLspRequest___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_DiagnosticWith_fullRange___redArg(lean_object*);
uint8_t l_Lean_Lsp_instOrdRange_ord(lean_object*, lean_object*);
lean_object* l_Lean_IO_FS_Stream_writeLspNotification___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mergeSort___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_Structured_toJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonPublishDiagnosticsParams_fromJson(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Lsp_Ipc_ipcStdioConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Lsp_Ipc_ipcStdioConfig___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_ipcStdioConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Ipc_ipcStdioConfig = (const lean_object*)&l_Lean_Lsp_Ipc_ipcStdioConfig___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdin(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdout(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdout___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspNotification___at___00Lean_Lsp_Ipc_shutdown_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspNotification___at___00Lean_Lsp_Ipc_shutdown_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Data.Lsp.Ipc"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__2_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Lsp.Ipc.shutdown"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__3_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: result.isNull\n      "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__5;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Expected id "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", got id "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_shutdown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shutdown"};
static const lean_object* l_Lean_Lsp_Ipc_shutdown___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_shutdown___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_shutdown(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_shutdown___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readMessage___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unexpected result '"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'\n"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Expected JSON-RPC response, got: '"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2_value;
static const lean_closure_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__3 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__3_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jsonrpc"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__4 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__4_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "2.0"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__5 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__5_value)}};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__6 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__4_value),((lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__6_value)}};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12_value;
static const lean_string_object l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13 = (const lean_object*)&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__14;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__15;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__16;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__18;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__19;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__20;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__22;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__23;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__24;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__26;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__27;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__28;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__30;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__31;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__32;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__34;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__35;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__36;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__38;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__39;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__40;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__42;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__43;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__44;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__46;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__47;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__48;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__50;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__51;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__52;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__54;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__55;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__56;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__58;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__59;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__60;
static lean_once_cell_t l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams(lean_object*);
static const lean_ctor_object l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "textDocument/publishDiagnostics"};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__0 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__0_value;
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Waiting for diagnostics failed: "};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1_value;
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Cannot decode publishDiagnostics parameters\n"};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_collectDiagnostics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "textDocument/waitForDiagnostics"};
static const lean_object* l_Lean_Lsp_Ipc_collectDiagnostics___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_collectDiagnostics___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Waiting for ILeans failed: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_waitForILeans___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "$/lean/waitForILeans"};
static const lean_object* l_Lean_Lsp_Ipc_waitForILeans___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_waitForILeans___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForILeans(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForILeans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Lsp_Ipc_waitForWatchdogILeans___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_Ipc_waitForWatchdogILeans___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_waitForWatchdogILeans___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForWatchdogILeans(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForWatchdogILeans___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "item"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 25, 3, 135, 237, 12, 111, 54)}};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__7_value;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "CallHierarchy"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__4_value;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ipc"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value_aux_0),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value_aux_1),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(35, 217, 114, 230, 122, 150, 157, 83)}};
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value_aux_2),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(200, 239, 250, 28, 105, 0, 0, 121)}};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "fromRanges"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(22, 83, 65, 87, 105, 214, 49, 248)}};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__18;
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "children"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19_value),LEAN_SCALAR_PTR_LITERAL(207, 29, 161, 81, 49, 98, 4, 106)}};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__20 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__20_value;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__22;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__23;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Ipc_instFromJsonCallHierarchy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0___boxed(lean_object*);
static const lean_array_object l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Ipc_instToJsonCallHierarchy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Ipc_instToJsonCallHierarchy___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instToJsonCallHierarchy___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Ipc_instToJsonCallHierarchy = (const lean_object*)&l_Lean_Lsp_Ipc_instToJsonCallHierarchy___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "callHierarchy/incomingCalls"};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__0 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__0_value;
static const lean_array_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1_value;
static const lean_array_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__2 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__2_value;
static const lean_array_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "textDocument/prepareCallHierarchy"};
static const lean_object* l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__0_value;
static const lean_array_object l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__1 = (const lean_object*)&l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandIncomingCallHierarchy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "callHierarchy/outgoingCalls"};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__0 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__0_value;
static const lean_array_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__1 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandOutgoingCallHierarchy_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandOutgoingCallHierarchy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandOutgoingCallHierarchy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandOutgoingCallHierarchy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ModuleHierarchy"};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(35, 217, 114, 230, 122, 150, 157, 83)}};
static const lean_ctor_object l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value_aux_2),((lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 116, 164, 77, 111, 32, 93, 177)}};
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy = (const lean_object*)&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Ipc_instToJsonModuleHierarchy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Ipc_instToJsonModuleHierarchy___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_instToJsonModuleHierarchy___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Ipc_instToJsonModuleHierarchy = (const lean_object*)&l_Lean_Lsp_Ipc_instToJsonModuleHierarchy___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "$/lean/moduleHierarchy/imports"};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__0 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__0_value;
static const lean_array_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "$/lean/prepareModuleHierarchy"};
static const lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 2, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__1 = (const lean_object*)&l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImports(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImports___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "$/lean/moduleHierarchy/importedBy"};
static const lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go___closed__0 = (const lean_object*)&l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImportedBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImportedBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_Ipc_runWith___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_Ipc_runWith___redArg___closed__0 = (const lean_object*)&l_Lean_Lsp_Ipc_runWith___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdin(lean_object* v_a_5_){
_start:
{
lean_object* v_stdin_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_stdin_7_ = lean_ctor_get(v_a_5_, 0);
lean_inc(v_stdin_7_);
v___x_8_ = lean_stream_of_handle(v_stdin_7_);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdin___boxed(lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Lsp_Ipc_stdin(v_a_10_);
lean_dec_ref(v_a_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdout(lean_object* v_a_13_){
_start:
{
lean_object* v_stdout_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_stdout_15_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_stdout_15_);
v___x_16_ = lean_stream_of_handle(v_stdout_15_);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_stdout___boxed(lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Lsp_Ipc_stdout(v_a_18_);
lean_dec_ref(v_a_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___redArg(lean_object* v_inst_21_, lean_object* v_r_22_, lean_object* v_a_23_){
_start:
{
lean_object* v___x_25_; lean_object* v_a_26_; lean_object* v___x_27_; 
v___x_25_ = l_Lean_Lsp_Ipc_stdin(v_a_23_);
v_a_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc(v_a_26_);
lean_dec_ref(v___x_25_);
v___x_27_ = l_Lean_IO_FS_Stream_writeLspRequest___redArg(v_inst_21_, v_a_26_, v_r_22_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___redArg___boxed(lean_object* v_inst_28_, lean_object* v_r_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Lsp_Ipc_writeRequest___redArg(v_inst_28_, v_r_29_, v_a_30_);
lean_dec_ref(v_a_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest(lean_object* v_00_u03b1_33_, lean_object* v_inst_34_, lean_object* v_r_35_, lean_object* v_a_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Lsp_Ipc_writeRequest___redArg(v_inst_34_, v_r_35_, v_a_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___boxed(lean_object* v_00_u03b1_39_, lean_object* v_inst_40_, lean_object* v_r_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_Lsp_Ipc_writeRequest(v_00_u03b1_39_, v_inst_40_, v_r_41_, v_a_42_);
lean_dec_ref(v_a_42_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___redArg(lean_object* v_inst_45_, lean_object* v_n_46_, lean_object* v_a_47_){
_start:
{
lean_object* v___x_49_; lean_object* v_a_50_; lean_object* v___x_51_; 
v___x_49_ = l_Lean_Lsp_Ipc_stdin(v_a_47_);
v_a_50_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_a_50_);
lean_dec_ref(v___x_49_);
v___x_51_ = l_Lean_IO_FS_Stream_writeLspNotification___redArg(v_inst_45_, v_a_50_, v_n_46_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___redArg___boxed(lean_object* v_inst_52_, lean_object* v_n_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Lsp_Ipc_writeNotification___redArg(v_inst_52_, v_n_53_, v_a_54_);
lean_dec_ref(v_a_54_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification(lean_object* v_00_u03b1_57_, lean_object* v_inst_58_, lean_object* v_n_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Lsp_Ipc_writeNotification___redArg(v_inst_58_, v_n_59_, v_a_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeNotification___boxed(lean_object* v_00_u03b1_63_, lean_object* v_inst_64_, lean_object* v_n_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_Lsp_Ipc_writeNotification(v_00_u03b1_63_, v_inst_64_, v_n_65_, v_a_66_);
lean_dec_ref(v_a_66_);
return v_res_68_;
}
}
static lean_object* _init_l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___closed__0(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = l_instInhabitedError;
v___x_70_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_70_, 0, lean_box(0));
lean_closure_set(v___x_70_, 1, lean_box(0));
lean_closure_set(v___x_70_, 2, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2(lean_object* v_msg_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; lean_object* v___x_3064__overap_76_; lean_object* v___x_77_; 
v___x_74_ = lean_obj_once(&l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___closed__0, &l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___closed__0_once, _init_l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___closed__0);
v___f_75_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_75_, 0, v___x_74_);
v___x_3064__overap_76_ = lean_panic_fn_borrowed(v___f_75_, v_msg_71_);
lean_dec_ref(v___f_75_);
lean_inc_ref(v___y_72_);
v___x_77_ = lean_apply_2(v___x_3064__overap_76_, v___y_72_, lean_box(0));
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2___boxed(lean_object* v_msg_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2(v_msg_78_, v___y_79_);
lean_dec_ref(v___y_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspNotification___at___00Lean_Lsp_Ipc_shutdown_spec__1(lean_object* v_h_82_, lean_object* v_n_83_){
_start:
{
lean_object* v_method_85_; lean_object* v_param_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_106_; 
v_method_85_ = lean_ctor_get(v_n_83_, 0);
v_param_86_ = lean_ctor_get(v_n_83_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v_n_83_);
if (v_isSharedCheck_106_ == 0)
{
v___x_88_ = v_n_83_;
v_isShared_89_ = v_isSharedCheck_106_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_param_86_);
lean_inc(v_method_85_);
lean_dec(v_n_83_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_106_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___y_91_; lean_object* v___x_96_; 
v___x_96_ = l_Lean_Json_Structured_fromJson_x3f(v_param_86_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v___x_97_; 
lean_dec_ref_known(v___x_96_, 1);
v___x_97_ = lean_box(0);
v___y_91_ = v___x_97_;
goto v___jp_90_;
}
else
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
v_a_98_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v___x_96_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
v___y_91_ = v___x_103_;
goto v___jp_90_;
}
}
}
v___jp_90_:
{
lean_object* v___x_93_; 
if (v_isShared_89_ == 0)
{
lean_ctor_set_tag(v___x_88_, 1);
lean_ctor_set(v___x_88_, 1, v___y_91_);
v___x_93_ = v___x_88_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_method_85_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v___y_91_);
v___x_93_ = v_reuseFailAlloc_95_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_82_, v___x_93_);
return v___x_94_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspNotification___at___00Lean_Lsp_Ipc_shutdown_spec__1___boxed(lean_object* v_h_107_, lean_object* v_n_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_IO_FS_Stream_writeLspNotification___at___00Lean_Lsp_Ipc_shutdown_spec__1(v_h_107_, v_n_108_);
return v_res_110_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_118_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__4));
v___x_119_ = lean_unsigned_to_nat(6u);
v___x_120_ = lean_unsigned_to_nat(57u);
v___x_121_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__3));
v___x_122_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__2));
v___x_123_ = l_mkPanicMessageWithDecl(v___x_122_, v___x_121_, v___x_120_, v___x_119_, v___x_118_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg(lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v___x_130_, lean_object* v_requestNo_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_box(0);
lean_inc_ref(v_a_128_);
v___x_135_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_128_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_195_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_195_ == 0)
{
v___x_138_ = v___x_135_;
v_isShared_139_ = v_isSharedCheck_195_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_195_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
if (lean_obj_tag(v_a_136_) == 2)
{
lean_object* v_id_151_; lean_object* v_result_152_; uint8_t v___x_153_; 
v_id_151_ = lean_ctor_get(v_a_136_, 0);
lean_inc(v_id_151_);
v_result_152_ = lean_ctor_get(v_a_136_, 1);
lean_inc(v_result_152_);
lean_dec_ref_known(v_a_136_, 2);
v___x_153_ = l_Lean_Json_isNull(v_result_152_);
lean_dec(v_result_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec(v_id_151_);
lean_del_object(v___x_138_);
v___x_154_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__5, &l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__5);
v___x_155_ = l_panic___at___00Lean_Lsp_Ipc_shutdown_spec__2(v___x_154_, v___y_132_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_165_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_165_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_165_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_165_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
if (lean_obj_tag(v_a_156_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_162_; 
lean_dec(v_requestNo_131_);
lean_dec_ref(v_a_129_);
lean_dec_ref(v_a_128_);
v_a_160_ = lean_ctor_get(v_a_156_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v_a_156_, 1);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v_a_160_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
else
{
lean_dec_ref_known(v_a_156_, 1);
lean_del_object(v___x_158_);
goto _start;
}
}
}
else
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
lean_dec(v_requestNo_131_);
lean_dec_ref(v_a_129_);
lean_dec_ref(v_a_128_);
v_a_166_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_173_ == 0)
{
v___x_168_ = v___x_155_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_155_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_a_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
else
{
uint8_t v___x_174_; 
lean_dec_ref(v_a_128_);
v___x_174_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_151_, v___x_130_);
if (v___x_174_ == 0)
{
if (v___x_153_ == 0)
{
lean_dec(v_id_151_);
lean_del_object(v___x_138_);
lean_dec(v_requestNo_131_);
goto v___jp_140_;
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___y_181_; 
lean_dec_ref(v_a_129_);
v___x_175_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
v___x_176_ = l_Nat_reprFast(v_requestNo_131_);
v___x_177_ = lean_string_append(v___x_175_, v___x_176_);
lean_dec_ref(v___x_176_);
v___x_178_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_179_ = lean_string_append(v___x_177_, v___x_178_);
switch(lean_obj_tag(v_id_151_))
{
case 0:
{
lean_object* v_s_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_s_187_ = lean_ctor_get(v_id_151_, 0);
lean_inc_ref(v_s_187_);
lean_dec_ref_known(v_id_151_, 1);
v___x_188_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_189_ = lean_string_append(v___x_188_, v_s_187_);
lean_dec_ref(v_s_187_);
v___x_190_ = lean_string_append(v___x_189_, v___x_188_);
v___y_181_ = v___x_190_;
goto v___jp_180_;
}
case 1:
{
lean_object* v_n_191_; lean_object* v___x_192_; 
v_n_191_ = lean_ctor_get(v_id_151_, 0);
lean_inc_ref(v_n_191_);
lean_dec_ref_known(v_id_151_, 1);
v___x_192_ = l_Lean_JsonNumber_toString(v_n_191_);
v___y_181_ = v___x_192_;
goto v___jp_180_;
}
default: 
{
lean_object* v___x_193_; 
v___x_193_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_181_ = v___x_193_;
goto v___jp_180_;
}
}
v___jp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_182_ = lean_string_append(v___x_179_, v___y_181_);
lean_dec_ref(v___y_181_);
v___x_183_ = lean_mk_io_user_error(v___x_182_);
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 1);
lean_ctor_set(v___x_138_, 0, v___x_183_);
v___x_185_ = v___x_138_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
else
{
lean_dec(v_id_151_);
lean_del_object(v___x_138_);
lean_dec(v_requestNo_131_);
goto v___jp_140_;
}
}
}
else
{
lean_del_object(v___x_138_);
lean_dec(v_a_136_);
goto _start;
}
v___jp_140_:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__1));
v___x_142_ = l_Lean_IO_FS_Stream_writeLspNotification___at___00Lean_Lsp_Ipc_shutdown_spec__1(v_a_129_, v___x_141_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_149_ == 0)
{
lean_object* v_unused_150_; 
v_unused_150_ = lean_ctor_get(v___x_142_, 0);
lean_dec(v_unused_150_);
v___x_144_ = v___x_142_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_dec(v___x_142_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_134_);
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_134_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
return v___x_142_;
}
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
lean_dec(v_requestNo_131_);
lean_dec_ref(v_a_129_);
lean_dec_ref(v_a_128_);
v_a_196_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_135_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_135_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___boxed(lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v___x_206_, lean_object* v_requestNo_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg(v_a_204_, v_a_205_, v___x_206_, v_requestNo_207_, v___y_208_);
lean_dec_ref(v___y_208_);
lean_dec(v___x_206_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0(lean_object* v_h_211_, lean_object* v_r_212_){
_start:
{
lean_object* v_id_214_; lean_object* v_method_215_; lean_object* v_param_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_236_; 
v_id_214_ = lean_ctor_get(v_r_212_, 0);
v_method_215_ = lean_ctor_get(v_r_212_, 1);
v_param_216_ = lean_ctor_get(v_r_212_, 2);
v_isSharedCheck_236_ = !lean_is_exclusive(v_r_212_);
if (v_isSharedCheck_236_ == 0)
{
v___x_218_ = v_r_212_;
v_isShared_219_ = v_isSharedCheck_236_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_param_216_);
lean_inc(v_method_215_);
lean_inc(v_id_214_);
lean_dec(v_r_212_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_236_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___y_221_; lean_object* v___x_226_; 
v___x_226_ = l_Lean_Json_Structured_fromJson_x3f(v_param_216_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v___x_227_; 
lean_dec_ref_known(v___x_226_, 1);
v___x_227_ = lean_box(0);
v___y_221_ = v___x_227_;
goto v___jp_220_;
}
else
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_a_228_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_226_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_226_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
v___y_221_ = v___x_233_;
goto v___jp_220_;
}
}
}
v___jp_220_:
{
lean_object* v___x_223_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 2, v___y_221_);
v___x_223_ = v___x_218_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_id_214_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v_method_215_);
lean_ctor_set(v_reuseFailAlloc_225_, 2, v___y_221_);
v___x_223_ = v_reuseFailAlloc_225_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_211_, v___x_223_);
return v___x_224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0___boxed(lean_object* v_h_237_, lean_object* v_r_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0(v_h_237_, v_r_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_shutdown(lean_object* v_requestNo_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___x_245_; lean_object* v_a_246_; lean_object* v___x_247_; lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_270_; 
v___x_245_ = l_Lean_Lsp_Ipc_stdout(v_a_243_);
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref(v___x_245_);
v___x_247_ = l_Lean_Lsp_Ipc_stdin(v_a_243_);
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_270_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_270_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_270_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_254_; 
lean_inc(v_requestNo_242_);
v___x_252_ = l_Lean_JsonNumber_fromNat(v_requestNo_242_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 1);
lean_ctor_set(v___x_250_, 0, v___x_252_);
v___x_254_ = v___x_250_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_252_);
v___x_254_ = v_reuseFailAlloc_269_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_255_ = ((lean_object*)(l_Lean_Lsp_Ipc_shutdown___closed__0));
v___x_256_ = lean_box(0);
lean_inc_ref(v___x_254_);
v___x_257_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_257_, 0, v___x_254_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
lean_ctor_set(v___x_257_, 2, v___x_256_);
lean_inc(v_a_248_);
v___x_258_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0(v_a_248_, v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref_known(v___x_258_, 1);
v___x_259_ = lean_box(0);
v___x_260_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg(v_a_246_, v_a_248_, v___x_254_, v_requestNo_242_, v_a_243_);
lean_dec_ref(v___x_254_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_267_; 
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; 
v_unused_268_ = lean_ctor_get(v___x_260_, 0);
lean_dec(v_unused_268_);
v___x_262_ = v___x_260_;
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
else
{
lean_dec(v___x_260_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 0, v___x_259_);
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_259_);
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
return v___x_260_;
}
}
else
{
lean_dec_ref(v___x_254_);
lean_dec(v_a_248_);
lean_dec(v_a_246_);
lean_dec(v_requestNo_242_);
return v___x_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_shutdown___boxed(lean_object* v_requestNo_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Lsp_Ipc_shutdown(v_requestNo_271_, v_a_272_);
lean_dec_ref(v_a_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_shutdown_spec__0_spec__0(lean_object* v_v_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_Json_Structured_fromJson_x3f(v_v_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3(lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v___x_279_, lean_object* v_requestNo_280_, lean_object* v_inst_281_, lean_object* v_a_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg(v_a_277_, v_a_278_, v___x_279_, v_requestNo_280_, v___y_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___boxed(lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v___x_288_, lean_object* v_requestNo_289_, lean_object* v_inst_290_, lean_object* v_a_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3(v_a_286_, v_a_287_, v___x_288_, v_requestNo_289_, v_inst_290_, v_a_291_, v___y_292_);
lean_dec_ref(v___y_292_);
lean_dec(v___x_288_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readMessage(lean_object* v_a_295_){
_start:
{
lean_object* v___x_297_; lean_object* v_a_298_; lean_object* v___x_299_; 
v___x_297_ = l_Lean_Lsp_Ipc_stdout(v_a_295_);
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref(v___x_297_);
v___x_299_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readMessage___boxed(lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Lsp_Ipc_readMessage(v_a_300_);
lean_dec_ref(v_a_300_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs___redArg(lean_object* v_expectedMethod_303_, lean_object* v_inst_304_, lean_object* v_a_305_){
_start:
{
lean_object* v___x_307_; lean_object* v_a_308_; lean_object* v___x_309_; 
v___x_307_ = l_Lean_Lsp_Ipc_stdout(v_a_305_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_308_);
lean_dec_ref(v___x_307_);
v___x_309_ = l_Lean_IO_FS_Stream_readLspRequestAs___redArg(v_a_308_, v_expectedMethod_303_, v_inst_304_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs___redArg___boxed(lean_object* v_expectedMethod_310_, lean_object* v_inst_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Lsp_Ipc_readRequestAs___redArg(v_expectedMethod_310_, v_inst_311_, v_a_312_);
lean_dec_ref(v_a_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs(lean_object* v_expectedMethod_315_, lean_object* v_00_u03b1_316_, lean_object* v_inst_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_Lsp_Ipc_readRequestAs___redArg(v_expectedMethod_315_, v_inst_317_, v_a_318_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readRequestAs___boxed(lean_object* v_expectedMethod_321_, lean_object* v_00_u03b1_322_, lean_object* v_inst_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_Lsp_Ipc_readRequestAs(v_expectedMethod_321_, v_00_u03b1_322_, v_inst_323_, v_a_324_);
lean_dec_ref(v_a_324_);
return v_res_326_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__14(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_unsigned_to_nat(32700u);
v___x_345_ = lean_nat_to_int(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__15(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__14, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__14_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__14);
v___x_347_ = lean_int_neg(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__16(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__15, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__15_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__15);
v___x_349_ = l_Lean_JsonNumber_fromInt(v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__16, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__16_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__16);
v___x_351_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__18(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(32600u);
v___x_353_ = lean_nat_to_int(v___x_352_);
return v___x_353_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__19(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__18, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__18_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__18);
v___x_355_ = lean_int_neg(v___x_354_);
return v___x_355_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__20(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__19, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__19_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__19);
v___x_357_ = l_Lean_JsonNumber_fromInt(v___x_356_);
return v___x_357_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__20, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__20_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__20);
v___x_359_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__22(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(32601u);
v___x_361_ = lean_nat_to_int(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__23(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__22, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__22_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__22);
v___x_363_ = lean_int_neg(v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__24(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__23, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__23_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__23);
v___x_365_ = l_Lean_JsonNumber_fromInt(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__24, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__24_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__24);
v___x_367_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
return v___x_367_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__26(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_unsigned_to_nat(32602u);
v___x_369_ = lean_nat_to_int(v___x_368_);
return v___x_369_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__27(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__26, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__26_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__26);
v___x_371_ = lean_int_neg(v___x_370_);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__28(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__27, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__27_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__27);
v___x_373_ = l_Lean_JsonNumber_fromInt(v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__28, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__28_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__28);
v___x_375_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
return v___x_375_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__30(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_unsigned_to_nat(32603u);
v___x_377_ = lean_nat_to_int(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__31(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__30, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__30_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__30);
v___x_379_ = lean_int_neg(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__32(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__31, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__31_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__31);
v___x_381_ = l_Lean_JsonNumber_fromInt(v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__32, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__32_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__32);
v___x_383_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__34(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_unsigned_to_nat(32002u);
v___x_385_ = lean_nat_to_int(v___x_384_);
return v___x_385_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__35(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__34, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__34_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__34);
v___x_387_ = lean_int_neg(v___x_386_);
return v___x_387_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__36(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__35, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__35_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__35);
v___x_389_ = l_Lean_JsonNumber_fromInt(v___x_388_);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__36, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__36_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__36);
v___x_391_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__38(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_unsigned_to_nat(32001u);
v___x_393_ = lean_nat_to_int(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__39(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__38, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__38_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__38);
v___x_395_ = lean_int_neg(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__40(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__39, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__39_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__39);
v___x_397_ = l_Lean_JsonNumber_fromInt(v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__40, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__40_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__40);
v___x_399_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__42(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(32801u);
v___x_401_ = lean_nat_to_int(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__43(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__42, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__42_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__42);
v___x_403_ = lean_int_neg(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__44(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__43, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__43_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__43);
v___x_405_ = l_Lean_JsonNumber_fromInt(v___x_404_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__44, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__44_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__44);
v___x_407_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__46(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_unsigned_to_nat(32800u);
v___x_409_ = lean_nat_to_int(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__47(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__46, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__46_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__46);
v___x_411_ = lean_int_neg(v___x_410_);
return v___x_411_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__48(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__47, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__47_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__47);
v___x_413_ = l_Lean_JsonNumber_fromInt(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__48, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__48_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__48);
v___x_415_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__50(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_unsigned_to_nat(32900u);
v___x_417_ = lean_nat_to_int(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__51(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__50, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__50_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__50);
v___x_419_ = lean_int_neg(v___x_418_);
return v___x_419_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__52(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__51, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__51_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__51);
v___x_421_ = l_Lean_JsonNumber_fromInt(v___x_420_);
return v___x_421_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__52, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__52_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__52);
v___x_423_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__54(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(32901u);
v___x_425_ = lean_nat_to_int(v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__55(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__54, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__54_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__54);
v___x_427_ = lean_int_neg(v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__56(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__55, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__55_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__55);
v___x_429_ = l_Lean_JsonNumber_fromInt(v___x_428_);
return v___x_429_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__56, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__56_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__56);
v___x_431_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__58(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_unsigned_to_nat(32902u);
v___x_433_ = lean_nat_to_int(v___x_432_);
return v___x_433_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__59(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__58, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__58_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__58);
v___x_435_ = lean_int_neg(v___x_434_);
return v___x_435_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__60(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__59, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__59_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__59);
v___x_437_ = l_Lean_JsonNumber_fromInt(v___x_436_);
return v___x_437_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__60, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__60_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__60);
v___x_439_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg(lean_object* v_expectedID_440_, lean_object* v_inst_441_, lean_object* v_a_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_Lsp_Ipc_stdout(v_a_442_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_589_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_589_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_589_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_589_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_445_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_580_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_580_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_580_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_580_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___y_455_; lean_object* v___y_456_; 
switch(lean_obj_tag(v_a_450_))
{
case 2:
{
lean_object* v_id_462_; lean_object* v_result_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_507_; 
v_id_462_ = lean_ctor_get(v_a_450_, 0);
v_result_463_ = lean_ctor_get(v_a_450_, 1);
v_isSharedCheck_507_ = !lean_is_exclusive(v_a_450_);
if (v_isSharedCheck_507_ == 0)
{
v___x_465_ = v_a_450_;
v_isShared_466_ = v_isSharedCheck_507_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_result_463_);
lean_inc(v_id_462_);
lean_dec(v_a_450_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_507_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
uint8_t v___x_467_; 
v___x_467_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_462_, v_expectedID_440_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___y_470_; 
lean_del_object(v___x_465_);
lean_dec(v_result_463_);
lean_del_object(v___x_447_);
lean_dec_ref(v_inst_441_);
v___x_468_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
switch(lean_obj_tag(v_expectedID_440_))
{
case 0:
{
lean_object* v_s_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_s_481_ = lean_ctor_get(v_expectedID_440_, 0);
lean_inc_ref(v_s_481_);
lean_dec_ref_known(v_expectedID_440_, 1);
v___x_482_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_483_ = lean_string_append(v___x_482_, v_s_481_);
lean_dec_ref(v_s_481_);
v___x_484_ = lean_string_append(v___x_483_, v___x_482_);
v___y_470_ = v___x_484_;
goto v___jp_469_;
}
case 1:
{
lean_object* v_n_485_; lean_object* v___x_486_; 
v_n_485_ = lean_ctor_get(v_expectedID_440_, 0);
lean_inc_ref(v_n_485_);
lean_dec_ref_known(v_expectedID_440_, 1);
v___x_486_ = l_Lean_JsonNumber_toString(v_n_485_);
v___y_470_ = v___x_486_;
goto v___jp_469_;
}
default: 
{
lean_object* v___x_487_; 
v___x_487_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_470_ = v___x_487_;
goto v___jp_469_;
}
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_string_append(v___x_468_, v___y_470_);
lean_dec_ref(v___y_470_);
v___x_472_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_473_ = lean_string_append(v___x_471_, v___x_472_);
switch(lean_obj_tag(v_id_462_))
{
case 0:
{
lean_object* v_s_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_s_474_ = lean_ctor_get(v_id_462_, 0);
lean_inc_ref(v_s_474_);
lean_dec_ref_known(v_id_462_, 1);
v___x_475_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_476_ = lean_string_append(v___x_475_, v_s_474_);
lean_dec_ref(v_s_474_);
v___x_477_ = lean_string_append(v___x_476_, v___x_475_);
v___y_455_ = v___x_473_;
v___y_456_ = v___x_477_;
goto v___jp_454_;
}
case 1:
{
lean_object* v_n_478_; lean_object* v___x_479_; 
v_n_478_ = lean_ctor_get(v_id_462_, 0);
lean_inc_ref(v_n_478_);
lean_dec_ref_known(v_id_462_, 1);
v___x_479_ = l_Lean_JsonNumber_toString(v_n_478_);
v___y_455_ = v___x_473_;
v___y_456_ = v___x_479_;
goto v___jp_454_;
}
default: 
{
lean_object* v___x_480_; 
v___x_480_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_455_ = v___x_473_;
v___y_456_ = v___x_480_;
goto v___jp_454_;
}
}
}
}
else
{
lean_object* v___x_488_; 
lean_dec(v_id_462_);
lean_del_object(v___x_452_);
lean_inc(v_result_463_);
v___x_488_ = lean_apply_1(v_inst_441_, v_result_463_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_498_; 
lean_del_object(v___x_465_);
lean_dec(v_expectedID_440_);
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0));
v___x_491_ = l_Lean_Json_compress(v_result_463_);
v___x_492_ = lean_string_append(v___x_490_, v___x_491_);
lean_dec_ref(v___x_491_);
v___x_493_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1));
v___x_494_ = lean_string_append(v___x_492_, v___x_493_);
v___x_495_ = lean_string_append(v___x_494_, v_a_489_);
lean_dec(v_a_489_);
v___x_496_ = lean_mk_io_user_error(v___x_495_);
if (v_isShared_448_ == 0)
{
lean_ctor_set_tag(v___x_447_, 1);
lean_ctor_set(v___x_447_, 0, v___x_496_);
v___x_498_ = v___x_447_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; 
lean_dec(v_result_463_);
v_a_500_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_488_, 1);
if (v_isShared_466_ == 0)
{
lean_ctor_set_tag(v___x_465_, 0);
lean_ctor_set(v___x_465_, 1, v_a_500_);
lean_ctor_set(v___x_465_, 0, v_expectedID_440_);
v___x_502_ = v___x_465_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_expectedID_440_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v_a_500_);
v___x_502_ = v_reuseFailAlloc_506_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_504_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_502_);
v___x_504_ = v___x_447_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
}
case 3:
{
lean_object* v_id_508_; uint8_t v_code_509_; lean_object* v_message_510_; lean_object* v_data_x3f_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___x_544_; lean_object* v___y_546_; 
lean_del_object(v___x_452_);
lean_dec_ref(v_inst_441_);
lean_dec(v_expectedID_440_);
v_id_508_ = lean_ctor_get(v_a_450_, 0);
lean_inc(v_id_508_);
v_code_509_ = lean_ctor_get_uint8(v_a_450_, sizeof(void*)*3);
v_message_510_ = lean_ctor_get(v_a_450_, 1);
lean_inc_ref(v_message_510_);
v_data_x3f_511_ = lean_ctor_get(v_a_450_, 2);
lean_inc(v_data_x3f_511_);
lean_dec_ref_known(v_a_450_, 3);
v___x_512_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2));
v___x_513_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__3));
v___x_514_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7));
v___x_544_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11));
switch(lean_obj_tag(v_id_508_))
{
case 0:
{
lean_object* v_s_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
v_s_562_ = lean_ctor_get(v_id_508_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v_id_508_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v_id_508_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_s_562_);
lean_dec(v_id_508_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set_tag(v___x_564_, 3);
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_s_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
v___y_546_ = v___x_567_;
goto v___jp_545_;
}
}
}
case 1:
{
lean_object* v_n_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
v_n_570_ = lean_ctor_get(v_id_508_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_id_508_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v_id_508_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_n_570_);
lean_dec(v_id_508_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 2);
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_n_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
v___y_546_ = v___x_575_;
goto v___jp_545_;
}
}
}
default: 
{
lean_object* v___x_578_; 
v___x_578_ = lean_box(0);
v___y_546_ = v___x_578_;
goto v___jp_545_;
}
}
v___jp_515_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
lean_inc(v___y_519_);
lean_inc_ref(v___y_516_);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v___y_516_);
lean_ctor_set(v___x_520_, 1, v___y_519_);
v___x_521_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8));
v___x_522_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_522_, 0, v_message_510_);
v___x_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = lean_box(0);
v___x_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_520_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9));
v___x_528_ = l_Lean_Json_opt___redArg(v___x_513_, v___x_527_, v_data_x3f_511_);
v___x_529_ = l_List_appendTR___redArg(v___x_526_, v___x_528_);
v___x_530_ = l_Lean_Json_mkObj(v___x_529_);
lean_dec(v___x_529_);
lean_inc_ref(v___y_518_);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v___y_518_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v___x_524_);
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___y_517_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_514_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_535_ = l_Lean_Json_mkObj(v___x_534_);
lean_dec_ref_known(v___x_534_, 2);
v___x_536_ = l_Lean_Json_compress(v___x_535_);
v___x_537_ = lean_string_append(v___x_512_, v___x_536_);
lean_dec_ref(v___x_536_);
v___x_538_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
v___x_540_ = lean_mk_io_user_error(v___x_539_);
if (v_isShared_448_ == 0)
{
lean_ctor_set_tag(v___x_447_, 1);
lean_ctor_set(v___x_447_, 0, v___x_540_);
v___x_542_ = v___x_447_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_540_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_544_);
lean_ctor_set(v___x_547_, 1, v___y_546_);
v___x_548_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12));
v___x_549_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13));
switch(v_code_509_)
{
case 0:
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_550_;
goto v___jp_515_;
}
case 1:
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_551_;
goto v___jp_515_;
}
case 2:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_552_;
goto v___jp_515_;
}
case 3:
{
lean_object* v___x_553_; 
v___x_553_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_553_;
goto v___jp_515_;
}
case 4:
{
lean_object* v___x_554_; 
v___x_554_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_554_;
goto v___jp_515_;
}
case 5:
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_555_;
goto v___jp_515_;
}
case 6:
{
lean_object* v___x_556_; 
v___x_556_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_556_;
goto v___jp_515_;
}
case 7:
{
lean_object* v___x_557_; 
v___x_557_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_557_;
goto v___jp_515_;
}
case 8:
{
lean_object* v___x_558_; 
v___x_558_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_558_;
goto v___jp_515_;
}
case 9:
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_559_;
goto v___jp_515_;
}
case 10:
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_560_;
goto v___jp_515_;
}
default: 
{
lean_object* v___x_561_; 
v___x_561_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61);
v___y_516_ = v___x_549_;
v___y_517_ = v___x_547_;
v___y_518_ = v___x_548_;
v___y_519_ = v___x_561_;
goto v___jp_515_;
}
}
}
}
default: 
{
lean_del_object(v___x_452_);
lean_dec(v_a_450_);
lean_del_object(v___x_447_);
goto _start;
}
}
v___jp_454_:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_457_ = lean_string_append(v___y_455_, v___y_456_);
lean_dec_ref(v___y_456_);
v___x_458_ = lean_mk_io_user_error(v___x_457_);
if (v_isShared_453_ == 0)
{
lean_ctor_set_tag(v___x_452_, 1);
lean_ctor_set(v___x_452_, 0, v___x_458_);
v___x_460_ = v___x_452_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
lean_del_object(v___x_447_);
lean_dec_ref(v_inst_441_);
lean_dec(v_expectedID_440_);
v_a_581_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_449_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_449_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref(v_inst_441_);
lean_dec(v_expectedID_440_);
v_a_590_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_444_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_444_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___redArg___boxed(lean_object* v_expectedID_598_, lean_object* v_inst_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Lsp_Ipc_readResponseAs___redArg(v_expectedID_598_, v_inst_599_, v_a_600_);
lean_dec_ref(v_a_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs(lean_object* v_expectedID_603_, lean_object* v_00_u03b1_604_, lean_object* v_inst_605_, lean_object* v_a_606_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_Lsp_Ipc_readResponseAs___redArg(v_expectedID_603_, v_inst_605_, v_a_606_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___boxed(lean_object* v_expectedID_609_, lean_object* v_00_u03b1_610_, lean_object* v_inst_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_Lsp_Ipc_readResponseAs(v_expectedID_609_, v_00_u03b1_610_, v_inst_611_, v_a_612_);
lean_dec_ref(v_a_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit(lean_object* v_a_615_){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(l_Lean_Lsp_Ipc_ipcStdioConfig));
v___x_618_ = lean_io_process_child_wait(v___x_617_, v_a_615_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForExit___boxed(lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_Lsp_Ipc_waitForExit(v_a_619_);
lean_dec_ref(v_a_619_);
return v_res_621_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___lam__0(lean_object* v_d1_622_, lean_object* v_d2_623_){
_start:
{
uint8_t v___y_625_; lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_628_ = l_Lean_Lsp_DiagnosticWith_fullRange___redArg(v_d1_622_);
v___x_629_ = l_Lean_Lsp_DiagnosticWith_fullRange___redArg(v_d2_623_);
v___x_630_ = l_Lean_Lsp_instOrdRange_ord(v___x_628_, v___x_629_);
lean_dec_ref(v___x_629_);
lean_dec_ref(v___x_628_);
if (v___x_630_ == 1)
{
lean_object* v_message_631_; lean_object* v_message_632_; uint8_t v___x_633_; 
v_message_631_ = lean_ctor_get(v_d1_622_, 6);
v_message_632_ = lean_ctor_get(v_d2_623_, 6);
v___x_633_ = lean_string_compare(v_message_631_, v_message_632_);
v___y_625_ = v___x_633_;
goto v___jp_624_;
}
else
{
v___y_625_ = v___x_630_;
goto v___jp_624_;
}
v___jp_624_:
{
if (v___y_625_ == 2)
{
uint8_t v___x_626_; 
v___x_626_ = 0;
return v___x_626_;
}
else
{
uint8_t v___x_627_; 
v___x_627_ = 1;
return v___x_627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___lam__0___boxed(lean_object* v_d1_634_, lean_object* v_d2_635_){
_start:
{
uint8_t v_res_636_; lean_object* v_r_637_; 
v_res_636_ = l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___lam__0(v_d1_634_, v_d2_635_);
lean_dec_ref(v_d2_635_);
lean_dec_ref(v_d1_634_);
v_r_637_ = lean_box(v_res_636_);
return v_r_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams(lean_object* v_p_639_){
_start:
{
lean_object* v_uri_640_; lean_object* v_version_x3f_641_; lean_object* v_isIncremental_x3f_642_; lean_object* v_diagnostics_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_654_; 
v_uri_640_ = lean_ctor_get(v_p_639_, 0);
v_version_x3f_641_ = lean_ctor_get(v_p_639_, 1);
v_isIncremental_x3f_642_ = lean_ctor_get(v_p_639_, 2);
v_diagnostics_643_ = lean_ctor_get(v_p_639_, 3);
v_isSharedCheck_654_ = !lean_is_exclusive(v_p_639_);
if (v_isSharedCheck_654_ == 0)
{
v___x_645_ = v_p_639_;
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_diagnostics_643_);
lean_inc(v_isIncremental_x3f_642_);
lean_inc(v_version_x3f_641_);
lean_inc(v_uri_640_);
lean_dec(v_p_639_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___f_647_; lean_object* v___x_648_; lean_object* v_sorted_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
v___f_647_ = ((lean_object*)(l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams___closed__0));
v___x_648_ = lean_array_to_list(v_diagnostics_643_);
v_sorted_649_ = l_List_mergeSort___redArg(v___x_648_, v___f_647_);
v___x_650_ = lean_array_mk(v_sorted_649_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 3, v___x_650_);
v___x_652_ = v___x_645_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_uri_640_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_version_x3f_641_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v_isIncremental_x3f_642_);
lean_ctor_set(v_reuseFailAlloc_653_, 3, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams(lean_object* v_prev_x3f_658_, lean_object* v_next_659_){
_start:
{
lean_object* v_uri_660_; lean_object* v_version_x3f_661_; lean_object* v_isIncremental_x3f_662_; lean_object* v_diagnostics_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_686_; 
v_uri_660_ = lean_ctor_get(v_next_659_, 0);
v_version_x3f_661_ = lean_ctor_get(v_next_659_, 1);
v_isIncremental_x3f_662_ = lean_ctor_get(v_next_659_, 2);
v_diagnostics_663_ = lean_ctor_get(v_next_659_, 3);
v_isSharedCheck_686_ = !lean_is_exclusive(v_next_659_);
if (v_isSharedCheck_686_ == 0)
{
v___x_665_ = v_next_659_;
v_isShared_666_ = v_isSharedCheck_686_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_diagnostics_663_);
lean_inc(v_isIncremental_x3f_662_);
lean_inc(v_version_x3f_661_);
lean_inc(v_uri_660_);
lean_dec(v_next_659_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_686_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v_replace_669_; 
v___x_667_ = ((lean_object*)(l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams___closed__0));
lean_inc_ref(v_diagnostics_663_);
lean_inc(v_version_x3f_661_);
lean_inc_ref(v_uri_660_);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 2, v___x_667_);
v_replace_669_ = v___x_665_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_uri_660_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_version_x3f_661_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_diagnostics_663_);
v_replace_669_ = v_reuseFailAlloc_685_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
if (lean_obj_tag(v_prev_x3f_658_) == 1)
{
if (lean_obj_tag(v_isIncremental_x3f_662_) == 0)
{
lean_dec_ref_known(v_prev_x3f_658_, 1);
lean_dec_ref(v_diagnostics_663_);
lean_dec(v_version_x3f_661_);
lean_dec_ref(v_uri_660_);
return v_replace_669_;
}
else
{
lean_object* v_val_670_; uint8_t v___x_671_; 
v_val_670_ = lean_ctor_get(v_isIncremental_x3f_662_, 0);
lean_inc(v_val_670_);
lean_dec_ref_known(v_isIncremental_x3f_662_, 1);
v___x_671_ = lean_unbox(v_val_670_);
lean_dec(v_val_670_);
if (v___x_671_ == 0)
{
lean_dec_ref_known(v_prev_x3f_658_, 1);
lean_dec_ref(v_diagnostics_663_);
lean_dec(v_version_x3f_661_);
lean_dec_ref(v_uri_660_);
return v_replace_669_;
}
else
{
lean_object* v_val_672_; lean_object* v_diagnostics_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v_replace_669_);
v_val_672_ = lean_ctor_get(v_prev_x3f_658_, 0);
lean_inc(v_val_672_);
lean_dec_ref_known(v_prev_x3f_658_, 1);
v_diagnostics_673_ = lean_ctor_get(v_val_672_, 3);
v_isSharedCheck_681_ = !lean_is_exclusive(v_val_672_);
if (v_isSharedCheck_681_ == 0)
{
lean_object* v_unused_682_; lean_object* v_unused_683_; lean_object* v_unused_684_; 
v_unused_682_ = lean_ctor_get(v_val_672_, 2);
lean_dec(v_unused_682_);
v_unused_683_ = lean_ctor_get(v_val_672_, 1);
lean_dec(v_unused_683_);
v_unused_684_ = lean_ctor_get(v_val_672_, 0);
lean_dec(v_unused_684_);
v___x_675_ = v_val_672_;
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_diagnostics_673_);
lean_dec(v_val_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = l_Array_append___redArg(v_diagnostics_673_, v_diagnostics_663_);
lean_dec_ref(v_diagnostics_663_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 3, v___x_677_);
lean_ctor_set(v___x_675_, 2, v___x_667_);
lean_ctor_set(v___x_675_, 1, v_version_x3f_661_);
lean_ctor_set(v___x_675_, 0, v_uri_660_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_uri_660_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_version_x3f_661_);
lean_ctor_set(v_reuseFailAlloc_680_, 2, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_680_, 3, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
else
{
lean_dec_ref(v_diagnostics_663_);
lean_dec(v_isIncremental_x3f_662_);
lean_dec(v_version_x3f_661_);
lean_dec_ref(v_uri_660_);
lean_dec(v_prev_x3f_658_);
return v_replace_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop(lean_object* v_waitForDiagnosticsId_690_, lean_object* v_accumulated_x3f_691_, lean_object* v_a_692_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lean_Lsp_Ipc_readMessage(v_a_692_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_764_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_764_ == 0)
{
v___x_697_ = v___x_694_;
v_isShared_698_ = v_isSharedCheck_764_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_764_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
switch(lean_obj_tag(v_a_695_))
{
case 2:
{
lean_object* v_id_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_725_; 
v_id_699_ = lean_ctor_get(v_a_695_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_a_695_);
if (v_isSharedCheck_725_ == 0)
{
lean_object* v_unused_726_; 
v_unused_726_ = lean_ctor_get(v_a_695_, 1);
lean_dec(v_unused_726_);
v___x_701_ = v_a_695_;
v_isShared_702_ = v_isSharedCheck_725_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_id_699_);
lean_dec(v_a_695_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_725_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
uint8_t v___x_703_; 
v___x_703_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_699_, v_waitForDiagnosticsId_690_);
lean_dec(v_id_699_);
if (v___x_703_ == 0)
{
lean_del_object(v___x_701_);
lean_del_object(v___x_697_);
goto _start;
}
else
{
if (lean_obj_tag(v_accumulated_x3f_691_) == 0)
{
lean_object* v___x_705_; lean_object* v___x_707_; 
lean_del_object(v___x_701_);
v___x_705_ = lean_box(0);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_705_);
v___x_707_ = v___x_697_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
else
{
lean_object* v_val_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_724_; 
v_val_709_ = lean_ctor_get(v_accumulated_x3f_691_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_accumulated_x3f_691_);
if (v_isSharedCheck_724_ == 0)
{
v___x_711_ = v_accumulated_x3f_691_;
v_isShared_712_ = v_isSharedCheck_724_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_val_709_);
lean_dec(v_accumulated_x3f_691_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_724_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_713_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__0));
v___x_714_ = l_Lean_Lsp_Ipc_normalizePublishDiagnosticsParams(v_val_709_);
if (v_isShared_702_ == 0)
{
lean_ctor_set_tag(v___x_701_, 0);
lean_ctor_set(v___x_701_, 1, v___x_714_);
lean_ctor_set(v___x_701_, 0, v___x_713_);
v___x_716_ = v___x_701_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_714_);
v___x_716_ = v_reuseFailAlloc_723_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_718_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_716_);
v___x_718_ = v___x_711_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_716_);
v___x_718_ = v_reuseFailAlloc_722_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_720_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_718_);
v___x_720_ = v___x_697_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
}
}
}
case 3:
{
lean_object* v_id_727_; lean_object* v_message_728_; uint8_t v___x_729_; 
v_id_727_ = lean_ctor_get(v_a_695_, 0);
lean_inc(v_id_727_);
v_message_728_ = lean_ctor_get(v_a_695_, 1);
lean_inc_ref(v_message_728_);
lean_dec_ref_known(v_a_695_, 3);
v___x_729_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_727_, v_waitForDiagnosticsId_690_);
lean_dec(v_id_727_);
if (v___x_729_ == 0)
{
lean_dec_ref(v_message_728_);
lean_del_object(v___x_697_);
goto _start;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
lean_dec(v_accumulated_x3f_691_);
v___x_731_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__1));
v___x_732_ = lean_string_append(v___x_731_, v_message_728_);
lean_dec_ref(v_message_728_);
v___x_733_ = lean_mk_io_user_error(v___x_732_);
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 1);
lean_ctor_set(v___x_697_, 0, v___x_733_);
v___x_735_ = v___x_697_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
case 1:
{
lean_object* v_method_737_; lean_object* v_params_x3f_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v_method_737_ = lean_ctor_get(v_a_695_, 0);
lean_inc_ref(v_method_737_);
v_params_x3f_738_ = lean_ctor_get(v_a_695_, 1);
lean_inc(v_params_x3f_738_);
lean_dec_ref_known(v_a_695_, 2);
v___x_739_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__0));
v___x_740_ = lean_string_dec_eq(v_method_737_, v___x_739_);
lean_dec_ref(v_method_737_);
if (v___x_740_ == 0)
{
lean_dec(v_params_x3f_738_);
lean_del_object(v___x_697_);
goto _start;
}
else
{
if (lean_obj_tag(v_params_x3f_738_) == 1)
{
lean_object* v_val_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_761_; 
v_val_742_ = lean_ctor_get(v_params_x3f_738_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v_params_x3f_738_);
if (v_isSharedCheck_761_ == 0)
{
v___x_744_ = v_params_x3f_738_;
v_isShared_745_ = v_isSharedCheck_761_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_val_742_);
lean_dec(v_params_x3f_738_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_761_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = l_Lean_Json_Structured_toJson(v_val_742_);
v___x_747_ = l_Lean_Lsp_instFromJsonPublishDiagnosticsParams_fromJson(v___x_746_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
lean_del_object(v___x_744_);
lean_dec(v_accumulated_x3f_691_);
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___closed__2));
v___x_750_ = lean_string_append(v___x_749_, v_a_748_);
lean_dec(v_a_748_);
v___x_751_ = lean_mk_io_user_error(v___x_750_);
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 1);
lean_ctor_set(v___x_697_, 0, v___x_751_);
v___x_753_ = v___x_697_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
lean_del_object(v___x_697_);
v_a_755_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_747_, 1);
v___x_756_ = l_Lean_Lsp_Ipc_mergePublishDiagnosticsParams(v_accumulated_x3f_691_, v_a_755_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_756_);
v___x_758_ = v___x_744_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_756_);
v___x_758_ = v_reuseFailAlloc_760_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
v_accumulated_x3f_691_ = v___x_758_;
goto _start;
}
}
}
}
else
{
lean_dec(v_params_x3f_738_);
lean_del_object(v___x_697_);
goto _start;
}
}
}
default: 
{
lean_del_object(v___x_697_);
lean_dec(v_a_695_);
goto _start;
}
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec(v_accumulated_x3f_691_);
v_a_765_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_694_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_694_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop___boxed(lean_object* v_waitForDiagnosticsId_773_, lean_object* v_accumulated_x3f_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop(v_waitForDiagnosticsId_773_, v_accumulated_x3f_774_, v_a_775_);
lean_dec_ref(v_a_775_);
lean_dec(v_waitForDiagnosticsId_773_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0_spec__1(lean_object* v_v_778_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = l_Lean_Lsp_instToJsonWaitForDiagnosticsParams_toJson(v_v_778_);
v___x_780_ = l_Lean_Json_Structured_fromJson_x3f(v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0(lean_object* v_h_781_, lean_object* v_r_782_){
_start:
{
lean_object* v_id_784_; lean_object* v_method_785_; lean_object* v_param_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_806_; 
v_id_784_ = lean_ctor_get(v_r_782_, 0);
v_method_785_ = lean_ctor_get(v_r_782_, 1);
v_param_786_ = lean_ctor_get(v_r_782_, 2);
v_isSharedCheck_806_ = !lean_is_exclusive(v_r_782_);
if (v_isSharedCheck_806_ == 0)
{
v___x_788_ = v_r_782_;
v_isShared_789_ = v_isSharedCheck_806_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_param_786_);
lean_inc(v_method_785_);
lean_inc(v_id_784_);
lean_dec(v_r_782_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_806_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___y_791_; lean_object* v___x_796_; 
v___x_796_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0_spec__1(v_param_786_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v___x_797_; 
lean_dec_ref_known(v___x_796_, 1);
v___x_797_ = lean_box(0);
v___y_791_ = v___x_797_;
goto v___jp_790_;
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
v_a_798_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_796_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_796_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
v___y_791_ = v___x_803_;
goto v___jp_790_;
}
}
}
v___jp_790_:
{
lean_object* v___x_793_; 
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 2, v___y_791_);
v___x_793_ = v___x_788_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_id_784_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_method_785_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v___y_791_);
v___x_793_ = v_reuseFailAlloc_795_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; 
v___x_794_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_781_, v___x_793_);
return v___x_794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0___boxed(lean_object* v_h_807_, lean_object* v_r_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0(v_h_807_, v_r_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0(lean_object* v_r_811_, lean_object* v_a_812_){
_start:
{
lean_object* v___x_814_; lean_object* v_a_815_; lean_object* v___x_816_; 
v___x_814_ = l_Lean_Lsp_Ipc_stdin(v_a_812_);
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref(v___x_814_);
v___x_816_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0_spec__0(v_a_815_, v_r_811_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0___boxed(lean_object* v_r_817_, lean_object* v_a_818_, lean_object* v_a_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0(v_r_817_, v_a_818_);
lean_dec_ref(v_a_818_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics(lean_object* v_waitForDiagnosticsId_822_, lean_object* v_target_823_, lean_object* v_version_824_, lean_object* v_a_825_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_827_ = ((lean_object*)(l_Lean_Lsp_Ipc_collectDiagnostics___closed__0));
v___x_828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_828_, 0, v_target_823_);
lean_ctor_set(v___x_828_, 1, v_version_824_);
lean_inc(v_waitForDiagnosticsId_822_);
v___x_829_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_829_, 0, v_waitForDiagnosticsId_822_);
lean_ctor_set(v___x_829_, 1, v___x_827_);
lean_ctor_set(v___x_829_, 2, v___x_828_);
v___x_830_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_collectDiagnostics_spec__0(v___x_829_, v_a_825_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec_ref_known(v___x_830_, 1);
v___x_831_ = lean_box(0);
v___x_832_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_collectDiagnostics_loop(v_waitForDiagnosticsId_822_, v___x_831_, v_a_825_);
lean_dec(v_waitForDiagnosticsId_822_);
return v___x_832_;
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_waitForDiagnosticsId_822_);
v_a_833_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_830_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_830_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_collectDiagnostics___boxed(lean_object* v_waitForDiagnosticsId_841_, lean_object* v_target_842_, lean_object* v_version_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lean_Lsp_Ipc_collectDiagnostics(v_waitForDiagnosticsId_841_, v_target_842_, v_version_843_, v_a_844_);
lean_dec_ref(v_a_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0_spec__1(lean_object* v_v_847_){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = l_Lean_Lsp_instToJsonWaitForILeansParams_toJson(v_v_847_);
v___x_849_ = l_Lean_Json_Structured_fromJson_x3f(v___x_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0(lean_object* v_h_850_, lean_object* v_r_851_){
_start:
{
lean_object* v_id_853_; lean_object* v_method_854_; lean_object* v_param_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_875_; 
v_id_853_ = lean_ctor_get(v_r_851_, 0);
v_method_854_ = lean_ctor_get(v_r_851_, 1);
v_param_855_ = lean_ctor_get(v_r_851_, 2);
v_isSharedCheck_875_ = !lean_is_exclusive(v_r_851_);
if (v_isSharedCheck_875_ == 0)
{
v___x_857_ = v_r_851_;
v_isShared_858_ = v_isSharedCheck_875_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_param_855_);
lean_inc(v_method_854_);
lean_inc(v_id_853_);
lean_dec(v_r_851_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_875_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___y_860_; lean_object* v___x_865_; 
v___x_865_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0_spec__1(v_param_855_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v___x_866_; 
lean_dec_ref_known(v___x_865_, 1);
v___x_866_ = lean_box(0);
v___y_860_ = v___x_866_;
goto v___jp_859_;
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
v_a_867_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_865_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_865_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
v___y_860_ = v___x_872_;
goto v___jp_859_;
}
}
}
v___jp_859_:
{
lean_object* v___x_862_; 
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 2, v___y_860_);
v___x_862_ = v___x_857_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_id_853_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_method_854_);
lean_ctor_set(v_reuseFailAlloc_864_, 2, v___y_860_);
v___x_862_ = v_reuseFailAlloc_864_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_850_, v___x_862_);
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0___boxed(lean_object* v_h_876_, lean_object* v_r_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0(v_h_876_, v_r_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0(lean_object* v_r_880_, lean_object* v_a_881_){
_start:
{
lean_object* v___x_883_; lean_object* v_a_884_; lean_object* v___x_885_; 
v___x_883_ = l_Lean_Lsp_Ipc_stdin(v_a_881_);
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref(v___x_883_);
v___x_885_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0_spec__0(v_a_884_, v_r_880_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0___boxed(lean_object* v_r_886_, lean_object* v_a_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0(v_r_886_, v_a_887_);
lean_dec_ref(v_a_887_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg(lean_object* v_waitForILeansId_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Lsp_Ipc_readMessage(v___y_897_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_922_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_922_ == 0)
{
v___x_902_ = v___x_899_;
v_isShared_903_ = v_isSharedCheck_922_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_922_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
switch(lean_obj_tag(v_a_900_))
{
case 2:
{
lean_object* v_id_904_; uint8_t v___x_905_; 
v_id_904_ = lean_ctor_get(v_a_900_, 0);
lean_inc(v_id_904_);
lean_dec_ref_known(v_a_900_, 2);
v___x_905_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_904_, v_waitForILeansId_896_);
lean_dec(v_id_904_);
if (v___x_905_ == 0)
{
lean_del_object(v___x_902_);
goto _start;
}
else
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__1));
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 0, v___x_907_);
v___x_909_ = v___x_902_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 1, 0);
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
case 3:
{
lean_object* v_id_911_; lean_object* v_message_912_; uint8_t v___x_913_; 
v_id_911_ = lean_ctor_get(v_a_900_, 0);
lean_inc(v_id_911_);
v_message_912_ = lean_ctor_get(v_a_900_, 1);
lean_inc_ref(v_message_912_);
lean_dec_ref_known(v_a_900_, 3);
v___x_913_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_911_, v_waitForILeansId_896_);
lean_dec(v_id_911_);
if (v___x_913_ == 0)
{
lean_dec_ref(v_message_912_);
lean_del_object(v___x_902_);
goto _start;
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_915_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___closed__2));
v___x_916_ = lean_string_append(v___x_915_, v_message_912_);
lean_dec_ref(v_message_912_);
v___x_917_ = lean_mk_io_user_error(v___x_916_);
if (v_isShared_903_ == 0)
{
lean_ctor_set_tag(v___x_902_, 1);
lean_ctor_set(v___x_902_, 0, v___x_917_);
v___x_919_ = v___x_902_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_917_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
default: 
{
lean_del_object(v___x_902_);
lean_dec(v_a_900_);
goto _start;
}
}
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
v_a_923_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_899_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_899_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg___boxed(lean_object* v_waitForILeansId_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg(v_waitForILeansId_931_, v___y_932_);
lean_dec_ref(v___y_932_);
lean_dec(v_waitForILeansId_931_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForILeans(lean_object* v_waitForILeansId_936_, lean_object* v_target_937_, lean_object* v_version_938_, lean_object* v_a_939_){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_941_ = ((lean_object*)(l_Lean_Lsp_Ipc_waitForILeans___closed__0));
v___x_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_942_, 0, v_target_937_);
v___x_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_943_, 0, v_version_938_);
v___x_944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_inc(v_waitForILeansId_936_);
v___x_945_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_945_, 0, v_waitForILeansId_936_);
lean_ctor_set(v___x_945_, 1, v___x_941_);
lean_ctor_set(v___x_945_, 2, v___x_944_);
v___x_946_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0(v___x_945_, v_a_939_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; 
lean_dec_ref_known(v___x_946_, 1);
v___x_947_ = lean_box(0);
v___x_948_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg(v_waitForILeansId_936_, v_a_939_);
lean_dec(v_waitForILeansId_936_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_961_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_961_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_961_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_961_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v_fst_953_; 
v_fst_953_ = lean_ctor_get(v_a_949_, 0);
lean_inc(v_fst_953_);
lean_dec(v_a_949_);
if (lean_obj_tag(v_fst_953_) == 0)
{
lean_object* v___x_955_; 
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_947_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_947_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
else
{
lean_object* v_val_957_; lean_object* v___x_959_; 
v_val_957_ = lean_ctor_get(v_fst_953_, 0);
lean_inc(v_val_957_);
lean_dec_ref_known(v_fst_953_, 1);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v_val_957_);
v___x_959_ = v___x_951_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_val_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
v_a_962_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_948_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_948_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
else
{
lean_dec(v_waitForILeansId_936_);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForILeans___boxed(lean_object* v_waitForILeansId_970_, lean_object* v_target_971_, lean_object* v_version_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Lsp_Ipc_waitForILeans(v_waitForILeansId_970_, v_target_971_, v_version_972_, v_a_973_);
lean_dec_ref(v_a_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1(lean_object* v_waitForILeansId_976_, lean_object* v_inst_977_, lean_object* v_a_978_, lean_object* v___y_979_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg(v_waitForILeansId_976_, v___y_979_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___boxed(lean_object* v_waitForILeansId_982_, lean_object* v_inst_983_, lean_object* v_a_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1(v_waitForILeansId_982_, v_inst_983_, v_a_984_, v___y_985_);
lean_dec_ref(v___y_985_);
lean_dec_ref(v_a_984_);
lean_dec(v_waitForILeansId_982_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForWatchdogILeans(lean_object* v_waitForILeansId_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_993_ = ((lean_object*)(l_Lean_Lsp_Ipc_waitForILeans___closed__0));
v___x_994_ = ((lean_object*)(l_Lean_Lsp_Ipc_waitForWatchdogILeans___closed__0));
lean_inc(v_waitForILeansId_990_);
v___x_995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_995_, 0, v_waitForILeansId_990_);
lean_ctor_set(v___x_995_, 1, v___x_993_);
lean_ctor_set(v___x_995_, 2, v___x_994_);
v___x_996_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_waitForILeans_spec__0(v___x_995_, v_a_991_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec_ref_known(v___x_996_, 1);
v___x_997_ = lean_box(0);
v___x_998_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_waitForILeans_spec__1___redArg(v_waitForILeansId_990_, v_a_991_);
lean_dec(v_waitForILeansId_990_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1011_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1011_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1011_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v_fst_1003_; 
v_fst_1003_ = lean_ctor_get(v_a_999_, 0);
lean_inc(v_fst_1003_);
lean_dec(v_a_999_);
if (lean_obj_tag(v_fst_1003_) == 0)
{
lean_object* v___x_1005_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_997_);
v___x_1005_ = v___x_1001_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_997_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
else
{
lean_object* v_val_1007_; lean_object* v___x_1009_; 
v_val_1007_ = lean_ctor_get(v_fst_1003_, 0);
lean_inc(v_val_1007_);
lean_dec_ref_known(v_fst_1003_, 1);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v_val_1007_);
v___x_1009_ = v___x_1001_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_val_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
v_a_1012_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_998_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_998_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
else
{
lean_dec(v_waitForILeansId_990_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_waitForWatchdogILeans___boxed(lean_object* v_waitForILeansId_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lean_Lsp_Ipc_waitForWatchdogILeans(v_waitForILeansId_1020_, v_a_1021_);
lean_dec_ref(v_a_1021_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__0(lean_object* v_j_1024_, lean_object* v_k_1025_){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = l_Lean_Json_getObjValD(v_j_1024_, v_k_1025_);
v___x_1027_ = l_Lean_Lsp_instFromJsonCallHierarchyItem_fromJson(v___x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__0___boxed(lean_object* v_j_1028_, lean_object* v_k_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__0(v_j_1028_, v_k_1029_);
lean_dec_ref(v_k_1029_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1_spec__2(size_t v_sz_1031_, size_t v_i_1032_, lean_object* v_bs_1033_){
_start:
{
uint8_t v___x_1034_; 
v___x_1034_ = lean_usize_dec_lt(v_i_1032_, v_sz_1031_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = l_unsafeCast___redArg(v_bs_1033_);
lean_dec_ref(v_bs_1033_);
v___x_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
return v___x_1036_;
}
else
{
lean_object* v_v_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_v_1037_ = lean_array_uget_borrowed(v_bs_1033_, v_i_1032_);
v___x_1038_ = l_unsafeCast___redArg(v_v_1037_);
v___x_1039_ = l_Lean_Lsp_instFromJsonRange_fromJson(v___x_1038_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec_ref(v_bs_1033_);
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1039_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1049_; lean_object* v_bs_x27_1050_; size_t v___x_1051_; size_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_a_1048_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1039_, 1);
v___x_1049_ = lean_unsigned_to_nat(0u);
v_bs_x27_1050_ = lean_array_uset(v_bs_1033_, v_i_1032_, v___x_1049_);
v___x_1051_ = ((size_t)1ULL);
v___x_1052_ = lean_usize_add(v_i_1032_, v___x_1051_);
v___x_1053_ = l_unsafeCast___redArg(v_a_1048_);
lean_dec(v_a_1048_);
v___x_1054_ = lean_array_uset(v_bs_x27_1050_, v_i_1032_, v___x_1053_);
v_i_1032_ = v___x_1052_;
v_bs_1033_ = v___x_1054_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_1056_, lean_object* v_i_1057_, lean_object* v_bs_1058_){
_start:
{
size_t v_sz_boxed_1059_; size_t v_i_boxed_1060_; lean_object* v_res_1061_; 
v_sz_boxed_1059_ = lean_unbox_usize(v_sz_1056_);
lean_dec(v_sz_1056_);
v_i_boxed_1060_ = lean_unbox_usize(v_i_1057_);
lean_dec(v_i_1057_);
v_res_1061_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_1059_, v_i_boxed_1060_, v_bs_1058_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1(lean_object* v_x_1063_){
_start:
{
if (lean_obj_tag(v_x_1063_) == 4)
{
lean_object* v_elems_1064_; size_t v_sz_1065_; size_t v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v_elems_1064_ = lean_ctor_get(v_x_1063_, 0);
lean_inc_ref(v_elems_1064_);
lean_dec_ref_known(v_x_1063_, 1);
v_sz_1065_ = lean_array_size(v_elems_1064_);
v___x_1066_ = ((size_t)0ULL);
v___x_1067_ = l_unsafeCast___redArg(v_elems_1064_);
lean_dec_ref(v_elems_1064_);
v___x_1068_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1_spec__2(v_sz_1065_, v___x_1066_, v___x_1067_);
v___x_1069_ = l_unsafeCast___redArg(v___x_1068_);
lean_dec_ref(v___x_1068_);
return v___x_1069_;
}
else
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1070_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_1071_ = lean_unsigned_to_nat(80u);
v___x_1072_ = l_Lean_Json_pretty(v_x_1063_, v___x_1071_);
v___x_1073_ = lean_string_append(v___x_1070_, v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
return v___x_1076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1(lean_object* v_j_1077_, lean_object* v_k_1078_){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = l_Lean_Json_getObjValD(v_j_1077_, v_k_1078_);
v___x_1080_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1(v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1___boxed(lean_object* v_j_1081_, lean_object* v_k_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1(v_j_1081_, v_k_1082_);
lean_dec_ref(v_k_1082_);
return v_res_1083_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10(void){
_start:
{
uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = 1;
v___x_1089_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__9));
v___x_1090_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1089_, v___x_1088_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1101_ = 1;
v___x_1102_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__5));
v___x_1103_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1102_, v___x_1101_);
return v___x_1103_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1104_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__7));
v___x_1105_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__6, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__6_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__6);
v___x_1106_ = lean_string_append(v___x_1105_, v___x_1104_);
return v___x_1106_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1107_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10);
v___x_1108_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8);
v___x_1109_ = lean_string_append(v___x_1108_, v___x_1107_);
return v___x_1109_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__13(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1110_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12));
v___x_1111_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__11, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__11_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__11);
v___x_1112_ = lean_string_append(v___x_1111_, v___x_1110_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__16(void){
_start:
{
uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = 1;
v___x_1117_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__15));
v___x_1118_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1117_, v___x_1116_);
return v___x_1118_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__16, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__16_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__16);
v___x_1120_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8);
v___x_1121_ = lean_string_append(v___x_1120_, v___x_1119_);
return v___x_1121_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__18(void){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12));
v___x_1123_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__17, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__17_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__17);
v___x_1124_ = lean_string_append(v___x_1123_, v___x_1122_);
return v___x_1124_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21(void){
_start:
{
uint8_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = 1;
v___x_1129_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__20));
v___x_1130_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1129_, v___x_1128_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__22(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1131_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21);
v___x_1132_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__8);
v___x_1133_ = lean_string_append(v___x_1132_, v___x_1131_);
return v___x_1133_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__23(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12));
v___x_1135_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__22, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__22_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__22);
v___x_1136_ = lean_string_append(v___x_1135_, v___x_1134_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson(lean_object* v_json_1137_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0));
lean_inc(v_json_1137_);
v___x_1139_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__0(v_json_1137_, v___x_1138_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1149_; 
lean_dec(v_json_1137_);
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1149_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1149_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1144_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__13, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__13_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__13);
v___x_1145_ = lean_string_append(v___x_1144_, v_a_1140_);
lean_dec(v_a_1140_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1145_);
v___x_1147_ = v___x_1142_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
else
{
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
lean_dec(v_json_1137_);
v_a_1150_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1139_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1139_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 0);
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v_a_1158_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1159_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__14));
lean_inc(v_json_1137_);
v___x_1160_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1(v_json_1137_, v___x_1159_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1170_; 
lean_dec(v_a_1158_);
lean_dec(v_json_1137_);
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1163_ = v___x_1160_;
v_isShared_1164_ = v_isSharedCheck_1170_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1160_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1170_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1165_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__18, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__18_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__18);
v___x_1166_ = lean_string_append(v___x_1165_, v_a_1161_);
lean_dec(v_a_1161_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 0, v___x_1166_);
v___x_1168_ = v___x_1163_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
else
{
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
lean_dec(v_a_1158_);
lean_dec(v_json_1137_);
v_a_1171_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1160_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1160_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set_tag(v___x_1173_, 0);
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v_a_1179_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1160_, 1);
v___x_1180_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19));
v___x_1181_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2(v_json_1137_, v___x_1180_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1191_; 
lean_dec(v_a_1179_);
lean_dec(v_a_1158_);
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1191_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1191_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1186_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__23, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__23_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__23);
v___x_1187_ = lean_string_append(v___x_1186_, v_a_1182_);
lean_dec(v_a_1182_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1187_);
v___x_1189_ = v___x_1184_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
else
{
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec(v_a_1179_);
lean_dec(v_a_1158_);
v_a_1192_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1181_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1181_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
lean_ctor_set_tag(v___x_1194_, 0);
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1208_; 
v_a_1200_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1202_ = v___x_1181_;
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1181_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1204_, 0, v_a_1158_);
lean_ctor_set(v___x_1204_, 1, v_a_1179_);
lean_ctor_set(v___x_1204_, 2, v_a_1200_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1204_);
v___x_1206_ = v___x_1202_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3_spec__5(size_t v_sz_1209_, size_t v_i_1210_, lean_object* v_bs_1211_){
_start:
{
uint8_t v___x_1212_; 
v___x_1212_ = lean_usize_dec_lt(v_i_1210_, v_sz_1209_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = l_unsafeCast___redArg(v_bs_1211_);
lean_dec_ref(v_bs_1211_);
v___x_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
else
{
lean_object* v_v_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_v_1215_ = lean_array_uget_borrowed(v_bs_1211_, v_i_1210_);
v___x_1216_ = l_unsafeCast___redArg(v_v_1215_);
v___x_1217_ = l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson(v___x_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec_ref(v_bs_1211_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1227_; lean_object* v_bs_x27_1228_; size_t v___x_1229_; size_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_a_1226_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1226_);
lean_dec_ref_known(v___x_1217_, 1);
v___x_1227_ = lean_unsigned_to_nat(0u);
v_bs_x27_1228_ = lean_array_uset(v_bs_1211_, v_i_1210_, v___x_1227_);
v___x_1229_ = ((size_t)1ULL);
v___x_1230_ = lean_usize_add(v_i_1210_, v___x_1229_);
v___x_1231_ = l_unsafeCast___redArg(v_a_1226_);
lean_dec(v_a_1226_);
v___x_1232_ = lean_array_uset(v_bs_x27_1228_, v_i_1210_, v___x_1231_);
v_i_1210_ = v___x_1230_;
v_bs_1211_ = v___x_1232_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3(lean_object* v_x_1234_){
_start:
{
if (lean_obj_tag(v_x_1234_) == 4)
{
lean_object* v_elems_1235_; size_t v_sz_1236_; size_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v_elems_1235_ = lean_ctor_get(v_x_1234_, 0);
lean_inc_ref(v_elems_1235_);
lean_dec_ref_known(v_x_1234_, 1);
v_sz_1236_ = lean_array_size(v_elems_1235_);
v___x_1237_ = ((size_t)0ULL);
v___x_1238_ = l_unsafeCast___redArg(v_elems_1235_);
lean_dec_ref(v_elems_1235_);
v___x_1239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3_spec__5(v_sz_1236_, v___x_1237_, v___x_1238_);
v___x_1240_ = l_unsafeCast___redArg(v___x_1239_);
lean_dec_ref(v___x_1239_);
return v___x_1240_;
}
else
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1241_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_1242_ = lean_unsigned_to_nat(80u);
v___x_1243_ = l_Lean_Json_pretty(v_x_1234_, v___x_1242_);
v___x_1244_ = lean_string_append(v___x_1241_, v___x_1243_);
lean_dec_ref(v___x_1243_);
v___x_1245_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_1246_ = lean_string_append(v___x_1244_, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
return v___x_1247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2(lean_object* v_j_1248_, lean_object* v_k_1249_){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = l_Lean_Json_getObjValD(v_j_1248_, v_k_1249_);
v___x_1251_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3(v___x_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2___boxed(lean_object* v_j_1252_, lean_object* v_k_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2(v_j_1252_, v_k_1253_);
lean_dec_ref(v_k_1253_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3_spec__5___boxed(lean_object* v_sz_1255_, lean_object* v_i_1256_, lean_object* v_bs_1257_){
_start:
{
size_t v_sz_boxed_1258_; size_t v_i_boxed_1259_; lean_object* v_res_1260_; 
v_sz_boxed_1258_ = lean_unbox_usize(v_sz_1255_);
lean_dec(v_sz_1255_);
v_i_boxed_1259_ = lean_unbox_usize(v_i_1256_);
lean_dec(v_i_1256_);
v_res_1260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__2_spec__3_spec__5(v_sz_boxed_1258_, v_i_boxed_1259_, v_bs_1257_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__2(lean_object* v_a_1263_, lean_object* v_a_1264_){
_start:
{
if (lean_obj_tag(v_a_1263_) == 0)
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_array_to_list(v_a_1264_);
return v___x_1265_;
}
else
{
lean_object* v_head_1266_; lean_object* v_tail_1267_; lean_object* v___x_1268_; 
v_head_1266_ = lean_ctor_get(v_a_1263_, 0);
lean_inc(v_head_1266_);
v_tail_1267_ = lean_ctor_get(v_a_1263_, 1);
lean_inc(v_tail_1267_);
lean_dec_ref_known(v_a_1263_, 2);
v___x_1268_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1264_, v_head_1266_);
v_a_1263_ = v_tail_1267_;
v_a_1264_ = v___x_1268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0_spec__0(size_t v_sz_1270_, size_t v_i_1271_, lean_object* v_bs_1272_){
_start:
{
uint8_t v___x_1273_; 
v___x_1273_ = lean_usize_dec_lt(v_i_1271_, v_sz_1270_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; 
v___x_1274_ = l_unsafeCast___redArg(v_bs_1272_);
lean_dec_ref(v_bs_1272_);
return v___x_1274_;
}
else
{
lean_object* v_v_1275_; lean_object* v___x_1276_; lean_object* v_bs_x27_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; size_t v___x_1280_; size_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v_v_1275_ = lean_array_uget(v_bs_1272_, v_i_1271_);
v___x_1276_ = lean_unsigned_to_nat(0u);
v_bs_x27_1277_ = lean_array_uset(v_bs_1272_, v_i_1271_, v___x_1276_);
v___x_1278_ = l_unsafeCast___redArg(v_v_1275_);
lean_dec(v_v_1275_);
v___x_1279_ = l_Lean_Lsp_instToJsonRange_toJson(v___x_1278_);
v___x_1280_ = ((size_t)1ULL);
v___x_1281_ = lean_usize_add(v_i_1271_, v___x_1280_);
v___x_1282_ = l_unsafeCast___redArg(v___x_1279_);
lean_dec(v___x_1279_);
v___x_1283_ = lean_array_uset(v_bs_x27_1277_, v_i_1271_, v___x_1282_);
v_i_1271_ = v___x_1281_;
v_bs_1272_ = v___x_1283_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1285_, lean_object* v_i_1286_, lean_object* v_bs_1287_){
_start:
{
size_t v_sz_boxed_1288_; size_t v_i_boxed_1289_; lean_object* v_res_1290_; 
v_sz_boxed_1288_ = lean_unbox_usize(v_sz_1285_);
lean_dec(v_sz_1285_);
v_i_boxed_1289_ = lean_unbox_usize(v_i_1286_);
lean_dec(v_i_1286_);
v_res_1290_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0_spec__0(v_sz_boxed_1288_, v_i_boxed_1289_, v_bs_1287_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0(lean_object* v_a_1291_){
_start:
{
size_t v_sz_1292_; size_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v_sz_1292_ = lean_array_size(v_a_1291_);
v___x_1293_ = ((size_t)0ULL);
v___x_1294_ = l_unsafeCast___redArg(v_a_1291_);
v___x_1295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0_spec__0(v_sz_1292_, v___x_1293_, v___x_1294_);
v___x_1296_ = l_unsafeCast___redArg(v___x_1295_);
lean_dec_ref(v___x_1295_);
v___x_1297_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0___boxed(lean_object* v_a_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0(v_a_1298_);
lean_dec_ref(v_a_1298_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson(lean_object* v_x_1302_){
_start:
{
lean_object* v_item_1303_; lean_object* v_fromRanges_1304_; lean_object* v_children_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v_item_1303_ = lean_ctor_get(v_x_1302_, 0);
lean_inc_ref(v_item_1303_);
v_fromRanges_1304_ = lean_ctor_get(v_x_1302_, 1);
lean_inc_ref(v_fromRanges_1304_);
v_children_1305_ = lean_ctor_get(v_x_1302_, 2);
lean_inc_ref(v_children_1305_);
lean_dec_ref(v_x_1302_);
v___x_1306_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0));
v___x_1307_ = l_Lean_Lsp_instToJsonCallHierarchyItem_toJson(v_item_1303_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_box(0);
v___x_1310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__14));
v___x_1312_ = l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__0(v_fromRanges_1304_);
lean_dec_ref(v_fromRanges_1304_);
v___x_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1309_);
v___x_1315_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19));
v___x_1316_ = l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1(v_children_1305_);
lean_dec_ref(v_children_1305_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___x_1309_);
v___x_1319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___x_1309_);
v___x_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1314_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1310_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = ((lean_object*)(l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson___closed__0));
v___x_1323_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__2(v___x_1321_, v___x_1322_);
v___x_1324_ = l_Lean_Json_mkObj(v___x_1323_);
lean_dec(v___x_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1_spec__2(size_t v_sz_1325_, size_t v_i_1326_, lean_object* v_bs_1327_){
_start:
{
uint8_t v___x_1328_; 
v___x_1328_ = lean_usize_dec_lt(v_i_1326_, v_sz_1325_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; 
v___x_1329_ = l_unsafeCast___redArg(v_bs_1327_);
lean_dec_ref(v_bs_1327_);
return v___x_1329_;
}
else
{
lean_object* v_v_1330_; lean_object* v___x_1331_; lean_object* v_bs_x27_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; size_t v___x_1335_; size_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v_v_1330_ = lean_array_uget(v_bs_1327_, v_i_1326_);
v___x_1331_ = lean_unsigned_to_nat(0u);
v_bs_x27_1332_ = lean_array_uset(v_bs_1327_, v_i_1326_, v___x_1331_);
v___x_1333_ = l_unsafeCast___redArg(v_v_1330_);
lean_dec(v_v_1330_);
v___x_1334_ = l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson(v___x_1333_);
v___x_1335_ = ((size_t)1ULL);
v___x_1336_ = lean_usize_add(v_i_1326_, v___x_1335_);
v___x_1337_ = l_unsafeCast___redArg(v___x_1334_);
lean_dec(v___x_1334_);
v___x_1338_ = lean_array_uset(v_bs_x27_1332_, v_i_1326_, v___x_1337_);
v_i_1326_ = v___x_1336_;
v_bs_1327_ = v___x_1338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1(lean_object* v_a_1340_){
_start:
{
size_t v_sz_1341_; size_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_sz_1341_ = lean_array_size(v_a_1340_);
v___x_1342_ = ((size_t)0ULL);
v___x_1343_ = l_unsafeCast___redArg(v_a_1340_);
v___x_1344_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1_spec__2(v_sz_1341_, v___x_1342_, v___x_1343_);
v___x_1345_ = l_unsafeCast___redArg(v___x_1344_);
lean_dec_ref(v___x_1344_);
v___x_1346_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1___boxed(lean_object* v_a_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1(v_a_1347_);
lean_dec_ref(v_a_1347_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1_spec__2___boxed(lean_object* v_sz_1349_, lean_object* v_i_1350_, lean_object* v_bs_1351_){
_start:
{
size_t v_sz_boxed_1352_; size_t v_i_boxed_1353_; lean_object* v_res_1354_; 
v_sz_boxed_1352_ = lean_unbox_usize(v_sz_1349_);
lean_dec(v_sz_1349_);
v_i_boxed_1353_ = lean_unbox_usize(v_i_1350_);
lean_dec(v_i_1350_);
v_res_1354_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__1_spec__2(v_sz_boxed_1352_, v_i_boxed_1353_, v_bs_1351_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(lean_object* v_k_1357_, lean_object* v_v_1358_, lean_object* v_t_1359_){
_start:
{
if (lean_obj_tag(v_t_1359_) == 0)
{
lean_object* v_size_1360_; lean_object* v_k_1361_; lean_object* v_v_1362_; lean_object* v_l_1363_; lean_object* v_r_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1644_; 
v_size_1360_ = lean_ctor_get(v_t_1359_, 0);
v_k_1361_ = lean_ctor_get(v_t_1359_, 1);
v_v_1362_ = lean_ctor_get(v_t_1359_, 2);
v_l_1363_ = lean_ctor_get(v_t_1359_, 3);
v_r_1364_ = lean_ctor_get(v_t_1359_, 4);
v_isSharedCheck_1644_ = !lean_is_exclusive(v_t_1359_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1366_ = v_t_1359_;
v_isShared_1367_ = v_isSharedCheck_1644_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_r_1364_);
lean_inc(v_l_1363_);
lean_inc(v_v_1362_);
lean_inc(v_k_1361_);
lean_inc(v_size_1360_);
lean_dec(v_t_1359_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1644_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
uint8_t v___x_1368_; 
v___x_1368_ = lean_string_compare(v_k_1357_, v_k_1361_);
switch(v___x_1368_)
{
case 0:
{
lean_object* v_impl_1369_; lean_object* v___x_1370_; 
lean_dec(v_size_1360_);
v_impl_1369_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_k_1357_, v_v_1358_, v_l_1363_);
v___x_1370_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1364_) == 0)
{
lean_object* v_size_1371_; lean_object* v_size_1372_; lean_object* v_k_1373_; lean_object* v_v_1374_; lean_object* v_l_1375_; lean_object* v_r_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v_size_1371_ = lean_ctor_get(v_r_1364_, 0);
v_size_1372_ = lean_ctor_get(v_impl_1369_, 0);
lean_inc(v_size_1372_);
v_k_1373_ = lean_ctor_get(v_impl_1369_, 1);
lean_inc(v_k_1373_);
v_v_1374_ = lean_ctor_get(v_impl_1369_, 2);
lean_inc(v_v_1374_);
v_l_1375_ = lean_ctor_get(v_impl_1369_, 3);
lean_inc(v_l_1375_);
v_r_1376_ = lean_ctor_get(v_impl_1369_, 4);
lean_inc(v_r_1376_);
v___x_1377_ = lean_unsigned_to_nat(3u);
v___x_1378_ = lean_nat_mul(v___x_1377_, v_size_1371_);
v___x_1379_ = lean_nat_dec_lt(v___x_1378_, v_size_1372_);
lean_dec(v___x_1378_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_dec(v_r_1376_);
lean_dec(v_l_1375_);
lean_dec(v_v_1374_);
lean_dec(v_k_1373_);
v___x_1380_ = lean_nat_add(v___x_1370_, v_size_1372_);
lean_dec(v_size_1372_);
v___x_1381_ = lean_nat_add(v___x_1380_, v_size_1371_);
lean_dec(v___x_1380_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 3, v_impl_1369_);
lean_ctor_set(v___x_1366_, 0, v___x_1381_);
v___x_1383_ = v___x_1366_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1384_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1384_, 3, v_impl_1369_);
lean_ctor_set(v_reuseFailAlloc_1384_, 4, v_r_1364_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1450_; 
v_isSharedCheck_1450_ = !lean_is_exclusive(v_impl_1369_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; lean_object* v_unused_1452_; lean_object* v_unused_1453_; lean_object* v_unused_1454_; lean_object* v_unused_1455_; 
v_unused_1451_ = lean_ctor_get(v_impl_1369_, 4);
lean_dec(v_unused_1451_);
v_unused_1452_ = lean_ctor_get(v_impl_1369_, 3);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_impl_1369_, 2);
lean_dec(v_unused_1453_);
v_unused_1454_ = lean_ctor_get(v_impl_1369_, 1);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_impl_1369_, 0);
lean_dec(v_unused_1455_);
v___x_1386_ = v_impl_1369_;
v_isShared_1387_ = v_isSharedCheck_1450_;
goto v_resetjp_1385_;
}
else
{
lean_dec(v_impl_1369_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1450_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v_size_1388_; lean_object* v_size_1389_; lean_object* v_k_1390_; lean_object* v_v_1391_; lean_object* v_l_1392_; lean_object* v_r_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v_size_1388_ = lean_ctor_get(v_l_1375_, 0);
v_size_1389_ = lean_ctor_get(v_r_1376_, 0);
v_k_1390_ = lean_ctor_get(v_r_1376_, 1);
v_v_1391_ = lean_ctor_get(v_r_1376_, 2);
v_l_1392_ = lean_ctor_get(v_r_1376_, 3);
v_r_1393_ = lean_ctor_get(v_r_1376_, 4);
v___x_1394_ = lean_unsigned_to_nat(2u);
v___x_1395_ = lean_nat_mul(v___x_1394_, v_size_1388_);
v___x_1396_ = lean_nat_dec_lt(v_size_1389_, v___x_1395_);
lean_dec(v___x_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1425_; 
lean_inc(v_r_1393_);
lean_inc(v_l_1392_);
lean_inc(v_v_1391_);
lean_inc(v_k_1390_);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_r_1376_);
if (v_isSharedCheck_1425_ == 0)
{
lean_object* v_unused_1426_; lean_object* v_unused_1427_; lean_object* v_unused_1428_; lean_object* v_unused_1429_; lean_object* v_unused_1430_; 
v_unused_1426_ = lean_ctor_get(v_r_1376_, 4);
lean_dec(v_unused_1426_);
v_unused_1427_ = lean_ctor_get(v_r_1376_, 3);
lean_dec(v_unused_1427_);
v_unused_1428_ = lean_ctor_get(v_r_1376_, 2);
lean_dec(v_unused_1428_);
v_unused_1429_ = lean_ctor_get(v_r_1376_, 1);
lean_dec(v_unused_1429_);
v_unused_1430_ = lean_ctor_get(v_r_1376_, 0);
lean_dec(v_unused_1430_);
v___x_1398_ = v_r_1376_;
v_isShared_1399_ = v_isSharedCheck_1425_;
goto v_resetjp_1397_;
}
else
{
lean_dec(v_r_1376_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1425_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___x_1413_; lean_object* v___y_1415_; 
v___x_1400_ = lean_nat_add(v___x_1370_, v_size_1372_);
lean_dec(v_size_1372_);
v___x_1401_ = lean_nat_add(v___x_1400_, v_size_1371_);
lean_dec(v___x_1400_);
v___x_1413_ = lean_nat_add(v___x_1370_, v_size_1388_);
if (lean_obj_tag(v_l_1392_) == 0)
{
lean_object* v_size_1423_; 
v_size_1423_ = lean_ctor_get(v_l_1392_, 0);
lean_inc(v_size_1423_);
v___y_1415_ = v_size_1423_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_unsigned_to_nat(0u);
v___y_1415_ = v___x_1424_;
goto v___jp_1414_;
}
v___jp_1402_:
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1406_ = lean_nat_add(v___y_1403_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec(v___y_1403_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 4, v_r_1364_);
lean_ctor_set(v___x_1398_, 3, v_r_1393_);
lean_ctor_set(v___x_1398_, 2, v_v_1362_);
lean_ctor_set(v___x_1398_, 1, v_k_1361_);
lean_ctor_set(v___x_1398_, 0, v___x_1406_);
v___x_1408_ = v___x_1398_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1406_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1412_, 3, v_r_1393_);
lean_ctor_set(v_reuseFailAlloc_1412_, 4, v_r_1364_);
v___x_1408_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1410_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v___x_1408_);
lean_ctor_set(v___x_1386_, 3, v___y_1404_);
lean_ctor_set(v___x_1386_, 2, v_v_1391_);
lean_ctor_set(v___x_1386_, 1, v_k_1390_);
lean_ctor_set(v___x_1386_, 0, v___x_1401_);
v___x_1410_ = v___x_1386_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_k_1390_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_v_1391_);
lean_ctor_set(v_reuseFailAlloc_1411_, 3, v___y_1404_);
lean_ctor_set(v_reuseFailAlloc_1411_, 4, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
v___jp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1416_ = lean_nat_add(v___x_1413_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec(v___x_1413_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v_l_1392_);
lean_ctor_set(v___x_1366_, 3, v_l_1375_);
lean_ctor_set(v___x_1366_, 2, v_v_1374_);
lean_ctor_set(v___x_1366_, 1, v_k_1373_);
lean_ctor_set(v___x_1366_, 0, v___x_1416_);
v___x_1418_ = v___x_1366_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1416_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v_k_1373_);
lean_ctor_set(v_reuseFailAlloc_1422_, 2, v_v_1374_);
lean_ctor_set(v_reuseFailAlloc_1422_, 3, v_l_1375_);
lean_ctor_set(v_reuseFailAlloc_1422_, 4, v_l_1392_);
v___x_1418_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_nat_add(v___x_1370_, v_size_1371_);
if (lean_obj_tag(v_r_1393_) == 0)
{
lean_object* v_size_1420_; 
v_size_1420_ = lean_ctor_get(v_r_1393_, 0);
lean_inc(v_size_1420_);
v___y_1403_ = v___x_1419_;
v___y_1404_ = v___x_1418_;
v___y_1405_ = v_size_1420_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_unsigned_to_nat(0u);
v___y_1403_ = v___x_1419_;
v___y_1404_ = v___x_1418_;
v___y_1405_ = v___x_1421_;
goto v___jp_1402_;
}
}
}
}
}
else
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1436_; 
lean_del_object(v___x_1366_);
v___x_1431_ = lean_nat_add(v___x_1370_, v_size_1372_);
lean_dec(v_size_1372_);
v___x_1432_ = lean_nat_add(v___x_1431_, v_size_1371_);
lean_dec(v___x_1431_);
v___x_1433_ = lean_nat_add(v___x_1370_, v_size_1371_);
v___x_1434_ = lean_nat_add(v___x_1433_, v_size_1389_);
lean_dec(v___x_1433_);
lean_inc_ref(v_r_1364_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_r_1364_);
lean_ctor_set(v___x_1386_, 3, v_r_1376_);
lean_ctor_set(v___x_1386_, 2, v_v_1362_);
lean_ctor_set(v___x_1386_, 1, v_k_1361_);
lean_ctor_set(v___x_1386_, 0, v___x_1434_);
v___x_1436_ = v___x_1386_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1449_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1449_, 3, v_r_1376_);
lean_ctor_set(v_reuseFailAlloc_1449_, 4, v_r_1364_);
v___x_1436_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_isSharedCheck_1443_ = !lean_is_exclusive(v_r_1364_);
if (v_isSharedCheck_1443_ == 0)
{
lean_object* v_unused_1444_; lean_object* v_unused_1445_; lean_object* v_unused_1446_; lean_object* v_unused_1447_; lean_object* v_unused_1448_; 
v_unused_1444_ = lean_ctor_get(v_r_1364_, 4);
lean_dec(v_unused_1444_);
v_unused_1445_ = lean_ctor_get(v_r_1364_, 3);
lean_dec(v_unused_1445_);
v_unused_1446_ = lean_ctor_get(v_r_1364_, 2);
lean_dec(v_unused_1446_);
v_unused_1447_ = lean_ctor_get(v_r_1364_, 1);
lean_dec(v_unused_1447_);
v_unused_1448_ = lean_ctor_get(v_r_1364_, 0);
lean_dec(v_unused_1448_);
v___x_1438_ = v_r_1364_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_dec(v_r_1364_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 4, v___x_1436_);
lean_ctor_set(v___x_1438_, 3, v_l_1375_);
lean_ctor_set(v___x_1438_, 2, v_v_1374_);
lean_ctor_set(v___x_1438_, 1, v_k_1373_);
lean_ctor_set(v___x_1438_, 0, v___x_1432_);
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_k_1373_);
lean_ctor_set(v_reuseFailAlloc_1442_, 2, v_v_1374_);
lean_ctor_set(v_reuseFailAlloc_1442_, 3, v_l_1375_);
lean_ctor_set(v_reuseFailAlloc_1442_, 4, v___x_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1456_; 
v_l_1456_ = lean_ctor_get(v_impl_1369_, 3);
lean_inc(v_l_1456_);
if (lean_obj_tag(v_l_1456_) == 0)
{
lean_object* v_r_1457_; lean_object* v_k_1458_; lean_object* v_v_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1470_; 
v_r_1457_ = lean_ctor_get(v_impl_1369_, 4);
v_k_1458_ = lean_ctor_get(v_impl_1369_, 1);
v_v_1459_ = lean_ctor_get(v_impl_1369_, 2);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_impl_1369_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; lean_object* v_unused_1472_; 
v_unused_1471_ = lean_ctor_get(v_impl_1369_, 3);
lean_dec(v_unused_1471_);
v_unused_1472_ = lean_ctor_get(v_impl_1369_, 0);
lean_dec(v_unused_1472_);
v___x_1461_ = v_impl_1369_;
v_isShared_1462_ = v_isSharedCheck_1470_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_r_1457_);
lean_inc(v_v_1459_);
lean_inc(v_k_1458_);
lean_dec(v_impl_1369_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1470_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1463_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1457_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 3, v_r_1457_);
lean_ctor_set(v___x_1461_, 2, v_v_1362_);
lean_ctor_set(v___x_1461_, 1, v_k_1361_);
lean_ctor_set(v___x_1461_, 0, v___x_1370_);
v___x_1465_ = v___x_1461_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1469_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1469_, 3, v_r_1457_);
lean_ctor_set(v_reuseFailAlloc_1469_, 4, v_r_1457_);
v___x_1465_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
lean_object* v___x_1467_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v___x_1465_);
lean_ctor_set(v___x_1366_, 3, v_l_1456_);
lean_ctor_set(v___x_1366_, 2, v_v_1459_);
lean_ctor_set(v___x_1366_, 1, v_k_1458_);
lean_ctor_set(v___x_1366_, 0, v___x_1463_);
v___x_1467_ = v___x_1366_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v_k_1458_);
lean_ctor_set(v_reuseFailAlloc_1468_, 2, v_v_1459_);
lean_ctor_set(v_reuseFailAlloc_1468_, 3, v_l_1456_);
lean_ctor_set(v_reuseFailAlloc_1468_, 4, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
else
{
lean_object* v_r_1473_; 
v_r_1473_ = lean_ctor_get(v_impl_1369_, 4);
lean_inc(v_r_1473_);
if (lean_obj_tag(v_r_1473_) == 0)
{
lean_object* v_k_1474_; lean_object* v_v_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1498_; 
v_k_1474_ = lean_ctor_get(v_impl_1369_, 1);
v_v_1475_ = lean_ctor_get(v_impl_1369_, 2);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_impl_1369_);
if (v_isSharedCheck_1498_ == 0)
{
lean_object* v_unused_1499_; lean_object* v_unused_1500_; lean_object* v_unused_1501_; 
v_unused_1499_ = lean_ctor_get(v_impl_1369_, 4);
lean_dec(v_unused_1499_);
v_unused_1500_ = lean_ctor_get(v_impl_1369_, 3);
lean_dec(v_unused_1500_);
v_unused_1501_ = lean_ctor_get(v_impl_1369_, 0);
lean_dec(v_unused_1501_);
v___x_1477_ = v_impl_1369_;
v_isShared_1478_ = v_isSharedCheck_1498_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_v_1475_);
lean_inc(v_k_1474_);
lean_dec(v_impl_1369_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1498_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v_k_1479_; lean_object* v_v_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1494_; 
v_k_1479_ = lean_ctor_get(v_r_1473_, 1);
v_v_1480_ = lean_ctor_get(v_r_1473_, 2);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_r_1473_);
if (v_isSharedCheck_1494_ == 0)
{
lean_object* v_unused_1495_; lean_object* v_unused_1496_; lean_object* v_unused_1497_; 
v_unused_1495_ = lean_ctor_get(v_r_1473_, 4);
lean_dec(v_unused_1495_);
v_unused_1496_ = lean_ctor_get(v_r_1473_, 3);
lean_dec(v_unused_1496_);
v_unused_1497_ = lean_ctor_get(v_r_1473_, 0);
lean_dec(v_unused_1497_);
v___x_1482_ = v_r_1473_;
v_isShared_1483_ = v_isSharedCheck_1494_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_v_1480_);
lean_inc(v_k_1479_);
lean_dec(v_r_1473_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1494_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1484_ = lean_unsigned_to_nat(3u);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 4, v_l_1456_);
lean_ctor_set(v___x_1482_, 3, v_l_1456_);
lean_ctor_set(v___x_1482_, 2, v_v_1475_);
lean_ctor_set(v___x_1482_, 1, v_k_1474_);
lean_ctor_set(v___x_1482_, 0, v___x_1370_);
v___x_1486_ = v___x_1482_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v_k_1474_);
lean_ctor_set(v_reuseFailAlloc_1493_, 2, v_v_1475_);
lean_ctor_set(v_reuseFailAlloc_1493_, 3, v_l_1456_);
lean_ctor_set(v_reuseFailAlloc_1493_, 4, v_l_1456_);
v___x_1486_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1488_; 
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 4, v_l_1456_);
lean_ctor_set(v___x_1477_, 2, v_v_1362_);
lean_ctor_set(v___x_1477_, 1, v_k_1361_);
lean_ctor_set(v___x_1477_, 0, v___x_1370_);
v___x_1488_ = v___x_1477_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1492_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1492_, 3, v_l_1456_);
lean_ctor_set(v_reuseFailAlloc_1492_, 4, v_l_1456_);
v___x_1488_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
lean_object* v___x_1490_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v___x_1488_);
lean_ctor_set(v___x_1366_, 3, v___x_1486_);
lean_ctor_set(v___x_1366_, 2, v_v_1480_);
lean_ctor_set(v___x_1366_, 1, v_k_1479_);
lean_ctor_set(v___x_1366_, 0, v___x_1484_);
v___x_1490_ = v___x_1366_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v_k_1479_);
lean_ctor_set(v_reuseFailAlloc_1491_, 2, v_v_1480_);
lean_ctor_set(v_reuseFailAlloc_1491_, 3, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1491_, 4, v___x_1488_);
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
else
{
lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1502_ = lean_unsigned_to_nat(2u);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v_r_1473_);
lean_ctor_set(v___x_1366_, 3, v_impl_1369_);
lean_ctor_set(v___x_1366_, 0, v___x_1502_);
v___x_1504_ = v___x_1366_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1502_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1505_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1505_, 3, v_impl_1369_);
lean_ctor_set(v_reuseFailAlloc_1505_, 4, v_r_1473_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1507_; 
lean_dec(v_v_1362_);
lean_dec(v_k_1361_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 2, v_v_1358_);
lean_ctor_set(v___x_1366_, 1, v_k_1357_);
v___x_1507_ = v___x_1366_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_size_1360_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_k_1357_);
lean_ctor_set(v_reuseFailAlloc_1508_, 2, v_v_1358_);
lean_ctor_set(v_reuseFailAlloc_1508_, 3, v_l_1363_);
lean_ctor_set(v_reuseFailAlloc_1508_, 4, v_r_1364_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
default: 
{
lean_object* v_impl_1509_; lean_object* v___x_1510_; 
lean_dec(v_size_1360_);
v_impl_1509_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_k_1357_, v_v_1358_, v_r_1364_);
v___x_1510_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1363_) == 0)
{
lean_object* v_size_1511_; lean_object* v_size_1512_; lean_object* v_k_1513_; lean_object* v_v_1514_; lean_object* v_l_1515_; lean_object* v_r_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; 
v_size_1511_ = lean_ctor_get(v_l_1363_, 0);
v_size_1512_ = lean_ctor_get(v_impl_1509_, 0);
lean_inc(v_size_1512_);
v_k_1513_ = lean_ctor_get(v_impl_1509_, 1);
lean_inc(v_k_1513_);
v_v_1514_ = lean_ctor_get(v_impl_1509_, 2);
lean_inc(v_v_1514_);
v_l_1515_ = lean_ctor_get(v_impl_1509_, 3);
lean_inc(v_l_1515_);
v_r_1516_ = lean_ctor_get(v_impl_1509_, 4);
lean_inc(v_r_1516_);
v___x_1517_ = lean_unsigned_to_nat(3u);
v___x_1518_ = lean_nat_mul(v___x_1517_, v_size_1511_);
v___x_1519_ = lean_nat_dec_lt(v___x_1518_, v_size_1512_);
lean_dec(v___x_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1523_; 
lean_dec(v_r_1516_);
lean_dec(v_l_1515_);
lean_dec(v_v_1514_);
lean_dec(v_k_1513_);
v___x_1520_ = lean_nat_add(v___x_1510_, v_size_1511_);
v___x_1521_ = lean_nat_add(v___x_1520_, v_size_1512_);
lean_dec(v_size_1512_);
lean_dec(v___x_1520_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v_impl_1509_);
lean_ctor_set(v___x_1366_, 0, v___x_1521_);
v___x_1523_ = v___x_1366_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1524_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1524_, 3, v_l_1363_);
lean_ctor_set(v_reuseFailAlloc_1524_, 4, v_impl_1509_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
else
{
lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1588_; 
v_isSharedCheck_1588_ = !lean_is_exclusive(v_impl_1509_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; lean_object* v_unused_1590_; lean_object* v_unused_1591_; lean_object* v_unused_1592_; lean_object* v_unused_1593_; 
v_unused_1589_ = lean_ctor_get(v_impl_1509_, 4);
lean_dec(v_unused_1589_);
v_unused_1590_ = lean_ctor_get(v_impl_1509_, 3);
lean_dec(v_unused_1590_);
v_unused_1591_ = lean_ctor_get(v_impl_1509_, 2);
lean_dec(v_unused_1591_);
v_unused_1592_ = lean_ctor_get(v_impl_1509_, 1);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_impl_1509_, 0);
lean_dec(v_unused_1593_);
v___x_1526_ = v_impl_1509_;
v_isShared_1527_ = v_isSharedCheck_1588_;
goto v_resetjp_1525_;
}
else
{
lean_dec(v_impl_1509_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1588_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v_size_1528_; lean_object* v_k_1529_; lean_object* v_v_1530_; lean_object* v_l_1531_; lean_object* v_r_1532_; lean_object* v_size_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; uint8_t v___x_1536_; 
v_size_1528_ = lean_ctor_get(v_l_1515_, 0);
v_k_1529_ = lean_ctor_get(v_l_1515_, 1);
v_v_1530_ = lean_ctor_get(v_l_1515_, 2);
v_l_1531_ = lean_ctor_get(v_l_1515_, 3);
v_r_1532_ = lean_ctor_get(v_l_1515_, 4);
v_size_1533_ = lean_ctor_get(v_r_1516_, 0);
v___x_1534_ = lean_unsigned_to_nat(2u);
v___x_1535_ = lean_nat_mul(v___x_1534_, v_size_1533_);
v___x_1536_ = lean_nat_dec_lt(v_size_1528_, v___x_1535_);
lean_dec(v___x_1535_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1564_; 
lean_inc(v_r_1532_);
lean_inc(v_l_1531_);
lean_inc(v_v_1530_);
lean_inc(v_k_1529_);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_l_1515_);
if (v_isSharedCheck_1564_ == 0)
{
lean_object* v_unused_1565_; lean_object* v_unused_1566_; lean_object* v_unused_1567_; lean_object* v_unused_1568_; lean_object* v_unused_1569_; 
v_unused_1565_ = lean_ctor_get(v_l_1515_, 4);
lean_dec(v_unused_1565_);
v_unused_1566_ = lean_ctor_get(v_l_1515_, 3);
lean_dec(v_unused_1566_);
v_unused_1567_ = lean_ctor_get(v_l_1515_, 2);
lean_dec(v_unused_1567_);
v_unused_1568_ = lean_ctor_get(v_l_1515_, 1);
lean_dec(v_unused_1568_);
v_unused_1569_ = lean_ctor_get(v_l_1515_, 0);
lean_dec(v_unused_1569_);
v___x_1538_ = v_l_1515_;
v_isShared_1539_ = v_isSharedCheck_1564_;
goto v_resetjp_1537_;
}
else
{
lean_dec(v_l_1515_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1564_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1554_; 
v___x_1540_ = lean_nat_add(v___x_1510_, v_size_1511_);
v___x_1541_ = lean_nat_add(v___x_1540_, v_size_1512_);
lean_dec(v_size_1512_);
if (lean_obj_tag(v_l_1531_) == 0)
{
lean_object* v_size_1562_; 
v_size_1562_ = lean_ctor_get(v_l_1531_, 0);
lean_inc(v_size_1562_);
v___y_1554_ = v_size_1562_;
goto v___jp_1553_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_unsigned_to_nat(0u);
v___y_1554_ = v___x_1563_;
goto v___jp_1553_;
}
v___jp_1542_:
{
lean_object* v___x_1546_; lean_object* v___x_1548_; 
v___x_1546_ = lean_nat_add(v___y_1543_, v___y_1545_);
lean_dec(v___y_1545_);
lean_dec(v___y_1543_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 4, v_r_1516_);
lean_ctor_set(v___x_1538_, 3, v_r_1532_);
lean_ctor_set(v___x_1538_, 2, v_v_1514_);
lean_ctor_set(v___x_1538_, 1, v_k_1513_);
lean_ctor_set(v___x_1538_, 0, v___x_1546_);
v___x_1548_ = v___x_1538_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1546_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_k_1513_);
lean_ctor_set(v_reuseFailAlloc_1552_, 2, v_v_1514_);
lean_ctor_set(v_reuseFailAlloc_1552_, 3, v_r_1532_);
lean_ctor_set(v_reuseFailAlloc_1552_, 4, v_r_1516_);
v___x_1548_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
lean_object* v___x_1550_; 
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 4, v___x_1548_);
lean_ctor_set(v___x_1526_, 3, v___y_1544_);
lean_ctor_set(v___x_1526_, 2, v_v_1530_);
lean_ctor_set(v___x_1526_, 1, v_k_1529_);
lean_ctor_set(v___x_1526_, 0, v___x_1541_);
v___x_1550_ = v___x_1526_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v_k_1529_);
lean_ctor_set(v_reuseFailAlloc_1551_, 2, v_v_1530_);
lean_ctor_set(v_reuseFailAlloc_1551_, 3, v___y_1544_);
lean_ctor_set(v_reuseFailAlloc_1551_, 4, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
v___jp_1553_:
{
lean_object* v___x_1555_; lean_object* v___x_1557_; 
v___x_1555_ = lean_nat_add(v___x_1540_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec(v___x_1540_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v_l_1531_);
lean_ctor_set(v___x_1366_, 0, v___x_1555_);
v___x_1557_ = v___x_1366_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1555_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1561_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1561_, 3, v_l_1363_);
lean_ctor_set(v_reuseFailAlloc_1561_, 4, v_l_1531_);
v___x_1557_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_nat_add(v___x_1510_, v_size_1533_);
if (lean_obj_tag(v_r_1532_) == 0)
{
lean_object* v_size_1559_; 
v_size_1559_ = lean_ctor_get(v_r_1532_, 0);
lean_inc(v_size_1559_);
v___y_1543_ = v___x_1558_;
v___y_1544_ = v___x_1557_;
v___y_1545_ = v_size_1559_;
goto v___jp_1542_;
}
else
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_unsigned_to_nat(0u);
v___y_1543_ = v___x_1558_;
v___y_1544_ = v___x_1557_;
v___y_1545_ = v___x_1560_;
goto v___jp_1542_;
}
}
}
}
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1574_; 
lean_del_object(v___x_1366_);
v___x_1570_ = lean_nat_add(v___x_1510_, v_size_1511_);
v___x_1571_ = lean_nat_add(v___x_1570_, v_size_1512_);
lean_dec(v_size_1512_);
v___x_1572_ = lean_nat_add(v___x_1570_, v_size_1528_);
lean_dec(v___x_1570_);
lean_inc_ref(v_l_1363_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 4, v_l_1515_);
lean_ctor_set(v___x_1526_, 3, v_l_1363_);
lean_ctor_set(v___x_1526_, 2, v_v_1362_);
lean_ctor_set(v___x_1526_, 1, v_k_1361_);
lean_ctor_set(v___x_1526_, 0, v___x_1572_);
v___x_1574_ = v___x_1526_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1572_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1587_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1587_, 3, v_l_1363_);
lean_ctor_set(v_reuseFailAlloc_1587_, 4, v_l_1515_);
v___x_1574_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
v_isSharedCheck_1581_ = !lean_is_exclusive(v_l_1363_);
if (v_isSharedCheck_1581_ == 0)
{
lean_object* v_unused_1582_; lean_object* v_unused_1583_; lean_object* v_unused_1584_; lean_object* v_unused_1585_; lean_object* v_unused_1586_; 
v_unused_1582_ = lean_ctor_get(v_l_1363_, 4);
lean_dec(v_unused_1582_);
v_unused_1583_ = lean_ctor_get(v_l_1363_, 3);
lean_dec(v_unused_1583_);
v_unused_1584_ = lean_ctor_get(v_l_1363_, 2);
lean_dec(v_unused_1584_);
v_unused_1585_ = lean_ctor_get(v_l_1363_, 1);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v_l_1363_, 0);
lean_dec(v_unused_1586_);
v___x_1576_ = v_l_1363_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_dec(v_l_1363_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 4, v_r_1516_);
lean_ctor_set(v___x_1576_, 3, v___x_1574_);
lean_ctor_set(v___x_1576_, 2, v_v_1514_);
lean_ctor_set(v___x_1576_, 1, v_k_1513_);
lean_ctor_set(v___x_1576_, 0, v___x_1571_);
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1571_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_k_1513_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v_v_1514_);
lean_ctor_set(v_reuseFailAlloc_1580_, 3, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1580_, 4, v_r_1516_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1594_; 
v_l_1594_ = lean_ctor_get(v_impl_1509_, 3);
lean_inc(v_l_1594_);
if (lean_obj_tag(v_l_1594_) == 0)
{
lean_object* v_r_1595_; lean_object* v_k_1596_; lean_object* v_v_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1620_; 
v_r_1595_ = lean_ctor_get(v_impl_1509_, 4);
v_k_1596_ = lean_ctor_get(v_impl_1509_, 1);
v_v_1597_ = lean_ctor_get(v_impl_1509_, 2);
v_isSharedCheck_1620_ = !lean_is_exclusive(v_impl_1509_);
if (v_isSharedCheck_1620_ == 0)
{
lean_object* v_unused_1621_; lean_object* v_unused_1622_; 
v_unused_1621_ = lean_ctor_get(v_impl_1509_, 3);
lean_dec(v_unused_1621_);
v_unused_1622_ = lean_ctor_get(v_impl_1509_, 0);
lean_dec(v_unused_1622_);
v___x_1599_ = v_impl_1509_;
v_isShared_1600_ = v_isSharedCheck_1620_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_r_1595_);
lean_inc(v_v_1597_);
lean_inc(v_k_1596_);
lean_dec(v_impl_1509_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1620_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v_k_1601_; lean_object* v_v_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1616_; 
v_k_1601_ = lean_ctor_get(v_l_1594_, 1);
v_v_1602_ = lean_ctor_get(v_l_1594_, 2);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_l_1594_);
if (v_isSharedCheck_1616_ == 0)
{
lean_object* v_unused_1617_; lean_object* v_unused_1618_; lean_object* v_unused_1619_; 
v_unused_1617_ = lean_ctor_get(v_l_1594_, 4);
lean_dec(v_unused_1617_);
v_unused_1618_ = lean_ctor_get(v_l_1594_, 3);
lean_dec(v_unused_1618_);
v_unused_1619_ = lean_ctor_get(v_l_1594_, 0);
lean_dec(v_unused_1619_);
v___x_1604_ = v_l_1594_;
v_isShared_1605_ = v_isSharedCheck_1616_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_v_1602_);
lean_inc(v_k_1601_);
lean_dec(v_l_1594_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1616_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1608_; 
v___x_1606_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1595_, 2);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 4, v_r_1595_);
lean_ctor_set(v___x_1604_, 3, v_r_1595_);
lean_ctor_set(v___x_1604_, 2, v_v_1362_);
lean_ctor_set(v___x_1604_, 1, v_k_1361_);
lean_ctor_set(v___x_1604_, 0, v___x_1510_);
v___x_1608_ = v___x_1604_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1615_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1615_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1615_, 3, v_r_1595_);
lean_ctor_set(v_reuseFailAlloc_1615_, 4, v_r_1595_);
v___x_1608_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
lean_object* v___x_1610_; 
lean_inc(v_r_1595_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 3, v_r_1595_);
lean_ctor_set(v___x_1599_, 0, v___x_1510_);
v___x_1610_ = v___x_1599_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_k_1596_);
lean_ctor_set(v_reuseFailAlloc_1614_, 2, v_v_1597_);
lean_ctor_set(v_reuseFailAlloc_1614_, 3, v_r_1595_);
lean_ctor_set(v_reuseFailAlloc_1614_, 4, v_r_1595_);
v___x_1610_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1612_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v___x_1610_);
lean_ctor_set(v___x_1366_, 3, v___x_1608_);
lean_ctor_set(v___x_1366_, 2, v_v_1602_);
lean_ctor_set(v___x_1366_, 1, v_k_1601_);
lean_ctor_set(v___x_1366_, 0, v___x_1606_);
v___x_1612_ = v___x_1366_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_k_1601_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_v_1602_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v___x_1608_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
}
else
{
lean_object* v_r_1623_; 
v_r_1623_ = lean_ctor_get(v_impl_1509_, 4);
lean_inc(v_r_1623_);
if (lean_obj_tag(v_r_1623_) == 0)
{
lean_object* v_k_1624_; lean_object* v_v_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1636_; 
v_k_1624_ = lean_ctor_get(v_impl_1509_, 1);
v_v_1625_ = lean_ctor_get(v_impl_1509_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_impl_1509_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; lean_object* v_unused_1638_; lean_object* v_unused_1639_; 
v_unused_1637_ = lean_ctor_get(v_impl_1509_, 4);
lean_dec(v_unused_1637_);
v_unused_1638_ = lean_ctor_get(v_impl_1509_, 3);
lean_dec(v_unused_1638_);
v_unused_1639_ = lean_ctor_get(v_impl_1509_, 0);
lean_dec(v_unused_1639_);
v___x_1627_ = v_impl_1509_;
v_isShared_1628_ = v_isSharedCheck_1636_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_v_1625_);
lean_inc(v_k_1624_);
lean_dec(v_impl_1509_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1636_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1629_; lean_object* v___x_1631_; 
v___x_1629_ = lean_unsigned_to_nat(3u);
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 4, v_l_1594_);
lean_ctor_set(v___x_1627_, 2, v_v_1362_);
lean_ctor_set(v___x_1627_, 1, v_k_1361_);
lean_ctor_set(v___x_1627_, 0, v___x_1510_);
v___x_1631_ = v___x_1627_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1635_, 3, v_l_1594_);
lean_ctor_set(v_reuseFailAlloc_1635_, 4, v_l_1594_);
v___x_1631_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
lean_object* v___x_1633_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v_r_1623_);
lean_ctor_set(v___x_1366_, 3, v___x_1631_);
lean_ctor_set(v___x_1366_, 2, v_v_1625_);
lean_ctor_set(v___x_1366_, 1, v_k_1624_);
lean_ctor_set(v___x_1366_, 0, v___x_1629_);
v___x_1633_ = v___x_1366_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1629_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_k_1624_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v_v_1625_);
lean_ctor_set(v_reuseFailAlloc_1634_, 3, v___x_1631_);
lean_ctor_set(v_reuseFailAlloc_1634_, 4, v_r_1623_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1642_; 
v___x_1640_ = lean_unsigned_to_nat(2u);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 4, v_impl_1509_);
lean_ctor_set(v___x_1366_, 3, v_r_1623_);
lean_ctor_set(v___x_1366_, 0, v___x_1640_);
v___x_1642_ = v___x_1366_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1640_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_k_1361_);
lean_ctor_set(v_reuseFailAlloc_1643_, 2, v_v_1362_);
lean_ctor_set(v_reuseFailAlloc_1643_, 3, v_r_1623_);
lean_ctor_set(v_reuseFailAlloc_1643_, 4, v_impl_1509_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
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
lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = lean_unsigned_to_nat(1u);
v___x_1646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
lean_ctor_set(v___x_1646_, 1, v_k_1357_);
lean_ctor_set(v___x_1646_, 2, v_v_1358_);
lean_ctor_set(v___x_1646_, 3, v_t_1359_);
lean_ctor_set(v___x_1646_, 4, v_t_1359_);
return v___x_1646_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(lean_object* v_k_1647_, lean_object* v_x_1648_){
_start:
{
if (lean_obj_tag(v_x_1648_) == 0)
{
lean_object* v___x_1649_; 
lean_dec_ref(v_k_1647_);
v___x_1649_ = lean_box(0);
return v___x_1649_;
}
else
{
lean_object* v_val_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v_val_1650_ = lean_ctor_get(v_x_1648_, 0);
lean_inc(v_val_1650_);
v___x_1651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1651_, 0, v_k_1647_);
lean_ctor_set(v___x_1651_, 1, v_val_1650_);
v___x_1652_ = lean_box(0);
v___x_1653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
return v___x_1653_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4___boxed(lean_object* v_k_1654_, lean_object* v_x_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(v_k_1654_, v_x_1655_);
lean_dec(v_x_1655_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5_spec__9(size_t v_sz_1657_, size_t v_i_1658_, lean_object* v_bs_1659_){
_start:
{
uint8_t v___x_1660_; 
v___x_1660_ = lean_usize_dec_lt(v_i_1658_, v_sz_1657_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = l_unsafeCast___redArg(v_bs_1659_);
lean_dec_ref(v_bs_1659_);
v___x_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
return v___x_1662_;
}
else
{
lean_object* v_v_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v_v_1663_ = lean_array_uget_borrowed(v_bs_1659_, v_i_1658_);
v___x_1664_ = l_unsafeCast___redArg(v_v_1663_);
v___x_1665_ = l_Lean_Lsp_instFromJsonCallHierarchyIncomingCall_fromJson(v___x_1664_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec_ref(v_bs_1659_);
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1675_; lean_object* v_bs_x27_1676_; size_t v___x_1677_; size_t v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_a_1674_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1665_, 1);
v___x_1675_ = lean_unsigned_to_nat(0u);
v_bs_x27_1676_ = lean_array_uset(v_bs_1659_, v_i_1658_, v___x_1675_);
v___x_1677_ = ((size_t)1ULL);
v___x_1678_ = lean_usize_add(v_i_1658_, v___x_1677_);
v___x_1679_ = l_unsafeCast___redArg(v_a_1674_);
lean_dec(v_a_1674_);
v___x_1680_ = lean_array_uset(v_bs_x27_1676_, v_i_1658_, v___x_1679_);
v_i_1658_ = v___x_1678_;
v_bs_1659_ = v___x_1680_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_sz_1682_, lean_object* v_i_1683_, lean_object* v_bs_1684_){
_start:
{
size_t v_sz_boxed_1685_; size_t v_i_boxed_1686_; lean_object* v_res_1687_; 
v_sz_boxed_1685_ = lean_unbox_usize(v_sz_1682_);
lean_dec(v_sz_1682_);
v_i_boxed_1686_ = lean_unbox_usize(v_i_1683_);
lean_dec(v_i_1683_);
v_res_1687_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5_spec__9(v_sz_boxed_1685_, v_i_boxed_1686_, v_bs_1684_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5(lean_object* v_x_1688_){
_start:
{
if (lean_obj_tag(v_x_1688_) == 4)
{
lean_object* v_elems_1689_; size_t v_sz_1690_; size_t v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_elems_1689_ = lean_ctor_get(v_x_1688_, 0);
lean_inc_ref(v_elems_1689_);
lean_dec_ref_known(v_x_1688_, 1);
v_sz_1690_ = lean_array_size(v_elems_1689_);
v___x_1691_ = ((size_t)0ULL);
v___x_1692_ = l_unsafeCast___redArg(v_elems_1689_);
lean_dec_ref(v_elems_1689_);
v___x_1693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5_spec__9(v_sz_1690_, v___x_1691_, v___x_1692_);
v___x_1694_ = l_unsafeCast___redArg(v___x_1693_);
lean_dec_ref(v___x_1693_);
return v___x_1694_;
}
else
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1695_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_1696_ = lean_unsigned_to_nat(80u);
v___x_1697_ = l_Lean_Json_pretty(v_x_1688_, v___x_1696_);
v___x_1698_ = lean_string_append(v___x_1695_, v___x_1697_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_1700_ = lean_string_append(v___x_1698_, v___x_1699_);
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
return v___x_1701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3(lean_object* v_x_1704_){
_start:
{
if (lean_obj_tag(v_x_1704_) == 0)
{
lean_object* v___x_1705_; 
v___x_1705_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3___closed__0));
return v___x_1705_;
}
else
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3_spec__5(v_x_1704_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1723_; 
v_a_1715_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1717_ = v___x_1706_;
v_isShared_1718_ = v_isSharedCheck_1723_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1706_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1723_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1719_, 0, v_a_1715_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 0, v___x_1719_);
v___x_1721_ = v___x_1717_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2(lean_object* v_expectedID_1724_, lean_object* v_a_1725_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_Lsp_Ipc_stdout(v_a_1725_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1871_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1730_ = v___x_1727_;
v_isShared_1731_ = v_isSharedCheck_1871_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1727_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1871_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_1728_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1862_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1735_ = v___x_1732_;
v_isShared_1736_ = v_isSharedCheck_1862_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1862_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___y_1738_; lean_object* v___y_1739_; 
switch(lean_obj_tag(v_a_1733_))
{
case 2:
{
lean_object* v_id_1745_; lean_object* v_result_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1790_; 
v_id_1745_ = lean_ctor_get(v_a_1733_, 0);
v_result_1746_ = lean_ctor_get(v_a_1733_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_a_1733_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1748_ = v_a_1733_;
v_isShared_1749_ = v_isSharedCheck_1790_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_result_1746_);
lean_inc(v_id_1745_);
lean_dec(v_a_1733_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1790_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
uint8_t v___x_1750_; 
v___x_1750_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_1745_, v_expectedID_1724_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1751_; lean_object* v___y_1753_; 
lean_del_object(v___x_1748_);
lean_dec(v_result_1746_);
lean_del_object(v___x_1730_);
v___x_1751_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
switch(lean_obj_tag(v_expectedID_1724_))
{
case 0:
{
lean_object* v_s_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_s_1764_ = lean_ctor_get(v_expectedID_1724_, 0);
lean_inc_ref(v_s_1764_);
lean_dec_ref_known(v_expectedID_1724_, 1);
v___x_1765_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_1766_ = lean_string_append(v___x_1765_, v_s_1764_);
lean_dec_ref(v_s_1764_);
v___x_1767_ = lean_string_append(v___x_1766_, v___x_1765_);
v___y_1753_ = v___x_1767_;
goto v___jp_1752_;
}
case 1:
{
lean_object* v_n_1768_; lean_object* v___x_1769_; 
v_n_1768_ = lean_ctor_get(v_expectedID_1724_, 0);
lean_inc_ref(v_n_1768_);
lean_dec_ref_known(v_expectedID_1724_, 1);
v___x_1769_ = l_Lean_JsonNumber_toString(v_n_1768_);
v___y_1753_ = v___x_1769_;
goto v___jp_1752_;
}
default: 
{
lean_object* v___x_1770_; 
v___x_1770_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_1753_ = v___x_1770_;
goto v___jp_1752_;
}
}
v___jp_1752_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1754_ = lean_string_append(v___x_1751_, v___y_1753_);
lean_dec_ref(v___y_1753_);
v___x_1755_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_1756_ = lean_string_append(v___x_1754_, v___x_1755_);
switch(lean_obj_tag(v_id_1745_))
{
case 0:
{
lean_object* v_s_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v_s_1757_ = lean_ctor_get(v_id_1745_, 0);
lean_inc_ref(v_s_1757_);
lean_dec_ref_known(v_id_1745_, 1);
v___x_1758_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_1759_ = lean_string_append(v___x_1758_, v_s_1757_);
lean_dec_ref(v_s_1757_);
v___x_1760_ = lean_string_append(v___x_1759_, v___x_1758_);
v___y_1738_ = v___x_1756_;
v___y_1739_ = v___x_1760_;
goto v___jp_1737_;
}
case 1:
{
lean_object* v_n_1761_; lean_object* v___x_1762_; 
v_n_1761_ = lean_ctor_get(v_id_1745_, 0);
lean_inc_ref(v_n_1761_);
lean_dec_ref_known(v_id_1745_, 1);
v___x_1762_ = l_Lean_JsonNumber_toString(v_n_1761_);
v___y_1738_ = v___x_1756_;
v___y_1739_ = v___x_1762_;
goto v___jp_1737_;
}
default: 
{
lean_object* v___x_1763_; 
v___x_1763_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_1738_ = v___x_1756_;
v___y_1739_ = v___x_1763_;
goto v___jp_1737_;
}
}
}
}
else
{
lean_object* v___x_1771_; 
lean_dec(v_id_1745_);
lean_del_object(v___x_1735_);
lean_inc(v_result_1746_);
v___x_1771_ = l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__3(v_result_1746_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1781_; 
lean_del_object(v___x_1748_);
lean_dec(v_expectedID_1724_);
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v___x_1773_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0));
v___x_1774_ = l_Lean_Json_compress(v_result_1746_);
v___x_1775_ = lean_string_append(v___x_1773_, v___x_1774_);
lean_dec_ref(v___x_1774_);
v___x_1776_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1));
v___x_1777_ = lean_string_append(v___x_1775_, v___x_1776_);
v___x_1778_ = lean_string_append(v___x_1777_, v_a_1772_);
lean_dec(v_a_1772_);
v___x_1779_ = lean_mk_io_user_error(v___x_1778_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set_tag(v___x_1730_, 1);
lean_ctor_set(v___x_1730_, 0, v___x_1779_);
v___x_1781_ = v___x_1730_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1779_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; 
lean_dec(v_result_1746_);
v_a_1783_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v___x_1771_, 1);
if (v_isShared_1749_ == 0)
{
lean_ctor_set_tag(v___x_1748_, 0);
lean_ctor_set(v___x_1748_, 1, v_a_1783_);
lean_ctor_set(v___x_1748_, 0, v_expectedID_1724_);
v___x_1785_ = v___x_1748_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_expectedID_1724_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_a_1783_);
v___x_1785_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
lean_object* v___x_1787_; 
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1785_);
v___x_1787_ = v___x_1730_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1785_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
}
}
case 3:
{
lean_object* v_id_1791_; uint8_t v_code_1792_; lean_object* v_message_1793_; lean_object* v_data_x3f_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___x_1826_; lean_object* v___y_1828_; 
lean_del_object(v___x_1735_);
lean_dec(v_expectedID_1724_);
v_id_1791_ = lean_ctor_get(v_a_1733_, 0);
lean_inc(v_id_1791_);
v_code_1792_ = lean_ctor_get_uint8(v_a_1733_, sizeof(void*)*3);
v_message_1793_ = lean_ctor_get(v_a_1733_, 1);
lean_inc_ref(v_message_1793_);
v_data_x3f_1794_ = lean_ctor_get(v_a_1733_, 2);
lean_inc(v_data_x3f_1794_);
lean_dec_ref_known(v_a_1733_, 3);
v___x_1795_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2));
v___x_1796_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7));
v___x_1826_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11));
switch(lean_obj_tag(v_id_1791_))
{
case 0:
{
lean_object* v_s_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
v_s_1844_ = lean_ctor_get(v_id_1791_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_id_1791_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v_id_1791_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_s_1844_);
lean_dec(v_id_1791_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
lean_ctor_set_tag(v___x_1846_, 3);
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_s_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
v___y_1828_ = v___x_1849_;
goto v___jp_1827_;
}
}
}
case 1:
{
lean_object* v_n_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
v_n_1852_ = lean_ctor_get(v_id_1791_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v_id_1791_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v_id_1791_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_n_1852_);
lean_dec(v_id_1791_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set_tag(v___x_1854_, 2);
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_n_1852_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
v___y_1828_ = v___x_1857_;
goto v___jp_1827_;
}
}
}
default: 
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_box(0);
v___y_1828_ = v___x_1860_;
goto v___jp_1827_;
}
}
v___jp_1797_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1824_; 
lean_inc(v___y_1801_);
lean_inc_ref(v___y_1800_);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___y_1800_);
lean_ctor_set(v___x_1802_, 1, v___y_1801_);
v___x_1803_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8));
v___x_1804_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1804_, 0, v_message_1793_);
v___x_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1803_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = lean_box(0);
v___x_1807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1802_);
lean_ctor_set(v___x_1808_, 1, v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9));
v___x_1810_ = l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(v___x_1809_, v_data_x3f_1794_);
lean_dec(v_data_x3f_1794_);
v___x_1811_ = l_List_appendTR___redArg(v___x_1808_, v___x_1810_);
v___x_1812_ = l_Lean_Json_mkObj(v___x_1811_);
lean_dec(v___x_1811_);
lean_inc_ref(v___y_1798_);
v___x_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___y_1798_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v___x_1814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___x_1806_);
v___x_1815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___y_1799_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
v___x_1816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1796_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
v___x_1817_ = l_Lean_Json_mkObj(v___x_1816_);
lean_dec_ref_known(v___x_1816_, 2);
v___x_1818_ = l_Lean_Json_compress(v___x_1817_);
v___x_1819_ = lean_string_append(v___x_1795_, v___x_1818_);
lean_dec_ref(v___x_1818_);
v___x_1820_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_1821_ = lean_string_append(v___x_1819_, v___x_1820_);
v___x_1822_ = lean_mk_io_user_error(v___x_1821_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set_tag(v___x_1730_, 1);
lean_ctor_set(v___x_1730_, 0, v___x_1822_);
v___x_1824_ = v___x_1730_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
v___jp_1827_:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1826_);
lean_ctor_set(v___x_1829_, 1, v___y_1828_);
v___x_1830_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12));
v___x_1831_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13));
switch(v_code_1792_)
{
case 0:
{
lean_object* v___x_1832_; 
v___x_1832_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1832_;
goto v___jp_1797_;
}
case 1:
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1833_;
goto v___jp_1797_;
}
case 2:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1834_;
goto v___jp_1797_;
}
case 3:
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1835_;
goto v___jp_1797_;
}
case 4:
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1836_;
goto v___jp_1797_;
}
case 5:
{
lean_object* v___x_1837_; 
v___x_1837_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1837_;
goto v___jp_1797_;
}
case 6:
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1838_;
goto v___jp_1797_;
}
case 7:
{
lean_object* v___x_1839_; 
v___x_1839_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1839_;
goto v___jp_1797_;
}
case 8:
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1840_;
goto v___jp_1797_;
}
case 9:
{
lean_object* v___x_1841_; 
v___x_1841_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1841_;
goto v___jp_1797_;
}
case 10:
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1842_;
goto v___jp_1797_;
}
default: 
{
lean_object* v___x_1843_; 
v___x_1843_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61);
v___y_1798_ = v___x_1830_;
v___y_1799_ = v___x_1829_;
v___y_1800_ = v___x_1831_;
v___y_1801_ = v___x_1843_;
goto v___jp_1797_;
}
}
}
}
default: 
{
lean_del_object(v___x_1735_);
lean_dec(v_a_1733_);
lean_del_object(v___x_1730_);
goto _start;
}
}
v___jp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1743_; 
v___x_1740_ = lean_string_append(v___y_1738_, v___y_1739_);
lean_dec_ref(v___y_1739_);
v___x_1741_ = lean_mk_io_user_error(v___x_1740_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set_tag(v___x_1735_, 1);
lean_ctor_set(v___x_1735_, 0, v___x_1741_);
v___x_1743_ = v___x_1735_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1741_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_del_object(v___x_1730_);
lean_dec(v_expectedID_1724_);
v_a_1863_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1732_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1732_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec(v_expectedID_1724_);
v_a_1872_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1727_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1727_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
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
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2___boxed(lean_object* v_expectedID_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2(v_expectedID_1880_, v_a_1881_);
lean_dec_ref(v_a_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1_spec__2(lean_object* v_v_1884_){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = l_Lean_Lsp_instToJsonCallHierarchyIncomingCallsParams_toJson(v_v_1884_);
v___x_1886_ = l_Lean_Json_Structured_fromJson_x3f(v___x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1(lean_object* v_h_1887_, lean_object* v_r_1888_){
_start:
{
lean_object* v_id_1890_; lean_object* v_method_1891_; lean_object* v_param_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1912_; 
v_id_1890_ = lean_ctor_get(v_r_1888_, 0);
v_method_1891_ = lean_ctor_get(v_r_1888_, 1);
v_param_1892_ = lean_ctor_get(v_r_1888_, 2);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_r_1888_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1894_ = v_r_1888_;
v_isShared_1895_ = v_isSharedCheck_1912_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_param_1892_);
lean_inc(v_method_1891_);
lean_inc(v_id_1890_);
lean_dec(v_r_1888_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1912_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___y_1897_; lean_object* v___x_1902_; 
v___x_1902_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1_spec__2(v_param_1892_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v___x_1903_; 
lean_dec_ref_known(v___x_1902_, 1);
v___x_1903_ = lean_box(0);
v___y_1897_ = v___x_1903_;
goto v___jp_1896_;
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
v_a_1904_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1902_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1902_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
v___y_1897_ = v___x_1909_;
goto v___jp_1896_;
}
}
}
v___jp_1896_:
{
lean_object* v___x_1899_; 
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 2, v___y_1897_);
v___x_1899_ = v___x_1894_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_id_1890_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_method_1891_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v___y_1897_);
v___x_1899_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
lean_object* v___x_1900_; 
v___x_1900_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_1887_, v___x_1899_);
return v___x_1900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1___boxed(lean_object* v_h_1913_, lean_object* v_r_1914_, lean_object* v_a_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1(v_h_1913_, v_r_1914_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1(lean_object* v_r_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v_a_1921_; lean_object* v___x_1922_; 
v___x_1920_ = l_Lean_Lsp_Ipc_stdin(v_a_1918_);
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref(v___x_1920_);
v___x_1922_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1_spec__1(v_a_1921_, v_r_1917_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1___boxed(lean_object* v_r_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1(v_r_1923_, v_a_1924_);
lean_dec_ref(v_a_1924_);
return v_res_1926_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(lean_object* v_k_1927_, lean_object* v_t_1928_){
_start:
{
if (lean_obj_tag(v_t_1928_) == 0)
{
lean_object* v_k_1929_; lean_object* v_l_1930_; lean_object* v_r_1931_; uint8_t v___x_1932_; 
v_k_1929_ = lean_ctor_get(v_t_1928_, 1);
v_l_1930_ = lean_ctor_get(v_t_1928_, 3);
v_r_1931_ = lean_ctor_get(v_t_1928_, 4);
v___x_1932_ = lean_string_compare(v_k_1927_, v_k_1929_);
switch(v___x_1932_)
{
case 0:
{
v_t_1928_ = v_l_1930_;
goto _start;
}
case 1:
{
uint8_t v___x_1934_; 
v___x_1934_ = 1;
return v___x_1934_;
}
default: 
{
v_t_1928_ = v_r_1931_;
goto _start;
}
}
}
else
{
uint8_t v___x_1936_; 
v___x_1936_ = 0;
return v___x_1936_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg___boxed(lean_object* v_k_1937_, lean_object* v_t_1938_){
_start:
{
uint8_t v_res_1939_; lean_object* v_r_1940_; 
v_res_1939_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(v_k_1937_, v_t_1938_);
lean_dec(v_t_1938_);
lean_dec_ref(v_k_1937_);
v_r_1940_ = lean_box(v_res_1939_);
return v_r_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go(lean_object* v_requestNo_1948_, lean_object* v_item_1949_, lean_object* v_fromRanges_1950_, lean_object* v_visited_1951_, lean_object* v_a_1952_){
_start:
{
lean_object* v_name_1954_; uint8_t v___x_1955_; 
v_name_1954_ = lean_ctor_get(v_item_1949_, 0);
v___x_1955_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(v_name_1954_, v_visited_1951_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
lean_inc(v_requestNo_1948_);
v___x_1956_ = l_Lean_JsonNumber_fromNat(v_requestNo_1948_);
v___x_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
v___x_1958_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__0));
lean_inc_ref(v_item_1949_);
lean_inc_ref(v___x_1957_);
v___x_1959_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1957_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
lean_ctor_set(v___x_1959_, 2, v_item_1949_);
v___x_1960_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__1(v___x_1959_, v_a_1952_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v___x_1961_; 
lean_dec_ref_known(v___x_1960_, 1);
v___x_1961_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2(v___x_1957_, v_a_1952_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1999_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___x_1961_, 1);
if (v___x_1955_ == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = lean_box(0);
lean_inc_ref(v_name_1954_);
v___x_2006_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_name_1954_, v___x_2005_, v_visited_1951_);
v___y_1999_ = v___x_2006_;
goto v___jp_1998_;
}
else
{
v___y_1999_ = v_visited_1951_;
goto v___jp_1998_;
}
v___jp_1963_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; size_t v_sz_1969_; size_t v___x_1970_; lean_object* v___x_1971_; 
v___x_1967_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1));
v___x_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___y_1965_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v_sz_1969_ = lean_array_size(v___y_1966_);
v___x_1970_ = ((size_t)0ULL);
v___x_1971_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__3(v___y_1964_, v___y_1966_, v_sz_1969_, v___x_1970_, v___x_1968_, v_a_1952_);
lean_dec_ref(v___y_1966_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1989_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1974_ = v___x_1971_;
v_isShared_1975_ = v_isSharedCheck_1989_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1989_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v_fst_1976_; lean_object* v_snd_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1988_; 
v_fst_1976_ = lean_ctor_get(v_a_1972_, 0);
v_snd_1977_ = lean_ctor_get(v_a_1972_, 1);
v_isSharedCheck_1988_ = !lean_is_exclusive(v_a_1972_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1979_ = v_a_1972_;
v_isShared_1980_ = v_isSharedCheck_1988_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_snd_1977_);
lean_inc(v_fst_1976_);
lean_dec(v_a_1972_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1988_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1981_; lean_object* v___x_1983_; 
v___x_1981_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1981_, 0, v_item_1949_);
lean_ctor_set(v___x_1981_, 1, v_fromRanges_1950_);
lean_ctor_set(v___x_1981_, 2, v_snd_1977_);
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 1, v_fst_1976_);
lean_ctor_set(v___x_1979_, 0, v___x_1981_);
v___x_1983_ = v___x_1979_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1981_);
lean_ctor_set(v_reuseFailAlloc_1987_, 1, v_fst_1976_);
v___x_1983_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1985_; 
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 0, v___x_1983_);
v___x_1985_ = v___x_1974_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v___x_1983_);
v___x_1985_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
return v___x_1985_;
}
}
}
}
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_dec_ref(v_fromRanges_1950_);
lean_dec_ref(v_item_1949_);
v_a_1990_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1971_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1971_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
v___jp_1998_:
{
lean_object* v_result_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v_result_2000_ = lean_ctor_get(v_a_1962_, 1);
lean_inc(v_result_2000_);
lean_dec(v_a_1962_);
v___x_2001_ = lean_unsigned_to_nat(1u);
v___x_2002_ = lean_nat_add(v_requestNo_1948_, v___x_2001_);
lean_dec(v_requestNo_1948_);
if (lean_obj_tag(v_result_2000_) == 0)
{
lean_object* v___x_2003_; 
v___x_2003_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__2));
v___y_1964_ = v___y_1999_;
v___y_1965_ = v___x_2002_;
v___y_1966_ = v___x_2003_;
goto v___jp_1963_;
}
else
{
lean_object* v_val_2004_; 
v_val_2004_ = lean_ctor_get(v_result_2000_, 0);
lean_inc(v_val_2004_);
lean_dec_ref_known(v_result_2000_, 1);
v___y_1964_ = v___y_1999_;
v___y_1965_ = v___x_2002_;
v___y_1966_ = v_val_2004_;
goto v___jp_1963_;
}
}
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
lean_dec(v_visited_1951_);
lean_dec_ref(v_fromRanges_1950_);
lean_dec_ref(v_item_1949_);
lean_dec(v_requestNo_1948_);
v_a_2007_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_1961_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_a_2007_);
lean_dec(v___x_1961_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_dec_ref_known(v___x_1957_, 1);
lean_dec(v_visited_1951_);
lean_dec_ref(v_fromRanges_1950_);
lean_dec_ref(v_item_1949_);
lean_dec(v_requestNo_1948_);
v_a_2015_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_1960_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_1960_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
else
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_dec(v_visited_1951_);
lean_dec_ref(v_fromRanges_1950_);
v___x_2023_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3));
v___x_2024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2024_, 0, v_item_1949_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
lean_ctor_set(v___x_2024_, 2, v___x_2023_);
v___x_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
lean_ctor_set(v___x_2025_, 1, v_requestNo_1948_);
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
return v___x_2026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__3(lean_object* v___x_2027_, lean_object* v_as_2028_, size_t v_sz_2029_, size_t v_i_2030_, lean_object* v_b_2031_, lean_object* v___y_2032_){
_start:
{
uint8_t v___x_2034_; 
v___x_2034_ = lean_usize_dec_lt(v_i_2030_, v_sz_2029_);
if (v___x_2034_ == 0)
{
lean_object* v___x_2035_; 
lean_dec(v___x_2027_);
v___x_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2035_, 0, v_b_2031_);
return v___x_2035_;
}
else
{
lean_object* v_fst_2036_; lean_object* v_snd_2037_; lean_object* v_a_2038_; lean_object* v_from_2039_; lean_object* v_fromRanges_2040_; lean_object* v___x_2041_; 
v_fst_2036_ = lean_ctor_get(v_b_2031_, 0);
lean_inc(v_fst_2036_);
v_snd_2037_ = lean_ctor_get(v_b_2031_, 1);
lean_inc(v_snd_2037_);
lean_dec_ref(v_b_2031_);
v_a_2038_ = lean_array_uget_borrowed(v_as_2028_, v_i_2030_);
v_from_2039_ = lean_ctor_get(v_a_2038_, 0);
v_fromRanges_2040_ = lean_ctor_get(v_a_2038_, 1);
lean_inc(v___x_2027_);
lean_inc_ref(v_fromRanges_2040_);
lean_inc_ref(v_from_2039_);
v___x_2041_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go(v_fst_2036_, v_from_2039_, v_fromRanges_2040_, v___x_2027_, v___y_2032_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v_fst_2043_; lean_object* v_snd_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2055_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v_fst_2043_ = lean_ctor_get(v_a_2042_, 0);
v_snd_2044_ = lean_ctor_get(v_a_2042_, 1);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_a_2042_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2046_ = v_a_2042_;
v_isShared_2047_ = v_isSharedCheck_2055_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_snd_2044_);
lean_inc(v_fst_2043_);
lean_dec(v_a_2042_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2055_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2048_; lean_object* v___x_2050_; 
v___x_2048_ = lean_array_push(v_snd_2037_, v_fst_2043_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 1, v___x_2048_);
lean_ctor_set(v___x_2046_, 0, v_snd_2044_);
v___x_2050_ = v___x_2046_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_snd_2044_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v___x_2048_);
v___x_2050_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
size_t v___x_2051_; size_t v___x_2052_; 
v___x_2051_ = ((size_t)1ULL);
v___x_2052_ = lean_usize_add(v_i_2030_, v___x_2051_);
v_i_2030_ = v___x_2052_;
v_b_2031_ = v___x_2050_;
goto _start;
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
lean_dec(v_snd_2037_);
lean_dec(v___x_2027_);
v_a_2056_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2041_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2041_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__3___boxed(lean_object* v___x_2064_, lean_object* v_as_2065_, lean_object* v_sz_2066_, lean_object* v_i_2067_, lean_object* v_b_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
size_t v_sz_boxed_2071_; size_t v_i_boxed_2072_; lean_object* v_res_2073_; 
v_sz_boxed_2071_ = lean_unbox_usize(v_sz_2066_);
lean_dec(v_sz_2066_);
v_i_boxed_2072_ = lean_unbox_usize(v_i_2067_);
lean_dec(v_i_2067_);
v_res_2073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__3(v___x_2064_, v_as_2065_, v_sz_boxed_2071_, v_i_boxed_2072_, v_b_2068_, v___y_2069_);
lean_dec_ref(v___y_2069_);
lean_dec_ref(v_as_2065_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___boxed(lean_object* v_requestNo_2074_, lean_object* v_item_2075_, lean_object* v_fromRanges_2076_, lean_object* v_visited_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go(v_requestNo_2074_, v_item_2075_, v_fromRanges_2076_, v_visited_2077_, v_a_2078_);
lean_dec_ref(v_a_2078_);
return v_res_2080_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0(lean_object* v_00_u03b2_2081_, lean_object* v_k_2082_, lean_object* v_t_2083_){
_start:
{
uint8_t v___x_2084_; 
v___x_2084_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(v_k_2082_, v_t_2083_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___boxed(lean_object* v_00_u03b2_2085_, lean_object* v_k_2086_, lean_object* v_t_2087_){
_start:
{
uint8_t v_res_2088_; lean_object* v_r_2089_; 
v_res_2088_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0(v_00_u03b2_2085_, v_k_2086_, v_t_2087_);
lean_dec(v_t_2087_);
lean_dec_ref(v_k_2086_);
v_r_2089_ = lean_box(v_res_2088_);
return v_r_2089_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4(lean_object* v_00_u03b2_2090_, lean_object* v_k_2091_, lean_object* v_v_2092_, lean_object* v_t_2093_, lean_object* v_hl_2094_){
_start:
{
lean_object* v___x_2095_; 
v___x_2095_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_k_2091_, v_v_2092_, v_t_2093_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4_spec__6(size_t v_sz_2096_, size_t v_i_2097_, lean_object* v_bs_2098_){
_start:
{
uint8_t v___x_2099_; 
v___x_2099_ = lean_usize_dec_lt(v_i_2097_, v_sz_2096_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = l_unsafeCast___redArg(v_bs_2098_);
lean_dec_ref(v_bs_2098_);
v___x_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
return v___x_2101_;
}
else
{
lean_object* v_v_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v_v_2102_ = lean_array_uget_borrowed(v_bs_2098_, v_i_2097_);
v___x_2103_ = l_unsafeCast___redArg(v_v_2102_);
v___x_2104_ = l_Lean_Lsp_instFromJsonCallHierarchyItem_fromJson(v___x_2103_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v_bs_2098_);
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2104_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2114_; lean_object* v_bs_x27_2115_; size_t v___x_2116_; size_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v_a_2113_ = lean_ctor_get(v___x_2104_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2104_, 1);
v___x_2114_ = lean_unsigned_to_nat(0u);
v_bs_x27_2115_ = lean_array_uset(v_bs_2098_, v_i_2097_, v___x_2114_);
v___x_2116_ = ((size_t)1ULL);
v___x_2117_ = lean_usize_add(v_i_2097_, v___x_2116_);
v___x_2118_ = l_unsafeCast___redArg(v_a_2113_);
lean_dec(v_a_2113_);
v___x_2119_ = lean_array_uset(v_bs_x27_2115_, v_i_2097_, v___x_2118_);
v_i_2097_ = v___x_2117_;
v_bs_2098_ = v___x_2119_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_sz_2121_, lean_object* v_i_2122_, lean_object* v_bs_2123_){
_start:
{
size_t v_sz_boxed_2124_; size_t v_i_boxed_2125_; lean_object* v_res_2126_; 
v_sz_boxed_2124_ = lean_unbox_usize(v_sz_2121_);
lean_dec(v_sz_2121_);
v_i_boxed_2125_ = lean_unbox_usize(v_i_2122_);
lean_dec(v_i_2122_);
v_res_2126_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4_spec__6(v_sz_boxed_2124_, v_i_boxed_2125_, v_bs_2123_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4(lean_object* v_x_2127_){
_start:
{
if (lean_obj_tag(v_x_2127_) == 4)
{
lean_object* v_elems_2128_; size_t v_sz_2129_; size_t v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v_elems_2128_ = lean_ctor_get(v_x_2127_, 0);
lean_inc_ref(v_elems_2128_);
lean_dec_ref_known(v_x_2127_, 1);
v_sz_2129_ = lean_array_size(v_elems_2128_);
v___x_2130_ = ((size_t)0ULL);
v___x_2131_ = l_unsafeCast___redArg(v_elems_2128_);
lean_dec_ref(v_elems_2128_);
v___x_2132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4_spec__6(v_sz_2129_, v___x_2130_, v___x_2131_);
v___x_2133_ = l_unsafeCast___redArg(v___x_2132_);
lean_dec_ref(v___x_2132_);
return v___x_2133_;
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2134_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_2135_ = lean_unsigned_to_nat(80u);
v___x_2136_ = l_Lean_Json_pretty(v_x_2127_, v___x_2135_);
v___x_2137_ = lean_string_append(v___x_2134_, v___x_2136_);
lean_dec_ref(v___x_2136_);
v___x_2138_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_2139_ = lean_string_append(v___x_2137_, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
return v___x_2140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2(lean_object* v_x_2143_){
_start:
{
if (lean_obj_tag(v_x_2143_) == 0)
{
lean_object* v___x_2144_; 
v___x_2144_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2___closed__0));
return v___x_2144_;
}
else
{
lean_object* v___x_2145_; 
v___x_2145_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2_spec__4(v_x_2143_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2145_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2145_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2162_; 
v_a_2154_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2156_ = v___x_2145_;
v_isShared_2157_ = v_isSharedCheck_2162_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2145_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2162_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2158_; lean_object* v___x_2160_; 
v___x_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2158_, 0, v_a_2154_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2158_);
v___x_2160_ = v___x_2156_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v___x_2158_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1(lean_object* v_expectedID_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v___x_2166_; 
v___x_2166_ = l_Lean_Lsp_Ipc_stdout(v_a_2164_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2310_; 
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2169_ = v___x_2166_;
v_isShared_2170_ = v_isSharedCheck_2310_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2166_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2310_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2171_; 
v___x_2171_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_2167_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2301_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2301_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2171_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2301_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___y_2177_; lean_object* v___y_2178_; 
switch(lean_obj_tag(v_a_2172_))
{
case 2:
{
lean_object* v_id_2184_; lean_object* v_result_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2229_; 
v_id_2184_ = lean_ctor_get(v_a_2172_, 0);
v_result_2185_ = lean_ctor_get(v_a_2172_, 1);
v_isSharedCheck_2229_ = !lean_is_exclusive(v_a_2172_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2187_ = v_a_2172_;
v_isShared_2188_ = v_isSharedCheck_2229_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_result_2185_);
lean_inc(v_id_2184_);
lean_dec(v_a_2172_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2229_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
uint8_t v___x_2189_; 
v___x_2189_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_2184_, v_expectedID_2163_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; lean_object* v___y_2192_; 
lean_del_object(v___x_2187_);
lean_dec(v_result_2185_);
lean_del_object(v___x_2169_);
v___x_2190_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
switch(lean_obj_tag(v_expectedID_2163_))
{
case 0:
{
lean_object* v_s_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v_s_2203_ = lean_ctor_get(v_expectedID_2163_, 0);
lean_inc_ref(v_s_2203_);
lean_dec_ref_known(v_expectedID_2163_, 1);
v___x_2204_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_2205_ = lean_string_append(v___x_2204_, v_s_2203_);
lean_dec_ref(v_s_2203_);
v___x_2206_ = lean_string_append(v___x_2205_, v___x_2204_);
v___y_2192_ = v___x_2206_;
goto v___jp_2191_;
}
case 1:
{
lean_object* v_n_2207_; lean_object* v___x_2208_; 
v_n_2207_ = lean_ctor_get(v_expectedID_2163_, 0);
lean_inc_ref(v_n_2207_);
lean_dec_ref_known(v_expectedID_2163_, 1);
v___x_2208_ = l_Lean_JsonNumber_toString(v_n_2207_);
v___y_2192_ = v___x_2208_;
goto v___jp_2191_;
}
default: 
{
lean_object* v___x_2209_; 
v___x_2209_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_2192_ = v___x_2209_;
goto v___jp_2191_;
}
}
v___jp_2191_:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = lean_string_append(v___x_2190_, v___y_2192_);
lean_dec_ref(v___y_2192_);
v___x_2194_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_2195_ = lean_string_append(v___x_2193_, v___x_2194_);
switch(lean_obj_tag(v_id_2184_))
{
case 0:
{
lean_object* v_s_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_s_2196_ = lean_ctor_get(v_id_2184_, 0);
lean_inc_ref(v_s_2196_);
lean_dec_ref_known(v_id_2184_, 1);
v___x_2197_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_2198_ = lean_string_append(v___x_2197_, v_s_2196_);
lean_dec_ref(v_s_2196_);
v___x_2199_ = lean_string_append(v___x_2198_, v___x_2197_);
v___y_2177_ = v___x_2195_;
v___y_2178_ = v___x_2199_;
goto v___jp_2176_;
}
case 1:
{
lean_object* v_n_2200_; lean_object* v___x_2201_; 
v_n_2200_ = lean_ctor_get(v_id_2184_, 0);
lean_inc_ref(v_n_2200_);
lean_dec_ref_known(v_id_2184_, 1);
v___x_2201_ = l_Lean_JsonNumber_toString(v_n_2200_);
v___y_2177_ = v___x_2195_;
v___y_2178_ = v___x_2201_;
goto v___jp_2176_;
}
default: 
{
lean_object* v___x_2202_; 
v___x_2202_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_2177_ = v___x_2195_;
v___y_2178_ = v___x_2202_;
goto v___jp_2176_;
}
}
}
}
else
{
lean_object* v___x_2210_; 
lean_dec(v_id_2184_);
lean_del_object(v___x_2174_);
lean_inc(v_result_2185_);
v___x_2210_ = l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1_spec__2(v_result_2185_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
lean_del_object(v___x_2187_);
lean_dec(v_expectedID_2163_);
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v___x_2212_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0));
v___x_2213_ = l_Lean_Json_compress(v_result_2185_);
v___x_2214_ = lean_string_append(v___x_2212_, v___x_2213_);
lean_dec_ref(v___x_2213_);
v___x_2215_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1));
v___x_2216_ = lean_string_append(v___x_2214_, v___x_2215_);
v___x_2217_ = lean_string_append(v___x_2216_, v_a_2211_);
lean_dec(v_a_2211_);
v___x_2218_ = lean_mk_io_user_error(v___x_2217_);
if (v_isShared_2170_ == 0)
{
lean_ctor_set_tag(v___x_2169_, 1);
lean_ctor_set(v___x_2169_, 0, v___x_2218_);
v___x_2220_ = v___x_2169_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; 
lean_dec(v_result_2185_);
v_a_2222_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2222_);
lean_dec_ref_known(v___x_2210_, 1);
if (v_isShared_2188_ == 0)
{
lean_ctor_set_tag(v___x_2187_, 0);
lean_ctor_set(v___x_2187_, 1, v_a_2222_);
lean_ctor_set(v___x_2187_, 0, v_expectedID_2163_);
v___x_2224_ = v___x_2187_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_expectedID_2163_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_a_2222_);
v___x_2224_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2226_; 
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 0, v___x_2224_);
v___x_2226_ = v___x_2169_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
}
case 3:
{
lean_object* v_id_2230_; uint8_t v_code_2231_; lean_object* v_message_2232_; lean_object* v_data_x3f_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___x_2265_; lean_object* v___y_2267_; 
lean_del_object(v___x_2174_);
lean_dec(v_expectedID_2163_);
v_id_2230_ = lean_ctor_get(v_a_2172_, 0);
lean_inc(v_id_2230_);
v_code_2231_ = lean_ctor_get_uint8(v_a_2172_, sizeof(void*)*3);
v_message_2232_ = lean_ctor_get(v_a_2172_, 1);
lean_inc_ref(v_message_2232_);
v_data_x3f_2233_ = lean_ctor_get(v_a_2172_, 2);
lean_inc(v_data_x3f_2233_);
lean_dec_ref_known(v_a_2172_, 3);
v___x_2234_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2));
v___x_2235_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7));
v___x_2265_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11));
switch(lean_obj_tag(v_id_2230_))
{
case 0:
{
lean_object* v_s_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_s_2283_ = lean_ctor_get(v_id_2230_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_id_2230_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v_id_2230_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_s_2283_);
lean_dec(v_id_2230_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
lean_ctor_set_tag(v___x_2285_, 3);
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_s_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
v___y_2267_ = v___x_2288_;
goto v___jp_2266_;
}
}
}
case 1:
{
lean_object* v_n_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
v_n_2291_ = lean_ctor_get(v_id_2230_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_id_2230_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v_id_2230_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_n_2291_);
lean_dec(v_id_2230_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 2);
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_n_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
v___y_2267_ = v___x_2296_;
goto v___jp_2266_;
}
}
}
default: 
{
lean_object* v___x_2299_; 
v___x_2299_ = lean_box(0);
v___y_2267_ = v___x_2299_;
goto v___jp_2266_;
}
}
v___jp_2236_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2263_; 
lean_inc(v___y_2240_);
lean_inc_ref(v___y_2239_);
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___y_2239_);
lean_ctor_set(v___x_2241_, 1, v___y_2240_);
v___x_2242_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8));
v___x_2243_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2243_, 0, v_message_2232_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = lean_box(0);
v___x_2246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2244_);
lean_ctor_set(v___x_2246_, 1, v___x_2245_);
v___x_2247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2241_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9));
v___x_2249_ = l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(v___x_2248_, v_data_x3f_2233_);
lean_dec(v_data_x3f_2233_);
v___x_2250_ = l_List_appendTR___redArg(v___x_2247_, v___x_2249_);
v___x_2251_ = l_Lean_Json_mkObj(v___x_2250_);
lean_dec(v___x_2250_);
lean_inc_ref(v___y_2238_);
v___x_2252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2252_, 0, v___y_2238_);
lean_ctor_set(v___x_2252_, 1, v___x_2251_);
v___x_2253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2252_);
lean_ctor_set(v___x_2253_, 1, v___x_2245_);
v___x_2254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___y_2237_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2235_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = l_Lean_Json_mkObj(v___x_2255_);
lean_dec_ref_known(v___x_2255_, 2);
v___x_2257_ = l_Lean_Json_compress(v___x_2256_);
v___x_2258_ = lean_string_append(v___x_2234_, v___x_2257_);
lean_dec_ref(v___x_2257_);
v___x_2259_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_2260_ = lean_string_append(v___x_2258_, v___x_2259_);
v___x_2261_ = lean_mk_io_user_error(v___x_2260_);
if (v_isShared_2170_ == 0)
{
lean_ctor_set_tag(v___x_2169_, 1);
lean_ctor_set(v___x_2169_, 0, v___x_2261_);
v___x_2263_ = v___x_2169_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v___x_2261_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
v___jp_2266_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2265_);
lean_ctor_set(v___x_2268_, 1, v___y_2267_);
v___x_2269_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12));
v___x_2270_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13));
switch(v_code_2231_)
{
case 0:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2271_;
goto v___jp_2236_;
}
case 1:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2272_;
goto v___jp_2236_;
}
case 2:
{
lean_object* v___x_2273_; 
v___x_2273_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2273_;
goto v___jp_2236_;
}
case 3:
{
lean_object* v___x_2274_; 
v___x_2274_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2274_;
goto v___jp_2236_;
}
case 4:
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2275_;
goto v___jp_2236_;
}
case 5:
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2276_;
goto v___jp_2236_;
}
case 6:
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2277_;
goto v___jp_2236_;
}
case 7:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2278_;
goto v___jp_2236_;
}
case 8:
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2279_;
goto v___jp_2236_;
}
case 9:
{
lean_object* v___x_2280_; 
v___x_2280_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2280_;
goto v___jp_2236_;
}
case 10:
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2281_;
goto v___jp_2236_;
}
default: 
{
lean_object* v___x_2282_; 
v___x_2282_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61);
v___y_2237_ = v___x_2268_;
v___y_2238_ = v___x_2269_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___x_2282_;
goto v___jp_2236_;
}
}
}
}
default: 
{
lean_del_object(v___x_2174_);
lean_dec(v_a_2172_);
lean_del_object(v___x_2169_);
goto _start;
}
}
v___jp_2176_:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2182_; 
v___x_2179_ = lean_string_append(v___y_2177_, v___y_2178_);
lean_dec_ref(v___y_2178_);
v___x_2180_ = lean_mk_io_user_error(v___x_2179_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set_tag(v___x_2174_, 1);
lean_ctor_set(v___x_2174_, 0, v___x_2180_);
v___x_2182_ = v___x_2174_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2180_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_del_object(v___x_2169_);
lean_dec(v_expectedID_2163_);
v_a_2302_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2171_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2171_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v_expectedID_2163_);
v_a_2311_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2166_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2166_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1___boxed(lean_object* v_expectedID_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1(v_expectedID_2319_, v_a_2320_);
lean_dec_ref(v_a_2320_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__2(lean_object* v_as_2323_, size_t v_sz_2324_, size_t v_i_2325_, lean_object* v_b_2326_, lean_object* v___y_2327_){
_start:
{
uint8_t v___x_2329_; 
v___x_2329_ = lean_usize_dec_lt(v_i_2325_, v_sz_2324_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2330_; 
v___x_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2330_, 0, v_b_2326_);
return v___x_2330_;
}
else
{
lean_object* v_fst_2331_; lean_object* v_snd_2332_; lean_object* v_a_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v_fst_2331_ = lean_ctor_get(v_b_2326_, 0);
lean_inc(v_fst_2331_);
v_snd_2332_ = lean_ctor_get(v_b_2326_, 1);
lean_inc(v_snd_2332_);
lean_dec_ref(v_b_2326_);
v_a_2333_ = lean_array_uget_borrowed(v_as_2323_, v_i_2325_);
v___x_2334_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3));
v___x_2335_ = lean_box(1);
lean_inc(v_a_2333_);
v___x_2336_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go(v_fst_2331_, v_a_2333_, v___x_2334_, v___x_2335_, v___y_2327_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v_fst_2338_; lean_object* v_snd_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2350_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v_fst_2338_ = lean_ctor_get(v_a_2337_, 0);
v_snd_2339_ = lean_ctor_get(v_a_2337_, 1);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_a_2337_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2341_ = v_a_2337_;
v_isShared_2342_ = v_isSharedCheck_2350_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_snd_2339_);
lean_inc(v_fst_2338_);
lean_dec(v_a_2337_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2350_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; lean_object* v___x_2345_; 
v___x_2343_ = lean_array_push(v_snd_2332_, v_fst_2338_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 1, v___x_2343_);
lean_ctor_set(v___x_2341_, 0, v_snd_2339_);
v___x_2345_ = v___x_2341_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_snd_2339_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v___x_2343_);
v___x_2345_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
size_t v___x_2346_; size_t v___x_2347_; 
v___x_2346_ = ((size_t)1ULL);
v___x_2347_ = lean_usize_add(v_i_2325_, v___x_2346_);
v_i_2325_ = v___x_2347_;
v_b_2326_ = v___x_2345_;
goto _start;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec(v_snd_2332_);
v_a_2351_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2336_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2336_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__2___boxed(lean_object* v_as_2359_, lean_object* v_sz_2360_, lean_object* v_i_2361_, lean_object* v_b_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
size_t v_sz_boxed_2365_; size_t v_i_boxed_2366_; lean_object* v_res_2367_; 
v_sz_boxed_2365_ = lean_unbox_usize(v_sz_2360_);
lean_dec(v_sz_2360_);
v_i_boxed_2366_ = lean_unbox_usize(v_i_2361_);
lean_dec(v_i_2361_);
v_res_2367_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__2(v_as_2359_, v_sz_boxed_2365_, v_i_boxed_2366_, v_b_2362_, v___y_2363_);
lean_dec_ref(v___y_2363_);
lean_dec_ref(v_as_2359_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0_spec__1(lean_object* v_v_2368_){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = l_Lean_Lsp_instToJsonCallHierarchyPrepareParams_toJson(v_v_2368_);
v___x_2370_ = l_Lean_Json_Structured_fromJson_x3f(v___x_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0(lean_object* v_h_2371_, lean_object* v_r_2372_){
_start:
{
lean_object* v_id_2374_; lean_object* v_method_2375_; lean_object* v_param_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2396_; 
v_id_2374_ = lean_ctor_get(v_r_2372_, 0);
v_method_2375_ = lean_ctor_get(v_r_2372_, 1);
v_param_2376_ = lean_ctor_get(v_r_2372_, 2);
v_isSharedCheck_2396_ = !lean_is_exclusive(v_r_2372_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2378_ = v_r_2372_;
v_isShared_2379_ = v_isSharedCheck_2396_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_param_2376_);
lean_inc(v_method_2375_);
lean_inc(v_id_2374_);
lean_dec(v_r_2372_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2396_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___y_2381_; lean_object* v___x_2386_; 
v___x_2386_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0_spec__1(v_param_2376_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v___x_2387_; 
lean_dec_ref_known(v___x_2386_, 1);
v___x_2387_ = lean_box(0);
v___y_2381_ = v___x_2387_;
goto v___jp_2380_;
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v_a_2388_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2386_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2386_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
v___y_2381_ = v___x_2393_;
goto v___jp_2380_;
}
}
}
v___jp_2380_:
{
lean_object* v___x_2383_; 
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 2, v___y_2381_);
v___x_2383_ = v___x_2378_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_id_2374_);
lean_ctor_set(v_reuseFailAlloc_2385_, 1, v_method_2375_);
lean_ctor_set(v_reuseFailAlloc_2385_, 2, v___y_2381_);
v___x_2383_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
lean_object* v___x_2384_; 
v___x_2384_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_2371_, v___x_2383_);
return v___x_2384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0___boxed(lean_object* v_h_2397_, lean_object* v_r_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0(v_h_2397_, v_r_2398_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0(lean_object* v_r_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v___x_2404_; lean_object* v_a_2405_; lean_object* v___x_2406_; 
v___x_2404_ = l_Lean_Lsp_Ipc_stdin(v_a_2402_);
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref(v___x_2404_);
v___x_2406_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0_spec__0(v_a_2405_, v_r_2401_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0___boxed(lean_object* v_r_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0(v_r_2407_, v_a_2408_);
lean_dec_ref(v_a_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandIncomingCallHierarchy(lean_object* v_requestNo_2414_, lean_object* v_uri_2415_, lean_object* v_pos_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
lean_inc(v_requestNo_2414_);
v___x_2419_ = l_Lean_JsonNumber_fromNat(v_requestNo_2414_);
v___x_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
v___x_2421_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__0));
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v_uri_2415_);
lean_ctor_set(v___x_2422_, 1, v_pos_2416_);
lean_inc_ref(v___x_2420_);
v___x_2423_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2420_);
lean_ctor_set(v___x_2423_, 1, v___x_2421_);
lean_ctor_set(v___x_2423_, 2, v___x_2422_);
v___x_2424_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0(v___x_2423_, v_a_2417_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v___x_2425_; 
lean_dec_ref_known(v___x_2424_, 1);
v___x_2425_ = l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1(v___x_2420_, v_a_2417_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v_result_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2469_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_a_2426_);
lean_dec_ref_known(v___x_2425_, 1);
v_result_2427_ = lean_ctor_get(v_a_2426_, 1);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_a_2426_);
if (v_isSharedCheck_2469_ == 0)
{
lean_object* v_unused_2470_; 
v_unused_2470_ = lean_ctor_get(v_a_2426_, 0);
lean_dec(v_unused_2470_);
v___x_2429_ = v_a_2426_;
v_isShared_2430_ = v_isSharedCheck_2469_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_result_2427_);
lean_dec(v_a_2426_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2469_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___y_2434_; 
v___x_2431_ = lean_unsigned_to_nat(1u);
v___x_2432_ = lean_nat_add(v_requestNo_2414_, v___x_2431_);
lean_dec(v_requestNo_2414_);
if (lean_obj_tag(v_result_2427_) == 0)
{
lean_object* v___x_2467_; 
v___x_2467_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__1));
v___y_2434_ = v___x_2467_;
goto v___jp_2433_;
}
else
{
lean_object* v_val_2468_; 
v_val_2468_ = lean_ctor_get(v_result_2427_, 0);
lean_inc(v_val_2468_);
lean_dec_ref_known(v_result_2427_, 1);
v___y_2434_ = v_val_2468_;
goto v___jp_2433_;
}
v___jp_2433_:
{
lean_object* v___x_2435_; lean_object* v___x_2437_; 
v___x_2435_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1));
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 1, v___x_2435_);
lean_ctor_set(v___x_2429_, 0, v___x_2432_);
v___x_2437_ = v___x_2429_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v___x_2432_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
size_t v_sz_2438_; size_t v___x_2439_; lean_object* v___x_2440_; 
v_sz_2438_ = lean_array_size(v___y_2434_);
v___x_2439_ = ((size_t)0ULL);
v___x_2440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__2(v___y_2434_, v_sz_2438_, v___x_2439_, v___x_2437_, v_a_2417_);
lean_dec_ref(v___y_2434_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2457_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2443_ = v___x_2440_;
v_isShared_2444_ = v_isSharedCheck_2457_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2440_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2457_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v_fst_2445_; lean_object* v_snd_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2456_; 
v_fst_2445_ = lean_ctor_get(v_a_2441_, 0);
v_snd_2446_ = lean_ctor_get(v_a_2441_, 1);
v_isSharedCheck_2456_ = !lean_is_exclusive(v_a_2441_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2448_ = v_a_2441_;
v_isShared_2449_ = v_isSharedCheck_2456_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_snd_2446_);
lean_inc(v_fst_2445_);
lean_dec(v_a_2441_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2456_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
lean_ctor_set(v___x_2448_, 1, v_fst_2445_);
lean_ctor_set(v___x_2448_, 0, v_snd_2446_);
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_snd_2446_);
lean_ctor_set(v_reuseFailAlloc_2455_, 1, v_fst_2445_);
v___x_2451_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
lean_object* v___x_2453_; 
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v___x_2451_);
v___x_2453_ = v___x_2443_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v___x_2451_);
v___x_2453_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
return v___x_2453_;
}
}
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
v_a_2458_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2440_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2440_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
lean_dec(v_requestNo_2414_);
v_a_2471_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2425_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2425_);
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
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec_ref_known(v___x_2420_, 1);
lean_dec(v_requestNo_2414_);
v_a_2479_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2424_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2424_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___boxed(lean_object* v_requestNo_2487_, lean_object* v_uri_2488_, lean_object* v_pos_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_Lean_Lsp_Ipc_expandIncomingCallHierarchy(v_requestNo_2487_, v_uri_2488_, v_pos_2489_, v_a_2490_);
lean_dec_ref(v_a_2490_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4_spec__6(size_t v_sz_2493_, size_t v_i_2494_, lean_object* v_bs_2495_){
_start:
{
uint8_t v___x_2496_; 
v___x_2496_ = lean_usize_dec_lt(v_i_2494_, v_sz_2493_);
if (v___x_2496_ == 0)
{
lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2497_ = l_unsafeCast___redArg(v_bs_2495_);
lean_dec_ref(v_bs_2495_);
v___x_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
return v___x_2498_;
}
else
{
lean_object* v_v_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v_v_2499_ = lean_array_uget_borrowed(v_bs_2495_, v_i_2494_);
v___x_2500_ = l_unsafeCast___redArg(v_v_2499_);
v___x_2501_ = l_Lean_Lsp_instFromJsonCallHierarchyOutgoingCall_fromJson(v___x_2500_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
lean_dec_ref(v_bs_2495_);
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2501_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2501_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2502_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2511_; lean_object* v_bs_x27_2512_; size_t v___x_2513_; size_t v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v_a_2510_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2501_, 1);
v___x_2511_ = lean_unsigned_to_nat(0u);
v_bs_x27_2512_ = lean_array_uset(v_bs_2495_, v_i_2494_, v___x_2511_);
v___x_2513_ = ((size_t)1ULL);
v___x_2514_ = lean_usize_add(v_i_2494_, v___x_2513_);
v___x_2515_ = l_unsafeCast___redArg(v_a_2510_);
lean_dec(v_a_2510_);
v___x_2516_ = lean_array_uset(v_bs_x27_2512_, v_i_2494_, v___x_2515_);
v_i_2494_ = v___x_2514_;
v_bs_2495_ = v___x_2516_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_sz_2518_, lean_object* v_i_2519_, lean_object* v_bs_2520_){
_start:
{
size_t v_sz_boxed_2521_; size_t v_i_boxed_2522_; lean_object* v_res_2523_; 
v_sz_boxed_2521_ = lean_unbox_usize(v_sz_2518_);
lean_dec(v_sz_2518_);
v_i_boxed_2522_ = lean_unbox_usize(v_i_2519_);
lean_dec(v_i_2519_);
v_res_2523_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4_spec__6(v_sz_boxed_2521_, v_i_boxed_2522_, v_bs_2520_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4(lean_object* v_x_2524_){
_start:
{
if (lean_obj_tag(v_x_2524_) == 4)
{
lean_object* v_elems_2525_; size_t v_sz_2526_; size_t v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v_elems_2525_ = lean_ctor_get(v_x_2524_, 0);
lean_inc_ref(v_elems_2525_);
lean_dec_ref_known(v_x_2524_, 1);
v_sz_2526_ = lean_array_size(v_elems_2525_);
v___x_2527_ = ((size_t)0ULL);
v___x_2528_ = l_unsafeCast___redArg(v_elems_2525_);
lean_dec_ref(v_elems_2525_);
v___x_2529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4_spec__6(v_sz_2526_, v___x_2527_, v___x_2528_);
v___x_2530_ = l_unsafeCast___redArg(v___x_2529_);
lean_dec_ref(v___x_2529_);
return v___x_2530_;
}
else
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2531_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_2532_ = lean_unsigned_to_nat(80u);
v___x_2533_ = l_Lean_Json_pretty(v_x_2524_, v___x_2532_);
v___x_2534_ = lean_string_append(v___x_2531_, v___x_2533_);
lean_dec_ref(v___x_2533_);
v___x_2535_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_2536_ = lean_string_append(v___x_2534_, v___x_2535_);
v___x_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2536_);
return v___x_2537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2(lean_object* v_x_2540_){
_start:
{
if (lean_obj_tag(v_x_2540_) == 0)
{
lean_object* v___x_2541_; 
v___x_2541_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2___closed__0));
return v___x_2541_;
}
else
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2_spec__4(v_x_2540_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
v_a_2543_ = lean_ctor_get(v___x_2542_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2542_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2542_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2559_; 
v_a_2551_ = lean_ctor_get(v___x_2542_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2553_ = v___x_2542_;
v_isShared_2554_ = v_isSharedCheck_2559_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2542_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2559_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2555_; lean_object* v___x_2557_; 
v___x_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2555_, 0, v_a_2551_);
if (v_isShared_2554_ == 0)
{
lean_ctor_set(v___x_2553_, 0, v___x_2555_);
v___x_2557_ = v___x_2553_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2555_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1(lean_object* v_expectedID_2560_, lean_object* v_a_2561_){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Lean_Lsp_Ipc_stdout(v_a_2561_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2707_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2566_ = v___x_2563_;
v_isShared_2567_ = v_isSharedCheck_2707_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2563_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2707_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; 
v___x_2568_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_2564_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2698_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2698_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2698_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___y_2574_; lean_object* v___y_2575_; 
switch(lean_obj_tag(v_a_2569_))
{
case 2:
{
lean_object* v_id_2581_; lean_object* v_result_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2626_; 
v_id_2581_ = lean_ctor_get(v_a_2569_, 0);
v_result_2582_ = lean_ctor_get(v_a_2569_, 1);
v_isSharedCheck_2626_ = !lean_is_exclusive(v_a_2569_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2584_ = v_a_2569_;
v_isShared_2585_ = v_isSharedCheck_2626_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_result_2582_);
lean_inc(v_id_2581_);
lean_dec(v_a_2569_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2626_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
uint8_t v___x_2586_; 
v___x_2586_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_2581_, v_expectedID_2560_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; lean_object* v___y_2589_; 
lean_del_object(v___x_2584_);
lean_dec(v_result_2582_);
lean_del_object(v___x_2566_);
v___x_2587_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
switch(lean_obj_tag(v_expectedID_2560_))
{
case 0:
{
lean_object* v_s_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_s_2600_ = lean_ctor_get(v_expectedID_2560_, 0);
lean_inc_ref(v_s_2600_);
lean_dec_ref_known(v_expectedID_2560_, 1);
v___x_2601_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_2602_ = lean_string_append(v___x_2601_, v_s_2600_);
lean_dec_ref(v_s_2600_);
v___x_2603_ = lean_string_append(v___x_2602_, v___x_2601_);
v___y_2589_ = v___x_2603_;
goto v___jp_2588_;
}
case 1:
{
lean_object* v_n_2604_; lean_object* v___x_2605_; 
v_n_2604_ = lean_ctor_get(v_expectedID_2560_, 0);
lean_inc_ref(v_n_2604_);
lean_dec_ref_known(v_expectedID_2560_, 1);
v___x_2605_ = l_Lean_JsonNumber_toString(v_n_2604_);
v___y_2589_ = v___x_2605_;
goto v___jp_2588_;
}
default: 
{
lean_object* v___x_2606_; 
v___x_2606_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_2589_ = v___x_2606_;
goto v___jp_2588_;
}
}
v___jp_2588_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2590_ = lean_string_append(v___x_2587_, v___y_2589_);
lean_dec_ref(v___y_2589_);
v___x_2591_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_2592_ = lean_string_append(v___x_2590_, v___x_2591_);
switch(lean_obj_tag(v_id_2581_))
{
case 0:
{
lean_object* v_s_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v_s_2593_ = lean_ctor_get(v_id_2581_, 0);
lean_inc_ref(v_s_2593_);
lean_dec_ref_known(v_id_2581_, 1);
v___x_2594_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_2595_ = lean_string_append(v___x_2594_, v_s_2593_);
lean_dec_ref(v_s_2593_);
v___x_2596_ = lean_string_append(v___x_2595_, v___x_2594_);
v___y_2574_ = v___x_2592_;
v___y_2575_ = v___x_2596_;
goto v___jp_2573_;
}
case 1:
{
lean_object* v_n_2597_; lean_object* v___x_2598_; 
v_n_2597_ = lean_ctor_get(v_id_2581_, 0);
lean_inc_ref(v_n_2597_);
lean_dec_ref_known(v_id_2581_, 1);
v___x_2598_ = l_Lean_JsonNumber_toString(v_n_2597_);
v___y_2574_ = v___x_2592_;
v___y_2575_ = v___x_2598_;
goto v___jp_2573_;
}
default: 
{
lean_object* v___x_2599_; 
v___x_2599_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_2574_ = v___x_2592_;
v___y_2575_ = v___x_2599_;
goto v___jp_2573_;
}
}
}
}
else
{
lean_object* v___x_2607_; 
lean_dec(v_id_2581_);
lean_del_object(v___x_2571_);
lean_inc(v_result_2582_);
v___x_2607_ = l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1_spec__2(v_result_2582_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2617_; 
lean_del_object(v___x_2584_);
lean_dec(v_expectedID_2560_);
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2608_);
lean_dec_ref_known(v___x_2607_, 1);
v___x_2609_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0));
v___x_2610_ = l_Lean_Json_compress(v_result_2582_);
v___x_2611_ = lean_string_append(v___x_2609_, v___x_2610_);
lean_dec_ref(v___x_2610_);
v___x_2612_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1));
v___x_2613_ = lean_string_append(v___x_2611_, v___x_2612_);
v___x_2614_ = lean_string_append(v___x_2613_, v_a_2608_);
lean_dec(v_a_2608_);
v___x_2615_ = lean_mk_io_user_error(v___x_2614_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set_tag(v___x_2566_, 1);
lean_ctor_set(v___x_2566_, 0, v___x_2615_);
v___x_2617_ = v___x_2566_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2615_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; 
lean_dec(v_result_2582_);
v_a_2619_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2607_, 1);
if (v_isShared_2585_ == 0)
{
lean_ctor_set_tag(v___x_2584_, 0);
lean_ctor_set(v___x_2584_, 1, v_a_2619_);
lean_ctor_set(v___x_2584_, 0, v_expectedID_2560_);
v___x_2621_ = v___x_2584_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_expectedID_2560_);
lean_ctor_set(v_reuseFailAlloc_2625_, 1, v_a_2619_);
v___x_2621_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2623_; 
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2621_);
v___x_2623_ = v___x_2566_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2621_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
}
}
case 3:
{
lean_object* v_id_2627_; uint8_t v_code_2628_; lean_object* v_message_2629_; lean_object* v_data_x3f_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___x_2662_; lean_object* v___y_2664_; 
lean_del_object(v___x_2571_);
lean_dec(v_expectedID_2560_);
v_id_2627_ = lean_ctor_get(v_a_2569_, 0);
lean_inc(v_id_2627_);
v_code_2628_ = lean_ctor_get_uint8(v_a_2569_, sizeof(void*)*3);
v_message_2629_ = lean_ctor_get(v_a_2569_, 1);
lean_inc_ref(v_message_2629_);
v_data_x3f_2630_ = lean_ctor_get(v_a_2569_, 2);
lean_inc(v_data_x3f_2630_);
lean_dec_ref_known(v_a_2569_, 3);
v___x_2631_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2));
v___x_2632_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7));
v___x_2662_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11));
switch(lean_obj_tag(v_id_2627_))
{
case 0:
{
lean_object* v_s_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
v_s_2680_ = lean_ctor_get(v_id_2627_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v_id_2627_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v_id_2627_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_s_2680_);
lean_dec(v_id_2627_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set_tag(v___x_2682_, 3);
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_s_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
v___y_2664_ = v___x_2685_;
goto v___jp_2663_;
}
}
}
case 1:
{
lean_object* v_n_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
v_n_2688_ = lean_ctor_get(v_id_2627_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v_id_2627_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v_id_2627_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_n_2688_);
lean_dec(v_id_2627_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set_tag(v___x_2690_, 2);
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_n_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
v___y_2664_ = v___x_2693_;
goto v___jp_2663_;
}
}
}
default: 
{
lean_object* v___x_2696_; 
v___x_2696_ = lean_box(0);
v___y_2664_ = v___x_2696_;
goto v___jp_2663_;
}
}
v___jp_2633_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2660_; 
lean_inc(v___y_2637_);
lean_inc_ref(v___y_2636_);
v___x_2638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___y_2636_);
lean_ctor_set(v___x_2638_, 1, v___y_2637_);
v___x_2639_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8));
v___x_2640_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2640_, 0, v_message_2629_);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2639_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = lean_box(0);
v___x_2643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2638_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9));
v___x_2646_ = l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(v___x_2645_, v_data_x3f_2630_);
lean_dec(v_data_x3f_2630_);
v___x_2647_ = l_List_appendTR___redArg(v___x_2644_, v___x_2646_);
v___x_2648_ = l_Lean_Json_mkObj(v___x_2647_);
lean_dec(v___x_2647_);
lean_inc_ref(v___y_2635_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___y_2635_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
lean_ctor_set(v___x_2650_, 1, v___x_2642_);
v___x_2651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___y_2634_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
v___x_2652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2632_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = l_Lean_Json_mkObj(v___x_2652_);
lean_dec_ref_known(v___x_2652_, 2);
v___x_2654_ = l_Lean_Json_compress(v___x_2653_);
v___x_2655_ = lean_string_append(v___x_2631_, v___x_2654_);
lean_dec_ref(v___x_2654_);
v___x_2656_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_2657_ = lean_string_append(v___x_2655_, v___x_2656_);
v___x_2658_ = lean_mk_io_user_error(v___x_2657_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set_tag(v___x_2566_, 1);
lean_ctor_set(v___x_2566_, 0, v___x_2658_);
v___x_2660_ = v___x_2566_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v___x_2658_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
return v___x_2660_;
}
}
v___jp_2663_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2662_);
lean_ctor_set(v___x_2665_, 1, v___y_2664_);
v___x_2666_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12));
v___x_2667_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13));
switch(v_code_2628_)
{
case 0:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2668_;
goto v___jp_2633_;
}
case 1:
{
lean_object* v___x_2669_; 
v___x_2669_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2669_;
goto v___jp_2633_;
}
case 2:
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2670_;
goto v___jp_2633_;
}
case 3:
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2671_;
goto v___jp_2633_;
}
case 4:
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2672_;
goto v___jp_2633_;
}
case 5:
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2673_;
goto v___jp_2633_;
}
case 6:
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2674_;
goto v___jp_2633_;
}
case 7:
{
lean_object* v___x_2675_; 
v___x_2675_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2675_;
goto v___jp_2633_;
}
case 8:
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2676_;
goto v___jp_2633_;
}
case 9:
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2677_;
goto v___jp_2633_;
}
case 10:
{
lean_object* v___x_2678_; 
v___x_2678_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2678_;
goto v___jp_2633_;
}
default: 
{
lean_object* v___x_2679_; 
v___x_2679_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61);
v___y_2634_ = v___x_2665_;
v___y_2635_ = v___x_2666_;
v___y_2636_ = v___x_2667_;
v___y_2637_ = v___x_2679_;
goto v___jp_2633_;
}
}
}
}
default: 
{
lean_del_object(v___x_2571_);
lean_dec(v_a_2569_);
lean_del_object(v___x_2566_);
goto _start;
}
}
v___jp_2573_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; 
v___x_2576_ = lean_string_append(v___y_2574_, v___y_2575_);
lean_dec_ref(v___y_2575_);
v___x_2577_ = lean_mk_io_user_error(v___x_2576_);
if (v_isShared_2572_ == 0)
{
lean_ctor_set_tag(v___x_2571_, 1);
lean_ctor_set(v___x_2571_, 0, v___x_2577_);
v___x_2579_ = v___x_2571_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2577_);
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
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
lean_del_object(v___x_2566_);
lean_dec(v_expectedID_2560_);
v_a_2699_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2568_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2568_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec(v_expectedID_2560_);
v_a_2708_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2563_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2563_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1___boxed(lean_object* v_expectedID_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1(v_expectedID_2716_, v_a_2717_);
lean_dec_ref(v_a_2717_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0_spec__1(lean_object* v_v_2720_){
_start:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2721_ = l_Lean_Lsp_instToJsonCallHierarchyOutgoingCallsParams_toJson(v_v_2720_);
v___x_2722_ = l_Lean_Json_Structured_fromJson_x3f(v___x_2721_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0(lean_object* v_h_2723_, lean_object* v_r_2724_){
_start:
{
lean_object* v_id_2726_; lean_object* v_method_2727_; lean_object* v_param_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2748_; 
v_id_2726_ = lean_ctor_get(v_r_2724_, 0);
v_method_2727_ = lean_ctor_get(v_r_2724_, 1);
v_param_2728_ = lean_ctor_get(v_r_2724_, 2);
v_isSharedCheck_2748_ = !lean_is_exclusive(v_r_2724_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2730_ = v_r_2724_;
v_isShared_2731_ = v_isSharedCheck_2748_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_param_2728_);
lean_inc(v_method_2727_);
lean_inc(v_id_2726_);
lean_dec(v_r_2724_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2748_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___y_2733_; lean_object* v___x_2738_; 
v___x_2738_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0_spec__1(v_param_2728_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v___x_2739_; 
lean_dec_ref_known(v___x_2738_, 1);
v___x_2739_ = lean_box(0);
v___y_2733_ = v___x_2739_;
goto v___jp_2732_;
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_a_2740_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2738_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2738_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
v___y_2733_ = v___x_2745_;
goto v___jp_2732_;
}
}
}
v___jp_2732_:
{
lean_object* v___x_2735_; 
if (v_isShared_2731_ == 0)
{
lean_ctor_set(v___x_2730_, 2, v___y_2733_);
v___x_2735_ = v___x_2730_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_id_2726_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v_method_2727_);
lean_ctor_set(v_reuseFailAlloc_2737_, 2, v___y_2733_);
v___x_2735_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2736_; 
v___x_2736_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_2723_, v___x_2735_);
return v___x_2736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0___boxed(lean_object* v_h_2749_, lean_object* v_r_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0(v_h_2749_, v_r_2750_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0(lean_object* v_r_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v___x_2756_; lean_object* v_a_2757_; lean_object* v___x_2758_; 
v___x_2756_ = l_Lean_Lsp_Ipc_stdin(v_a_2754_);
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_a_2757_);
lean_dec_ref(v___x_2756_);
v___x_2758_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0_spec__0(v_a_2757_, v_r_2753_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0___boxed(lean_object* v_r_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0(v_r_2759_, v_a_2760_);
lean_dec_ref(v_a_2760_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go(lean_object* v_requestNo_2766_, lean_object* v_item_2767_, lean_object* v_fromRanges_2768_, lean_object* v_visited_2769_, lean_object* v_a_2770_){
_start:
{
lean_object* v_name_2772_; uint8_t v___x_2773_; 
v_name_2772_ = lean_ctor_get(v_item_2767_, 0);
v___x_2773_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(v_name_2772_, v_visited_2769_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
lean_inc(v_requestNo_2766_);
v___x_2774_ = l_Lean_JsonNumber_fromNat(v_requestNo_2766_);
v___x_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
v___x_2776_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__0));
lean_inc_ref(v_item_2767_);
lean_inc_ref(v___x_2775_);
v___x_2777_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
lean_ctor_set(v___x_2777_, 2, v_item_2767_);
v___x_2778_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__0(v___x_2777_, v_a_2770_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v___x_2779_; 
lean_dec_ref_known(v___x_2778_, 1);
v___x_2779_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__1(v___x_2775_, v_a_2770_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2817_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_a_2780_);
lean_dec_ref_known(v___x_2779_, 1);
if (v___x_2773_ == 0)
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = lean_box(0);
lean_inc_ref(v_name_2772_);
v___x_2824_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_name_2772_, v___x_2823_, v_visited_2769_);
v___y_2817_ = v___x_2824_;
goto v___jp_2816_;
}
else
{
v___y_2817_ = v_visited_2769_;
goto v___jp_2816_;
}
v___jp_2781_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; size_t v_sz_2787_; size_t v___x_2788_; lean_object* v___x_2789_; 
v___x_2785_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1));
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___y_2783_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v_sz_2787_ = lean_array_size(v___y_2784_);
v___x_2788_ = ((size_t)0ULL);
v___x_2789_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__2(v___y_2782_, v___y_2784_, v_sz_2787_, v___x_2788_, v___x_2786_, v_a_2770_);
lean_dec_ref(v___y_2784_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2807_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2807_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2807_ == 0)
{
v___x_2792_ = v___x_2789_;
v_isShared_2793_ = v_isSharedCheck_2807_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2789_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2807_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v_fst_2794_; lean_object* v_snd_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2806_; 
v_fst_2794_ = lean_ctor_get(v_a_2790_, 0);
v_snd_2795_ = lean_ctor_get(v_a_2790_, 1);
v_isSharedCheck_2806_ = !lean_is_exclusive(v_a_2790_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2797_ = v_a_2790_;
v_isShared_2798_ = v_isSharedCheck_2806_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_snd_2795_);
lean_inc(v_fst_2794_);
lean_dec(v_a_2790_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2806_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; lean_object* v___x_2801_; 
v___x_2799_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2799_, 0, v_item_2767_);
lean_ctor_set(v___x_2799_, 1, v_fromRanges_2768_);
lean_ctor_set(v___x_2799_, 2, v_snd_2795_);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 1, v_fst_2794_);
lean_ctor_set(v___x_2797_, 0, v___x_2799_);
v___x_2801_ = v___x_2797_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v___x_2799_);
lean_ctor_set(v_reuseFailAlloc_2805_, 1, v_fst_2794_);
v___x_2801_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
lean_object* v___x_2803_; 
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v___x_2801_);
v___x_2803_ = v___x_2792_;
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
}
}
else
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
lean_dec_ref(v_fromRanges_2768_);
lean_dec_ref(v_item_2767_);
v_a_2808_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2789_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2789_);
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
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_2816_:
{
lean_object* v_result_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v_result_2818_ = lean_ctor_get(v_a_2780_, 1);
lean_inc(v_result_2818_);
lean_dec(v_a_2780_);
v___x_2819_ = lean_unsigned_to_nat(1u);
v___x_2820_ = lean_nat_add(v_requestNo_2766_, v___x_2819_);
lean_dec(v_requestNo_2766_);
if (lean_obj_tag(v_result_2818_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___closed__1));
v___y_2782_ = v___y_2817_;
v___y_2783_ = v___x_2820_;
v___y_2784_ = v___x_2821_;
goto v___jp_2781_;
}
else
{
lean_object* v_val_2822_; 
v_val_2822_ = lean_ctor_get(v_result_2818_, 0);
lean_inc(v_val_2822_);
lean_dec_ref_known(v_result_2818_, 1);
v___y_2782_ = v___y_2817_;
v___y_2783_ = v___x_2820_;
v___y_2784_ = v_val_2822_;
goto v___jp_2781_;
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_visited_2769_);
lean_dec_ref(v_fromRanges_2768_);
lean_dec_ref(v_item_2767_);
lean_dec(v_requestNo_2766_);
v_a_2825_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2779_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2779_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec_ref_known(v___x_2775_, 1);
lean_dec(v_visited_2769_);
lean_dec_ref(v_fromRanges_2768_);
lean_dec_ref(v_item_2767_);
lean_dec(v_requestNo_2766_);
v_a_2833_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2778_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2778_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
else
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
lean_dec(v_visited_2769_);
lean_dec_ref(v_fromRanges_2768_);
v___x_2841_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3));
v___x_2842_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2842_, 0, v_item_2767_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
lean_ctor_set(v___x_2842_, 2, v___x_2841_);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
lean_ctor_set(v___x_2843_, 1, v_requestNo_2766_);
v___x_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2843_);
return v___x_2844_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__2(lean_object* v___x_2845_, lean_object* v_as_2846_, size_t v_sz_2847_, size_t v_i_2848_, lean_object* v_b_2849_, lean_object* v___y_2850_){
_start:
{
uint8_t v___x_2852_; 
v___x_2852_ = lean_usize_dec_lt(v_i_2848_, v_sz_2847_);
if (v___x_2852_ == 0)
{
lean_object* v___x_2853_; 
lean_dec(v___x_2845_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v_b_2849_);
return v___x_2853_;
}
else
{
lean_object* v_fst_2854_; lean_object* v_snd_2855_; lean_object* v_a_2856_; lean_object* v_to_2857_; lean_object* v_fromRanges_2858_; lean_object* v___x_2859_; 
v_fst_2854_ = lean_ctor_get(v_b_2849_, 0);
lean_inc(v_fst_2854_);
v_snd_2855_ = lean_ctor_get(v_b_2849_, 1);
lean_inc(v_snd_2855_);
lean_dec_ref(v_b_2849_);
v_a_2856_ = lean_array_uget_borrowed(v_as_2846_, v_i_2848_);
v_to_2857_ = lean_ctor_get(v_a_2856_, 0);
v_fromRanges_2858_ = lean_ctor_get(v_a_2856_, 1);
lean_inc(v___x_2845_);
lean_inc_ref(v_fromRanges_2858_);
lean_inc_ref(v_to_2857_);
v___x_2859_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go(v_fst_2854_, v_to_2857_, v_fromRanges_2858_, v___x_2845_, v___y_2850_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v_fst_2861_; lean_object* v_snd_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2873_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_a_2860_);
lean_dec_ref_known(v___x_2859_, 1);
v_fst_2861_ = lean_ctor_get(v_a_2860_, 0);
v_snd_2862_ = lean_ctor_get(v_a_2860_, 1);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_a_2860_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2864_ = v_a_2860_;
v_isShared_2865_ = v_isSharedCheck_2873_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_snd_2862_);
lean_inc(v_fst_2861_);
lean_dec(v_a_2860_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2873_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2866_; lean_object* v___x_2868_; 
v___x_2866_ = lean_array_push(v_snd_2855_, v_fst_2861_);
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 1, v___x_2866_);
lean_ctor_set(v___x_2864_, 0, v_snd_2862_);
v___x_2868_ = v___x_2864_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_snd_2862_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v___x_2866_);
v___x_2868_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
size_t v___x_2869_; size_t v___x_2870_; 
v___x_2869_ = ((size_t)1ULL);
v___x_2870_ = lean_usize_add(v_i_2848_, v___x_2869_);
v_i_2848_ = v___x_2870_;
v_b_2849_ = v___x_2868_;
goto _start;
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
lean_dec(v_snd_2855_);
lean_dec(v___x_2845_);
v_a_2874_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2859_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2859_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__2___boxed(lean_object* v___x_2882_, lean_object* v_as_2883_, lean_object* v_sz_2884_, lean_object* v_i_2885_, lean_object* v_b_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
size_t v_sz_boxed_2889_; size_t v_i_boxed_2890_; lean_object* v_res_2891_; 
v_sz_boxed_2889_ = lean_unbox_usize(v_sz_2884_);
lean_dec(v_sz_2884_);
v_i_boxed_2890_ = lean_unbox_usize(v_i_2885_);
lean_dec(v_i_2885_);
v_res_2891_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go_spec__2(v___x_2882_, v_as_2883_, v_sz_boxed_2889_, v_i_boxed_2890_, v_b_2886_, v___y_2887_);
lean_dec_ref(v___y_2887_);
lean_dec_ref(v_as_2883_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go___boxed(lean_object* v_requestNo_2892_, lean_object* v_item_2893_, lean_object* v_fromRanges_2894_, lean_object* v_visited_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go(v_requestNo_2892_, v_item_2893_, v_fromRanges_2894_, v_visited_2895_, v_a_2896_);
lean_dec_ref(v_a_2896_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandOutgoingCallHierarchy_spec__0(lean_object* v_as_2899_, size_t v_sz_2900_, size_t v_i_2901_, lean_object* v_b_2902_, lean_object* v___y_2903_){
_start:
{
uint8_t v___x_2905_; 
v___x_2905_ = lean_usize_dec_lt(v_i_2901_, v_sz_2900_);
if (v___x_2905_ == 0)
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v_b_2902_);
return v___x_2906_;
}
else
{
lean_object* v_fst_2907_; lean_object* v_snd_2908_; lean_object* v_a_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_fst_2907_ = lean_ctor_get(v_b_2902_, 0);
lean_inc(v_fst_2907_);
v_snd_2908_ = lean_ctor_get(v_b_2902_, 1);
lean_inc(v_snd_2908_);
lean_dec_ref(v_b_2902_);
v_a_2909_ = lean_array_uget_borrowed(v_as_2899_, v_i_2901_);
v___x_2910_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__3));
v___x_2911_ = lean_box(1);
lean_inc(v_a_2909_);
v___x_2912_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandOutgoingCallHierarchy_go(v_fst_2907_, v_a_2909_, v___x_2910_, v___x_2911_, v___y_2903_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v_fst_2914_; lean_object* v_snd_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2926_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v___x_2912_, 1);
v_fst_2914_ = lean_ctor_get(v_a_2913_, 0);
v_snd_2915_ = lean_ctor_get(v_a_2913_, 1);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_a_2913_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2917_ = v_a_2913_;
v_isShared_2918_ = v_isSharedCheck_2926_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_snd_2915_);
lean_inc(v_fst_2914_);
lean_dec(v_a_2913_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2926_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2919_; lean_object* v___x_2921_; 
v___x_2919_ = lean_array_push(v_snd_2908_, v_fst_2914_);
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 1, v___x_2919_);
lean_ctor_set(v___x_2917_, 0, v_snd_2915_);
v___x_2921_ = v___x_2917_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_snd_2915_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v___x_2919_);
v___x_2921_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
size_t v___x_2922_; size_t v___x_2923_; 
v___x_2922_ = ((size_t)1ULL);
v___x_2923_ = lean_usize_add(v_i_2901_, v___x_2922_);
v_i_2901_ = v___x_2923_;
v_b_2902_ = v___x_2921_;
goto _start;
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec(v_snd_2908_);
v_a_2927_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2912_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2912_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandOutgoingCallHierarchy_spec__0___boxed(lean_object* v_as_2935_, lean_object* v_sz_2936_, lean_object* v_i_2937_, lean_object* v_b_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
size_t v_sz_boxed_2941_; size_t v_i_boxed_2942_; lean_object* v_res_2943_; 
v_sz_boxed_2941_ = lean_unbox_usize(v_sz_2936_);
lean_dec(v_sz_2936_);
v_i_boxed_2942_ = lean_unbox_usize(v_i_2937_);
lean_dec(v_i_2937_);
v_res_2943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandOutgoingCallHierarchy_spec__0(v_as_2935_, v_sz_boxed_2941_, v_i_boxed_2942_, v_b_2938_, v___y_2939_);
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_as_2935_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandOutgoingCallHierarchy(lean_object* v_requestNo_2944_, lean_object* v_uri_2945_, lean_object* v_pos_2946_, lean_object* v_a_2947_){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
lean_inc(v_requestNo_2944_);
v___x_2949_ = l_Lean_JsonNumber_fromNat(v_requestNo_2944_);
v___x_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
v___x_2951_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__0));
v___x_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2952_, 0, v_uri_2945_);
lean_ctor_set(v___x_2952_, 1, v_pos_2946_);
lean_inc_ref(v___x_2950_);
v___x_2953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2950_);
lean_ctor_set(v___x_2953_, 1, v___x_2951_);
lean_ctor_set(v___x_2953_, 2, v___x_2952_);
v___x_2954_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__0(v___x_2953_, v_a_2947_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v___x_2955_; 
lean_dec_ref_known(v___x_2954_, 1);
v___x_2955_ = l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandIncomingCallHierarchy_spec__1(v___x_2950_, v_a_2947_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v_result_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2999_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref_known(v___x_2955_, 1);
v_result_2957_ = lean_ctor_get(v_a_2956_, 1);
v_isSharedCheck_2999_ = !lean_is_exclusive(v_a_2956_);
if (v_isSharedCheck_2999_ == 0)
{
lean_object* v_unused_3000_; 
v_unused_3000_ = lean_ctor_get(v_a_2956_, 0);
lean_dec(v_unused_3000_);
v___x_2959_ = v_a_2956_;
v_isShared_2960_ = v_isSharedCheck_2999_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_result_2957_);
lean_dec(v_a_2956_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2999_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___y_2964_; 
v___x_2961_ = lean_unsigned_to_nat(1u);
v___x_2962_ = lean_nat_add(v_requestNo_2944_, v___x_2961_);
lean_dec(v_requestNo_2944_);
if (lean_obj_tag(v_result_2957_) == 0)
{
lean_object* v___x_2997_; 
v___x_2997_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandIncomingCallHierarchy___closed__1));
v___y_2964_ = v___x_2997_;
goto v___jp_2963_;
}
else
{
lean_object* v_val_2998_; 
v_val_2998_ = lean_ctor_get(v_result_2957_, 0);
lean_inc(v_val_2998_);
lean_dec_ref_known(v_result_2957_, 1);
v___y_2964_ = v_val_2998_;
goto v___jp_2963_;
}
v___jp_2963_:
{
lean_object* v___x_2965_; lean_object* v___x_2967_; 
v___x_2965_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go___closed__1));
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_2965_);
lean_ctor_set(v___x_2959_, 0, v___x_2962_);
v___x_2967_ = v___x_2959_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v___x_2965_);
v___x_2967_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
size_t v_sz_2968_; size_t v___x_2969_; lean_object* v___x_2970_; 
v_sz_2968_ = lean_array_size(v___y_2964_);
v___x_2969_ = ((size_t)0ULL);
v___x_2970_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_Ipc_expandOutgoingCallHierarchy_spec__0(v___y_2964_, v_sz_2968_, v___x_2969_, v___x_2967_, v_a_2947_);
lean_dec_ref(v___y_2964_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2987_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2973_ = v___x_2970_;
v_isShared_2974_ = v_isSharedCheck_2987_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2970_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2987_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v_fst_2975_; lean_object* v_snd_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2986_; 
v_fst_2975_ = lean_ctor_get(v_a_2971_, 0);
v_snd_2976_ = lean_ctor_get(v_a_2971_, 1);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_a_2971_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2978_ = v_a_2971_;
v_isShared_2979_ = v_isSharedCheck_2986_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_snd_2976_);
lean_inc(v_fst_2975_);
lean_dec(v_a_2971_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2986_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 1, v_fst_2975_);
lean_ctor_set(v___x_2978_, 0, v_snd_2976_);
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_snd_2976_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_fst_2975_);
v___x_2981_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
lean_object* v___x_2983_; 
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 0, v___x_2981_);
v___x_2983_ = v___x_2973_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v___x_2981_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
}
else
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
v_a_2988_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2970_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2970_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
lean_dec(v_requestNo_2944_);
v_a_3001_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2955_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_2955_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec_ref_known(v___x_2950_, 1);
lean_dec(v_requestNo_2944_);
v_a_3009_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_2954_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_2954_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandOutgoingCallHierarchy___boxed(lean_object* v_requestNo_3017_, lean_object* v_uri_3018_, lean_object* v_pos_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_){
_start:
{
lean_object* v_res_3022_; 
v_res_3022_ = l_Lean_Lsp_Ipc_expandOutgoingCallHierarchy(v_requestNo_3017_, v_uri_3018_, v_pos_3019_, v_a_3020_);
lean_dec_ref(v_a_3020_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__0(lean_object* v_j_3023_, lean_object* v_k_3024_){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = l_Lean_Json_getObjValD(v_j_3023_, v_k_3024_);
v___x_3026_ = l_Lean_Lsp_instFromJsonLeanImport_fromJson(v___x_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__0___boxed(lean_object* v_j_3027_, lean_object* v_k_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__0(v_j_3027_, v_k_3028_);
lean_dec_ref(v_k_3028_);
return v_res_3029_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = 1;
v___x_3037_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__1));
v___x_3038_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3037_, v___x_3036_);
return v___x_3038_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3039_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__7));
v___x_3040_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__2, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__2_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__2);
v___x_3041_ = lean_string_append(v___x_3040_, v___x_3039_);
return v___x_3041_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3042_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__10);
v___x_3043_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3);
v___x_3044_ = lean_string_append(v___x_3043_, v___x_3042_);
return v___x_3044_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3045_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12));
v___x_3046_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__4, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__4_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__4);
v___x_3047_ = lean_string_append(v___x_3046_, v___x_3045_);
return v___x_3047_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__6(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3048_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21, &l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21_once, _init_l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__21);
v___x_3049_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__3);
v___x_3050_ = lean_string_append(v___x_3049_, v___x_3048_);
return v___x_3050_;
}
}
static lean_object* _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3051_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__12));
v___x_3052_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__6, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__6_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__6);
v___x_3053_ = lean_string_append(v___x_3052_, v___x_3051_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson(lean_object* v_json_3054_){
_start:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0));
lean_inc(v_json_3054_);
v___x_3056_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__0(v_json_3054_, v___x_3055_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3066_; 
lean_dec(v_json_3054_);
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3059_ = v___x_3056_;
v_isShared_3060_ = v_isSharedCheck_3066_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3056_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3066_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
v___x_3061_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__5, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__5_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__5);
v___x_3062_ = lean_string_append(v___x_3061_, v_a_3057_);
lean_dec(v_a_3057_);
if (v_isShared_3060_ == 0)
{
lean_ctor_set(v___x_3059_, 0, v___x_3062_);
v___x_3064_ = v___x_3059_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
else
{
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec(v_json_3054_);
v_a_3067_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3056_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3056_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
lean_ctor_set_tag(v___x_3069_, 0);
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v_a_3075_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3076_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19));
v___x_3077_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1(v_json_3054_, v___x_3076_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v_a_3075_);
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3080_ = v___x_3077_;
v_isShared_3081_ = v_isSharedCheck_3087_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3077_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3087_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3085_; 
v___x_3082_ = lean_obj_once(&l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__7, &l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__7_once, _init_l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson___closed__7);
v___x_3083_ = lean_string_append(v___x_3082_, v_a_3078_);
lean_dec(v_a_3078_);
if (v_isShared_3081_ == 0)
{
lean_ctor_set(v___x_3080_, 0, v___x_3083_);
v___x_3085_ = v___x_3080_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v___x_3083_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
else
{
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
lean_dec(v_a_3075_);
v_a_3088_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_3077_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_3077_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
lean_ctor_set_tag(v___x_3090_, 0);
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
else
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3104_; 
v_a_3096_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3098_ = v___x_3077_;
v_isShared_3099_ = v_isSharedCheck_3104_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3077_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3104_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3100_; lean_object* v___x_3102_; 
v___x_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3100_, 0, v_a_3075_);
lean_ctor_set(v___x_3100_, 1, v_a_3096_);
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 0, v___x_3100_);
v___x_3102_ = v___x_3098_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3100_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1_spec__2(size_t v_sz_3105_, size_t v_i_3106_, lean_object* v_bs_3107_){
_start:
{
uint8_t v___x_3108_; 
v___x_3108_ = lean_usize_dec_lt(v_i_3106_, v_sz_3105_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = l_unsafeCast___redArg(v_bs_3107_);
lean_dec_ref(v_bs_3107_);
v___x_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
return v___x_3110_;
}
else
{
lean_object* v_v_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v_v_3111_ = lean_array_uget_borrowed(v_bs_3107_, v_i_3106_);
v___x_3112_ = l_unsafeCast___redArg(v_v_3111_);
v___x_3113_ = l_Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson(v___x_3112_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
lean_dec_ref(v_bs_3107_);
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3113_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3113_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3123_; lean_object* v_bs_x27_3124_; size_t v___x_3125_; size_t v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_a_3122_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3122_);
lean_dec_ref_known(v___x_3113_, 1);
v___x_3123_ = lean_unsigned_to_nat(0u);
v_bs_x27_3124_ = lean_array_uset(v_bs_3107_, v_i_3106_, v___x_3123_);
v___x_3125_ = ((size_t)1ULL);
v___x_3126_ = lean_usize_add(v_i_3106_, v___x_3125_);
v___x_3127_ = l_unsafeCast___redArg(v_a_3122_);
lean_dec(v_a_3122_);
v___x_3128_ = lean_array_uset(v_bs_x27_3124_, v_i_3106_, v___x_3127_);
v_i_3106_ = v___x_3126_;
v_bs_3107_ = v___x_3128_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1(lean_object* v_x_3130_){
_start:
{
if (lean_obj_tag(v_x_3130_) == 4)
{
lean_object* v_elems_3131_; size_t v_sz_3132_; size_t v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v_elems_3131_ = lean_ctor_get(v_x_3130_, 0);
lean_inc_ref(v_elems_3131_);
lean_dec_ref_known(v_x_3130_, 1);
v_sz_3132_ = lean_array_size(v_elems_3131_);
v___x_3133_ = ((size_t)0ULL);
v___x_3134_ = l_unsafeCast___redArg(v_elems_3131_);
lean_dec_ref(v_elems_3131_);
v___x_3135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1_spec__2(v_sz_3132_, v___x_3133_, v___x_3134_);
v___x_3136_ = l_unsafeCast___redArg(v___x_3135_);
lean_dec_ref(v___x_3135_);
return v___x_3136_;
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3137_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_3138_ = lean_unsigned_to_nat(80u);
v___x_3139_ = l_Lean_Json_pretty(v_x_3130_, v___x_3138_);
v___x_3140_ = lean_string_append(v___x_3137_, v___x_3139_);
lean_dec_ref(v___x_3139_);
v___x_3141_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_3142_ = lean_string_append(v___x_3140_, v___x_3141_);
v___x_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3142_);
return v___x_3143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1(lean_object* v_j_3144_, lean_object* v_k_3145_){
_start:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3146_ = l_Lean_Json_getObjValD(v_j_3144_, v_k_3145_);
v___x_3147_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1(v___x_3146_);
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1___boxed(lean_object* v_j_3148_, lean_object* v_k_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1(v_j_3148_, v_k_3149_);
lean_dec_ref(v_k_3149_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_3151_, lean_object* v_i_3152_, lean_object* v_bs_3153_){
_start:
{
size_t v_sz_boxed_3154_; size_t v_i_boxed_3155_; lean_object* v_res_3156_; 
v_sz_boxed_3154_ = lean_unbox_usize(v_sz_3151_);
lean_dec(v_sz_3151_);
v_i_boxed_3155_ = lean_unbox_usize(v_i_3152_);
lean_dec(v_i_3152_);
v_res_3156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonModuleHierarchy_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_3154_, v_i_boxed_3155_, v_bs_3153_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson(lean_object* v_x_3159_){
_start:
{
lean_object* v_item_3160_; lean_object* v_children_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3181_; 
v_item_3160_ = lean_ctor_get(v_x_3159_, 0);
v_children_3161_ = lean_ctor_get(v_x_3159_, 1);
v_isSharedCheck_3181_ = !lean_is_exclusive(v_x_3159_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3163_ = v_x_3159_;
v_isShared_3164_ = v_isSharedCheck_3181_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_children_3161_);
lean_inc(v_item_3160_);
lean_dec(v_x_3159_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3181_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3168_; 
v___x_3165_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__0));
v___x_3166_ = l_Lean_Lsp_instToJsonLeanImport_toJson(v_item_3160_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 1, v___x_3166_);
lean_ctor_set(v___x_3163_, 0, v___x_3165_);
v___x_3168_ = v___x_3163_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v___x_3165_);
lean_ctor_set(v_reuseFailAlloc_3180_, 1, v___x_3166_);
v___x_3168_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3169_ = lean_box(0);
v___x_3170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3168_);
lean_ctor_set(v___x_3170_, 1, v___x_3169_);
v___x_3171_ = ((lean_object*)(l_Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson___closed__19));
v___x_3172_ = l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0(v_children_3161_);
lean_dec_ref(v_children_3161_);
v___x_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3171_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
v___x_3174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
lean_ctor_set(v___x_3174_, 1, v___x_3169_);
v___x_3175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3169_);
v___x_3176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3170_);
lean_ctor_set(v___x_3176_, 1, v___x_3175_);
v___x_3177_ = ((lean_object*)(l_Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson___closed__0));
v___x_3178_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_Ipc_instToJsonCallHierarchy_toJson_spec__2(v___x_3176_, v___x_3177_);
v___x_3179_ = l_Lean_Json_mkObj(v___x_3178_);
lean_dec(v___x_3178_);
return v___x_3179_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0_spec__0(size_t v_sz_3182_, size_t v_i_3183_, lean_object* v_bs_3184_){
_start:
{
uint8_t v___x_3185_; 
v___x_3185_ = lean_usize_dec_lt(v_i_3183_, v_sz_3182_);
if (v___x_3185_ == 0)
{
lean_object* v___x_3186_; 
v___x_3186_ = l_unsafeCast___redArg(v_bs_3184_);
lean_dec_ref(v_bs_3184_);
return v___x_3186_;
}
else
{
lean_object* v_v_3187_; lean_object* v___x_3188_; lean_object* v_bs_x27_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; size_t v___x_3192_; size_t v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v_v_3187_ = lean_array_uget(v_bs_3184_, v_i_3183_);
v___x_3188_ = lean_unsigned_to_nat(0u);
v_bs_x27_3189_ = lean_array_uset(v_bs_3184_, v_i_3183_, v___x_3188_);
v___x_3190_ = l_unsafeCast___redArg(v_v_3187_);
lean_dec(v_v_3187_);
v___x_3191_ = l_Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson(v___x_3190_);
v___x_3192_ = ((size_t)1ULL);
v___x_3193_ = lean_usize_add(v_i_3183_, v___x_3192_);
v___x_3194_ = l_unsafeCast___redArg(v___x_3191_);
lean_dec(v___x_3191_);
v___x_3195_ = lean_array_uset(v_bs_x27_3189_, v_i_3183_, v___x_3194_);
v_i_3183_ = v___x_3193_;
v_bs_3184_ = v___x_3195_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0(lean_object* v_a_3197_){
_start:
{
size_t v_sz_3198_; size_t v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_sz_3198_ = lean_array_size(v_a_3197_);
v___x_3199_ = ((size_t)0ULL);
v___x_3200_ = l_unsafeCast___redArg(v_a_3197_);
v___x_3201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0_spec__0(v_sz_3198_, v___x_3199_, v___x_3200_);
v___x_3202_ = l_unsafeCast___redArg(v___x_3201_);
lean_dec_ref(v___x_3201_);
v___x_3203_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0___boxed(lean_object* v_a_3204_){
_start:
{
lean_object* v_res_3205_; 
v_res_3205_ = l_Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0(v_a_3204_);
lean_dec_ref(v_a_3204_);
return v_res_3205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0_spec__0___boxed(lean_object* v_sz_3206_, lean_object* v_i_3207_, lean_object* v_bs_3208_){
_start:
{
size_t v_sz_boxed_3209_; size_t v_i_boxed_3210_; lean_object* v_res_3211_; 
v_sz_boxed_3209_ = lean_unbox_usize(v_sz_3206_);
lean_dec(v_sz_3206_);
v_i_boxed_3210_ = lean_unbox_usize(v_i_3207_);
lean_dec(v_i_3207_);
v_res_3211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_Ipc_instToJsonModuleHierarchy_toJson_spec__0_spec__0(v_sz_boxed_3209_, v_i_boxed_3210_, v_bs_3208_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2_spec__4(size_t v_sz_3214_, size_t v_i_3215_, lean_object* v_bs_3216_){
_start:
{
uint8_t v___x_3217_; 
v___x_3217_ = lean_usize_dec_lt(v_i_3215_, v_sz_3214_);
if (v___x_3217_ == 0)
{
lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3218_ = l_unsafeCast___redArg(v_bs_3216_);
lean_dec_ref(v_bs_3216_);
v___x_3219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
return v___x_3219_;
}
else
{
lean_object* v_v_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_v_3220_ = lean_array_uget_borrowed(v_bs_3216_, v_i_3215_);
v___x_3221_ = l_unsafeCast___redArg(v_v_3220_);
v___x_3222_ = l_Lean_Lsp_instFromJsonLeanImport_fromJson(v___x_3221_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
lean_dec_ref(v_bs_3216_);
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v___x_3222_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_3222_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3232_; lean_object* v_bs_x27_3233_; size_t v___x_3234_; size_t v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v_a_3231_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3232_ = lean_unsigned_to_nat(0u);
v_bs_x27_3233_ = lean_array_uset(v_bs_3216_, v_i_3215_, v___x_3232_);
v___x_3234_ = ((size_t)1ULL);
v___x_3235_ = lean_usize_add(v_i_3215_, v___x_3234_);
v___x_3236_ = l_unsafeCast___redArg(v_a_3231_);
lean_dec(v_a_3231_);
v___x_3237_ = lean_array_uset(v_bs_x27_3233_, v_i_3215_, v___x_3236_);
v_i_3215_ = v___x_3235_;
v_bs_3216_ = v___x_3237_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_3239_, lean_object* v_i_3240_, lean_object* v_bs_3241_){
_start:
{
size_t v_sz_boxed_3242_; size_t v_i_boxed_3243_; lean_object* v_res_3244_; 
v_sz_boxed_3242_ = lean_unbox_usize(v_sz_3239_);
lean_dec(v_sz_3239_);
v_i_boxed_3243_ = lean_unbox_usize(v_i_3240_);
lean_dec(v_i_3240_);
v_res_3244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2_spec__4(v_sz_boxed_3242_, v_i_boxed_3243_, v_bs_3241_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2(lean_object* v_x_3245_){
_start:
{
if (lean_obj_tag(v_x_3245_) == 4)
{
lean_object* v_elems_3246_; size_t v_sz_3247_; size_t v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v_elems_3246_ = lean_ctor_get(v_x_3245_, 0);
lean_inc_ref(v_elems_3246_);
lean_dec_ref_known(v_x_3245_, 1);
v_sz_3247_ = lean_array_size(v_elems_3246_);
v___x_3248_ = ((size_t)0ULL);
v___x_3249_ = l_unsafeCast___redArg(v_elems_3246_);
lean_dec_ref(v_elems_3246_);
v___x_3250_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2_spec__4(v_sz_3247_, v___x_3248_, v___x_3249_);
v___x_3251_ = l_unsafeCast___redArg(v___x_3250_);
lean_dec_ref(v___x_3250_);
return v___x_3251_;
}
else
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3252_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_Ipc_instFromJsonCallHierarchy_fromJson_spec__1_spec__1___closed__0));
v___x_3253_ = lean_unsigned_to_nat(80u);
v___x_3254_ = l_Lean_Json_pretty(v_x_3245_, v___x_3253_);
v___x_3255_ = lean_string_append(v___x_3252_, v___x_3254_);
lean_dec_ref(v___x_3254_);
v___x_3256_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_3257_ = lean_string_append(v___x_3255_, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3257_);
return v___x_3258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1(lean_object* v_expectedID_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v___x_3262_; 
v___x_3262_ = l_Lean_Lsp_Ipc_stdout(v_a_3260_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3406_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3265_ = v___x_3262_;
v_isShared_3266_ = v_isSharedCheck_3406_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3262_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3406_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; 
v___x_3267_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_3263_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v_a_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3397_; 
v_a_3268_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3270_ = v___x_3267_;
v_isShared_3271_ = v_isSharedCheck_3397_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_a_3268_);
lean_dec(v___x_3267_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3397_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___y_3273_; lean_object* v___y_3274_; 
switch(lean_obj_tag(v_a_3268_))
{
case 2:
{
lean_object* v_id_3280_; lean_object* v_result_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3325_; 
v_id_3280_ = lean_ctor_get(v_a_3268_, 0);
v_result_3281_ = lean_ctor_get(v_a_3268_, 1);
v_isSharedCheck_3325_ = !lean_is_exclusive(v_a_3268_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3283_ = v_a_3268_;
v_isShared_3284_ = v_isSharedCheck_3325_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_result_3281_);
lean_inc(v_id_3280_);
lean_dec(v_a_3268_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3325_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
uint8_t v___x_3285_; 
v___x_3285_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_3280_, v_expectedID_3259_);
if (v___x_3285_ == 0)
{
lean_object* v___x_3286_; lean_object* v___y_3288_; 
lean_del_object(v___x_3283_);
lean_dec(v_result_3281_);
lean_del_object(v___x_3265_);
v___x_3286_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
switch(lean_obj_tag(v_expectedID_3259_))
{
case 0:
{
lean_object* v_s_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v_s_3299_ = lean_ctor_get(v_expectedID_3259_, 0);
lean_inc_ref(v_s_3299_);
lean_dec_ref_known(v_expectedID_3259_, 1);
v___x_3300_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_3301_ = lean_string_append(v___x_3300_, v_s_3299_);
lean_dec_ref(v_s_3299_);
v___x_3302_ = lean_string_append(v___x_3301_, v___x_3300_);
v___y_3288_ = v___x_3302_;
goto v___jp_3287_;
}
case 1:
{
lean_object* v_n_3303_; lean_object* v___x_3304_; 
v_n_3303_ = lean_ctor_get(v_expectedID_3259_, 0);
lean_inc_ref(v_n_3303_);
lean_dec_ref_known(v_expectedID_3259_, 1);
v___x_3304_ = l_Lean_JsonNumber_toString(v_n_3303_);
v___y_3288_ = v___x_3304_;
goto v___jp_3287_;
}
default: 
{
lean_object* v___x_3305_; 
v___x_3305_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_3288_ = v___x_3305_;
goto v___jp_3287_;
}
}
v___jp_3287_:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3289_ = lean_string_append(v___x_3286_, v___y_3288_);
lean_dec_ref(v___y_3288_);
v___x_3290_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_3291_ = lean_string_append(v___x_3289_, v___x_3290_);
switch(lean_obj_tag(v_id_3280_))
{
case 0:
{
lean_object* v_s_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v_s_3292_ = lean_ctor_get(v_id_3280_, 0);
lean_inc_ref(v_s_3292_);
lean_dec_ref_known(v_id_3280_, 1);
v___x_3293_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_3294_ = lean_string_append(v___x_3293_, v_s_3292_);
lean_dec_ref(v_s_3292_);
v___x_3295_ = lean_string_append(v___x_3294_, v___x_3293_);
v___y_3273_ = v___x_3291_;
v___y_3274_ = v___x_3295_;
goto v___jp_3272_;
}
case 1:
{
lean_object* v_n_3296_; lean_object* v___x_3297_; 
v_n_3296_ = lean_ctor_get(v_id_3280_, 0);
lean_inc_ref(v_n_3296_);
lean_dec_ref_known(v_id_3280_, 1);
v___x_3297_ = l_Lean_JsonNumber_toString(v_n_3296_);
v___y_3273_ = v___x_3291_;
v___y_3274_ = v___x_3297_;
goto v___jp_3272_;
}
default: 
{
lean_object* v___x_3298_; 
v___x_3298_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_3273_ = v___x_3291_;
v___y_3274_ = v___x_3298_;
goto v___jp_3272_;
}
}
}
}
else
{
lean_object* v___x_3306_; 
lean_dec(v_id_3280_);
lean_del_object(v___x_3270_);
lean_inc(v_result_3281_);
v___x_3306_ = l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1_spec__2(v_result_3281_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3316_; 
lean_del_object(v___x_3283_);
lean_dec(v_expectedID_3259_);
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0));
v___x_3309_ = l_Lean_Json_compress(v_result_3281_);
v___x_3310_ = lean_string_append(v___x_3308_, v___x_3309_);
lean_dec_ref(v___x_3309_);
v___x_3311_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1));
v___x_3312_ = lean_string_append(v___x_3310_, v___x_3311_);
v___x_3313_ = lean_string_append(v___x_3312_, v_a_3307_);
lean_dec(v_a_3307_);
v___x_3314_ = lean_mk_io_user_error(v___x_3313_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set_tag(v___x_3265_, 1);
lean_ctor_set(v___x_3265_, 0, v___x_3314_);
v___x_3316_ = v___x_3265_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3314_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; 
lean_dec(v_result_3281_);
v_a_3318_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3318_);
lean_dec_ref_known(v___x_3306_, 1);
if (v_isShared_3284_ == 0)
{
lean_ctor_set_tag(v___x_3283_, 0);
lean_ctor_set(v___x_3283_, 1, v_a_3318_);
lean_ctor_set(v___x_3283_, 0, v_expectedID_3259_);
v___x_3320_ = v___x_3283_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_expectedID_3259_);
lean_ctor_set(v_reuseFailAlloc_3324_, 1, v_a_3318_);
v___x_3320_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
lean_object* v___x_3322_; 
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v___x_3320_);
v___x_3322_ = v___x_3265_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
}
}
case 3:
{
lean_object* v_id_3326_; uint8_t v_code_3327_; lean_object* v_message_3328_; lean_object* v_data_x3f_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___x_3361_; lean_object* v___y_3363_; 
lean_del_object(v___x_3270_);
lean_dec(v_expectedID_3259_);
v_id_3326_ = lean_ctor_get(v_a_3268_, 0);
lean_inc(v_id_3326_);
v_code_3327_ = lean_ctor_get_uint8(v_a_3268_, sizeof(void*)*3);
v_message_3328_ = lean_ctor_get(v_a_3268_, 1);
lean_inc_ref(v_message_3328_);
v_data_x3f_3329_ = lean_ctor_get(v_a_3268_, 2);
lean_inc(v_data_x3f_3329_);
lean_dec_ref_known(v_a_3268_, 3);
v___x_3330_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2));
v___x_3331_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7));
v___x_3361_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11));
switch(lean_obj_tag(v_id_3326_))
{
case 0:
{
lean_object* v_s_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
v_s_3379_ = lean_ctor_get(v_id_3326_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v_id_3326_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v_id_3326_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_s_3379_);
lean_dec(v_id_3326_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set_tag(v___x_3381_, 3);
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_s_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
v___y_3363_ = v___x_3384_;
goto v___jp_3362_;
}
}
}
case 1:
{
lean_object* v_n_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
v_n_3387_ = lean_ctor_get(v_id_3326_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v_id_3326_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v_id_3326_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_n_3387_);
lean_dec(v_id_3326_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
lean_ctor_set_tag(v___x_3389_, 2);
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_n_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
v___y_3363_ = v___x_3392_;
goto v___jp_3362_;
}
}
}
default: 
{
lean_object* v___x_3395_; 
v___x_3395_ = lean_box(0);
v___y_3363_ = v___x_3395_;
goto v___jp_3362_;
}
}
v___jp_3332_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3359_; 
lean_inc(v___y_3336_);
lean_inc_ref(v___y_3333_);
v___x_3337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3337_, 0, v___y_3333_);
lean_ctor_set(v___x_3337_, 1, v___y_3336_);
v___x_3338_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8));
v___x_3339_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3339_, 0, v_message_3328_);
v___x_3340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3338_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
v___x_3341_ = lean_box(0);
v___x_3342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3340_);
lean_ctor_set(v___x_3342_, 1, v___x_3341_);
v___x_3343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3337_);
lean_ctor_set(v___x_3343_, 1, v___x_3342_);
v___x_3344_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9));
v___x_3345_ = l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(v___x_3344_, v_data_x3f_3329_);
lean_dec(v_data_x3f_3329_);
v___x_3346_ = l_List_appendTR___redArg(v___x_3343_, v___x_3345_);
v___x_3347_ = l_Lean_Json_mkObj(v___x_3346_);
lean_dec(v___x_3346_);
lean_inc_ref(v___y_3335_);
v___x_3348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3348_, 0, v___y_3335_);
lean_ctor_set(v___x_3348_, 1, v___x_3347_);
v___x_3349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
lean_ctor_set(v___x_3349_, 1, v___x_3341_);
v___x_3350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___y_3334_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3331_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = l_Lean_Json_mkObj(v___x_3351_);
lean_dec_ref_known(v___x_3351_, 2);
v___x_3353_ = l_Lean_Json_compress(v___x_3352_);
v___x_3354_ = lean_string_append(v___x_3330_, v___x_3353_);
lean_dec_ref(v___x_3353_);
v___x_3355_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_3356_ = lean_string_append(v___x_3354_, v___x_3355_);
v___x_3357_ = lean_mk_io_user_error(v___x_3356_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set_tag(v___x_3265_, 1);
lean_ctor_set(v___x_3265_, 0, v___x_3357_);
v___x_3359_ = v___x_3265_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3357_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
v___jp_3362_:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3361_);
lean_ctor_set(v___x_3364_, 1, v___y_3363_);
v___x_3365_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12));
v___x_3366_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13));
switch(v_code_3327_)
{
case 0:
{
lean_object* v___x_3367_; 
v___x_3367_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3367_;
goto v___jp_3332_;
}
case 1:
{
lean_object* v___x_3368_; 
v___x_3368_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3368_;
goto v___jp_3332_;
}
case 2:
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3369_;
goto v___jp_3332_;
}
case 3:
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3370_;
goto v___jp_3332_;
}
case 4:
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3371_;
goto v___jp_3332_;
}
case 5:
{
lean_object* v___x_3372_; 
v___x_3372_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3372_;
goto v___jp_3332_;
}
case 6:
{
lean_object* v___x_3373_; 
v___x_3373_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3373_;
goto v___jp_3332_;
}
case 7:
{
lean_object* v___x_3374_; 
v___x_3374_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3374_;
goto v___jp_3332_;
}
case 8:
{
lean_object* v___x_3375_; 
v___x_3375_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3375_;
goto v___jp_3332_;
}
case 9:
{
lean_object* v___x_3376_; 
v___x_3376_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3376_;
goto v___jp_3332_;
}
case 10:
{
lean_object* v___x_3377_; 
v___x_3377_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3377_;
goto v___jp_3332_;
}
default: 
{
lean_object* v___x_3378_; 
v___x_3378_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61);
v___y_3333_ = v___x_3366_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3365_;
v___y_3336_ = v___x_3378_;
goto v___jp_3332_;
}
}
}
}
default: 
{
lean_del_object(v___x_3270_);
lean_dec(v_a_3268_);
lean_del_object(v___x_3265_);
goto _start;
}
}
v___jp_3272_:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3275_ = lean_string_append(v___y_3273_, v___y_3274_);
lean_dec_ref(v___y_3274_);
v___x_3276_ = lean_mk_io_user_error(v___x_3275_);
if (v_isShared_3271_ == 0)
{
lean_ctor_set_tag(v___x_3270_, 1);
lean_ctor_set(v___x_3270_, 0, v___x_3276_);
v___x_3278_ = v___x_3270_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
else
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3405_; 
lean_del_object(v___x_3265_);
lean_dec(v_expectedID_3259_);
v_a_3398_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3400_ = v___x_3267_;
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3267_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3403_; 
if (v_isShared_3401_ == 0)
{
v___x_3403_ = v___x_3400_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3398_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
return v___x_3403_;
}
}
}
}
}
else
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3414_; 
lean_dec(v_expectedID_3259_);
v_a_3407_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3409_ = v___x_3262_;
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3262_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3412_; 
if (v_isShared_3410_ == 0)
{
v___x_3412_ = v___x_3409_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_a_3407_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1___boxed(lean_object* v_expectedID_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1(v_expectedID_3415_, v_a_3416_);
lean_dec_ref(v_a_3416_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0_spec__1(lean_object* v_v_3419_){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = l_Lean_Lsp_instToJsonLeanModuleHierarchyImportsParams_toJson(v_v_3419_);
v___x_3421_ = l_Lean_Json_Structured_fromJson_x3f(v___x_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0_spec__1___boxed(lean_object* v_v_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0_spec__1(v_v_3422_);
lean_dec_ref(v_v_3422_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0(lean_object* v_h_3424_, lean_object* v_r_3425_){
_start:
{
lean_object* v_id_3427_; lean_object* v_method_3428_; lean_object* v_param_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3449_; 
v_id_3427_ = lean_ctor_get(v_r_3425_, 0);
v_method_3428_ = lean_ctor_get(v_r_3425_, 1);
v_param_3429_ = lean_ctor_get(v_r_3425_, 2);
v_isSharedCheck_3449_ = !lean_is_exclusive(v_r_3425_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3431_ = v_r_3425_;
v_isShared_3432_ = v_isSharedCheck_3449_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_param_3429_);
lean_inc(v_method_3428_);
lean_inc(v_id_3427_);
lean_dec(v_r_3425_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3449_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___y_3434_; lean_object* v___x_3439_; 
v___x_3439_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0_spec__1(v_param_3429_);
lean_dec(v_param_3429_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v___x_3440_; 
lean_dec_ref_known(v___x_3439_, 1);
v___x_3440_ = lean_box(0);
v___y_3434_ = v___x_3440_;
goto v___jp_3433_;
}
else
{
lean_object* v_a_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
v_a_3441_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3443_ = v___x_3439_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_a_3441_);
lean_dec(v___x_3439_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3441_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
v___y_3434_ = v___x_3446_;
goto v___jp_3433_;
}
}
}
v___jp_3433_:
{
lean_object* v___x_3436_; 
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 2, v___y_3434_);
v___x_3436_ = v___x_3431_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_id_3427_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v_method_3428_);
lean_ctor_set(v_reuseFailAlloc_3438_, 2, v___y_3434_);
v___x_3436_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
lean_object* v___x_3437_; 
v___x_3437_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_3424_, v___x_3436_);
return v___x_3437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0___boxed(lean_object* v_h_3450_, lean_object* v_r_3451_, lean_object* v_a_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0(v_h_3450_, v_r_3451_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0(lean_object* v_r_3454_, lean_object* v_a_3455_){
_start:
{
lean_object* v___x_3457_; lean_object* v_a_3458_; lean_object* v___x_3459_; 
v___x_3457_ = l_Lean_Lsp_Ipc_stdin(v_a_3455_);
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3458_);
lean_dec_ref(v___x_3457_);
v___x_3459_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0_spec__0(v_a_3458_, v_r_3454_);
return v___x_3459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0___boxed(lean_object* v_r_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_){
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0(v_r_3460_, v_a_3461_);
lean_dec_ref(v_a_3461_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go(lean_object* v_requestNo_3467_, lean_object* v_item_3468_, lean_object* v_visited_3469_, lean_object* v_a_3470_){
_start:
{
lean_object* v_module_3472_; lean_object* v_name_3473_; uint8_t v___x_3474_; 
v_module_3472_ = lean_ctor_get(v_item_3468_, 0);
v_name_3473_ = lean_ctor_get(v_module_3472_, 0);
v___x_3474_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(v_name_3473_, v_visited_3469_);
if (v___x_3474_ == 0)
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
lean_inc(v_requestNo_3467_);
v___x_3475_ = l_Lean_JsonNumber_fromNat(v_requestNo_3467_);
v___x_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
v___x_3477_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__0));
lean_inc_ref(v_module_3472_);
lean_inc_ref(v___x_3476_);
v___x_3478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3476_);
lean_ctor_set(v___x_3478_, 1, v___x_3477_);
lean_ctor_set(v___x_3478_, 2, v_module_3472_);
v___x_3479_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__0(v___x_3478_, v_a_3470_);
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v___x_3480_; 
lean_dec_ref_known(v___x_3479_, 1);
v___x_3480_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1(v___x_3476_, v_a_3470_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___y_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3480_, 1);
if (v___x_3474_ == 0)
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = lean_box(0);
lean_inc_ref(v_name_3473_);
v___x_3526_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_name_3473_, v___x_3525_, v_visited_3469_);
v___y_3483_ = v___x_3526_;
goto v___jp_3482_;
}
else
{
v___y_3483_ = v_visited_3469_;
goto v___jp_3482_;
}
v___jp_3482_:
{
lean_object* v_result_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3523_; 
v_result_3484_ = lean_ctor_get(v_a_3481_, 1);
v_isSharedCheck_3523_ = !lean_is_exclusive(v_a_3481_);
if (v_isSharedCheck_3523_ == 0)
{
lean_object* v_unused_3524_; 
v_unused_3524_ = lean_ctor_get(v_a_3481_, 0);
lean_dec(v_unused_3524_);
v___x_3486_ = v_a_3481_;
v_isShared_3487_ = v_isSharedCheck_3523_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_result_3484_);
lean_dec(v_a_3481_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3523_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3492_; 
v___x_3488_ = lean_unsigned_to_nat(1u);
v___x_3489_ = lean_nat_add(v_requestNo_3467_, v___x_3488_);
lean_dec(v_requestNo_3467_);
v___x_3490_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1));
if (v_isShared_3487_ == 0)
{
lean_ctor_set(v___x_3486_, 1, v___x_3490_);
lean_ctor_set(v___x_3486_, 0, v___x_3489_);
v___x_3492_ = v___x_3486_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v___x_3489_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v___x_3490_);
v___x_3492_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
size_t v_sz_3493_; size_t v___x_3494_; lean_object* v___x_3495_; 
v_sz_3493_ = lean_array_size(v_result_3484_);
v___x_3494_ = ((size_t)0ULL);
v___x_3495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__2(v___y_3483_, v_result_3484_, v_sz_3493_, v___x_3494_, v___x_3492_, v_a_3470_);
lean_dec(v_result_3484_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3513_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3498_ = v___x_3495_;
v_isShared_3499_ = v_isSharedCheck_3513_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___x_3495_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3513_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v_fst_3500_; lean_object* v_snd_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3512_; 
v_fst_3500_ = lean_ctor_get(v_a_3496_, 0);
v_snd_3501_ = lean_ctor_get(v_a_3496_, 1);
v_isSharedCheck_3512_ = !lean_is_exclusive(v_a_3496_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3503_ = v_a_3496_;
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_snd_3501_);
lean_inc(v_fst_3500_);
lean_dec(v_a_3496_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v___x_3507_; 
v___x_3505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3505_, 0, v_item_3468_);
lean_ctor_set(v___x_3505_, 1, v_snd_3501_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 1, v_fst_3500_);
lean_ctor_set(v___x_3503_, 0, v___x_3505_);
v___x_3507_ = v___x_3503_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3505_);
lean_ctor_set(v_reuseFailAlloc_3511_, 1, v_fst_3500_);
v___x_3507_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
lean_object* v___x_3509_; 
if (v_isShared_3499_ == 0)
{
lean_ctor_set(v___x_3498_, 0, v___x_3507_);
v___x_3509_ = v___x_3498_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref(v_item_3468_);
v_a_3514_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3495_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3495_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3534_; 
lean_dec(v_visited_3469_);
lean_dec_ref(v_item_3468_);
lean_dec(v_requestNo_3467_);
v_a_3527_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3529_ = v___x_3480_;
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3480_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
lean_dec_ref_known(v___x_3476_, 1);
lean_dec(v_visited_3469_);
lean_dec_ref(v_item_3468_);
lean_dec(v_requestNo_3467_);
v_a_3535_ = lean_ctor_get(v___x_3479_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3479_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3479_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
else
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
lean_dec(v_visited_3469_);
v___x_3543_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1));
v___x_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3544_, 0, v_item_3468_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
v___x_3545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
lean_ctor_set(v___x_3545_, 1, v_requestNo_3467_);
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
return v___x_3546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__2(lean_object* v___x_3547_, lean_object* v_as_3548_, size_t v_sz_3549_, size_t v_i_3550_, lean_object* v_b_3551_, lean_object* v___y_3552_){
_start:
{
uint8_t v___x_3554_; 
v___x_3554_ = lean_usize_dec_lt(v_i_3550_, v_sz_3549_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; 
lean_dec(v___x_3547_);
v___x_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3555_, 0, v_b_3551_);
return v___x_3555_;
}
else
{
lean_object* v_fst_3556_; lean_object* v_snd_3557_; lean_object* v_a_3558_; lean_object* v___x_3559_; 
v_fst_3556_ = lean_ctor_get(v_b_3551_, 0);
lean_inc(v_fst_3556_);
v_snd_3557_ = lean_ctor_get(v_b_3551_, 1);
lean_inc(v_snd_3557_);
lean_dec_ref(v_b_3551_);
v_a_3558_ = lean_array_uget_borrowed(v_as_3548_, v_i_3550_);
lean_inc(v___x_3547_);
lean_inc(v_a_3558_);
v___x_3559_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go(v_fst_3556_, v_a_3558_, v___x_3547_, v___y_3552_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v_fst_3561_; lean_object* v_snd_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3573_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
lean_inc(v_a_3560_);
lean_dec_ref_known(v___x_3559_, 1);
v_fst_3561_ = lean_ctor_get(v_a_3560_, 0);
v_snd_3562_ = lean_ctor_get(v_a_3560_, 1);
v_isSharedCheck_3573_ = !lean_is_exclusive(v_a_3560_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3564_ = v_a_3560_;
v_isShared_3565_ = v_isSharedCheck_3573_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_snd_3562_);
lean_inc(v_fst_3561_);
lean_dec(v_a_3560_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3573_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3566_; lean_object* v___x_3568_; 
v___x_3566_ = lean_array_push(v_snd_3557_, v_fst_3561_);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 1, v___x_3566_);
lean_ctor_set(v___x_3564_, 0, v_snd_3562_);
v___x_3568_ = v___x_3564_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_snd_3562_);
lean_ctor_set(v_reuseFailAlloc_3572_, 1, v___x_3566_);
v___x_3568_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
size_t v___x_3569_; size_t v___x_3570_; 
v___x_3569_ = ((size_t)1ULL);
v___x_3570_ = lean_usize_add(v_i_3550_, v___x_3569_);
v_i_3550_ = v___x_3570_;
v_b_3551_ = v___x_3568_;
goto _start;
}
}
}
else
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3581_; 
lean_dec(v_snd_3557_);
lean_dec(v___x_3547_);
v_a_3574_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3576_ = v___x_3559_;
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3559_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3579_; 
if (v_isShared_3577_ == 0)
{
v___x_3579_ = v___x_3576_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3574_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__2___boxed(lean_object* v___x_3582_, lean_object* v_as_3583_, lean_object* v_sz_3584_, lean_object* v_i_3585_, lean_object* v_b_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_){
_start:
{
size_t v_sz_boxed_3589_; size_t v_i_boxed_3590_; lean_object* v_res_3591_; 
v_sz_boxed_3589_ = lean_unbox_usize(v_sz_3584_);
lean_dec(v_sz_3584_);
v_i_boxed_3590_ = lean_unbox_usize(v_i_3585_);
lean_dec(v_i_3585_);
v_res_3591_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__2(v___x_3582_, v_as_3583_, v_sz_boxed_3589_, v_i_boxed_3590_, v_b_3586_, v___y_3587_);
lean_dec_ref(v___y_3587_);
lean_dec_ref(v_as_3583_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___boxed(lean_object* v_requestNo_3592_, lean_object* v_item_3593_, lean_object* v_visited_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go(v_requestNo_3592_, v_item_3593_, v_visited_3594_, v_a_3595_);
lean_dec_ref(v_a_3595_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0_spec__1(lean_object* v_v_3598_){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3599_ = l_Lean_Lsp_instToJsonLeanPrepareModuleHierarchyParams_toJson(v_v_3598_);
v___x_3600_ = l_Lean_Json_Structured_fromJson_x3f(v___x_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0(lean_object* v_h_3601_, lean_object* v_r_3602_){
_start:
{
lean_object* v_id_3604_; lean_object* v_method_3605_; lean_object* v_param_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3626_; 
v_id_3604_ = lean_ctor_get(v_r_3602_, 0);
v_method_3605_ = lean_ctor_get(v_r_3602_, 1);
v_param_3606_ = lean_ctor_get(v_r_3602_, 2);
v_isSharedCheck_3626_ = !lean_is_exclusive(v_r_3602_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3608_ = v_r_3602_;
v_isShared_3609_ = v_isSharedCheck_3626_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_param_3606_);
lean_inc(v_method_3605_);
lean_inc(v_id_3604_);
lean_dec(v_r_3602_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3626_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___y_3611_; lean_object* v___x_3616_; 
v___x_3616_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0_spec__1(v_param_3606_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v___x_3617_; 
lean_dec_ref_known(v___x_3616_, 1);
v___x_3617_ = lean_box(0);
v___y_3611_ = v___x_3617_;
goto v___jp_3610_;
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
v_a_3618_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3616_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3616_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
v___y_3611_ = v___x_3623_;
goto v___jp_3610_;
}
}
}
v___jp_3610_:
{
lean_object* v___x_3613_; 
if (v_isShared_3609_ == 0)
{
lean_ctor_set(v___x_3608_, 2, v___y_3611_);
v___x_3613_ = v___x_3608_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_id_3604_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v_method_3605_);
lean_ctor_set(v_reuseFailAlloc_3615_, 2, v___y_3611_);
v___x_3613_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
lean_object* v___x_3614_; 
v___x_3614_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_3601_, v___x_3613_);
return v___x_3614_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0___boxed(lean_object* v_h_3627_, lean_object* v_r_3628_, lean_object* v_a_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0(v_h_3627_, v_r_3628_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0(lean_object* v_r_3631_, lean_object* v_a_3632_){
_start:
{
lean_object* v___x_3634_; lean_object* v_a_3635_; lean_object* v___x_3636_; 
v___x_3634_ = l_Lean_Lsp_Ipc_stdin(v_a_3632_);
v_a_3635_ = lean_ctor_get(v___x_3634_, 0);
lean_inc(v_a_3635_);
lean_dec_ref(v___x_3634_);
v___x_3636_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0_spec__0(v_a_3635_, v_r_3631_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0___boxed(lean_object* v_r_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0(v_r_3637_, v_a_3638_);
lean_dec_ref(v_a_3638_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2(lean_object* v_x_3643_){
_start:
{
if (lean_obj_tag(v_x_3643_) == 0)
{
lean_object* v___x_3644_; 
v___x_3644_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2___closed__0));
return v___x_3644_;
}
else
{
lean_object* v___x_3645_; 
v___x_3645_ = l_Lean_Lsp_instFromJsonLeanModule_fromJson(v_x_3643_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3645_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3662_; 
v_a_3654_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3656_ = v___x_3645_;
v_isShared_3657_ = v_isSharedCheck_3662_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3645_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3662_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3658_; lean_object* v___x_3660_; 
v___x_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3658_, 0, v_a_3654_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v___x_3658_);
v___x_3660_ = v___x_3656_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v___x_3658_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1(lean_object* v_expectedID_3663_, lean_object* v_a_3664_){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Lean_Lsp_Ipc_stdout(v_a_3664_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3810_; 
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3669_ = v___x_3666_;
v_isShared_3670_ = v_isSharedCheck_3810_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3666_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3810_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3671_; 
v___x_3671_ = l_Lean_IO_FS_Stream_readLspMessage(v_a_3667_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3801_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3674_ = v___x_3671_;
v_isShared_3675_ = v_isSharedCheck_3801_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3671_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3801_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___y_3677_; lean_object* v___y_3678_; 
switch(lean_obj_tag(v_a_3672_))
{
case 2:
{
lean_object* v_id_3684_; lean_object* v_result_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3729_; 
v_id_3684_ = lean_ctor_get(v_a_3672_, 0);
v_result_3685_ = lean_ctor_get(v_a_3672_, 1);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_a_3672_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3687_ = v_a_3672_;
v_isShared_3688_ = v_isSharedCheck_3729_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_result_3685_);
lean_inc(v_id_3684_);
lean_dec(v_a_3672_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3729_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
uint8_t v___x_3689_; 
v___x_3689_ = l_Lean_JsonRpc_instBEqRequestID_beq(v_id_3684_, v_expectedID_3663_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; lean_object* v___y_3692_; 
lean_del_object(v___x_3687_);
lean_dec(v_result_3685_);
lean_del_object(v___x_3669_);
v___x_3690_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__6));
switch(lean_obj_tag(v_expectedID_3663_))
{
case 0:
{
lean_object* v_s_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v_s_3703_ = lean_ctor_get(v_expectedID_3663_, 0);
lean_inc_ref(v_s_3703_);
lean_dec_ref_known(v_expectedID_3663_, 1);
v___x_3704_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_3705_ = lean_string_append(v___x_3704_, v_s_3703_);
lean_dec_ref(v_s_3703_);
v___x_3706_ = lean_string_append(v___x_3705_, v___x_3704_);
v___y_3692_ = v___x_3706_;
goto v___jp_3691_;
}
case 1:
{
lean_object* v_n_3707_; lean_object* v___x_3708_; 
v_n_3707_ = lean_ctor_get(v_expectedID_3663_, 0);
lean_inc_ref(v_n_3707_);
lean_dec_ref_known(v_expectedID_3663_, 1);
v___x_3708_ = l_Lean_JsonNumber_toString(v_n_3707_);
v___y_3692_ = v___x_3708_;
goto v___jp_3691_;
}
default: 
{
lean_object* v___x_3709_; 
v___x_3709_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_3692_ = v___x_3709_;
goto v___jp_3691_;
}
}
v___jp_3691_:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3693_ = lean_string_append(v___x_3690_, v___y_3692_);
lean_dec_ref(v___y_3692_);
v___x_3694_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__7));
v___x_3695_ = lean_string_append(v___x_3693_, v___x_3694_);
switch(lean_obj_tag(v_id_3684_))
{
case 0:
{
lean_object* v_s_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; 
v_s_3696_ = lean_ctor_get(v_id_3684_, 0);
lean_inc_ref(v_s_3696_);
lean_dec_ref_known(v_id_3684_, 1);
v___x_3697_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__8));
v___x_3698_ = lean_string_append(v___x_3697_, v_s_3696_);
lean_dec_ref(v_s_3696_);
v___x_3699_ = lean_string_append(v___x_3698_, v___x_3697_);
v___y_3677_ = v___x_3695_;
v___y_3678_ = v___x_3699_;
goto v___jp_3676_;
}
case 1:
{
lean_object* v_n_3700_; lean_object* v___x_3701_; 
v_n_3700_ = lean_ctor_get(v_id_3684_, 0);
lean_inc_ref(v_n_3700_);
lean_dec_ref_known(v_id_3684_, 1);
v___x_3701_ = l_Lean_JsonNumber_toString(v_n_3700_);
v___y_3677_ = v___x_3695_;
v___y_3678_ = v___x_3701_;
goto v___jp_3676_;
}
default: 
{
lean_object* v___x_3702_; 
v___x_3702_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Lsp_Ipc_shutdown_spec__3___redArg___closed__9));
v___y_3677_ = v___x_3695_;
v___y_3678_ = v___x_3702_;
goto v___jp_3676_;
}
}
}
}
else
{
lean_object* v___x_3710_; 
lean_dec(v_id_3684_);
lean_del_object(v___x_3674_);
lean_inc(v_result_3685_);
v___x_3710_ = l_Lean_Option_fromJson_x3f___at___00Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1_spec__2(v_result_3685_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_a_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3720_; 
lean_del_object(v___x_3687_);
lean_dec(v_expectedID_3663_);
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_a_3711_);
lean_dec_ref_known(v___x_3710_, 1);
v___x_3712_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__0));
v___x_3713_ = l_Lean_Json_compress(v_result_3685_);
v___x_3714_ = lean_string_append(v___x_3712_, v___x_3713_);
lean_dec_ref(v___x_3713_);
v___x_3715_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__1));
v___x_3716_ = lean_string_append(v___x_3714_, v___x_3715_);
v___x_3717_ = lean_string_append(v___x_3716_, v_a_3711_);
lean_dec(v_a_3711_);
v___x_3718_ = lean_mk_io_user_error(v___x_3717_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set_tag(v___x_3669_, 1);
lean_ctor_set(v___x_3669_, 0, v___x_3718_);
v___x_3720_ = v___x_3669_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v___x_3718_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
else
{
lean_object* v_a_3722_; lean_object* v___x_3724_; 
lean_dec(v_result_3685_);
v_a_3722_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_a_3722_);
lean_dec_ref_known(v___x_3710_, 1);
if (v_isShared_3688_ == 0)
{
lean_ctor_set_tag(v___x_3687_, 0);
lean_ctor_set(v___x_3687_, 1, v_a_3722_);
lean_ctor_set(v___x_3687_, 0, v_expectedID_3663_);
v___x_3724_ = v___x_3687_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v_expectedID_3663_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v_a_3722_);
v___x_3724_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
lean_object* v___x_3726_; 
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v___x_3724_);
v___x_3726_ = v___x_3669_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3724_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
}
case 3:
{
lean_object* v_id_3730_; uint8_t v_code_3731_; lean_object* v_message_3732_; lean_object* v_data_x3f_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___x_3765_; lean_object* v___y_3767_; 
lean_del_object(v___x_3674_);
lean_dec(v_expectedID_3663_);
v_id_3730_ = lean_ctor_get(v_a_3672_, 0);
lean_inc(v_id_3730_);
v_code_3731_ = lean_ctor_get_uint8(v_a_3672_, sizeof(void*)*3);
v_message_3732_ = lean_ctor_get(v_a_3672_, 1);
lean_inc_ref(v_message_3732_);
v_data_x3f_3733_ = lean_ctor_get(v_a_3672_, 2);
lean_inc(v_data_x3f_3733_);
lean_dec_ref_known(v_a_3672_, 3);
v___x_3734_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__2));
v___x_3735_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__7));
v___x_3765_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__11));
switch(lean_obj_tag(v_id_3730_))
{
case 0:
{
lean_object* v_s_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3790_; 
v_s_3783_ = lean_ctor_get(v_id_3730_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v_id_3730_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3785_ = v_id_3730_;
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_s_3783_);
lean_dec(v_id_3730_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3788_; 
if (v_isShared_3786_ == 0)
{
lean_ctor_set_tag(v___x_3785_, 3);
v___x_3788_ = v___x_3785_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_s_3783_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
v___y_3767_ = v___x_3788_;
goto v___jp_3766_;
}
}
}
case 1:
{
lean_object* v_n_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3798_; 
v_n_3791_ = lean_ctor_get(v_id_3730_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v_id_3730_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3793_ = v_id_3730_;
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_n_3791_);
lean_dec(v_id_3730_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
if (v_isShared_3794_ == 0)
{
lean_ctor_set_tag(v___x_3793_, 2);
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_n_3791_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
v___y_3767_ = v___x_3796_;
goto v___jp_3766_;
}
}
}
default: 
{
lean_object* v___x_3799_; 
v___x_3799_ = lean_box(0);
v___y_3767_ = v___x_3799_;
goto v___jp_3766_;
}
}
v___jp_3736_:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3763_; 
lean_inc(v___y_3740_);
lean_inc_ref(v___y_3739_);
v___x_3741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3741_, 0, v___y_3739_);
lean_ctor_set(v___x_3741_, 1, v___y_3740_);
v___x_3742_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__8));
v___x_3743_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3743_, 0, v_message_3732_);
v___x_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3742_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = lean_box(0);
v___x_3746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3744_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3741_);
lean_ctor_set(v___x_3747_, 1, v___x_3746_);
v___x_3748_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__9));
v___x_3749_ = l_Lean_Json_opt___at___00Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__2_spec__4(v___x_3748_, v_data_x3f_3733_);
lean_dec(v_data_x3f_3733_);
v___x_3750_ = l_List_appendTR___redArg(v___x_3747_, v___x_3749_);
v___x_3751_ = l_Lean_Json_mkObj(v___x_3750_);
lean_dec(v___x_3750_);
lean_inc_ref(v___y_3738_);
v___x_3752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___y_3738_);
lean_ctor_set(v___x_3752_, 1, v___x_3751_);
v___x_3753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
lean_ctor_set(v___x_3753_, 1, v___x_3745_);
v___x_3754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___y_3737_);
lean_ctor_set(v___x_3754_, 1, v___x_3753_);
v___x_3755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3735_);
lean_ctor_set(v___x_3755_, 1, v___x_3754_);
v___x_3756_ = l_Lean_Json_mkObj(v___x_3755_);
lean_dec_ref_known(v___x_3755_, 2);
v___x_3757_ = l_Lean_Json_compress(v___x_3756_);
v___x_3758_ = lean_string_append(v___x_3734_, v___x_3757_);
lean_dec_ref(v___x_3757_);
v___x_3759_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__10));
v___x_3760_ = lean_string_append(v___x_3758_, v___x_3759_);
v___x_3761_ = lean_mk_io_user_error(v___x_3760_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set_tag(v___x_3669_, 1);
lean_ctor_set(v___x_3669_, 0, v___x_3761_);
v___x_3763_ = v___x_3669_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v___x_3761_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
v___jp_3766_:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3765_);
lean_ctor_set(v___x_3768_, 1, v___y_3767_);
v___x_3769_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__12));
v___x_3770_ = ((lean_object*)(l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__13));
switch(v_code_3731_)
{
case 0:
{
lean_object* v___x_3771_; 
v___x_3771_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__17);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3771_;
goto v___jp_3736_;
}
case 1:
{
lean_object* v___x_3772_; 
v___x_3772_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__21);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3772_;
goto v___jp_3736_;
}
case 2:
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__25);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3773_;
goto v___jp_3736_;
}
case 3:
{
lean_object* v___x_3774_; 
v___x_3774_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__29);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3774_;
goto v___jp_3736_;
}
case 4:
{
lean_object* v___x_3775_; 
v___x_3775_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__33);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3775_;
goto v___jp_3736_;
}
case 5:
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__37);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3776_;
goto v___jp_3736_;
}
case 6:
{
lean_object* v___x_3777_; 
v___x_3777_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__41);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3777_;
goto v___jp_3736_;
}
case 7:
{
lean_object* v___x_3778_; 
v___x_3778_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__45);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3778_;
goto v___jp_3736_;
}
case 8:
{
lean_object* v___x_3779_; 
v___x_3779_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__49);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3779_;
goto v___jp_3736_;
}
case 9:
{
lean_object* v___x_3780_; 
v___x_3780_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__53);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3780_;
goto v___jp_3736_;
}
case 10:
{
lean_object* v___x_3781_; 
v___x_3781_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__57);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3781_;
goto v___jp_3736_;
}
default: 
{
lean_object* v___x_3782_; 
v___x_3782_ = lean_obj_once(&l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61, &l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61_once, _init_l_Lean_Lsp_Ipc_readResponseAs___redArg___closed__61);
v___y_3737_ = v___x_3768_;
v___y_3738_ = v___x_3769_;
v___y_3739_ = v___x_3770_;
v___y_3740_ = v___x_3782_;
goto v___jp_3736_;
}
}
}
}
default: 
{
lean_del_object(v___x_3674_);
lean_dec(v_a_3672_);
lean_del_object(v___x_3669_);
goto _start;
}
}
v___jp_3676_:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3682_; 
v___x_3679_ = lean_string_append(v___y_3677_, v___y_3678_);
lean_dec_ref(v___y_3678_);
v___x_3680_ = lean_mk_io_user_error(v___x_3679_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set_tag(v___x_3674_, 1);
lean_ctor_set(v___x_3674_, 0, v___x_3680_);
v___x_3682_ = v___x_3674_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v___x_3680_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_del_object(v___x_3669_);
lean_dec(v_expectedID_3663_);
v_a_3802_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3671_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3671_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3818_; 
lean_dec(v_expectedID_3663_);
v_a_3811_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3813_ = v___x_3666_;
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_dec(v___x_3666_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3811_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1___boxed(lean_object* v_expectedID_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1(v_expectedID_3819_, v_a_3820_);
lean_dec_ref(v_a_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImports(lean_object* v_requestNo_3827_, lean_object* v_uri_3828_, lean_object* v_a_3829_){
_start:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
lean_inc(v_requestNo_3827_);
v___x_3831_ = l_Lean_JsonNumber_fromNat(v_requestNo_3827_);
v___x_3832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3831_);
v___x_3833_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__0));
lean_inc_ref(v___x_3832_);
v___x_3834_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3832_);
lean_ctor_set(v___x_3834_, 1, v___x_3833_);
lean_ctor_set(v___x_3834_, 2, v_uri_3828_);
v___x_3835_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0(v___x_3834_, v_a_3829_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v___x_3836_; 
lean_dec_ref_known(v___x_3835_, 1);
v___x_3836_ = l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1(v___x_3832_, v_a_3829_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3895_; 
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3839_ = v___x_3836_;
v_isShared_3840_ = v_isSharedCheck_3895_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3836_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3895_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v_result_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3893_; 
v_result_3841_ = lean_ctor_get(v_a_3837_, 1);
v_isSharedCheck_3893_ = !lean_is_exclusive(v_a_3837_);
if (v_isSharedCheck_3893_ == 0)
{
lean_object* v_unused_3894_; 
v_unused_3894_ = lean_ctor_get(v_a_3837_, 0);
lean_dec(v_unused_3894_);
v___x_3843_ = v_a_3837_;
v_isShared_3844_ = v_isSharedCheck_3893_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_result_3841_);
lean_dec(v_a_3837_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3893_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3845_ = lean_unsigned_to_nat(1u);
v___x_3846_ = lean_nat_add(v_requestNo_3827_, v___x_3845_);
lean_dec(v_requestNo_3827_);
if (lean_obj_tag(v_result_3841_) == 1)
{
lean_object* v_val_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3885_; 
lean_del_object(v___x_3839_);
v_val_3847_ = lean_ctor_get(v_result_3841_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v_result_3841_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3849_ = v_result_3841_;
v_isShared_3850_ = v_isSharedCheck_3885_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_val_3847_);
lean_dec(v_result_3841_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3885_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3851_; lean_object* v___x_3853_; 
v___x_3851_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__1));
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 1, v___x_3851_);
lean_ctor_set(v___x_3843_, 0, v_val_3847_);
v___x_3853_ = v___x_3843_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_val_3847_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3854_ = lean_box(1);
v___x_3855_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go(v___x_3846_, v___x_3853_, v___x_3854_, v_a_3829_);
if (lean_obj_tag(v___x_3855_) == 0)
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3875_; 
v_a_3856_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3858_ = v___x_3855_;
v_isShared_3859_ = v_isSharedCheck_3875_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3855_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3875_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v_fst_3860_; lean_object* v_snd_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3874_; 
v_fst_3860_ = lean_ctor_get(v_a_3856_, 0);
v_snd_3861_ = lean_ctor_get(v_a_3856_, 1);
v_isSharedCheck_3874_ = !lean_is_exclusive(v_a_3856_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3863_ = v_a_3856_;
v_isShared_3864_ = v_isSharedCheck_3874_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_snd_3861_);
lean_inc(v_fst_3860_);
lean_dec(v_a_3856_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3874_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3866_; 
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v_fst_3860_);
v___x_3866_ = v___x_3849_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_fst_3860_);
v___x_3866_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
lean_object* v___x_3868_; 
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 0, v___x_3866_);
v___x_3868_ = v___x_3863_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v___x_3866_);
lean_ctor_set(v_reuseFailAlloc_3872_, 1, v_snd_3861_);
v___x_3868_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
lean_object* v___x_3870_; 
if (v_isShared_3859_ == 0)
{
lean_ctor_set(v___x_3858_, 0, v___x_3868_);
v___x_3870_ = v___x_3858_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v___x_3868_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
}
}
}
else
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3883_; 
lean_del_object(v___x_3849_);
v_a_3876_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3878_ = v___x_3855_;
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3855_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3879_ == 0)
{
v___x_3881_ = v___x_3878_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3876_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
}
}
}
else
{
lean_object* v___x_3886_; lean_object* v___x_3888_; 
lean_dec(v_result_3841_);
v___x_3886_ = lean_box(0);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 1, v___x_3846_);
lean_ctor_set(v___x_3843_, 0, v___x_3886_);
v___x_3888_ = v___x_3843_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v___x_3886_);
lean_ctor_set(v_reuseFailAlloc_3892_, 1, v___x_3846_);
v___x_3888_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
lean_object* v___x_3890_; 
if (v_isShared_3840_ == 0)
{
lean_ctor_set(v___x_3839_, 0, v___x_3888_);
v___x_3890_ = v___x_3839_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v___x_3888_);
v___x_3890_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
return v___x_3890_;
}
}
}
}
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3903_; 
lean_dec(v_requestNo_3827_);
v_a_3896_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3898_ = v___x_3836_;
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3836_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3901_; 
if (v_isShared_3899_ == 0)
{
v___x_3901_ = v___x_3898_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3896_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
lean_dec_ref_known(v___x_3832_, 1);
lean_dec(v_requestNo_3827_);
v_a_3904_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3835_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3835_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImports___boxed(lean_object* v_requestNo_3912_, lean_object* v_uri_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_Lsp_Ipc_expandModuleHierarchyImports(v_requestNo_3912_, v_uri_3913_, v_a_3914_);
lean_dec_ref(v_a_3914_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0_spec__1(lean_object* v_v_3917_){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; 
v___x_3918_ = l_Lean_Lsp_instToJsonLeanModuleHierarchyImportedByParams_toJson(v_v_3917_);
v___x_3919_ = l_Lean_Json_Structured_fromJson_x3f(v___x_3918_);
return v___x_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0_spec__1___boxed(lean_object* v_v_3920_){
_start:
{
lean_object* v_res_3921_; 
v_res_3921_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0_spec__1(v_v_3920_);
lean_dec_ref(v_v_3920_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0(lean_object* v_h_3922_, lean_object* v_r_3923_){
_start:
{
lean_object* v_id_3925_; lean_object* v_method_3926_; lean_object* v_param_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3947_; 
v_id_3925_ = lean_ctor_get(v_r_3923_, 0);
v_method_3926_ = lean_ctor_get(v_r_3923_, 1);
v_param_3927_ = lean_ctor_get(v_r_3923_, 2);
v_isSharedCheck_3947_ = !lean_is_exclusive(v_r_3923_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3929_ = v_r_3923_;
v_isShared_3930_ = v_isSharedCheck_3947_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_param_3927_);
lean_inc(v_method_3926_);
lean_inc(v_id_3925_);
lean_dec(v_r_3923_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3947_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___y_3932_; lean_object* v___x_3937_; 
v___x_3937_ = l_Lean_Json_toStructured_x3f___at___00Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0_spec__1(v_param_3927_);
lean_dec(v_param_3927_);
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v___x_3938_; 
lean_dec_ref_known(v___x_3937_, 1);
v___x_3938_ = lean_box(0);
v___y_3932_ = v___x_3938_;
goto v___jp_3931_;
}
else
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3946_; 
v_a_3939_ = lean_ctor_get(v___x_3937_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3941_ = v___x_3937_;
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3937_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3944_; 
if (v_isShared_3942_ == 0)
{
v___x_3944_ = v___x_3941_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3939_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
v___y_3932_ = v___x_3944_;
goto v___jp_3931_;
}
}
}
v___jp_3931_:
{
lean_object* v___x_3934_; 
if (v_isShared_3930_ == 0)
{
lean_ctor_set(v___x_3929_, 2, v___y_3932_);
v___x_3934_ = v___x_3929_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_id_3925_);
lean_ctor_set(v_reuseFailAlloc_3936_, 1, v_method_3926_);
lean_ctor_set(v_reuseFailAlloc_3936_, 2, v___y_3932_);
v___x_3934_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
lean_object* v___x_3935_; 
v___x_3935_ = l_Lean_IO_FS_Stream_writeLspMessage(v_h_3922_, v___x_3934_);
return v___x_3935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0___boxed(lean_object* v_h_3948_, lean_object* v_r_3949_, lean_object* v_a_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0(v_h_3948_, v_r_3949_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0(lean_object* v_r_3952_, lean_object* v_a_3953_){
_start:
{
lean_object* v___x_3955_; lean_object* v_a_3956_; lean_object* v___x_3957_; 
v___x_3955_ = l_Lean_Lsp_Ipc_stdin(v_a_3953_);
v_a_3956_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_a_3956_);
lean_dec_ref(v___x_3955_);
v___x_3957_ = l_Lean_IO_FS_Stream_writeLspRequest___at___00Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0_spec__0(v_a_3956_, v_r_3952_);
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0___boxed(lean_object* v_r_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0(v_r_3958_, v_a_3959_);
lean_dec_ref(v_a_3959_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go(lean_object* v_requestNo_3963_, lean_object* v_item_3964_, lean_object* v_visited_3965_, lean_object* v_a_3966_){
_start:
{
lean_object* v_module_3968_; lean_object* v_name_3969_; uint8_t v___x_3970_; 
v_module_3968_ = lean_ctor_get(v_item_3964_, 0);
v_name_3969_ = lean_ctor_get(v_module_3968_, 0);
v___x_3970_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__0___redArg(v_name_3969_, v_visited_3965_);
if (v___x_3970_ == 0)
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
lean_inc(v_requestNo_3963_);
v___x_3971_ = l_Lean_JsonNumber_fromNat(v_requestNo_3963_);
v___x_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3971_);
v___x_3973_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go___closed__0));
lean_inc_ref(v_module_3968_);
lean_inc_ref(v___x_3972_);
v___x_3974_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3972_);
lean_ctor_set(v___x_3974_, 1, v___x_3973_);
lean_ctor_set(v___x_3974_, 2, v_module_3968_);
v___x_3975_ = l_Lean_Lsp_Ipc_writeRequest___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__0(v___x_3974_, v_a_3966_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v___x_3976_; 
lean_dec_ref_known(v___x_3975_, 1);
v___x_3976_ = l_Lean_Lsp_Ipc_readResponseAs___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go_spec__1(v___x_3972_, v_a_3966_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; lean_object* v___y_3979_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
if (v___x_3970_ == 0)
{
lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4021_ = lean_box(0);
lean_inc_ref(v_name_3969_);
v___x_4022_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandIncomingCallHierarchy_go_spec__4___redArg(v_name_3969_, v___x_4021_, v_visited_3965_);
v___y_3979_ = v___x_4022_;
goto v___jp_3978_;
}
else
{
v___y_3979_ = v_visited_3965_;
goto v___jp_3978_;
}
v___jp_3978_:
{
lean_object* v_result_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_4019_; 
v_result_3980_ = lean_ctor_get(v_a_3977_, 1);
v_isSharedCheck_4019_ = !lean_is_exclusive(v_a_3977_);
if (v_isSharedCheck_4019_ == 0)
{
lean_object* v_unused_4020_; 
v_unused_4020_ = lean_ctor_get(v_a_3977_, 0);
lean_dec(v_unused_4020_);
v___x_3982_ = v_a_3977_;
v_isShared_3983_ = v_isSharedCheck_4019_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_result_3980_);
lean_dec(v_a_3977_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_4019_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3988_; 
v___x_3984_ = lean_unsigned_to_nat(1u);
v___x_3985_ = lean_nat_add(v_requestNo_3963_, v___x_3984_);
lean_dec(v_requestNo_3963_);
v___x_3986_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1));
if (v_isShared_3983_ == 0)
{
lean_ctor_set(v___x_3982_, 1, v___x_3986_);
lean_ctor_set(v___x_3982_, 0, v___x_3985_);
v___x_3988_ = v___x_3982_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v___x_3985_);
lean_ctor_set(v_reuseFailAlloc_4018_, 1, v___x_3986_);
v___x_3988_ = v_reuseFailAlloc_4018_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
size_t v_sz_3989_; size_t v___x_3990_; lean_object* v___x_3991_; 
v_sz_3989_ = lean_array_size(v_result_3980_);
v___x_3990_ = ((size_t)0ULL);
v___x_3991_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__1(v___y_3979_, v_result_3980_, v_sz_3989_, v___x_3990_, v___x_3988_, v_a_3966_);
lean_dec(v_result_3980_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4009_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_3994_ = v___x_3991_;
v_isShared_3995_ = v_isSharedCheck_4009_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3991_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4009_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v_fst_3996_; lean_object* v_snd_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4008_; 
v_fst_3996_ = lean_ctor_get(v_a_3992_, 0);
v_snd_3997_ = lean_ctor_get(v_a_3992_, 1);
v_isSharedCheck_4008_ = !lean_is_exclusive(v_a_3992_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_3999_ = v_a_3992_;
v_isShared_4000_ = v_isSharedCheck_4008_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_snd_3997_);
lean_inc(v_fst_3996_);
lean_dec(v_a_3992_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4008_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4001_; lean_object* v___x_4003_; 
v___x_4001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4001_, 0, v_item_3964_);
lean_ctor_set(v___x_4001_, 1, v_snd_3997_);
if (v_isShared_4000_ == 0)
{
lean_ctor_set(v___x_3999_, 1, v_fst_3996_);
lean_ctor_set(v___x_3999_, 0, v___x_4001_);
v___x_4003_ = v___x_3999_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v___x_4001_);
lean_ctor_set(v_reuseFailAlloc_4007_, 1, v_fst_3996_);
v___x_4003_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
lean_object* v___x_4005_; 
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 0, v___x_4003_);
v___x_4005_ = v___x_3994_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v___x_4003_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
return v___x_4005_;
}
}
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_dec_ref(v_item_3964_);
v_a_4010_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_3991_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3991_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4030_; 
lean_dec(v_visited_3965_);
lean_dec_ref(v_item_3964_);
lean_dec(v_requestNo_3963_);
v_a_4023_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4025_ = v___x_3976_;
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v___x_3976_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v___x_4028_; 
if (v_isShared_4026_ == 0)
{
v___x_4028_ = v___x_4025_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v_a_4023_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
}
}
else
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4038_; 
lean_dec_ref_known(v___x_3972_, 1);
lean_dec(v_visited_3965_);
lean_dec_ref(v_item_3964_);
lean_dec(v_requestNo_3963_);
v_a_4031_ = lean_ctor_get(v___x_3975_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_3975_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_3975_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_3975_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4036_; 
if (v_isShared_4034_ == 0)
{
v___x_4036_ = v___x_4033_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_a_4031_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
else
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; 
lean_dec(v_visited_3965_);
v___x_4039_ = ((lean_object*)(l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImports_go___closed__1));
v___x_4040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4040_, 0, v_item_3964_);
lean_ctor_set(v___x_4040_, 1, v___x_4039_);
v___x_4041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4041_, 0, v___x_4040_);
lean_ctor_set(v___x_4041_, 1, v_requestNo_3963_);
v___x_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4041_);
return v___x_4042_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__1(lean_object* v___x_4043_, lean_object* v_as_4044_, size_t v_sz_4045_, size_t v_i_4046_, lean_object* v_b_4047_, lean_object* v___y_4048_){
_start:
{
uint8_t v___x_4050_; 
v___x_4050_ = lean_usize_dec_lt(v_i_4046_, v_sz_4045_);
if (v___x_4050_ == 0)
{
lean_object* v___x_4051_; 
lean_dec(v___x_4043_);
v___x_4051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4051_, 0, v_b_4047_);
return v___x_4051_;
}
else
{
lean_object* v_fst_4052_; lean_object* v_snd_4053_; lean_object* v_a_4054_; lean_object* v___x_4055_; 
v_fst_4052_ = lean_ctor_get(v_b_4047_, 0);
lean_inc(v_fst_4052_);
v_snd_4053_ = lean_ctor_get(v_b_4047_, 1);
lean_inc(v_snd_4053_);
lean_dec_ref(v_b_4047_);
v_a_4054_ = lean_array_uget_borrowed(v_as_4044_, v_i_4046_);
lean_inc(v___x_4043_);
lean_inc(v_a_4054_);
v___x_4055_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go(v_fst_4052_, v_a_4054_, v___x_4043_, v___y_4048_);
if (lean_obj_tag(v___x_4055_) == 0)
{
lean_object* v_a_4056_; lean_object* v_fst_4057_; lean_object* v_snd_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4069_; 
v_a_4056_ = lean_ctor_get(v___x_4055_, 0);
lean_inc(v_a_4056_);
lean_dec_ref_known(v___x_4055_, 1);
v_fst_4057_ = lean_ctor_get(v_a_4056_, 0);
v_snd_4058_ = lean_ctor_get(v_a_4056_, 1);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_a_4056_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4060_ = v_a_4056_;
v_isShared_4061_ = v_isSharedCheck_4069_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_snd_4058_);
lean_inc(v_fst_4057_);
lean_dec(v_a_4056_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4069_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4062_; lean_object* v___x_4064_; 
v___x_4062_ = lean_array_push(v_snd_4053_, v_fst_4057_);
if (v_isShared_4061_ == 0)
{
lean_ctor_set(v___x_4060_, 1, v___x_4062_);
lean_ctor_set(v___x_4060_, 0, v_snd_4058_);
v___x_4064_ = v___x_4060_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_snd_4058_);
lean_ctor_set(v_reuseFailAlloc_4068_, 1, v___x_4062_);
v___x_4064_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
size_t v___x_4065_; size_t v___x_4066_; 
v___x_4065_ = ((size_t)1ULL);
v___x_4066_ = lean_usize_add(v_i_4046_, v___x_4065_);
v_i_4046_ = v___x_4066_;
v_b_4047_ = v___x_4064_;
goto _start;
}
}
}
else
{
lean_object* v_a_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4077_; 
lean_dec(v_snd_4053_);
lean_dec(v___x_4043_);
v_a_4070_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4077_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4077_ == 0)
{
v___x_4072_ = v___x_4055_;
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_a_4070_);
lean_dec(v___x_4055_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v___x_4075_; 
if (v_isShared_4073_ == 0)
{
v___x_4075_ = v___x_4072_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v_a_4070_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__1___boxed(lean_object* v___x_4078_, lean_object* v_as_4079_, lean_object* v_sz_4080_, lean_object* v_i_4081_, lean_object* v_b_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
size_t v_sz_boxed_4085_; size_t v_i_boxed_4086_; lean_object* v_res_4087_; 
v_sz_boxed_4085_ = lean_unbox_usize(v_sz_4080_);
lean_dec(v_sz_4080_);
v_i_boxed_4086_ = lean_unbox_usize(v_i_4081_);
lean_dec(v_i_4081_);
v_res_4087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go_spec__1(v___x_4078_, v_as_4079_, v_sz_boxed_4085_, v_i_boxed_4086_, v_b_4082_, v___y_4083_);
lean_dec_ref(v___y_4083_);
lean_dec_ref(v_as_4079_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go___boxed(lean_object* v_requestNo_4088_, lean_object* v_item_4089_, lean_object* v_visited_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_){
_start:
{
lean_object* v_res_4093_; 
v_res_4093_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go(v_requestNo_4088_, v_item_4089_, v_visited_4090_, v_a_4091_);
lean_dec_ref(v_a_4091_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImportedBy(lean_object* v_requestNo_4094_, lean_object* v_uri_4095_, lean_object* v_a_4096_){
_start:
{
lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
lean_inc(v_requestNo_4094_);
v___x_4098_ = l_Lean_JsonNumber_fromNat(v_requestNo_4094_);
v___x_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4098_);
v___x_4100_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__0));
lean_inc_ref(v___x_4099_);
v___x_4101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4099_);
lean_ctor_set(v___x_4101_, 1, v___x_4100_);
lean_ctor_set(v___x_4101_, 2, v_uri_4095_);
v___x_4102_ = l_Lean_Lsp_Ipc_writeRequest___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__0(v___x_4101_, v_a_4096_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v___x_4103_; 
lean_dec_ref_known(v___x_4102_, 1);
v___x_4103_ = l_Lean_Lsp_Ipc_readResponseAs___at___00Lean_Lsp_Ipc_expandModuleHierarchyImports_spec__1(v___x_4099_, v_a_4096_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4162_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4162_ == 0)
{
v___x_4106_ = v___x_4103_;
v_isShared_4107_ = v_isSharedCheck_4162_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v___x_4103_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4162_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v_result_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4160_; 
v_result_4108_ = lean_ctor_get(v_a_4104_, 1);
v_isSharedCheck_4160_ = !lean_is_exclusive(v_a_4104_);
if (v_isSharedCheck_4160_ == 0)
{
lean_object* v_unused_4161_; 
v_unused_4161_ = lean_ctor_get(v_a_4104_, 0);
lean_dec(v_unused_4161_);
v___x_4110_ = v_a_4104_;
v_isShared_4111_ = v_isSharedCheck_4160_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_result_4108_);
lean_dec(v_a_4104_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4160_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4112_ = lean_unsigned_to_nat(1u);
v___x_4113_ = lean_nat_add(v_requestNo_4094_, v___x_4112_);
lean_dec(v_requestNo_4094_);
if (lean_obj_tag(v_result_4108_) == 1)
{
lean_object* v_val_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4152_; 
lean_del_object(v___x_4106_);
v_val_4114_ = lean_ctor_get(v_result_4108_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v_result_4108_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4116_ = v_result_4108_;
v_isShared_4117_ = v_isSharedCheck_4152_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_val_4114_);
lean_dec(v_result_4108_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4152_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4118_; lean_object* v___x_4120_; 
v___x_4118_ = ((lean_object*)(l_Lean_Lsp_Ipc_expandModuleHierarchyImports___closed__1));
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 1, v___x_4118_);
lean_ctor_set(v___x_4110_, 0, v_val_4114_);
v___x_4120_ = v___x_4110_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_val_4114_);
lean_ctor_set(v_reuseFailAlloc_4151_, 1, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4121_ = lean_box(1);
v___x_4122_ = l___private_Lean_Data_Lsp_Ipc_0__Lean_Lsp_Ipc_expandModuleHierarchyImportedBy_go(v___x_4113_, v___x_4120_, v___x_4121_, v_a_4096_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4142_; 
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4125_ = v___x_4122_;
v_isShared_4126_ = v_isSharedCheck_4142_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4122_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4142_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v_fst_4127_; lean_object* v_snd_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4141_; 
v_fst_4127_ = lean_ctor_get(v_a_4123_, 0);
v_snd_4128_ = lean_ctor_get(v_a_4123_, 1);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_a_4123_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4130_ = v_a_4123_;
v_isShared_4131_ = v_isSharedCheck_4141_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_snd_4128_);
lean_inc(v_fst_4127_);
lean_dec(v_a_4123_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4141_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4133_; 
if (v_isShared_4117_ == 0)
{
lean_ctor_set(v___x_4116_, 0, v_fst_4127_);
v___x_4133_ = v___x_4116_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_fst_4127_);
v___x_4133_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
lean_object* v___x_4135_; 
if (v_isShared_4131_ == 0)
{
lean_ctor_set(v___x_4130_, 0, v___x_4133_);
v___x_4135_ = v___x_4130_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4133_);
lean_ctor_set(v_reuseFailAlloc_4139_, 1, v_snd_4128_);
v___x_4135_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
lean_object* v___x_4137_; 
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 0, v___x_4135_);
v___x_4137_ = v___x_4125_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v___x_4135_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
lean_del_object(v___x_4116_);
v_a_4143_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4122_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4122_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
}
}
else
{
lean_object* v___x_4153_; lean_object* v___x_4155_; 
lean_dec(v_result_4108_);
v___x_4153_ = lean_box(0);
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 1, v___x_4113_);
lean_ctor_set(v___x_4110_, 0, v___x_4153_);
v___x_4155_ = v___x_4110_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v___x_4153_);
lean_ctor_set(v_reuseFailAlloc_4159_, 1, v___x_4113_);
v___x_4155_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
lean_object* v___x_4157_; 
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 0, v___x_4155_);
v___x_4157_ = v___x_4106_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v___x_4155_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4170_; 
lean_dec(v_requestNo_4094_);
v_a_4163_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4165_ = v___x_4103_;
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_a_4163_);
lean_dec(v___x_4103_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
lean_object* v___x_4168_; 
if (v_isShared_4166_ == 0)
{
v___x_4168_ = v___x_4165_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4163_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4178_; 
lean_dec_ref_known(v___x_4099_, 1);
lean_dec(v_requestNo_4094_);
v_a_4171_ = lean_ctor_get(v___x_4102_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4102_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4173_ = v___x_4102_;
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v___x_4102_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4174_ == 0)
{
v___x_4176_ = v___x_4173_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_expandModuleHierarchyImportedBy___boxed(lean_object* v_requestNo_4179_, lean_object* v_uri_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lean_Lsp_Ipc_expandModuleHierarchyImportedBy(v_requestNo_4179_, v_uri_4180_, v_a_4181_);
lean_dec_ref(v_a_4181_);
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___redArg(lean_object* v_lean_4186_, lean_object* v_args_4187_, lean_object* v_test_4188_){
_start:
{
lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; uint8_t v___x_4193_; uint8_t v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v___x_4190_ = ((lean_object*)(l_Lean_Lsp_Ipc_ipcStdioConfig));
v___x_4191_ = lean_box(0);
v___x_4192_ = ((lean_object*)(l_Lean_Lsp_Ipc_runWith___redArg___closed__0));
v___x_4193_ = 1;
v___x_4194_ = 0;
v___x_4195_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_4195_, 0, v___x_4190_);
lean_ctor_set(v___x_4195_, 1, v_lean_4186_);
lean_ctor_set(v___x_4195_, 2, v_args_4187_);
lean_ctor_set(v___x_4195_, 3, v___x_4191_);
lean_ctor_set(v___x_4195_, 4, v___x_4192_);
lean_ctor_set_uint8(v___x_4195_, sizeof(void*)*5, v___x_4193_);
lean_ctor_set_uint8(v___x_4195_, sizeof(void*)*5 + 1, v___x_4194_);
v___x_4196_ = lean_io_process_spawn(v___x_4195_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; lean_object* v___x_4198_; 
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4197_);
lean_dec_ref_known(v___x_4196_, 1);
v___x_4198_ = lean_apply_2(v_test_4188_, v_a_4197_, lean_box(0));
return v___x_4198_;
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
lean_dec_ref(v_test_4188_);
v_a_4199_ = lean_ctor_get(v___x_4196_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4196_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4196_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___redArg___boxed(lean_object* v_lean_4207_, lean_object* v_args_4208_, lean_object* v_test_4209_, lean_object* v_a_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_Lean_Lsp_Ipc_runWith___redArg(v_lean_4207_, v_args_4208_, v_test_4209_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith(lean_object* v_00_u03b1_4212_, lean_object* v_lean_4213_, lean_object* v_args_4214_, lean_object* v_test_4215_){
_start:
{
lean_object* v___x_4217_; 
v___x_4217_ = l_Lean_Lsp_Ipc_runWith___redArg(v_lean_4213_, v_args_4214_, v_test_4215_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Ipc_runWith___boxed(lean_object* v_00_u03b1_4218_, lean_object* v_lean_4219_, lean_object* v_args_4220_, lean_object* v_test_4221_, lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l_Lean_Lsp_Ipc_runWith(v_00_u03b1_4218_, v_lean_4219_, v_args_4220_, v_test_4221_);
return v_res_4223_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Communication(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_Diagnostics(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_Extra(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Sort_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_LanguageFeatures(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_Ipc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Communication(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Sort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_LanguageFeatures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_Ipc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Communication(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_Diagnostics(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_Extra(uint8_t builtin);
lean_object* initialize_Init_Data_List_Sort_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_LanguageFeatures(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Ipc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Communication(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Diagnostics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Sort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_LanguageFeatures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Ipc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_Ipc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_Ipc(builtin);
}
#ifdef __cplusplus
}
#endif
